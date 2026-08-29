#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void alEvtqFlushType(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003E6F0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8003E6F4: sw          $s3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r19;
    // 0x8003E6F8: sll         $s3, $a1, 16
    ctx->r19 = S32(ctx->r5 << 16);
    // 0x8003E6FC: sw          $s2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r18;
    // 0x8003E700: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x8003E704: sra         $t6, $s3, 16
    ctx->r14 = S32(SIGNED(ctx->r19) >> 16);
    // 0x8003E708: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8003E70C: or          $s3, $t6, $zero
    ctx->r19 = ctx->r14 | 0;
    // 0x8003E710: sw          $s1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r17;
    // 0x8003E714: sw          $s0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r16;
    // 0x8003E718: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8003E71C: jal         0x80031F70
    // 0x8003E720: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    osSetIntMask_recomp(rdram, ctx);
        goto after_0;
    // 0x8003E720: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_0:
    // 0x8003E724: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8003E728: lw          $s0, 0x8($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X8);
    // 0x8003E72C: beq         $s0, $zero, L_8003E778
    if (ctx->r16 == 0) {
        // 0x8003E730: nop
    
            goto L_8003E778;
    }
    // 0x8003E730: nop

L_8003E734:
    // 0x8003E734: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x8003E738: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8003E73C: bne         $s3, $t7, L_8003E770
    if (ctx->r19 != ctx->r15) {
        // 0x8003E740: nop
    
            goto L_8003E770;
    }
    // 0x8003E740: nop

    // 0x8003E744: beq         $s1, $zero, L_8003E75C
    if (ctx->r17 == 0) {
        // 0x8003E748: nop
    
            goto L_8003E75C;
    }
    // 0x8003E748: nop

    // 0x8003E74C: lw          $t8, 0x8($s1)
    ctx->r24 = MEM_W(ctx->r17, 0X8);
    // 0x8003E750: lw          $t9, 0x8($s0)
    ctx->r25 = MEM_W(ctx->r16, 0X8);
    // 0x8003E754: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8003E758: sw          $t0, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r8;
L_8003E75C:
    // 0x8003E75C: jal         0x800357B0
    // 0x8003E760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_1;
    // 0x8003E760: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_1:
    // 0x8003E764: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003E768: jal         0x800357E0
    // 0x8003E76C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_2;
    // 0x8003E76C: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_2:
L_8003E770:
    // 0x8003E770: bne         $s1, $zero, L_8003E734
    if (ctx->r17 != 0) {
        // 0x8003E774: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8003E734;
    }
    // 0x8003E774: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
L_8003E778:
    // 0x8003E778: jal         0x80031F70
    // 0x8003E77C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    osSetIntMask_recomp(rdram, ctx);
        goto after_3;
    // 0x8003E77C: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    after_3:
    // 0x8003E780: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8003E784: lw          $s0, 0x14($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X14);
    // 0x8003E788: lw          $s1, 0x18($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X18);
    // 0x8003E78C: lw          $s2, 0x1C($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X1C);
    // 0x8003E790: lw          $s3, 0x20($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X20);
    // 0x8003E794: jr          $ra
    // 0x8003E798: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8003E798: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80013754(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013754: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80013758: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001375C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80013760: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80013764: nop

    // 0x80013768: lw          $t7, 0x64($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X64);
    // 0x8001376C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80013770: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x80013774: lw          $t8, 0x68($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X68);
    // 0x80013778: nop

    // 0x8001377C: blez        $t8, L_800137D0
    if (SIGNED(ctx->r24) <= 0) {
        // 0x80013780: nop
    
            goto L_800137D0;
    }
    // 0x80013780: nop

L_80013784:
    // 0x80013784: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80013788: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8001378C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80013790: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80013794: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80013798: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x8001379C: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x800137A0: lw          $a1, 0x8($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X8);
    // 0x800137A4: jal         0x8001369C
    // 0x800137A8: nop

    func_8001369C(rdram, ctx);
        goto after_0;
    // 0x800137A8: nop

    after_0:
    // 0x800137AC: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800137B0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800137B4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800137B8: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    // 0x800137BC: lw          $t7, 0x68($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X68);
    // 0x800137C0: nop

    // 0x800137C4: slt         $at, $t4, $t7
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800137C8: bne         $at, $zero, L_80013784
    if (ctx->r1 != 0) {
        // 0x800137CC: nop
    
            goto L_80013784;
    }
    // 0x800137CC: nop

L_800137D0:
    // 0x800137D0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800137D4: nop

    // 0x800137D8: lw          $a0, 0x64($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X64);
    // 0x800137DC: jal         0x800309D0
    // 0x800137E0: nop

    free_game(rdram, ctx);
        goto after_1;
    // 0x800137E0: nop

    after_1:
    // 0x800137E4: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800137E8: nop

    // 0x800137EC: sw          $zero, 0x64($t8)
    MEM_W(0X64, ctx->r24) = 0;
    // 0x800137F0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x800137F4: nop

    // 0x800137F8: sw          $zero, 0x68($t0)
    MEM_W(0X68, ctx->r8) = 0;
    // 0x800137FC: b           L_80013804
    // 0x80013800: nop

        goto L_80013804;
    // 0x80013800: nop

L_80013804:
    // 0x80013804: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013808: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001380C: jr          $ra
    // 0x80013810: nop

    return;
    // 0x80013810: nop

;}
RECOMP_FUNC void func_800242F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800242F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800242F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800242F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800242FC: lw          $t6, 0x65F4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65F4);
    // 0x80024300: nop

    // 0x80024304: bne         $t6, $zero, L_80024408
    if (ctx->r14 != 0) {
        // 0x80024308: nop
    
            goto L_80024408;
    }
    // 0x80024308: nop

    // 0x8002430C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80024310: lhu         $t7, -0x1C7C($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1C7C);
    // 0x80024314: nop

    // 0x80024318: andi        $t8, $t7, 0x1000
    ctx->r24 = ctx->r15 & 0X1000;
    // 0x8002431C: beq         $t8, $zero, L_80024400
    if (ctx->r24 == 0) {
        // 0x80024320: nop
    
            goto L_80024400;
    }
    // 0x80024320: nop

    // 0x80024324: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80024328: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x8002432C: nop

    // 0x80024330: slti        $at, $t9, 0x80
    ctx->r1 = SIGNED(ctx->r25) < 0X80 ? 1 : 0;
    // 0x80024334: bne         $at, $zero, L_80024374
    if (ctx->r1 != 0) {
        // 0x80024338: nop
    
            goto L_80024374;
    }
    // 0x80024338: nop

    // 0x8002433C: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80024340: lb          $t0, 0x4C26($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4C26);
    // 0x80024344: nop

    // 0x80024348: bne         $t0, $zero, L_8002436C
    if (ctx->r8 != 0) {
        // 0x8002434C: nop
    
            goto L_8002436C;
    }
    // 0x8002434C: nop

    // 0x80024350: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80024354: jal         0x80069E00
    // 0x80024358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069E00(rdram, ctx);
        goto after_0;
    // 0x80024358: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8002435C: jal         0x8001F9DC
    // 0x80024360: nop

    Check_PakState(rdram, ctx);
        goto after_1;
    // 0x80024360: nop

    after_1:
    // 0x80024364: b           L_800246E0
    // 0x80024368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x80024368: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002436C:
    // 0x8002436C: b           L_80024400
    // 0x80024370: nop

        goto L_80024400;
    // 0x80024370: nop

L_80024374:
    // 0x80024374: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80024378: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8002437C: nop

    // 0x80024380: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x80024384: nop

    // 0x80024388: beq         $t2, $zero, L_80024400
    if (ctx->r10 == 0) {
        // 0x8002438C: nop
    
            goto L_80024400;
    }
    // 0x8002438C: nop

    // 0x80024390: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80024394: lw          $t3, 0x78F4($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X78F4);
    // 0x80024398: nop

    // 0x8002439C: bne         $t3, $zero, L_80024400
    if (ctx->r11 != 0) {
        // 0x800243A0: nop
    
            goto L_80024400;
    }
    // 0x800243A0: nop

    // 0x800243A4: jal         0x80076680
    // 0x800243A8: nop

    func_80076680(rdram, ctx);
        goto after_2;
    // 0x800243A8: nop

    after_2:
    // 0x800243AC: bne         $v0, $zero, L_80024400
    if (ctx->r2 != 0) {
        // 0x800243B0: nop
    
            goto L_80024400;
    }
    // 0x800243B0: nop

    // 0x800243B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800243B8: sw          $zero, 0x65FC($at)
    MEM_W(0X65FC, ctx->r1) = 0;
    // 0x800243BC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800243C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800243C4: sw          $t4, 0x65F4($at)
    MEM_W(0X65F4, ctx->r1) = ctx->r12;
    // 0x800243C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800243CC: sb          $zero, 0x6602($at)
    MEM_B(0X6602, ctx->r1) = 0;
    // 0x800243D0: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800243D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800243D8: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x800243DC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800243E0: jal         0x800178D4
    // 0x800243E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x800243E4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x800243E8: jal         0x80016FF8
    // 0x800243EC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    func_80016FF8(rdram, ctx);
        goto after_4;
    // 0x800243EC: addiu       $a0, $zero, 0x40
    ctx->r4 = ADD32(0, 0X40);
    after_4:
    // 0x800243F0: jal         0x8001F9DC
    // 0x800243F4: nop

    Check_PakState(rdram, ctx);
        goto after_5;
    // 0x800243F4: nop

    after_5:
    // 0x800243F8: b           L_800246E0
    // 0x800243FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x800243FC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80024400:
    // 0x80024400: b           L_800246D0
    // 0x80024404: nop

        goto L_800246D0;
    // 0x80024404: nop

L_80024408:
    // 0x80024408: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002440C: lb          $t5, -0x1C12($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1C12);
    // 0x80024410: nop

    // 0x80024414: beq         $t5, $zero, L_80024434
    if (ctx->r13 == 0) {
        // 0x80024418: nop
    
            goto L_80024434;
    }
    // 0x80024418: nop

    // 0x8002441C: jal         0x80100148
    // 0x80024420: nop

    func_80100148(rdram, ctx);
        goto after_6;
    // 0x80024420: nop

    after_6:
    // 0x80024424: b           L_800246E0
    // 0x80024428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x80024428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002442C: b           L_800246D0
    // 0x80024430: nop

        goto L_800246D0;
    // 0x80024430: nop

L_80024434:
    // 0x80024434: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80024438: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x8002443C: nop

    // 0x80024440: andi        $t7, $t6, 0x20
    ctx->r15 = ctx->r14 & 0X20;
    // 0x80024444: beq         $t7, $zero, L_800244A0
    if (ctx->r15 == 0) {
        // 0x80024448: nop
    
            goto L_800244A0;
    }
    // 0x80024448: nop

    // 0x8002444C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80024450: lb          $t8, -0x1BDC($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1BDC);
    // 0x80024454: nop

    // 0x80024458: beq         $t8, $zero, L_800244A0
    if (ctx->r24 == 0) {
        // 0x8002445C: nop
    
            goto L_800244A0;
    }
    // 0x8002445C: nop

    // 0x80024460: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80024464: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80024468: sb          $t9, -0x1C12($at)
    MEM_B(-0X1C12, ctx->r1) = ctx->r25;
    // 0x8002446C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80024470: lb          $t0, -0x1C14($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1C14);
    // 0x80024474: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80024478: sb          $t0, -0x1C09($at)
    MEM_B(-0X1C09, ctx->r1) = ctx->r8;
    // 0x8002447C: addiu       $t1, $zero, 0x64
    ctx->r9 = ADD32(0, 0X64);
    // 0x80024480: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80024484: sb          $t1, -0x1C14($at)
    MEM_B(-0X1C14, ctx->r1) = ctx->r9;
    // 0x80024488: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002448C: sh          $zero, -0x1C0C($at)
    MEM_H(-0X1C0C, ctx->r1) = 0;
    // 0x80024490: b           L_800246E0
    // 0x80024494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x80024494: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80024498: b           L_800246D0
    // 0x8002449C: nop

        goto L_800246D0;
    // 0x8002449C: nop

L_800244A0:
    // 0x800244A0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800244A4: lhu         $t2, -0x1C7C($t2)
    ctx->r10 = MEM_HU(ctx->r10, -0X1C7C);
    // 0x800244A8: nop

    // 0x800244AC: andi        $t3, $t2, 0x1000
    ctx->r11 = ctx->r10 & 0X1000;
    // 0x800244B0: bne         $t3, $zero, L_800244C4
    if (ctx->r11 != 0) {
        // 0x800244B4: nop
    
            goto L_800244C4;
    }
    // 0x800244B4: nop

    // 0x800244B8: andi        $t4, $t2, 0x8000
    ctx->r12 = ctx->r10 & 0X8000;
    // 0x800244BC: beq         $t4, $zero, L_80024548
    if (ctx->r12 == 0) {
        // 0x800244C0: nop
    
            goto L_80024548;
    }
    // 0x800244C0: nop

L_800244C4:
    // 0x800244C4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800244C8: lb          $t5, -0x1BDC($t5)
    ctx->r13 = MEM_B(ctx->r13, -0X1BDC);
    // 0x800244CC: nop

    // 0x800244D0: beq         $t5, $zero, L_800244E8
    if (ctx->r13 == 0) {
        // 0x800244D4: nop
    
            goto L_800244E8;
    }
    // 0x800244D4: nop

    // 0x800244D8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800244DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800244E0: b           L_80024538
    // 0x800244E4: sw          $t6, 0x65FC($at)
    MEM_W(0X65FC, ctx->r1) = ctx->r14;
        goto L_80024538;
    // 0x800244E4: sw          $t6, 0x65FC($at)
    MEM_W(0X65FC, ctx->r1) = ctx->r14;
L_800244E8:
    // 0x800244E8: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800244EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800244F0: addiu       $a2, $zero, 0x40
    ctx->r6 = ADD32(0, 0X40);
    // 0x800244F4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800244F8: jal         0x800178D4
    // 0x800244FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_7;
    // 0x800244FC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
    // 0x80024500: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80024504: lb          $t7, 0x6602($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X6602);
    // 0x80024508: nop

    // 0x8002450C: beq         $t7, $zero, L_80024528
    if (ctx->r15 == 0) {
        // 0x80024510: nop
    
            goto L_80024528;
    }
    // 0x80024510: nop

    // 0x80024514: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80024518: jal         0x80069AA8
    // 0x8002451C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069AA8(rdram, ctx);
        goto after_8;
    // 0x8002451C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x80024520: b           L_80024538
    // 0x80024524: nop

        goto L_80024538;
    // 0x80024524: nop

L_80024528:
    // 0x80024528: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002452C: sw          $zero, 0x65F4($at)
    MEM_W(0X65F4, ctx->r1) = 0;
    // 0x80024530: jal         0x80016FF8
    // 0x80024534: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    func_80016FF8(rdram, ctx);
        goto after_9;
    // 0x80024534: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    after_9:
L_80024538:
    // 0x80024538: b           L_800246E0
    // 0x8002453C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x8002453C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80024540: b           L_800246D0
    // 0x80024544: nop

        goto L_800246D0;
    // 0x80024544: nop

L_80024548:
    // 0x80024548: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002454C: lhu         $t8, -0x1C60($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C60);
    // 0x80024550: nop

    // 0x80024554: andi        $t9, $t8, 0x200
    ctx->r25 = ctx->r24 & 0X200;
    // 0x80024558: beq         $t9, $zero, L_80024590
    if (ctx->r25 == 0) {
        // 0x8002455C: nop
    
            goto L_80024590;
    }
    // 0x8002455C: nop

    // 0x80024560: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80024564: sb          $zero, 0x6602($at)
    MEM_B(0X6602, ctx->r1) = 0;
    // 0x80024568: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x8002456C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80024570: addiu       $a2, $zero, 0x6E
    ctx->r6 = ADD32(0, 0X6E);
    // 0x80024574: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80024578: jal         0x800178D4
    // 0x8002457C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_10;
    // 0x8002457C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_10:
    // 0x80024580: b           L_800246E0
    // 0x80024584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x80024584: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80024588: b           L_800246D0
    // 0x8002458C: nop

        goto L_800246D0;
    // 0x8002458C: nop

L_80024590:
    // 0x80024590: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80024594: lhu         $t0, -0x1C60($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C60);
    // 0x80024598: nop

    // 0x8002459C: andi        $t1, $t0, 0x100
    ctx->r9 = ctx->r8 & 0X100;
    // 0x800245A0: beq         $t1, $zero, L_800245DC
    if (ctx->r9 == 0) {
        // 0x800245A4: nop
    
            goto L_800245DC;
    }
    // 0x800245A4: nop

    // 0x800245A8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800245AC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800245B0: sb          $t3, 0x6602($at)
    MEM_B(0X6602, ctx->r1) = ctx->r11;
    // 0x800245B4: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x800245B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800245BC: addiu       $a2, $zero, 0x6E
    ctx->r6 = ADD32(0, 0X6E);
    // 0x800245C0: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800245C4: jal         0x800178D4
    // 0x800245C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x800245C8: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
    // 0x800245CC: b           L_800246E0
    // 0x800245D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x800245D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800245D4: b           L_800246D0
    // 0x800245D8: nop

        goto L_800246D0;
    // 0x800245D8: nop

L_800245DC:
    // 0x800245DC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800245E0: lw          $t2, 0x65FC($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X65FC);
    // 0x800245E4: nop

    // 0x800245E8: bne         $t2, $zero, L_80024600
    if (ctx->r10 != 0) {
        // 0x800245EC: nop
    
            goto L_80024600;
    }
    // 0x800245EC: nop

    // 0x800245F0: b           L_800246E0
    // 0x800245F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x800245F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800245F8: b           L_800246D0
    // 0x800245FC: nop

        goto L_800246D0;
    // 0x800245FC: nop

L_80024600:
    // 0x80024600: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80024604: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x80024608: nop

    // 0x8002460C: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x80024610: bne         $t5, $zero, L_80024690
    if (ctx->r13 != 0) {
        // 0x80024614: nop
    
            goto L_80024690;
    }
    // 0x80024614: nop

    // 0x80024618: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002461C: lw          $t6, 0x65FC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65FC);
    // 0x80024620: nop

    // 0x80024624: blez        $t6, L_80024678
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80024628: nop
    
            goto L_80024678;
    }
    // 0x80024628: nop

    // 0x8002462C: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x80024630: beq         $at, $zero, L_80024678
    if (ctx->r1 == 0) {
        // 0x80024634: nop
    
            goto L_80024678;
    }
    // 0x80024634: nop

    // 0x80024638: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002463C: lb          $t7, 0x6602($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X6602);
    // 0x80024640: nop

    // 0x80024644: beq         $t7, $zero, L_80024660
    if (ctx->r15 == 0) {
        // 0x80024648: nop
    
            goto L_80024660;
    }
    // 0x80024648: nop

    // 0x8002464C: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80024650: jal         0x80069AA8
    // 0x80024654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069AA8(rdram, ctx);
        goto after_12;
    // 0x80024654: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x80024658: b           L_80024670
    // 0x8002465C: nop

        goto L_80024670;
    // 0x8002465C: nop

L_80024660:
    // 0x80024660: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80024664: sw          $zero, 0x65F4($at)
    MEM_W(0X65F4, ctx->r1) = 0;
    // 0x80024668: jal         0x80016FF8
    // 0x8002466C: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    func_80016FF8(rdram, ctx);
        goto after_13;
    // 0x8002466C: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
    after_13:
L_80024670:
    // 0x80024670: b           L_80024680
    // 0x80024674: nop

        goto L_80024680;
    // 0x80024674: nop

L_80024678:
    // 0x80024678: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002467C: sw          $zero, 0x65FC($at)
    MEM_W(0X65FC, ctx->r1) = 0;
L_80024680:
    // 0x80024680: b           L_800246E0
    // 0x80024684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x80024684: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80024688: b           L_800246D0
    // 0x8002468C: nop

        goto L_800246D0;
    // 0x8002468C: nop

L_80024690:
    // 0x80024690: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80024694: lw          $t8, 0x65FC($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X65FC);
    // 0x80024698: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002469C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800246A0: sw          $t9, 0x65FC($at)
    MEM_W(0X65FC, ctx->r1) = ctx->r25;
    // 0x800246A4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800246A8: lw          $t0, 0x65FC($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X65FC);
    // 0x800246AC: nop

    // 0x800246B0: slti        $at, $t0, 0x14
    ctx->r1 = SIGNED(ctx->r8) < 0X14 ? 1 : 0;
    // 0x800246B4: beq         $at, $zero, L_800246C4
    if (ctx->r1 == 0) {
        // 0x800246B8: nop
    
            goto L_800246C4;
    }
    // 0x800246B8: nop

    // 0x800246BC: b           L_800246E0
    // 0x800246C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800246E0;
    // 0x800246C0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800246C4:
    // 0x800246C4: addiu       $t1, $zero, 0xA
    ctx->r9 = ADD32(0, 0XA);
    // 0x800246C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800246CC: sw          $t1, 0x65FC($at)
    MEM_W(0X65FC, ctx->r1) = ctx->r9;
L_800246D0:
    // 0x800246D0: b           L_800246E0
    // 0x800246D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800246E0;
    // 0x800246D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800246D8: b           L_800246E0
    // 0x800246DC: nop

        goto L_800246E0;
    // 0x800246DC: nop

L_800246E0:
    // 0x800246E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800246E4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800246E8: jr          $ra
    // 0x800246EC: nop

    return;
    // 0x800246EC: nop

;}
RECOMP_FUNC void alClose(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035804: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80035808: lw          $t6, -0x4AF0($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X4AF0);
    // 0x8003580C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80035810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80035814: beql        $t6, $zero, L_80035830
    if (ctx->r14 == 0) {
        // 0x80035818: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_80035830;
    }
    goto skip_0;
    // 0x80035818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003581C: jal         0x8003F170
    // 0x80035820: nop

    alSynDelete(rdram, ctx);
        goto after_0;
    // 0x80035820: nop

    after_0:
    // 0x80035824: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80035828: sw          $zero, -0x4AF0($at)
    MEM_W(-0X4AF0, ctx->r1) = 0;
    // 0x8003582C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_80035830:
    // 0x80035830: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80035834: jr          $ra
    // 0x80035838: nop

    return;
    // 0x80035838: nop

;}
RECOMP_FUNC void alSynAllocVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EDC8: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8003EDCC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8003EDD0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003EDD4: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8003EDD8: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8003EDDC: lh          $t6, 0x0($a2)
    ctx->r14 = MEM_H(ctx->r6, 0X0);
    // 0x8003EDE0: or          $s0, $a1, $zero
    ctx->r16 = ctx->r5 | 0;
    // 0x8003EDE4: sh          $t6, 0x16($a1)
    MEM_H(0X16, ctx->r5) = ctx->r14;
    // 0x8003EDE8: lbu         $t7, 0x4($a2)
    ctx->r15 = MEM_BU(ctx->r6, 0X4);
    // 0x8003EDEC: sw          $zero, 0xC($a1)
    MEM_W(0XC, ctx->r5) = 0;
    // 0x8003EDF0: sh          $t7, 0x1A($a1)
    MEM_H(0X1A, ctx->r5) = ctx->r15;
    // 0x8003EDF4: lh          $t8, 0x2($a2)
    ctx->r24 = MEM_H(ctx->r6, 0X2);
    // 0x8003EDF8: sh          $zero, 0x14($a1)
    MEM_H(0X14, ctx->r5) = 0;
    // 0x8003EDFC: sw          $zero, 0x8($a1)
    MEM_W(0X8, ctx->r5) = 0;
    // 0x8003EE00: sh          $t8, 0x18($a1)
    MEM_H(0X18, ctx->r5) = ctx->r24;
    // 0x8003EE04: lh          $a2, 0x0($a2)
    ctx->r6 = MEM_H(ctx->r6, 0X0);
    // 0x8003EE08: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8003EE0C: jal         0x8003ECE0
    // 0x8003EE10: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    _allocatePVoice(rdram, ctx);
        goto after_0;
    // 0x8003EE10: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_0:
    // 0x8003EE14: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8003EE18: beql        $t9, $zero, L_8003EEF0
    if (ctx->r25 == 0) {
        // 0x8003EE1C: lw          $v0, 0x2C($sp)
        ctx->r2 = MEM_W(ctx->r29, 0X2C);
            goto L_8003EEF0;
    }
    goto skip_0;
    // 0x8003EE1C: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
    skip_0:
    // 0x8003EE20: beq         $v0, $zero, L_8003EED4
    if (ctx->r2 == 0) {
        // 0x8003EE24: lw          $a0, 0xC($t9)
        ctx->r4 = MEM_W(ctx->r25, 0XC);
            goto L_8003EED4;
    }
    // 0x8003EE24: lw          $a0, 0xC($t9)
    ctx->r4 = MEM_W(ctx->r25, 0XC);
    // 0x8003EE28: addiu       $t0, $zero, 0x200
    ctx->r8 = ADD32(0, 0X200);
    // 0x8003EE2C: sw          $t0, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->r8;
    // 0x8003EE30: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8003EE34: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8003EE38: sw          $zero, 0x8($t2)
    MEM_W(0X8, ctx->r10) = 0;
    // 0x8003EE3C: jal         0x80035B20
    // 0x8003EE40: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    __allocParam(rdram, ctx);
        goto after_1;
    // 0x8003EE40: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    after_1:
    // 0x8003EE44: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8003EE48: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8003EE4C: addiu       $t5, $zero, 0xB
    ctx->r13 = ADD32(0, 0XB);
    // 0x8003EE50: lw          $t4, 0x1C($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X1C);
    // 0x8003EE54: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x8003EE58: sw          $zero, 0xC($v0)
    MEM_W(0XC, ctx->r2) = 0;
    // 0x8003EE5C: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8003EE60: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8003EE64: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003EE68: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003EE6C: lw          $t7, 0xD8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0XD8);
    // 0x8003EE70: addiu       $t8, $t7, -0x40
    ctx->r24 = ADD32(ctx->r15, -0X40);
    // 0x8003EE74: sw          $t8, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r24;
    // 0x8003EE78: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003EE7C: jalr        $t9
    // 0x8003EE80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8003EE80: nop

    after_2:
    // 0x8003EE84: jal         0x80035B20
    // 0x8003EE88: nop

    __allocParam(rdram, ctx);
        goto after_3;
    // 0x8003EE88: nop

    after_3:
    // 0x8003EE8C: lw          $a0, 0x28($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X28);
    // 0x8003EE90: beq         $v0, $zero, L_8003EEDC
    if (ctx->r2 == 0) {
        // 0x8003EE94: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8003EEDC;
    }
    // 0x8003EE94: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003EE98: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8003EE9C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8003EEA0: addiu       $t5, $zero, 0xF
    ctx->r13 = ADD32(0, 0XF);
    // 0x8003EEA4: lw          $t1, 0x1C($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X1C);
    // 0x8003EEA8: lw          $t3, 0xD8($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD8);
    // 0x8003EEAC: sh          $t5, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r13;
    // 0x8003EEB0: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8003EEB4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8003EEB8: sw          $t4, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r12;
    // 0x8003EEBC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003EEC0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003EEC4: jalr        $t9
    // 0x8003EEC8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8003EEC8: nop

    after_4:
    // 0x8003EECC: b           L_8003EEE0
    // 0x8003EED0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
        goto L_8003EEE0;
    // 0x8003EED0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_8003EED4:
    // 0x8003EED4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8003EED8: sw          $zero, 0xD8($t6)
    MEM_W(0XD8, ctx->r14) = 0;
L_8003EEDC:
    // 0x8003EEDC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
L_8003EEE0:
    // 0x8003EEE0: sw          $s0, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r16;
    // 0x8003EEE4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8003EEE8: sw          $t8, 0x8($s0)
    MEM_W(0X8, ctx->r16) = ctx->r24;
    // 0x8003EEEC: lw          $v0, 0x2C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X2C);
L_8003EEF0:
    // 0x8003EEF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EEF4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003EEF8: sltu        $t0, $zero, $v0
    ctx->r8 = 0 < ctx->r2 ? 1 : 0;
    // 0x8003EEFC: or          $v0, $t0, $zero
    ctx->r2 = ctx->r8 | 0;
    // 0x8003EF00: jr          $ra
    // 0x8003EF04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8003EF04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alSeqpGetChlFXMix(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034900: sw          $a1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r5;
    // 0x80034904: lw          $t7, 0x60($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X60);
    // 0x80034908: andi        $t6, $a1, 0xFF
    ctx->r14 = ctx->r5 & 0XFF;
    // 0x8003490C: sll         $t8, $t6, 4
    ctx->r24 = S32(ctx->r14 << 4);
    // 0x80034910: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80034914: jr          $ra
    // 0x80034918: lbu         $v0, 0xA($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0XA);
    return;
    // 0x80034918: lbu         $v0, 0xA($t9)
    ctx->r2 = MEM_BU(ctx->r25, 0XA);
;}
RECOMP_FUNC void func_8000A7B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000A7B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000A7B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000A7BC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000A7C0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8000A7C4: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000A7C8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000A7CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8000A7D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A7D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000A7D8: lw          $t8, 0x2D84($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D84);
    // 0x8000A7DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8000A7E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8000A7E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000A7E8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8000A7EC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A7F0: nop

    // 0x8000A7F4: lh          $t1, 0x1A($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1A);
    // 0x8000A7F8: nop

    // 0x8000A7FC: sh          $t1, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r9;
    // 0x8000A800: lh          $t2, 0x18($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X18);
    // 0x8000A804: nop

    // 0x8000A808: blez        $t2, L_8000A89C
    if (SIGNED(ctx->r10) <= 0) {
        // 0x8000A80C: nop
    
            goto L_8000A89C;
    }
    // 0x8000A80C: nop

L_8000A810:
    // 0x8000A810: lh          $t3, 0x18($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X18);
    // 0x8000A814: nop

    // 0x8000A818: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8000A81C: sh          $t4, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r12;
    // 0x8000A820: lh          $t6, 0x18($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X18);
    // 0x8000A824: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000A828: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8000A82C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8000A830: lh          $t9, 0x14($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X14);
    // 0x8000A834: nop

    // 0x8000A838: sh          $t9, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r25;
    // 0x8000A83C: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x8000A840: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000A844: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000A848: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000A84C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000A850: lw          $t0, 0x2D84($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2D84);
    // 0x8000A854: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8000A858: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8000A85C: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8000A860: lh          $t4, 0xA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA);
    // 0x8000A864: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8000A868: nop

    // 0x8000A86C: beq         $t4, $t6, L_8000A87C
    if (ctx->r12 == ctx->r14) {
        // 0x8000A870: nop
    
            goto L_8000A87C;
    }
    // 0x8000A870: nop

    // 0x8000A874: b           L_8000A88C
    // 0x8000A878: nop

        goto L_8000A88C;
    // 0x8000A878: nop

L_8000A87C:
    // 0x8000A87C: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x8000A880: lb          $a1, 0x27($sp)
    ctx->r5 = MEM_B(ctx->r29, 0X27);
    // 0x8000A884: jal         0x8000C6F8
    // 0x8000A888: nop

    func_8000C6F8(rdram, ctx);
        goto after_0;
    // 0x8000A888: nop

    after_0:
L_8000A88C:
    // 0x8000A88C: lh          $t5, 0x18($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X18);
    // 0x8000A890: nop

    // 0x8000A894: bgtz        $t5, L_8000A810
    if (SIGNED(ctx->r13) > 0) {
        // 0x8000A898: nop
    
            goto L_8000A810;
    }
    // 0x8000A898: nop

L_8000A89C:
    // 0x8000A89C: b           L_8000A8A4
    // 0x8000A8A0: nop

        goto L_8000A8A4;
    // 0x8000A8A0: nop

L_8000A8A4:
    // 0x8000A8A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000A8A8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000A8AC: jr          $ra
    // 0x8000A8B0: nop

    return;
    // 0x8000A8B0: nop

;}
RECOMP_FUNC void func_80021BCC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80021BCC: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80021BD0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80021BD4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80021BD8: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80021BDC: addiu       $at, $zero, 0x38
    ctx->r1 = ADD32(0, 0X38);
    // 0x80021BE0: bne         $t6, $at, L_80021F0C
    if (ctx->r14 != ctx->r1) {
        // 0x80021BE4: nop
    
            goto L_80021F0C;
    }
    // 0x80021BE4: nop

    // 0x80021BE8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80021BEC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80021BF0: addiu       $at, $zero, 0x2A
    ctx->r1 = ADD32(0, 0X2A);
    // 0x80021BF4: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x80021BF8: nop

    // 0x80021BFC: bne         $t8, $at, L_80021F0C
    if (ctx->r24 != ctx->r1) {
        // 0x80021C00: nop
    
            goto L_80021F0C;
    }
    // 0x80021C00: nop

    // 0x80021C04: addiu       $t9, $zero, 0xE
    ctx->r25 = ADD32(0, 0XE);
    // 0x80021C08: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_80021C0C:
    // 0x80021C0C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80021C10: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80021C14: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80021C18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80021C1C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80021C20: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80021C24: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80021C28: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80021C2C: lh          $t2, 0x4234($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4234);
    // 0x80021C30: addiu       $at, $zero, 0x18E
    ctx->r1 = ADD32(0, 0X18E);
    // 0x80021C34: bne         $t2, $at, L_80021EF4
    if (ctx->r10 != ctx->r1) {
        // 0x80021C38: nop
    
            goto L_80021EF4;
    }
    // 0x80021C38: nop

    // 0x80021C3C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80021C40: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80021C44: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80021C48: jal         0x80077CB0
    // 0x80021C4C: addiu       $a3, $sp, 0x22
    ctx->r7 = ADD32(ctx->r29, 0X22);
    func_80077CB0(rdram, ctx);
        goto after_0;
    // 0x80021C4C: addiu       $a3, $sp, 0x22
    ctx->r7 = ADD32(ctx->r29, 0X22);
    after_0:
    // 0x80021C50: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80021C54: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x80021C58: nop

    // 0x80021C5C: beq         $t3, $zero, L_80021EF4
    if (ctx->r11 == 0) {
        // 0x80021C60: nop
    
            goto L_80021EF4;
    }
    // 0x80021C60: nop

    // 0x80021C64: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80021C68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021C6C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80021C70: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80021C74: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80021C78: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80021C7C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80021C80: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80021C84: sh          $zero, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = 0;
    // 0x80021C88: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80021C8C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021C90: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80021C94: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80021C98: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80021C9C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80021CA0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80021CA4: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80021CA8: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x80021CAC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80021CB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80021CB4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80021CB8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80021CBC: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80021CC0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80021CC4: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80021CC8: nop

    // 0x80021CCC: bc1f        L_80021EF4
    if (!c1cs) {
        // 0x80021CD0: nop
    
            goto L_80021EF4;
    }
    // 0x80021CD0: nop

    // 0x80021CD4: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80021CD8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80021CDC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80021CE0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80021CE4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80021CE8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80021CEC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80021CF0: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80021CF4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80021CF8: lwc1        $f16, 0x0($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80021CFC: lwc1        $f6, 0x8($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80021D00: lwc1        $f18, 0x0($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80021D04: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80021D08: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80021D0C: jal         0x80015634
    // 0x80021D10: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x80021D10: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_1:
    // 0x80021D14: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80021D18: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80021D1C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80021D20: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80021D24: jal         0x80015538
    // 0x80021D28: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80021D28: nop

    after_2:
    // 0x80021D2C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80021D30: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80021D34: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80021D38: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80021D3C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80021D40: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80021D44: addiu       $at, $zero, 0x5A
    ctx->r1 = ADD32(0, 0X5A);
    // 0x80021D48: cvt.w.s     $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    ctx->f10.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80021D4C: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x80021D50: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80021D54: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x80021D58: mflo        $t5
    ctx->r13 = lo;
    // 0x80021D5C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80021D60: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80021D64: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021D68: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80021D6C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80021D70: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80021D74: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x80021D78: mtc1        $t6, $f16
    ctx->f16.u32l = ctx->r14;
    // 0x80021D7C: nop

    // 0x80021D80: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80021D84: swc1        $f18, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f18.u32l;
    // 0x80021D88: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80021D8C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80021D90: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80021D94: lwc1        $f6, 0x1C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80021D98: nop

    // 0x80021D9C: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80021DA0: nop

    // 0x80021DA4: bc1f        L_80021EF4
    if (!c1cs) {
        // 0x80021DA8: nop
    
            goto L_80021EF4;
    }
    // 0x80021DA8: nop

    // 0x80021DAC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80021DB0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80021DB4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80021DB8: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80021DBC: nop

    // 0x80021DC0: c.eq.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl == ctx->f10.fl;
    // 0x80021DC4: nop

    // 0x80021DC8: bc1f        L_80021DFC
    if (!c1cs) {
        // 0x80021DCC: nop
    
            goto L_80021DFC;
    }
    // 0x80021DCC: nop

    // 0x80021DD0: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80021DD4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021DD8: sll         $t2, $t0, 2
    ctx->r10 = S32(ctx->r8 << 2);
    // 0x80021DDC: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80021DE0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80021DE4: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80021DE8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80021DEC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80021DF0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80021DF4: b           L_80021EF4
    // 0x80021DF8: sh          $t9, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r25;
        goto L_80021EF4;
    // 0x80021DF8: sh          $t9, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r25;
