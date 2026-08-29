#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800F70F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F70F4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F70F8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F70FC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800F7100: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F7104: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F7108: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800F710C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F7110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F7114: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F7118: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F711C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F7120: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800F7124: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800F7128: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F712C: beq         $s0, $at, L_800F7160
    if (ctx->r16 == ctx->r1) {
        // 0x800F7130: nop
    
            goto L_800F7160;
    }
    // 0x800F7130: nop

    // 0x800F7134: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800F7138: beq         $s0, $at, L_800F7170
    if (ctx->r16 == ctx->r1) {
        // 0x800F713C: nop
    
            goto L_800F7170;
    }
    // 0x800F713C: nop

    // 0x800F7140: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800F7144: beq         $s0, $at, L_800F7180
    if (ctx->r16 == ctx->r1) {
        // 0x800F7148: nop
    
            goto L_800F7180;
    }
    // 0x800F7148: nop

    // 0x800F714C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800F7150: beq         $s0, $at, L_800F7190
    if (ctx->r16 == ctx->r1) {
        // 0x800F7154: nop
    
            goto L_800F7190;
    }
    // 0x800F7154: nop

    // 0x800F7158: b           L_800F71A0
    // 0x800F715C: nop

        goto L_800F71A0;
    // 0x800F715C: nop

L_800F7160:
    // 0x800F7160: jal         0x800F6B40
    // 0x800F7164: nop

    func_800F6B40(rdram, ctx);
        goto after_0;
    // 0x800F7164: nop

    after_0:
    // 0x800F7168: b           L_800F71A8
    // 0x800F716C: nop

        goto L_800F71A8;
    // 0x800F716C: nop

L_800F7170:
    // 0x800F7170: jal         0x800F6D5C
    // 0x800F7174: nop

    func_800F6D5C(rdram, ctx);
        goto after_1;
    // 0x800F7174: nop

    after_1:
    // 0x800F7178: b           L_800F71A8
    // 0x800F717C: nop

        goto L_800F71A8;
    // 0x800F717C: nop

L_800F7180:
    // 0x800F7180: jal         0x800F6F9C
    // 0x800F7184: nop

    func_800F6F9C(rdram, ctx);
        goto after_2;
    // 0x800F7184: nop

    after_2:
    // 0x800F7188: b           L_800F71A8
    // 0x800F718C: nop

        goto L_800F71A8;
    // 0x800F718C: nop

L_800F7190:
    // 0x800F7190: jal         0x800F7028
    // 0x800F7194: nop

    func_800F7028(rdram, ctx);
        goto after_3;
    // 0x800F7194: nop

    after_3:
    // 0x800F7198: b           L_800F71A8
    // 0x800F719C: nop

        goto L_800F71A8;
    // 0x800F719C: nop

L_800F71A0:
    // 0x800F71A0: b           L_800F71A8
    // 0x800F71A4: nop

        goto L_800F71A8;
    // 0x800F71A4: nop

L_800F71A8:
    // 0x800F71A8: b           L_800F71B0
    // 0x800F71AC: nop

        goto L_800F71B0;
    // 0x800F71AC: nop

L_800F71B0:
    // 0x800F71B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F71B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800F71B8: jr          $ra
    // 0x800F71BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800F71BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B1248(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B1248: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B124C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B1250: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B1254: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B1258: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B125C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B1260: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B1264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1268: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B126C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1270: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B1274: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B1278: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B127C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800B1280: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B1284: nop

    // 0x800B1288: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800B128C: nop

    // 0x800B1290: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x800B1294: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B1298: nop

    // 0x800B129C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800B12A0: nop

    // 0x800B12A4: bne         $t3, $zero, L_800B1338
    if (ctx->r11 != 0) {
        // 0x800B12A8: nop
    
            goto L_800B1338;
    }
    // 0x800B12A8: nop

    // 0x800B12AC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B12B0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B12B4: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800B12B8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x800B12BC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800B12C0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B12C4: nop

    // 0x800B12C8: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800B12CC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B12D0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B12D4: nop

    // 0x800B12D8: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800B12DC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B12E0: addiu       $t8, $zero, 0x12C
    ctx->r24 = ADD32(0, 0X12C);
    // 0x800B12E4: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800B12E8: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B12EC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800B12F0: sh          $t0, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r8;
    // 0x800B12F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B12F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B12FC: jal         0x8001BBDC
    // 0x800B1300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B1300: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B1304: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1308: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800B130C: addiu       $t2, $t2, 0x7884
    ctx->r10 = ADD32(ctx->r10, 0X7884);
    // 0x800B1310: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1314: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800B1318: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B131C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800B1320: jal         0x8001C0EC
    // 0x800B1324: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B1324: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_1:
    // 0x800B1328: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B132C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1330: jal         0x80029D04
    // 0x800B1334: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800B1334: nop

    after_2:
L_800B1338:
    // 0x800B1338: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B133C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1340: jal         0x8002A8B4
    // 0x800B1344: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_3;
    // 0x800B1344: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_3:
    // 0x800B1348: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B134C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1350: jal         0x80029C40
    // 0x800B1354: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800B1354: nop

    after_4:
    // 0x800B1358: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B135C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B1360: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1364: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1368: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B136C: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B1370: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B1374: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800B1378: jal         0x80029018
    // 0x800B137C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800B137C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800B1380: beq         $v0, $zero, L_800B13AC
    if (ctx->r2 == 0) {
        // 0x800B1384: nop
    
            goto L_800B13AC;
    }
    // 0x800B1384: nop

    // 0x800B1388: jal         0x800297DC
    // 0x800B138C: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x800B138C: nop

    after_6:
    // 0x800B1390: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1394: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1398: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B139C: jal         0x80029824
    // 0x800B13A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800B13A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
    // 0x800B13A4: b           L_800B13B8
    // 0x800B13A8: nop

        goto L_800B13B8;
    // 0x800B13A8: nop

L_800B13AC:
    // 0x800B13AC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800B13B0: jal         0x800C00F4
    // 0x800B13B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C00F4(rdram, ctx);
        goto after_8;
    // 0x800B13B4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_8:
L_800B13B8:
    // 0x800B13B8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B13BC: nop

    // 0x800B13C0: lwc1        $f16, 0x3C($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x800B13C4: nop

    // 0x800B13C8: swc1        $f16, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f16.u32l;
    // 0x800B13CC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B13D0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B13D4: lh          $t5, 0xB4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB4);
    // 0x800B13D8: nop

    // 0x800B13DC: bne         $t5, $at, L_800B1448
    if (ctx->r13 != ctx->r1) {
        // 0x800B13E0: nop
    
            goto L_800B1448;
    }
    // 0x800B13E0: nop

    // 0x800B13E4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B13E8: lui         $at, 0xC470
    ctx->r1 = S32(0XC470 << 16);
    // 0x800B13EC: lwc1        $f18, 0x8($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B13F0: lwc1        $f4, 0x2C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800B13F4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B13F8: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B13FC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800B1400: nop

    // 0x800B1404: bc1f        L_800B1448
    if (!c1cs) {
        // 0x800B1408: nop
    
            goto L_800B1448;
    }
    // 0x800B1408: nop

    // 0x800B140C: jal         0x800297DC
    // 0x800B1410: nop

    func_800297DC(rdram, ctx);
        goto after_9;
    // 0x800B1410: nop

    after_9:
    // 0x800B1414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1418: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B141C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B1420: jal         0x80029824
    // 0x800B1424: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_10;
    // 0x800B1424: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_10:
    // 0x800B1428: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B142C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B1430: nop

    // 0x800B1434: swc1        $f10, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f10.u32l;
    // 0x800B1438: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B143C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B1440: nop

    // 0x800B1444: swc1        $f16, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f16.u32l;
L_800B1448:
    // 0x800B1448: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B144C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B1450: lh          $t0, 0xB4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XB4);
    // 0x800B1454: nop

    // 0x800B1458: bne         $t0, $at, L_800B14C4
    if (ctx->r8 != ctx->r1) {
        // 0x800B145C: nop
    
            goto L_800B14C4;
    }
    // 0x800B145C: nop

    // 0x800B1460: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B1464: lui         $at, 0xC516
    ctx->r1 = S32(0XC516 << 16);
    // 0x800B1468: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x800B146C: lwc1        $f4, 0x2C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x800B1470: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800B1474: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800B1478: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x800B147C: nop

    // 0x800B1480: bc1f        L_800B14C4
    if (!c1cs) {
        // 0x800B1484: nop
    
            goto L_800B14C4;
    }
    // 0x800B1484: nop

    // 0x800B1488: jal         0x800297DC
    // 0x800B148C: nop

    func_800297DC(rdram, ctx);
        goto after_11;
    // 0x800B148C: nop

    after_11:
    // 0x800B1490: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1494: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1498: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B149C: jal         0x80029824
    // 0x800B14A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_12;
    // 0x800B14A0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_12:
    // 0x800B14A4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B14A8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B14AC: nop

    // 0x800B14B0: swc1        $f10, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f10.u32l;
    // 0x800B14B4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800B14B8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B14BC: nop

    // 0x800B14C0: swc1        $f16, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f16.u32l;
L_800B14C4:
    // 0x800B14C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B14C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B14CC: jal         0x8001B44C
    // 0x800B14D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_13;
    // 0x800B14D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800B14D4: beq         $v0, $zero, L_800B14F4
    if (ctx->r2 == 0) {
        // 0x800B14D8: nop
    
            goto L_800B14F4;
    }
    // 0x800B14D8: nop

    // 0x800B14DC: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B14E0: addiu       $t4, $zero, 0x7
    ctx->r12 = ADD32(0, 0X7);
    // 0x800B14E4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800B14E8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B14EC: nop

    // 0x800B14F0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800B14F4:
    // 0x800B14F4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B14F8: nop

    // 0x800B14FC: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800B1500: lwc1        $f6, 0x44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X44);
    // 0x800B1504: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x800B1508: nop

    // 0x800B150C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800B1510: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800B1514: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800B1518: nop

    // 0x800B151C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800B1520: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B1524: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B1528: nop

    // 0x800B152C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800B1530: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800B1534: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800B1538: sh          $t0, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r8;
    // 0x800B153C: nop

    // 0x800B1540: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B1544: nop

    // 0x800B1548: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x800B154C: nop

    // 0x800B1550: bgtz        $t2, L_800B1588
    if (SIGNED(ctx->r10) > 0) {
        // 0x800B1554: nop
    
            goto L_800B1588;
    }
    // 0x800B1554: nop

    // 0x800B1558: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B155C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1560: jal         0x8002A1FC
    // 0x800B1564: lui         $a1, 0x4487
    ctx->r5 = S32(0X4487 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_14;
    // 0x800B1564: lui         $a1, 0x4487
    ctx->r5 = S32(0X4487 << 16);
    after_14:
    // 0x800B1568: beq         $v0, $zero, L_800B1588
    if (ctx->r2 == 0) {
        // 0x800B156C: nop
    
            goto L_800B1588;
    }
    // 0x800B156C: nop

    // 0x800B1570: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B1574: addiu       $t3, $zero, 0x7
    ctx->r11 = ADD32(0, 0X7);
    // 0x800B1578: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B157C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B1580: nop

    // 0x800B1584: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800B1588:
    // 0x800B1588: b           L_800B1590
    // 0x800B158C: nop

        goto L_800B1590;
    // 0x800B158C: nop

L_800B1590:
    // 0x800B1590: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B1594: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B1598: jr          $ra
    // 0x800B159C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B159C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800D3824(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D3824: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D3828: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D382C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D3830: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D3834: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D3838: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D383C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3840: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D3844: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D3848: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D384C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D3850: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D3854: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D3858: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D385C: nop

    // 0x800D3860: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D3864: nop

    // 0x800D3868: bne         $t1, $zero, L_800D38D8
    if (ctx->r9 != 0) {
        // 0x800D386C: nop
    
            goto L_800D38D8;
    }
    // 0x800D386C: nop

    // 0x800D3870: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D3874: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D3878: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D387C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D3880: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D3884: nop

    // 0x800D3888: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800D388C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800D3890: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D3894: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D3898: nop

    // 0x800D389C: swc1        $f6, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f6.u32l;
    // 0x800D38A0: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800D38A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D38A8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D38AC: nop

    // 0x800D38B0: swc1        $f8, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f8.u32l;
    // 0x800D38B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D38B8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D38BC: addiu       $t7, $t7, -0x7844
    ctx->r15 = ADD32(ctx->r15, -0X7844);
    // 0x800D38C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D38C4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800D38C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D38CC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D38D0: jal         0x8001C0EC
    // 0x800D38D4: addiu       $a3, $zero, 0x97
    ctx->r7 = ADD32(0, 0X97);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D38D4: addiu       $a3, $zero, 0x97
    ctx->r7 = ADD32(0, 0X97);
    after_0:
L_800D38D8:
    // 0x800D38D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D38DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D38E0: jal         0x80029C40
    // 0x800D38E4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800D38E4: nop

    after_1:
    // 0x800D38E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D38EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D38F0: jal         0x80029D04
    // 0x800D38F4: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800D38F4: nop

    after_2:
    // 0x800D38F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D38FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3900: jal         0x8001B44C
    // 0x800D3904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x800D3904: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800D3908: beq         $v0, $zero, L_800D395C
    if (ctx->r2 == 0) {
        // 0x800D390C: nop
    
            goto L_800D395C;
    }
    // 0x800D390C: nop

    // 0x800D3910: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800D3914: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D3918: nop

    // 0x800D391C: swc1        $f10, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f10.u32l;
    // 0x800D3920: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800D3924: nop

    // 0x800D3928: lwc1        $f16, 0x48($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X48);
    // 0x800D392C: nop

    // 0x800D3930: swc1        $f16, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f16.u32l;
    // 0x800D3934: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D3938: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800D393C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800D3940: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D3944: nop

    // 0x800D3948: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x800D394C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D3950: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D3954: jal         0x8001BBDC
    // 0x800D3958: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x800D3958: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_800D395C:
    // 0x800D395C: b           L_800D3964
    // 0x800D3960: nop

        goto L_800D3964;
    // 0x800D3960: nop

L_800D3964:
    // 0x800D3964: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D3968: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D396C: jr          $ra
    // 0x800D3970: nop

    return;
    // 0x800D3970: nop

;}
RECOMP_FUNC void __stub(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4C0C: jr          $ra
    // 0x800B4C10: nop

    return;
    // 0x800B4C10: nop

    // 0x800B4C14: jr          $ra
    // 0x800B4C18: nop

    return;
    // 0x800B4C18: nop

;}
RECOMP_FUNC void func_800E839C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E839C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E83A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E83A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E83A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E83AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E83B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E83B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E83B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E83BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E83C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E83C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E83C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E83CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E83D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E83D4: nop

    // 0x800E83D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E83DC: nop

    // 0x800E83E0: bne         $t1, $zero, L_800E8438
    if (ctx->r9 != 0) {
        // 0x800E83E4: nop
    
            goto L_800E8438;
    }
    // 0x800E83E4: nop

    // 0x800E83E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E83EC: nop

    // 0x800E83F0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E83F4: nop

    // 0x800E83F8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E83FC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E8400: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E8404: nop

    // 0x800E8408: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E840C: nop

    // 0x800E8410: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E8414: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8418: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E841C: addiu       $t7, $t7, -0x6730
    ctx->r15 = ADD32(ctx->r15, -0X6730);
    // 0x800E8420: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8424: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E8428: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E842C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800E8430: jal         0x8001C0EC
    // 0x800E8434: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E8434: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    after_0:
L_800E8438:
    // 0x800E8438: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E843C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8440: jal         0x8002A46C
    // 0x800E8444: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x800E8444: nop

    after_1:
    // 0x800E8448: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E844C: nop

    // 0x800E8450: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x800E8454: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E8458: nop

    // 0x800E845C: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800E8460: nop

    // 0x800E8464: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
    // 0x800E8468: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E846C: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x800E8470: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800E8474: lwc1        $f12, 0x1C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800E8478: jal         0x80015538
    // 0x800E847C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x800E847C: nop

    after_2:
    // 0x800E8480: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E8484: nop

    // 0x800E8488: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
    // 0x800E848C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E8490: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8494: jal         0x8001B4AC
    // 0x800E8498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_3;
    // 0x800E8498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x800E849C: beq         $v0, $zero, L_800E84BC
    if (ctx->r2 == 0) {
        // 0x800E84A0: nop
    
            goto L_800E84BC;
    }
    // 0x800E84A0: nop

    // 0x800E84A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E84A8: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x800E84AC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800E84B0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E84B4: nop

    // 0x800E84B8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800E84BC:
    // 0x800E84BC: b           L_800E84C4
    // 0x800E84C0: nop

        goto L_800E84C4;
    // 0x800E84C0: nop

L_800E84C4:
    // 0x800E84C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E84C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E84CC: jr          $ra
    // 0x800E84D0: nop

    return;
    // 0x800E84D0: nop

;}
RECOMP_FUNC void func_800FA0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FA0DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FA0E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FA0E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FA0E8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FA0EC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FA0F0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FA0F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA0F8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FA0FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FA100: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FA104: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FA108: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800FA10C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FA110: bne         $t8, $at, L_800FA130
    if (ctx->r24 != ctx->r1) {
        // 0x800FA114: nop
    
            goto L_800FA130;
    }
    // 0x800FA114: nop

    // 0x800FA118: b           L_800FA120
    // 0x800FA11C: nop

        goto L_800FA120;
    // 0x800FA11C: nop

L_800FA120:
    // 0x800FA120: jal         0x800F9DE0
    // 0x800FA124: nop

    func_800F9DE0(rdram, ctx);
        goto after_0;
    // 0x800FA124: nop

    after_0:
    // 0x800FA128: b           L_800FA130
    // 0x800FA12C: nop

        goto L_800FA130;
    // 0x800FA12C: nop

L_800FA130:
    // 0x800FA130: b           L_800FA138
    // 0x800FA134: nop

        goto L_800FA138;
    // 0x800FA134: nop

L_800FA138:
    // 0x800FA138: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FA13C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FA140: jr          $ra
    // 0x800FA144: nop

    return;
    // 0x800FA144: nop

;}
RECOMP_FUNC void func_800982C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800982C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800982C8: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800982CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800982D0: bne         $t6, $at, L_80098360
    if (ctx->r14 != ctx->r1) {
        // 0x800982D4: nop
    
            goto L_80098360;
    }
    // 0x800982D4: nop

    // 0x800982D8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800982DC: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800982E0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800982E4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800982E8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800982EC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800982F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800982F4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800982F8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800982FC: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x80098300: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80098304: bne         $t9, $at, L_80098360
    if (ctx->r25 != ctx->r1) {
        // 0x80098308: nop
    
            goto L_80098360;
    }
    // 0x80098308: nop

    // 0x8009830C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80098310: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80098314: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80098318: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8009831C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80098320: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80098324: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80098328: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8009832C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80098330: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80098334: sh          $t0, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r8;
    // 0x80098338: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8009833C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80098340: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80098344: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80098348: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009834C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80098350: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80098354: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80098358: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8009835C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80098360:
    // 0x80098360: jr          $ra
    // 0x80098364: nop

    return;
    // 0x80098364: nop

    // 0x80098368: jr          $ra
    // 0x8009836C: nop

    return;
    // 0x8009836C: nop