L_80021DFC:
    // 0x80021DFC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80021E00: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80021E04: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80021E08: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80021E0C: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80021E10: nop

    // 0x80021E14: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80021E18: nop

    // 0x80021E1C: bc1f        L_80021E50
    if (!c1cs) {
        // 0x80021E20: nop
    
            goto L_80021E50;
    }
    // 0x80021E20: nop

    // 0x80021E24: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80021E28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021E2C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80021E30: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80021E34: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80021E38: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80021E3C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80021E40: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80021E44: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80021E48: b           L_80021EF4
    // 0x80021E4C: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
        goto L_80021EF4;
    // 0x80021E4C: sh          $t3, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r11;
L_80021E50:
    // 0x80021E50: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80021E54: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80021E58: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80021E5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80021E60: lwc1        $f6, 0x1C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80021E64: nop

    // 0x80021E68: c.eq.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl == ctx->f8.fl;
    // 0x80021E6C: nop

    // 0x80021E70: bc1f        L_80021EA4
    if (!c1cs) {
        // 0x80021E74: nop
    
            goto L_80021EA4;
    }
    // 0x80021E74: nop

    // 0x80021E78: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80021E7C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021E80: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80021E84: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80021E88: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80021E8C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80021E90: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80021E94: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80021E98: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80021E9C: b           L_80021EF4
    // 0x80021EA0: sh          $t7, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r15;
        goto L_80021EF4;
    // 0x80021EA0: sh          $t7, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r15;
L_80021EA4:
    // 0x80021EA4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80021EA8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80021EAC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80021EB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80021EB4: lwc1        $f4, 0x1C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80021EB8: nop

    // 0x80021EBC: c.eq.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl == ctx->f10.fl;
    // 0x80021EC0: nop

    // 0x80021EC4: bc1f        L_80021EF4
    if (!c1cs) {
        // 0x80021EC8: nop
    
            goto L_80021EF4;
    }
    // 0x80021EC8: nop

    // 0x80021ECC: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x80021ED0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80021ED4: sll         $t4, $t1, 2
    ctx->r12 = S32(ctx->r9 << 2);
    // 0x80021ED8: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80021EDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80021EE0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x80021EE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80021EE8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80021EEC: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80021EF0: sh          $t2, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r10;
L_80021EF4:
    // 0x80021EF4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80021EF8: nop

    // 0x80021EFC: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80021F00: slti        $at, $t5, 0x4E
    ctx->r1 = SIGNED(ctx->r13) < 0X4E ? 1 : 0;
    // 0x80021F04: bne         $at, $zero, L_80021C0C
    if (ctx->r1 != 0) {
        // 0x80021F08: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_80021C0C;
    }
    // 0x80021F08: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_80021F0C:
    // 0x80021F0C: jal         0x80021418
    // 0x80021F10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    Game_IsObjectPaused(rdram, ctx);
        goto after_3;
    // 0x80021F10: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x80021F14: beq         $v0, $zero, L_80022050
    if (ctx->r2 == 0) {
        // 0x80021F18: nop
    
            goto L_80022050;
    }
    // 0x80021F18: nop

    // 0x80021F1C: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x80021F20: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_80021F24:
    // 0x80021F24: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80021F28: jal         0x800214B8
    // 0x80021F2C: nop

    func_800214B8(rdram, ctx);
        goto after_4;
    // 0x80021F2C: nop

    after_4:
    // 0x80021F30: beq         $v0, $zero, L_80022038
    if (ctx->r2 == 0) {
        // 0x80021F34: nop
    
            goto L_80022038;
    }
    // 0x80021F34: nop

    // 0x80021F38: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80021F3C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80021F40: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80021F44: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80021F48: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80021F4C: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80021F50: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80021F54: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80021F58: lh          $t0, 0x4234($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4234);
    // 0x80021F5C: nop

    // 0x80021F60: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80021F64: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80021F68: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x80021F6C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80021F70: lb          $t1, 0x523E($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X523E);
    // 0x80021F74: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80021F78: bne         $t1, $at, L_80021F88
    if (ctx->r9 != ctx->r1) {
        // 0x80021F7C: nop
    
            goto L_80021F88;
    }
    // 0x80021F7C: nop

    // 0x80021F80: b           L_80021FDC
    // 0x80021F84: nop

        goto L_80021FDC;
    // 0x80021F84: nop

L_80021F88:
    // 0x80021F88: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80021F8C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80021F90: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80021F94: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x80021F98: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x80021F9C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80021FA0: lbu         $t3, 0x4D92($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4D92);
    // 0x80021FA4: nop

    // 0x80021FA8: bne         $t3, $zero, L_80021FDC
    if (ctx->r11 != 0) {
        // 0x80021FAC: nop
    
            goto L_80021FDC;
    }
    // 0x80021FAC: nop

    // 0x80021FB0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80021FB4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80021FB8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80021FBC: lh          $t6, 0x108($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X108);
    // 0x80021FC0: nop

    // 0x80021FC4: beq         $t6, $at, L_80021FDC
    if (ctx->r14 == ctx->r1) {
        // 0x80021FC8: nop
    
            goto L_80021FDC;
    }
    // 0x80021FC8: nop

    // 0x80021FCC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80021FD0: beq         $t6, $at, L_80021FDC
    if (ctx->r14 == ctx->r1) {
        // 0x80021FD4: nop
    
            goto L_80021FDC;
    }
    // 0x80021FD4: nop

    // 0x80021FD8: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_80021FDC:
    // 0x80021FDC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80021FE0: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80021FE4: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80021FE8: subu        $t7, $t7, $t8
    ctx->r15 = SUB32(ctx->r15, ctx->r24);
    // 0x80021FEC: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x80021FF0: addu        $t0, $t0, $t7
    ctx->r8 = ADD32(ctx->r8, ctx->r15);
    // 0x80021FF4: lbu         $t0, 0x4D90($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X4D90);
    // 0x80021FF8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80021FFC: andi        $t9, $t0, 0x1
    ctx->r25 = ctx->r8 & 0X1;
    // 0x80022000: bne         $t9, $at, L_8002200C
    if (ctx->r25 != ctx->r1) {
        // 0x80022004: nop
    
            goto L_8002200C;
    }
    // 0x80022004: nop

    // 0x80022008: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8002200C:
    // 0x8002200C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80022010: nop

    // 0x80022014: beq         $t1, $zero, L_80022038
    if (ctx->r9 == 0) {
        // 0x80022018: nop
    
            goto L_80022038;
    }
    // 0x80022018: nop

    // 0x8002201C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80022020: jal         0x80021584
    // 0x80022024: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80021584(rdram, ctx);
        goto after_5;
    // 0x80022024: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x80022028: beq         $v0, $zero, L_80022038
    if (ctx->r2 == 0) {
        // 0x8002202C: nop
    
            goto L_80022038;
    }
    // 0x8002202C: nop

    // 0x80022030: b           L_80022050
    // 0x80022034: nop

        goto L_80022050;
    // 0x80022034: nop

L_80022038:
    // 0x80022038: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8002203C: nop

    // 0x80022040: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80022044: slti        $at, $t4, 0x4E
    ctx->r1 = SIGNED(ctx->r12) < 0X4E ? 1 : 0;
    // 0x80022048: bne         $at, $zero, L_80021F24
    if (ctx->r1 != 0) {
        // 0x8002204C: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_80021F24;
    }
    // 0x8002204C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
L_80022050:
    // 0x80022050: jal         0x80021210
    // 0x80022054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80021210(rdram, ctx);
        goto after_6;
    // 0x80022054: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80022058: beq         $v0, $zero, L_800220C4
    if (ctx->r2 == 0) {
        // 0x8002205C: nop
    
            goto L_800220C4;
    }
    // 0x8002205C: nop

    // 0x80022060: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80022064: lb          $t3, 0x5258($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X5258);
    // 0x80022068: nop

    // 0x8002206C: bne         $t3, $zero, L_800220C4
    if (ctx->r11 != 0) {
        // 0x80022070: nop
    
            goto L_800220C4;
    }
    // 0x80022070: nop

    // 0x80022074: addiu       $t5, $zero, 0x6
    ctx->r13 = ADD32(0, 0X6);
    // 0x80022078: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_8002207C:
    // 0x8002207C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80022080: jal         0x80021210
    // 0x80022084: nop

    func_80021210(rdram, ctx);
        goto after_7;
    // 0x80022084: nop

    after_7:
    // 0x80022088: beq         $v0, $zero, L_800220AC
    if (ctx->r2 == 0) {
        // 0x8002208C: nop
    
            goto L_800220AC;
    }
    // 0x8002208C: nop

    // 0x80022090: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80022094: jal         0x80021584
    // 0x80022098: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80021584(rdram, ctx);
        goto after_8;
    // 0x80022098: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x8002209C: beq         $v0, $zero, L_800220AC
    if (ctx->r2 == 0) {
        // 0x800220A0: nop
    
            goto L_800220AC;
    }
    // 0x800220A0: nop

    // 0x800220A4: b           L_800220C4
    // 0x800220A8: nop

        goto L_800220C4;
    // 0x800220A8: nop

L_800220AC:
    // 0x800220AC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800220B0: nop

    // 0x800220B4: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x800220B8: slti        $at, $t8, 0xE
    ctx->r1 = SIGNED(ctx->r24) < 0XE ? 1 : 0;
    // 0x800220BC: bne         $at, $zero, L_8002207C
    if (ctx->r1 != 0) {
        // 0x800220C0: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_8002207C;
    }
    // 0x800220C0: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_800220C4:
    // 0x800220C4: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800220C8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
L_800220CC:
    // 0x800220CC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800220D0: jal         0x80021210
    // 0x800220D4: nop

    func_80021210(rdram, ctx);
        goto after_9;
    // 0x800220D4: nop

    after_9:
    // 0x800220D8: beq         $v0, $zero, L_80022180
    if (ctx->r2 == 0) {
        // 0x800220DC: nop
    
            goto L_80022180;
    }
    // 0x800220DC: nop

    // 0x800220E0: addiu       $t0, $zero, 0xE
    ctx->r8 = ADD32(0, 0XE);
    // 0x800220E4: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_800220E8:
    // 0x800220E8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800220EC: jal         0x80021210
    // 0x800220F0: nop

    func_80021210(rdram, ctx);
        goto after_10;
    // 0x800220F0: nop

    after_10:
    // 0x800220F4: beq         $v0, $zero, L_80022168
    if (ctx->r2 == 0) {
        // 0x800220F8: nop
    
            goto L_80022168;
    }
    // 0x800220F8: nop

    // 0x800220FC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80022100: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80022104: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80022108: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8002210C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80022110: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80022114: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80022118: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8002211C: lh          $t2, 0x4234($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4234);
    // 0x80022120: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80022124: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80022128: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x8002212C: sll         $t4, $t4, 5
    ctx->r12 = S32(ctx->r12 << 5);
    // 0x80022130: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80022134: lbu         $t3, 0x4D90($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X4D90);
    // 0x80022138: nop

    // 0x8002213C: andi        $t5, $t3, 0x2
    ctx->r13 = ctx->r11 & 0X2;
    // 0x80022140: bne         $t5, $zero, L_80022168
    if (ctx->r13 != 0) {
        // 0x80022144: nop
    
            goto L_80022168;
    }
    // 0x80022144: nop

    // 0x80022148: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x8002214C: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80022150: jal         0x80021584
    // 0x80022154: nop

    func_80021584(rdram, ctx);
        goto after_11;
    // 0x80022154: nop

    after_11:
    // 0x80022158: beq         $v0, $zero, L_80022168
    if (ctx->r2 == 0) {
        // 0x8002215C: nop
    
            goto L_80022168;
    }
    // 0x8002215C: nop

    // 0x80022160: b           L_80022180
    // 0x80022164: nop

        goto L_80022180;
    // 0x80022164: nop

L_80022168:
    // 0x80022168: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8002216C: nop

    // 0x80022170: addiu       $t8, $t6, 0x1
    ctx->r24 = ADD32(ctx->r14, 0X1);
    // 0x80022174: slti        $at, $t8, 0x4E
    ctx->r1 = SIGNED(ctx->r24) < 0X4E ? 1 : 0;
    // 0x80022178: bne         $at, $zero, L_800220E8
    if (ctx->r1 != 0) {
        // 0x8002217C: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_800220E8;
    }
    // 0x8002217C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80022180:
    // 0x80022180: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80022184: nop

    // 0x80022188: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x8002218C: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x80022190: bne         $at, $zero, L_800220CC
    if (ctx->r1 != 0) {
        // 0x80022194: sw          $t0, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r8;
            goto L_800220CC;
    }
    // 0x80022194: sw          $t0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r8;
    // 0x80022198: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8002219C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
L_800221A0:
    // 0x800221A0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800221A4: jal         0x80021210
    // 0x800221A8: nop

    func_80021210(rdram, ctx);
        goto after_12;
    // 0x800221A8: nop

    after_12:
    // 0x800221AC: beq         $v0, $zero, L_80022208
    if (ctx->r2 == 0) {
        // 0x800221B0: nop
    
            goto L_80022208;
    }
    // 0x800221B0: nop

    // 0x800221B4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800221B8: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_800221BC:
    // 0x800221BC: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800221C0: jal         0x80021210
    // 0x800221C4: nop

    func_80021210(rdram, ctx);
        goto after_13;
    // 0x800221C4: nop

    after_13:
    // 0x800221C8: beq         $v0, $zero, L_800221F0
    if (ctx->r2 == 0) {
        // 0x800221CC: nop
    
            goto L_800221F0;
    }
    // 0x800221CC: nop

    // 0x800221D0: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800221D4: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800221D8: jal         0x80021584
    // 0x800221DC: nop

    func_80021584(rdram, ctx);
        goto after_14;
    // 0x800221DC: nop

    after_14:
    // 0x800221E0: beq         $v0, $zero, L_800221F0
    if (ctx->r2 == 0) {
        // 0x800221E4: nop
    
            goto L_800221F0;
    }
    // 0x800221E4: nop

    // 0x800221E8: b           L_80022208
    // 0x800221EC: nop

        goto L_80022208;
    // 0x800221EC: nop

L_800221F0:
    // 0x800221F0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800221F4: nop

    // 0x800221F8: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x800221FC: slti        $at, $t4, 0xE
    ctx->r1 = SIGNED(ctx->r12) < 0XE ? 1 : 0;
    // 0x80022200: bne         $at, $zero, L_800221BC
    if (ctx->r1 != 0) {
        // 0x80022204: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_800221BC;
    }
    // 0x80022204: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
L_80022208:
    // 0x80022208: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8002220C: nop

    // 0x80022210: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80022214: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x80022218: bne         $at, $zero, L_800221A0
    if (ctx->r1 != 0) {
        // 0x8002221C: sw          $t5, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r13;
            goto L_800221A0;
    }
    // 0x8002221C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80022220: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80022224: lb          $t6, 0x523E($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X523E);
    // 0x80022228: nop

    // 0x8002222C: bne         $t6, $zero, L_800222CC
    if (ctx->r14 != 0) {
        // 0x80022230: nop
    
            goto L_800222CC;
    }
    // 0x80022230: nop

    // 0x80022234: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80022238: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8002223C:
    // 0x8002223C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80022240: jal         0x80021210
    // 0x80022244: nop

    func_80021210(rdram, ctx);
        goto after_15;
    // 0x80022244: nop

    after_15:
    // 0x80022248: beq         $v0, $zero, L_800222B4
    if (ctx->r2 == 0) {
        // 0x8002224C: nop
    
            goto L_800222B4;
    }
    // 0x8002224C: nop

    // 0x80022250: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80022254: nop

    // 0x80022258: addiu       $t0, $t7, 0x1
    ctx->r8 = ADD32(ctx->r15, 0X1);
    // 0x8002225C: slti        $at, $t0, 0x6
    ctx->r1 = SIGNED(ctx->r8) < 0X6 ? 1 : 0;
    // 0x80022260: beq         $at, $zero, L_800222B4
    if (ctx->r1 == 0) {
        // 0x80022264: sw          $t0, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r8;
            goto L_800222B4;
    }
    // 0x80022264: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_80022268:
    // 0x80022268: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8002226C: jal         0x80021210
    // 0x80022270: nop

    func_80021210(rdram, ctx);
        goto after_16;
    // 0x80022270: nop

    after_16:
    // 0x80022274: beq         $v0, $zero, L_8002229C
    if (ctx->r2 == 0) {
        // 0x80022278: nop
    
            goto L_8002229C;
    }
    // 0x80022278: nop

    // 0x8002227C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80022280: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80022284: jal         0x80021584
    // 0x80022288: nop

    func_80021584(rdram, ctx);
        goto after_17;
    // 0x80022288: nop

    after_17:
    // 0x8002228C: beq         $v0, $zero, L_8002229C
    if (ctx->r2 == 0) {
        // 0x80022290: nop
    
            goto L_8002229C;
    }
    // 0x80022290: nop

    // 0x80022294: b           L_800222B4
    // 0x80022298: nop

        goto L_800222B4;
    // 0x80022298: nop

L_8002229C:
    // 0x8002229C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800222A0: nop

    // 0x800222A4: addiu       $t1, $t9, 0x1
    ctx->r9 = ADD32(ctx->r25, 0X1);
    // 0x800222A8: slti        $at, $t1, 0x6
    ctx->r1 = SIGNED(ctx->r9) < 0X6 ? 1 : 0;
    // 0x800222AC: bne         $at, $zero, L_80022268
    if (ctx->r1 != 0) {
        // 0x800222B0: sw          $t1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r9;
            goto L_80022268;
    }
    // 0x800222B0: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_800222B4:
    // 0x800222B4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800222B8: nop

    // 0x800222BC: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x800222C0: slti        $at, $t4, 0x5
    ctx->r1 = SIGNED(ctx->r12) < 0X5 ? 1 : 0;
    // 0x800222C4: bne         $at, $zero, L_8002223C
    if (ctx->r1 != 0) {
        // 0x800222C8: sw          $t4, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r12;
            goto L_8002223C;
    }
    // 0x800222C8: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
L_800222CC:
    // 0x800222CC: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x800222D0: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
L_800222D4:
    // 0x800222D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800222D8: jal         0x80021210
    // 0x800222DC: nop

    func_80021210(rdram, ctx);
        goto after_18;
    // 0x800222DC: nop

    after_18:
    // 0x800222E0: beq         $v0, $zero, L_80022388
    if (ctx->r2 == 0) {
        // 0x800222E4: nop
    
            goto L_80022388;
    }
    // 0x800222E4: nop

    // 0x800222E8: addiu       $t5, $zero, 0xE
    ctx->r13 = ADD32(0, 0XE);
    // 0x800222EC: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_800222F0:
    // 0x800222F0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800222F4: jal         0x80021210
    // 0x800222F8: nop

    func_80021210(rdram, ctx);
        goto after_19;
    // 0x800222F8: nop

    after_19:
    // 0x800222FC: beq         $v0, $zero, L_80022370
    if (ctx->r2 == 0) {
        // 0x80022300: nop
    
            goto L_80022370;
    }
    // 0x80022300: nop

    // 0x80022304: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80022308: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8002230C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80022310: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80022314: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80022318: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8002231C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80022320: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80022324: lh          $t7, 0x4234($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4234);
    // 0x80022328: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8002232C: sll         $t0, $t7, 2
    ctx->r8 = S32(ctx->r15 << 2);
    // 0x80022330: subu        $t0, $t0, $t7
    ctx->r8 = SUB32(ctx->r8, ctx->r15);
    // 0x80022334: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x80022338: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x8002233C: lbu         $t9, 0x4D90($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4D90);
    // 0x80022340: nop

    // 0x80022344: andi        $t1, $t9, 0x2
    ctx->r9 = ctx->r25 & 0X2;
    // 0x80022348: bne         $t1, $zero, L_80022370
    if (ctx->r9 != 0) {
        // 0x8002234C: nop
    
            goto L_80022370;
    }
    // 0x8002234C: nop

    // 0x80022350: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80022354: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80022358: jal         0x80021584
    // 0x8002235C: nop

    func_80021584(rdram, ctx);
        goto after_20;
    // 0x8002235C: nop

    after_20:
    // 0x80022360: beq         $v0, $zero, L_80022370
    if (ctx->r2 == 0) {
        // 0x80022364: nop
    
            goto L_80022370;
    }
    // 0x80022364: nop

    // 0x80022368: b           L_80022388
    // 0x8002236C: nop

        goto L_80022388;
    // 0x8002236C: nop

L_80022370:
    // 0x80022370: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80022374: nop

    // 0x80022378: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x8002237C: slti        $at, $t4, 0x4E
    ctx->r1 = SIGNED(ctx->r12) < 0X4E ? 1 : 0;
    // 0x80022380: bne         $at, $zero, L_800222F0
    if (ctx->r1 != 0) {
        // 0x80022384: sw          $t4, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r12;
            goto L_800222F0;
    }
    // 0x80022384: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
L_80022388:
    // 0x80022388: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8002238C: nop

    // 0x80022390: addiu       $t5, $t3, 0x1
    ctx->r13 = ADD32(ctx->r11, 0X1);
    // 0x80022394: slti        $at, $t5, 0xE
    ctx->r1 = SIGNED(ctx->r13) < 0XE ? 1 : 0;
    // 0x80022398: bne         $at, $zero, L_800222D4
    if (ctx->r1 != 0) {
        // 0x8002239C: sw          $t5, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r13;
            goto L_800222D4;
    }
    // 0x8002239C: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800223A0: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x800223A4: sw          $t6, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r14;
L_800223A8:
    // 0x800223A8: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800223AC: jal         0x800214B8
    // 0x800223B0: nop

    func_800214B8(rdram, ctx);
        goto after_21;
    // 0x800223B0: nop

    after_21:
    // 0x800223B4: beq         $v0, $zero, L_80022424
    if (ctx->r2 == 0) {
        // 0x800223B8: nop
    
            goto L_80022424;
    }
    // 0x800223B8: nop

    // 0x800223BC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800223C0: nop

    // 0x800223C4: addiu       $t7, $t8, 0x1
    ctx->r15 = ADD32(ctx->r24, 0X1);
    // 0x800223C8: slti        $at, $t7, 0x4E
    ctx->r1 = SIGNED(ctx->r15) < 0X4E ? 1 : 0;
    // 0x800223CC: beq         $at, $zero, L_80022424
    if (ctx->r1 == 0) {
        // 0x800223D0: sw          $t7, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r15;
            goto L_80022424;
    }
    // 0x800223D0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_800223D4:
    // 0x800223D4: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800223D8: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800223DC: jal         0x800212DC
    // 0x800223E0: nop

    func_800212DC(rdram, ctx);
        goto after_22;
    // 0x800223E0: nop

    after_22:
    // 0x800223E4: beq         $v0, $zero, L_8002240C
    if (ctx->r2 == 0) {
        // 0x800223E8: nop
    
            goto L_8002240C;
    }
    // 0x800223E8: nop

    // 0x800223EC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800223F0: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x800223F4: jal         0x80021584
    // 0x800223F8: nop

    func_80021584(rdram, ctx);
        goto after_23;
    // 0x800223F8: nop

    after_23:
    // 0x800223FC: beq         $v0, $zero, L_8002240C
    if (ctx->r2 == 0) {
        // 0x80022400: nop
    
            goto L_8002240C;
    }
    // 0x80022400: nop

    // 0x80022404: b           L_80022424
    // 0x80022408: nop

        goto L_80022424;
    // 0x80022408: nop

L_8002240C:
    // 0x8002240C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80022410: nop

    // 0x80022414: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x80022418: slti        $at, $t9, 0x4E
    ctx->r1 = SIGNED(ctx->r25) < 0X4E ? 1 : 0;
    // 0x8002241C: bne         $at, $zero, L_800223D4
    if (ctx->r1 != 0) {
        // 0x80022420: sw          $t9, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r25;
            goto L_800223D4;
    }
    // 0x80022420: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_80022424:
    // 0x80022424: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80022428: nop

    // 0x8002242C: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80022430: slti        $at, $t2, 0x4D
    ctx->r1 = SIGNED(ctx->r10) < 0X4D ? 1 : 0;
    // 0x80022434: bne         $at, $zero, L_800223A8
    if (ctx->r1 != 0) {
        // 0x80022438: sw          $t2, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r10;
            goto L_800223A8;
    }
    // 0x80022438: sw          $t2, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r10;
    // 0x8002243C: b           L_80022444
    // 0x80022440: nop

        goto L_80022444;
    // 0x80022440: nop

L_80022444:
    // 0x80022444: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80022448: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8002244C: jr          $ra
    // 0x80022450: nop

    return;
    // 0x80022450: nop

;}
RECOMP_FUNC void alResampleParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80040750: addiu       $t6, $a1, -0x1
    ctx->r14 = ADD32(ctx->r5, -0X1);
    // 0x80040754: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80040758: sltiu       $at, $t6, 0x9
    ctx->r1 = ctx->r14 < 0X9 ? 1 : 0;
    // 0x8004075C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80040760: beq         $at, $zero, L_80040810
    if (ctx->r1 == 0) {
        // 0x80040764: or          $a3, $a0, $zero
        ctx->r7 = ctx->r4 | 0;
            goto L_80040810;
    }
    // 0x80040764: or          $a3, $a0, $zero
    ctx->r7 = ctx->r4 | 0;
    // 0x80040768: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8004076C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80040770: addu        $at, $at, $t6
    gpr jr_addend_80040778 = ctx->r14;
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80040774: lw          $t6, -0x3910($at)
    ctx->r14 = ADD32(ctx->r1, -0X3910);
    // 0x80040778: jr          $t6
    // 0x8004077C: nop

    switch (jr_addend_80040778 >> 2) {
        case 0: goto L_80040780; break;
        case 1: goto L_80040810; break;
        case 2: goto L_80040810; break;
        case 3: goto L_80040788; break;
        case 4: goto L_80040810; break;
        case 5: goto L_80040810; break;
        case 6: goto L_800407F4; break;
        case 7: goto L_80040804; break;
        case 8: goto L_800407C4; break;
        default: switch_error(__func__, 0x80040778, 0x8004C6F0);
    }
    // 0x8004077C: nop

L_80040780:
    // 0x80040780: b           L_80040828
    // 0x80040784: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
        goto L_80040828;
    // 0x80040784: sw          $a2, 0x0($a3)
    MEM_W(0X0, ctx->r7) = ctx->r6;
L_80040788:
    // 0x80040788: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x8004078C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80040790: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80040794: sw          $t7, 0x24($a3)
    MEM_W(0X24, ctx->r7) = ctx->r15;
    // 0x80040798: sw          $zero, 0x30($a3)
    MEM_W(0X30, ctx->r7) = 0;
    // 0x8004079C: sw          $zero, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = 0;
    // 0x800407A0: beq         $a0, $zero, L_80040828
    if (ctx->r4 == 0) {
        // 0x800407A4: swc1        $f4, 0x20($a3)
        MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
            goto L_80040828;
    }
    // 0x800407A4: swc1        $f4, 0x20($a3)
    MEM_W(0X20, ctx->r7) = ctx->f4.u32l;
    // 0x800407A8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800407AC: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800407B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800407B4: jalr        $t9
    // 0x800407B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x800407B8: nop

    after_0:
    // 0x800407BC: b           L_8004082C
    // 0x800407C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004082C;
    // 0x800407C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800407C4:
    // 0x800407C4: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x800407C8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800407CC: sw          $t8, 0x30($a3)
    MEM_W(0X30, ctx->r7) = ctx->r24;
    // 0x800407D0: beql        $a0, $zero, L_8004082C
    if (ctx->r4 == 0) {
        // 0x800407D4: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004082C;
    }
    goto skip_0;
    // 0x800407D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x800407D8: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x800407DC: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x800407E0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800407E4: jalr        $t9
    // 0x800407E8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x800407E8: nop

    after_1:
    // 0x800407EC: b           L_8004082C
    // 0x800407F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
        goto L_8004082C;
    // 0x800407F0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_800407F4:
    // 0x800407F4: sw          $a2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r6;
    // 0x800407F8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800407FC: b           L_80040828
    // 0x80040800: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
        goto L_80040828;
    // 0x80040800: swc1        $f6, 0x18($a3)
    MEM_W(0X18, ctx->r7) = ctx->f6.u32l;
L_80040804:
    // 0x80040804: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80040808: b           L_80040828
    // 0x8004080C: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
        goto L_80040828;
    // 0x8004080C: sw          $t0, 0x1C($a3)
    MEM_W(0X1C, ctx->r7) = ctx->r8;
L_80040810:
    // 0x80040810: lw          $a0, 0x0($a3)
    ctx->r4 = MEM_W(ctx->r7, 0X0);
    // 0x80040814: beql        $a0, $zero, L_8004082C
    if (ctx->r4 == 0) {
        // 0x80040818: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8004082C;
    }
    goto skip_1;
    // 0x80040818: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_1:
    // 0x8004081C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80040820: jalr        $t9
    // 0x80040824: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80040824: nop

    after_2:
L_80040828:
    // 0x80040828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8004082C:
    // 0x8004082C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80040830: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80040834: jr          $ra
    // 0x80040838: nop

    return;
    // 0x80040838: nop

;}
RECOMP_FUNC void func_80002CD0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002CD0: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80002CD4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80002CD8: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x80002CDC: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x80002CE0: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80002CE4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002CE8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80002CEC: jal         0x800315C0
    // 0x80002CF0: nop

    osWritebackDCache_recomp(rdram, ctx);
        goto after_0;
    // 0x80002CF0: nop

    after_0:
    // 0x80002CF4: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002CF8: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80002CFC: jal         0x80031640
    // 0x80002D00: nop

    osInvalICache_recomp(rdram, ctx);
        goto after_1;
    // 0x80002D00: nop

    after_1:
    // 0x80002D04: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002D08: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80002D0C: jal         0x800316C0
    // 0x80002D10: nop

    osInvalDCache_recomp(rdram, ctx);
        goto after_2;
    // 0x80002D10: nop

    after_2:
    // 0x80002D14: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80002D18: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80002D1C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80002D20: addiu       $t8, $t8, 0x2E80
    ctx->r24 = ADD32(ctx->r24, 0X2E80);
    // 0x80002D24: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x80002D28: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80002D2C: addiu       $a0, $sp, 0x28
    ctx->r4 = ADD32(ctx->r29, 0X28);
    // 0x80002D30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80002D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80002D38: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80002D3C: jal         0x80031770
    // 0x80002D40: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    osPiStartDma_recomp(rdram, ctx);
        goto after_3;
    // 0x80002D40: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    after_3:
    // 0x80002D44: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80002D48: addiu       $a0, $a0, 0x2E80
    ctx->r4 = ADD32(ctx->r4, 0X2E80);
    // 0x80002D4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80002D50: jal         0x80031880
    // 0x80002D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_4;
    // 0x80002D54: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_4:
    // 0x80002D58: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002D5C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80002D60: jal         0x80031640
    // 0x80002D64: nop

    osInvalICache_recomp(rdram, ctx);
        goto after_5;
    // 0x80002D64: nop

    after_5:
    // 0x80002D68: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80002D6C: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80002D70: jal         0x800316C0
    // 0x80002D74: nop

    osInvalDCache_recomp(rdram, ctx);
        goto after_6;
    // 0x80002D74: nop

    after_6:
    // 0x80002D78: b           L_80002D80
    // 0x80002D7C: nop

        goto L_80002D80;
    // 0x80002D7C: nop

L_80002D80:
    // 0x80002D80: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80002D84: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80002D88: jr          $ra
    // 0x80002D8C: nop

    return;
    // 0x80002D8C: nop

;}
RECOMP_FUNC void func_8001F4B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001F4B8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8001F4BC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8001F4C0: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8001F4C4: sw          $a1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r5;
    // 0x8001F4C8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8001F4CC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F4D0: lw          $t0, 0x210($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X210);
    // 0x8001F4D4: sll         $t8, $t7, 5
    ctx->r24 = S32(ctx->r15 << 5);
    // 0x8001F4D8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8001F4DC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001F4E0: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001F4E4: lhu         $a1, 0x8($t0)
    ctx->r5 = MEM_HU(ctx->r8, 0X8);
    // 0x8001F4E8: lw          $a2, 0x4($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X4);
    // 0x8001F4EC: addiu       $t2, $t9, 0x68
    ctx->r10 = ADD32(ctx->r25, 0X68);
    // 0x8001F4F0: addiu       $t1, $t0, 0xA
    ctx->r9 = ADD32(ctx->r8, 0XA);
    // 0x8001F4F4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x8001F4F8: sw          $t2, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r10;
    // 0x8001F4FC: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    // 0x8001F500: jal         0x80038930
    // 0x8001F504: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    osPfsFindFile_recomp(rdram, ctx);
        goto after_0;
    // 0x8001F504: addiu       $a3, $t0, 0xE
    ctx->r7 = ADD32(ctx->r8, 0XE);
    after_0:
    // 0x8001F508: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8001F50C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001F510: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8001F514: sll         $t7, $t5, 5
    ctx->r15 = S32(ctx->r13 << 5);
    // 0x8001F518: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8001F51C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8001F520: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8001F524: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x8001F528: sw          $t3, 0x7C($t8)
    MEM_W(0X7C, ctx->r24) = ctx->r11;
    // 0x8001F52C: lw          $v0, 0x24($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X24);
    // 0x8001F530: b           L_8001F540
    // 0x8001F534: nop

        goto L_8001F540;
    // 0x8001F534: nop

    // 0x8001F538: b           L_8001F540
    // 0x8001F53C: nop

        goto L_8001F540;
    // 0x8001F53C: nop