;}
RECOMP_FUNC void func_800A8BF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A8BF0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A8BF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A8BF8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A8BFC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A8C00: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A8C04: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A8C08: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A8C0C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A8C10: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A8C14: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A8C18: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A8C1C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A8C20: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A8C24: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A8C28: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A8C2C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A8C30: addiu       $a1, $a1, 0x3928
    ctx->r5 = ADD32(ctx->r5, 0X3928);
    // 0x800A8C34: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A8C38: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A8C3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A8C40: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A8C44: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A8C48: jal         0x80027464
    // 0x800A8C4C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A8C4C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A8C50: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x800A8C54: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x800A8C58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A8C5C: beq         $t1, $at, L_800A8CF4
    if (ctx->r9 == ctx->r1) {
        // 0x800A8C60: nop
    
            goto L_800A8CF4;
    }
    // 0x800A8C60: nop

    // 0x800A8C64: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x800A8C68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8C6C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800A8C70: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A8C74: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800A8C78: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800A8C7C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800A8C80: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800A8C84: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800A8C88: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x800A8C8C: lh          $t5, 0x26($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X26);
    // 0x800A8C90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8C94: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800A8C98: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A8C9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A8CA0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800A8CA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A8CA8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800A8CAC: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x800A8CB0: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x800A8CB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A8CB8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800A8CBC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A8CC0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800A8CC4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800A8CC8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800A8CCC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800A8CD0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800A8CD4: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x800A8CD8: addiu       $t6, $t6, 0x75D0
    ctx->r14 = ADD32(ctx->r14, 0X75D0);
    // 0x800A8CDC: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x800A8CE0: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800A8CE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A8CE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800A8CEC: jal         0x8001C0EC
    // 0x800A8CF0: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800A8CF0: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_1:
L_800A8CF4:
    // 0x800A8CF4: b           L_800A8CFC
    // 0x800A8CF8: nop

        goto L_800A8CFC;
    // 0x800A8CF8: nop

L_800A8CFC:
    // 0x800A8CFC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A8D00: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A8D04: jr          $ra
    // 0x800A8D08: nop

    return;
    // 0x800A8D08: nop

;}
RECOMP_FUNC void func_8007F3F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F3F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8007F3F4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8007F3F8: jal         0x8001838C
    // 0x8007F3FC: nop

    func_8001838C(rdram, ctx);
        goto after_0;
    // 0x8007F3FC: nop

    after_0:
    // 0x8007F400: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8007F404: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8007F408: addiu       $t8, $t7, 0x7E0
    ctx->r24 = ADD32(ctx->r15, 0X7E0);
    // 0x8007F40C: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x8007F410: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8007F414: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8007F418:
    // 0x8007F418: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007F41C: nop

    // 0x8007F420: lh          $t0, 0xA4($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA4);
    // 0x8007F424: nop

    // 0x8007F428: beq         $t0, $zero, L_8007F544
    if (ctx->r8 == 0) {
        // 0x8007F42C: nop
    
            goto L_8007F544;
    }
    // 0x8007F42C: nop

    // 0x8007F430: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007F434: jal         0x8001C300
    // 0x8007F438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C300(rdram, ctx);
        goto after_1;
    // 0x8007F438: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8007F43C: beq         $v0, $zero, L_8007F4E4
    if (ctx->r2 == 0) {
        // 0x8007F440: nop
    
            goto L_8007F4E4;
    }
    // 0x8007F440: nop

    // 0x8007F444: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8007F448: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007F44C: lwc1        $f4, -0x1EB4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EB4);
    // 0x8007F450: lwc1        $f6, 0x0($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8007F454: nop

    // 0x8007F458: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007F45C: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8007F460: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007F464: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007F468: lwc1        $f10, -0x1EB0($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1EB0);
    // 0x8007F46C: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8007F470: nop

    // 0x8007F474: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8007F478: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x8007F47C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8007F480: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007F484: lwc1        $f4, -0x1EAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1EAC);
    // 0x8007F488: lwc1        $f6, 0x8($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8007F48C: nop

    // 0x8007F490: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8007F494: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8007F498: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8007F49C: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007F4A0: lwc1        $f14, 0x28($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007F4A4: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8007F4A8: addiu       $t5, $t4, 0x1C
    ctx->r13 = ADD32(ctx->r12, 0X1C);
    // 0x8007F4AC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x8007F4B0: jal         0x800158B4
    // 0x8007F4B4: addiu       $a3, $t4, 0x18
    ctx->r7 = ADD32(ctx->r12, 0X18);
    func_800158B4(rdram, ctx);
        goto after_2;
    // 0x8007F4B4: addiu       $a3, $t4, 0x18
    ctx->r7 = ADD32(ctx->r12, 0X18);
    after_2:
    // 0x8007F4B8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8007F4BC: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8007F4C0: nop

    // 0x8007F4C4: swc1        $f10, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f10.u32l;
    // 0x8007F4C8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007F4CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007F4D0: jal         0x80019510
    // 0x8007F4D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80019510(rdram, ctx);
        goto after_3;
    // 0x8007F4D4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x8007F4D8: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007F4DC: jal         0x8001C384
    // 0x8007F4E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001C384(rdram, ctx);
        goto after_4;
    // 0x8007F4E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
L_8007F4E4:
    // 0x8007F4E4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007F4E8: jal         0x8001C300
    // 0x8007F4EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001C300(rdram, ctx);
        goto after_5;
    // 0x8007F4EC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_5:
    // 0x8007F4F0: beq         $v0, $zero, L_8007F544
    if (ctx->r2 == 0) {
        // 0x8007F4F4: nop
    
            goto L_8007F544;
    }
    // 0x8007F4F4: nop

    // 0x8007F4F8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007F4FC: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8007F500: nop

    // 0x8007F504: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x8007F508: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8007F50C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8007F510: nop

    // 0x8007F514: swc1        $f18, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f18.u32l;
    // 0x8007F518: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8007F51C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8007F520: nop

    // 0x8007F524: swc1        $f4, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f4.u32l;
    // 0x8007F528: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007F52C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8007F530: jal         0x80019510
    // 0x8007F534: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80019510(rdram, ctx);
        goto after_6;
    // 0x8007F534: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_6:
    // 0x8007F538: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x8007F53C: jal         0x8001C384
    // 0x8007F540: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001C384(rdram, ctx);
        goto after_7;
    // 0x8007F540: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_8007F544:
    // 0x8007F544: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8007F548: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8007F54C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8007F550: slti        $at, $t1, 0xE
    ctx->r1 = SIGNED(ctx->r9) < 0XE ? 1 : 0;
    // 0x8007F554: addiu       $t3, $t2, 0x150
    ctx->r11 = ADD32(ctx->r10, 0X150);
    // 0x8007F558: sw          $t3, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r11;
    // 0x8007F55C: bne         $at, $zero, L_8007F418
    if (ctx->r1 != 0) {
        // 0x8007F560: sw          $t1, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r9;
            goto L_8007F418;
    }
    // 0x8007F560: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
    // 0x8007F564: b           L_8007F56C
    // 0x8007F568: nop

        goto L_8007F56C;
    // 0x8007F568: nop

L_8007F56C:
    // 0x8007F56C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8007F570: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8007F574: jr          $ra
    // 0x8007F578: nop

    return;
    // 0x8007F578: nop

;}
RECOMP_FUNC void func_800CF800(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF800: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CF804: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CF808: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF80C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CF810: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CF814: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CF818: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF81C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CF820: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF824: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CF828: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CF82C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CF830: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800CF834: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CF838: nop

    // 0x800CF83C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CF840: nop

    // 0x800CF844: bne         $t1, $zero, L_800CF8CC
    if (ctx->r9 != 0) {
        // 0x800CF848: nop
    
            goto L_800CF8CC;
    }
    // 0x800CF848: nop

    // 0x800CF84C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CF850: nop

    // 0x800CF854: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CF858: nop

    // 0x800CF85C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CF860: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CF864: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CF868: addiu       $t5, $zero, 0x2D
    ctx->r13 = ADD32(0, 0X2D);
    // 0x800CF86C: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800CF870: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF874: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF878: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800CF87C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800CF880: jal         0x80019448
    // 0x800CF884: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x800CF884: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x800CF888: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF88C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800CF890: addiu       $t7, $t7, -0x7C50
    ctx->r15 = ADD32(ctx->r15, -0X7C50);
    // 0x800CF894: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF898: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800CF89C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CF8A0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CF8A4: jal         0x8001C0EC
    // 0x800CF8A8: addiu       $a3, $zero, 0x8F
    ctx->r7 = ADD32(0, 0X8F);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800CF8A8: addiu       $a3, $zero, 0x8F
    ctx->r7 = ADD32(0, 0X8F);
    after_1:
    // 0x800CF8AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF8B0: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800CF8B4: addiu       $a3, $a3, -0x7C20
    ctx->r7 = ADD32(ctx->r7, -0X7C20);
    // 0x800CF8B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF8BC: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800CF8C0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CF8C4: jal         0x8001ABF4
    // 0x800CF8C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800CF8C8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800CF8CC:
    // 0x800CF8CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800CF8D0: nop

    // 0x800CF8D4: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x800CF8D8: nop

    // 0x800CF8DC: bne         $t9, $zero, L_800CF900
    if (ctx->r25 != 0) {
        // 0x800CF8E0: nop
    
            goto L_800CF900;
    }
    // 0x800CF8E0: nop

    // 0x800CF8E4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800CF8E8: nop

    // 0x800CF8EC: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x800CF8F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800CF8F4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800CF8F8: b           L_800CF950
    // 0x800CF8FC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
        goto L_800CF950;
    // 0x800CF8FC: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
L_800CF900:
    // 0x800CF900: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800CF904: nop

    // 0x800CF908: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x800CF90C: nop

    // 0x800CF910: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x800CF914: sh          $t5, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r13;
    // 0x800CF918: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800CF91C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800CF920: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CF924: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800CF928: nop

    // 0x800CF92C: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800CF930: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x800CF934: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800CF938: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800CF93C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CF940: lwc1        $f10, 0x18($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X18);
    // 0x800CF944: nop

    // 0x800CF948: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800CF94C: swc1        $f18, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f18.u32l;
L_800CF950:
    // 0x800CF950: b           L_800CF958
    // 0x800CF954: nop

        goto L_800CF958;
    // 0x800CF954: nop

L_800CF958:
    // 0x800CF958: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF95C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CF960: jr          $ra
    // 0x800CF964: nop

    return;
    // 0x800CF964: nop

;}
RECOMP_FUNC void func_800A7194(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A7194: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800A7198: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800A719C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A71A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A71A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A71A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A71AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A71B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A71B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A71B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A71BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800A71C0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800A71C4: nop

    // 0x800A71C8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800A71CC: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800A71D0: nop

    // 0x800A71D4: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800A71D8: sltiu       $at, $t0, 0x9
    ctx->r1 = ctx->r8 < 0X9 ? 1 : 0;
    // 0x800A71DC: beq         $at, $zero, L_800A7280
    if (ctx->r1 == 0) {
        // 0x800A71E0: nop
    
            goto L_800A7280;
    }
    // 0x800A71E0: nop

    // 0x800A71E4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800A71E8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800A71EC: addu        $at, $at, $t0
    gpr jr_addend_800A71F8 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800A71F0: lw          $t0, 0x49C8($at)
    ctx->r8 = ADD32(ctx->r1, 0X49C8);
    // 0x800A71F4: nop

    // 0x800A71F8: jr          $t0
    // 0x800A71FC: nop

    switch (jr_addend_800A71F8 >> 2) {
        case 0: goto L_800A7200; break;
        case 1: goto L_800A7210; break;
        case 2: goto L_800A7230; break;
        case 3: goto L_800A7280; break;
        case 4: goto L_800A7240; break;
        case 5: goto L_800A7250; break;
        case 6: goto L_800A7260; break;
        case 7: goto L_800A7270; break;
        case 8: goto L_800A7220; break;
        default: switch_error(__func__, 0x800A71F8, 0x801149C8);
    }
    // 0x800A71FC: nop

L_800A7200:
    // 0x800A7200: jal         0x800A5DB4
    // 0x800A7204: nop

    func_800A5DB4(rdram, ctx);
        goto after_0;
    // 0x800A7204: nop

    after_0:
    // 0x800A7208: b           L_800A7288
    // 0x800A720C: nop

        goto L_800A7288;
    // 0x800A720C: nop

L_800A7210:
    // 0x800A7210: jal         0x800A605C
    // 0x800A7214: nop

    func_800A605C(rdram, ctx);
        goto after_1;
    // 0x800A7214: nop

    after_1:
    // 0x800A7218: b           L_800A7288
    // 0x800A721C: nop

        goto L_800A7288;
    // 0x800A721C: nop

L_800A7220:
    // 0x800A7220: jal         0x800A62A8
    // 0x800A7224: nop

    func_800A62A8(rdram, ctx);
        goto after_2;
    // 0x800A7224: nop

    after_2:
    // 0x800A7228: b           L_800A7288
    // 0x800A722C: nop

        goto L_800A7288;
    // 0x800A722C: nop

L_800A7230:
    // 0x800A7230: jal         0x800A6574
    // 0x800A7234: nop

    func_800A6574(rdram, ctx);
        goto after_3;
    // 0x800A7234: nop

    after_3:
    // 0x800A7238: b           L_800A7288
    // 0x800A723C: nop

        goto L_800A7288;
    // 0x800A723C: nop

L_800A7240:
    // 0x800A7240: jal         0x800A6DE8
    // 0x800A7244: nop

    func_800A6DE8(rdram, ctx);
        goto after_4;
    // 0x800A7244: nop

    after_4:
    // 0x800A7248: b           L_800A7288
    // 0x800A724C: nop

        goto L_800A7288;
    // 0x800A724C: nop

L_800A7250:
    // 0x800A7250: jal         0x800A6A5C
    // 0x800A7254: nop

    func_800A6A5C(rdram, ctx);
        goto after_5;
    // 0x800A7254: nop

    after_5:
    // 0x800A7258: b           L_800A7288
    // 0x800A725C: nop

        goto L_800A7288;
    // 0x800A725C: nop

L_800A7260:
    // 0x800A7260: jal         0x800A6D0C
    // 0x800A7264: nop

    func_800A6D0C(rdram, ctx);
        goto after_6;
    // 0x800A7264: nop

    after_6:
    // 0x800A7268: b           L_800A7288
    // 0x800A726C: nop

        goto L_800A7288;
    // 0x800A726C: nop

L_800A7270:
    // 0x800A7270: jal         0x800A6770
    // 0x800A7274: nop

    func_800A6770(rdram, ctx);
        goto after_7;
    // 0x800A7274: nop

    after_7:
    // 0x800A7278: b           L_800A7288
    // 0x800A727C: nop

        goto L_800A7288;
    // 0x800A727C: nop

L_800A7280:
    // 0x800A7280: b           L_800A7288
    // 0x800A7284: nop

        goto L_800A7288;
    // 0x800A7284: nop

L_800A7288:
    // 0x800A7288: b           L_800A7290
    // 0x800A728C: nop

        goto L_800A7290;
    // 0x800A728C: nop

L_800A7290:
    // 0x800A7290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800A7294: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800A7298: jr          $ra
    // 0x800A729C: nop

    return;
    // 0x800A729C: nop

    // 0x800A72A0: jr          $ra
    // 0x800A72A4: nop

    return;
    // 0x800A72A4: nop

    // 0x800A72A8: jr          $ra
    // 0x800A72AC: nop

    return;
    // 0x800A72AC: nop

;}
RECOMP_FUNC void func_800E660C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E660C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E6610: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E6614: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E6618: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E661C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E6620: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E6624: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6628: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E662C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6630: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6634: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E6638: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E663C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E6640: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E6644: nop

    // 0x800E6648: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E664C: nop

    // 0x800E6650: bne         $t1, $zero, L_800E66A8
    if (ctx->r9 != 0) {
        // 0x800E6654: nop
    
            goto L_800E66A8;
    }
    // 0x800E6654: nop

    // 0x800E6658: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E665C: nop

    // 0x800E6660: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E6664: nop

    // 0x800E6668: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E666C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E6670: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E6674: nop

    // 0x800E6678: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E667C: nop

    // 0x800E6680: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E6684: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E6688: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E668C: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E6690: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E6694: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E6698: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E669C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E66A0: jal         0x8001C0EC
    // 0x800E66A4: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E66A4: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
L_800E66A8:
    // 0x800E66A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E66AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E66B0: jal         0x8002A1FC
    // 0x800E66B4: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x800E66B4: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_1:
    // 0x800E66B8: beq         $v0, $zero, L_800E66D8
    if (ctx->r2 == 0) {
        // 0x800E66BC: nop
    
            goto L_800E66D8;
    }
    // 0x800E66BC: nop

    // 0x800E66C0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E66C4: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E66C8: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E66CC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E66D0: b           L_800E6708
    // 0x800E66D4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
        goto L_800E6708;
    // 0x800E66D4: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E66D8:
    // 0x800E66D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E66DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E66E0: jal         0x8002A1FC
    // 0x800E66E4: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800E66E4: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_2:
    // 0x800E66E8: beq         $v0, $zero, L_800E6708
    if (ctx->r2 == 0) {
        // 0x800E66EC: nop
    
            goto L_800E6708;
    }
    // 0x800E66EC: nop

    // 0x800E66F0: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E66F4: addiu       $t1, $zero, 0x6
    ctx->r9 = ADD32(0, 0X6);
    // 0x800E66F8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800E66FC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800E6700: nop

    // 0x800E6704: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E6708:
    // 0x800E6708: b           L_800E6710
    // 0x800E670C: nop

        goto L_800E6710;
    // 0x800E670C: nop

L_800E6710:
    // 0x800E6710: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E6714: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E6718: jr          $ra
    // 0x800E671C: nop

    return;
    // 0x800E671C: nop