L_8001F540:
    // 0x8001F540: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8001F544: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8001F548: jr          $ra
    // 0x8001F54C: nop

    return;
    // 0x8001F54C: nop

;}
RECOMP_FUNC void memset_recomp(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E220: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000E224: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x8000E228: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000E22C: beq         $a3, $zero, L_8000E25C
    if (ctx->r7 == 0) {
        // 0x8000E230: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8000E25C;
    }
    // 0x8000E230: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8000E234:
    // 0x8000E234: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8000E238: nop

    // 0x8000E23C: sb          $a1, 0x0($t6)
    MEM_B(0X0, ctx->r14) = ctx->r5;
    // 0x8000E240: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8000E244: nop

    // 0x8000E248: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000E24C: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x8000E250: or          $a3, $a2, $zero
    ctx->r7 = ctx->r6 | 0;
    // 0x8000E254: bne         $a3, $zero, L_8000E234
    if (ctx->r7 != 0) {
        // 0x8000E258: addiu       $a2, $a2, -0x1
        ctx->r6 = ADD32(ctx->r6, -0X1);
            goto L_8000E234;
    }
    // 0x8000E258: addiu       $a2, $a2, -0x1
    ctx->r6 = ADD32(ctx->r6, -0X1);
L_8000E25C:
    // 0x8000E25C: b           L_8000E26C
    // 0x8000E260: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
        goto L_8000E26C;
    // 0x8000E260: or          $v0, $a0, $zero
    ctx->r2 = ctx->r4 | 0;
    // 0x8000E264: b           L_8000E26C
    // 0x8000E268: nop

        goto L_8000E26C;
    // 0x8000E268: nop

L_8000E26C:
    // 0x8000E26C: jr          $ra
    // 0x8000E270: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000E270: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8002A0D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A0D0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8002A0D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002A0D8: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8002A0DC: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8002A0E0: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8002A0E4: sw          $a3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r7;
    // 0x8002A0E8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8002A0EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8002A0F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002A0F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A0F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002A0FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A100: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002A104: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8002A108: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002A10C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8002A110: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8002A114: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A118: nop

    // 0x8002A11C: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x8002A120: lwc1        $f6, 0x4C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4C);
    // 0x8002A124: nop

    // 0x8002A128: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A12C: swc1        $f8, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f8.u32l;
    // 0x8002A130: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A134: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x8002A138: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002A13C: lwc1        $f10, 0x28($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X28);
    // 0x8002A140: nop

    // 0x8002A144: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x8002A148: nop

    // 0x8002A14C: bc1f        L_8002A168
    if (!c1cs) {
        // 0x8002A150: nop
    
            goto L_8002A168;
    }
    // 0x8002A150: nop

    // 0x8002A154: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x8002A158: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002A15C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A160: nop

    // 0x8002A164: swc1        $f18, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f18.u32l;
L_8002A168:
    // 0x8002A168: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A16C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8002A170: lwc1        $f4, 0x28($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X28);
    // 0x8002A174: nop

    // 0x8002A178: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002A17C: nop

    // 0x8002A180: bc1f        L_8002A1D8
    if (!c1cs) {
        // 0x8002A184: nop
    
            goto L_8002A1D8;
    }
    // 0x8002A184: nop

    // 0x8002A188: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002A18C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8002A190: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8002A194: lw          $a3, 0x34($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X34);
    // 0x8002A198: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x8002A19C: addiu       $a2, $sp, 0x20
    ctx->r6 = ADD32(ctx->r29, 0X20);
    // 0x8002A1A0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8002A1A4: jal         0x800295C0
    // 0x8002A1A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_0;
    // 0x8002A1A8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_0:
    // 0x8002A1AC: beq         $v0, $zero, L_8002A1D8
    if (ctx->r2 == 0) {
        // 0x8002A1B0: nop
    
            goto L_8002A1D8;
    }
    // 0x8002A1B0: nop

    // 0x8002A1B4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8002A1B8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8002A1BC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8002A1C0: lwc1        $f16, 0x20($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8002A1C4: lwc1        $f18, 0x4($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8002A1C8: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x8002A1CC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8002A1D0: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A1D4: swc1        $f8, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f8.u32l;
L_8002A1D8:
    // 0x8002A1D8: lw          $v0, 0x28($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X28);
    // 0x8002A1DC: b           L_8002A1EC
    // 0x8002A1E0: nop

        goto L_8002A1EC;
    // 0x8002A1E0: nop

    // 0x8002A1E4: b           L_8002A1EC
    // 0x8002A1E8: nop

        goto L_8002A1EC;
    // 0x8002A1E8: nop

L_8002A1EC:
    // 0x8002A1EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002A1F0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8002A1F4: jr          $ra
    // 0x8002A1F8: nop

    return;
    // 0x8002A1F8: nop

;}
RECOMP_FUNC void func_80029EF8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80029EF8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80029EFC: sw          $a1, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r5;
    // 0x80029F00: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x80029F04: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80029F08: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80029F0C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80029F10: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x80029F14: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80029F18: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80029F1C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80029F20: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x80029F24: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80029F28: lwc1        $f4, 0xC($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0XC);
    // 0x80029F2C: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80029F30: nop

    // 0x80029F34: swc1        $f4, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f4.u32l;
    // 0x80029F38: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80029F3C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80029F40: nop

    // 0x80029F44: swc1        $f6, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = ctx->f6.u32l;
    // 0x80029F48: b           L_80029F50
    // 0x80029F4C: nop

        goto L_80029F50;
    // 0x80029F4C: nop

L_80029F50:
    // 0x80029F50: jr          $ra
    // 0x80029F54: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80029F54: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800258A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800258A0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800258A4: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800258A8: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800258AC: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800258B0: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x800258B4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800258B8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800258BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800258C0: lbu         $t8, 0x7498($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X7498);
    // 0x800258C4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800258C8: sb          $t8, 0x7653($at)
    MEM_B(0X7653, ctx->r1) = ctx->r24;
    // 0x800258CC: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800258D0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800258D4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800258D8: lbu         $t0, 0x7499($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X7499);
    // 0x800258DC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800258E0: sb          $t0, 0x7654($at)
    MEM_B(0X7654, ctx->r1) = ctx->r8;
    // 0x800258E4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800258E8: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800258EC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800258F0: lbu         $t2, 0x749A($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X749A);
    // 0x800258F4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800258F8: sb          $t2, 0x7655($at)
    MEM_B(0X7655, ctx->r1) = ctx->r10;
    // 0x800258FC: b           L_80025904
    // 0x80025900: nop

        goto L_80025904;
    // 0x80025900: nop

L_80025904:
    // 0x80025904: jr          $ra
    // 0x80025908: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80025908: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void alAdpcmPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800402AC: addiu       $sp, $sp, -0xB0
    ctx->r29 = ADD32(ctx->r29, -0XB0);
    // 0x800402B0: sw          $s7, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r23;
    // 0x800402B4: sw          $a3, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r7;
    // 0x800402B8: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x800402BC: or          $s7, $a0, $zero
    ctx->r23 = ctx->r4 | 0;
    // 0x800402C0: sw          $ra, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r31;
    // 0x800402C4: sw          $fp, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r30;
    // 0x800402C8: sw          $s6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r22;
    // 0x800402CC: sw          $s5, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r21;
    // 0x800402D0: sw          $s4, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r20;
    // 0x800402D4: sw          $s3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r19;
    // 0x800402D8: sw          $s2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r18;
    // 0x800402DC: sw          $s1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r17;
    // 0x800402E0: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800402E4: sw          $a1, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r5;
    // 0x800402E8: or          $t0, $a2, $zero
    ctx->r8 = ctx->r6 | 0;
    // 0x800402EC: bne         $a2, $zero, L_800402FC
    if (ctx->r6 != 0) {
        // 0x800402F0: or          $t5, $zero, $zero
        ctx->r13 = 0 | 0;
            goto L_800402FC;
    }
    // 0x800402F0: or          $t5, $zero, $zero
    ctx->r13 = 0 | 0;
    // 0x800402F4: b           L_8004071C
    // 0x800402F8: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
        goto L_8004071C;
    // 0x800402F8: lw          $v0, 0xC0($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XC0);
L_800402FC:
    // 0x800402FC: lw          $t6, 0x2C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X2C);
    // 0x80040300: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80040304: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80040308: lw          $a1, 0xC0($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XC0);
    // 0x8004030C: and         $t7, $t6, $at
    ctx->r15 = ctx->r14 & ctx->r1;
    // 0x80040310: lui         $at, 0xB00
    ctx->r1 = S32(0XB00 << 16);
    // 0x80040314: or          $t8, $t7, $at
    ctx->r24 = ctx->r15 | ctx->r1;
    // 0x80040318: sw          $t8, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r24;
    // 0x8004031C: lw          $t9, 0x28($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X28);
    // 0x80040320: lui         $at, 0x1FFF
    ctx->r1 = S32(0X1FFF << 16);
    // 0x80040324: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80040328: lw          $t6, 0x10($t9)
    ctx->r14 = MEM_W(ctx->r25, 0X10);
    // 0x8004032C: addiu       $t2, $a1, 0x8
    ctx->r10 = ADD32(ctx->r5, 0X8);
    // 0x80040330: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80040334: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80040338: and         $t8, $t7, $at
    ctx->r24 = ctx->r15 & ctx->r1;
    // 0x8004033C: sw          $t8, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r24;
    // 0x80040340: lw          $v1, 0x38($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X38);
    // 0x80040344: lw          $a0, 0x20($s7)
    ctx->r4 = MEM_W(ctx->r23, 0X20);
    // 0x80040348: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x8004034C: addu        $t9, $v1, $t0
    ctx->r25 = ADD32(ctx->r3, ctx->r8);
    // 0x80040350: sltu        $t1, $a0, $t9
    ctx->r9 = ctx->r4 < ctx->r25 ? 1 : 0;
    // 0x80040354: beq         $t1, $zero, L_80040368
    if (ctx->r9 == 0) {
        // 0x80040358: addiu       $t7, $zero, 0x10
        ctx->r15 = ADD32(0, 0X10);
            goto L_80040368;
    }
    // 0x80040358: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8004035C: lw          $t1, 0x24($s7)
    ctx->r9 = MEM_W(ctx->r23, 0X24);
    // 0x80040360: sltu        $t6, $zero, $t1
    ctx->r14 = 0 < ctx->r9 ? 1 : 0;
    // 0x80040364: or          $t1, $t6, $zero
    ctx->r9 = ctx->r14 | 0;
L_80040368:
    // 0x80040368: beq         $t1, $zero, L_80040378
    if (ctx->r9 == 0) {
        // 0x8004036C: addiu       $at, $zero, 0x9
        ctx->r1 = ADD32(0, 0X9);
            goto L_80040378;
    }
    // 0x8004036C: addiu       $at, $zero, 0x9
    ctx->r1 = ADD32(0, 0X9);
    // 0x80040370: b           L_80040378
    // 0x80040374: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
        goto L_80040378;
    // 0x80040374: subu        $a1, $a0, $v1
    ctx->r5 = SUB32(ctx->r4, ctx->r3);
L_80040378:
    // 0x80040378: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x8004037C: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80040380: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80040384: beq         $v1, $zero, L_80040394
    if (ctx->r3 == 0) {
        // 0x80040388: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_80040394;
    }
    // 0x80040388: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x8004038C: b           L_80040394
    // 0x80040390: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
        goto L_80040394;
    // 0x80040390: subu        $a2, $t7, $v1
    ctx->r6 = SUB32(ctx->r15, ctx->r3);
L_80040394:
    // 0x80040394: subu        $a0, $a1, $a2
    ctx->r4 = SUB32(ctx->r5, ctx->r6);
    // 0x80040398: bgez        $a0, L_800403A4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x8004039C: nop
    
            goto L_800403A4;
    }
    // 0x8004039C: nop

    // 0x800403A0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800403A4:
    // 0x800403A4: beq         $t1, $zero, L_800405AC
    if (ctx->r9 == 0) {
        // 0x800403A8: addiu       $fp, $a0, 0xF
        ctx->r30 = ADD32(ctx->r4, 0XF);
            goto L_800405AC;
    }
    // 0x800403A8: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x800403AC: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x800403B0: sra         $t8, $fp, 4
    ctx->r24 = S32(SIGNED(ctx->r30) >> 4);
    // 0x800403B4: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x800403B8: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x800403BC: sll         $t1, $t8, 3
    ctx->r9 = S32(ctx->r24 << 3);
    // 0x800403C0: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800403C4: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x800403C8: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x800403CC: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x800403D0: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x800403D4: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x800403D8: or          $fp, $t8, $zero
    ctx->r30 = ctx->r24 | 0;
    // 0x800403DC: jal         0x80040180
    // 0x800403E0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    static_0_80040180(rdram, ctx);
        goto after_0;
    // 0x800403E0: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_0:
    // 0x800403E4: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x800403E8: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x800403EC: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x800403F0: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x800403F4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x800403F8: beq         $v1, $zero, L_80040414
    if (ctx->r3 == 0) {
        // 0x800403FC: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_80040414;
    }
    // 0x800403FC: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80040400: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x80040404: sll         $t6, $v1, 1
    ctx->r14 = S32(ctx->r3 << 1);
    // 0x80040408: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x8004040C: b           L_80040420
    // 0x80040410: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
        goto L_80040420;
    // 0x80040410: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_80040414:
    // 0x80040414: lh          $t8, 0x0($a3)
    ctx->r24 = MEM_H(ctx->r7, 0X0);
    // 0x80040418: addiu       $t9, $t8, 0x20
    ctx->r25 = ADD32(ctx->r24, 0X20);
    // 0x8004041C: sh          $t9, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r25;
L_80040420:
    // 0x80040420: lw          $v0, 0x1C($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X1C);
    // 0x80040424: lw          $t7, 0x28($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X28);
    // 0x80040428: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8004042C: andi        $t6, $v0, 0xF
    ctx->r14 = ctx->r2 & 0XF;
    // 0x80040430: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x80040434: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x80040438: srl         $t9, $v0, 4
    ctx->r25 = S32(U32(ctx->r2) >> 4);
    // 0x8004043C: sll         $t6, $t9, 3
    ctx->r14 = S32(ctx->r25 << 3);
    // 0x80040440: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80040444: addu        $t7, $t8, $t6
    ctx->r15 = ADD32(ctx->r24, ctx->r14);
    // 0x80040448: addiu       $t9, $t7, 0x9
    ctx->r25 = ADD32(ctx->r15, 0X9);
    // 0x8004044C: sw          $t9, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r25;
    // 0x80040450: sw          $v0, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r2;
    // 0x80040454: beq         $at, $zero, L_8004057C
    if (ctx->r1 == 0) {
        // 0x80040458: lh          $a2, 0x0($a3)
        ctx->r6 = MEM_H(ctx->r7, 0X0);
            goto L_8004057C;
    }
    // 0x80040458: lh          $a2, 0x0($a3)
    ctx->r6 = MEM_H(ctx->r7, 0X0);
    // 0x8004045C: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
L_80040460:
    // 0x80040460: addiu       $t8, $fp, 0x1
    ctx->r24 = ADD32(ctx->r30, 0X1);
    // 0x80040464: sll         $t6, $t8, 5
    ctx->r14 = S32(ctx->r24 << 5);
    // 0x80040468: lw          $v0, 0x24($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X24);
    // 0x8004046C: addu        $a3, $t6, $a2
    ctx->r7 = ADD32(ctx->r14, ctx->r6);
    // 0x80040470: addiu       $at, $zero, -0x20
    ctx->r1 = ADD32(0, -0X20);
    // 0x80040474: and         $t7, $a3, $at
    ctx->r15 = ctx->r7 & ctx->r1;
    // 0x80040478: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8004047C: subu        $t0, $t0, $a1
    ctx->r8 = SUB32(ctx->r8, ctx->r5);
    // 0x80040480: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    // 0x80040484: beq         $v0, $at, L_80040498
    if (ctx->r2 == ctx->r1) {
        // 0x80040488: addu        $a2, $a2, $v1
        ctx->r6 = ADD32(ctx->r6, ctx->r3);
            goto L_80040498;
    }
    // 0x80040488: addu        $a2, $a2, $v1
    ctx->r6 = ADD32(ctx->r6, ctx->r3);
    // 0x8004048C: beq         $v0, $zero, L_80040498
    if (ctx->r2 == 0) {
        // 0x80040490: addiu       $t9, $v0, -0x1
        ctx->r25 = ADD32(ctx->r2, -0X1);
            goto L_80040498;
    }
    // 0x80040490: addiu       $t9, $v0, -0x1
    ctx->r25 = ADD32(ctx->r2, -0X1);
    // 0x80040494: sw          $t9, 0x24($s7)
    MEM_W(0X24, ctx->r23) = ctx->r25;
L_80040498:
    // 0x80040498: lw          $t8, 0x20($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X20);
    // 0x8004049C: lw          $t6, 0x1C($s7)
    ctx->r14 = MEM_W(ctx->r23, 0X1C);
    // 0x800404A0: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x800404A4: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x800404A8: subu        $v0, $t8, $t6
    ctx->r2 = SUB32(ctx->r24, ctx->r14);
    // 0x800404AC: sltu        $at, $t0, $v0
    ctx->r1 = ctx->r8 < ctx->r2 ? 1 : 0;
    // 0x800404B0: beq         $at, $zero, L_800404C0
    if (ctx->r1 == 0) {
        // 0x800404B4: sll         $s5, $a3, 16
        ctx->r21 = S32(ctx->r7 << 16);
            goto L_800404C0;
    }
    // 0x800404B4: sll         $s5, $a3, 16
    ctx->r21 = S32(ctx->r7 << 16);
    // 0x800404B8: b           L_800404C4
    // 0x800404BC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
        goto L_800404C4;
    // 0x800404BC: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
L_800404C0:
    // 0x800404C0: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
L_800404C4:
    // 0x800404C4: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x800404C8: sra         $t8, $s5, 16
    ctx->r24 = S32(SIGNED(ctx->r21) >> 16);
    // 0x800404CC: or          $s5, $t8, $zero
    ctx->r21 = ctx->r24 | 0;
    // 0x800404D0: addu        $a0, $a1, $t7
    ctx->r4 = ADD32(ctx->r5, ctx->r15);
    // 0x800404D4: addiu       $a0, $a0, -0x10
    ctx->r4 = ADD32(ctx->r4, -0X10);
    // 0x800404D8: bgez        $a0, L_800404E4
    if (SIGNED(ctx->r4) >= 0) {
        // 0x800404DC: or          $s3, $zero, $zero
        ctx->r19 = 0 | 0;
            goto L_800404E4;
    }
    // 0x800404DC: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    // 0x800404E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
L_800404E4:
    // 0x800404E4: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x800404E8: addiu       $fp, $a0, 0xF
    ctx->r30 = ADD32(ctx->r4, 0XF);
    // 0x800404EC: sra         $t9, $fp, 4
    ctx->r25 = S32(SIGNED(ctx->r30) >> 4);
    // 0x800404F0: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x800404F4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x800404F8: ori         $t6, $s4, 0x2
    ctx->r14 = ctx->r20 | 0X2;
    // 0x800404FC: or          $s4, $t6, $zero
    ctx->r20 = ctx->r14 | 0;
    // 0x80040500: or          $s1, $t1, $zero
    ctx->r17 = ctx->r9 | 0;
    // 0x80040504: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x80040508: or          $fp, $t9, $zero
    ctx->r30 = ctx->r25 | 0;
    // 0x8004050C: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x80040510: sw          $a3, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r7;
    // 0x80040514: sw          $a2, 0x80($sp)
    MEM_W(0X80, ctx->r29) = ctx->r6;
    // 0x80040518: sw          $a1, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r5;
    // 0x8004051C: jal         0x80040180
    // 0x80040520: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    static_0_80040180(rdram, ctx);
        goto after_1;
    // 0x80040520: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    after_1:
    // 0x80040524: lw          $t7, 0x3C($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X3C);
    // 0x80040528: lw          $a3, 0x88($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X88);
    // 0x8004052C: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x80040530: sll         $t9, $t7, 1
    ctx->r25 = S32(ctx->r15 << 1);
    // 0x80040534: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x80040538: addu        $t8, $t9, $a3
    ctx->r24 = ADD32(ctx->r25, ctx->r7);
    // 0x8004053C: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80040540: lw          $a1, 0x8C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X8C);
    // 0x80040544: lui         $at, 0xA00
    ctx->r1 = S32(0XA00 << 16);
    // 0x80040548: lw          $a2, 0x80($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X80);
    // 0x8004054C: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80040550: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x80040554: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80040558: sll         $v1, $a1, 1
    ctx->r3 = S32(ctx->r5 << 1);
    // 0x8004055C: andi        $t6, $v1, 0xFFFF
    ctx->r14 = ctx->r3 & 0XFFFF;
    // 0x80040560: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80040564: sll         $t8, $a2, 16
    ctx->r24 = S32(ctx->r6 << 16);
    // 0x80040568: or          $t7, $t8, $t6
    ctx->r15 = ctx->r24 | ctx->r14;
    // 0x8004056C: slt         $at, $a1, $t0
    ctx->r1 = SIGNED(ctx->r5) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80040570: sw          $t7, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r15;
    // 0x80040574: bne         $at, $zero, L_80040460
    if (ctx->r1 != 0) {
        // 0x80040578: addiu       $t2, $v0, 0x8
        ctx->r10 = ADD32(ctx->r2, 0X8);
            goto L_80040460;
    }
    // 0x80040578: addiu       $t2, $v0, 0x8
    ctx->r10 = ADD32(ctx->r2, 0X8);
L_8004057C:
    // 0x8004057C: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x80040580: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x80040584: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x80040588: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x8004058C: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x80040590: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x80040594: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x80040598: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8004059C: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x800405A0: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x800405A4: b           L_8004071C
    // 0x800405A8: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_8004071C;
    // 0x800405A8: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_800405AC:
    // 0x800405AC: lw          $v0, 0x28($s7)
    ctx->r2 = MEM_W(ctx->r23, 0X28);
    // 0x800405B0: sra         $t7, $fp, 4
    ctx->r15 = S32(SIGNED(ctx->r30) >> 4);
    // 0x800405B4: lw          $t9, 0x44($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X44);
    // 0x800405B8: sll         $t1, $t7, 3
    ctx->r9 = S32(ctx->r15 << 3);
    // 0x800405BC: lw          $t8, 0x0($v0)
    ctx->r24 = MEM_W(ctx->r2, 0X0);
    // 0x800405C0: addu        $t1, $t1, $t7
    ctx->r9 = ADD32(ctx->r9, ctx->r15);
    // 0x800405C4: or          $fp, $t7, $zero
    ctx->r30 = ctx->r15 | 0;
    // 0x800405C8: lw          $t7, 0x4($v0)
    ctx->r15 = MEM_W(ctx->r2, 0X4);
    // 0x800405CC: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x800405D0: subu        $t6, $t3, $t8
    ctx->r14 = SUB32(ctx->r11, ctx->r24);
    // 0x800405D4: subu        $v1, $t6, $t7
    ctx->r3 = SUB32(ctx->r14, ctx->r15);
    // 0x800405D8: bgez        $v1, L_800405E4
    if (SIGNED(ctx->r3) >= 0) {
        // 0x800405DC: sll         $a1, $fp, 4
        ctx->r5 = S32(ctx->r30 << 4);
            goto L_800405E4;
    }
    // 0x800405DC: sll         $a1, $fp, 4
    ctx->r5 = S32(ctx->r30 << 4);
    // 0x800405E0: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800405E4:
    // 0x800405E4: div         $zero, $v1, $at
    lo = S32(S64(S32(ctx->r3)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r3)) % S64(S32(ctx->r1)));
    // 0x800405E8: mflo        $v0
    ctx->r2 = lo;
    // 0x800405EC: sll         $a0, $v0, 4
    ctx->r4 = S32(ctx->r2 << 4);
    // 0x800405F0: addu        $t4, $a1, $a2
    ctx->r12 = ADD32(ctx->r5, ctx->r6);
    // 0x800405F4: slt         $at, $t4, $a0
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x800405F8: beq         $at, $zero, L_80040604
    if (ctx->r1 == 0) {
        // 0x800405FC: or          $s0, $t2, $zero
        ctx->r16 = ctx->r10 | 0;
            goto L_80040604;
    }
    // 0x800405FC: or          $s0, $t2, $zero
    ctx->r16 = ctx->r10 | 0;
    // 0x80040600: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
L_80040604:
    // 0x80040604: andi        $t8, $a0, 0xF
    ctx->r24 = ctx->r4 & 0XF;
    // 0x80040608: subu        $t6, $a0, $t8
    ctx->r14 = SUB32(ctx->r4, ctx->r24);
    // 0x8004060C: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x80040610: beq         $at, $zero, L_800406C0
    if (ctx->r1 == 0) {
        // 0x80040614: subu        $a2, $t1, $v1
        ctx->r6 = SUB32(ctx->r9, ctx->r3);
            goto L_800406C0;
    }
    // 0x80040614: subu        $a2, $t1, $v1
    ctx->r6 = SUB32(ctx->r9, ctx->r3);
    // 0x80040618: lh          $s5, 0x0($a3)
    ctx->r21 = MEM_H(ctx->r7, 0X0);
    // 0x8004061C: lw          $s4, 0x40($s7)
    ctx->r20 = MEM_W(ctx->r23, 0X40);
    // 0x80040620: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80040624: sw          $t5, 0x7C($sp)
    MEM_W(0X7C, ctx->r29) = ctx->r13;
    // 0x80040628: sw          $t4, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r12;
    // 0x8004062C: sw          $t1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r9;
    // 0x80040630: sw          $t0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r8;
    // 0x80040634: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x80040638: sw          $a0, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r4;
    // 0x8004063C: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80040640: subu        $s6, $a1, $a0
    ctx->r22 = SUB32(ctx->r5, ctx->r4);
    // 0x80040644: or          $s1, $a2, $zero
    ctx->r17 = ctx->r6 | 0;
    // 0x80040648: jal         0x80040180
    // 0x8004064C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    static_0_80040180(rdram, ctx);
        goto after_2;
    // 0x8004064C: or          $s3, $zero, $zero
    ctx->r19 = 0 | 0;
    after_2:
    // 0x80040650: lw          $v1, 0x3C($s7)
    ctx->r3 = MEM_W(ctx->r23, 0X3C);
    // 0x80040654: lw          $a0, 0x90($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X90);
    // 0x80040658: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8004065C: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x80040660: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80040664: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80040668: lw          $t5, 0x7C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X7C);
    // 0x8004066C: beq         $v1, $zero, L_80040688
    if (ctx->r3 == 0) {
        // 0x80040670: or          $t2, $v0, $zero
        ctx->r10 = ctx->r2 | 0;
            goto L_80040688;
    }
    // 0x80040670: or          $t2, $v0, $zero
    ctx->r10 = ctx->r2 | 0;
    // 0x80040674: lh          $t7, 0x0($a3)
    ctx->r15 = MEM_H(ctx->r7, 0X0);
    // 0x80040678: sll         $t9, $v1, 1
    ctx->r25 = S32(ctx->r3 << 1);
    // 0x8004067C: addu        $t8, $t7, $t9
    ctx->r24 = ADD32(ctx->r15, ctx->r25);
    // 0x80040680: b           L_80040694
    // 0x80040684: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
        goto L_80040694;
    // 0x80040684: sh          $t8, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r24;
L_80040688:
    // 0x80040688: lh          $t6, 0x0($a3)
    ctx->r14 = MEM_H(ctx->r7, 0X0);
    // 0x8004068C: addiu       $t7, $t6, 0x20
    ctx->r15 = ADD32(ctx->r14, 0X20);
    // 0x80040690: sh          $t7, 0x0($a3)
    MEM_H(0X0, ctx->r7) = ctx->r15;
L_80040694:
    // 0x80040694: lw          $t9, 0x3C($s7)
    ctx->r25 = MEM_W(ctx->r23, 0X3C);
    // 0x80040698: lw          $t7, 0x38($s7)
    ctx->r15 = MEM_W(ctx->r23, 0X38);
    // 0x8004069C: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x800406A0: andi        $t6, $t8, 0xF
    ctx->r14 = ctx->r24 & 0XF;
    // 0x800406A4: lw          $t8, 0x44($s7)
    ctx->r24 = MEM_W(ctx->r23, 0X44);
    // 0x800406A8: sw          $t6, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = ctx->r14;
    // 0x800406AC: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x800406B0: addu        $t6, $t8, $t1
    ctx->r14 = ADD32(ctx->r24, ctx->r9);
    // 0x800406B4: sw          $t9, 0x38($s7)
    MEM_W(0X38, ctx->r23) = ctx->r25;
    // 0x800406B8: b           L_800406C8
    // 0x800406BC: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
        goto L_800406C8;
    // 0x800406BC: sw          $t6, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r14;
L_800406C0:
    // 0x800406C0: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x800406C4: sw          $t3, 0x44($s7)
    MEM_W(0X44, ctx->r23) = ctx->r11;
L_800406C8:
    // 0x800406C8: beq         $a0, $zero, L_80040718
    if (ctx->r4 == 0) {
        // 0x800406CC: or          $v0, $t2, $zero
        ctx->r2 = ctx->r10 | 0;
            goto L_80040718;
    }
    // 0x800406CC: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x800406D0: beq         $t5, $zero, L_800406E8
    if (ctx->r13 == 0) {
        // 0x800406D4: sw          $zero, 0x3C($s7)
        MEM_W(0X3C, ctx->r23) = 0;
            goto L_800406E8;
    }
    // 0x800406D4: sw          $zero, 0x3C($s7)
    MEM_W(0X3C, ctx->r23) = 0;
    // 0x800406D8: subu        $v1, $t4, $a0
    ctx->r3 = SUB32(ctx->r12, ctx->r4);
    // 0x800406DC: sll         $t7, $v1, 1
    ctx->r15 = S32(ctx->r3 << 1);
    // 0x800406E0: b           L_800406EC
    // 0x800406E4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
        goto L_800406EC;
    // 0x800406E4: or          $v1, $t7, $zero
    ctx->r3 = ctx->r15 | 0;
L_800406E8:
    // 0x800406E8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
L_800406EC:
    // 0x800406EC: lh          $t9, 0x0($a3)
    ctx->r25 = MEM_H(ctx->r7, 0X0);
    // 0x800406F0: lui         $at, 0xFF
    ctx->r1 = S32(0XFF << 16);
    // 0x800406F4: ori         $at, $at, 0xFFFF
    ctx->r1 = ctx->r1 | 0XFFFF;
    // 0x800406F8: addu        $t8, $t9, $v1
    ctx->r24 = ADD32(ctx->r25, ctx->r3);
    // 0x800406FC: and         $t6, $t8, $at
    ctx->r14 = ctx->r24 & ctx->r1;
    // 0x80040700: lui         $at, 0x200
    ctx->r1 = S32(0X200 << 16);
    // 0x80040704: or          $t7, $t6, $at
    ctx->r15 = ctx->r14 | ctx->r1;
    // 0x80040708: sll         $t9, $a0, 1
    ctx->r25 = S32(ctx->r4 << 1);
    // 0x8004070C: sw          $t9, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r25;
    // 0x80040710: sw          $t7, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r15;
    // 0x80040714: addiu       $t2, $t2, 0x8
    ctx->r10 = ADD32(ctx->r10, 0X8);
L_80040718:
    // 0x80040718: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
L_8004071C:
    // 0x8004071C: lw          $ra, 0x4C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X4C);
    // 0x80040720: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x80040724: lw          $s1, 0x2C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X2C);
    // 0x80040728: lw          $s2, 0x30($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X30);
    // 0x8004072C: lw          $s3, 0x34($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X34);
    // 0x80040730: lw          $s4, 0x38($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X38);
    // 0x80040734: lw          $s5, 0x3C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X3C);
    // 0x80040738: lw          $s6, 0x40($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X40);
    // 0x8004073C: lw          $s7, 0x44($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X44);
    // 0x80040740: lw          $fp, 0x48($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X48);
    // 0x80040744: jr          $ra
    // 0x80040748: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
    return;
    // 0x80040748: addiu       $sp, $sp, 0xB0
    ctx->r29 = ADD32(ctx->r29, 0XB0);
;}
RECOMP_FUNC void func_800111D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800111D4: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x800111D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800111DC: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x800111E0: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x800111E4: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x800111E8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800111EC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800111F0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800111F4: lw          $t6, 0x5D54($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5D54);
    // 0x800111F8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800111FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80011200: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80011204: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x80011208: nop

    // 0x8001120C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80011210: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80011214: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80011218: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8001121C: lw          $t1, 0x5D54($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5D54);
    // 0x80011220: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80011224: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80011228: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8001122C: lw          $t5, 0x8($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X8);
    // 0x80011230: nop

    // 0x80011234: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x80011238: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8001123C: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x80011240: blez        $t7, L_8001140C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80011244: nop
    
            goto L_8001140C;
    }
    // 0x80011244: nop

L_80011248:
    // 0x80011248: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x8001124C: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80011250: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80011254: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80011258: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8001125C: subu        $t8, $t8, $t6
    ctx->r24 = SUB32(ctx->r24, ctx->r14);
    // 0x80011260: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80011264: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80011268: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8001126C: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x80011270: nop

    // 0x80011274: lw          $t1, 0x28($t2)
    ctx->r9 = MEM_W(ctx->r10, 0X28);
    // 0x80011278: nop

    // 0x8001127C: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x80011280: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80011284: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80011288: sw          $t3, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r11;
    // 0x8001128C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80011290: nop

    // 0x80011294: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x80011298: bne         $at, $zero, L_800112F8
    if (ctx->r1 != 0) {
        // 0x8001129C: nop
    
            goto L_800112F8;
    }
    // 0x8001129C: nop

L_800112A0:
    // 0x800112A0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800112A4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800112A8: lw          $t6, 0x0($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X0);
    // 0x800112AC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800112B0: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800112B4: addu        $t0, $t6, $t9
    ctx->r8 = ADD32(ctx->r14, ctx->r25);
    // 0x800112B8: lw          $t2, 0x0($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X0);
    // 0x800112BC: lw          $t4, 0xC($t3)
    ctx->r12 = MEM_W(ctx->r11, 0XC);
    // 0x800112C0: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x800112C4: addu        $t5, $t4, $t1
    ctx->r13 = ADD32(ctx->r12, ctx->r9);
    // 0x800112C8: lw          $t7, 0x0($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X0);
    // 0x800112CC: nop

    // 0x800112D0: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x800112D4: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x800112D8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800112DC: addiu       $t6, $t8, 0x1
    ctx->r14 = ADD32(ctx->r24, 0X1);
    // 0x800112E0: sw          $t6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r14;
    // 0x800112E4: lw          $t0, 0x4($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X4);
    // 0x800112E8: nop

    // 0x800112EC: slt         $at, $t6, $t0
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x800112F0: bne         $at, $zero, L_800112A0
    if (ctx->r1 != 0) {
        // 0x800112F4: nop
    
            goto L_800112A0;
    }
    // 0x800112F4: nop

L_800112F8:
    // 0x800112F8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800112FC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80011300: lw          $t5, 0x4($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X4);
    // 0x80011304: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80011308: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8001130C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80011310: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80011314: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80011318: lw          $t8, 0x5D50($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5D50);
    // 0x8001131C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80011320: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80011324: subu        $t7, $t7, $t5
    ctx->r15 = SUB32(ctx->r15, ctx->r13);
    // 0x80011328: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8001132C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80011330: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80011334: addu        $a2, $t7, $t8
    ctx->r6 = ADD32(ctx->r15, ctx->r24);
    // 0x80011338: addu        $a1, $t4, $t1
    ctx->r5 = ADD32(ctx->r12, ctx->r9);
    // 0x8001133C: addiu       $a1, $a1, 0x8
    ctx->r5 = ADD32(ctx->r5, 0X8);
    // 0x80011340: addiu       $a2, $a2, 0x4
    ctx->r6 = ADD32(ctx->r6, 0X4);
    // 0x80011344: jal         0x80010C14
    // 0x80011348: addiu       $a0, $t2, 0x14
    ctx->r4 = ADD32(ctx->r10, 0X14);
    func_80010C14(rdram, ctx);
        goto after_0;
    // 0x80011348: addiu       $a0, $t2, 0x14
    ctx->r4 = ADD32(ctx->r10, 0X14);
    after_0:
    // 0x8001134C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80011350: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80011354: lw          $t4, 0x4($t9)
    ctx->r12 = MEM_W(ctx->r25, 0X4);
    // 0x80011358: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8001135C: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x80011360: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80011364: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80011368: sll         $t1, $t4, 2
    ctx->r9 = S32(ctx->r12 << 2);
    // 0x8001136C: lw          $t2, 0x5D50($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5D50);
    // 0x80011370: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80011374: subu        $t0, $t0, $t6
    ctx->r8 = SUB32(ctx->r8, ctx->r14);
    // 0x80011378: subu        $t1, $t1, $t4
    ctx->r9 = SUB32(ctx->r9, ctx->r12);
    // 0x8001137C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80011380: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80011384: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x80011388: addu        $a2, $t1, $t2
    ctx->r6 = ADD32(ctx->r9, ctx->r10);
    // 0x8001138C: addu        $a1, $t0, $t3
    ctx->r5 = ADD32(ctx->r8, ctx->r11);
    // 0x80011390: addiu       $a1, $a1, 0x14
    ctx->r5 = ADD32(ctx->r5, 0X14);
    // 0x80011394: addiu       $a2, $a2, 0x10
    ctx->r6 = ADD32(ctx->r6, 0X10);
    // 0x80011398: jal         0x80010C14
    // 0x8001139C: addiu       $a0, $t9, 0x20
    ctx->r4 = ADD32(ctx->r25, 0X20);
    func_80010C14(rdram, ctx);
        goto after_1;
    // 0x8001139C: addiu       $a0, $t9, 0x20
    ctx->r4 = ADD32(ctx->r25, 0X20);
    after_1:
    // 0x800113A0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x800113A4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x800113A8: lw          $t0, 0x4($t5)
    ctx->r8 = MEM_W(ctx->r13, 0X4);
    // 0x800113AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800113B0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800113B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800113B8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800113BC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800113C0: lw          $t9, 0x5D50($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X5D50);
    // 0x800113C4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800113C8: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800113CC: subu        $t3, $t3, $t0
    ctx->r11 = SUB32(ctx->r11, ctx->r8);
    // 0x800113D0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800113D4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800113D8: lw          $a3, 0x48($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X48);
    // 0x800113DC: addu        $a2, $t3, $t9
    ctx->r6 = ADD32(ctx->r11, ctx->r25);
    // 0x800113E0: addu        $a1, $t8, $t6
    ctx->r5 = ADD32(ctx->r24, ctx->r14);
    // 0x800113E4: addiu       $a1, $a1, 0x20
    ctx->r5 = ADD32(ctx->r5, 0X20);
    // 0x800113E8: addiu       $a2, $a2, 0x1C
    ctx->r6 = ADD32(ctx->r6, 0X1C);
    // 0x800113EC: jal         0x80010C14
    // 0x800113F0: addiu       $a0, $t5, 0x2C
    ctx->r4 = ADD32(ctx->r13, 0X2C);
    func_80010C14(rdram, ctx);
        goto after_2;
    // 0x800113F0: addiu       $a0, $t5, 0x2C
    ctx->r4 = ADD32(ctx->r13, 0X2C);
    after_2:
    // 0x800113F4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x800113F8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800113FC: addiu       $t1, $t4, 0x1
    ctx->r9 = ADD32(ctx->r12, 0X1);
    // 0x80011400: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80011404: bne         $at, $zero, L_80011248
    if (ctx->r1 != 0) {
        // 0x80011408: sw          $t1, 0x3C($sp)
        MEM_W(0X3C, ctx->r29) = ctx->r9;
            goto L_80011248;
    }
    // 0x80011408: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
L_8001140C:
    // 0x8001140C: b           L_80011414
    // 0x80011410: nop

        goto L_80011414;
    // 0x80011410: nop

L_80011414:
    // 0x80011414: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011418: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8001141C: jr          $ra
    // 0x80011420: nop

    return;
    // 0x80011420: nop

;}
RECOMP_FUNC void __seqpReleaseVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003CFEC: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x8003CFF0: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x8003CFF4: sw          $s6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r22;
    // 0x8003CFF8: sw          $s5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r21;
    // 0x8003CFFC: sw          $s4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r20;
    // 0x8003D000: sw          $s3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r19;
    // 0x8003D004: sw          $s2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r18;
    // 0x8003D008: sw          $s1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r17;
    // 0x8003D00C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8003D010: sw          $a2, 0x68($sp)
    MEM_W(0X68, ctx->r29) = ctx->r6;
    // 0x8003D014: lw          $s6, 0x10($a1)
    ctx->r22 = MEM_W(ctx->r5, 0X10);
    // 0x8003D018: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8003D01C: or          $s5, $a1, $zero
    ctx->r21 = ctx->r5 | 0;
    // 0x8003D020: lbu         $t6, 0x34($s6)
    ctx->r14 = MEM_BU(ctx->r22, 0X34);
    // 0x8003D024: bnel        $t6, $zero, L_8003D090
    if (ctx->r14 != 0) {
        // 0x8003D028: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_8003D090;
    }
    goto skip_0;
    // 0x8003D028: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_0:
    // 0x8003D02C: lw          $s0, 0x50($a0)
    ctx->r16 = MEM_W(ctx->r4, 0X50);
    // 0x8003D030: addiu       $s3, $zero, 0x6
    ctx->r19 = ADD32(0, 0X6);
    // 0x8003D034: beql        $s0, $zero, L_8003D090
    if (ctx->r16 == 0) {
        // 0x8003D038: addiu       $t2, $zero, 0x3
        ctx->r10 = ADD32(0, 0X3);
            goto L_8003D090;
    }
    goto skip_1;
    // 0x8003D038: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    skip_1:
L_8003D03C:
    // 0x8003D03C: lh          $t7, 0xC($s0)
    ctx->r15 = MEM_H(ctx->r16, 0XC);
    // 0x8003D040: lw          $s1, 0x0($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X0);
    // 0x8003D044: bne         $s3, $t7, L_8003D084
    if (ctx->r19 != ctx->r15) {
        // 0x8003D048: nop
    
            goto L_8003D084;
    }
    // 0x8003D048: nop

    // 0x8003D04C: lw          $t8, 0x10($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X10);
    // 0x8003D050: bne         $s5, $t8, L_8003D084
    if (ctx->r21 != ctx->r24) {
        // 0x8003D054: nop
    
            goto L_8003D084;
    }
    // 0x8003D054: nop

    // 0x8003D058: beq         $s1, $zero, L_8003D070
    if (ctx->r17 == 0) {
        // 0x8003D05C: addiu       $s2, $s4, 0x48
        ctx->r18 = ADD32(ctx->r20, 0X48);
            goto L_8003D070;
    }
    // 0x8003D05C: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    // 0x8003D060: lw          $t9, 0x8($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X8);
    // 0x8003D064: lw          $t0, 0x8($s0)
    ctx->r8 = MEM_W(ctx->r16, 0X8);
    // 0x8003D068: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8003D06C: sw          $t1, 0x8($s1)
    MEM_W(0X8, ctx->r17) = ctx->r9;
L_8003D070:
    // 0x8003D070: jal         0x800357B0
    // 0x8003D074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alUnlink(rdram, ctx);
        goto after_0;
    // 0x8003D074: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_0:
    // 0x8003D078: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    // 0x8003D07C: jal         0x800357E0
    // 0x8003D080: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    alLink(rdram, ctx);
        goto after_1;
    // 0x8003D080: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_1:
L_8003D084:
    // 0x8003D084: bne         $s1, $zero, L_8003D03C
    if (ctx->r17 != 0) {
        // 0x8003D088: or          $s0, $s1, $zero
        ctx->r16 = ctx->r17 | 0;
            goto L_8003D03C;
    }
    // 0x8003D088: or          $s0, $s1, $zero
    ctx->r16 = ctx->r17 | 0;
    // 0x8003D08C: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
L_8003D090:
    // 0x8003D090: sb          $zero, 0x33($s6)
    MEM_B(0X33, ctx->r22) = 0;
    // 0x8003D094: sb          $t2, 0x34($s6)
    MEM_B(0X34, ctx->r22) = ctx->r10;
    // 0x8003D098: sb          $zero, 0x30($s6)
    MEM_B(0X30, ctx->r22) = 0;
    // 0x8003D09C: lw          $t4, 0x68($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X68);
    // 0x8003D0A0: lw          $t3, 0x1C($s4)
    ctx->r11 = MEM_W(ctx->r20, 0X1C);
    // 0x8003D0A4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8003D0A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003D0AC: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8003D0B0: sw          $t5, 0x24($s6)
    MEM_W(0X24, ctx->r22) = ctx->r13;
    // 0x8003D0B4: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x8003D0B8: jal         0x80046370
    // 0x8003D0BC: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    alSynSetPriority(rdram, ctx);
        goto after_2;
    // 0x8003D0BC: addiu       $s2, $s4, 0x48
    ctx->r18 = ADD32(ctx->r20, 0X48);
    after_2:
    // 0x8003D0C0: lw          $a0, 0x14($s4)
    ctx->r4 = MEM_W(ctx->r20, 0X14);
    // 0x8003D0C4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x8003D0C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8003D0CC: jal         0x8003EBB0
    // 0x8003D0D0: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    alSynSetVol(rdram, ctx);
        goto after_3;
    // 0x8003D0D0: lw          $a3, 0x68($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X68);
    after_3:
    // 0x8003D0D4: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x8003D0D8: sh          $t6, 0x50($sp)
    MEM_H(0X50, ctx->r29) = ctx->r14;
    // 0x8003D0DC: sw          $s5, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r21;
    // 0x8003D0E0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x8003D0E4: addiu       $a1, $sp, 0x50
    ctx->r5 = ADD32(ctx->r29, 0X50);
    // 0x8003D0E8: jal         0x8003E80C
    // 0x8003D0EC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    alEvtqPostEvent(rdram, ctx);
        goto after_4;
    // 0x8003D0EC: lw          $a2, 0x68($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X68);
    after_4:
    // 0x8003D0F0: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x8003D0F4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8003D0F8: lw          $s1, 0x1C($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X1C);
    // 0x8003D0FC: lw          $s2, 0x20($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X20);
    // 0x8003D100: lw          $s3, 0x24($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X24);
    // 0x8003D104: lw          $s4, 0x28($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X28);
    // 0x8003D108: lw          $s5, 0x2C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X2C);
    // 0x8003D10C: lw          $s6, 0x30($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X30);
    // 0x8003D110: jr          $ra
    // 0x8003D114: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8003D114: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_8001EBE8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EBE8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001EBEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EBF0: sw          $t6, -0x1F68($at)
    MEM_W(-0X1F68, ctx->r1) = ctx->r14;
    // 0x8001EBF4: jr          $ra
    // 0x8001EBF8: nop

    return;
    // 0x8001EBF8: nop

    // 0x8001EBFC: jr          $ra
    // 0x8001EC00: nop

    return;
    // 0x8001EC00: nop

;}
RECOMP_FUNC void clear_compression_buffer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80000924: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80000928: lui         $t6, 0x8038
    ctx->r14 = S32(0X8038 << 16);
    // 0x8000092C: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_80000930:
    // 0x80000930: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80000934: nop

    // 0x80000938: sb          $zero, 0x0($t7)
    MEM_B(0X0, ctx->r15) = 0;
    // 0x8000093C: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80000940: lui         $at, 0x8040
    ctx->r1 = S32(0X8040 << 16);
    // 0x80000944: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x80000948: sltu        $at, $t9, $at
    ctx->r1 = ctx->r25 < ctx->r1 ? 1 : 0;
    // 0x8000094C: bne         $at, $zero, L_80000930
    if (ctx->r1 != 0) {
        // 0x80000950: sw          $t9, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r25;
            goto L_80000930;
    }
    // 0x80000950: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80000954: b           L_8000095C
    // 0x80000958: nop

        goto L_8000095C;
    // 0x80000958: nop

L_8000095C:
    // 0x8000095C: jr          $ra
    // 0x80000960: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80000960: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80001314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000131C: lui         $t6, 0x1A
    ctx->r14 = S32(0X1A << 16);
    // 0x80001320: lui         $t7, 0x1B
    ctx->r15 = S32(0X1B << 16);
    // 0x80001324: addiu       $t7, $t7, -0x7640
    ctx->r15 = ADD32(ctx->r15, -0X7640);
    // 0x80001328: addiu       $t6, $t6, -0x39F0
    ctx->r14 = ADD32(ctx->r14, -0X39F0);
    // 0x8000132C: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001330: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001334: jal         0x8000068C
    // 0x80001338: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001338: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x8000133C: lui         $t8, 0x1D
    ctx->r24 = S32(0X1D << 16);
    // 0x80001340: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x80001344: addiu       $t9, $t9, -0x4080
    ctx->r25 = ADD32(ctx->r25, -0X4080);
    // 0x80001348: addiu       $t8, $t8, -0x5470
    ctx->r24 = ADD32(ctx->r24, -0X5470);
    // 0x8000134C: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x80001350: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x80001354: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x80001358: jal         0x8000068C
    // 0x8000135C: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x8000135C: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x80001360: b           L_80001368
    // 0x80001364: nop

        goto L_80001368;
    // 0x80001364: nop

L_80001368:
    // 0x80001368: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000136C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001370: jr          $ra
    // 0x80001374: nop

    return;
    // 0x80001374: nop

;}
RECOMP_FUNC void func_80007BC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80007BC4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80007BC8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80007BCC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80007BD0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007BD4: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007BD8: jal         0x80035520
    // 0x80007BDC: nop

    alSndpGetSound(rdram, ctx);
        goto after_0;
    // 0x80007BDC: nop

    after_0:
    // 0x80007BE0: sh          $v0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r2;
    // 0x80007BE4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007BE8: sw          $zero, 0x2D64($at)
    MEM_W(0X2D64, ctx->r1) = 0;
    // 0x80007BEC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80007BF0: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x80007BF4: sh          $zero, 0x28($sp)
    MEM_H(0X28, ctx->r29) = 0;
    // 0x80007BF8: blez        $t6, L_80007E74
    if (SIGNED(ctx->r14) <= 0) {
        // 0x80007BFC: nop
    
            goto L_80007E74;
    }
    // 0x80007BFC: nop

L_80007C00:
    // 0x80007C00: lh          $t7, 0x28($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X28);
    // 0x80007C04: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80007C08: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80007C0C: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80007C10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80007C14: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x80007C18: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x80007C1C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80007C20: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x80007C24: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x80007C28: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80007C2C: nop

    // 0x80007C30: lh          $t2, 0x16($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X16);
    // 0x80007C34: nop

    // 0x80007C38: bltz        $t2, L_80007DC0
    if (SIGNED(ctx->r10) < 0) {
        // 0x80007C3C: nop
    
            goto L_80007DC0;
    }
    // 0x80007C3C: nop

    // 0x80007C40: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80007C44: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007C48: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007C4C: lh          $a1, 0x16($t3)
    ctx->r5 = MEM_H(ctx->r11, 0X16);
    // 0x80007C50: jal         0x80035310
    // 0x80007C54: nop

    alSndpSetSound(rdram, ctx);
        goto after_1;
    // 0x80007C54: nop

    after_1:
    // 0x80007C58: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007C5C: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007C60: jal         0x80035530
    // 0x80007C64: nop

    alSndpGetState(rdram, ctx);
        goto after_2;
    // 0x80007C64: nop

    after_2:
    // 0x80007C68: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80007C6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80007C70: sw          $s0, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->r16;
    // 0x80007C74: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80007C78: nop

    // 0x80007C7C: sw          $s0, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r16;
    // 0x80007C80: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80007C84: nop

    // 0x80007C88: lw          $s0, 0xC($t6)
    ctx->r16 = MEM_W(ctx->r14, 0XC);
    // 0x80007C8C: nop

    // 0x80007C90: beq         $s0, $zero, L_80007CB8
    if (ctx->r16 == 0) {
        // 0x80007C94: nop
    
            goto L_80007CB8;
    }
    // 0x80007C94: nop

    // 0x80007C98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80007C9C: beq         $s0, $at, L_80007D58
    if (ctx->r16 == ctx->r1) {
        // 0x80007CA0: nop
    
            goto L_80007D58;
    }
    // 0x80007CA0: nop

    // 0x80007CA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80007CA8: beq         $s0, $at, L_80007CFC
    if (ctx->r16 == ctx->r1) {
        // 0x80007CAC: nop
    
            goto L_80007CFC;
    }
    // 0x80007CAC: nop

    // 0x80007CB0: b           L_80007DC0
    // 0x80007CB4: nop

        goto L_80007DC0;
    // 0x80007CB4: nop

L_80007CB8:
    // 0x80007CB8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80007CBC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007CC0: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007CC4: lh          $a1, 0x16($t7)
    ctx->r5 = MEM_H(ctx->r15, 0X16);
    // 0x80007CC8: jal         0x80035550
    // 0x80007CCC: nop

    alSndpDeallocate(rdram, ctx);
        goto after_3;
    // 0x80007CCC: nop

    after_3:
    // 0x80007CD0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80007CD4: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80007CD8: sh          $t8, 0x16($t9)
    MEM_H(0X16, ctx->r25) = ctx->r24;
    // 0x80007CDC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80007CE0: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x80007CE4: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80007CE8: nop

    // 0x80007CEC: and         $t2, $t1, $at
    ctx->r10 = ctx->r9 & ctx->r1;
    // 0x80007CF0: sw          $t2, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r10;
    // 0x80007CF4: b           L_80007DC0
    // 0x80007CF8: nop

        goto L_80007DC0;
    // 0x80007CF8: nop

L_80007CFC:
    // 0x80007CFC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80007D00: nop

    // 0x80007D04: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x80007D08: nop

    // 0x80007D0C: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x80007D10: beq         $t5, $zero, L_80007D24
    if (ctx->r13 == 0) {
        // 0x80007D14: nop
    
            goto L_80007D24;
    }
    // 0x80007D14: nop

    // 0x80007D18: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80007D1C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80007D20: sw          $t6, 0xC($t7)
    MEM_W(0XC, ctx->r15) = ctx->r14;
L_80007D24:
    // 0x80007D24: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80007D28: addiu       $at, $zero, -0x2001
    ctx->r1 = ADD32(0, -0X2001);
    // 0x80007D2C: lw          $t9, 0x8($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X8);
    // 0x80007D30: nop

    // 0x80007D34: and         $t1, $t9, $at
    ctx->r9 = ctx->r25 & ctx->r1;
    // 0x80007D38: sw          $t1, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->r9;
    // 0x80007D3C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80007D40: lw          $t2, 0x2D64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D64);
    // 0x80007D44: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007D48: addiu       $t0, $t2, 0x1
    ctx->r8 = ADD32(ctx->r10, 0X1);
    // 0x80007D4C: sw          $t0, 0x2D64($at)
    MEM_W(0X2D64, ctx->r1) = ctx->r8;
    // 0x80007D50: b           L_80007DC0
    // 0x80007D54: nop

        goto L_80007DC0;
    // 0x80007D54: nop

L_80007D58:
    // 0x80007D58: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80007D5C: nop

    // 0x80007D60: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x80007D64: nop

    // 0x80007D68: andi        $t5, $t4, 0x2000
    ctx->r13 = ctx->r12 & 0X2000;
    // 0x80007D6C: beq         $t5, $zero, L_80007D8C
    if (ctx->r13 == 0) {
        // 0x80007D70: nop
    
            goto L_80007D8C;
    }
    // 0x80007D70: nop

    // 0x80007D74: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007D78: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007D7C: jal         0x800355A0
    // 0x80007D80: nop

    alSndpStop(rdram, ctx);
        goto after_4;
    // 0x80007D80: nop

    after_4:
    // 0x80007D84: b           L_80007DAC
    // 0x80007D88: nop

        goto L_80007DAC;
    // 0x80007D88: nop

L_80007D8C:
    // 0x80007D8C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80007D90: lw          $t6, 0x2D68($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D68);
    // 0x80007D94: nop

    // 0x80007D98: bne         $t6, $zero, L_80007DAC
    if (ctx->r14 != 0) {
        // 0x80007D9C: nop
    
            goto L_80007DAC;
    }
    // 0x80007D9C: nop

    // 0x80007DA0: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x80007DA4: jal         0x80008CF4
    // 0x80007DA8: nop

    func_80008CF4(rdram, ctx);
        goto after_5;
    // 0x80007DA8: nop

    after_5:
L_80007DAC:
    // 0x80007DAC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80007DB0: lw          $t7, 0x2D64($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D64);
    // 0x80007DB4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007DB8: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80007DBC: sw          $t9, 0x2D64($at)
    MEM_W(0X2D64, ctx->r1) = ctx->r25;
L_80007DC0:
    // 0x80007DC0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80007DC4: lw          $t1, 0x2D68($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2D68);
    // 0x80007DC8: nop

    // 0x80007DCC: beq         $t1, $zero, L_80007DDC
    if (ctx->r9 == 0) {
        // 0x80007DD0: nop
    
            goto L_80007DDC;
    }
    // 0x80007DD0: nop

    // 0x80007DD4: b           L_80007E50
    // 0x80007DD8: nop

        goto L_80007E50;
    // 0x80007DD8: nop

L_80007DDC:
    // 0x80007DDC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80007DE0: nop

    // 0x80007DE4: lw          $t2, 0x8($t8)
    ctx->r10 = MEM_W(ctx->r24, 0X8);
    // 0x80007DE8: nop

    // 0x80007DEC: andi        $t0, $t2, 0x1000
    ctx->r8 = ctx->r10 & 0X1000;
    // 0x80007DF0: beq         $t0, $zero, L_80007E28
    if (ctx->r8 == 0) {
        // 0x80007DF4: nop
    
            goto L_80007E28;
    }
    // 0x80007DF4: nop

    // 0x80007DF8: lh          $t3, 0x16($t8)
    ctx->r11 = MEM_H(ctx->r24, 0X16);
    // 0x80007DFC: nop

    // 0x80007E00: bgez        $t3, L_80007E28
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80007E04: nop
    
            goto L_80007E28;
    }
    // 0x80007E04: nop

    // 0x80007E08: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x80007E0C: jal         0x80006830
    // 0x80007E10: nop

    func_80006830(rdram, ctx);
        goto after_6;
    // 0x80007E10: nop

    after_6:
    // 0x80007E14: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80007E18: lw          $t4, 0x2D64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D64);
    // 0x80007E1C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007E20: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80007E24: sw          $t5, 0x2D64($at)
    MEM_W(0X2D64, ctx->r1) = ctx->r13;
L_80007E28:
    // 0x80007E28: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80007E2C: nop

    // 0x80007E30: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80007E34: nop

    // 0x80007E38: andi        $t9, $t7, 0xF
    ctx->r25 = ctx->r15 & 0XF;
    // 0x80007E3C: beq         $t9, $zero, L_80007E50
    if (ctx->r25 == 0) {
        // 0x80007E40: nop
    
            goto L_80007E50;
    }
    // 0x80007E40: nop

    // 0x80007E44: lh          $a0, 0x28($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X28);
    // 0x80007E48: jal         0x80007890
    // 0x80007E4C: nop

    func_80007890(rdram, ctx);
        goto after_7;
    // 0x80007E4C: nop

    after_7:
L_80007E50:
    // 0x80007E50: lh          $t1, 0x28($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X28);
    // 0x80007E54: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80007E58: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80007E5C: lw          $t3, -0x5CF4($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X5CF4);
    // 0x80007E60: sll         $t0, $t2, 16
    ctx->r8 = S32(ctx->r10 << 16);
    // 0x80007E64: sra         $t8, $t0, 16
    ctx->r24 = S32(SIGNED(ctx->r8) >> 16);
    // 0x80007E68: slt         $at, $t8, $t3
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r11) ? 1 : 0;
    // 0x80007E6C: bne         $at, $zero, L_80007C00
    if (ctx->r1 != 0) {
        // 0x80007E70: sh          $t2, 0x28($sp)
        MEM_H(0X28, ctx->r29) = ctx->r10;
            goto L_80007C00;
    }
    // 0x80007E70: sh          $t2, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r10;
L_80007E74:
    // 0x80007E74: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80007E78: lw          $t4, 0x2D68($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2D68);
    // 0x80007E7C: nop

    // 0x80007E80: beq         $t4, $zero, L_80007EB4
    if (ctx->r12 == 0) {
        // 0x80007E84: nop
    
            goto L_80007EB4;
    }
    // 0x80007E84: nop

    // 0x80007E88: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x80007E8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80007E90: beq         $t5, $at, L_80007EAC
    if (ctx->r13 == ctx->r1) {
        // 0x80007E94: nop
    
            goto L_80007EAC;
    }
    // 0x80007E94: nop

    // 0x80007E98: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80007E9C: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x80007EA0: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x80007EA4: jal         0x80035310
    // 0x80007EA8: nop

    alSndpSetSound(rdram, ctx);
        goto after_8;
    // 0x80007EA8: nop

    after_8:
L_80007EAC:
    // 0x80007EAC: b           L_800080C8
    // 0x80007EB0: nop

        goto L_800080C8;
    // 0x80007EB0: nop

L_80007EB4:
    // 0x80007EB4: jal         0x80008744
    // 0x80007EB8: nop

    func_80008744(rdram, ctx);
        goto after_9;
    // 0x80007EB8: nop

    after_9:
    // 0x80007EBC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007EC0: lwc1        $f4, 0x2D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D6C);
    // 0x80007EC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80007EC8: nop

    // 0x80007ECC: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80007ED0: nop

    // 0x80007ED4: bc1f        L_80007FBC
    if (!c1cs) {
        // 0x80007ED8: nop
    
            goto L_80007FBC;
    }
    // 0x80007ED8: nop

    // 0x80007EDC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007EE0: lwc1        $f8, 0x2D70($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2D70);
    // 0x80007EE4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007EE8: lwc1        $f10, 0x2D6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2D6C);
    // 0x80007EEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007EF0: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80007EF4: swc1        $f16, 0x2D70($at)
    MEM_W(0X2D70, ctx->r1) = ctx->f16.u32l;
    // 0x80007EF8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80007EFC: lh          $t6, 0x2D74($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X2D74);
    // 0x80007F00: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007F04: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80007F08: lwc1        $f18, 0x2D70($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2D70);
    // 0x80007F0C: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80007F10: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x80007F14: nop

    // 0x80007F18: bc1f        L_80007F48
    if (!c1cs) {
        // 0x80007F1C: nop
    
            goto L_80007F48;
    }
    // 0x80007F1C: nop

    // 0x80007F20: jal         0x8000B5DC
    // 0x80007F24: nop

    func_8000B5DC(rdram, ctx);
        goto after_10;
    // 0x80007F24: nop

    after_10:
    // 0x80007F28: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80007F2C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007F30: swc1        $f8, 0x2D6C($at)
    MEM_W(0X2D6C, ctx->r1) = ctx->f8.u32l;
    // 0x80007F34: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80007F38: lh          $t7, 0x2D74($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2D74);
    // 0x80007F3C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007F40: b           L_80007FBC
    // 0x80007F44: sh          $t7, 0x2D76($at)
    MEM_H(0X2D76, ctx->r1) = ctx->r15;
        goto L_80007FBC;
    // 0x80007F44: sh          $t7, 0x2D76($at)
    MEM_H(0X2D76, ctx->r1) = ctx->r15;
L_80007F48:
    // 0x80007F48: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80007F4C: lh          $t9, 0x2D74($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2D74);
    // 0x80007F50: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007F54: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x80007F58: lwc1        $f4, 0x2D70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D70);
    // 0x80007F5C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80007F60: sub.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80007F64: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x80007F68: nop

    // 0x80007F6C: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x80007F70: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80007F74: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80007F78: nop

    // 0x80007F7C: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80007F80: mfc1        $t2, $f6
    ctx->r10 = (int32_t)ctx->f6.u32l;
    // 0x80007F84: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80007F88: sh          $t2, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r10;
    // 0x80007F8C: nop

    // 0x80007F90: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80007F94: lh          $t0, 0x2D76($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X2D76);
    // 0x80007F98: lh          $t8, 0x28($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X28);
    // 0x80007F9C: nop

    // 0x80007FA0: beq         $t0, $t8, L_80007FBC
    if (ctx->r8 == ctx->r24) {
        // 0x80007FA4: nop
    
            goto L_80007FBC;
    }
    // 0x80007FA4: nop

    // 0x80007FA8: lh          $t3, 0x28($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X28);
    // 0x80007FAC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007FB0: sh          $t3, 0x2D76($at)
    MEM_H(0X2D76, ctx->r1) = ctx->r11;
    // 0x80007FB4: jal         0x8000678C
    // 0x80007FB8: nop

    func_8000678C(rdram, ctx);
        goto after_11;
    // 0x80007FB8: nop

    after_11:
L_80007FBC:
    // 0x80007FBC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007FC0: lwc1        $f8, 0x2D6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2D6C);
    // 0x80007FC4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80007FC8: nop

    // 0x80007FCC: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80007FD0: nop

    // 0x80007FD4: bc1f        L_8000809C
    if (!c1cs) {
        // 0x80007FD8: nop
    
            goto L_8000809C;
    }
    // 0x80007FD8: nop

    // 0x80007FDC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007FE0: lwc1        $f16, 0x2D70($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2D70);
    // 0x80007FE4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007FE8: lwc1        $f4, 0x2D6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D6C);
    // 0x80007FEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80007FF0: sub.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80007FF4: swc1        $f18, 0x2D70($at)
    MEM_W(0X2D70, ctx->r1) = ctx->f18.u32l;
    // 0x80007FF8: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80007FFC: lh          $t4, 0x2D74($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X2D74);
    // 0x80008000: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008004: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80008008: lwc1        $f6, 0x2D70($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2D70);
    // 0x8000800C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80008010: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x80008014: nop

    // 0x80008018: bc1f        L_80008040
    if (!c1cs) {
        // 0x8000801C: nop
    
            goto L_80008040;
    }
    // 0x8000801C: nop

    // 0x80008020: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80008024: lh          $t5, 0x2D74($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X2D74);
    // 0x80008028: nop

    // 0x8000802C: sh          $t5, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r13;
    // 0x80008030: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80008034: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008038: b           L_80008070
    // 0x8000803C: swc1        $f16, 0x2D6C($at)
    MEM_W(0X2D6C, ctx->r1) = ctx->f16.u32l;
        goto L_80008070;
    // 0x8000803C: swc1        $f16, 0x2D6C($at)
    MEM_W(0X2D6C, ctx->r1) = ctx->f16.u32l;
L_80008040:
    // 0x80008040: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80008044: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008048: lwc1        $f4, 0x2D70($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D70);
    // 0x8000804C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80008050: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008054: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008058: nop

    // 0x8000805C: cvt.w.s     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80008060: mfc1        $t7, $f18
    ctx->r15 = (int32_t)ctx->f18.u32l;
    // 0x80008064: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80008068: sh          $t7, 0x28($sp)
    MEM_H(0X28, ctx->r29) = ctx->r15;
    // 0x8000806C: nop

L_80008070:
    // 0x80008070: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80008074: lh          $t9, 0x2D76($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2D76);
    // 0x80008078: lh          $t1, 0x28($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X28);
    // 0x8000807C: nop

    // 0x80008080: beq         $t9, $t1, L_8000809C
    if (ctx->r25 == ctx->r9) {
        // 0x80008084: nop
    
            goto L_8000809C;
    }
    // 0x80008084: nop

    // 0x80008088: lh          $t2, 0x28($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X28);
    // 0x8000808C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008090: sh          $t2, 0x2D76($at)
    MEM_H(0X2D76, ctx->r1) = ctx->r10;
    // 0x80008094: jal         0x8000678C
    // 0x80008098: nop

    func_8000678C(rdram, ctx);
        goto after_12;
    // 0x80008098: nop

    after_12:
L_8000809C:
    // 0x8000809C: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x800080A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800080A4: beq         $t0, $at, L_800080C0
    if (ctx->r8 == ctx->r1) {
        // 0x800080A8: nop
    
            goto L_800080C0;
    }
    // 0x800080A8: nop

    // 0x800080AC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800080B0: lw          $a0, 0x2D54($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2D54);
    // 0x800080B4: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x800080B8: jal         0x80035310
    // 0x800080BC: nop

    alSndpSetSound(rdram, ctx);
        goto after_13;
    // 0x800080BC: nop

    after_13:
L_800080C0:
    // 0x800080C0: b           L_800080C8
    // 0x800080C4: nop

        goto L_800080C8;
    // 0x800080C4: nop

L_800080C8:
    // 0x800080C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800080CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800080D0: jr          $ra
    // 0x800080D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800080D4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8002D538(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002D538: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8002D53C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8002D540: jal         0x8001EC04
    // 0x8002D544: nop

    func_8001EC04(rdram, ctx);
        goto after_0;
    // 0x8002D544: nop

    after_0:
    // 0x8002D548: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8002D54C:
    // 0x8002D54C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8002D550: lui         $at, 0xF
    ctx->r1 = S32(0XF << 16);
    // 0x8002D554: ori         $at, $at, 0x4240
    ctx->r1 = ctx->r1 | 0X4240;
    // 0x8002D558: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8002D55C: slt         $at, $t7, $at
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r1) ? 1 : 0;
    // 0x8002D560: bne         $at, $zero, L_8002D54C
    if (ctx->r1 != 0) {
        // 0x8002D564: sw          $t7, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r15;
            goto L_8002D54C;
    }
    // 0x8002D564: sw          $t7, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r15;
    // 0x8002D568: jal         0x8001E954
    // 0x8002D56C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    Set_DecompressHeap(rdram, ctx);
        goto after_1;
    // 0x8002D56C: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    after_1:
    // 0x8002D570: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002D574: lh          $t8, 0x7690($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7690);
    // 0x8002D578: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x8002D57C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8002D580: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x8002D584: sll         $t9, $t9, 5
    ctx->r25 = S32(ctx->r25 << 5);
    // 0x8002D588: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002D58C: lw          $t0, 0x4DB4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4DB4);
    // 0x8002D590: nop

    // 0x8002D594: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x8002D598: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8002D59C: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