;}
RECOMP_FUNC void stub_BE560(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D13C0: jr          $ra
    // 0x800D13C4: nop

    return;
    // 0x800D13C4: nop

    // 0x800D13C8: jr          $ra
    // 0x800D13CC: nop

    return;
    // 0x800D13CC: nop

;}
RECOMP_FUNC void func_80094128(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80094128: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009412C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80094130: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80094134:
    // 0x80094134: jal         0x80014E80
    // 0x80094138: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80094138: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_0:
    // 0x8009413C: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80094140: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80094144: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80094148: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009414C: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x80094150: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x80094154: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80094158: lw          $t8, 0x59B4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X59B4);
    // 0x8009415C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80094160: lh          $t9, 0x0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X0);
    // 0x80094164: nop

    // 0x80094168: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8009416C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80094170: lw          $t1, -0x3560($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X3560);
    // 0x80094174: nop

    // 0x80094178: beq         $t1, $zero, L_8009418C
    if (ctx->r9 == 0) {
        // 0x8009417C: nop
    
            goto L_8009418C;
    }
    // 0x8009417C: nop

    // 0x80094180: lw          $v0, 0x1C($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X1C);
    // 0x80094184: b           L_800941B4
    // 0x80094188: nop

        goto L_800941B4;
    // 0x80094188: nop

L_8009418C:
    // 0x8009418C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x80094190: nop

    // 0x80094194: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80094198: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x8009419C: bne         $at, $zero, L_80094134
    if (ctx->r1 != 0) {
        // 0x800941A0: sw          $t3, 0x18($sp)
        MEM_W(0X18, ctx->r29) = ctx->r11;
            goto L_80094134;
    }
    // 0x800941A0: sw          $t3, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r11;
    // 0x800941A4: b           L_800941B4
    // 0x800941A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800941B4;
    // 0x800941A8: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800941AC: b           L_800941B4
    // 0x800941B0: nop

        goto L_800941B4;
    // 0x800941B0: nop

L_800941B4:
    // 0x800941B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800941B8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800941BC: jr          $ra
    // 0x800941C0: nop

    return;
    // 0x800941C0: nop

;}
RECOMP_FUNC void func_80074B04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074B04: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80074B08: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074B0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B10: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
    // 0x80074B14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80074B18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B1C: swc1        $f6, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f6.u32l;
    // 0x80074B20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80074B24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B28: swc1        $f8, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f8.u32l;
    // 0x80074B2C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80074B30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B34: swc1        $f10, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f10.u32l;
    // 0x80074B38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80074B3C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80074B40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B44: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
    // 0x80074B48: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80074B4C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B50: swc1        $f18, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f18.u32l;
    // 0x80074B54: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80074B58: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074B5C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B60: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x80074B64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80074B68: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80074B6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B70: lwc1        $f6, 0x0($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80074B74: nop

    // 0x80074B78: swc1        $f6, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f6.u32l;
    // 0x80074B7C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80074B80: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80074B84: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x80074B88: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80074B8C: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80074B90: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074B94: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80074B98: swc1        $f16, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f16.u32l;
    // 0x80074B9C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80074BA0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80074BA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074BA8: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80074BAC: nop

    // 0x80074BB0: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x80074BB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074BB8: sb          $zero, 0x75EF($at)
    MEM_B(0X75EF, ctx->r1) = 0;
    // 0x80074BBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074BC0: sb          $zero, 0x75F4($at)
    MEM_B(0X75F4, ctx->r1) = 0;
    // 0x80074BC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074BC8: sb          $zero, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = 0;
    // 0x80074BCC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80074BD0: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80074BD4: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80074BD8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80074BDC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80074BE0: lw          $t1, -0x4C04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C04);
    // 0x80074BE4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074BE8: lh          $t2, 0x30($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X30);
    // 0x80074BEC: nop

    // 0x80074BF0: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80074BF4: nop

    // 0x80074BF8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80074BFC: swc1        $f6, 0x7A58($at)
    MEM_W(0X7A58, ctx->r1) = ctx->f6.u32l;
    // 0x80074C00: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80074C04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80074C08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074C0C: swc1        $f8, 0x7A5C($at)
    MEM_W(0X7A5C, ctx->r1) = ctx->f8.u32l;
    // 0x80074C10: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80074C14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074C18: swc1        $f10, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f10.u32l;
    // 0x80074C1C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80074C20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074C24: swc1        $f16, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f16.u32l;
    // 0x80074C28: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80074C2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074C30: swc1        $f18, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f18.u32l;
    // 0x80074C34: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x80074C38: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074C3C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074C40: swc1        $f4, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f4.u32l;
    // 0x80074C44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80074C48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074C4C: swc1        $f6, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f6.u32l;
    // 0x80074C50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80074C54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074C58: swc1        $f8, 0x75D0($at)
    MEM_W(0X75D0, ctx->r1) = ctx->f8.u32l;
    // 0x80074C5C: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x80074C60: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80074C64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074C68: swc1        $f10, 0x75D8($at)
    MEM_W(0X75D8, ctx->r1) = ctx->f10.u32l;
    // 0x80074C6C: jr          $ra
    // 0x80074C70: nop

    return;
    // 0x80074C70: nop

    // 0x80074C74: jr          $ra
    // 0x80074C78: nop

    return;
    // 0x80074C78: nop

;}
RECOMP_FUNC void func_800BCBE0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BCBE0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800BCBE4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800BCBE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BCBEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BCBF0: jal         0x8002B0E4
    // 0x800BCBF4: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800BCBF4: nop

    after_0:
    // 0x800BCBF8: b           L_800BCC00
    // 0x800BCBFC: nop

        goto L_800BCC00;
    // 0x800BCBFC: nop

L_800BCC00:
    // 0x800BCC00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800BCC04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800BCC08: jr          $ra
    // 0x800BCC0C: nop

    return;
    // 0x800BCC0C: nop

;}
RECOMP_FUNC void func_800AA758(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AA758: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800AA75C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800AA760: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AA764: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AA768: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AA76C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AA770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA774: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AA778: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AA77C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AA780: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AA784: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AA788: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800AA78C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800AA790: nop

    // 0x800AA794: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AA798: nop

    // 0x800AA79C: bne         $t1, $zero, L_800AA81C
    if (ctx->r9 != 0) {
        // 0x800AA7A0: nop
    
            goto L_800AA81C;
    }
    // 0x800AA7A0: nop

    // 0x800AA7A4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800AA7A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AA7AC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AA7B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AA7B4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800AA7B8: nop

    // 0x800AA7BC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AA7C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AA7C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AA7C8: nop

    // 0x800AA7CC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AA7D0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AA7D4: nop

    // 0x800AA7D8: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x800AA7DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA7E0: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x800AA7E4: addiu       $t7, $t7, 0x75D0
    ctx->r15 = ADD32(ctx->r15, 0X75D0);
    // 0x800AA7E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA7EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800AA7F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA7F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AA7F8: jal         0x8001C0EC
    // 0x800AA7FC: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AA7FC: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
    // 0x800AA800: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA804: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA808: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800AA80C: addiu       $a3, $a3, 0x7620
    ctx->r7 = ADD32(ctx->r7, 0X7620);
    // 0x800AA810: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AA814: jal         0x8001ABF4
    // 0x800AA818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800AA818: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800AA81C:
    // 0x800AA81C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA820: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA824: jal         0x80029C40
    // 0x800AA828: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800AA828: nop

    after_2:
    // 0x800AA82C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AA830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AA834: jal         0x80029D04
    // 0x800AA838: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800AA838: nop

    after_3:
    // 0x800AA83C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800AA840: nop

    // 0x800AA844: lwc1        $f8, 0x3C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x800AA848: nop

    // 0x800AA84C: swc1        $f8, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f8.u32l;
    // 0x800AA850: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800AA854: nop

    // 0x800AA858: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800AA85C: nop

    // 0x800AA860: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800AA864: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
    // 0x800AA868: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800AA86C: nop

    // 0x800AA870: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800AA874: nop

    // 0x800AA878: slti        $at, $t3, 0x28
    ctx->r1 = SIGNED(ctx->r11) < 0X28 ? 1 : 0;
    // 0x800AA87C: bne         $at, $zero, L_800AA89C
    if (ctx->r1 != 0) {
        // 0x800AA880: nop
    
            goto L_800AA89C;
    }
    // 0x800AA880: nop

    // 0x800AA884: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800AA888: addiu       $t4, $zero, 0x8
    ctx->r12 = ADD32(0, 0X8);
    // 0x800AA88C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x800AA890: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800AA894: nop

    // 0x800AA898: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800AA89C:
    // 0x800AA89C: b           L_800AA8A4
    // 0x800AA8A0: nop

        goto L_800AA8A4;
    // 0x800AA8A0: nop

L_800AA8A4:
    // 0x800AA8A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800AA8A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800AA8AC: jr          $ra
    // 0x800AA8B0: nop

    return;
    // 0x800AA8B0: nop

;}
RECOMP_FUNC void func_800FD940(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FD940: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FD944: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FD948: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800FD94C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FD950: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FD954: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FD958: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FD95C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FD960: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FD964: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FD968: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FD96C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FD970: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x800FD974: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800FD978: bne         $t8, $at, L_800FD9F0
    if (ctx->r24 != ctx->r1) {
        // 0x800FD97C: nop
    
            goto L_800FD9F0;
    }
    // 0x800FD97C: nop

    // 0x800FD980: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800FD984: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800FD988: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800FD98C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800FD990: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800FD994: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800FD998: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800FD99C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800FD9A0: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x800FD9A4: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800FD9A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800FD9AC: beq         $s0, $at, L_800FD9C8
    if (ctx->r16 == ctx->r1) {
        // 0x800FD9B0: nop
    
            goto L_800FD9C8;
    }
    // 0x800FD9B0: nop

    // 0x800FD9B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800FD9B8: beq         $s0, $at, L_800FD9D8
    if (ctx->r16 == ctx->r1) {
        // 0x800FD9BC: nop
    
            goto L_800FD9D8;
    }
    // 0x800FD9BC: nop

    // 0x800FD9C0: b           L_800FD9E8
    // 0x800FD9C4: nop

        goto L_800FD9E8;
    // 0x800FD9C4: nop

L_800FD9C8:
    // 0x800FD9C8: jal         0x800FD440
    // 0x800FD9CC: nop

    func_800FD440(rdram, ctx);
        goto after_0;
    // 0x800FD9CC: nop

    after_0:
    // 0x800FD9D0: b           L_800FD9F0
    // 0x800FD9D4: nop

        goto L_800FD9F0;
    // 0x800FD9D4: nop

L_800FD9D8:
    // 0x800FD9D8: jal         0x800FD874
    // 0x800FD9DC: nop

    func_800FD874(rdram, ctx);
        goto after_1;
    // 0x800FD9DC: nop

    after_1:
    // 0x800FD9E0: b           L_800FD9F0
    // 0x800FD9E4: nop

        goto L_800FD9F0;
    // 0x800FD9E4: nop

L_800FD9E8:
    // 0x800FD9E8: b           L_800FD9F0
    // 0x800FD9EC: nop

        goto L_800FD9F0;
    // 0x800FD9EC: nop

L_800FD9F0:
    // 0x800FD9F0: b           L_800FD9F8
    // 0x800FD9F4: nop

        goto L_800FD9F8;
    // 0x800FD9F4: nop

L_800FD9F8:
    // 0x800FD9F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FD9FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800FDA00: jr          $ra
    // 0x800FDA04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800FDA04: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8009F2B0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009F2B0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8009F2B4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009F2B8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x8009F2BC: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009F2C0: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8009F2C4: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009F2C8: nop

    // 0x8009F2CC: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x8009F2D0: nop

    // 0x8009F2D4: bne         $t7, $zero, L_8009F33C
    if (ctx->r15 != 0) {
        // 0x8009F2D8: nop
    
            goto L_8009F33C;
    }
    // 0x8009F2D8: nop

    // 0x8009F2DC: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009F2E0: nop

    // 0x8009F2E4: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8009F2E8: nop

    // 0x8009F2EC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8009F2F0: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x8009F2F4: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8009F2F8: nop

    // 0x8009F2FC: sb          $zero, 0x102($t1)
    MEM_B(0X102, ctx->r9) = 0;
    // 0x8009F300: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8009F304: nop

    // 0x8009F308: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x8009F30C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8009F310: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8009F314: nop

    // 0x8009F318: swc1        $f4, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f4.u32l;
    // 0x8009F31C: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8009F320: nop

    // 0x8009F324: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8009F328: nop

    // 0x8009F32C: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x8009F330: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8009F334: nop

    // 0x8009F338: swc1        $f20, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f20.u32l;
L_8009F33C:
    // 0x8009F33C: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009F340: addiu       $at, $zero, 0x3C
    ctx->r1 = ADD32(0, 0X3C);
    // 0x8009F344: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8009F348: nop

    // 0x8009F34C: bne         $t7, $at, L_8009F37C
    if (ctx->r15 != ctx->r1) {
        // 0x8009F350: nop
    
            goto L_8009F37C;
    }
    // 0x8009F350: nop

    // 0x8009F354: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8009F358: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8009F35C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x8009F360: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8009F364: nop

    // 0x8009F368: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x8009F36C: b           L_8009F3D4
    // 0x8009F370: nop

        goto L_8009F3D4;
    // 0x8009F370: nop

    // 0x8009F374: b           L_8009F394
    // 0x8009F378: nop

        goto L_8009F394;
    // 0x8009F378: nop

L_8009F37C:
    // 0x8009F37C: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8009F380: nop

    // 0x8009F384: lh          $t2, 0xA6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA6);
    // 0x8009F388: nop

    // 0x8009F38C: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8009F390: sh          $t3, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r11;
L_8009F394:
    // 0x8009F394: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009F398: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009F39C: jal         0x8002A1FC
    // 0x8009F3A0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_0;
    // 0x8009F3A0: lui         $a1, 0x4416
    ctx->r5 = S32(0X4416 << 16);
    after_0:
    // 0x8009F3A4: bne         $v0, $zero, L_8009F3CC
    if (ctx->r2 != 0) {
        // 0x8009F3A8: nop
    
            goto L_8009F3CC;
    }
    // 0x8009F3A8: nop

    // 0x8009F3AC: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8009F3B0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8009F3B4: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8009F3B8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8009F3BC: nop

    // 0x8009F3C0: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x8009F3C4: b           L_8009F3D4
    // 0x8009F3C8: nop

        goto L_8009F3D4;
    // 0x8009F3C8: nop

L_8009F3CC:
    // 0x8009F3CC: b           L_8009F3D4
    // 0x8009F3D0: nop

        goto L_8009F3D4;
    // 0x8009F3D0: nop

L_8009F3D4:
    // 0x8009F3D4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009F3D8: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x8009F3DC: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8009F3E0: jr          $ra
    // 0x8009F3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8009F3E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CFC14(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CFC14: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CFC18: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CFC1C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800CFC20: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800CFC24: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CFC28: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800CFC2C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800CFC30: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800CFC34: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800CFC38: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CFC3C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800CFC40: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800CFC44: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CFC48: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800CFC4C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CFC50: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800CFC54: addiu       $a1, $a1, 0x40B4
    ctx->r5 = ADD32(ctx->r5, 0X40B4);
    // 0x800CFC58: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CFC5C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800CFC60: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CFC64: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CFC68: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800CFC6C: jal         0x80027464
    // 0x800CFC70: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800CFC70: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800CFC74: b           L_800CFC7C
    // 0x800CFC78: nop

        goto L_800CFC7C;
    // 0x800CFC78: nop

L_800CFC7C:
    // 0x800CFC7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CFC80: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CFC84: jr          $ra
    // 0x800CFC88: nop

    return;
    // 0x800CFC88: nop

;}
RECOMP_FUNC void func_800CA140(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA140: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CA144: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CA148: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CA14C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CA150: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CA154: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CA158: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA15C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CA160: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA164: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CA168: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CA16C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CA170: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800CA174: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA178: nop

    // 0x800CA17C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CA180: nop

    // 0x800CA184: bne         $t1, $zero, L_800CA20C
    if (ctx->r9 != 0) {
        // 0x800CA188: nop
    
            goto L_800CA20C;
    }
    // 0x800CA188: nop

    // 0x800CA18C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA190: nop

    // 0x800CA194: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CA198: nop

    // 0x800CA19C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CA1A0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CA1A4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA1A8: addiu       $t5, $zero, 0x28
    ctx->r13 = ADD32(0, 0X28);
    // 0x800CA1AC: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800CA1B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800CA1B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CA1B8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA1BC: nop

    // 0x800CA1C0: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800CA1C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA1C8: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800CA1CC: addiu       $t8, $t8, -0x7E10
    ctx->r24 = ADD32(ctx->r24, -0X7E10);
    // 0x800CA1D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA1D4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800CA1D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CA1DC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CA1E0: jal         0x8001C0EC
    // 0x800CA1E4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CA1E4: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x800CA1E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA1EC: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800CA1F0: addiu       $t9, $t9, -0x7E00
    ctx->r25 = ADD32(ctx->r25, -0X7E00);
    // 0x800CA1F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA1F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800CA1FC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CA200: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800CA204: jal         0x8001C0EC
    // 0x800CA208: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800CA208: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_1:
L_800CA20C:
    // 0x800CA20C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CA210: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA214: nop

    // 0x800CA218: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
    // 0x800CA21C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA220: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA224: jal         0x80029C40
    // 0x800CA228: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800CA228: nop

    after_2:
    // 0x800CA22C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CA230: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CA234: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA238: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA23C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CA240: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800CA244: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CA248: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800CA24C: jal         0x80029018
    // 0x800CA250: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800CA250: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800CA254: beq         $v0, $zero, L_800CA274
    if (ctx->r2 == 0) {
        // 0x800CA258: nop
    
            goto L_800CA274;
    }
    // 0x800CA258: nop

    // 0x800CA25C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA260: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800CA264: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800CA268: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA26C: nop

    // 0x800CA270: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800CA274:
    // 0x800CA274: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA278: nop

    // 0x800CA27C: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800CA280: nop

    // 0x800CA284: bne         $t5, $zero, L_800CA2A4
    if (ctx->r13 != 0) {
        // 0x800CA288: nop
    
            goto L_800CA2A4;
    }
    // 0x800CA288: nop

    // 0x800CA28C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA290: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800CA294: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800CA298: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA29C: b           L_800CA2BC
    // 0x800CA2A0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
        goto L_800CA2BC;
    // 0x800CA2A0: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800CA2A4:
    // 0x800CA2A4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA2A8: nop

    // 0x800CA2AC: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x800CA2B0: nop

    // 0x800CA2B4: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x800CA2B8: sh          $t1, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r9;
L_800CA2BC:
    // 0x800CA2BC: b           L_800CA2C4
    // 0x800CA2C0: nop

        goto L_800CA2C4;
    // 0x800CA2C0: nop

L_800CA2C4:
    // 0x800CA2C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA2C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800CA2CC: jr          $ra
    // 0x800CA2D0: nop

    return;
    // 0x800CA2D0: nop

;}
RECOMP_FUNC void func_800EC888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EC888: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800EC88C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EC890: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EC894: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EC898: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EC89C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC8A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EC8A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EC8A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EC8AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EC8B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EC8B4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800EC8B8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800EC8BC: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800EC8C0: nop

    // 0x800EC8C4: bne         $t0, $zero, L_800EC8F4
    if (ctx->r8 != 0) {
        // 0x800EC8C8: nop
    
            goto L_800EC8F4;
    }
    // 0x800EC8C8: nop

    // 0x800EC8CC: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800EC8D0: nop

    // 0x800EC8D4: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800EC8D8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800EC8DC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800EC8E0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800EC8E4: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800EC8E8: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800EC8EC: b           L_800EC90C
    // 0x800EC8F0: sh          $t4, 0xC0($t5)
    MEM_H(0XC0, ctx->r13) = ctx->r12;
        goto L_800EC90C;
    // 0x800EC8F0: sh          $t4, 0xC0($t5)
    MEM_H(0XC0, ctx->r13) = ctx->r12;
L_800EC8F4:
    // 0x800EC8F4: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800EC8F8: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x800EC8FC: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800EC900: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x800EC904: nop

    // 0x800EC908: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800EC90C:
    // 0x800EC90C: b           L_800EC914
    // 0x800EC910: nop

        goto L_800EC914;
    // 0x800EC910: nop

L_800EC914:
    // 0x800EC914: jr          $ra
    // 0x800EC918: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800EC918: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800F0DD4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F0DD4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F0DD8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F0DDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F0DE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F0DE4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F0DE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F0DEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F0DF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F0DF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F0DF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F0DFC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F0E00: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F0E04: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F0E08: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F0E0C: nop

    // 0x800F0E10: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800F0E14: nop

    // 0x800F0E18: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
    // 0x800F0E1C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F0E20: nop

    // 0x800F0E24: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800F0E28: nop

    // 0x800F0E2C: bne         $t3, $zero, L_800F0F70
    if (ctx->r11 != 0) {
        // 0x800F0E30: nop
    
            goto L_800F0F70;
    }
    // 0x800F0E30: nop

    // 0x800F0E34: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F0E38: nop

    // 0x800F0E3C: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800F0E40: nop

    // 0x800F0E44: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800F0E48: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800F0E4C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F0E50: nop

    // 0x800F0E54: lh          $t8, 0xA4($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA4);
    // 0x800F0E58: nop

    // 0x800F0E5C: sh          $t8, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r24;
    // 0x800F0E60: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800F0E64: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F0E68: nop

    // 0x800F0E6C: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x800F0E70: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F0E74: nop

    // 0x800F0E78: lwc1        $f6, 0x2C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800F0E7C: nop

    // 0x800F0E80: swc1        $f6, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f6.u32l;
    // 0x800F0E84: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800F0E88: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F0E8C: nop

    // 0x800F0E90: swc1        $f8, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f8.u32l;
    // 0x800F0E94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0E98: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800F0E9C: addiu       $t2, $t2, -0x6A88
    ctx->r10 = ADD32(ctx->r10, -0X6A88);
    // 0x800F0EA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0EA4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800F0EA8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800F0EAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F0EB0: jal         0x8001C0EC
    // 0x800F0EB4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800F0EB4: addiu       $a3, $zero, 0x84
    ctx->r7 = ADD32(0, 0X84);
    after_0:
    // 0x800F0EB8: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x800F0EBC: addiu       $t3, $t3, -0x69AC
    ctx->r11 = ADD32(ctx->r11, -0X69AC);
    // 0x800F0EC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F0EC4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800F0EC8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F0ECC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800F0ED0: jal         0x8001C0EC
    // 0x800F0ED4: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800F0ED4: addiu       $a3, $zero, 0x86
    ctx->r7 = ADD32(0, 0X86);
    after_1:
    // 0x800F0ED8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F0EDC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F0EE0: addiu       $a3, $a3, -0x6A30
    ctx->r7 = ADD32(ctx->r7, -0X6A30);
    // 0x800F0EE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F0EE8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800F0EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F0EF0: jal         0x8001ABF4
    // 0x800F0EF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800F0EF4: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_2:
    // 0x800F0EF8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F0EFC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F0F00: addiu       $a3, $a3, -0x6954
    ctx->r7 = ADD32(ctx->r7, -0X6954);
    // 0x800F0F04: lh          $a0, 0xE8($t5)
    ctx->r4 = MEM_H(ctx->r13, 0XE8);
    // 0x800F0F08: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800F0F0C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800F0F10: jal         0x8001ABF4
    // 0x800F0F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800F0F14: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800F0F18: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F0F1C: lui         $at, 0x4416
    ctx->r1 = S32(0X4416 << 16);
    // 0x800F0F20: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800F0F24: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800F0F28: nop

    // 0x800F0F2C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800F0F30: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800F0F34: nop

    // 0x800F0F38: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800F0F3C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800F0F40: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800F0F44: nop

    // 0x800F0F48: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800F0F4C: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x800F0F50: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800F0F54: sh          $t8, 0xBE($t6)
    MEM_H(0XBE, ctx->r14) = ctx->r24;
    // 0x800F0F58: nop

    // 0x800F0F5C: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800F0F60: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800F0F64: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F0F68: nop

    // 0x800F0F6C: swc1        $f6, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f6.u32l;
L_800F0F70:
    // 0x800F0F70: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F0F74: nop

    // 0x800F0F78: lh          $t0, 0xBE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBE);
    // 0x800F0F7C: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800F0F80: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x800F0F84: nop

    // 0x800F0F88: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x800F0F8C: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x800F0F90: nop

    // 0x800F0F94: bc1f        L_800F0FF0
    if (!c1cs) {
        // 0x800F0F98: nop
    
            goto L_800F0FF0;
    }
    // 0x800F0F98: nop

    // 0x800F0F9C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800F0FA0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800F0FA4: nop

    // 0x800F0FA8: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x800F0FAC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F0FB0: nop

    // 0x800F0FB4: lh          $t3, 0xBE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XBE);
    // 0x800F0FB8: nop

    // 0x800F0FBC: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x800F0FC0: nop

    // 0x800F0FC4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F0FC8: swc1        $f6, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f6.u32l;
    // 0x800F0FCC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F0FD0: nop

    // 0x800F0FD4: sh          $zero, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = 0;
    // 0x800F0FD8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F0FDC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800F0FE0: sh          $t4, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r12;
    // 0x800F0FE4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F0FE8: b           L_800F1024
    // 0x800F0FEC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
        goto L_800F1024;
    // 0x800F0FEC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_800F0FF0:
    // 0x800F0FF0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800F0FF4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F0FF8: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800F0FFC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F1000: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800F1004: lwc1        $f8, 0x28($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X28);
    // 0x800F1008: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F100C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F1010: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x800F1014: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F1018: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F101C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800F1020: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
L_800F1024:
    // 0x800F1024: b           L_800F102C
    // 0x800F1028: nop

        goto L_800F102C;
    // 0x800F1028: nop

L_800F102C:
    // 0x800F102C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F1030: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F1034: jr          $ra
    // 0x800F1038: nop

    return;
    // 0x800F1038: nop

;}
RECOMP_FUNC void func_800F5298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F5298: jr          $ra
    // 0x800F529C: nop

    return;
    // 0x800F529C: nop

    // 0x800F52A0: jr          $ra
    // 0x800F52A4: nop

    return;
    // 0x800F52A4: nop

;}
RECOMP_FUNC void func_800B0298(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B0298: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B029C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B02A0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B02A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B02A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B02AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B02B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B02B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B02B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B02BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B02C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B02C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B02C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B02CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800B02D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800B02D4: nop

    // 0x800B02D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B02DC: nop

    // 0x800B02E0: bne         $t1, $zero, L_800B0330
    if (ctx->r9 != 0) {
        // 0x800B02E4: nop
    
            goto L_800B0330;
    }
    // 0x800B02E4: nop

    // 0x800B02E8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B02EC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800B02F0: nop

    // 0x800B02F4: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x800B02F8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B02FC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800B0300: nop

    // 0x800B0304: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x800B0308: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B030C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B0310: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800B0314: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800B0318: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800B031C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x800B0320: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0324: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0328: jal         0x8001BBDC
    // 0x800B032C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B032C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800B0330:
    // 0x800B0330: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800B0334: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B0338: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x800B033C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0340: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x800B0344: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800B0348: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800B034C: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800B0350: jal         0x8001BB34
    // 0x800B0354: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800B0354: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x800B0358: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B035C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0360: jal         0x80029C40
    // 0x800B0364: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800B0364: nop

    after_2:
    // 0x800B0368: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B036C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B0370: jal         0x80029D04
    // 0x800B0374: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800B0374: nop

    after_3:
    // 0x800B0378: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800B037C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B0380: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x800B0384: nop

    // 0x800B0388: bne         $t2, $at, L_800B03C8
    if (ctx->r10 != ctx->r1) {
        // 0x800B038C: nop
    
            goto L_800B03C8;
    }
    // 0x800B038C: nop

    // 0x800B0390: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800B0394: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x800B0398: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x800B039C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800B03A0: nop

    // 0x800B03A4: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x800B03A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B03AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B03B0: jal         0x8001BBDC
    // 0x800B03B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x800B03B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800B03B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B03BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B03C0: jal         0x8001BB34
    // 0x800B03C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x800B03C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_800B03C8:
    // 0x800B03C8: b           L_800B03D0
    // 0x800B03CC: nop

        goto L_800B03D0;
    // 0x800B03CC: nop

L_800B03D0:
    // 0x800B03D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B03D4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B03D8: jr          $ra
    // 0x800B03DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B03DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800641E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800641E4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800641E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800641EC: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800641F0: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x800641F4: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x800641F8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800641FC: nop

    // 0x80064200: bne         $t6, $zero, L_80064210
    if (ctx->r14 != 0) {
        // 0x80064204: nop
    
            goto L_80064210;
    }
    // 0x80064204: nop

    // 0x80064208: b           L_800642C4
    // 0x8006420C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_800642C4;
    // 0x8006420C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80064210:
    // 0x80064210: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80064214: nop

    // 0x80064218: addiu       $t8, $t7, 0xA
    ctx->r24 = ADD32(ctx->r15, 0XA);
    // 0x8006421C: sw          $t8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r24;
    // 0x80064220: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80064224: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80064228: lh          $t0, 0x0($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X0);
    // 0x8006422C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80064230: beq         $t0, $at, L_800642BC
    if (ctx->r8 == ctx->r1) {
        // 0x80064234: nop
    
            goto L_800642BC;
    }
    // 0x80064234: nop

L_80064238:
    // 0x80064238: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x8006423C: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x80064240: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x80064244: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80064248: lh          $a1, 0x2A($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X2A);
    // 0x8006424C: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80064250: addu        $a0, $t1, $t3
    ctx->r4 = ADD32(ctx->r9, ctx->r11);
    // 0x80064254: bgez        $t5, L_80064268
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80064258: andi        $a2, $t5, 0x1F
        ctx->r6 = ctx->r13 & 0X1F;
            goto L_80064268;
    }
    // 0x80064258: andi        $a2, $t5, 0x1F
    ctx->r6 = ctx->r13 & 0X1F;
    // 0x8006425C: beq         $a2, $zero, L_80064268
    if (ctx->r6 == 0) {
        // 0x80064260: nop
    
            goto L_80064268;
    }
    // 0x80064260: nop

    // 0x80064264: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_80064268:
    // 0x80064268: sll         $t6, $a2, 3
    ctx->r14 = S32(ctx->r6 << 3);
    // 0x8006426C: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80064270: bgez        $t5, L_80064280
    if (SIGNED(ctx->r13) >= 0) {
        // 0x80064274: sra         $a3, $t5, 5
        ctx->r7 = S32(SIGNED(ctx->r13) >> 5);
            goto L_80064280;
    }
    // 0x80064274: sra         $a3, $t5, 5
    ctx->r7 = S32(SIGNED(ctx->r13) >> 5);
    // 0x80064278: addiu       $at, $t5, 0x1F
    ctx->r1 = ADD32(ctx->r13, 0X1F);
    // 0x8006427C: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_80064280:
    // 0x80064280: sll         $t7, $a3, 4
    ctx->r15 = S32(ctx->r7 << 4);
    // 0x80064284: jal         0x8006389C
    // 0x80064288: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    func_8006389C(rdram, ctx);
        goto after_0;
    // 0x80064288: or          $a3, $t7, $zero
    ctx->r7 = ctx->r15 | 0;
    after_0:
    // 0x8006428C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80064290: nop

    // 0x80064294: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x80064298: sw          $t9, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r25;
    // 0x8006429C: lh          $t0, 0x1E($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1E);
    // 0x800642A0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800642A4: addiu       $t2, $t0, 0x1
    ctx->r10 = ADD32(ctx->r8, 0X1);
    // 0x800642A8: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    // 0x800642AC: lh          $t3, 0x0($t1)
    ctx->r11 = MEM_H(ctx->r9, 0X0);
    // 0x800642B0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800642B4: bne         $t3, $at, L_80064238
    if (ctx->r11 != ctx->r1) {
        // 0x800642B8: nop
    
            goto L_80064238;
    }
    // 0x800642B8: nop

L_800642BC:
    // 0x800642BC: b           L_800642C4
    // 0x800642C0: nop

        goto L_800642C4;
    // 0x800642C0: nop

L_800642C4:
    // 0x800642C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800642C8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800642CC: jr          $ra
    // 0x800642D0: nop

    return;
    // 0x800642D0: nop

;}
RECOMP_FUNC void func_800C3F00(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C3F00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C3F04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C3F08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C3F0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C3F10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C3F14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C3F18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3F1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C3F20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C3F24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C3F28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C3F2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C3F30: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C3F34: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C3F38: nop

    // 0x800C3F3C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C3F40: nop

    // 0x800C3F44: bne         $t1, $zero, L_800C3FE0
    if (ctx->r9 != 0) {
        // 0x800C3F48: nop
    
            goto L_800C3FE0;
    }
    // 0x800C3F48: nop

    // 0x800C3F4C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C3F50: nop

    // 0x800C3F54: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C3F58: nop

    // 0x800C3F5C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C3F60: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C3F64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C3F68: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C3F6C: nop

    // 0x800C3F70: swc1        $f4, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f4.u32l;
    // 0x800C3F74: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C3F78: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C3F7C: nop

    // 0x800C3F80: swc1        $f6, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f6.u32l;
    // 0x800C3F84: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C3F88: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C3F8C: nop

    // 0x800C3F90: swc1        $f8, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f8.u32l;
    // 0x800C3F94: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C3F98: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800C3F9C: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x800C3FA0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3FA4: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x800C3FA8: addiu       $t0, $t0, -0x7EF8
    ctx->r8 = ADD32(ctx->r8, -0X7EF8);
    // 0x800C3FAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3FB0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800C3FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3FB8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800C3FBC: jal         0x8001C0EC
    // 0x800C3FC0: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800C3FC0: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x800C3FC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C3FC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C3FCC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800C3FD0: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x800C3FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C3FD8: jal         0x8001ABF4
    // 0x800C3FDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800C3FDC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800C3FE0:
    // 0x800C3FE0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C3FE4: nop

    // 0x800C3FE8: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x800C3FEC: nop

    // 0x800C3FF0: bne         $t3, $zero, L_800C4010
    if (ctx->r11 != 0) {
        // 0x800C3FF4: nop
    
            goto L_800C4010;
    }
    // 0x800C3FF4: nop

    // 0x800C3FF8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C3FFC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800C4000: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800C4004: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C4008: nop

    // 0x800C400C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800C4010:
    // 0x800C4010: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C4014: nop

    // 0x800C4018: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800C401C: nop

    // 0x800C4020: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x800C4024: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
    // 0x800C4028: b           L_800C4030
    // 0x800C402C: nop

        goto L_800C4030;
    // 0x800C402C: nop

L_800C4030:
    // 0x800C4030: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C4034: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C4038: jr          $ra
    // 0x800C403C: nop

    return;
    // 0x800C403C: nop

;}
RECOMP_FUNC void func_800AAC90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AAC90: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800AAC94: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AAC98: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AAC9C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AACA0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AACA4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AACA8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AACAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AACB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AACB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AACB8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AACBC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AACC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AACC4: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800AACC8: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AACCC: nop

    // 0x800AACD0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AACD4: nop

    // 0x800AACD8: bne         $t1, $zero, L_800AAD4C
    if (ctx->r9 != 0) {
        // 0x800AACDC: nop
    
            goto L_800AAD4C;
    }
    // 0x800AACDC: nop

    // 0x800AACE0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AACE4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AACE8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AACEC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800AACF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AACF4: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800AACF8: nop

    // 0x800AACFC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AAD00: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AAD04: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAD08: nop

    // 0x800AAD0C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AAD10: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAD14: addiu       $t6, $zero, 0x21C
    ctx->r14 = ADD32(0, 0X21C);
    // 0x800AAD18: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800AAD1C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAD20: nop

    // 0x800AAD24: sh          $zero, 0xB2($t8)
    MEM_H(0XB2, ctx->r24) = 0;
    // 0x800AAD28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAD2C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x800AAD30: addiu       $t9, $t9, 0x75D0
    ctx->r25 = ADD32(ctx->r25, 0X75D0);
    // 0x800AAD34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAD38: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800AAD3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AAD40: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800AAD44: jal         0x8001C0EC
    // 0x800AAD48: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800AAD48: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
L_800AAD4C:
    // 0x800AAD4C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAD50: nop

    // 0x800AAD54: lh          $t1, 0xB2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB2);
    // 0x800AAD58: nop

    // 0x800AAD5C: andi        $t2, $t1, 0x3F
    ctx->r10 = ctx->r9 & 0X3F;
    // 0x800AAD60: bne         $t2, $zero, L_800AAD84
    if (ctx->r10 != 0) {
        // 0x800AAD64: nop
    
            goto L_800AAD84;
    }
    // 0x800AAD64: nop

    // 0x800AAD68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAD6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAD70: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AAD74: addiu       $a2, $zero, 0x33
    ctx->r6 = ADD32(0, 0X33);
    // 0x800AAD78: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AAD7C: jal         0x800175F0
    // 0x800AAD80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800AAD80: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800AAD84:
    // 0x800AAD84: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAD88: nop

    // 0x800AAD8C: lh          $t4, 0xB2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB2);
    // 0x800AAD90: nop

    // 0x800AAD94: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x800AAD98: sh          $t5, 0xB2($t3)
    MEM_H(0XB2, ctx->r11) = ctx->r13;
    // 0x800AAD9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AADA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AADA4: jal         0x80028FA0
    // 0x800AADA8: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800AADA8: nop

    after_2:
    // 0x800AADAC: beq         $v0, $zero, L_800AADC4
    if (ctx->r2 == 0) {
        // 0x800AADB0: nop
    
            goto L_800AADC4;
    }
    // 0x800AADB0: nop

    // 0x800AADB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AADB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AADBC: jal         0x80029B60
    // 0x800AADC0: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800AADC0: nop

    after_3:
L_800AADC4:
    // 0x800AADC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AADC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AADCC: jal         0x80029C40
    // 0x800AADD0: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800AADD0: nop

    after_4:
    // 0x800AADD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AADD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AADDC: jal         0x80029D04
    // 0x800AADE0: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800AADE0: nop

    after_5:
    // 0x800AADE4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800AADE8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AADEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AADF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AADF4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x800AADF8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800AADFC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800AAE00: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800AAE04: jal         0x80029018
    // 0x800AAE08: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800AAE08: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x800AAE0C: beq         $v0, $zero, L_800AAE30
    if (ctx->r2 == 0) {
        // 0x800AAE10: nop
    
            goto L_800AAE30;
    }
    // 0x800AAE10: nop

    // 0x800AAE14: jal         0x800297DC
    // 0x800AAE18: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800AAE18: nop

    after_7:
    // 0x800AAE1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAE20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAE24: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800AAE28: jal         0x80029824
    // 0x800AAE2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800AAE2C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
L_800AAE30:
    // 0x800AAE30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AAE34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AAE38: jal         0x8002A1FC
    // 0x800AAE3C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_9;
    // 0x800AAE3C: lui         $a1, 0x4370
    ctx->r5 = S32(0X4370 << 16);
    after_9:
    // 0x800AAE40: beq         $v0, $zero, L_800AAE60
    if (ctx->r2 == 0) {
        // 0x800AAE44: nop
    
            goto L_800AAE60;
    }
    // 0x800AAE44: nop

    // 0x800AAE48: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAE4C: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x800AAE50: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800AAE54: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAE58: nop

    // 0x800AAE5C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800AAE60:
    // 0x800AAE60: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAE64: nop

    // 0x800AAE68: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800AAE6C: nop

    // 0x800AAE70: swc1        $f16, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f16.u32l;
    // 0x800AAE74: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAE78: nop

    // 0x800AAE7C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800AAE80: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x800AAE84: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800AAE88: nop

    // 0x800AAE8C: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800AAE90: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800AAE94: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x800AAE98: nop

    // 0x800AAE9C: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x800AAEA0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800AAEA4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800AAEA8: nop

    // 0x800AAEAC: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800AAEB0: mfc1        $t4, $f10
    ctx->r12 = (int32_t)ctx->f10.u32l;
    // 0x800AAEB4: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x800AAEB8: sh          $t4, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r12;
    // 0x800AAEBC: nop

    // 0x800AAEC0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAEC4: nop

    // 0x800AAEC8: lh          $t3, 0xA6($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XA6);
    // 0x800AAECC: nop

    // 0x800AAED0: bgtz        $t3, L_800AAEF0
    if (SIGNED(ctx->r11) > 0) {
        // 0x800AAED4: nop
    
            goto L_800AAEF0;
    }
    // 0x800AAED4: nop

    // 0x800AAED8: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAEDC: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800AAEE0: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800AAEE4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800AAEE8: nop

    // 0x800AAEEC: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800AAEF0:
    // 0x800AAEF0: b           L_800AAEF8
    // 0x800AAEF4: nop

        goto L_800AAEF8;
    // 0x800AAEF4: nop