L_8002D5A0:
    // 0x8002D5A0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8002D5A4: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8002D5A8: lw          $a1, 0x4($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X4);
    // 0x8002D5AC: lw          $a2, 0x8($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X8);
    // 0x8002D5B0: jal         0x8001EA68
    // 0x8002D5B4: nop

    DecompressFile(rdram, ctx);
        goto after_2;
    // 0x8002D5B4: nop

    after_2:
    // 0x8002D5B8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x8002D5BC: nop

    // 0x8002D5C0: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x8002D5C4: nop

    // 0x8002D5C8: bne         $t4, $zero, L_8002D5D8
    if (ctx->r12 != 0) {
        // 0x8002D5CC: nop
    
            goto L_8002D5D8;
    }
    // 0x8002D5CC: nop

    // 0x8002D5D0: b           L_8002D600
    // 0x8002D5D4: nop

        goto L_8002D600;
    // 0x8002D5D4: nop

L_8002D5D8:
    // 0x8002D5D8: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8002D5DC: nop

    // 0x8002D5E0: addiu       $t6, $t5, 0xC
    ctx->r14 = ADD32(ctx->r13, 0XC);
    // 0x8002D5E4: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8002D5E8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8002D5EC: nop

    // 0x8002D5F0: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8002D5F4: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8002D5F8: bne         $at, $zero, L_8002D5A0
    if (ctx->r1 != 0) {
        // 0x8002D5FC: sw          $t8, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r24;
            goto L_8002D5A0;
    }
    // 0x8002D5FC: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_8002D600:
    // 0x8002D600: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002D604: lh          $t9, 0x7690($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7690);
    // 0x8002D608: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x8002D60C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8002D610: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8002D614: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x8002D618: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8002D61C: lw          $t1, 0x4DC8($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4DC8);
    // 0x8002D620: nop

    // 0x8002D624: sw          $t1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r9;
    // 0x8002D628: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002D62C: lh          $t2, 0x7690($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7690);
    // 0x8002D630: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x8002D634: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8002D638: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x8002D63C: sll         $t3, $t3, 5
    ctx->r11 = S32(ctx->r11 << 5);
    // 0x8002D640: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002D644: lw          $t4, 0x4DD0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4DD0);
    // 0x8002D648: nop

    // 0x8002D64C: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
    // 0x8002D650: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002D654: lh          $t5, 0x7690($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7690);
    // 0x8002D658: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8002D65C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002D660: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8002D664: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x8002D668: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002D66C: lw          $t7, 0x4DD4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4DD4);
    // 0x8002D670: nop

    // 0x8002D674: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8002D678: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8002D67C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8002D680: jal         0x8001A958
    // 0x8002D684: nop

    func_8001A958(rdram, ctx);
        goto after_3;
    // 0x8002D684: nop

    after_3:
    // 0x8002D688: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8002D68C: nop

    // 0x8002D690: lb          $t9, 0x0($t8)
    ctx->r25 = MEM_B(ctx->r24, 0X0);
    // 0x8002D694: nop

    // 0x8002D698: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8002D69C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8002D6A0: nop

    // 0x8002D6A4: lb          $t1, 0x6($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X6);
    // 0x8002D6A8: nop

    // 0x8002D6AC: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8002D6B0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002D6B4: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x8002D6B8: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x8002D6BC: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8002D6C0: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8002D6C4: lw          $a2, 0x38($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X38);
    // 0x8002D6C8: jal         0x8001BD44
    // 0x8002D6CC: nop

    func_8001BD44(rdram, ctx);
        goto after_4;
    // 0x8002D6CC: nop

    after_4:
    // 0x8002D6D0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8002D6D4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002D6D8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8002D6DC: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x8002D6E0: nop

    // 0x8002D6E4: sh          $t4, 0xE4($t5)
    MEM_H(0XE4, ctx->r13) = ctx->r12;
    // 0x8002D6E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002D6EC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002D6F0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8002D6F4: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x8002D6F8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8002D6FC: nop

    // 0x8002D700: beq         $t8, $zero, L_8002D724
    if (ctx->r24 == 0) {
        // 0x8002D704: nop
    
            goto L_8002D724;
    }
    // 0x8002D704: nop

    // 0x8002D708: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8002D70C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8002D710: lw          $a1, 0x3C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X3C);
    // 0x8002D714: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8002D718: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8002D71C: jal         0x8001C0EC
    // 0x8002D720: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x8002D720: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_5:
L_8002D724:
    // 0x8002D724: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8002D728: nop

    // 0x8002D72C: beq         $t0, $zero, L_8002D748
    if (ctx->r8 == 0) {
        // 0x8002D730: nop
    
            goto L_8002D748;
    }
    // 0x8002D730: nop

    // 0x8002D734: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8002D738: lw          $a2, 0x3C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X3C);
    // 0x8002D73C: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x8002D740: jal         0x8001ABF4
    // 0x8002D744: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x8002D744: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
L_8002D748:
    // 0x8002D748: jal         0x8001EBE8
    // 0x8002D74C: nop

    func_8001EBE8(rdram, ctx);
        goto after_7;
    // 0x8002D74C: nop

    after_7:
    // 0x8002D750: b           L_8002D758
    // 0x8002D754: nop

        goto L_8002D758;
    // 0x8002D754: nop

L_8002D758:
    // 0x8002D758: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8002D75C: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    // 0x8002D760: jr          $ra
    // 0x8002D764: nop

    return;
    // 0x8002D764: nop

;}
RECOMP_FUNC void alMainBusPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003FAE0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8003FAE4: lw          $t0, 0x58($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X58);
    // 0x8003FAE8: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x8003FAEC: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x8003FAF0: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x8003FAF4: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x8003FAF8: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x8003FAFC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x8003FB00: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x8003FB04: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x8003FB08: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x8003FB0C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8003FB10: lw          $v1, 0x1C($a0)
    ctx->r3 = MEM_W(ctx->r4, 0X1C);
    // 0x8003FB14: lui         $t6, 0x200
    ctx->r14 = S32(0X200 << 16);
    // 0x8003FB18: sll         $v0, $a2, 1
    ctx->r2 = S32(ctx->r6 << 1);
    // 0x8003FB1C: lui         $t7, 0x200
    ctx->r15 = S32(0X200 << 16);
    // 0x8003FB20: ori         $t6, $t6, 0x440
    ctx->r14 = ctx->r14 | 0X440;
    // 0x8003FB24: ori         $t7, $t7, 0x580
    ctx->r15 = ctx->r15 | 0X580;
    // 0x8003FB28: sw          $t6, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r14;
    // 0x8003FB2C: sw          $v0, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r2;
    // 0x8003FB30: sw          $t7, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r15;
    // 0x8003FB34: sw          $v0, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->r2;
    // 0x8003FB38: lw          $t8, 0x14($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X14);
    // 0x8003FB3C: or          $s5, $a2, $zero
    ctx->r21 = ctx->r6 | 0;
    // 0x8003FB40: or          $s7, $a1, $zero
    ctx->r23 = ctx->r5 | 0;
    // 0x8003FB44: or          $fp, $a3, $zero
    ctx->r30 = ctx->r7 | 0;
    // 0x8003FB48: or          $s4, $a0, $zero
    ctx->r20 = ctx->r4 | 0;
    // 0x8003FB4C: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
    // 0x8003FB50: blez        $t8, L_8003FBCC
    if (SIGNED(ctx->r24) <= 0) {
        // 0x8003FB54: addiu       $s3, $t0, 0x10
        ctx->r19 = ADD32(ctx->r8, 0X10);
            goto L_8003FBCC;
    }
    // 0x8003FB54: addiu       $s3, $t0, 0x10
    ctx->r19 = ADD32(ctx->r8, 0X10);
    // 0x8003FB58: lui         $s2, 0xC00
    ctx->r18 = S32(0XC00 << 16);
    // 0x8003FB5C: ori         $s2, $s2, 0x7FFF
    ctx->r18 = ctx->r18 | 0X7FFF;
    // 0x8003FB60: or          $s1, $v1, $zero
    ctx->r17 = ctx->r3 | 0;
    // 0x8003FB64: andi        $s6, $v0, 0xFFFF
    ctx->r22 = ctx->r2 & 0XFFFF;
L_8003FB68:
    // 0x8003FB68: lw          $a0, 0x0($s1)
    ctx->r4 = MEM_W(ctx->r17, 0X0);
    // 0x8003FB6C: sw          $s3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r19;
    // 0x8003FB70: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    // 0x8003FB74: lw          $t9, 0x4($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X4);
    // 0x8003FB78: or          $a2, $s5, $zero
    ctx->r6 = ctx->r21 | 0;
    // 0x8003FB7C: or          $a3, $fp, $zero
    ctx->r7 = ctx->r30 | 0;
    // 0x8003FB80: jalr        $t9
    // 0x8003FB84: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x8003FB84: nop

    after_0:
    // 0x8003FB88: lui         $t2, 0x6C0
    ctx->r10 = S32(0X6C0 << 16);
    // 0x8003FB8C: lui         $t3, 0x800
    ctx->r11 = S32(0X800 << 16);
    // 0x8003FB90: lui         $t1, 0x800
    ctx->r9 = S32(0X800 << 16);
    // 0x8003FB94: ori         $t2, $t2, 0x440
    ctx->r10 = ctx->r10 | 0X440;
    // 0x8003FB98: ori         $t3, $t3, 0x580
    ctx->r11 = ctx->r11 | 0X580;
    // 0x8003FB9C: sw          $t1, 0x0($v0)
    MEM_W(0X0, ctx->r2) = ctx->r9;
    // 0x8003FBA0: sw          $s6, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r22;
    // 0x8003FBA4: sw          $t2, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r10;
    // 0x8003FBA8: sw          $s2, 0x8($v0)
    MEM_W(0X8, ctx->r2) = ctx->r18;
    // 0x8003FBAC: sw          $t3, 0x14($v0)
    MEM_W(0X14, ctx->r2) = ctx->r11;
    // 0x8003FBB0: sw          $s2, 0x10($v0)
    MEM_W(0X10, ctx->r2) = ctx->r18;
    // 0x8003FBB4: lw          $t4, 0x14($s4)
    ctx->r12 = MEM_W(ctx->r20, 0X14);
    // 0x8003FBB8: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x8003FBBC: addiu       $s1, $s1, 0x4
    ctx->r17 = ADD32(ctx->r17, 0X4);
    // 0x8003FBC0: slt         $at, $s0, $t4
    ctx->r1 = SIGNED(ctx->r16) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8003FBC4: bne         $at, $zero, L_8003FB68
    if (ctx->r1 != 0) {
        // 0x8003FBC8: addiu       $s3, $v0, 0x18
        ctx->r19 = ADD32(ctx->r2, 0X18);
            goto L_8003FB68;
    }
    // 0x8003FBC8: addiu       $s3, $v0, 0x18
    ctx->r19 = ADD32(ctx->r2, 0X18);
L_8003FBCC:
    // 0x8003FBCC: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x8003FBD0: or          $v0, $s3, $zero
    ctx->r2 = ctx->r19 | 0;
    // 0x8003FBD4: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x8003FBD8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8003FBDC: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x8003FBE0: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003FBE4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x8003FBE8: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x8003FBEC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8003FBF0: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x8003FBF4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x8003FBF8: jr          $ra
    // 0x8003FBFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8003FBFC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_8002A1FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A1FC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8002A200: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x8002A204: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002A208: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002A20C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002A210: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002A214: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8002A218: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8002A21C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8002A220: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002A224: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8002A228: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002A22C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002A230: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8002A234: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8002A238: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002A23C: nop

    // 0x8002A240: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A244: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x8002A248: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002A24C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8002A250: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002A254: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002A258: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8002A25C: lwc1        $f10, 0x4($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8002A260: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8002A264: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8002A268: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8002A26C: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x8002A270: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002A274: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8002A278: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8002A27C: lwc1        $f8, 0x8($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8002A280: lwc1        $f10, 0x8($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8002A284: nop

    // 0x8002A288: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8002A28C: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
    // 0x8002A290: lwc1        $f18, 0x8($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8002A294: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8002A298: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8002A29C: lwc1        $f16, 0x0($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8002A2A0: mul.s       $f8, $f6, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f6.fl);
    // 0x8002A2A4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x8002A2A8: lwc1        $f4, 0x14($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8002A2AC: mul.s       $f18, $f16, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f16.fl, ctx->f16.fl);
    // 0x8002A2B0: nop

    // 0x8002A2B4: mul.s       $f8, $f4, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8002A2B8: add.s       $f6, $f10, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x8002A2BC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8002A2C0: nop

    // 0x8002A2C4: bc1f        L_8002A2D4
    if (!c1cs) {
        // 0x8002A2C8: nop
    
            goto L_8002A2D4;
    }
    // 0x8002A2C8: nop

    // 0x8002A2CC: b           L_8002A2E4
    // 0x8002A2D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A2E4;
    // 0x8002A2D0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A2D4:
    // 0x8002A2D4: b           L_8002A2E4
    // 0x8002A2D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A2E4;
    // 0x8002A2D8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002A2DC: b           L_8002A2E4
    // 0x8002A2E0: nop

        goto L_8002A2E4;
    // 0x8002A2E0: nop

L_8002A2E4:
    // 0x8002A2E4: jr          $ra
    // 0x8002A2E8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8002A2E8: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void Math_Mat3f_Rotate(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80013D68: addiu       $sp, $sp, -0x58
    ctx->r29 = ADD32(ctx->r29, -0X58);
    // 0x80013D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80013D70: sw          $a0, 0x58($sp)
    MEM_W(0X58, ctx->r29) = ctx->r4;
    // 0x80013D74: sw          $a1, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r5;
    // 0x80013D78: sw          $a2, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r6;
    // 0x80013D7C: sw          $a3, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->r7;
    // 0x80013D80: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80013D84: lwc1        $f6, -0x5C10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5C10);
    // 0x80013D88: lwc1        $f4, 0x5C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80013D8C: nop

    // 0x80013D90: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013D94: swc1        $f8, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->f8.u32l;
    // 0x80013D98: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80013D9C: lwc1        $f16, -0x5C10($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5C10);
    // 0x80013DA0: lwc1        $f10, 0x60($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80013DA4: nop

    // 0x80013DA8: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80013DAC: swc1        $f18, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->f18.u32l;
    // 0x80013DB0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80013DB4: lwc1        $f6, -0x5C10($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X5C10);
    // 0x80013DB8: lwc1        $f4, 0x64($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80013DBC: nop

    // 0x80013DC0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013DC4: swc1        $f8, 0x64($sp)
    MEM_W(0X64, ctx->r29) = ctx->f8.u32l;
    // 0x80013DC8: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80013DCC: jal         0x80034970
    // 0x80013DD0: nop

    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80013DD0: nop

    after_0:
    // 0x80013DD4: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x80013DD8: lwc1        $f12, 0x5C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X5C);
    // 0x80013DDC: jal         0x80036570
    // 0x80013DE0: nop

    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80013DE0: nop

    after_1:
    // 0x80013DE4: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80013DE8: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80013DEC: jal         0x80034970
    // 0x80013DF0: nop

    sinf_game(rdram, ctx);
        goto after_2;
    // 0x80013DF0: nop

    after_2:
    // 0x80013DF4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80013DF8: lwc1        $f12, 0x60($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X60);
    // 0x80013DFC: jal         0x80036570
    // 0x80013E00: nop

    cosf_game(rdram, ctx);
        goto after_3;
    // 0x80013E00: nop

    after_3:
    // 0x80013E04: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80013E08: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80013E0C: jal         0x80034970
    // 0x80013E10: nop

    sinf_game(rdram, ctx);
        goto after_4;
    // 0x80013E10: nop

    after_4:
    // 0x80013E14: swc1        $f0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f0.u32l;
    // 0x80013E18: lwc1        $f12, 0x64($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X64);
    // 0x80013E1C: jal         0x80036570
    // 0x80013E20: nop

    cosf_game(rdram, ctx);
        goto after_5;
    // 0x80013E20: nop

    after_5:
    // 0x80013E24: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80013E28: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80013E2C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80013E30: addiu       $t6, $sp, 0x34
    ctx->r14 = ADD32(ctx->r29, 0X34);
    // 0x80013E34: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80013E38: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
    // 0x80013E3C: lwc1        $f4, 0x20($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80013E40: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80013E44: addiu       $t7, $sp, 0x34
    ctx->r15 = ADD32(ctx->r29, 0X34);
    // 0x80013E48: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013E4C: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x80013E50: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80013E54: addiu       $t8, $sp, 0x34
    ctx->r24 = ADD32(ctx->r29, 0X34);
    // 0x80013E58: neg.s       $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = -ctx->f10.fl;
    // 0x80013E5C: swc1        $f16, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f16.u32l;
    // 0x80013E60: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80013E64: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80013E68: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80013E6C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80013E70: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80013E74: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80013E78: addiu       $t9, $sp, 0x34
    ctx->r25 = ADD32(ctx->r29, 0X34);
    // 0x80013E7C: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80013E80: nop

    // 0x80013E84: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80013E88: sub.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f10.fl - ctx->f4.fl;
    // 0x80013E8C: swc1        $f6, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f6.u32l;
    // 0x80013E90: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80013E94: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80013E98: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80013E9C: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80013EA0: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80013EA4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80013EA8: addiu       $t0, $sp, 0x34
    ctx->r8 = ADD32(ctx->r29, 0X34);
    // 0x80013EAC: mul.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80013EB0: nop

    // 0x80013EB4: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80013EB8: add.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f4.fl + ctx->f16.fl;
    // 0x80013EBC: swc1        $f18, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f18.u32l;
    // 0x80013EC0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80013EC4: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80013EC8: addiu       $t1, $sp, 0x34
    ctx->r9 = ADD32(ctx->r29, 0X34);
    // 0x80013ECC: mul.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80013ED0: swc1        $f8, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f8.u32l;
    // 0x80013ED4: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80013ED8: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80013EDC: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80013EE0: mul.s       $f18, $f4, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x80013EE4: lwc1        $f4, 0x28($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80013EE8: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80013EEC: addiu       $t2, $sp, 0x34
    ctx->r10 = ADD32(ctx->r29, 0X34);
    // 0x80013EF0: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80013EF4: nop

    // 0x80013EF8: mul.s       $f16, $f8, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f4.fl);
    // 0x80013EFC: add.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl + ctx->f16.fl;
    // 0x80013F00: swc1        $f18, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f18.u32l;
    // 0x80013F04: lwc1        $f10, 0x24($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80013F08: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80013F0C: lwc1        $f6, 0x28($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80013F10: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x80013F14: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80013F18: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80013F1C: addiu       $t3, $sp, 0x34
    ctx->r11 = ADD32(ctx->r29, 0X34);
    // 0x80013F20: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80013F24: nop

    // 0x80013F28: mul.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x80013F2C: sub.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f8.fl;
    // 0x80013F30: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x80013F34: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80013F38: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80013F3C: addiu       $t4, $sp, 0x34
    ctx->r12 = ADD32(ctx->r29, 0X34);
    // 0x80013F40: mul.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f18.fl);
    // 0x80013F44: swc1        $f10, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f10.u32l;
    // 0x80013F48: lw          $a0, 0x58($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X58);
    // 0x80013F4C: jal         0x80013C0C
    // 0x80013F50: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    Math_Mat3f_Multiply(rdram, ctx);
        goto after_6;
    // 0x80013F50: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_6:
    // 0x80013F54: b           L_80013F5C
    // 0x80013F58: nop

        goto L_80013F5C;
    // 0x80013F58: nop

L_80013F5C:
    // 0x80013F5C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80013F60: addiu       $sp, $sp, 0x58
    ctx->r29 = ADD32(ctx->r29, 0X58);
    // 0x80013F64: jr          $ra
    // 0x80013F68: nop

    return;
    // 0x80013F68: nop

;}
RECOMP_FUNC void func_8000E944(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E944: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x8000E948: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8000E94C: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x8000E950: sw          $a1, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r5;
    // 0x8000E954: sw          $a2, 0xA8($sp)
    MEM_W(0XA8, ctx->r29) = ctx->r6;
    // 0x8000E958: sw          $a3, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r7;
    // 0x8000E95C: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8000E960: sw          $zero, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = 0;
    // 0x8000E964: lw          $t6, 0xA4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA4);
    // 0x8000E968: lw          $t7, 0xB4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB4);
    // 0x8000E96C: nop

    // 0x8000E970: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000E974: sw          $t8, 0x84($sp)
    MEM_W(0X84, ctx->r29) = ctx->r24;
    // 0x8000E978: lw          $t9, 0xA0($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XA0);
    // 0x8000E97C: nop

    // 0x8000E980: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8000E984: nop

    // 0x8000E988: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x8000E98C: jal         0x800361F0
    // 0x8000E990: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    guMtxIdentF(rdram, ctx);
        goto after_0;
    // 0x8000E990: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_0:
    // 0x8000E994: sw          $zero, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = 0;
L_8000E998:
    // 0x8000E998: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8000E99C: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x8000E9A0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000E9A4: addu        $s0, $s0, $t2
    ctx->r16 = ADD32(ctx->r16, ctx->r10);
    // 0x8000E9A8: lw          $s0, 0x5D30($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5D30);
    // 0x8000E9AC: addiu       $at, $zero, 0x11
    ctx->r1 = ADD32(0, 0X11);
    // 0x8000E9B0: beq         $s0, $at, L_8000E9D8
    if (ctx->r16 == ctx->r1) {
        // 0x8000E9B4: nop
    
            goto L_8000E9D8;
    }
    // 0x8000E9B4: nop

    // 0x8000E9B8: addiu       $at, $zero, 0x13
    ctx->r1 = ADD32(0, 0X13);
    // 0x8000E9BC: beq         $s0, $at, L_8000EA7C
    if (ctx->r16 == ctx->r1) {
        // 0x8000E9C0: nop
    
            goto L_8000EA7C;
    }
    // 0x8000E9C0: nop

    // 0x8000E9C4: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8000E9C8: beq         $s0, $at, L_8000EBB4
    if (ctx->r16 == ctx->r1) {
        // 0x8000E9CC: nop
    
            goto L_8000EBB4;
    }
    // 0x8000E9CC: nop

    // 0x8000E9D0: b           L_8000EC64
    // 0x8000E9D4: nop

        goto L_8000EC64;
    // 0x8000E9D4: nop

L_8000E9D8:
    // 0x8000E9D8: lw          $t3, 0xB8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB8);
    // 0x8000E9DC: lw          $t5, 0x84($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X84);
    // 0x8000E9E0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000E9E4: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x8000E9E8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8000E9EC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x8000E9F0: addiu       $t7, $t6, 0x4
    ctx->r15 = ADD32(ctx->r14, 0X4);
    // 0x8000E9F4: sw          $t7, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r15;
    // 0x8000E9F8: lw          $t8, 0x90($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X90);
    // 0x8000E9FC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000EA00: lwc1        $f4, 0x0($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8000EA04: nop

    // 0x8000EA08: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000EA0C: nop

    // 0x8000EA10: bc1f        L_8000EA50
    if (!c1cs) {
        // 0x8000EA14: nop
    
            goto L_8000EA50;
    }
    // 0x8000EA14: nop

    // 0x8000EA18: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8000EA1C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000EA20: nop

    // 0x8000EA24: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8000EA28: nop

    // 0x8000EA2C: bc1f        L_8000EA50
    if (!c1cs) {
        // 0x8000EA30: nop
    
            goto L_8000EA50;
    }
    // 0x8000EA30: nop

    // 0x8000EA34: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8000EA38: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000EA3C: nop

    // 0x8000EA40: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8000EA44: nop

    // 0x8000EA48: bc1t        L_8000EA74
    if (c1cs) {
        // 0x8000EA4C: nop
    
            goto L_8000EA74;
    }
    // 0x8000EA4C: nop

L_8000EA50:
    // 0x8000EA50: lw          $t9, 0x90($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X90);
    // 0x8000EA54: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8000EA58: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x8000EA5C: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x8000EA60: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x8000EA64: jal         0x80013AE0
    // 0x8000EA68: nop

    func_80013AE0(rdram, ctx);
        goto after_1;
    // 0x8000EA68: nop

    after_1:
    // 0x8000EA6C: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8000EA70: sw          $t0, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r8;
L_8000EA74:
    // 0x8000EA74: b           L_8000EC64
    // 0x8000EA78: nop

        goto L_8000EC64;
    // 0x8000EA78: nop

L_8000EA7C:
    // 0x8000EA7C: lw          $t1, 0xB8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XB8);
    // 0x8000EA80: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8000EA84: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8000EA88: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8000EA8C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8000EA90: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8000EA94: addiu       $t5, $t4, 0x10
    ctx->r13 = ADD32(ctx->r12, 0X10);
    // 0x8000EA98: sw          $t5, 0x8C($sp)
    MEM_W(0X8C, ctx->r29) = ctx->r13;
    // 0x8000EA9C: lw          $t6, 0x8C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8C);
    // 0x8000EAA0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000EAA4: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8000EAA8: nop

    // 0x8000EAAC: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000EAB0: nop

    // 0x8000EAB4: bc1f        L_8000EAF4
    if (!c1cs) {
        // 0x8000EAB8: nop
    
            goto L_8000EAF4;
    }
    // 0x8000EAB8: nop

    // 0x8000EABC: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8000EAC0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000EAC4: nop

    // 0x8000EAC8: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8000EACC: nop

    // 0x8000EAD0: bc1f        L_8000EAF4
    if (!c1cs) {
        // 0x8000EAD4: nop
    
            goto L_8000EAF4;
    }
    // 0x8000EAD4: nop

    // 0x8000EAD8: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x8000EADC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8000EAE0: nop

    // 0x8000EAE4: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8000EAE8: nop

    // 0x8000EAEC: bc1t        L_8000EBAC
    if (c1cs) {
        // 0x8000EAF0: nop
    
            goto L_8000EBAC;
    }
    // 0x8000EAF0: nop

L_8000EAF4:
    // 0x8000EAF4: sw          $zero, 0x98($sp)
    MEM_W(0X98, ctx->r29) = 0;
L_8000EAF8:
    // 0x8000EAF8: lw          $t7, 0x98($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X98);
    // 0x8000EAFC: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x8000EB00: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000EB04: addu        $s0, $s0, $t8
    ctx->r16 = ADD32(ctx->r16, ctx->r24);
    // 0x8000EB08: lw          $s0, 0x5D40($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X5D40);
    // 0x8000EB0C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x8000EB10: beq         $s0, $at, L_8000EB38
    if (ctx->r16 == ctx->r1) {
        // 0x8000EB14: nop
    
            goto L_8000EB38;
    }
    // 0x8000EB14: nop

    // 0x8000EB18: addiu       $at, $zero, 0x34
    ctx->r1 = ADD32(0, 0X34);
    // 0x8000EB1C: beq         $s0, $at, L_8000EB54
    if (ctx->r16 == ctx->r1) {
        // 0x8000EB20: nop
    
            goto L_8000EB54;
    }
    // 0x8000EB20: nop

    // 0x8000EB24: addiu       $at, $zero, 0x35
    ctx->r1 = ADD32(0, 0X35);
    // 0x8000EB28: beq         $s0, $at, L_8000EB70
    if (ctx->r16 == ctx->r1) {
        // 0x8000EB2C: nop
    
            goto L_8000EB70;
    }
    // 0x8000EB2C: nop

    // 0x8000EB30: b           L_8000EB8C
    // 0x8000EB34: nop

        goto L_8000EB8C;
    // 0x8000EB34: nop

L_8000EB38:
    // 0x8000EB38: lw          $t9, 0x8C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8C);
    // 0x8000EB3C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8000EB40: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x8000EB44: jal         0x80013F6C
    // 0x8000EB48: nop

    Math_Mat3f_RotatePitch(rdram, ctx);
        goto after_2;
    // 0x8000EB48: nop

    after_2:
    // 0x8000EB4C: b           L_8000EB8C
    // 0x8000EB50: nop

        goto L_8000EB8C;
    // 0x8000EB50: nop

L_8000EB54:
    // 0x8000EB54: lw          $t0, 0x8C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8C);
    // 0x8000EB58: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8000EB5C: lw          $a1, 0x4($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X4);
    // 0x8000EB60: jal         0x80014098
    // 0x8000EB64: nop

    Math_Mat3f_RotateYaw(rdram, ctx);
        goto after_3;
    // 0x8000EB64: nop

    after_3:
    // 0x8000EB68: b           L_8000EB8C
    // 0x8000EB6C: nop

        goto L_8000EB8C;
    // 0x8000EB6C: nop

L_8000EB70:
    // 0x8000EB70: lw          $t1, 0x8C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8C);
    // 0x8000EB74: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8000EB78: lw          $a1, 0x8($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X8);
    // 0x8000EB7C: jal         0x800141C4
    // 0x8000EB80: nop

    Math_Mat3f_RotateRoll(rdram, ctx);
        goto after_4;
    // 0x8000EB80: nop

    after_4:
    // 0x8000EB84: b           L_8000EB8C
    // 0x8000EB88: nop

        goto L_8000EB8C;
    // 0x8000EB88: nop

L_8000EB8C:
    // 0x8000EB8C: lw          $t2, 0x98($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X98);
    // 0x8000EB90: nop

    // 0x8000EB94: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8000EB98: slti        $at, $t3, 0x3
    ctx->r1 = SIGNED(ctx->r11) < 0X3 ? 1 : 0;
    // 0x8000EB9C: bne         $at, $zero, L_8000EAF8
    if (ctx->r1 != 0) {
        // 0x8000EBA0: sw          $t3, 0x98($sp)
        MEM_W(0X98, ctx->r29) = ctx->r11;
            goto L_8000EAF8;
    }
    // 0x8000EBA0: sw          $t3, 0x98($sp)
    MEM_W(0X98, ctx->r29) = ctx->r11;
    // 0x8000EBA4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8000EBA8: sw          $t4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r12;
L_8000EBAC:
    // 0x8000EBAC: b           L_8000EC64
    // 0x8000EBB0: nop

        goto L_8000EC64;
    // 0x8000EBB0: nop

L_8000EBB4:
    // 0x8000EBB4: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x8000EBB8: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8000EBBC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8000EBC0: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8000EBC4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8000EBC8: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8000EBCC: addiu       $t9, $t8, 0x1C
    ctx->r25 = ADD32(ctx->r24, 0X1C);
    // 0x8000EBD0: sw          $t9, 0x88($sp)
    MEM_W(0X88, ctx->r29) = ctx->r25;
    // 0x8000EBD4: lw          $t0, 0x88($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X88);
    // 0x8000EBD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000EBDC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000EBE0: lwc1        $f4, 0x0($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8000EBE4: nop

    // 0x8000EBE8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x8000EBEC: nop

    // 0x8000EBF0: bc1f        L_8000EC38
    if (!c1cs) {
        // 0x8000EBF4: nop
    
            goto L_8000EC38;
    }
    // 0x8000EBF4: nop

    // 0x8000EBF8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000EBFC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000EC00: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8000EC04: nop

    // 0x8000EC08: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8000EC0C: nop

    // 0x8000EC10: bc1f        L_8000EC38
    if (!c1cs) {
        // 0x8000EC14: nop
    
            goto L_8000EC38;
    }
    // 0x8000EC14: nop

    // 0x8000EC18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8000EC1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000EC20: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8000EC24: nop

    // 0x8000EC28: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x8000EC2C: nop

    // 0x8000EC30: bc1t        L_8000EC5C
    if (c1cs) {
        // 0x8000EC34: nop
    
            goto L_8000EC5C;
    }
    // 0x8000EC34: nop

L_8000EC38:
    // 0x8000EC38: lw          $t1, 0x88($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X88);
    // 0x8000EC3C: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    // 0x8000EC40: lw          $a1, 0x0($t1)
    ctx->r5 = MEM_W(ctx->r9, 0X0);
    // 0x8000EC44: lw          $a2, 0x4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X4);
    // 0x8000EC48: lw          $a3, 0x8($t1)
    ctx->r7 = MEM_W(ctx->r9, 0X8);
    // 0x8000EC4C: jal         0x80013B70
    // 0x8000EC50: nop

    Math_Mat3f_Scale(rdram, ctx);
        goto after_5;
    // 0x8000EC50: nop

    after_5:
    // 0x8000EC54: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8000EC58: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
L_8000EC5C:
    // 0x8000EC5C: b           L_8000EC64
    // 0x8000EC60: nop

        goto L_8000EC64;
    // 0x8000EC60: nop

L_8000EC64:
    // 0x8000EC64: lw          $t3, 0x9C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X9C);
    // 0x8000EC68: nop

    // 0x8000EC6C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000EC70: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x8000EC74: bne         $at, $zero, L_8000E998
    if (ctx->r1 != 0) {
        // 0x8000EC78: sw          $t4, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r12;
            goto L_8000E998;
    }
    // 0x8000EC78: sw          $t4, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r12;
    // 0x8000EC7C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8000EC80: nop

    // 0x8000EC84: beq         $t5, $zero, L_8000ECC8
    if (ctx->r13 == 0) {
        // 0x8000EC88: nop
    
            goto L_8000ECC8;
    }
    // 0x8000EC88: nop

    // 0x8000EC8C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000EC90: lw          $t6, 0x5820($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5820);
    // 0x8000EC94: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000EC98: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x8000EC9C: sw          $t7, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r15;
    // 0x8000ECA0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000ECA4: lw          $t8, 0x5820($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5820);
    // 0x8000ECA8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000ECAC: sll         $t9, $t8, 6
    ctx->r25 = S32(ctx->r24 << 6);
    // 0x8000ECB0: addiu       $t0, $t9, -0x40
    ctx->r8 = ADD32(ctx->r25, -0X40);
    // 0x8000ECB4: addiu       $t1, $t1, 0x5828
    ctx->r9 = ADD32(ctx->r9, 0X5828);
    // 0x8000ECB8: addu        $a1, $t0, $t1
    ctx->r5 = ADD32(ctx->r8, ctx->r9);
    // 0x8000ECBC: addu        $a2, $t9, $t1
    ctx->r6 = ADD32(ctx->r25, ctx->r9);
    // 0x8000ECC0: jal         0x80036400
    // 0x8000ECC4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x8000ECC4: addiu       $a0, $sp, 0x44
    ctx->r4 = ADD32(ctx->r29, 0X44);
    after_6:
L_8000ECC8:
    // 0x8000ECC8: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x8000ECCC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000ECD0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8000ECD4: lw          $t5, -0x1EFC($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1EFC);
    // 0x8000ECD8: lw          $t2, 0x5820($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5820);
    // 0x8000ECDC: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000ECE0: sll         $t7, $t6, 6
    ctx->r15 = S32(ctx->r14 << 6);
    // 0x8000ECE4: addiu       $t4, $t4, 0x5828
    ctx->r12 = ADD32(ctx->r12, 0X5828);
    // 0x8000ECE8: addu        $a1, $t5, $t7
    ctx->r5 = ADD32(ctx->r13, ctx->r15);
    // 0x8000ECEC: sll         $t3, $t2, 6
    ctx->r11 = S32(ctx->r10 << 6);
    // 0x8000ECF0: addu        $a0, $t3, $t4
    ctx->r4 = ADD32(ctx->r11, ctx->r12);
    // 0x8000ECF4: jal         0x800360F0
    // 0x8000ECF8: addiu       $a1, $a1, 0xE0
    ctx->r5 = ADD32(ctx->r5, 0XE0);
    guMtxF2L(rdram, ctx);
        goto after_7;
    // 0x8000ECF8: addiu       $a1, $a1, 0xE0
    ctx->r5 = ADD32(ctx->r5, 0XE0);
    after_7:
    // 0x8000ECFC: lw          $t8, 0x94($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X94);
    // 0x8000ED00: nop

    // 0x8000ED04: addiu       $t0, $t8, 0x8
    ctx->r8 = ADD32(ctx->r24, 0X8);
    // 0x8000ED08: sw          $t0, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r8;
    // 0x8000ED0C: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x8000ED10: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x8000ED14: lui         $t9, 0x102
    ctx->r25 = S32(0X102 << 16);
    // 0x8000ED18: ori         $t9, $t9, 0x40
    ctx->r25 = ctx->r25 | 0X40;
    // 0x8000ED1C: sw          $t9, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r25;
    // 0x8000ED20: lw          $t3, 0xBC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XBC);
    // 0x8000ED24: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8000ED28: lw          $t2, -0x1EFC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1EFC);
    // 0x8000ED2C: sll         $t4, $t3, 6
    ctx->r12 = S32(ctx->r11 << 6);
    // 0x8000ED30: addiu       $t6, $t3, 0x1
    ctx->r14 = ADD32(ctx->r11, 0X1);
    // 0x8000ED34: addu        $a0, $t2, $t4
    ctx->r4 = ADD32(ctx->r10, ctx->r12);
    // 0x8000ED38: addiu       $a0, $a0, 0xE0
    ctx->r4 = ADD32(ctx->r4, 0XE0);
    // 0x8000ED3C: jal         0x800358D0
    // 0x8000ED40: sw          $t6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r14;
    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_8;
    // 0x8000ED40: sw          $t6, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r14;
    after_8:
    // 0x8000ED44: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x8000ED48: nop

    // 0x8000ED4C: sw          $v0, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r2;
    // 0x8000ED50: lw          $t8, 0xB8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB8);
    // 0x8000ED54: lw          $t7, 0x84($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X84);
    // 0x8000ED58: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8000ED5C: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x8000ED60: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8000ED64: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x8000ED68: lw          $t1, 0x0($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X0);
    // 0x8000ED6C: nop

    // 0x8000ED70: bltz        $t1, L_8000EDC0
    if (SIGNED(ctx->r9) < 0) {
        // 0x8000ED74: nop
    
            goto L_8000EDC0;
    }
    // 0x8000ED74: nop

    // 0x8000ED78: lw          $t3, 0xB8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB8);
    // 0x8000ED7C: lw          $t2, 0xB0($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XB0);
    // 0x8000ED80: sll         $t6, $t3, 2
    ctx->r14 = S32(ctx->r11 << 2);
    // 0x8000ED84: lw          $t4, 0x84($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X84);
    // 0x8000ED88: subu        $t6, $t6, $t3
    ctx->r14 = SUB32(ctx->r14, ctx->r11);
    // 0x8000ED8C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8000ED90: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8000ED94: addu        $t5, $t4, $t6
    ctx->r13 = ADD32(ctx->r12, ctx->r14);
    // 0x8000ED98: lw          $t8, 0x0($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X0);
    // 0x8000ED9C: lw          $t7, 0xBC($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XBC);
    // 0x8000EDA0: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x8000EDA4: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x8000EDA8: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    // 0x8000EDAC: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x8000EDB0: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x8000EDB4: jal         0x8000EEE8
    // 0x8000EDB8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    func_8000EEE8(rdram, ctx);
        goto after_9;
    // 0x8000EDB8: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    after_9:
    // 0x8000EDBC: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
L_8000EDC0:
    // 0x8000EDC0: lw          $t9, 0xB8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB8);
    // 0x8000EDC4: lw          $t0, 0x84($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X84);
    // 0x8000EDC8: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x8000EDCC: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x8000EDD0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8000EDD4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8000EDD8: lw          $t3, 0x2C($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X2C);
    // 0x8000EDDC: nop

    // 0x8000EDE0: beq         $t3, $zero, L_8000EE28
    if (ctx->r11 == 0) {
        // 0x8000EDE4: sw          $t3, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r11;
            goto L_8000EE28;
    }
    // 0x8000EDE4: sw          $t3, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r11;
    // 0x8000EDE8: lw          $t5, 0xB8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XB8);
    // 0x8000EDEC: lw          $t8, 0x9C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X9C);
    // 0x8000EDF0: lw          $t4, 0xB0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB0);
    // 0x8000EDF4: lw          $t6, 0xB4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB4);
    // 0x8000EDF8: lw          $t9, 0xBC($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XBC);
    // 0x8000EDFC: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x8000EE00: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x8000EE04: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    // 0x8000EE08: addu        $t7, $t5, $t8
    ctx->r15 = ADD32(ctx->r13, ctx->r24);
    // 0x8000EE0C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8000EE10: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x8000EE14: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8000EE18: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x8000EE1C: jal         0x8000E944
    // 0x8000EE20: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    func_8000E944(rdram, ctx);
        goto after_10;
    // 0x8000EE20: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    after_10:
    // 0x8000EE24: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
L_8000EE28:
    // 0x8000EE28: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8000EE2C: nop

    // 0x8000EE30: beq         $t0, $zero, L_8000EE4C
    if (ctx->r8 == 0) {
        // 0x8000EE34: nop
    
            goto L_8000EE4C;
    }
    // 0x8000EE34: nop

    // 0x8000EE38: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000EE3C: lw          $t1, 0x5820($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5820);
    // 0x8000EE40: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000EE44: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x8000EE48: sw          $t2, 0x5820($at)
    MEM_W(0X5820, ctx->r1) = ctx->r10;
L_8000EE4C:
    // 0x8000EE4C: lw          $t4, 0xB8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XB8);
    // 0x8000EE50: lw          $t3, 0x84($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X84);
    // 0x8000EE54: sll         $t6, $t4, 2
    ctx->r14 = S32(ctx->r12 << 2);
    // 0x8000EE58: subu        $t6, $t6, $t4
    ctx->r14 = SUB32(ctx->r14, ctx->r12);
    // 0x8000EE5C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8000EE60: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x8000EE64: lw          $t8, 0x28($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X28);
    // 0x8000EE68: nop

    // 0x8000EE6C: beq         $t8, $zero, L_8000EEB4
    if (ctx->r24 == 0) {
        // 0x8000EE70: sw          $t8, 0x9C($sp)
        MEM_W(0X9C, ctx->r29) = ctx->r24;
            goto L_8000EEB4;
    }
    // 0x8000EE70: sw          $t8, 0x9C($sp)
    MEM_W(0X9C, ctx->r29) = ctx->r24;
    // 0x8000EE74: lw          $t0, 0xB8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB8);
    // 0x8000EE78: lw          $t1, 0x9C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X9C);
    // 0x8000EE7C: lw          $t7, 0xB0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XB0);
    // 0x8000EE80: lw          $t9, 0xB4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XB4);
    // 0x8000EE84: lw          $t4, 0xBC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XBC);
    // 0x8000EE88: lw          $a1, 0xA4($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XA4);
    // 0x8000EE8C: lw          $a2, 0xA8($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XA8);
    // 0x8000EE90: lw          $a3, 0xAC($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XAC);
    // 0x8000EE94: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8000EE98: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8000EE9C: addiu       $a0, $sp, 0x94
    ctx->r4 = ADD32(ctx->r29, 0X94);
    // 0x8000EEA0: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x8000EEA4: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8000EEA8: jal         0x8000E944
    // 0x8000EEAC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    func_8000E944(rdram, ctx);
        goto after_11;
    // 0x8000EEAC: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
    after_11:
    // 0x8000EEB0: sw          $v0, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r2;
L_8000EEB4:
    // 0x8000EEB4: lw          $t3, 0x94($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X94);
    // 0x8000EEB8: lw          $t6, 0xA0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XA0);
    // 0x8000EEBC: nop

    // 0x8000EEC0: sw          $t3, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r11;
    // 0x8000EEC4: lw          $v0, 0xBC($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XBC);
    // 0x8000EEC8: b           L_8000EED8
    // 0x8000EECC: nop

        goto L_8000EED8;
    // 0x8000EECC: nop

    // 0x8000EED0: b           L_8000EED8
    // 0x8000EED4: nop

        goto L_8000EED8;
    // 0x8000EED4: nop

L_8000EED8:
    // 0x8000EED8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8000EEDC: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8000EEE0: jr          $ra
    // 0x8000EEE4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8000EEE4: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void func_80002F7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002F7C: jr          $ra
    // 0x80002F80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x80002F80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80002F84: jr          $ra
    // 0x80002F88: nop

    return;
    // 0x80002F88: nop

    // 0x80002F8C: jr          $ra
    // 0x80002F90: nop

    return;
    // 0x80002F90: nop

;}
RECOMP_FUNC void func_8001DCEC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001DCEC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8001DCF0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001DCF4: lb          $t6, 0x7708($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7708);
    // 0x8001DCF8: nop

    // 0x8001DCFC: bne         $t6, $zero, L_8001DD0C
    if (ctx->r14 != 0) {
        // 0x8001DD00: nop
    
            goto L_8001DD0C;
    }
    // 0x8001DD00: nop

    // 0x8001DD04: b           L_8001DED4
    // 0x8001DD08: nop

        goto L_8001DED4;
    // 0x8001DD08: nop