L_800AAEF8:
    // 0x800AAEF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AAEFC: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AAF00: jr          $ra
    // 0x800AAF04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800AAF04: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800C9970(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C9970: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800C9974: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9978: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C997C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C9980: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C9984: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9988: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C998C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9990: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9994: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9998: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C999C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C99A0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800C99A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C99A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C99AC: jal         0x8002B0E4
    // 0x800C99B0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800C99B0: nop

    after_0:
    // 0x800C99B4: b           L_800C99BC
    // 0x800C99B8: nop

        goto L_800C99BC;
    // 0x800C99B8: nop

L_800C99BC:
    // 0x800C99BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C99C0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800C99C4: jr          $ra
    // 0x800C99C8: nop

    return;
    // 0x800C99C8: nop

;}
RECOMP_FUNC void func_800D4430(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D4430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D4434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D4438: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D443C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D4440: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D4444: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D444C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D4450: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4454: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D4458: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D445C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D4460: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800D4464: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4468: nop

    // 0x800D446C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D4470: nop

    // 0x800D4474: bne         $t1, $zero, L_800D44CC
    if (ctx->r9 != 0) {
        // 0x800D4478: nop
    
            goto L_800D44CC;
    }
    // 0x800D4478: nop

    // 0x800D447C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4480: nop

    // 0x800D4484: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D4488: nop

    // 0x800D448C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D4490: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D4494: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4498: nop

    // 0x800D449C: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800D44A0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800D44A4: nop

    // 0x800D44A8: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800D44AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D44B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D44B4: jal         0x8001BB34
    // 0x800D44B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800D44B8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800D44BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D44C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D44C4: jal         0x8001BBDC
    // 0x800D44C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D44C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800D44CC:
    // 0x800D44CC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800D44D0: nop

    // 0x800D44D4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800D44D8: nop

    // 0x800D44DC: slti        $at, $t8, 0x2E
    ctx->r1 = SIGNED(ctx->r24) < 0X2E ? 1 : 0;
    // 0x800D44E0: bne         $at, $zero, L_800D4500
    if (ctx->r1 != 0) {
        // 0x800D44E4: nop
    
            goto L_800D4500;
    }
    // 0x800D44E4: nop

    // 0x800D44E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D44EC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800D44F0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800D44F4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800D44F8: b           L_800D4518
    // 0x800D44FC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800D4518;
    // 0x800D44FC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800D4500:
    // 0x800D4500: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800D4504: nop

    // 0x800D4508: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800D450C: nop

    // 0x800D4510: addiu       $t2, $t4, 0x1
    ctx->r10 = ADD32(ctx->r12, 0X1);
    // 0x800D4514: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
L_800D4518:
    // 0x800D4518: b           L_800D4520
    // 0x800D451C: nop

        goto L_800D4520;
    // 0x800D451C: nop

L_800D4520:
    // 0x800D4520: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D4524: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D4528: jr          $ra
    // 0x800D452C: nop

    return;
    // 0x800D452C: nop

;}
RECOMP_FUNC void func_8007DB2C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007DB2C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8007DB30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007DB34: lh          $t6, -0x1F00($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1F00);
    // 0x8007DB38: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8007DB3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8007DB40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007DB44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007DB48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8007DB4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007DB50: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8007DB54: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8007DB58: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x8007DB5C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8007DB60: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x8007DB64: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8007DB68: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007DB6C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8007DB70: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8007DB74: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8007DB78: nop

    // 0x8007DB7C: swc1        $f4, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f4.u32l;
    // 0x8007DB80: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x8007DB84: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8007DB88: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8007DB8C: nop

    // 0x8007DB90: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
    // 0x8007DB94: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8007DB98: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8007DB9C: nop

    // 0x8007DBA0: swc1        $f8, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f8.u32l;
    // 0x8007DBA4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x8007DBA8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8007DBAC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8007DBB0: nop

    // 0x8007DBB4: swc1        $f10, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f10.u32l;
    // 0x8007DBB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8007DBBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8007DBC0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x8007DBC4: nop

    // 0x8007DBC8: swc1        $f16, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f16.u32l;
    // 0x8007DBCC: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x8007DBD0: nop

    // 0x8007DBD4: lwc1        $f12, 0x14($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8007DBD8: nop

    // 0x8007DBDC: swc1        $f12, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f12.u32l;
    // 0x8007DBE0: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x8007DBE4: nop

    // 0x8007DBE8: swc1        $f12, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f12.u32l;
    // 0x8007DBEC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007DBF0: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007DBF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007DBF8: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x8007DBFC: b           L_8007DC04
    // 0x8007DC00: nop

        goto L_8007DC04;
    // 0x8007DC00: nop

L_8007DC04:
    // 0x8007DC04: jr          $ra
    // 0x8007DC08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8007DC08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void Cutscene_RenderTextBG(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008A6A4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008A6A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8008A6AC: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8008A6B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A6B4: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8008A6B8: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8008A6BC: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    // 0x8008A6C0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A6C4: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x8008A6C8: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8008A6CC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8008A6D0: nop

    // 0x8008A6D4: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x8008A6D8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008A6DC: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8008A6E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A6E4: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8008A6E8: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8008A6EC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x8008A6F0: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8008A6F4: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x8008A6F8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8008A6FC: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8008A700: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x8008A704: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x8008A708: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8008A70C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008A710: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8008A714: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A718: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8008A71C: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8008A720: sw          $t7, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r15;
    // 0x8008A724: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8008A728: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x8008A72C: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8008A730: lw          $t2, 0x14($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X14);
    // 0x8008A734: addiu       $t1, $zero, 0x2204
    ctx->r9 = ADD32(0, 0X2204);
    // 0x8008A738: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x8008A73C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8008A740: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8008A744: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A748: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x8008A74C: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8008A750: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8008A754: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x8008A758: lui         $t5, 0xFCFF
    ctx->r13 = S32(0XFCFF << 16);
    // 0x8008A75C: ori         $t5, $t5, 0xFFFF
    ctx->r13 = ctx->r13 | 0XFFFF;
    // 0x8008A760: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x8008A764: lw          $t8, 0x10($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X10);
    // 0x8008A768: lui         $t7, 0xFFFD
    ctx->r15 = S32(0XFFFD << 16);
    // 0x8008A76C: ori         $t7, $t7, 0xF6FB
    ctx->r15 = ctx->r15 | 0XF6FB;
    // 0x8008A770: sw          $t7, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->r15;
    // 0x8008A774: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8008A778: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8008A77C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A780: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8008A784: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8008A788: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
    // 0x8008A78C: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8008A790: lui         $t1, 0xB900
    ctx->r9 = S32(0XB900 << 16);
    // 0x8008A794: ori         $t1, $t1, 0x31D
    ctx->r9 = ctx->r9 | 0X31D;
    // 0x8008A798: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8008A79C: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8008A7A0: lui         $t3, 0x50
    ctx->r11 = S32(0X50 << 16);
    // 0x8008A7A4: ori         $t3, $t3, 0x41C8
    ctx->r11 = ctx->r11 | 0X41C8;
    // 0x8008A7A8: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
    // 0x8008A7AC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8008A7B0: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8008A7B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A7B8: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8008A7BC: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8008A7C0: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x8008A7C4: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x8008A7C8: lui         $t7, 0xFA00
    ctx->r15 = S32(0XFA00 << 16);
    // 0x8008A7CC: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8008A7D0: lw          $t0, 0x8($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X8);
    // 0x8008A7D4: addiu       $t9, $zero, 0x50
    ctx->r25 = ADD32(0, 0X50);
    // 0x8008A7D8: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8008A7DC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008A7E0: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8008A7E4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008A7E8: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8008A7EC: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8008A7F0: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x8008A7F4: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8008A7F8: lui         $t3, 0xF64A
    ctx->r11 = S32(0XF64A << 16);
    // 0x8008A7FC: ori         $t3, $t3, 0x8370
    ctx->r11 = ctx->r11 | 0X8370;
    // 0x8008A800: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8008A804: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8008A808: lui         $t5, 0x6
    ctx->r13 = S32(0X6 << 16);
    // 0x8008A80C: ori         $t5, $t5, 0x2D0
    ctx->r13 = ctx->r13 | 0X2D0;
    // 0x8008A810: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x8008A814: b           L_8008A81C
    // 0x8008A818: nop

        goto L_8008A81C;
    // 0x8008A818: nop

L_8008A81C:
    // 0x8008A81C: jr          $ra
    // 0x8008A820: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8008A820: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_800D34AC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D34AC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D34B0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D34B4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D34B8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D34BC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D34C0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D34C4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D34C8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D34CC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D34D0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D34D4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D34D8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D34DC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D34E0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D34E4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D34E8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D34EC: addiu       $a1, $a1, 0x4114
    ctx->r5 = ADD32(ctx->r5, 0X4114);
    // 0x800D34F0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D34F4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D34F8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D34FC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D3500: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D3504: jal         0x80027464
    // 0x800D3508: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D3508: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D350C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800D3510: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D3514: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D3518: beq         $t1, $at, L_800D3550
    if (ctx->r9 == ctx->r1) {
        // 0x800D351C: nop
    
            goto L_800D3550;
    }
    // 0x800D351C: nop

    // 0x800D3520: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D3524: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x800D3528: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800D352C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800D3530: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x800D3534: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800D3538: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800D353C: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x800D3540: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800D3544: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D3548: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800D354C: sh          $t3, 0x420A($at)
    MEM_H(0X420A, ctx->r1) = ctx->r11;
L_800D3550:
    // 0x800D3550: b           L_800D3558
    // 0x800D3554: nop

        goto L_800D3558;
    // 0x800D3554: nop

L_800D3558:
    // 0x800D3558: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D355C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D3560: jr          $ra
    // 0x800D3564: nop

    return;
    // 0x800D3564: nop

;}
RECOMP_FUNC void func_800881D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800881D4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800881D8: lb          $t6, 0x5245($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X5245);
    // 0x800881DC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800881E0: sb          $t6, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r14;
    // 0x800881E4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800881E8: lb          $t7, 0x5240($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X5240);
    // 0x800881EC: nop

    // 0x800881F0: beq         $t7, $zero, L_80088210
    if (ctx->r15 == 0) {
        // 0x800881F4: nop
    
            goto L_80088210;
    }
    // 0x800881F4: nop

    // 0x800881F8: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800881FC: lb          $t8, 0x5240($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5240);
    // 0x80088200: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088204: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80088208: b           L_80088238
    // 0x8008820C: sb          $t9, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = ctx->r25;
        goto L_80088238;
    // 0x8008820C: sb          $t9, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = ctx->r25;
L_80088210:
    // 0x80088210: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80088214: lb          $t0, 0x523F($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X523F);
    // 0x80088218: nop

    // 0x8008821C: beq         $t0, $zero, L_80088238
    if (ctx->r8 == 0) {
        // 0x80088220: nop
    
            goto L_80088238;
    }
    // 0x80088220: nop

    // 0x80088224: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80088228: lb          $t1, 0x523F($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X523F);
    // 0x8008822C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088230: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x80088234: sb          $t2, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = ctx->r10;
L_80088238:
    // 0x80088238: jr          $ra
    // 0x8008823C: nop

    return;
    // 0x8008823C: nop

    // 0x80088240: jr          $ra
    // 0x80088244: nop

    return;
    // 0x80088244: nop

;}
RECOMP_FUNC void func_800811D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800811D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800811DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800811E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800811E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800811E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800811EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800811F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800811F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800811F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800811FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80081200: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80081204: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80081208: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8008120C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80081210: nop

    // 0x80081214: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80081218: nop

    // 0x8008121C: bne         $t1, $zero, L_8008127C
    if (ctx->r9 != 0) {
        // 0x80081220: nop
    
            goto L_8008127C;
    }
    // 0x80081220: nop

    // 0x80081224: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80081228: nop

    // 0x8008122C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80081230: nop

    // 0x80081234: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80081238: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8008123C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081240: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80081244: addiu       $t5, $t5, 0x6EE0
    ctx->r13 = ADD32(ctx->r13, 0X6EE0);
    // 0x80081248: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8008124C: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80081250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80081254: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80081258: jal         0x8001C0EC
    // 0x8008125C: addiu       $a3, $zero, 0x2A
    ctx->r7 = ADD32(0, 0X2A);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8008125C: addiu       $a3, $zero, 0x2A
    ctx->r7 = ADD32(0, 0X2A);
    after_0:
    // 0x80081260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081264: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80081268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8008126C: addiu       $a2, $zero, 0x6A
    ctx->r6 = ADD32(0, 0X6A);
    // 0x80081270: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80081274: jal         0x800175F0
    // 0x80081278: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80081278: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_8008127C:
    // 0x8008127C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80081284: jal         0x8001B44C
    // 0x80081288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80081288: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x8008128C: beq         $v0, $zero, L_800812AC
    if (ctx->r2 == 0) {
        // 0x80081290: nop
    
            goto L_800812AC;
    }
    // 0x80081290: nop

    // 0x80081294: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80081298: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8008129C: jal         0x8001A928
    // 0x800812A0: nop

    func_8001A928(rdram, ctx);
        goto after_3;
    // 0x800812A0: nop

    after_3:
    // 0x800812A4: b           L_800812C4
    // 0x800812A8: nop

        goto L_800812C4;
    // 0x800812A8: nop

L_800812AC:
    // 0x800812AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800812B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800812B4: jal         0x8001CD20
    // 0x800812B8: nop

    func_8001CD20(rdram, ctx);
        goto after_4;
    // 0x800812B8: nop

    after_4:
    // 0x800812BC: b           L_800812C4
    // 0x800812C0: nop

        goto L_800812C4;
    // 0x800812C0: nop

L_800812C4:
    // 0x800812C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800812C8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800812CC: jr          $ra
    // 0x800812D0: nop

    return;
    // 0x800812D0: nop

;}
RECOMP_FUNC void func_800CCB90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CCB90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800CCB94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CCB98: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800CCB9C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800CCBA0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CCBA4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800CCBA8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800CCBAC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800CCBB0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800CCBB4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800CCBB8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800CCBBC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800CCBC0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800CCBC4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800CCBC8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800CCBCC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800CCBD0: addiu       $a1, $a1, 0x406C
    ctx->r5 = ADD32(ctx->r5, 0X406C);
    // 0x800CCBD4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800CCBD8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800CCBDC: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x800CCBE0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800CCBE4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800CCBE8: jal         0x80027464
    // 0x800CCBEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800CCBEC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800CCBF0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800CCBF4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800CCBF8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800CCBFC: beq         $t1, $at, L_800CCCCC
    if (ctx->r9 == ctx->r1) {
        // 0x800CCC00: nop
    
            goto L_800CCCCC;
    }
    // 0x800CCC00: nop

    // 0x800CCC04: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800CCC08: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800CCC0C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800CCC10: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800CCC14: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800CCC18: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800CCC1C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800CCC20: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800CCC24: lh          $t4, 0x423A($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X423A);
    // 0x800CCC28: nop

    // 0x800CCC2C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x800CCC30: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800CCC34: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CCC38: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800CCC3C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800CCC40: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CCC44: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800CCC48: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CCC4C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CCC50: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CCC54: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x800CCC58: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800CCC5C: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800CCC60: nop

    // 0x800CCC64: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800CCC68: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
    // 0x800CCC6C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800CCC70: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800CCC74: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800CCC78: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CCC7C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800CCC80: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800CCC84: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800CCC88: lh          $t0, 0xA($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XA);
    // 0x800CCC8C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800CCC90: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCC94: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800CCC98: sh          $t0, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r8;
    // 0x800CCC9C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800CCCA0: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x800CCCA4: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800CCCA8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800CCCAC: lw          $t3, 0x5100($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5100);
    // 0x800CCCB0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CCCB4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800CCCB8: lh          $t4, 0xC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC);
    // 0x800CCCBC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CCCC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CCCC4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800CCCC8: sh          $t4, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = ctx->r12;
L_800CCCCC:
    // 0x800CCCCC: b           L_800CCCD4
    // 0x800CCCD0: nop

        goto L_800CCCD4;
    // 0x800CCCD0: nop

L_800CCCD4:
    // 0x800CCCD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CCCD8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800CCCDC: jr          $ra
    // 0x800CCCE0: nop

    return;
    // 0x800CCCE0: nop

;}
RECOMP_FUNC void func_800B7158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B7158: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B715C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B7160: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B7164: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B7168: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B716C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B7170: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7174: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B7178: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B717C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B7180: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B7184: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B7188: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800B718C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800B7190: nop

    // 0x800B7194: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800B7198: nop

    // 0x800B719C: bne         $t1, $zero, L_800B71D0
    if (ctx->r9 != 0) {
        // 0x800B71A0: nop
    
            goto L_800B71D0;
    }
    // 0x800B71A0: nop

    // 0x800B71A4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800B71A8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800B71AC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800B71B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B71B4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800B71B8: nop

    // 0x800B71BC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800B71C0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B71C4: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800B71C8: nop

    // 0x800B71CC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_800B71D0:
    // 0x800B71D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B71D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B71D8: jal         0x8002A8B4
    // 0x800B71DC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_0;
    // 0x800B71DC: lui         $a1, 0x41F0
    ctx->r5 = S32(0X41F0 << 16);
    after_0:
    // 0x800B71E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B71E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B71E8: jal         0x80029C40
    // 0x800B71EC: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x800B71EC: nop

    after_1:
    // 0x800B71F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B71F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B71F8: jal         0x80029D04
    // 0x800B71FC: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x800B71FC: nop

    after_2:
    // 0x800B7200: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B7204: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B7208: jal         0x8002A560
    // 0x800B720C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    func_8002A560(rdram, ctx);
        goto after_3;
    // 0x800B720C: lui         $a1, 0x4170
    ctx->r5 = S32(0X4170 << 16);
    after_3:
    // 0x800B7210: bne         $v0, $zero, L_800B7230
    if (ctx->r2 != 0) {
        // 0x800B7214: nop
    
            goto L_800B7230;
    }
    // 0x800B7214: nop

    // 0x800B7218: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800B721C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x800B7220: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800B7224: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800B7228: nop

    // 0x800B722C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_800B7230:
    // 0x800B7230: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B7234: nop

    // 0x800B7238: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800B723C: nop

    // 0x800B7240: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
    // 0x800B7244: b           L_800B724C
    // 0x800B7248: nop

        goto L_800B724C;
    // 0x800B7248: nop

L_800B724C:
    // 0x800B724C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B7250: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B7254: jr          $ra
    // 0x800B7258: nop

    return;
    // 0x800B7258: nop

;}
RECOMP_FUNC void func_8006A404(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006A404: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8006A408: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8006A40C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A410: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A414: jal         0x8002598C
    // 0x8006A418: nop

    func_8002598C(rdram, ctx);
        goto after_0;
    // 0x8006A418: nop

    after_0:
    // 0x8006A41C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006A420: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x8006A424: nop

    // 0x8006A428: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x8006A42C: jal         0x80069FD8
    // 0x8006A430: nop

    func_80069FD8(rdram, ctx);
        goto after_1;
    // 0x8006A430: nop

    after_1:
    // 0x8006A434: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006A438: lb          $t7, -0x1C2C($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C2C);
    // 0x8006A43C: nop

    // 0x8006A440: bne         $t7, $zero, L_8006A4E8
    if (ctx->r15 != 0) {
        // 0x8006A444: nop
    
            goto L_8006A4E8;
    }
    // 0x8006A444: nop

    // 0x8006A448: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8006A44C: lb          $a1, 0x4801($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4801);
    // 0x8006A450: jal         0x800600B8
    // 0x8006A454: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800600B8(rdram, ctx);
        goto after_2;
    // 0x8006A454: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x8006A458: beq         $v0, $zero, L_8006A4E8
    if (ctx->r2 == 0) {
        // 0x8006A45C: nop
    
            goto L_8006A4E8;
    }
    // 0x8006A45C: nop

    // 0x8006A460: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8006A464: lb          $t8, 0x4801($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4801);
    // 0x8006A468: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006A46C: bne         $t8, $at, L_8006A4A8
    if (ctx->r24 != ctx->r1) {
        // 0x8006A470: nop
    
            goto L_8006A4A8;
    }
    // 0x8006A470: nop

    // 0x8006A474: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A478: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A47C: jal         0x800253EC
    // 0x8006A480: nop

    func_800253EC(rdram, ctx);
        goto after_3;
    // 0x8006A480: nop

    after_3:
    // 0x8006A484: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8006A488: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006A48C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A490: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A494: ori         $t9, $a1, 0x4
    ctx->r25 = ctx->r5 | 0X4;
    // 0x8006A498: jal         0x80025428
    // 0x8006A49C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_80025428(rdram, ctx);
        goto after_4;
    // 0x8006A49C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_4:
    // 0x8006A4A0: b           L_8006A4E8
    // 0x8006A4A4: nop

        goto L_8006A4E8;
    // 0x8006A4A4: nop

L_8006A4A8:
    // 0x8006A4A8: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8006A4AC: lb          $t0, 0x4801($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4801);
    // 0x8006A4B0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8006A4B4: bne         $t0, $at, L_8006A4E8
    if (ctx->r8 != ctx->r1) {
        // 0x8006A4B8: nop
    
            goto L_8006A4E8;
    }
    // 0x8006A4B8: nop

    // 0x8006A4BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A4C0: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A4C4: jal         0x800253EC
    // 0x8006A4C8: nop

    func_800253EC(rdram, ctx);
        goto after_5;
    // 0x8006A4C8: nop

    after_5:
    // 0x8006A4CC: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8006A4D0: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006A4D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A4D8: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A4DC: ori         $t1, $a1, 0x1
    ctx->r9 = ctx->r5 | 0X1;
    // 0x8006A4E0: jal         0x80025428
    // 0x8006A4E4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    func_80025428(rdram, ctx);
        goto after_6;
    // 0x8006A4E4: or          $a1, $t1, $zero
    ctx->r5 = ctx->r9 | 0;
    after_6:
L_8006A4E8:
    // 0x8006A4E8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8006A4EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A4F0: sw          $t2, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r10;
    // 0x8006A4F4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_8006A4F8:
    // 0x8006A4F8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006A4FC: lw          $t4, -0x1BD8($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1BD8);
    // 0x8006A500: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8006A504: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8006A508: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8006A50C: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x8006A510: sll         $t7, $t6, 1
    ctx->r15 = S32(ctx->r14 << 1);
    // 0x8006A514: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x8006A518: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8006A51C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006A520: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006A524: lh          $t3, 0x7608($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7608);
    // 0x8006A528: lh          $t9, -0x4900($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X4900);
    // 0x8006A52C: nop

    // 0x8006A530: slt         $at, $t3, $t9
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r25) ? 1 : 0;
    // 0x8006A534: bne         $at, $zero, L_8006A544
    if (ctx->r1 != 0) {
        // 0x8006A538: nop
    
            goto L_8006A544;
    }
    // 0x8006A538: nop

    // 0x8006A53C: b           L_8006A55C
    // 0x8006A540: nop

        goto L_8006A55C;
    // 0x8006A540: nop

L_8006A544:
    // 0x8006A544: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8006A548: nop

    // 0x8006A54C: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8006A550: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8006A554: bne         $at, $zero, L_8006A4F8
    if (ctx->r1 != 0) {
        // 0x8006A558: sw          $t1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r9;
            goto L_8006A4F8;
    }
    // 0x8006A558: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_8006A55C:
    // 0x8006A55C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8006A560: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x8006A564: subu        $t6, $t4, $t2
    ctx->r14 = SUB32(ctx->r12, ctx->r10);
    // 0x8006A568: sh          $t6, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r14;
    // 0x8006A56C: jal         0x80069FD8
    // 0x8006A570: nop

    func_80069FD8(rdram, ctx);
        goto after_7;
    // 0x8006A570: nop

    after_7:
    // 0x8006A574: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8006A578: lb          $t5, 0x4801($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X4801);
    // 0x8006A57C: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8006A580: lb          $t8, 0x4802($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4802);
    // 0x8006A584: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8006A588: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8006A58C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8006A590: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8006A594: sll         $t3, $t8, 3
    ctx->r11 = S32(ctx->r24 << 3);
    // 0x8006A598: lb          $t0, 0x4803($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4803);
    // 0x8006A59C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8006A5A0: subu        $t3, $t3, $t8
    ctx->r11 = SUB32(ctx->r11, ctx->r24);
    // 0x8006A5A4: addu        $t9, $t7, $t3
    ctx->r25 = ADD32(ctx->r15, ctx->r11);
    // 0x8006A5A8: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x8006A5AC: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8006A5B0: addu        $t4, $t4, $t1
    ctx->r12 = ADD32(ctx->r12, ctx->r9);
    // 0x8006A5B4: lbu         $t4, 0x4808($t4)
    ctx->r12 = MEM_BU(ctx->r12, 0X4808);
    // 0x8006A5B8: nop

    // 0x8006A5BC: andi        $t2, $t4, 0xF
    ctx->r10 = ctx->r12 & 0XF;
    // 0x8006A5C0: sh          $t2, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = ctx->r10;
    // 0x8006A5C4: lh          $t6, 0x2C($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2C);
    // 0x8006A5C8: nop

    // 0x8006A5CC: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x8006A5D0: bne         $at, $zero, L_8006A5DC
    if (ctx->r1 != 0) {
        // 0x8006A5D4: nop
    
            goto L_8006A5DC;
    }
    // 0x8006A5D4: nop

    // 0x8006A5D8: sh          $zero, 0x2C($sp)
    MEM_H(0X2C, ctx->r29) = 0;
L_8006A5DC:
    // 0x8006A5DC: lh          $t5, 0x2C($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2C);
    // 0x8006A5E0: lh          $t8, 0x2E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X2E);
    // 0x8006A5E4: nop

    // 0x8006A5E8: slt         $at, $t8, $t5
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x8006A5EC: bne         $at, $zero, L_8006A63C
    if (ctx->r1 != 0) {
        // 0x8006A5F0: nop
    
            goto L_8006A63C;
    }
    // 0x8006A5F0: nop

    // 0x8006A5F4: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8006A5F8: lb          $t3, 0x4801($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X4801);
    // 0x8006A5FC: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8006A600: lb          $t0, 0x4802($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X4802);
    // 0x8006A604: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x8006A608: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x8006A60C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8006A610: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8006A614: sll         $t1, $t0, 3
    ctx->r9 = S32(ctx->r8 << 3);
    // 0x8006A618: lb          $t2, 0x4803($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4803);
    // 0x8006A61C: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x8006A620: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8006A624: addu        $t4, $t9, $t1
    ctx->r12 = ADD32(ctx->r25, ctx->r9);
    // 0x8006A628: lh          $t7, 0x2E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2E);
    // 0x8006A62C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006A630: addu        $t6, $t4, $t2
    ctx->r14 = ADD32(ctx->r12, ctx->r10);
    // 0x8006A634: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8006A638: sb          $t7, 0x4808($at)
    MEM_B(0X4808, ctx->r1) = ctx->r15;
L_8006A63C:
    // 0x8006A63C: jal         0x800699B0
    // 0x8006A640: nop

    func_800699B0(rdram, ctx);
        goto after_8;
    // 0x8006A640: nop

    after_8:
    // 0x8006A644: beq         $v0, $zero, L_8006A680
    if (ctx->r2 == 0) {
        // 0x8006A648: nop
    
            goto L_8006A680;
    }
    // 0x8006A648: nop

    // 0x8006A64C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A650: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A654: jal         0x800253EC
    // 0x8006A658: nop

    func_800253EC(rdram, ctx);
        goto after_9;
    // 0x8006A658: nop

    after_9:
    // 0x8006A65C: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8006A660: lbu         $a1, 0x23($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X23);
    // 0x8006A664: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A668: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A66C: ori         $t5, $a1, 0x2
    ctx->r13 = ctx->r5 | 0X2;
    // 0x8006A670: jal         0x80025428
    // 0x8006A674: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    func_80025428(rdram, ctx);
        goto after_10;
    // 0x8006A674: or          $a1, $t5, $zero
    ctx->r5 = ctx->r13 | 0;
    after_10:
    // 0x8006A678: jal         0x8006A388
    // 0x8006A67C: nop

    func_8006A388(rdram, ctx);
        goto after_11;
    // 0x8006A67C: nop

    after_11:
L_8006A680:
    // 0x8006A680: jal         0x80069FD8
    // 0x8006A684: nop

    func_80069FD8(rdram, ctx);
        goto after_12;
    // 0x8006A684: nop

    after_12:
    // 0x8006A688: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A68C: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A690: jal         0x800250A0
    // 0x8006A694: nop

    func_800250A0(rdram, ctx);
        goto after_13;
    // 0x8006A694: nop

    after_13:
    // 0x8006A698: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006A69C: lb          $t8, -0x1C2C($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C2C);
    // 0x8006A6A0: nop

    // 0x8006A6A4: bne         $t8, $zero, L_8006A7FC
    if (ctx->r24 != 0) {
        // 0x8006A6A8: nop
    
            goto L_8006A7FC;
    }
    // 0x8006A6A8: nop

    // 0x8006A6AC: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8006A6B0: lb          $a1, 0x4801($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4801);
    // 0x8006A6B4: jal         0x800600B8
    // 0x8006A6B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_800600B8(rdram, ctx);
        goto after_14;
    // 0x8006A6B8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_14:
    // 0x8006A6BC: beq         $v0, $zero, L_8006A6D0
    if (ctx->r2 == 0) {
        // 0x8006A6C0: nop
    
            goto L_8006A6D0;
    }
    // 0x8006A6C0: nop

    // 0x8006A6C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006A6C8: b           L_8006A704
    // 0x8006A6CC: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
        goto L_8006A704;
    // 0x8006A6CC: sb          $zero, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = 0;
L_8006A6D0:
    // 0x8006A6D0: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8006A6D4: lb          $a1, 0x4802($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4802);
    // 0x8006A6D8: jal         0x800600B8
    // 0x8006A6DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_800600B8(rdram, ctx);
        goto after_15;
    // 0x8006A6DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_15:
    // 0x8006A6E0: beq         $v0, $zero, L_8006A6F8
    if (ctx->r2 == 0) {
        // 0x8006A6E4: nop
    
            goto L_8006A6F8;
    }
    // 0x8006A6E4: nop

    // 0x8006A6E8: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8006A6EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006A6F0: b           L_8006A704
    // 0x8006A6F4: sb          $t3, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r11;
        goto L_8006A704;
    // 0x8006A6F4: sb          $t3, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r11;
L_8006A6F8:
    // 0x8006A6F8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8006A6FC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8006A700: sb          $t0, 0x4800($at)
    MEM_B(0X4800, ctx->r1) = ctx->r8;
L_8006A704:
    // 0x8006A704: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006A708: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x8006A70C: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x8006A710: beq         $t9, $at, L_8006A7F4
    if (ctx->r25 == ctx->r1) {
        // 0x8006A714: nop
    
            goto L_8006A7F4;
    }
    // 0x8006A714: nop

    // 0x8006A718: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006A71C: lw          $t1, -0x1BD8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1BD8);
    // 0x8006A720: nop

    // 0x8006A724: sw          $t1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r9;
    // 0x8006A728: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8006A72C: lw          $a0, -0x1BD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1BD8);
    // 0x8006A730: jal         0x8006A1F4
    // 0x8006A734: nop

    func_8006A1F4(rdram, ctx);
        goto after_16;
    // 0x8006A734: nop

    after_16:
    // 0x8006A738: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A73C: sw          $v0, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r2;
    // 0x8006A740: jal         0x80069FD8
    // 0x8006A744: nop

    func_80069FD8(rdram, ctx);
        goto after_17;
    // 0x8006A744: nop

    after_17:
    // 0x8006A748: jal         0x8006A054
    // 0x8006A74C: nop

    func_8006A054(rdram, ctx);
        goto after_18;
    // 0x8006A74C: nop

    after_18:
    // 0x8006A750: bne         $v0, $zero, L_8006A7E8
    if (ctx->r2 != 0) {
        // 0x8006A754: nop
    
            goto L_8006A7E8;
    }
    // 0x8006A754: nop

    // 0x8006A758: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x8006A75C: sb          $t4, 0x22($sp)
    MEM_B(0X22, ctx->r29) = ctx->r12;
    // 0x8006A760: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8006A764: lb          $t2, 0x4801($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4801);
    // 0x8006A768: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x8006A76C: bne         $t2, $at, L_8006A7A0
    if (ctx->r10 != ctx->r1) {
        // 0x8006A770: nop
    
            goto L_8006A7A0;
    }
    // 0x8006A770: nop

    // 0x8006A774: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A778: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A77C: jal         0x800253EC
    // 0x8006A780: nop

    func_800253EC(rdram, ctx);
        goto after_19;
    // 0x8006A780: nop

    after_19:
    // 0x8006A784: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x8006A788: lbu         $t7, 0x23($sp)
    ctx->r15 = MEM_BU(ctx->r29, 0X23);
    // 0x8006A78C: nop

    // 0x8006A790: andi        $t6, $t7, 0x2
    ctx->r14 = ctx->r15 & 0X2;
    // 0x8006A794: bne         $t6, $zero, L_8006A7A0
    if (ctx->r14 != 0) {
        // 0x8006A798: nop
    
            goto L_8006A7A0;
    }
    // 0x8006A798: nop

    // 0x8006A79C: sb          $zero, 0x22($sp)
    MEM_B(0X22, ctx->r29) = 0;
L_8006A7A0:
    // 0x8006A7A0: lb          $t5, 0x22($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X22);
    // 0x8006A7A4: nop

    // 0x8006A7A8: beq         $t5, $zero, L_8006A7E8
    if (ctx->r13 == 0) {
        // 0x8006A7AC: nop
    
            goto L_8006A7E8;
    }
    // 0x8006A7AC: nop

    // 0x8006A7B0: jal         0x8006A2BC
    // 0x8006A7B4: nop

    func_8006A2BC(rdram, ctx);
        goto after_20;
    // 0x8006A7B4: nop

    after_20:
    // 0x8006A7B8: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8006A7BC: lb          $t8, 0x4800($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X4800);
    // 0x8006A7C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8006A7C4: lui         $a1, 0x8013
    ctx->r5 = S32(0X8013 << 16);
    // 0x8006A7C8: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8006A7CC: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8006A7D0: lb          $a3, 0x4803($a3)
    ctx->r7 = MEM_B(ctx->r7, 0X4803);
    // 0x8006A7D4: lb          $a2, 0x4802($a2)
    ctx->r6 = MEM_B(ctx->r6, 0X4802);
    // 0x8006A7D8: lb          $a1, 0x4801($a1)
    ctx->r5 = MEM_B(ctx->r5, 0X4801);
    // 0x8006A7DC: lb          $a0, 0x488C($a0)
    ctx->r4 = MEM_B(ctx->r4, 0X488C);
    // 0x8006A7E0: jal         0x8002536C
    // 0x8006A7E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    func_8002536C(rdram, ctx);
        goto after_21;
    // 0x8006A7E4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    after_21:
L_8006A7E8:
    // 0x8006A7E8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8006A7EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A7F0: sw          $t3, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r11;
L_8006A7F4:
    // 0x8006A7F4: b           L_8006A864
    // 0x8006A7F8: nop

        goto L_8006A864;
    // 0x8006A7F8: nop

L_8006A7FC:
    // 0x8006A7FC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006A800: lw          $t0, -0x1BD8($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1BD8);
    // 0x8006A804: addiu       $at, $zero, 0x55
    ctx->r1 = ADD32(0, 0X55);
    // 0x8006A808: beq         $t0, $at, L_8006A864
    if (ctx->r8 == ctx->r1) {
        // 0x8006A80C: nop
    
            goto L_8006A864;
    }
    // 0x8006A80C: nop

    // 0x8006A810: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006A814: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x8006A818: nop

    // 0x8006A81C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8006A820: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8006A824: lw          $a0, -0x1BD8($a0)
    ctx->r4 = MEM_W(ctx->r4, -0X1BD8);
    // 0x8006A828: jal         0x8006A1F4
    // 0x8006A82C: nop

    func_8006A1F4(rdram, ctx);
        goto after_22;
    // 0x8006A82C: nop

    after_22:
    // 0x8006A830: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A834: sw          $v0, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r2;
    // 0x8006A838: jal         0x80069FD8
    // 0x8006A83C: nop

    func_80069FD8(rdram, ctx);
        goto after_23;
    // 0x8006A83C: nop

    after_23:
    // 0x8006A840: jal         0x8006A0E4
    // 0x8006A844: nop

    func_8006A0E4(rdram, ctx);
        goto after_24;
    // 0x8006A844: nop

    after_24:
    // 0x8006A848: bne         $v0, $zero, L_8006A858
    if (ctx->r2 != 0) {
        // 0x8006A84C: nop
    
            goto L_8006A858;
    }
    // 0x8006A84C: nop

    // 0x8006A850: jal         0x8006A2BC
    // 0x8006A854: nop

    func_8006A2BC(rdram, ctx);
        goto after_25;
    // 0x8006A854: nop

    after_25:
L_8006A858:
    // 0x8006A858: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8006A85C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006A860: sw          $t1, -0x1BD8($at)
    MEM_W(-0X1BD8, ctx->r1) = ctx->r9;
L_8006A864:
    // 0x8006A864: lh          $v0, 0x2E($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X2E);
    // 0x8006A868: nop

    // 0x8006A86C: andi        $t4, $v0, 0xF
    ctx->r12 = ctx->r2 & 0XF;
    // 0x8006A870: or          $v0, $t4, $zero
    ctx->r2 = ctx->r12 | 0;
    // 0x8006A874: andi        $t2, $v0, 0xFF
    ctx->r10 = ctx->r2 & 0XFF;
    // 0x8006A878: b           L_8006A888
    // 0x8006A87C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
        goto L_8006A888;
    // 0x8006A87C: or          $v0, $t2, $zero
    ctx->r2 = ctx->r10 | 0;
    // 0x8006A880: b           L_8006A888
    // 0x8006A884: nop

        goto L_8006A888;
    // 0x8006A884: nop

L_8006A888:
    // 0x8006A888: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8006A88C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8006A890: jr          $ra
    // 0x8006A894: nop

    return;
    // 0x8006A894: nop