L_8001DD0C:
    // 0x8001DD0C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8001DD10: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001DD14: lbu         $t7, -0x1D84($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1D84);
    // 0x8001DD18: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8001DD1C: nop

    // 0x8001DD20: srav        $t9, $t7, $t8
    ctx->r25 = S32(SIGNED(ctx->r15) >> (ctx->r24 & 31));
    // 0x8001DD24: andi        $t0, $t9, 0x1
    ctx->r8 = ctx->r25 & 0X1;
    // 0x8001DD28: beq         $t0, $zero, L_8001DDE0
    if (ctx->r8 == 0) {
        // 0x8001DD2C: nop
    
            goto L_8001DDE0;
    }
    // 0x8001DD2C: nop

    // 0x8001DD30: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8001DD34: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001DD38: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8001DD3C: subu        $t2, $t2, $t1
    ctx->r10 = SUB32(ctx->r10, ctx->r9);
    // 0x8001DD40: sll         $t2, $t2, 1
    ctx->r10 = S32(ctx->r10 << 1);
    // 0x8001DD44: addiu       $t3, $t3, 0x7668
    ctx->r11 = ADD32(ctx->r11, 0X7668);
    // 0x8001DD48: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8001DD4C: sw          $t4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r12;
    // 0x8001DD50: lw          $t5, 0x0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X0);
    // 0x8001DD54: nop

    // 0x8001DD58: lbu         $t6, 0x4($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X4);
    // 0x8001DD5C: nop

    // 0x8001DD60: beq         $t6, $zero, L_8001DD70
    if (ctx->r14 == 0) {
        // 0x8001DD64: nop
    
            goto L_8001DD70;
    }
    // 0x8001DD64: nop

    // 0x8001DD68: b           L_8001DED4
    // 0x8001DD6C: nop

        goto L_8001DED4;
    // 0x8001DD6C: nop

L_8001DD70:
    // 0x8001DD70: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8001DD74: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001DD78: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001DD7C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001DD80: lhu         $t9, 0x7758($t9)
    ctx->r25 = MEM_HU(ctx->r25, 0X7758);
    // 0x8001DD84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DD88: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8001DD8C: sh          $t9, 0x7748($at)
    MEM_H(0X7748, ctx->r1) = ctx->r25;
    // 0x8001DD90: lw          $t0, 0x0($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X0);
    // 0x8001DD94: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x8001DD98: lhu         $t1, 0x0($t0)
    ctx->r9 = MEM_HU(ctx->r8, 0X0);
    // 0x8001DD9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DDA0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8001DDA4: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001DDA8: sh          $t1, 0x7758($at)
    MEM_H(0X7758, ctx->r1) = ctx->r9;
    // 0x8001DDAC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001DDB0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001DDB4: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x8001DDB8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001DDBC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8001DDC0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8001DDC4: lhu         $t6, 0x7758($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X7758);
    // 0x8001DDC8: lhu         $t7, 0x7748($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X7748);
    // 0x8001DDCC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DDD0: xor         $t9, $t6, $t7
    ctx->r25 = ctx->r14 ^ ctx->r15;
    // 0x8001DDD4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x8001DDD8: and         $t8, $t6, $t9
    ctx->r24 = ctx->r14 & ctx->r25;
    // 0x8001DDDC: sh          $t8, 0x7768($at)
    MEM_H(0X7768, ctx->r1) = ctx->r24;
L_8001DDE0:
    // 0x8001DDE0: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8001DDE4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001DDE8: sll         $t2, $t0, 1
    ctx->r10 = S32(ctx->r8 << 1);
    // 0x8001DDEC: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8001DDF0: lhu         $t1, 0x7768($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X7768);
    // 0x8001DDF4: nop

    // 0x8001DDF8: andi        $t3, $t1, 0x1000
    ctx->r11 = ctx->r9 & 0X1000;
    // 0x8001DDFC: beq         $t3, $zero, L_8001DE24
    if (ctx->r11 == 0) {
        // 0x8001DE00: nop
    
            goto L_8001DE24;
    }
    // 0x8001DE00: nop

    // 0x8001DE04: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001DE08: lw          $t4, 0x7718($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7718);
    // 0x8001DE0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DE10: addiu       $t7, $t4, 0x1
    ctx->r15 = ADD32(ctx->r12, 0X1);
    // 0x8001DE14: sw          $t7, 0x7718($at)
    MEM_W(0X7718, ctx->r1) = ctx->r15;
    // 0x8001DE18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DE1C: b           L_8001DE38
    // 0x8001DE20: sw          $zero, 0x7728($at)
    MEM_W(0X7728, ctx->r1) = 0;
        goto L_8001DE38;
    // 0x8001DE20: sw          $zero, 0x7728($at)
    MEM_W(0X7728, ctx->r1) = 0;
L_8001DE24:
    // 0x8001DE24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001DE28: lw          $t6, 0x7728($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7728);
    // 0x8001DE2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DE30: addiu       $t9, $t6, 0x1
    ctx->r25 = ADD32(ctx->r14, 0X1);
    // 0x8001DE34: sw          $t9, 0x7728($at)
    MEM_W(0X7728, ctx->r1) = ctx->r25;
L_8001DE38:
    // 0x8001DE38: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001DE3C: lw          $t8, 0x7728($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7728);
    // 0x8001DE40: nop

    // 0x8001DE44: slti        $at, $t8, 0x7
    ctx->r1 = SIGNED(ctx->r24) < 0X7 ? 1 : 0;
    // 0x8001DE48: bne         $at, $zero, L_8001DE60
    if (ctx->r1 != 0) {
        // 0x8001DE4C: nop
    
            goto L_8001DE60;
    }
    // 0x8001DE4C: nop

    // 0x8001DE50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DE54: sw          $zero, 0x7718($at)
    MEM_W(0X7718, ctx->r1) = 0;
    // 0x8001DE58: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DE5C: sw          $zero, 0x7738($at)
    MEM_W(0X7738, ctx->r1) = 0;
L_8001DE60:
    // 0x8001DE60: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001DE64: lw          $t5, 0x7738($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7738);
    // 0x8001DE68: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8001DE6C: bne         $t5, $at, L_8001DEB8
    if (ctx->r13 != ctx->r1) {
        // 0x8001DE70: nop
    
            goto L_8001DEB8;
    }
    // 0x8001DE70: nop

    // 0x8001DE74: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001DE78: lw          $t0, 0x7718($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7718);
    // 0x8001DE7C: nop

    // 0x8001DE80: slti        $at, $t0, 0xA
    ctx->r1 = SIGNED(ctx->r8) < 0XA ? 1 : 0;
    // 0x8001DE84: bne         $at, $zero, L_8001DEA4
    if (ctx->r1 != 0) {
        // 0x8001DE88: nop
    
            goto L_8001DEA4;
    }
    // 0x8001DE88: nop

    // 0x8001DE8C: slti        $at, $t0, 0xF
    ctx->r1 = SIGNED(ctx->r8) < 0XF ? 1 : 0;
    // 0x8001DE90: beq         $at, $zero, L_8001DEA4
    if (ctx->r1 == 0) {
        // 0x8001DE94: nop
    
            goto L_8001DEA4;
    }
    // 0x8001DE94: nop

    // 0x8001DE98: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8001DE9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DEA0: sb          $t2, 0x76F8($at)
    MEM_B(0X76F8, ctx->r1) = ctx->r10;
L_8001DEA4:
    // 0x8001DEA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DEA8: sw          $zero, 0x7718($at)
    MEM_W(0X7718, ctx->r1) = 0;
    // 0x8001DEAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DEB0: b           L_8001DECC
    // 0x8001DEB4: sw          $zero, 0x7738($at)
    MEM_W(0X7738, ctx->r1) = 0;
        goto L_8001DECC;
    // 0x8001DEB4: sw          $zero, 0x7738($at)
    MEM_W(0X7738, ctx->r1) = 0;
L_8001DEB8:
    // 0x8001DEB8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001DEBC: lw          $t1, 0x7738($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7738);
    // 0x8001DEC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DEC4: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x8001DEC8: sw          $t3, 0x7738($at)
    MEM_W(0X7738, ctx->r1) = ctx->r11;
L_8001DECC:
    // 0x8001DECC: b           L_8001DED4
    // 0x8001DED0: nop

        goto L_8001DED4;
    // 0x8001DED0: nop

L_8001DED4:
    // 0x8001DED4: jr          $ra
    // 0x8001DED8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8001DED8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8000D070(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D070: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000D074: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000D078: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000D07C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000D080: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000D084: lw          $t6, -0x5CA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CA8);
    // 0x8000D088: nop

    // 0x8000D08C: bne         $t6, $zero, L_8000D09C
    if (ctx->r14 != 0) {
        // 0x8000D090: nop
    
            goto L_8000D09C;
    }
    // 0x8000D090: nop

    // 0x8000D094: b           L_8000D108
    // 0x8000D098: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000D108;
    // 0x8000D098: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000D09C:
    // 0x8000D09C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000D0A0: lw          $t8, 0x2D58($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D58);
    // 0x8000D0A4: lh          $t7, 0x42($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X42);
    // 0x8000D0A8: lh          $t9, 0x2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X2);
    // 0x8000D0AC: nop

    // 0x8000D0B0: slt         $at, $t7, $t9
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8000D0B4: beq         $at, $zero, L_8000D0C4
    if (ctx->r1 == 0) {
        // 0x8000D0B8: nop
    
            goto L_8000D0C4;
    }
    // 0x8000D0B8: nop

    // 0x8000D0BC: bgez        $t7, L_8000D0CC
    if (SIGNED(ctx->r15) >= 0) {
        // 0x8000D0C0: nop
    
            goto L_8000D0CC;
    }
    // 0x8000D0C0: nop

L_8000D0C4:
    // 0x8000D0C4: b           L_8000D108
    // 0x8000D0C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8000D108;
    // 0x8000D0C8: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8000D0CC:
    // 0x8000D0CC: lh          $a0, 0x42($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X42);
    // 0x8000D0D0: jal         0x800069D0
    // 0x8000D0D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    func_800069D0(rdram, ctx);
        goto after_0;
    // 0x8000D0D4: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    after_0:
    // 0x8000D0D8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8000D0DC: nop

    // 0x8000D0E0: andi        $t1, $t0, 0x80
    ctx->r9 = ctx->r8 & 0X80;
    // 0x8000D0E4: beq         $t1, $zero, L_8000D0F4
    if (ctx->r9 == 0) {
        // 0x8000D0E8: nop
    
            goto L_8000D0F4;
    }
    // 0x8000D0E8: nop

    // 0x8000D0EC: b           L_8000D0F8
    // 0x8000D0F0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
        goto L_8000D0F8;
    // 0x8000D0F0: addiu       $s0, $zero, 0x1
    ctx->r16 = ADD32(0, 0X1);
L_8000D0F4:
    // 0x8000D0F4: or          $s0, $zero, $zero
    ctx->r16 = 0 | 0;
L_8000D0F8:
    // 0x8000D0F8: b           L_8000D108
    // 0x8000D0FC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
        goto L_8000D108;
    // 0x8000D0FC: or          $v0, $s0, $zero
    ctx->r2 = ctx->r16 | 0;
    // 0x8000D100: b           L_8000D108
    // 0x8000D104: nop

        goto L_8000D108;
    // 0x8000D104: nop

L_8000D108:
    // 0x8000D108: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D10C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000D110: jr          $ra
    // 0x8000D114: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x8000D114: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8000678C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000678C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80006790: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80006794: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x80006798: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x8000679C: blez        $t6, L_80006820
    if (SIGNED(ctx->r14) <= 0) {
        // 0x800067A0: nop
    
            goto L_80006820;
    }
    // 0x800067A0: nop

L_800067A4:
    // 0x800067A4: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x800067A8: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800067AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800067B0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800067B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800067B8: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x800067BC: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800067C0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800067C4: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x800067C8: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x800067CC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800067D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800067D4: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x800067D8: nop

    // 0x800067DC: beq         $t2, $at, L_800067EC
    if (ctx->r10 == ctx->r1) {
        // 0x800067E0: nop
    
            goto L_800067EC;
    }
    // 0x800067E0: nop

    // 0x800067E4: b           L_80006804
    // 0x800067E8: nop

        goto L_80006804;
    // 0x800067E8: nop

L_800067EC:
    // 0x800067EC: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800067F0: nop

    // 0x800067F4: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x800067F8: nop

    // 0x800067FC: ori         $t5, $t4, 0x2
    ctx->r13 = ctx->r12 | 0X2;
    // 0x80006800: sw          $t5, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->r13;
L_80006804:
    // 0x80006804: lw          $t6, 0x0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X0);
    // 0x80006808: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000680C: lw          $t8, -0x5CF4($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CF4);
    // 0x80006810: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x80006814: slt         $at, $t7, $t8
    ctx->r1 = SIGNED(ctx->r15) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80006818: bne         $at, $zero, L_800067A4
    if (ctx->r1 != 0) {
        // 0x8000681C: sw          $t7, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r15;
            goto L_800067A4;
    }
    // 0x8000681C: sw          $t7, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r15;
L_80006820:
    // 0x80006820: b           L_80006828
    // 0x80006824: nop

        goto L_80006828;
    // 0x80006824: nop

L_80006828:
    // 0x80006828: jr          $ra
    // 0x8000682C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000682C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80003C94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003C94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80003C98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80003C9C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80003CA0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003CA4: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003CA8: jal         0x80034710
    // 0x80003CAC: nop

    alSeqpGetState(rdram, ctx);
        goto after_0;
    // 0x80003CAC: nop

    after_0:
    // 0x80003CB0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003CB4: sw          $v0, 0x2EBC($at)
    MEM_W(0X2EBC, ctx->r1) = ctx->r2;
    // 0x80003CB8: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80003CBC: lw          $t6, 0x2EC0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EC0);
    // 0x80003CC0: nop

    // 0x80003CC4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80003CC8: beq         $t7, $zero, L_80003D14
    if (ctx->r15 == 0) {
        // 0x80003CCC: nop
    
            goto L_80003D14;
    }
    // 0x80003CCC: nop

    // 0x80003CD0: lui         $s0, 0x8005
    ctx->r16 = S32(0X8005 << 16);
    // 0x80003CD4: lw          $s0, 0x2EBC($s0)
    ctx->r16 = MEM_W(ctx->r16, 0X2EBC);
    // 0x80003CD8: nop

    // 0x80003CDC: beq         $s0, $zero, L_80003CF8
    if (ctx->r16 == 0) {
        // 0x80003CE0: nop
    
            goto L_80003CF8;
    }
    // 0x80003CE0: nop

    // 0x80003CE4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80003CE8: beq         $s0, $at, L_80003D08
    if (ctx->r16 == ctx->r1) {
        // 0x80003CEC: nop
    
            goto L_80003D08;
    }
    // 0x80003CEC: nop

    // 0x80003CF0: b           L_80003D14
    // 0x80003CF4: nop

        goto L_80003D14;
    // 0x80003CF4: nop

L_80003CF8:
    // 0x80003CF8: jal         0x80003940
    // 0x80003CFC: nop

    func_80003940(rdram, ctx);
        goto after_1;
    // 0x80003CFC: nop

    after_1:
    // 0x80003D00: b           L_80003D14
    // 0x80003D04: nop

        goto L_80003D14;
    // 0x80003D04: nop

L_80003D08:
    // 0x80003D08: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80003D0C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003D10: sw          $t8, 0x2EBC($at)
    MEM_W(0X2EBC, ctx->r1) = ctx->r24;
L_80003D14:
    // 0x80003D14: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80003D18: lw          $t9, 0x2EBC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2EBC);
    // 0x80003D1C: nop

    // 0x80003D20: bne         $t9, $zero, L_80003D30
    if (ctx->r25 != 0) {
        // 0x80003D24: nop
    
            goto L_80003D30;
    }
    // 0x80003D24: nop

    // 0x80003D28: b           L_80003F90
    // 0x80003D2C: nop

        goto L_80003F90;
    // 0x80003D2C: nop

L_80003D30:
    // 0x80003D30: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003D34: lwc1        $f4, 0x2EC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2EC4);
    // 0x80003D38: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80003D3C: nop

    // 0x80003D40: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80003D44: nop

    // 0x80003D48: bc1f        L_80003E74
    if (!c1cs) {
        // 0x80003D4C: nop
    
            goto L_80003E74;
    }
    // 0x80003D4C: nop

    // 0x80003D50: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003D54: lwc1        $f8, 0x2EC8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2EC8);
    // 0x80003D58: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003D5C: lwc1        $f10, 0x2EC4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2EC4);
    // 0x80003D60: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003D64: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80003D68: swc1        $f16, 0x2EC8($at)
    MEM_W(0X2EC8, ctx->r1) = ctx->f16.u32l;
    // 0x80003D6C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80003D70: lh          $t0, 0x2ED2($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X2ED2);
    // 0x80003D74: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003D78: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80003D7C: lwc1        $f18, 0x2EC8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2EC8);
    // 0x80003D80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80003D84: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x80003D88: nop

    // 0x80003D8C: bc1f        L_80003DAC
    if (!c1cs) {
        // 0x80003D90: nop
    
            goto L_80003DAC;
    }
    // 0x80003D90: nop

    // 0x80003D94: jal         0x80004284
    // 0x80003D98: nop

    func_80004284(rdram, ctx);
        goto after_2;
    // 0x80003D98: nop

    after_2:
    // 0x80003D9C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80003DA0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003DA4: b           L_80003E74
    // 0x80003DA8: swc1        $f8, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f8.u32l;
        goto L_80003E74;
    // 0x80003DA8: swc1        $f8, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f8.u32l;
L_80003DAC:
    // 0x80003DAC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003DB0: lwc1        $f10, 0x2EC8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2EC8);
    // 0x80003DB4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80003DB8: nop

    // 0x80003DBC: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80003DC0: nop

    // 0x80003DC4: bc1t        L_80003E74
    if (c1cs) {
        // 0x80003DC8: nop
    
            goto L_80003E74;
    }
    // 0x80003DC8: nop

    // 0x80003DCC: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80003DD0: lh          $t1, 0x2ED2($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X2ED2);
    // 0x80003DD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003DD8: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x80003DDC: lwc1        $f6, 0x2EC8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2EC8);
    // 0x80003DE0: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80003DE4: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80003DE8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80003DEC: nop

    // 0x80003DF0: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80003DF4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80003DF8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80003DFC: nop

    // 0x80003E00: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80003E04: mfc1        $t3, $f10
    ctx->r11 = (int32_t)ctx->f10.u32l;
    // 0x80003E08: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80003E0C: sh          $t3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r11;
    // 0x80003E10: nop

    // 0x80003E14: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80003E18: lh          $t4, 0x2ECE($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X2ECE);
    // 0x80003E1C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80003E20: nop

    // 0x80003E24: beq         $t4, $t5, L_80003E74
    if (ctx->r12 == ctx->r13) {
        // 0x80003E28: nop
    
            goto L_80003E74;
    }
    // 0x80003E28: nop

    // 0x80003E2C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80003E30: lh          $t7, 0x2ED0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2ED0);
    // 0x80003E34: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x80003E38: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80003E3C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80003E40: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003E44: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003E48: mflo        $a1
    ctx->r5 = lo;
    // 0x80003E4C: nop

    // 0x80003E50: nop

    // 0x80003E54: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80003E58: mflo        $t8
    ctx->r24 = lo;
    // 0x80003E5C: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80003E60: jal         0x800346A0
    // 0x80003E64: nop

    alSeqpSetVol(rdram, ctx);
        goto after_3;
    // 0x80003E64: nop

    after_3:
    // 0x80003E68: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80003E6C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003E70: sh          $t9, 0x2ECE($at)
    MEM_H(0X2ECE, ctx->r1) = ctx->r25;
L_80003E74:
    // 0x80003E74: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003E78: lwc1        $f16, 0x2EC4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X2EC4);
    // 0x80003E7C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80003E80: nop

    // 0x80003E84: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x80003E88: nop

    // 0x80003E8C: bc1f        L_80003F88
    if (!c1cs) {
        // 0x80003E90: nop
    
            goto L_80003F88;
    }
    // 0x80003E90: nop

    // 0x80003E94: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003E98: lwc1        $f18, 0x2EC8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2EC8);
    // 0x80003E9C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003EA0: lwc1        $f6, 0x2EC4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2EC4);
    // 0x80003EA4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003EA8: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80003EAC: swc1        $f8, 0x2EC8($at)
    MEM_W(0X2EC8, ctx->r1) = ctx->f8.u32l;
    // 0x80003EB0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80003EB4: lh          $t0, 0x2ED2($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X2ED2);
    // 0x80003EB8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003EBC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80003EC0: lwc1        $f10, 0x2EC8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2EC8);
    // 0x80003EC4: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80003EC8: c.le.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl <= ctx->f10.fl;
    // 0x80003ECC: nop

    // 0x80003ED0: bc1f        L_80003EF8
    if (!c1cs) {
        // 0x80003ED4: nop
    
            goto L_80003EF8;
    }
    // 0x80003ED4: nop

    // 0x80003ED8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80003EDC: lh          $t1, 0x2ED2($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X2ED2);
    // 0x80003EE0: nop

    // 0x80003EE4: sh          $t1, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r9;
    // 0x80003EE8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80003EEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003EF0: b           L_80003F28
    // 0x80003EF4: swc1        $f18, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f18.u32l;
        goto L_80003F28;
    // 0x80003EF4: swc1        $f18, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f18.u32l;
L_80003EF8:
    // 0x80003EF8: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80003EFC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003F00: lwc1        $f6, 0x2EC8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2EC8);
    // 0x80003F04: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80003F08: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80003F0C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80003F10: nop

    // 0x80003F14: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80003F18: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x80003F1C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80003F20: sh          $t3, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r11;
    // 0x80003F24: nop

L_80003F28:
    // 0x80003F28: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80003F2C: lh          $t4, 0x2ECE($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X2ECE);
    // 0x80003F30: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x80003F34: nop

    // 0x80003F38: beq         $t4, $t5, L_80003F88
    if (ctx->r12 == ctx->r13) {
        // 0x80003F3C: nop
    
            goto L_80003F88;
    }
    // 0x80003F3C: nop

    // 0x80003F40: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80003F44: lh          $t7, 0x2ED0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X2ED0);
    // 0x80003F48: lh          $t6, 0x26($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X26);
    // 0x80003F4C: addiu       $at, $zero, 0x7FFF
    ctx->r1 = ADD32(0, 0X7FFF);
    // 0x80003F50: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80003F54: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003F58: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003F5C: mflo        $a1
    ctx->r5 = lo;
    // 0x80003F60: nop

    // 0x80003F64: nop

    // 0x80003F68: div         $zero, $a1, $at
    lo = S32(S64(S32(ctx->r5)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r5)) % S64(S32(ctx->r1)));
    // 0x80003F6C: mflo        $t8
    ctx->r24 = lo;
    // 0x80003F70: or          $a1, $t8, $zero
    ctx->r5 = ctx->r24 | 0;
    // 0x80003F74: jal         0x800346A0
    // 0x80003F78: nop

    alSeqpSetVol(rdram, ctx);
        goto after_4;
    // 0x80003F78: nop

    after_4:
    // 0x80003F7C: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x80003F80: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003F84: sh          $t9, 0x2ECE($at)
    MEM_H(0X2ECE, ctx->r1) = ctx->r25;
L_80003F88:
    // 0x80003F88: b           L_80003F90
    // 0x80003F8C: nop

        goto L_80003F90;
    // 0x80003F8C: nop

L_80003F90:
    // 0x80003F90: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80003F94: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80003F98: jr          $ra
    // 0x80003F9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80003F9C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800046C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800046C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800046C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800046CC: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x800046D0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800046D4: lw          $t6, 0x2EC0($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EC0);
    // 0x800046D8: nop

    // 0x800046DC: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x800046E0: bne         $t7, $zero, L_800046F0
    if (ctx->r15 != 0) {
        // 0x800046E4: nop
    
            goto L_800046F0;
    }
    // 0x800046E4: nop

    // 0x800046E8: b           L_800047B8
    // 0x800046EC: nop

        goto L_800047B8;
    // 0x800046EC: nop

L_800046F0:
    // 0x800046F0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x800046F4: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x800046F8: jal         0x800346E0
    // 0x800046FC: nop

    alSeqpPlay(rdram, ctx);
        goto after_0;
    // 0x800046FC: nop

    after_0:
    // 0x80004700: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80004704: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004708: sw          $t8, 0x2EBC($at)
    MEM_W(0X2EBC, ctx->r1) = ctx->r24;
    // 0x8000470C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80004710: lw          $t9, 0x2EC0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2EC0);
    // 0x80004714: addiu       $at, $zero, -0x3
    ctx->r1 = ADD32(0, -0X3);
    // 0x80004718: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x8000471C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004720: sw          $t0, 0x2EC0($at)
    MEM_W(0X2EC0, ctx->r1) = ctx->r8;
    // 0x80004724: lh          $t1, 0x1A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X1A);
    // 0x80004728: nop

    // 0x8000472C: beq         $t1, $zero, L_80004754
    if (ctx->r9 == 0) {
        // 0x80004730: nop
    
            goto L_80004754;
    }
    // 0x80004730: nop

    // 0x80004734: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004738: lwc1        $f4, 0x2EC4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2EC4);
    // 0x8000473C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80004740: nop

    // 0x80004744: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80004748: nop

    // 0x8000474C: bc1f        L_8000475C
    if (!c1cs) {
        // 0x80004750: nop
    
            goto L_8000475C;
    }
    // 0x80004750: nop

L_80004754:
    // 0x80004754: b           L_800047B8
    // 0x80004758: nop

        goto L_800047B8;
    // 0x80004758: nop

L_8000475C:
    // 0x8000475C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80004760: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80004764: swc1        $f8, 0x2EC8($at)
    MEM_W(0X2EC8, ctx->r1) = ctx->f8.u32l;
    // 0x80004768: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000476C: sh          $zero, 0x2ECE($at)
    MEM_H(0X2ECE, ctx->r1) = 0;
    // 0x80004770: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80004774: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80004778: jal         0x800346A0
    // 0x8000477C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    alSeqpSetVol(rdram, ctx);
        goto after_1;
    // 0x8000477C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80004780: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80004784: lh          $t2, 0x2ED2($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X2ED2);
    // 0x80004788: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x8000478C: mtc1        $t2, $f10
    ctx->f10.u32l = ctx->r10;
    // 0x80004790: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80004794: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80004798: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000479C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800047A0: nop

    // 0x800047A4: div.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x800047A8: neg.s       $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = -ctx->f6.fl;
    // 0x800047AC: swc1        $f8, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f8.u32l;
    // 0x800047B0: b           L_800047B8
    // 0x800047B4: nop

        goto L_800047B8;
    // 0x800047B4: nop

L_800047B8:
    // 0x800047B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800047BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800047C0: jr          $ra
    // 0x800047C4: nop

    return;
    // 0x800047C4: nop

;}
RECOMP_FUNC void func_80027B34(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80027B34: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80027B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80027B3C: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80027B40: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x80027B44: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80027B48: nop

    // 0x80027B4C: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80027B50: nop

    // 0x80027B54: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80027B58: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80027B5C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80027B60: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80027B64: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80027B68: lb          $t1, 0x0($t0)
    ctx->r9 = MEM_B(ctx->r8, 0X0);
    // 0x80027B6C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80027B70: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80027B74: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80027B78: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x80027B7C: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x80027B80: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80027B84: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80027B88: lh          $t4, 0x4290($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4290);
    // 0x80027B8C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80027B90: beq         $t4, $at, L_80027BA0
    if (ctx->r12 == ctx->r1) {
        // 0x80027B94: nop
    
            goto L_80027BA0;
    }
    // 0x80027B94: nop

    // 0x80027B98: b           L_80027BF0
    // 0x80027B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80027BF0;
    // 0x80027B9C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80027BA0:
    // 0x80027BA0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80027BA4: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80027BA8: lb          $t7, 0xC($t5)
    ctx->r15 = MEM_B(ctx->r13, 0XC);
    // 0x80027BAC: lh          $t9, 0x2($t5)
    ctx->r25 = MEM_H(ctx->r13, 0X2);
    // 0x80027BB0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80027BB4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80027BB8: sll         $t2, $t9, 3
    ctx->r10 = S32(ctx->r25 << 3);
    // 0x80027BBC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80027BC0: addu        $t0, $t6, $t8
    ctx->r8 = ADD32(ctx->r14, ctx->r24);
    // 0x80027BC4: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80027BC8: lw          $t3, -0x3560($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X3560);
    // 0x80027BCC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80027BD0: lb          $a1, 0x0($t5)
    ctx->r5 = MEM_B(ctx->r13, 0X0);
    // 0x80027BD4: lb          $a2, 0x4($t5)
    ctx->r6 = MEM_B(ctx->r13, 0X4);
    // 0x80027BD8: jal         0x8001BD44
    // 0x80027BDC: addu        $a3, $t1, $t3
    ctx->r7 = ADD32(ctx->r9, ctx->r11);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80027BDC: addu        $a3, $t1, $t3
    ctx->r7 = ADD32(ctx->r9, ctx->r11);
    after_0:
    // 0x80027BE0: b           L_80027BF0
    // 0x80027BE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80027BF0;
    // 0x80027BE4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80027BE8: b           L_80027BF0
    // 0x80027BEC: nop

        goto L_80027BF0;
    // 0x80027BEC: nop

L_80027BF0:
    // 0x80027BF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80027BF4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80027BF8: jr          $ra
    // 0x80027BFC: nop

    return;
    // 0x80027BFC: nop

;}
RECOMP_FUNC void func_800117F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800117F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800117FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80011800: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x80011804: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80011808: nop

    // 0x8001180C: bne         $t6, $zero, L_8001181C
    if (ctx->r14 != 0) {
        // 0x80011810: nop
    
            goto L_8001181C;
    }
    // 0x80011810: nop

    // 0x80011814: b           L_8001190C
    // 0x80011818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8001190C;
    // 0x80011818: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8001181C:
    // 0x8001181C: jal         0x8002FC34
    // 0x80011820: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    malloc_game(rdram, ctx);
        goto after_0;
    // 0x80011820: addiu       $a0, $zero, 0x60
    ctx->r4 = ADD32(0, 0X60);
    after_0:
    // 0x80011824: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80011828: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x8001182C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80011830: nop

    // 0x80011834: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x80011838: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8001183C: nop

    // 0x80011840: lw          $t0, 0x10($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X10);
    // 0x80011844: nop

    // 0x80011848: beq         $t0, $zero, L_800118E0
    if (ctx->r8 == 0) {
        // 0x8001184C: sw          $t0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r8;
            goto L_800118E0;
    }
    // 0x8001184C: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80011850: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80011854: nop

    // 0x80011858: sll         $t1, $a0, 2
    ctx->r9 = S32(ctx->r4 << 2);
    // 0x8001185C: jal         0x8002FC34
    // 0x80011860: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    malloc_game(rdram, ctx);
        goto after_1;
    // 0x80011860: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    after_1:
    // 0x80011864: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80011868: nop

    // 0x8001186C: sw          $v0, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->r2;
    // 0x80011870: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80011874: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80011878: blez        $t3, L_800118D0
    if (SIGNED(ctx->r11) <= 0) {
        // 0x8001187C: nop
    
            goto L_800118D0;
    }
    // 0x8001187C: nop

L_80011880:
    // 0x80011880: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80011884: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80011888: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8001188C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80011890: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x80011894: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x80011898: jal         0x800117F8
    // 0x8001189C: nop

    func_800117F8(rdram, ctx);
        goto after_2;
    // 0x8001189C: nop

    after_2:
    // 0x800118A0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800118A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800118A8: lw          $t0, 0x8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X8);
    // 0x800118AC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800118B0: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x800118B4: sw          $v0, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r2;
    // 0x800118B8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800118BC: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800118C0: addiu       $t6, $t4, 0x1
    ctx->r14 = ADD32(ctx->r12, 0X1);
    // 0x800118C4: slt         $at, $t6, $t5
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800118C8: bne         $at, $zero, L_80011880
    if (ctx->r1 != 0) {
        // 0x800118CC: sw          $t6, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r14;
            goto L_80011880;
    }
    // 0x800118CC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
L_800118D0:
    // 0x800118D0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800118D4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800118D8: b           L_800118F8
    // 0x800118DC: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
        goto L_800118F8;
    // 0x800118DC: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
L_800118E0:
    // 0x800118E0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800118E4: nop

    // 0x800118E8: sw          $zero, 0xC($t9)
    MEM_W(0XC, ctx->r25) = 0;
    // 0x800118EC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800118F0: nop

    // 0x800118F4: sw          $zero, 0x8($t1)
    MEM_W(0X8, ctx->r9) = 0;
L_800118F8:
    // 0x800118F8: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x800118FC: b           L_8001190C
    // 0x80011900: nop

        goto L_8001190C;
    // 0x80011900: nop

    // 0x80011904: b           L_8001190C
    // 0x80011908: nop

        goto L_8001190C;
    // 0x80011908: nop

L_8001190C:
    // 0x8001190C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80011910: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80011914: jr          $ra
    // 0x80011918: nop

    return;
    // 0x80011918: nop

;}
RECOMP_FUNC void Create_GfxTask(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D814: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001D818: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D81C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001D820: lw          $t6, -0x1EF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1EF4);
    // 0x8001D824: nop

    // 0x8001D828: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x8001D82C: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8001D830: nop

    // 0x8001D834: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x8001D838: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8001D83C: lw          $t8, -0x1EFC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1EFC);
    // 0x8001D840: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D844: ori         $at, $zero, 0x80E0
    ctx->r1 = 0 | 0X80E0;
    // 0x8001D848: addu        $t9, $t8, $at
    ctx->r25 = ADD32(ctx->r24, ctx->r1);
    // 0x8001D84C: sw          $t9, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->r25;
    // 0x8001D850: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001D854: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001D858: lw          $t2, -0x1EFC($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1EFC);
    // 0x8001D85C: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8001D860: lui         $at, 0xFFFF
    ctx->r1 = S32(0XFFFF << 16);
    // 0x8001D864: ori         $at, $at, 0x7F20
    ctx->r1 = ctx->r1 | 0X7F20;
    // 0x8001D868: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8001D86C: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8001D870: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D874: sra         $t5, $t4, 3
    ctx->r13 = S32(SIGNED(ctx->r12) >> 3);
    // 0x8001D878: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x8001D87C: sw          $t6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->r14;
    // 0x8001D880: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D884: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8001D888: sw          $t8, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->r24;
    // 0x8001D88C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D890: nop

    // 0x8001D894: sw          $zero, 0x14($t0)
    MEM_W(0X14, ctx->r8) = 0;
    // 0x8001D898: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D89C: lui         $t1, 0x8004
    ctx->r9 = S32(0X8004 << 16);
    // 0x8001D8A0: addiu       $t1, $t1, 0x7F60
    ctx->r9 = ADD32(ctx->r9, 0X7F60);
    // 0x8001D8A4: sw          $t1, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->r9;
    // 0x8001D8A8: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8001D8AC: lui         $t4, 0x8004
    ctx->r12 = S32(0X8004 << 16);
    // 0x8001D8B0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D8B4: addiu       $t4, $t4, 0x7F60
    ctx->r12 = ADD32(ctx->r12, 0X7F60);
    // 0x8001D8B8: addiu       $t3, $t3, -0x7FD0
    ctx->r11 = ADD32(ctx->r11, -0X7FD0);
    // 0x8001D8BC: subu        $t5, $t3, $t4
    ctx->r13 = SUB32(ctx->r11, ctx->r12);
    // 0x8001D8C0: sw          $t5, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->r13;
    // 0x8001D8C4: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D8C8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8001D8CC: addiu       $t7, $t7, -0x7FD0
    ctx->r15 = ADD32(ctx->r15, -0X7FD0);
    // 0x8001D8D0: sw          $t7, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->r15;
    // 0x8001D8D4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D8D8: addiu       $t9, $zero, 0x1000
    ctx->r25 = ADD32(0, 0X1000);
    // 0x8001D8DC: sw          $t9, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->r25;
    // 0x8001D8E0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D8E4: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8001D8E8: addiu       $t1, $t1, -0x36D0
    ctx->r9 = ADD32(ctx->r9, -0X36D0);
    // 0x8001D8EC: sw          $t1, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->r9;
    // 0x8001D8F0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D8F4: addiu       $t3, $zero, 0x800
    ctx->r11 = ADD32(0, 0X800);
    // 0x8001D8F8: sw          $t3, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->r11;
    // 0x8001D8FC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D900: lui         $t5, 0x801D
    ctx->r13 = S32(0X801D << 16);
    // 0x8001D904: addiu       $t5, $t5, 0x4B0
    ctx->r13 = ADD32(ctx->r13, 0X4B0);
    // 0x8001D908: sw          $t5, 0x30($t6)
    MEM_W(0X30, ctx->r14) = ctx->r13;
    // 0x8001D90C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D910: addiu       $t7, $zero, 0x400
    ctx->r15 = ADD32(0, 0X400);
    // 0x8001D914: sw          $t7, 0x34($t8)
    MEM_W(0X34, ctx->r24) = ctx->r15;
    // 0x8001D918: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D91C: lui         $t9, 0x801C
    ctx->r25 = S32(0X801C << 16);
    // 0x8001D920: addiu       $t9, $t9, 0x1A50
    ctx->r25 = ADD32(ctx->r25, 0X1A50);
    // 0x8001D924: sw          $t9, 0x38($t0)
    MEM_W(0X38, ctx->r8) = ctx->r25;
    // 0x8001D928: lui         $t1, 0x801C
    ctx->r9 = S32(0X801C << 16);
    // 0x8001D92C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D930: addiu       $t1, $t1, 0x1A50
    ctx->r9 = ADD32(ctx->r9, 0X1A50);
    // 0x8001D934: ori         $at, $zero, 0xEA60
    ctx->r1 = 0 | 0XEA60;
    // 0x8001D938: addu        $t2, $t1, $at
    ctx->r10 = ADD32(ctx->r9, ctx->r1);
    // 0x8001D93C: sw          $t2, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->r10;
    // 0x8001D940: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D944: lui         $t4, 0x801C
    ctx->r12 = S32(0X801C << 16);
    // 0x8001D948: addiu       $t4, $t4, 0xE50
    ctx->r12 = ADD32(ctx->r12, 0XE50);
    // 0x8001D94C: sw          $t4, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->r12;
    // 0x8001D950: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D954: addiu       $t6, $zero, 0xC00
    ctx->r14 = ADD32(0, 0XC00);
    // 0x8001D958: sw          $t6, 0x4C($t7)
    MEM_W(0X4C, ctx->r15) = ctx->r14;
    // 0x8001D95C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D960: nop

    // 0x8001D964: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x8001D968: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D96C: addiu       $t9, $zero, 0x63
    ctx->r25 = ADD32(0, 0X63);
    // 0x8001D970: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
    // 0x8001D974: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D978: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001D97C: addiu       $t1, $t1, -0x1F48
    ctx->r9 = ADD32(ctx->r9, -0X1F48);
    // 0x8001D980: sw          $t1, 0x50($t2)
    MEM_W(0X50, ctx->r10) = ctx->r9;
    // 0x8001D984: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8001D988: lui         $at, 0x1
    ctx->r1 = S32(0X1 << 16);
    // 0x8001D98C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D990: ori         $at, $at, 0x8148
    ctx->r1 = ctx->r1 | 0X8148;
    // 0x8001D994: addu        $t4, $t3, $at
    ctx->r12 = ADD32(ctx->r11, ctx->r1);
    // 0x8001D998: sw          $t4, 0x54($t5)
    MEM_W(0X54, ctx->r13) = ctx->r12;
    // 0x8001D99C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001D9A0: lui         $t7, 0x2
    ctx->r15 = S32(0X2 << 16);
    // 0x8001D9A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8001D9A8: lw          $t7, -0x7E98($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X7E98);
    // 0x8001D9AC: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D9B0: nop

    // 0x8001D9B4: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    // 0x8001D9B8: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8001D9BC: lw          $a0, -0x2630($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X2630);
    // 0x8001D9C0: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001D9C4: jal         0x80032010
    // 0x8001D9C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8001D9C8: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8001D9CC: b           L_8001D9D4
    // 0x8001D9D0: nop

        goto L_8001D9D4;
    // 0x8001D9D0: nop

L_8001D9D4:
    // 0x8001D9D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001D9D8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8001D9DC: jr          $ra
    // 0x8001D9E0: nop

    return;
    // 0x8001D9E0: nop

;}
RECOMP_FUNC void func_800031E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800031E4: jr          $ra
    // 0x800031E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800031E8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800031EC: jr          $ra
    // 0x800031F0: nop

    return;
    // 0x800031F0: nop

    // 0x800031F4: jr          $ra
    // 0x800031F8: nop

    return;
    // 0x800031F8: nop

;}
RECOMP_FUNC void func_8000CC30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CC30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8000CC34: andi        $a0, $a0, 0xFF
    ctx->r4 = ctx->r4 & 0XFF;
    // 0x8000CC38: slti        $at, $a0, 0x80
    ctx->r1 = SIGNED(ctx->r4) < 0X80 ? 1 : 0;
    // 0x8000CC3C: bne         $at, $zero, L_8000CC48
    if (ctx->r1 != 0) {
        // 0x8000CC40: nop
    
            goto L_8000CC48;
    }
    // 0x8000CC40: nop

    // 0x8000CC44: addiu       $a0, $zero, 0x7F
    ctx->r4 = ADD32(0, 0X7F);
L_8000CC48:
    // 0x8000CC48: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000CC4C: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x8000CC50: sw          $zero, 0x0($sp)
    MEM_W(0X0, ctx->r29) = 0;
    // 0x8000CC54: blez        $t6, L_8000CD10
    if (SIGNED(ctx->r14) <= 0) {
        // 0x8000CC58: nop
    
            goto L_8000CD10;
    }
    // 0x8000CC58: nop

L_8000CC5C:
    // 0x8000CC5C: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8000CC60: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000CC64: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8000CC68: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000CC6C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000CC70: lw          $t9, 0x2D5C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2D5C);
    // 0x8000CC74: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8000CC78: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8000CC7C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000CC80: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
    // 0x8000CC84: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8000CC88: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000CC8C: lw          $t2, 0xC($t1)
    ctx->r10 = MEM_W(ctx->r9, 0XC);
    // 0x8000CC90: nop

    // 0x8000CC94: beq         $t2, $at, L_8000CCA4
    if (ctx->r10 == ctx->r1) {
        // 0x8000CC98: nop
    
            goto L_8000CCA4;
    }
    // 0x8000CC98: nop

    // 0x8000CC9C: b           L_8000CCF4
    // 0x8000CCA0: nop

        goto L_8000CCF4;
    // 0x8000CCA0: nop

L_8000CCA4:
    // 0x8000CCA4: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8000CCA8: nop

    // 0x8000CCAC: lw          $t4, 0x8($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X8);
    // 0x8000CCB0: nop

    // 0x8000CCB4: andi        $t5, $t4, 0x1000
    ctx->r13 = ctx->r12 & 0X1000;
    // 0x8000CCB8: bne         $t5, $zero, L_8000CCE8
    if (ctx->r13 != 0) {
        // 0x8000CCBC: nop
    
            goto L_8000CCE8;
    }
    // 0x8000CCBC: nop

    // 0x8000CCC0: lbu         $t6, 0x25($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X25);
    // 0x8000CCC4: nop

    // 0x8000CCC8: beq         $t6, $a0, L_8000CCE8
    if (ctx->r14 == ctx->r4) {
        // 0x8000CCCC: nop
    
            goto L_8000CCE8;
    }
    // 0x8000CCCC: nop

    // 0x8000CCD0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8000CCD4: nop

    // 0x8000CCD8: lw          $t8, 0x8($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X8);
    // 0x8000CCDC: nop

    // 0x8000CCE0: ori         $t9, $t8, 0x4
    ctx->r25 = ctx->r24 | 0X4;
    // 0x8000CCE4: sw          $t9, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->r25;
L_8000CCE8:
    // 0x8000CCE8: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8000CCEC: nop

    // 0x8000CCF0: sb          $a0, 0x25($t0)
    MEM_B(0X25, ctx->r8) = ctx->r4;
L_8000CCF4:
    // 0x8000CCF4: lw          $t1, 0x0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X0);
    // 0x8000CCF8: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000CCFC: lw          $t4, -0x5CF4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5CF4);
    // 0x8000CD00: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8000CD04: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8000CD08: bne         $at, $zero, L_8000CC5C
    if (ctx->r1 != 0) {
        // 0x8000CD0C: sw          $t2, 0x0($sp)
        MEM_W(0X0, ctx->r29) = ctx->r10;
            goto L_8000CC5C;
    }
    // 0x8000CD0C: sw          $t2, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r10;
L_8000CD10:
    // 0x8000CD10: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CD14: sb          $a0, 0x2D7B($at)
    MEM_B(0X2D7B, ctx->r1) = ctx->r4;
    // 0x8000CD18: b           L_8000CD20
    // 0x8000CD1C: nop

        goto L_8000CD20;
    // 0x8000CD1C: nop

L_8000CD20:
    // 0x8000CD20: jr          $ra
    // 0x8000CD24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8000CD24: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001CD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CD20: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001CD24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CD28: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001CD2C: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001CD30: jal         0x8001CAAC
    // 0x8001CD34: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8001CAAC(rdram, ctx);
        goto after_0;
    // 0x8001CD34: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_0:
    // 0x8001CD38: b           L_8001CD40
    // 0x8001CD3C: nop

        goto L_8001CD40;
    // 0x8001CD3C: nop

L_8001CD40:
    // 0x8001CD40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CD44: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001CD48: jr          $ra
    // 0x8001CD4C: nop

    return;
    // 0x8001CD4C: nop