;}
RECOMP_FUNC void func_800D247C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D247C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800D2480: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800D2484: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D2488: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800D248C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D2490: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D2494: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D2498: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D249C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D24A0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D24A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D24A8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D24AC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D24B0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D24B4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800D24B8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800D24BC: nop

    // 0x800D24C0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D24C4: nop

    // 0x800D24C8: bne         $t1, $zero, L_800D2510
    if (ctx->r9 != 0) {
        // 0x800D24CC: nop
    
            goto L_800D2510;
    }
    // 0x800D24CC: nop

    // 0x800D24D0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800D24D4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D24D8: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D24DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D24E0: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x800D24E4: addiu       $t4, $t4, -0x7AD0
    ctx->r12 = ADD32(ctx->r12, -0X7AD0);
    // 0x800D24E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D24EC: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x800D24F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D24F4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D24F8: jal         0x8001C0EC
    // 0x800D24FC: addiu       $a3, $zero, 0x94
    ctx->r7 = ADD32(0, 0X94);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D24FC: addiu       $a3, $zero, 0x94
    ctx->r7 = ADD32(0, 0X94);
    after_0:
    // 0x800D2500: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2504: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2508: jal         0x8001BBDC
    // 0x800D250C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D250C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800D2510:
    // 0x800D2510: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2514: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2518: jal         0x8001B62C
    // 0x800D251C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x800D251C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800D2520: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x800D2524: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D2528: nop

    // 0x800D252C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x800D2530: nop

    // 0x800D2534: bc1f        L_800D2628
    if (!c1cs) {
        // 0x800D2538: nop
    
            goto L_800D2628;
    }
    // 0x800D2538: nop

    // 0x800D253C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800D2540: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800D2544: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D2548: lwc1        $f6, 0x4($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800D254C: lwc1        $f16, 0x8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X8);
    // 0x800D2550: lw          $a2, 0x0($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X0);
    // 0x800D2554: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x800D2558: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x800D255C: lwc1        $f18, 0x1C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x800D2560: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x800D2564: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D2568: addiu       $a1, $a1, 0x40FC
    ctx->r5 = ADD32(ctx->r5, 0X40FC);
    // 0x800D256C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D2570: jal         0x80027464
    // 0x800D2574: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_3;
    // 0x800D2574: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_3:
    // 0x800D2578: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x800D257C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x800D2580: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D2584: beq         $t6, $at, L_800D2628
    if (ctx->r14 == ctx->r1) {
        // 0x800D2588: nop
    
            goto L_800D2628;
    }
    // 0x800D2588: nop

    // 0x800D258C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x800D2590: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800D2594: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D2598: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D259C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800D25A0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D25A4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800D25A8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D25AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D25B0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800D25B4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D25B8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D25BC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D25C0: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800D25C4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800D25C8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800D25CC: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800D25D0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D25D4: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x800D25D8: swc1        $f4, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f4.u32l;
    // 0x800D25DC: lwc1        $f20, 0x14($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X14);
    // 0x800D25E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D25E4: swc1        $f20, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f20.u32l;
    // 0x800D25E8: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x800D25EC: nop

    // 0x800D25F0: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800D25F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D25F8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800D25FC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800D2600: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800D2604: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x800D2608: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x800D260C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2610: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2614: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D2618: addiu       $a2, $zero, 0x5B
    ctx->r6 = ADD32(0, 0X5B);
    // 0x800D261C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D2620: jal         0x800175F0
    // 0x800D2624: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x800D2624: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
L_800D2628:
    // 0x800D2628: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D262C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2630: jal         0x8001B44C
    // 0x800D2634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x800D2634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800D2638: beq         $v0, $zero, L_800D2684
    if (ctx->r2 == 0) {
        // 0x800D263C: nop
    
            goto L_800D2684;
    }
    // 0x800D263C: nop

    // 0x800D2640: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2644: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2648: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D264C: addiu       $a2, $zero, 0x18
    ctx->r6 = ADD32(0, 0X18);
    // 0x800D2650: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D2654: jal         0x800175F0
    // 0x800D2658: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x800D2658: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x800D265C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800D2660: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x800D2664: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800D2668: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800D266C: nop

    // 0x800D2670: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800D2674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D267C: jal         0x8001BBDC
    // 0x800D2680: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_7;
    // 0x800D2680: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_7:
L_800D2684:
    // 0x800D2684: b           L_800D268C
    // 0x800D2688: nop

        goto L_800D268C;
    // 0x800D2688: nop

L_800D268C:
    // 0x800D268C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800D2690: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800D2694: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D2698: jr          $ra
    // 0x800D269C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800D269C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800901EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800901EC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800901F0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800901F4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800901F8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800901FC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80090200: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80090204: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80090208: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8009020C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80090210: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80090214: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80090218: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009021C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80090220: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80090224: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80090228: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009022C: addiu       $a1, $a1, 0x13C0
    ctx->r5 = ADD32(ctx->r5, 0X13C0);
    // 0x80090230: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80090234: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80090238: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009023C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80090240: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80090244: jal         0x80027464
    // 0x80090248: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80090248: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009024C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80090250: b           L_80090258
    // 0x80090254: nop

        goto L_80090258;
    // 0x80090254: nop

L_80090258:
    // 0x80090258: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8009025C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80090260: jr          $ra
    // 0x80090264: nop

    return;
    // 0x80090264: nop

;}
RECOMP_FUNC void func_800AE4A8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AE4A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800AE4AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800AE4B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800AE4B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800AE4B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800AE4BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800AE4C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800AE4C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AE4C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800AE4CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800AE4D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800AE4D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800AE4D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800AE4DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800AE4E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800AE4E4: nop

    // 0x800AE4E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800AE4EC: nop

    // 0x800AE4F0: bne         $t1, $zero, L_800AE614
    if (ctx->r9 != 0) {
        // 0x800AE4F4: nop
    
            goto L_800AE614;
    }
    // 0x800AE4F4: nop

    // 0x800AE4F8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800AE4FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800AE500: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800AE504: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800AE508: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800AE50C: nop

    // 0x800AE510: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800AE514: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800AE518: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800AE51C: nop

    // 0x800AE520: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800AE524: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800AE528: nop

    // 0x800AE52C: sh          $zero, 0x108($t6)
    MEM_H(0X108, ctx->r14) = 0;
    // 0x800AE530: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800AE534: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800AE538: nop

    // 0x800AE53C: swc1        $f8, 0x18($t7)
    MEM_W(0X18, ctx->r15) = ctx->f8.u32l;
    // 0x800AE540: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800AE544: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800AE548: nop

    // 0x800AE54C: swc1        $f10, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f10.u32l;
    // 0x800AE550: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800AE554: nop

    // 0x800AE558: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x800AE55C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE560: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE564: jal         0x8002A46C
    // 0x800AE568: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x800AE568: nop

    after_0:
    // 0x800AE56C: swc1        $f0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f0.u32l;
    // 0x800AE570: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800AE574: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AE578: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x800AE57C: jal         0x80015538
    // 0x800AE580: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x800AE580: nop

    after_1:
    // 0x800AE584: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800AE588: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800AE58C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800AE590: div.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f0.fl, ctx->f16.fl);
    // 0x800AE594: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800AE598: nop

    // 0x800AE59C: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800AE5A0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800AE5A4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800AE5A8: nop

    // 0x800AE5AC: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800AE5B0: mfc1        $t1, $f4
    ctx->r9 = (int32_t)ctx->f4.u32l;
    // 0x800AE5B4: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800AE5B8: sh          $t1, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r9;
    // 0x800AE5BC: nop

    // 0x800AE5C0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800AE5C4: nop

    // 0x800AE5C8: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800AE5CC: nop

    // 0x800AE5D0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800AE5D4: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800AE5D8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AE5DC: subu        $t5, $t5, $t4
    ctx->r13 = SUB32(ctx->r13, ctx->r12);
    // 0x800AE5E0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800AE5E4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800AE5E8: sll         $t5, $t5, 1
    ctx->r13 = S32(ctx->r13 << 1);
    // 0x800AE5EC: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800AE5F0: nop

    // 0x800AE5F4: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800AE5F8: swc1        $f8, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f8.u32l;
    // 0x800AE5FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE600: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE604: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800AE608: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800AE60C: jal         0x80019448
    // 0x800AE610: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x800AE610: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
L_800AE614:
    // 0x800AE614: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800AE618: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800AE61C: lh          $s0, 0xA8($t6)
    ctx->r16 = MEM_H(ctx->r14, 0XA8);
    // 0x800AE620: nop

    // 0x800AE624: beq         $s0, $at, L_800AE6B4
    if (ctx->r16 == ctx->r1) {
        // 0x800AE628: nop
    
            goto L_800AE6B4;
    }
    // 0x800AE628: nop

    // 0x800AE62C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AE630: beq         $s0, $at, L_800AE71C
    if (ctx->r16 == ctx->r1) {
        // 0x800AE634: nop
    
            goto L_800AE71C;
    }
    // 0x800AE634: nop

    // 0x800AE638: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800AE63C: beq         $s0, $at, L_800AE64C
    if (ctx->r16 == ctx->r1) {
        // 0x800AE640: nop
    
            goto L_800AE64C;
    }
    // 0x800AE640: nop

    // 0x800AE644: b           L_800AE784
    // 0x800AE648: nop

        goto L_800AE784;
    // 0x800AE648: nop

L_800AE64C:
    // 0x800AE64C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800AE650: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800AE654: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AE658: lwc1        $f12, 0x20($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X20);
    // 0x800AE65C: jal         0x80015538
    // 0x800AE660: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x800AE660: nop

    after_3:
    // 0x800AE664: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800AE668: nop

    // 0x800AE66C: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
    // 0x800AE670: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800AE674: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800AE678: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800AE67C: lwc1        $f10, 0x20($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X20);
    // 0x800AE680: nop

    // 0x800AE684: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800AE688: nop

    // 0x800AE68C: bc1f        L_800AE6A0
    if (!c1cs) {
        // 0x800AE690: nop
    
            goto L_800AE6A0;
    }
    // 0x800AE690: nop

    // 0x800AE694: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800AE698: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800AE69C: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
L_800AE6A0:
    // 0x800AE6A0: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800AE6A4: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800AE6A8: sh          $t2, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r10;
    // 0x800AE6AC: b           L_800AE7EC
    // 0x800AE6B0: nop

        goto L_800AE7EC;
    // 0x800AE6B0: nop

L_800AE6B4:
    // 0x800AE6B4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800AE6B8: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x800AE6BC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AE6C0: lwc1        $f12, 0x20($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X20);
    // 0x800AE6C4: jal         0x80015538
    // 0x800AE6C8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x800AE6C8: nop

    after_4:
    // 0x800AE6CC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800AE6D0: nop

    // 0x800AE6D4: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    // 0x800AE6D8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800AE6DC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800AE6E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800AE6E4: lwc1        $f18, 0x20($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X20);
    // 0x800AE6E8: nop

    // 0x800AE6EC: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800AE6F0: nop

    // 0x800AE6F4: bc1f        L_800AE708
    if (!c1cs) {
        // 0x800AE6F8: nop
    
            goto L_800AE708;
    }
    // 0x800AE6F8: nop

    // 0x800AE6FC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800AE700: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800AE704: sb          $t7, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r15;
L_800AE708:
    // 0x800AE708: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800AE70C: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800AE710: sh          $t9, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r25;
    // 0x800AE714: b           L_800AE7EC
    // 0x800AE718: nop

        goto L_800AE7EC;
    // 0x800AE718: nop

L_800AE71C:
    // 0x800AE71C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800AE720: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x800AE724: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AE728: lwc1        $f12, 0x18($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X18);
    // 0x800AE72C: jal         0x80015538
    // 0x800AE730: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x800AE730: nop

    after_5:
    // 0x800AE734: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800AE738: nop

    // 0x800AE73C: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
    // 0x800AE740: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800AE744: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800AE748: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800AE74C: lwc1        $f6, 0x18($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X18);
    // 0x800AE750: nop

    // 0x800AE754: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800AE758: nop

    // 0x800AE75C: bc1f        L_800AE770
    if (!c1cs) {
        // 0x800AE760: nop
    
            goto L_800AE770;
    }
    // 0x800AE760: nop

    // 0x800AE764: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800AE768: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800AE76C: sb          $t5, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r13;
L_800AE770:
    // 0x800AE770: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800AE774: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800AE778: sh          $t6, 0xAA($t7)
    MEM_H(0XAA, ctx->r15) = ctx->r14;
    // 0x800AE77C: b           L_800AE7EC
    // 0x800AE780: nop

        goto L_800AE7EC;
    // 0x800AE780: nop

L_800AE784:
    // 0x800AE784: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800AE788: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x800AE78C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800AE790: lwc1        $f12, 0x18($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X18);
    // 0x800AE794: jal         0x80015538
    // 0x800AE798: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x800AE798: nop

    after_6:
    // 0x800AE79C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800AE7A0: nop

    // 0x800AE7A4: swc1        $f0, 0x18($t9)
    MEM_W(0X18, ctx->r25) = ctx->f0.u32l;
    // 0x800AE7A8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800AE7AC: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800AE7B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800AE7B4: lwc1        $f10, 0x18($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X18);
    // 0x800AE7B8: nop

    // 0x800AE7BC: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x800AE7C0: nop

    // 0x800AE7C4: bc1f        L_800AE7D8
    if (!c1cs) {
        // 0x800AE7C8: nop
    
            goto L_800AE7D8;
    }
    // 0x800AE7C8: nop

    // 0x800AE7CC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800AE7D0: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800AE7D4: sb          $t1, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r9;
L_800AE7D8:
    // 0x800AE7D8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800AE7DC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800AE7E0: sh          $t4, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r12;
    // 0x800AE7E4: b           L_800AE7EC
    // 0x800AE7E8: nop

        goto L_800AE7EC;
    // 0x800AE7E8: nop

L_800AE7EC:
    // 0x800AE7EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE7F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE7F4: jal         0x80029C40
    // 0x800AE7F8: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x800AE7F8: nop

    after_7:
    // 0x800AE7FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE800: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE804: jal         0x80029D04
    // 0x800AE808: nop

    func_80029D04(rdram, ctx);
        goto after_8;
    // 0x800AE808: nop

    after_8:
    // 0x800AE80C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800AE810: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800AE814: lbu         $t6, 0x132($t3)
    ctx->r14 = MEM_BU(ctx->r11, 0X132);
    // 0x800AE818: nop

    // 0x800AE81C: bne         $t6, $at, L_800AE87C
    if (ctx->r14 != ctx->r1) {
        // 0x800AE820: nop
    
            goto L_800AE87C;
    }
    // 0x800AE820: nop

    // 0x800AE824: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800AE828: jal         0x800AE8A4
    // 0x800AE82C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800AE8A4(rdram, ctx);
        goto after_9;
    // 0x800AE82C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x800AE830: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800AE834: jal         0x800AE8A4
    // 0x800AE838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800AE8A4(rdram, ctx);
        goto after_10;
    // 0x800AE838: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x800AE83C: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x800AE840: jal         0x800AE8A4
    // 0x800AE844: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    func_800AE8A4(rdram, ctx);
        goto after_11;
    // 0x800AE844: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_11:
    // 0x800AE848: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800AE84C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800AE850: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800AE854: addiu       $a2, $zero, 0x34
    ctx->r6 = ADD32(0, 0X34);
    // 0x800AE858: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800AE85C: jal         0x800175F0
    // 0x800AE860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_12;
    // 0x800AE860: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_12:
    // 0x800AE864: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800AE868: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x800AE86C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800AE870: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800AE874: nop

    // 0x800AE878: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800AE87C:
    // 0x800AE87C: b           L_800AE884
    // 0x800AE880: nop

        goto L_800AE884;
    // 0x800AE880: nop

L_800AE884:
    // 0x800AE884: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800AE888: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800AE88C: jr          $ra
    // 0x800AE890: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800AE890: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800D464C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D464C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D4650: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D4654: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D4658: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D465C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D4660: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D4664: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4668: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D466C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D4670: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D4674: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D4678: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D467C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D4680: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D4684: nop

    // 0x800D4688: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D468C: nop

    // 0x800D4690: bne         $t1, $zero, L_800D46D0
    if (ctx->r9 != 0) {
        // 0x800D4694: nop
    
            goto L_800D46D0;
    }
    // 0x800D4694: nop

    // 0x800D4698: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D469C: nop

    // 0x800D46A0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D46A4: nop

    // 0x800D46A8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D46AC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D46B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D46B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D46B8: jal         0x8001BB34
    // 0x800D46BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800D46BC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800D46C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D46C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D46C8: jal         0x8001BB04
    // 0x800D46CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x800D46CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800D46D0:
    // 0x800D46D0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800D46D4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x800D46D8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D46DC: lwc1        $f6, 0x50B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X50B0);
    // 0x800D46E0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800D46E4: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x800D46E8: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800D46EC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800D46F0: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800D46F4: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x800D46F8: lui         $at, 0xC3AF
    ctx->r1 = S32(0XC3AF << 16);
    // 0x800D46FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D4700: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D4704: nop

    // 0x800D4708: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x800D470C: nop

    // 0x800D4710: bc1f        L_800D47A8
    if (!c1cs) {
        // 0x800D4714: nop
    
            goto L_800D47A8;
    }
    // 0x800D4714: nop

    // 0x800D4718: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x800D471C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D4720: nop

    // 0x800D4724: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x800D4728: nop

    // 0x800D472C: bc1f        L_800D47A8
    if (!c1cs) {
        // 0x800D4730: nop
    
            goto L_800D47A8;
    }
    // 0x800D4730: nop

    // 0x800D4734: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D4738: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800D473C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800D4740: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x800D4744: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x800D4748: nop

    // 0x800D474C: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x800D4750: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x800D4754: lui         $at, 0xC448
    ctx->r1 = S32(0XC448 << 16);
    // 0x800D4758: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D475C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800D4760: nop

    // 0x800D4764: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x800D4768: nop

    // 0x800D476C: bc1f        L_800D47A8
    if (!c1cs) {
        // 0x800D4770: nop
    
            goto L_800D47A8;
    }
    // 0x800D4770: nop

    // 0x800D4774: lui         $at, 0x4448
    ctx->r1 = S32(0X4448 << 16);
    // 0x800D4778: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800D477C: nop

    // 0x800D4780: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800D4784: nop

    // 0x800D4788: bc1f        L_800D47A8
    if (!c1cs) {
        // 0x800D478C: nop
    
            goto L_800D47A8;
    }
    // 0x800D478C: nop

    // 0x800D4790: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D4794: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800D4798: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800D479C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800D47A0: nop

    // 0x800D47A4: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800D47A8:
    // 0x800D47A8: b           L_800D47B0
    // 0x800D47AC: nop

        goto L_800D47B0;
    // 0x800D47AC: nop

L_800D47B0:
    // 0x800D47B0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D47B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D47B8: jr          $ra
    // 0x800D47BC: nop

    return;
    // 0x800D47BC: nop

;}
RECOMP_FUNC void func_800AEB8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800AEB8C: jr          $ra
    // 0x800AEB90: nop

    return;
    // 0x800AEB90: nop

    // 0x800AEB94: jr          $ra
    // 0x800AEB98: nop

    return;
    // 0x800AEB98: nop

;}
RECOMP_FUNC void func_800EBFA0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EBFA0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EBFA4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EBFA8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EBFAC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EBFB0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EBFB4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EBFB8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EBFBC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EBFC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EBFC4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EBFC8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EBFCC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EBFD0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EBFD4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EBFD8: nop

    // 0x800EBFDC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EBFE0: nop

    // 0x800EBFE4: bne         $t1, $zero, L_800EC05C
    if (ctx->r9 != 0) {
        // 0x800EBFE8: nop
    
            goto L_800EC05C;
    }
    // 0x800EBFE8: nop

    // 0x800EBFEC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EBFF0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800EBFF4: lh          $t3, 0xB2($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XB2);
    // 0x800EBFF8: nop

    // 0x800EBFFC: bne         $t3, $at, L_800EC05C
    if (ctx->r11 != ctx->r1) {
        // 0x800EC000: nop
    
            goto L_800EC05C;
    }
    // 0x800EC000: nop

    // 0x800EC004: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800EC008: nop

    // 0x800EC00C: lbu         $t5, 0x132($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X132);
    // 0x800EC010: nop

    // 0x800EC014: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x800EC018: sb          $t6, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r14;
    // 0x800EC01C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC020: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC024: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EC028: addiu       $a2, $zero, 0x3A
    ctx->r6 = ADD32(0, 0X3A);
    // 0x800EC02C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800EC030: jal         0x800175F0
    // 0x800EC034: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800EC034: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x800EC038: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC03C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800EC040: addiu       $t7, $t7, -0x6684
    ctx->r15 = ADD32(ctx->r15, -0X6684);
    // 0x800EC044: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC048: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800EC04C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EC050: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800EC054: jal         0x8001C0EC
    // 0x800EC058: addiu       $a3, $zero, 0x107
    ctx->r7 = ADD32(0, 0X107);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800EC058: addiu       $a3, $zero, 0x107
    ctx->r7 = ADD32(0, 0X107);
    after_1:
L_800EC05C:
    // 0x800EC05C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800EC060: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800EC064: lh          $t9, 0xB2($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB2);
    // 0x800EC068: nop

    // 0x800EC06C: bne         $t9, $at, L_800EC0D8
    if (ctx->r25 != ctx->r1) {
        // 0x800EC070: nop
    
            goto L_800EC0D8;
    }
    // 0x800EC070: nop

    // 0x800EC074: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800EC078: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x800EC07C: nop

    // 0x800EC080: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x800EC084: nop

    // 0x800EC088: beq         $t1, $zero, L_800EC0D8
    if (ctx->r9 == 0) {
        // 0x800EC08C: nop
    
            goto L_800EC0D8;
    }
    // 0x800EC08C: nop

    // 0x800EC090: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC098: jal         0x8002A2EC
    // 0x800EC09C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x800EC09C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    after_2:
    // 0x800EC0A0: beq         $v0, $zero, L_800EC0D8
    if (ctx->r2 == 0) {
        // 0x800EC0A4: nop
    
            goto L_800EC0D8;
    }
    // 0x800EC0A4: nop

    // 0x800EC0A8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EC0AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EC0B0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EC0B4: nop

    // 0x800EC0B8: bne         $t3, $at, L_800EC0D8
    if (ctx->r11 != ctx->r1) {
        // 0x800EC0BC: nop
    
            goto L_800EC0D8;
    }
    // 0x800EC0BC: nop

    // 0x800EC0C0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800EC0C4: nop

    // 0x800EC0C8: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x800EC0CC: nop

    // 0x800EC0D0: addiu       $t4, $t6, 0x1
    ctx->r12 = ADD32(ctx->r14, 0X1);
    // 0x800EC0D4: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
L_800EC0D8:
    // 0x800EC0D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC0DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC0E0: jal         0x8001B62C
    // 0x800EC0E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B62C(rdram, ctx);
        goto after_3;
    // 0x800EC0E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_3:
    // 0x800EC0E8: lui         $at, 0x42B0
    ctx->r1 = S32(0X42B0 << 16);
    // 0x800EC0EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EC0F0: nop

    // 0x800EC0F4: c.le.s      $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f4.fl <= ctx->f0.fl;
    // 0x800EC0F8: nop

    // 0x800EC0FC: bc1f        L_800EC12C
    if (!c1cs) {
        // 0x800EC100: nop
    
            goto L_800EC12C;
    }
    // 0x800EC100: nop

    // 0x800EC104: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EC108: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EC10C: jal         0x8001BBDC
    // 0x800EC110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x800EC110: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x800EC114: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800EC118: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800EC11C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800EC120: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800EC124: nop

    // 0x800EC128: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800EC12C:
    // 0x800EC12C: b           L_800EC134
    // 0x800EC130: nop

        goto L_800EC134;
    // 0x800EC130: nop

L_800EC134:
    // 0x800EC134: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EC138: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EC13C: jr          $ra
    // 0x800EC140: nop

    return;
    // 0x800EC140: nop

;}
RECOMP_FUNC void func_800DB620(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DB620: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800DB624: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DB628: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DB62C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DB630: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DB634: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DB638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB63C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DB640: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DB644: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DB648: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800DB64C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800DB650: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800DB654: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x800DB658: nop

    // 0x800DB65C: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800DB660: nop

    // 0x800DB664: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800DB668: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x800DB66C: beq         $at, $zero, L_800DB6F0
    if (ctx->r1 == 0) {
        // 0x800DB670: nop
    
            goto L_800DB6F0;
    }
    // 0x800DB670: nop

    // 0x800DB674: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800DB678: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800DB67C: addu        $at, $at, $t2
    gpr jr_addend_800DB688 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800DB680: lw          $t2, 0x5310($at)
    ctx->r10 = ADD32(ctx->r1, 0X5310);
    // 0x800DB684: nop

    // 0x800DB688: jr          $t2
    // 0x800DB68C: nop

    switch (jr_addend_800DB688 >> 2) {
        case 0: goto L_800DB690; break;
        case 1: goto L_800DB6A0; break;
        case 2: goto L_800DB6B0; break;
        case 3: goto L_800DB6C0; break;
        case 4: goto L_800DB6D0; break;
        case 5: goto L_800DB6E0; break;
        default: switch_error(__func__, 0x800DB688, 0x80115310);
    }
    // 0x800DB68C: nop

L_800DB690:
    // 0x800DB690: jal         0x800DAE20
    // 0x800DB694: nop

    func_800DAE20(rdram, ctx);
        goto after_0;
    // 0x800DB694: nop

    after_0:
    // 0x800DB698: b           L_800DB6F8
    // 0x800DB69C: nop

        goto L_800DB6F8;
    // 0x800DB69C: nop

L_800DB6A0:
    // 0x800DB6A0: jal         0x800DB0F8
    // 0x800DB6A4: nop

    func_800DB0F8(rdram, ctx);
        goto after_1;
    // 0x800DB6A4: nop

    after_1:
    // 0x800DB6A8: b           L_800DB6F8
    // 0x800DB6AC: nop

        goto L_800DB6F8;
    // 0x800DB6AC: nop

L_800DB6B0:
    // 0x800DB6B0: jal         0x800DB1EC
    // 0x800DB6B4: nop

    func_800DB1EC(rdram, ctx);
        goto after_2;
    // 0x800DB6B4: nop

    after_2:
    // 0x800DB6B8: b           L_800DB6F8
    // 0x800DB6BC: nop

        goto L_800DB6F8;
    // 0x800DB6BC: nop

L_800DB6C0:
    // 0x800DB6C0: jal         0x800DB3E8
    // 0x800DB6C4: nop

    func_800DB3E8(rdram, ctx);
        goto after_3;
    // 0x800DB6C4: nop

    after_3:
    // 0x800DB6C8: b           L_800DB6F8
    // 0x800DB6CC: nop

        goto L_800DB6F8;
    // 0x800DB6CC: nop

L_800DB6D0:
    // 0x800DB6D0: jal         0x800DB504
    // 0x800DB6D4: nop

    func_800DB504(rdram, ctx);
        goto after_4;
    // 0x800DB6D4: nop

    after_4:
    // 0x800DB6D8: b           L_800DB6F8
    // 0x800DB6DC: nop

        goto L_800DB6F8;
    // 0x800DB6DC: nop

L_800DB6E0:
    // 0x800DB6E0: jal         0x800DB534
    // 0x800DB6E4: nop

    func_800DB534(rdram, ctx);
        goto after_5;
    // 0x800DB6E4: nop

    after_5:
    // 0x800DB6E8: b           L_800DB6F8
    // 0x800DB6EC: nop

        goto L_800DB6F8;
    // 0x800DB6EC: nop

L_800DB6F0:
    // 0x800DB6F0: b           L_800DB6F8
    // 0x800DB6F4: nop

        goto L_800DB6F8;
    // 0x800DB6F4: nop

L_800DB6F8:
    // 0x800DB6F8: b           L_800DB700
    // 0x800DB6FC: nop

        goto L_800DB700;
    // 0x800DB6FC: nop

L_800DB700:
    // 0x800DB700: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DB704: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800DB708: jr          $ra
    // 0x800DB70C: nop

    return;
    // 0x800DB70C: nop

;}
RECOMP_FUNC void func_8008F1DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008F1DC: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8008F1E0: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8008F1E4: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8008F1E8: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8008F1EC: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8008F1F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008F1F4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008F1F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F1FC: lw          $t7, 0x4D48($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4D48);
    // 0x8008F200: nop

    // 0x8008F204: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x8008F208: lw          $t8, 0xC($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XC);
    // 0x8008F20C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8008F210: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8008F214: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008F218: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8008F21C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008F220: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8008F224: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x8008F228: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x8008F22C: lwc1        $f4, 0xD8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0XD8);
    // 0x8008F230: lwc1        $f6, 0xC($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0XC);
    // 0x8008F234: nop

    // 0x8008F238: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008F23C: swc1        $f8, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f8.u32l;
    // 0x8008F240: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8008F244: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8008F248: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8008F24C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008F250: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8008F254: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8008F258: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8008F25C: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x8008F260: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8008F264: lwc1        $f10, 0xDC($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0XDC);
    // 0x8008F268: lwc1        $f16, 0x10($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X10);
    // 0x8008F26C: nop

    // 0x8008F270: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008F274: swc1        $f18, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f18.u32l;
    // 0x8008F278: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8008F27C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8008F280: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8008F284: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F288: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8008F28C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8008F290: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8008F294: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8008F298: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8008F29C: lwc1        $f4, 0xE0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0XE0);
    // 0x8008F2A0: lwc1        $f6, 0x14($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X14);
    // 0x8008F2A4: nop

    // 0x8008F2A8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008F2AC: swc1        $f8, 0x14($t9)
    MEM_W(0X14, ctx->r25) = ctx->f8.u32l;
    // 0x8008F2B0: sh          $zero, 0x6($sp)
    MEM_H(0X6, ctx->r29) = 0;
L_8008F2B4:
    // 0x8008F2B4: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8008F2B8: lh          $t2, 0x6($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X6);
    // 0x8008F2BC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8008F2C0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008F2C4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008F2C8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8008F2CC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008F2D0: sll         $t3, $t2, 1
    ctx->r11 = S32(ctx->r10 << 1);
    // 0x8008F2D4: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8008F2D8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x8008F2DC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8008F2E0: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x8008F2E4: nop

    // 0x8008F2E8: sw          $t5, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r13;
    // 0x8008F2EC: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x8008F2F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8008F2F4: beq         $t6, $at, L_8008F3A4
    if (ctx->r14 == ctx->r1) {
        // 0x8008F2F8: nop
    
            goto L_8008F3A4;
    }
    // 0x8008F2F8: nop

    // 0x8008F2FC: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x8008F300: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8008F304: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008F308: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008F30C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008F310: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008F314: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8008F318: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8008F31C: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8008F320: lwc1        $f10, 0xD8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0XD8);
    // 0x8008F324: lwc1        $f16, 0xC($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0XC);
    // 0x8008F328: nop

    // 0x8008F32C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008F330: swc1        $f18, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f18.u32l;
    // 0x8008F334: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x8008F338: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x8008F33C: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x8008F340: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8008F344: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8008F348: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x8008F34C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8008F350: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x8008F354: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8008F358: lwc1        $f4, 0xDC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XDC);
    // 0x8008F35C: lwc1        $f6, 0x10($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X10);
    // 0x8008F360: nop

    // 0x8008F364: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8008F368: swc1        $f8, 0x10($t4)
    MEM_W(0X10, ctx->r12) = ctx->f8.u32l;
    // 0x8008F36C: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x8008F370: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8008F374: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8008F378: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008F37C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8008F380: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8008F384: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8008F388: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8008F38C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8008F390: lwc1        $f10, 0xE0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XE0);
    // 0x8008F394: lwc1        $f16, 0x14($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8008F398: nop

    // 0x8008F39C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8008F3A0: swc1        $f18, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f18.u32l;
L_8008F3A4:
    // 0x8008F3A4: lh          $t9, 0x6($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X6);
    // 0x8008F3A8: nop

    // 0x8008F3AC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x8008F3B0: sll         $t2, $t0, 16
    ctx->r10 = S32(ctx->r8 << 16);
    // 0x8008F3B4: sra         $t1, $t2, 16
    ctx->r9 = S32(SIGNED(ctx->r10) >> 16);
    // 0x8008F3B8: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x8008F3BC: bne         $at, $zero, L_8008F2B4
    if (ctx->r1 != 0) {
        // 0x8008F3C0: sh          $t0, 0x6($sp)
        MEM_H(0X6, ctx->r29) = ctx->r8;
            goto L_8008F2B4;
    }
    // 0x8008F3C0: sh          $t0, 0x6($sp)
    MEM_H(0X6, ctx->r29) = ctx->r8;
    // 0x8008F3C4: b           L_8008F3CC
    // 0x8008F3C8: nop

        goto L_8008F3CC;
    // 0x8008F3C8: nop

L_8008F3CC:
    // 0x8008F3CC: jr          $ra
    // 0x8008F3D0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8008F3D0: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_800A2AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A2AA4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800A2AA8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A2AAC: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800A2AB0: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800A2AB4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800A2AB8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800A2ABC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800A2AC0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800A2AC4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800A2AC8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800A2ACC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800A2AD0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800A2AD4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800A2AD8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800A2ADC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800A2AE0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800A2AE4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800A2AE8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800A2AEC: addiu       $a1, $a1, 0x38A4
    ctx->r5 = ADD32(ctx->r5, 0X38A4);
    // 0x800A2AF0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800A2AF4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800A2AF8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800A2AFC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800A2B00: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800A2B04: jal         0x80027464
    // 0x800A2B08: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800A2B08: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800A2B0C: sh          $v0, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r2;
    // 0x800A2B10: lh          $t1, 0x2E($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2E);
    // 0x800A2B14: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A2B18: beq         $t1, $at, L_800A2BA0
    if (ctx->r9 == ctx->r1) {
        // 0x800A2B1C: nop
    
            goto L_800A2BA0;
    }
    // 0x800A2B1C: nop

    // 0x800A2B20: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x800A2B24: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800A2B28: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A2B2C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A2B30: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A2B34: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800A2B38: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A2B3C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A2B40: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2B44: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A2B48: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800A2B4C: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x800A2B50: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x800A2B54: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800A2B58: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A2B5C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800A2B60: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800A2B64: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800A2B68: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x800A2B6C: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800A2B70: lwc1        $f20, 0xC($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800A2B74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A2B78: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x800A2B7C: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x800A2B80: nop

    // 0x800A2B84: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x800A2B88: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A2B8C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800A2B90: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x800A2B94: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800A2B98: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800A2B9C: swc1        $f20, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f20.u32l;
L_800A2BA0:
    // 0x800A2BA0: b           L_800A2BA8
    // 0x800A2BA4: nop

        goto L_800A2BA8;
    // 0x800A2BA4: nop

L_800A2BA8:
    // 0x800A2BA8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A2BAC: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800A2BB0: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800A2BB4: jr          $ra
    // 0x800A2BB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x800A2BB8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_800F84F8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F84F8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F84FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F8500: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F8504: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F8508: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F850C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F8510: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F8514: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F8518: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F851C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F8520: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F8524: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F8528: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800F852C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F8530: nop

    // 0x800F8534: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800F8538: nop

    // 0x800F853C: bne         $t1, $zero, L_800F8630
    if (ctx->r9 != 0) {
        // 0x800F8540: nop
    
            goto L_800F8630;
    }
    // 0x800F8540: nop

    // 0x800F8544: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F8548: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800F854C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800F8550: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F8554: nop

    // 0x800F8558: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x800F855C: nop

    // 0x800F8560: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
    // 0x800F8564: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F8568: nop

    // 0x800F856C: lh          $t7, 0xEA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEA);
    // 0x800F8570: nop

    // 0x800F8574: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800F8578: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x800F857C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F8580: beq         $t8, $at, L_800F85D4
    if (ctx->r24 == ctx->r1) {
        // 0x800F8584: nop
    
            goto L_800F85D4;
    }
    // 0x800F8584: nop

    // 0x800F8588: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800F858C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800F8590: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800F8594: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F8598: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800F859C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800F85A0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800F85A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F85A8: lh          $t1, 0x4254($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X4254);
    // 0x800F85AC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F85B0: beq         $t1, $at, L_800F85D4
    if (ctx->r9 == ctx->r1) {
        // 0x800F85B4: nop
    
            goto L_800F85D4;
    }
    // 0x800F85B4: nop

    // 0x800F85B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F85BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F85C0: jal         0x800281A4
    // 0x800F85C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800F85C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800F85C8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800F85CC: jal         0x8002B0E4
    // 0x800F85D0: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x800F85D0: nop

    after_1:
L_800F85D4:
    // 0x800F85D4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800F85D8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F85DC: beq         $t2, $at, L_800F8630
    if (ctx->r10 == ctx->r1) {
        // 0x800F85E0: nop
    
            goto L_800F8630;
    }
    // 0x800F85E0: nop

    // 0x800F85E4: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800F85E8: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800F85EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800F85F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F85F4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800F85F8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800F85FC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800F8600: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800F8604: lh          $t5, 0x4254($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4254);
    // 0x800F8608: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F860C: beq         $t5, $at, L_800F8630
    if (ctx->r13 == ctx->r1) {
        // 0x800F8610: nop
    
            goto L_800F8630;
    }
    // 0x800F8610: nop

    // 0x800F8614: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F8618: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F861C: jal         0x800281A4
    // 0x800F8620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_2;
    // 0x800F8620: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_2:
    // 0x800F8624: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800F8628: jal         0x8002B0E4
    // 0x800F862C: nop

    func_8002B0E4(rdram, ctx);
        goto after_3;
    // 0x800F862C: nop

    after_3:
L_800F8630:
    // 0x800F8630: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F8634: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800F8638: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800F863C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F8640: nop

    // 0x800F8644: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800F8648: b           L_800F8650
    // 0x800F864C: nop

        goto L_800F8650;
    // 0x800F864C: nop

L_800F8650:
    // 0x800F8650: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F8654: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F8658: jr          $ra
    // 0x800F865C: nop

    return;
    // 0x800F865C: nop

;}
RECOMP_FUNC void func_8008E81C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008E81C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8008E820: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008E824: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8008E828: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8008E82C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008E830: lh          $t7, 0x0($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X0);
    // 0x8008E834: nop

    // 0x8008E838: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8008E83C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8008E840: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8008E844: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8008E848: lw          $t9, 0x4D48($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4D48);
    // 0x8008E84C: nop

    // 0x8008E850: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8008E854: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8008E858: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E85C: lh          $a1, 0x2($t0)
    ctx->r5 = MEM_H(ctx->r8, 0X2);
    // 0x8008E860: jal         0x8008F710
    // 0x8008E864: nop

    func_8008F710(rdram, ctx);
        goto after_0;
    // 0x8008E864: nop

    after_0:
    // 0x8008E868: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8008E86C: lui         $a2, 0x8013
    ctx->r6 = S32(0X8013 << 16);
    // 0x8008E870: lui         $a3, 0x8013
    ctx->r7 = S32(0X8013 << 16);
    // 0x8008E874: lw          $a3, 0x4FC4($a3)
    ctx->r7 = MEM_W(ctx->r7, 0X4FC4);
    // 0x8008E878: lw          $a2, 0x4FC0($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X4FC0);
    // 0x8008E87C: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8008E880: lh          $a1, 0x4($t1)
    ctx->r5 = MEM_H(ctx->r9, 0X4);
    // 0x8008E884: jal         0x8001ABF4
    // 0x8008E888: nop

    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8008E888: nop

    after_1:
    // 0x8008E88C: b           L_8008E894
    // 0x8008E890: nop

        goto L_8008E894;
    // 0x8008E890: nop

L_8008E894:
    // 0x8008E894: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8008E898: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8008E89C: jr          $ra
    // 0x8008E8A0: nop

    return;
    // 0x8008E8A0: nop

;}
RECOMP_FUNC void func_address(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005F160: jr          $ra
    // 0x8005F164: nop

    return;
    // 0x8005F164: nop

    // 0x8005F168: jr          $ra
    // 0x8005F16C: nop

    return;
    // 0x8005F16C: nop

;}