;}
RECOMP_FUNC void alEnvmixerPull(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8004115C: addiu       $sp, $sp, -0xA8
    ctx->r29 = ADD32(ctx->r29, -0XA8);
    // 0x80041160: lw          $t6, 0xB8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB8);
    // 0x80041164: sw          $ra, 0x54($sp)
    MEM_W(0X54, ctx->r29) = ctx->r31;
    // 0x80041168: sw          $fp, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r30;
    // 0x8004116C: sw          $s7, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r23;
    // 0x80041170: sw          $s6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r22;
    // 0x80041174: sw          $s5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r21;
    // 0x80041178: sw          $s4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r20;
    // 0x8004117C: sw          $s3, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r19;
    // 0x80041180: sw          $s2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r18;
    // 0x80041184: sw          $s1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r17;
    // 0x80041188: sw          $s0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r16;
    // 0x8004118C: sdc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    SD(ctx->f22.u64, 0X28, ctx->r29);
    // 0x80041190: sdc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X20, ctx->r29);
    // 0x80041194: sw          $a1, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r5;
    // 0x80041198: sw          $a2, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r6;
    // 0x8004119C: sw          $a3, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r7;
    // 0x800411A0: sw          $a0, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r4;
    // 0x800411A4: sw          $a3, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r7;
    // 0x800411A8: sh          $zero, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = 0;
    // 0x800411AC: sh          $zero, 0x9E($sp)
    MEM_H(0X9E, ctx->r29) = 0;
    // 0x800411B0: sw          $t6, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r14;
    // 0x800411B4: lw          $t8, 0x3C($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X3C);
    // 0x800411B8: or          $fp, $a0, $zero
    ctx->r30 = ctx->r4 | 0;
    // 0x800411BC: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800411C0: beql        $t8, $zero, L_80041634
    if (ctx->r24 == 0) {
        // 0x800411C4: or          $s3, $fp, $zero
        ctx->r19 = ctx->r30 | 0;
            goto L_80041634;
    }
    goto skip_0;
    // 0x800411C4: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    skip_0:
    // 0x800411C8: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
L_800411CC:
    // 0x800411CC: lw          $v0, 0x94($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X94);
    // 0x800411D0: lw          $t8, 0xB0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB0);
    // 0x800411D4: lw          $t9, 0x4($v1)
    ctx->r25 = MEM_W(ctx->r3, 0X4);
    // 0x800411D8: subu        $t7, $t9, $v0
    ctx->r15 = SUB32(ctx->r25, ctx->r2);
    // 0x800411DC: slt         $at, $t8, $t7
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x800411E0: sw          $t7, 0x60($sp)
    MEM_W(0X60, ctx->r29) = ctx->r15;
    // 0x800411E4: bne         $at, $zero, L_80041630
    if (ctx->r1 != 0) {
        // 0x800411E8: sw          $t9, 0x94($sp)
        MEM_W(0X94, ctx->r29) = ctx->r25;
            goto L_80041630;
    }
    // 0x800411E8: sw          $t9, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r25;
    // 0x800411EC: lhu         $t9, 0x8($v1)
    ctx->r25 = MEM_HU(ctx->r3, 0X8);
    // 0x800411F0: sltiu       $at, $t9, 0x11
    ctx->r1 = ctx->r25 < 0X11 ? 1 : 0;
    // 0x800411F4: beq         $at, $zero, L_800415A8
    if (ctx->r1 == 0) {
        // 0x800411F8: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_800415A8;
    }
    // 0x800411F8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800411FC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80041200: addu        $at, $at, $t9
    gpr jr_addend_80041208 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80041204: lw          $t9, -0x38C0($at)
    ctx->r25 = ADD32(ctx->r1, -0X38C0);
    // 0x80041208: jr          $t9
    // 0x8004120C: nop

    switch (jr_addend_80041208 >> 2) {
        case 0: goto L_80041588; break;
        case 1: goto L_800415A8; break;
        case 2: goto L_800415A8; break;
        case 3: goto L_800415A8; break;
        case 4: goto L_800415A8; break;
        case 5: goto L_800415A8; break;
        case 6: goto L_800415A8; break;
        case 7: goto L_800415A8; break;
        case 8: goto L_800415A8; break;
        case 9: goto L_800415A8; break;
        case 10: goto L_800415A8; break;
        case 11: goto L_80041350; break;
        case 12: goto L_80041350; break;
        case 13: goto L_80041210; break;
        case 14: goto L_800414F4; break;
        case 15: goto L_80041548; break;
        case 16: goto L_80041350; break;
        default: switch_error(__func__, 0x80041208, 0x8004C740);
    }
    // 0x8004120C: nop

L_80041210:
    // 0x80041210: lh          $t6, 0xA($v1)
    ctx->r14 = MEM_H(ctx->r3, 0XA);
    // 0x80041214: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x80041218: beql        $t6, $zero, L_80041238
    if (ctx->r14 == 0) {
        // 0x8004121C: lw          $t9, 0x8($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X8);
            goto L_80041238;
    }
    goto skip_1;
    // 0x8004121C: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    skip_1:
    // 0x80041220: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x80041224: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80041228: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x8004122C: jalr        $t9
    // 0x80041230: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_0;
    // 0x80041230: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80041234: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
L_80041238:
    // 0x80041238: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8004123C: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80041240: jalr        $t9
    // 0x80041244: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x80041244: lw          $a2, 0x18($s0)
    ctx->r6 = MEM_W(ctx->r16, 0X18);
    after_1:
    // 0x80041248: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8004124C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80041250: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80041254: jalr        $t9
    // 0x80041258: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x80041258: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8004125C: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
    // 0x80041260: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x80041264: lw          $t8, 0x14($s0)
    ctx->r24 = MEM_W(ctx->r16, 0X14);
    // 0x80041268: sw          $t8, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r24;
    // 0x8004126C: lh          $v1, 0x10($s0)
    ctx->r3 = MEM_H(ctx->r16, 0X10);
    // 0x80041270: multu       $v1, $v1
    result = U64(U32(ctx->r3)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041274: mflo        $a0
    ctx->r4 = lo;
    // 0x80041278: sra         $t7, $a0, 15
    ctx->r15 = S32(SIGNED(ctx->r4) >> 15);
    // 0x8004127C: sh          $t7, 0x1A($fp)
    MEM_H(0X1A, ctx->r30) = ctx->r15;
    // 0x80041280: lbu         $t6, 0x12($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X12);
    // 0x80041284: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80041288: sh          $t6, 0x18($fp)
    MEM_H(0X18, ctx->r30) = ctx->r14;
    // 0x8004128C: lbu         $t9, 0x13($s0)
    ctx->r25 = MEM_BU(ctx->r16, 0X13);
    // 0x80041290: sll         $t8, $t9, 1
    ctx->r24 = S32(ctx->r25 << 1);
    // 0x80041294: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80041298: lh          $t7, -0x4850($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X4850);
    // 0x8004129C: sh          $t7, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r15;
    // 0x800412A0: lbu         $t6, 0x13($s0)
    ctx->r14 = MEM_BU(ctx->r16, 0X13);
    // 0x800412A4: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800412A8: sll         $t9, $t6, 1
    ctx->r25 = S32(ctx->r14 << 1);
    // 0x800412AC: negu        $t8, $t9
    ctx->r24 = SUB32(0, ctx->r25);
    // 0x800412B0: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800412B4: lh          $t7, -0x4752($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X4752);
    // 0x800412B8: sh          $t7, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r15;
    // 0x800412BC: lw          $t6, 0x14($s0)
    ctx->r14 = MEM_W(ctx->r16, 0X14);
    // 0x800412C0: beql        $t6, $zero, L_800412D8
    if (ctx->r14 == 0) {
        // 0x800412C4: lh          $v0, 0x18($fp)
        ctx->r2 = MEM_H(ctx->r30, 0X18);
            goto L_800412D8;
    }
    goto skip_2;
    // 0x800412C4: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
    skip_2:
    // 0x800412C8: sh          $s1, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r17;
    // 0x800412CC: b           L_8004131C
    // 0x800412D0: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
        goto L_8004131C;
    // 0x800412D0: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
    // 0x800412D4: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
L_800412D8:
    // 0x800412D8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800412DC: lh          $v1, 0x1A($fp)
    ctx->r3 = MEM_H(ctx->r30, 0X1A);
    // 0x800412E0: sll         $t9, $v0, 1
    ctx->r25 = S32(ctx->r2 << 1);
    // 0x800412E4: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800412E8: lh          $t8, -0x4850($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X4850);
    // 0x800412EC: negu        $t9, $t9
    ctx->r25 = SUB32(0, ctx->r25);
    // 0x800412F0: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800412F4: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x800412F8: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800412FC: mflo        $t7
    ctx->r15 = lo;
    // 0x80041300: sra         $t6, $t7, 15
    ctx->r14 = S32(SIGNED(ctx->r15) >> 15);
    // 0x80041304: sh          $t6, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r14;
    // 0x80041308: lh          $t8, -0x4752($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X4752);
    // 0x8004130C: multu       $t8, $v1
    result = U64(U32(ctx->r24)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041310: mflo        $t7
    ctx->r15 = lo;
    // 0x80041314: sra         $t6, $t7, 15
    ctx->r14 = S32(SIGNED(ctx->r15) >> 15);
    // 0x80041318: sh          $t6, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r14;
L_8004131C:
    // 0x8004131C: lw          $t9, 0x0($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X0);
    // 0x80041320: beql        $t9, $zero, L_800415E8
    if (ctx->r25 == 0) {
        // 0x80041324: lw          $t8, 0x60($sp)
        ctx->r24 = MEM_W(ctx->r29, 0X60);
            goto L_800415E8;
    }
    goto skip_3;
    // 0x80041324: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
    skip_3:
    // 0x80041328: lwc1        $f4, 0xC($s0)
    ctx->f4.u32l = MEM_W(ctx->r16, 0XC);
    // 0x8004132C: addiu       $a1, $zero, 0x7
    ctx->r5 = ADD32(0, 0X7);
    // 0x80041330: swc1        $f4, 0x74($sp)
    MEM_W(0X74, ctx->r29) = ctx->f4.u32l;
    // 0x80041334: lw          $a0, 0x0($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X0);
    // 0x80041338: lw          $a2, 0x74($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X74);
    // 0x8004133C: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x80041340: jalr        $t9
    // 0x80041344: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80041344: nop

    after_3:
    // 0x80041348: b           L_800415E8
    // 0x8004134C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_800415E8;
    // 0x8004134C: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80041350:
    // 0x80041350: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x80041354: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80041358: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x8004135C: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80041360: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80041364: jal         0x80040E14
    // 0x80041368: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    static_0_80040E14(rdram, ctx);
        goto after_4;
    // 0x80041368: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_4:
    // 0x8004136C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80041370: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x80041374: lw          $a3, 0x30($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X30);
    // 0x80041378: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x8004137C: slt         $at, $a3, $a0
    ctx->r1 = SIGNED(ctx->r7) < SIGNED(ctx->r4) ? 1 : 0;
    // 0x80041380: bnel        $at, $zero, L_800413EC
    if (ctx->r1 != 0) {
        // 0x80041384: lh          $t6, 0x1C($fp)
        ctx->r14 = MEM_H(ctx->r30, 0X1C);
            goto L_800413EC;
    }
    goto skip_4;
    // 0x80041384: lh          $t6, 0x1C($fp)
    ctx->r14 = MEM_H(ctx->r30, 0X1C);
    skip_4:
    // 0x80041388: lh          $v0, 0x18($fp)
    ctx->r2 = MEM_H(ctx->r30, 0X18);
    // 0x8004138C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80041390: lh          $v1, 0x1A($fp)
    ctx->r3 = MEM_H(ctx->r30, 0X1A);
    // 0x80041394: sll         $t8, $v0, 1
    ctx->r24 = S32(ctx->r2 << 1);
    // 0x80041398: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x8004139C: lh          $t7, -0x4850($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X4850);
    // 0x800413A0: negu        $t8, $t8
    ctx->r24 = SUB32(0, ctx->r24);
    // 0x800413A4: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800413A8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800413AC: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x800413B0: mflo        $t6
    ctx->r14 = lo;
    // 0x800413B4: sra         $t9, $t6, 15
    ctx->r25 = S32(SIGNED(ctx->r14) >> 15);
    // 0x800413B8: sh          $t9, 0x28($fp)
    MEM_H(0X28, ctx->r30) = ctx->r25;
    // 0x800413BC: lh          $t7, -0x4752($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X4752);
    // 0x800413C0: lh          $t8, 0x28($fp)
    ctx->r24 = MEM_H(ctx->r30, 0X28);
    // 0x800413C4: sw          $a0, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r4;
    // 0x800413C8: multu       $t7, $v1
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r3)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x800413CC: sh          $t8, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r24;
    // 0x800413D0: mflo        $t6
    ctx->r14 = lo;
    // 0x800413D4: sra         $t9, $t6, 15
    ctx->r25 = S32(SIGNED(ctx->r14) >> 15);
    // 0x800413D8: sh          $t9, 0x2E($fp)
    MEM_H(0X2E, ctx->r30) = ctx->r25;
    // 0x800413DC: lh          $t7, 0x2E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X2E);
    // 0x800413E0: b           L_8004143C
    // 0x800413E4: sh          $t7, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r15;
        goto L_8004143C;
    // 0x800413E4: sh          $t7, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r15;
    // 0x800413E8: lh          $t6, 0x1C($fp)
    ctx->r14 = MEM_H(ctx->r30, 0X1C);
L_800413EC:
    // 0x800413EC: or          $a0, $a3, $zero
    ctx->r4 = ctx->r7 | 0;
    // 0x800413F0: lh          $a1, 0x26($fp)
    ctx->r5 = MEM_H(ctx->r30, 0X26);
    // 0x800413F4: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x800413F8: lhu         $a2, 0x24($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X24);
    // 0x800413FC: jal         0x800410AC
    // 0x80041400: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    static_0_800410AC(rdram, ctx);
        goto after_5;
    // 0x80041400: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_5:
    // 0x80041404: trunc.w.s   $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80041408: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
    // 0x8004140C: lw          $a0, 0x30($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X30);
    // 0x80041410: lh          $a1, 0x2C($fp)
    ctx->r5 = MEM_H(ctx->r30, 0X2C);
    // 0x80041414: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80041418: mtc1        $t7, $f10
    ctx->f10.u32l = ctx->r15;
    // 0x8004141C: lhu         $a2, 0x2A($fp)
    ctx->r6 = MEM_HU(ctx->r30, 0X2A);
    // 0x80041420: sh          $t8, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r24;
    // 0x80041424: jal         0x800410AC
    // 0x80041428: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    static_0_800410AC(rdram, ctx);
        goto after_6;
    // 0x80041428: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_6:
    // 0x8004142C: trunc.w.s   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_S(ctx->f0.fl);
    // 0x80041430: mfc1        $t9, $f4
    ctx->r25 = (int32_t)ctx->f4.u32l;
    // 0x80041434: nop

    // 0x80041438: sh          $t9, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r25;
L_8004143C:
    // 0x8004143C: lh          $t8, 0x1C($fp)
    ctx->r24 = MEM_H(ctx->r30, 0X1C);
    // 0x80041440: bnel        $t8, $zero, L_80041450
    if (ctx->r24 != 0) {
        // 0x80041444: lh          $t7, 0x1E($fp)
        ctx->r15 = MEM_H(ctx->r30, 0X1E);
            goto L_80041450;
    }
    goto skip_5;
    // 0x80041444: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
    skip_5:
    // 0x80041448: sh          $s1, 0x1C($fp)
    MEM_H(0X1C, ctx->r30) = ctx->r17;
    // 0x8004144C: lh          $t7, 0x1E($fp)
    ctx->r15 = MEM_H(ctx->r30, 0X1E);
L_80041450:
    // 0x80041450: bnel        $t7, $zero, L_80041460
    if (ctx->r15 != 0) {
        // 0x80041454: lw          $v1, 0x3C($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X3C);
            goto L_80041460;
    }
    goto skip_6;
    // 0x80041454: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    skip_6:
    // 0x80041458: sh          $s1, 0x1E($fp)
    MEM_H(0X1E, ctx->r30) = ctx->r17;
    // 0x8004145C: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
L_80041460:
    // 0x80041460: addiu       $at, $zero, 0xC
    ctx->r1 = ADD32(0, 0XC);
    // 0x80041464: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x80041468: bnel        $a0, $at, L_80041480
    if (ctx->r4 != ctx->r1) {
        // 0x8004146C: addiu       $at, $zero, 0xB
        ctx->r1 = ADD32(0, 0XB);
            goto L_80041480;
    }
    goto skip_7;
    // 0x8004146C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
    skip_7:
    // 0x80041470: lw          $t6, 0xC($v1)
    ctx->r14 = MEM_W(ctx->r3, 0XC);
    // 0x80041474: sh          $t6, 0x18($fp)
    MEM_H(0X18, ctx->r30) = ctx->r14;
    // 0x80041478: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x8004147C: addiu       $at, $zero, 0xB
    ctx->r1 = ADD32(0, 0XB);
L_80041480:
    // 0x80041480: bnel        $a0, $at, L_800414B0
    if (ctx->r4 != ctx->r1) {
        // 0x80041484: addiu       $at, $zero, 0x10
        ctx->r1 = ADD32(0, 0X10);
            goto L_800414B0;
    }
    goto skip_8;
    // 0x80041484: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
    skip_8:
    // 0x80041488: sw          $zero, 0x30($fp)
    MEM_W(0X30, ctx->r30) = 0;
    // 0x8004148C: lw          $v0, 0xC($v1)
    ctx->r2 = MEM_W(ctx->r3, 0XC);
    // 0x80041490: multu       $v0, $v0
    result = U64(U32(ctx->r2)) * U64(U32(ctx->r2)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80041494: mflo        $v0
    ctx->r2 = lo;
    // 0x80041498: sra         $t9, $v0, 15
    ctx->r25 = S32(SIGNED(ctx->r2) >> 15);
    // 0x8004149C: sh          $t9, 0x1A($fp)
    MEM_H(0X1A, ctx->r30) = ctx->r25;
    // 0x800414A0: lw          $t8, 0x10($v1)
    ctx->r24 = MEM_W(ctx->r3, 0X10);
    // 0x800414A4: sw          $t8, 0x34($fp)
    MEM_W(0X34, ctx->r30) = ctx->r24;
    // 0x800414A8: lh          $a0, 0x8($v1)
    ctx->r4 = MEM_H(ctx->r3, 0X8);
    // 0x800414AC: addiu       $at, $zero, 0x10
    ctx->r1 = ADD32(0, 0X10);
L_800414B0:
    // 0x800414B0: bne         $a0, $at, L_800414EC
    if (ctx->r4 != ctx->r1) {
        // 0x800414B4: nop
    
            goto L_800414EC;
    }
    // 0x800414B4: nop

    // 0x800414B8: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x800414BC: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800414C0: sll         $t6, $t7, 1
    ctx->r14 = S32(ctx->r15 << 1);
    // 0x800414C4: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800414C8: lh          $t9, -0x4850($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X4850);
    // 0x800414CC: sh          $t9, 0x20($fp)
    MEM_H(0X20, ctx->r30) = ctx->r25;
    // 0x800414D0: lw          $t8, 0xC($v1)
    ctx->r24 = MEM_W(ctx->r3, 0XC);
    // 0x800414D4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800414D8: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x800414DC: negu        $t6, $t7
    ctx->r14 = SUB32(0, ctx->r15);
    // 0x800414E0: addu        $t9, $t9, $t6
    ctx->r25 = ADD32(ctx->r25, ctx->r14);
    // 0x800414E4: lh          $t9, -0x4752($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X4752);
    // 0x800414E8: sh          $t9, 0x22($fp)
    MEM_H(0X22, ctx->r30) = ctx->r25;
L_800414EC:
    // 0x800414EC: b           L_800415E4
    // 0x800414F0: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
        goto L_800415E4;
    // 0x800414F0: sw          $s1, 0x38($fp)
    MEM_W(0X38, ctx->r30) = ctx->r17;
L_800414F4:
    // 0x800414F4: lh          $t8, 0xA($v1)
    ctx->r24 = MEM_H(ctx->r3, 0XA);
    // 0x800414F8: or          $s0, $v1, $zero
    ctx->r16 = ctx->r3 | 0;
    // 0x800414FC: beql        $t8, $zero, L_8004151C
    if (ctx->r24 == 0) {
        // 0x80041500: lw          $t9, 0x8($fp)
        ctx->r25 = MEM_W(ctx->r30, 0X8);
            goto L_8004151C;
    }
    goto skip_9;
    // 0x80041500: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    skip_9:
    // 0x80041504: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x80041508: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x8004150C: addiu       $a1, $zero, 0x8
    ctx->r5 = ADD32(0, 0X8);
    // 0x80041510: jalr        $t9
    // 0x80041514: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_7;
    // 0x80041514: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
    // 0x80041518: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
L_8004151C:
    // 0x8004151C: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80041520: addiu       $a1, $zero, 0x5
    ctx->r5 = ADD32(0, 0X5);
    // 0x80041524: jalr        $t9
    // 0x80041528: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_8;
    // 0x80041528: lw          $a2, 0xC($s0)
    ctx->r6 = MEM_W(ctx->r16, 0XC);
    after_8:
    // 0x8004152C: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x80041530: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80041534: addiu       $a1, $zero, 0x9
    ctx->r5 = ADD32(0, 0X9);
    // 0x80041538: jalr        $t9
    // 0x8004153C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_9;
    // 0x8004153C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x80041540: b           L_800415E8
    // 0x80041544: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_800415E8;
    // 0x80041544: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80041548:
    // 0x80041548: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x8004154C: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80041550: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x80041554: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x80041558: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x8004155C: jal         0x80040E14
    // 0x80041560: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    static_0_80040E14(rdram, ctx);
        goto after_10;
    // 0x80041560: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_10:
    // 0x80041564: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80041568: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x8004156C: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x80041570: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x80041574: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80041578: jalr        $t9
    // 0x8004157C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_11;
    // 0x8004157C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_11:
    // 0x80041580: b           L_800415E8
    // 0x80041584: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_800415E8;
    // 0x80041584: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_80041588:
    // 0x80041588: lw          $t7, 0xC($v1)
    ctx->r15 = MEM_W(ctx->r3, 0XC);
    // 0x8004158C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80041590: lw          $a0, -0x4AF0($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X4AF0);
    // 0x80041594: sw          $zero, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = 0;
    // 0x80041598: jal         0x80035A70
    // 0x8004159C: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    _freePVoice(rdram, ctx);
        goto after_12;
    // 0x8004159C: lw          $a1, 0xC($v1)
    ctx->r5 = MEM_W(ctx->r3, 0XC);
    after_12:
    // 0x800415A0: b           L_800415E8
    // 0x800415A4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
        goto L_800415E8;
    // 0x800415A4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_800415A8:
    // 0x800415A8: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
    // 0x800415AC: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x800415B0: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x800415B4: lw          $s5, 0x60($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X60);
    // 0x800415B8: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x800415BC: jal         0x80040E14
    // 0x800415C0: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    static_0_80040E14(rdram, ctx);
        goto after_13;
    // 0x800415C0: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_13:
    // 0x800415C4: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x800415C8: lw          $t9, 0x8($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X8);
    // 0x800415CC: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    // 0x800415D0: addiu       $s1, $zero, 0x1
    ctx->r17 = ADD32(0, 0X1);
    // 0x800415D4: or          $a0, $fp, $zero
    ctx->r4 = ctx->r30 | 0;
    // 0x800415D8: lh          $a1, 0x8($v1)
    ctx->r5 = MEM_H(ctx->r3, 0X8);
    // 0x800415DC: jalr        $t9
    // 0x800415E0: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x800415E0: lw          $a2, 0xC($v1)
    ctx->r6 = MEM_W(ctx->r3, 0XC);
    after_14:
L_800415E4:
    // 0x800415E4: lw          $t8, 0x60($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X60);
L_800415E8:
    // 0x800415E8: lh          $t6, 0x8E($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X8E);
    // 0x800415EC: sll         $t7, $t8, 1
    ctx->r15 = S32(ctx->r24 << 1);
    // 0x800415F0: addu        $t9, $t6, $t7
    ctx->r25 = ADD32(ctx->r14, ctx->r15);
    // 0x800415F4: lw          $t6, 0xB0($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XB0);
    // 0x800415F8: sh          $t9, 0x8E($sp)
    MEM_H(0X8E, ctx->r29) = ctx->r25;
    // 0x800415FC: subu        $t7, $t6, $t8
    ctx->r15 = SUB32(ctx->r14, ctx->r24);
    // 0x80041600: sw          $t7, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->r15;
    // 0x80041604: lw          $a0, 0x3C($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X3C);
    // 0x80041608: lw          $t9, 0x0($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X0);
    // 0x8004160C: bne         $t9, $zero, L_80041618
    if (ctx->r25 != 0) {
        // 0x80041610: sw          $t9, 0x3C($fp)
        MEM_W(0X3C, ctx->r30) = ctx->r25;
            goto L_80041618;
    }
    // 0x80041610: sw          $t9, 0x3C($fp)
    MEM_W(0X3C, ctx->r30) = ctx->r25;
    // 0x80041614: sw          $zero, 0x40($fp)
    MEM_W(0X40, ctx->r30) = 0;
L_80041618:
    // 0x80041618: jal         0x80035B08
    // 0x8004161C: nop

    __freeParam(rdram, ctx);
        goto after_15;
    // 0x8004161C: nop

    after_15:
    // 0x80041620: lw          $t8, 0xA0($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XA0);
    // 0x80041624: lw          $t7, 0x3C($t8)
    ctx->r15 = MEM_W(ctx->r24, 0X3C);
    // 0x80041628: bnel        $t7, $zero, L_800411CC
    if (ctx->r15 != 0) {
        // 0x8004162C: lw          $v1, 0x3C($fp)
        ctx->r3 = MEM_W(ctx->r30, 0X3C);
            goto L_800411CC;
    }
    goto skip_10;
    // 0x8004162C: lw          $v1, 0x3C($fp)
    ctx->r3 = MEM_W(ctx->r30, 0X3C);
    skip_10:
L_80041630:
    // 0x80041630: or          $s3, $fp, $zero
    ctx->r19 = ctx->r30 | 0;
L_80041634:
    // 0x80041634: addiu       $s6, $sp, 0x9E
    ctx->r22 = ADD32(ctx->r29, 0X9E);
    // 0x80041638: addiu       $s0, $sp, 0x8E
    ctx->r16 = ADD32(ctx->r29, 0X8E);
    // 0x8004163C: lw          $s5, 0xB0($sp)
    ctx->r21 = MEM_W(ctx->r29, 0XB0);
    // 0x80041640: lw          $a3, 0xB4($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB4);
    // 0x80041644: jal         0x80040E14
    // 0x80041648: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    static_0_80040E14(rdram, ctx);
        goto after_16;
    // 0x80041648: lw          $t0, 0xA4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XA4);
    after_16:
    // 0x8004164C: sw          $v0, 0xA4($sp)
    MEM_W(0XA4, ctx->r29) = ctx->r2;
    // 0x80041650: lw          $t9, 0x30($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X30);
    // 0x80041654: lw          $a0, 0x34($fp)
    ctx->r4 = MEM_W(ctx->r30, 0X34);
    // 0x80041658: slt         $at, $a0, $t9
    ctx->r1 = SIGNED(ctx->r4) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8004165C: beql        $at, $zero, L_8004166C
    if (ctx->r1 == 0) {
        // 0x80041660: lw          $ra, 0x54($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X54);
            goto L_8004166C;
    }
    goto skip_11;
    // 0x80041660: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
    skip_11:
    // 0x80041664: sw          $a0, 0x30($fp)
    MEM_W(0X30, ctx->r30) = ctx->r4;
    // 0x80041668: lw          $ra, 0x54($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X54);
L_8004166C:
    // 0x8004166C: lw          $v0, 0xA4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0XA4);
    // 0x80041670: ldc1        $f20, 0x20($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X20);
    // 0x80041674: ldc1        $f22, 0x28($sp)
    CHECK_FR(ctx, 22);
    ctx->f22.u64 = LD(ctx->r29, 0X28);
    // 0x80041678: lw          $s0, 0x30($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X30);
    // 0x8004167C: lw          $s1, 0x34($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X34);
    // 0x80041680: lw          $s2, 0x38($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X38);
    // 0x80041684: lw          $s3, 0x3C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X3C);
    // 0x80041688: lw          $s4, 0x40($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X40);
    // 0x8004168C: lw          $s5, 0x44($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X44);
    // 0x80041690: lw          $s6, 0x48($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X48);
    // 0x80041694: lw          $s7, 0x4C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X4C);
    // 0x80041698: lw          $fp, 0x50($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X50);
    // 0x8004169C: jr          $ra
    // 0x800416A0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
    return;
    // 0x800416A0: addiu       $sp, $sp, 0xA8
    ctx->r29 = ADD32(ctx->r29, 0XA8);
;}
RECOMP_FUNC void func_8000195C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000195C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001960: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001964: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x80001968: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x8000196C: addiu       $t7, $t7, 0x1C00
    ctx->r15 = ADD32(ctx->r15, 0X1C00);
    // 0x80001970: addiu       $t6, $t6, -0x1860
    ctx->r14 = ADD32(ctx->r14, -0X1860);
    // 0x80001974: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001978: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x8000197C: jal         0x8000068C
    // 0x80001980: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001980: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001984: b           L_8000198C
    // 0x80001988: nop

        goto L_8000198C;
    // 0x80001988: nop

L_8000198C:
    // 0x8000198C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001990: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001994: jr          $ra
    // 0x80001998: nop

    return;
    // 0x80001998: nop

;}
RECOMP_FUNC void func_8001A988(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A988: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8001A98C: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8001A990:
    // 0x8001A990: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001A994: lw          $t6, -0x1F7C($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F7C);
    // 0x8001A998: nop

    // 0x8001A99C: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x8001A9A0: bne         $at, $zero, L_8001A9B0
    if (ctx->r1 != 0) {
        // 0x8001A9A4: nop
    
            goto L_8001A9B0;
    }
    // 0x8001A9A4: nop

    // 0x8001A9A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001A9AC: sw          $zero, -0x1F7C($at)
    MEM_W(-0X1F7C, ctx->r1) = 0;
L_8001A9B0:
    // 0x8001A9B0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001A9B4: lw          $t7, -0x1F7C($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F7C);
    // 0x8001A9B8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8001A9BC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001A9C0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x8001A9C4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8001A9C8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001A9CC: lw          $t9, 0x52A8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X52A8);
    // 0x8001A9D0: nop

    // 0x8001A9D4: bne         $t9, $zero, L_8001AA08
    if (ctx->r25 != 0) {
        // 0x8001A9D8: nop
    
            goto L_8001AA08;
    }
    // 0x8001A9D8: nop

    // 0x8001A9DC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001A9E0: lw          $t0, -0x1F7C($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F7C);
    // 0x8001A9E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001A9E8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8001A9EC: sw          $t1, -0x1F7C($at)
    MEM_W(-0X1F7C, ctx->r1) = ctx->r9;
    // 0x8001A9F0: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001A9F4: lw          $v0, -0x1F7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1F7C);
    // 0x8001A9F8: b           L_8001AA58
    // 0x8001A9FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8001AA58;
    // 0x8001A9FC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8001AA00: b           L_8001AA1C
    // 0x8001AA04: nop

        goto L_8001AA1C;
    // 0x8001AA04: nop

L_8001AA08:
    // 0x8001AA08: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001AA0C: lw          $t2, -0x1F7C($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F7C);
    // 0x8001AA10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AA14: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8001AA18: sw          $t3, -0x1F7C($at)
    MEM_W(-0X1F7C, ctx->r1) = ctx->r11;
L_8001AA1C:
    // 0x8001AA1C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001AA20: nop

    // 0x8001AA24: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8001AA28: slti        $at, $t5, 0x100
    ctx->r1 = SIGNED(ctx->r13) < 0X100 ? 1 : 0;
    // 0x8001AA2C: bne         $at, $zero, L_8001A990
    if (ctx->r1 != 0) {
        // 0x8001AA30: sw          $t5, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r13;
            goto L_8001A990;
    }
    // 0x8001AA30: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8001AA34: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x8001AA38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AA3C: sw          $t6, -0x1F7C($at)
    MEM_W(-0X1F7C, ctx->r1) = ctx->r14;
    // 0x8001AA40: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001AA44: lw          $v0, -0x1F7C($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1F7C);
    // 0x8001AA48: b           L_8001AA58
    // 0x8001AA4C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8001AA58;
    // 0x8001AA4C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8001AA50: b           L_8001AA58
    // 0x8001AA54: nop

        goto L_8001AA58;
    // 0x8001AA54: nop

L_8001AA58:
    // 0x8001AA58: jr          $ra
    // 0x8001AA5C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8001AA5C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8000CF80(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CF80: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8000CF84: lh          $v0, 0x2D78($v0)
    ctx->r2 = MEM_H(ctx->r2, 0X2D78);
    // 0x8000CF88: jr          $ra
    // 0x8000CF8C: nop

    return;
    // 0x8000CF8C: nop

    // 0x8000CF90: jr          $ra
    // 0x8000CF94: nop

    return;
    // 0x8000CF94: nop

    // 0x8000CF98: jr          $ra
    // 0x8000CF9C: nop

    return;
    // 0x8000CF9C: nop

;}
RECOMP_FUNC void func_800157EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800157EC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800157F0: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x800157F4: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800157F8: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x800157FC: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80015800: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80015804: nop

    // 0x80015808: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8001580C: nop

    // 0x80015810: bc1f        L_80015830
    if (!c1cs) {
        // 0x80015814: nop
    
            goto L_80015830;
    }
    // 0x80015814: nop

    // 0x80015818: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8001581C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80015820: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80015824: nop

    // 0x80015828: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8001582C: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
L_80015830:
    // 0x80015830: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80015834: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x80015838: nop

    // 0x8001583C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80015840: nop

    // 0x80015844: bc1t        L_8001586C
    if (c1cs) {
        // 0x80015848: nop
    
            goto L_8001586C;
    }
    // 0x80015848: nop

    // 0x8001584C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80015850: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80015854: nop

    // 0x80015858: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8001585C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80015860: nop

    // 0x80015864: bc1f        L_80015874
    if (!c1cs) {
        // 0x80015868: nop
    
            goto L_80015874;
    }
    // 0x80015868: nop

L_8001586C:
    // 0x8001586C: b           L_800158AC
    // 0x80015870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800158AC;
    // 0x80015870: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80015874:
    // 0x80015874: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80015878: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8001587C: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80015880: nop

    // 0x80015884: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80015888: nop

    // 0x8001588C: bc1f        L_8001589C
    if (!c1cs) {
        // 0x80015890: nop
    
            goto L_8001589C;
    }
    // 0x80015890: nop

    // 0x80015894: b           L_800158AC
    // 0x80015898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800158AC;
    // 0x80015898: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8001589C:
    // 0x8001589C: b           L_800158AC
    // 0x800158A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800158AC;
    // 0x800158A0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800158A4: b           L_800158AC
    // 0x800158A8: nop

        goto L_800158AC;
    // 0x800158A8: nop

L_800158AC:
    // 0x800158AC: jr          $ra
    // 0x800158B0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800158B0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void alSeqSecToTicks(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80046088: mtc1        $a1, $f12
    ctx->f12.u32l = ctx->r5;
    // 0x8004608C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80046090: ldc1        $f6, -0x3770($at)
    CHECK_FR(ctx, 6);
    ctx->f6.u64 = LD(ctx->r1, -0X3770);
    // 0x80046094: lh          $t6, 0x18($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X18);
    // 0x80046098: cvt.d.s     $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); 
    ctx->f4.d = CVT_D_S(ctx->f12.fl);
    // 0x8004609C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800460A0: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x800460A4: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x800460A8: mtc1        $a2, $f4
    ctx->f4.u32l = ctx->r6;
    // 0x800460AC: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x800460B0: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x800460B4: mul.d       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f8.d, ctx->f16.d);
    // 0x800460B8: bgezl       $a2, L_800460D4
    if (SIGNED(ctx->r6) >= 0) {
        // 0x800460BC: div.d       $f8, $f18, $f6
        CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
            goto L_800460D4;
    }
    goto skip_0;
    // 0x800460BC: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
    skip_0:
    // 0x800460C0: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x800460C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800460C8: nop

    // 0x800460CC: add.d       $f6, $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f10.d); 
    ctx->f6.d = ctx->f6.d + ctx->f10.d;
    // 0x800460D0: div.d       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = DIV_D(ctx->f18.d, ctx->f6.d);
L_800460D4:
    // 0x800460D4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x800460D8: lui         $at, 0x41E0
    ctx->r1 = S32(0X41E0 << 16);
    // 0x800460DC: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800460E0: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x800460E4: nop

    // 0x800460E8: cvt.w.d     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_D(ctx->f8.d);
    // 0x800460EC: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x800460F0: nop

    // 0x800460F4: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x800460F8: beql        $v0, $zero, L_80046154
    if (ctx->r2 == 0) {
        // 0x800460FC: mfc1        $v0, $f16
        ctx->r2 = (int32_t)ctx->f16.u32l;
            goto L_80046154;
    }
    goto skip_1;
    // 0x800460FC: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    skip_1:
    // 0x80046100: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80046104: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80046108: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8004610C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80046110: sub.d       $f16, $f8, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f16.d); 
    ctx->f16.d = ctx->f8.d - ctx->f16.d;
    // 0x80046114: ctc1        $v0, $FpcCsr
    set_cop1_cs(ctx->r2);
    // 0x80046118: nop

    // 0x8004611C: cvt.w.d     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.u32l = CVT_W_D(ctx->f16.d);
    // 0x80046120: cfc1        $v0, $FpcCsr
    ctx->r2 = get_cop1_cs();
    // 0x80046124: nop

    // 0x80046128: andi        $v0, $v0, 0x78
    ctx->r2 = ctx->r2 & 0X78;
    // 0x8004612C: bnel        $v0, $zero, L_80046148
    if (ctx->r2 != 0) {
        // 0x80046130: ctc1        $t7, $FpcCsr
        set_cop1_cs(ctx->r15);
            goto L_80046148;
    }
    goto skip_2;
    // 0x80046130: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    skip_2:
    // 0x80046134: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
    // 0x80046138: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8004613C: jr          $ra
    // 0x80046140: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    return;
    // 0x80046140: or          $v0, $v0, $at
    ctx->r2 = ctx->r2 | ctx->r1;
    // 0x80046144: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
L_80046148:
    // 0x80046148: jr          $ra
    // 0x8004614C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    return;
    // 0x8004614C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80046150: mfc1        $v0, $f16
    ctx->r2 = (int32_t)ctx->f16.u32l;
L_80046154:
    // 0x80046154: nop

    // 0x80046158: bltzl       $v0, L_80046148
    if (SIGNED(ctx->r2) < 0) {
        // 0x8004615C: ctc1        $t7, $FpcCsr
        set_cop1_cs(ctx->r15);
            goto L_80046148;
    }
    goto skip_3;
    // 0x8004615C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    skip_3:
    // 0x80046160: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80046164: jr          $ra
    // 0x80046168: nop

    return;
    // 0x80046168: nop

;}
RECOMP_FUNC void func_80001378(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001378: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000137C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001380: lui         $t6, 0x1B
    ctx->r14 = S32(0X1B << 16);
    // 0x80001384: lui         $t7, 0x1B
    ctx->r15 = S32(0X1B << 16);
    // 0x80001388: addiu       $t7, $t7, -0x43A0
    ctx->r15 = ADD32(ctx->r15, -0X43A0);
    // 0x8000138C: addiu       $t6, $t6, -0x7640
    ctx->r14 = ADD32(ctx->r14, -0X7640);
    // 0x80001390: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x80001394: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001398: jal         0x8000068C
    // 0x8000139C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x8000139C: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x800013A0: lui         $t8, 0x1C
    ctx->r24 = S32(0X1C << 16);
    // 0x800013A4: lui         $t9, 0x1D
    ctx->r25 = S32(0X1D << 16);
    // 0x800013A8: addiu       $t9, $t9, -0x7CE0
    ctx->r25 = ADD32(ctx->r25, -0X7CE0);
    // 0x800013AC: addiu       $t8, $t8, 0x73D0
    ctx->r24 = ADD32(ctx->r24, 0X73D0);
    // 0x800013B0: lui         $a1, 0x8032
    ctx->r5 = S32(0X8032 << 16);
    // 0x800013B4: ori         $a1, $a1, 0xE000
    ctx->r5 = ctx->r5 | 0XE000;
    // 0x800013B8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800013BC: jal         0x8000068C
    // 0x800013C0: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    load_from_rom_to_addr(rdram, ctx);
        goto after_1;
    // 0x800013C0: subu        $a2, $t9, $t8
    ctx->r6 = SUB32(ctx->r25, ctx->r24);
    after_1:
    // 0x800013C4: b           L_800013CC
    // 0x800013C8: nop

        goto L_800013CC;
    // 0x800013C8: nop

L_800013CC:
    // 0x800013CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800013D0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800013D4: jr          $ra
    // 0x800013D8: nop

    return;
    // 0x800013D8: nop

;}
RECOMP_FUNC void func_800024F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800024F4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800024F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800024FC: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x80002500: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80002504: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80002508: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8000250C: nop

    // 0x80002510: beq         $t6, $zero, L_80002554
    if (ctx->r14 == 0) {
        // 0x80002514: nop
    
            goto L_80002554;
    }
    // 0x80002514: nop

    // 0x80002518: jal         0x800321E0
    // 0x8000251C: nop

    osViGetCurrentFramebuffer_recomp(rdram, ctx);
        goto after_0;
    // 0x8000251C: nop

    after_0:
    // 0x80002520: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80002524: jal         0x80032220
    // 0x80002528: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    osViGetNextFramebuffer_recomp(rdram, ctx);
        goto after_1;
    // 0x80002528: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    after_1:
    // 0x8000252C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80002530: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80002534: nop

    // 0x80002538: beq         $t7, $s0, L_80002548
    if (ctx->r15 == ctx->r16) {
        // 0x8000253C: nop
    
            goto L_80002548;
    }
    // 0x8000253C: nop

    // 0x80002540: b           L_80002564
    // 0x80002544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80002564;
    // 0x80002544: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80002548:
    // 0x80002548: lw          $v0, 0x30($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X30);
    // 0x8000254C: b           L_80002564
    // 0x80002550: nop

        goto L_80002564;
    // 0x80002550: nop

L_80002554:
    // 0x80002554: b           L_80002564
    // 0x80002558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80002564;
    // 0x80002558: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000255C: b           L_80002564
    // 0x80002560: nop

        goto L_80002564;
    // 0x80002560: nop

L_80002564:
    // 0x80002564: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80002568: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000256C: jr          $ra
    // 0x80002570: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80002570: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void alSynStartVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003F0E0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003F0E4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003F0E8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003F0EC: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003F0F0: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8003F0F4: beql        $t6, $zero, L_8003F160
    if (ctx->r14 == 0) {
        // 0x8003F0F8: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003F160;
    }
    goto skip_0;
    // 0x8003F0F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003F0FC: jal         0x80035B20
    // 0x8003F100: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8003F100: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003F104: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8003F108: beq         $v0, $zero, L_8003F15C
    if (ctx->r2 == 0) {
        // 0x8003F10C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8003F15C;
    }
    // 0x8003F10C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003F110: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003F114: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8003F118: addiu       $t2, $zero, 0xE
    ctx->r10 = ADD32(0, 0XE);
    // 0x8003F11C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8003F120: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8003F124: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8003F128: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003F12C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8003F130: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8003F134: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8003F138: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8003F13C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8003F140: lh          $t4, 0x1A($a3)
    ctx->r12 = MEM_H(ctx->r7, 0X1A);
    // 0x8003F144: sh          $t4, 0xA($v0)
    MEM_H(0XA, ctx->r2) = ctx->r12;
    // 0x8003F148: lw          $t5, 0x8($a3)
    ctx->r13 = MEM_W(ctx->r7, 0X8);
    // 0x8003F14C: lw          $a0, 0xC($t5)
    ctx->r4 = MEM_W(ctx->r13, 0XC);
    // 0x8003F150: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003F154: jalr        $t9
    // 0x8003F158: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003F158: nop

    after_1:
L_8003F15C:
    // 0x8003F15C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003F160:
    // 0x8003F160: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003F164: jr          $ra
    // 0x8003F168: nop

    return;
    // 0x8003F168: nop

;}
RECOMP_FUNC void func_80016C54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80016C54: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80016C58: sw          $ra, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r31;
    // 0x80016C5C: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x80016C60: sw          $a3, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r7;
    // 0x80016C64: swc1        $f12, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f12.u32l;
    // 0x80016C68: swc1        $f14, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f14.u32l;
    // 0x80016C6C: lwc1        $f12, 0x40($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X40);
    // 0x80016C70: lwc1        $f14, 0x44($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X44);
    // 0x80016C74: lw          $a2, 0x48($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X48);
    // 0x80016C78: jal         0x80067748
    // 0x80016C7C: nop

    func_80067748(rdram, ctx);
        goto after_0;
    // 0x80016C7C: nop

    after_0:
    // 0x80016C80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80016C84: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x80016C88: nop

    // 0x80016C8C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80016C90: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x80016C94: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80016C98: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80016C9C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80016CA0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80016CA4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80016CA8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80016CAC: lw          $t0, 0x76F0($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X76F0);
    // 0x80016CB0: lw          $t1, 0x7700($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7700);
    // 0x80016CB4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80016CB8: addu        $t2, $t2, $t9
    ctx->r10 = ADD32(ctx->r10, ctx->r25);
    // 0x80016CBC: lw          $t2, 0x7710($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7710);
    // 0x80016CC0: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    // 0x80016CC4: sra         $a0, $t0, 31
    ctx->r4 = S32(SIGNED(ctx->r8) >> 31);
    // 0x80016CC8: or          $a3, $t1, $zero
    ctx->r7 = ctx->r9 | 0;
    // 0x80016CCC: sra         $a2, $t1, 31
    ctx->r6 = S32(SIGNED(ctx->r9) >> 31);
    // 0x80016CD0: lw          $t1, 0x58($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X58);
    // 0x80016CD4: lw          $t0, 0x54($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X54);
    // 0x80016CD8: lw          $t8, 0x50($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X50);
    // 0x80016CDC: lw          $t3, 0x4C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4C);
    // 0x80016CE0: addiu       $t6, $zero, 0x0
    ctx->r14 = ADD32(0, 0X0);
    // 0x80016CE4: addiu       $t7, $zero, 0x0
    ctx->r15 = ADD32(0, 0X0);
    // 0x80016CE8: or          $t5, $t2, $zero
    ctx->r13 = ctx->r10 | 0;
    // 0x80016CEC: sra         $t4, $t2, 31
    ctx->r12 = S32(SIGNED(ctx->r10) >> 31);
    // 0x80016CF0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80016CF4: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x80016CF8: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x80016CFC: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80016D00: sw          $t1, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r9;
    // 0x80016D04: sw          $t0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r8;
    // 0x80016D08: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80016D0C: jal         0x80016A80
    // 0x80016D10: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    func_80016A80(rdram, ctx);
        goto after_1;
    // 0x80016D10: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    after_1:
    // 0x80016D14: b           L_80016D1C
    // 0x80016D18: nop

        goto L_80016D1C;
    // 0x80016D18: nop

L_80016D1C:
    // 0x80016D1C: lw          $ra, 0x34($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X34);
    // 0x80016D20: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x80016D24: jr          $ra
    // 0x80016D28: nop

    return;
    // 0x80016D28: nop

;}
RECOMP_FUNC void func_8002AD90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AD90: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002AD94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002AD98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002AD9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8002ADA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8002ADA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002ADA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002ADAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002ADB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002ADB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002ADB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8002ADBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002ADC0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8002ADC4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8002ADC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002ADCC: lwc1        $f4, -0x1EB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EB4);
    // 0x8002ADD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8002ADD4: lwc1        $f8, -0x1EAC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1EAC);
    // 0x8002ADD8: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002ADDC: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8002ADE0: sub.s       $f12, $f4, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002ADE4: jal         0x80015634
    // 0x8002ADE8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x8002ADE8: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_0:
    // 0x8002ADEC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8002ADF0: nop

    // 0x8002ADF4: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x8002ADF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002ADFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8002AE00: jal         0x8001B44C
    // 0x8002AE04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x8002AE04: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_1:
    // 0x8002AE08: beq         $v0, $zero, L_8002AE20
    if (ctx->r2 == 0) {
        // 0x8002AE0C: nop
    
            goto L_8002AE20;
    }
    // 0x8002AE0C: nop

    // 0x8002AE10: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8002AE14: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8002AE18: jal         0x8001A928
    // 0x8002AE1C: nop

    func_8001A928(rdram, ctx);
        goto after_2;
    // 0x8002AE1C: nop

    after_2:
L_8002AE20:
    // 0x8002AE20: b           L_8002AE28
    // 0x8002AE24: nop

        goto L_8002AE28;
    // 0x8002AE24: nop

L_8002AE28:
    // 0x8002AE28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002AE2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002AE30: jr          $ra
    // 0x8002AE34: nop

    return;
    // 0x8002AE34: nop

;}
