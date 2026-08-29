#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_803353C0_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803353C0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803353C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803353C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803353CC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803353D0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803353D4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803353D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803353DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803353E0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803353E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803353E8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803353EC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803353F0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x803353F4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803353F8: nop

    // 0x803353FC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335400: nop

    // 0x80335404: bne         $t1, $zero, L_80335458
    if (ctx->r9 != 0) {
        // 0x80335408: nop
    
            goto L_80335458;
    }
    // 0x80335408: nop

    // 0x8033540C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335410: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80335414: nop

    // 0x80335418: swc1        $f4, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f4.u32l;
    // 0x8033541C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80335420: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80335424: nop

    // 0x80335428: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
    // 0x8033542C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80335430: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80335434: nop

    // 0x80335438: swc1        $f8, 0x2C($t4)
    MEM_W(0X2C, ctx->r12) = ctx->f8.u32l;
    // 0x8033543C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335440: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335444: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335448: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x8033544C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335450: jal         0x8001ABF4
    // 0x80335454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80335454: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_80335458:
    // 0x80335458: b           L_80335460
    // 0x8033545C: nop

        goto L_80335460;
    // 0x8033545C: nop

L_80335460:
    // 0x80335460: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335464: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80335468: jr          $ra
    // 0x8033546C: nop

    return;
    // 0x8033546C: nop

;}
RECOMP_FUNC void func_80335F90_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335F90: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335F94: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335F98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335F9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335FA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335FA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335FA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335FAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335FB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335FB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335FB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335FBC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335FC0: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335FC4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335FC8: nop

    // 0x80335FCC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335FD0: nop

    // 0x80335FD4: bne         $t1, $zero, L_8033603C
    if (ctx->r9 != 0) {
        // 0x80335FD8: nop
    
            goto L_8033603C;
    }
    // 0x80335FD8: nop

    // 0x80335FDC: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335FE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80335FE4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80335FE8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80335FEC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335FF0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80335FF4: nop

    // 0x80335FF8: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80335FFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80336000: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80336004: nop

    // 0x80336008: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x8033600C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80336010: addiu       $t6, $zero, 0x258
    ctx->r14 = ADD32(0, 0X258);
    // 0x80336014: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80336018: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033601C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80336020: addiu       $t8, $t8, 0x731C
    ctx->r24 = ADD32(ctx->r24, 0X731C);
    // 0x80336024: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336028: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8033602C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336034: jal         0x8001C0EC
    // 0x80336038: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80336038: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    after_0:
L_8033603C:
    // 0x8033603C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336040: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336044: jal         0x8002A8B4
    // 0x80336048: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x80336048: lui         $a1, 0x40C0
    ctx->r5 = S32(0X40C0 << 16);
    after_1:
    // 0x8033604C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336050: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336054: jal         0x80028FA0
    // 0x80336058: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x80336058: nop

    after_2:
    // 0x8033605C: beq         $v0, $zero, L_80336074
    if (ctx->r2 == 0) {
        // 0x80336060: nop
    
            goto L_80336074;
    }
    // 0x80336060: nop

    // 0x80336064: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336068: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033606C: jal         0x80029B60
    // 0x80336070: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x80336070: nop

    after_3:
L_80336074:
    // 0x80336074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033607C: jal         0x80029C40
    // 0x80336080: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80336080: nop

    after_4:
    // 0x80336084: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336088: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033608C: jal         0x80029D04
    // 0x80336090: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x80336090: nop

    after_5:
    // 0x80336094: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80336098: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033609C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803360A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803360A4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803360A8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x803360AC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803360B0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803360B4: jal         0x80029018
    // 0x803360B8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x803360B8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x803360BC: beq         $v0, $zero, L_803360E4
    if (ctx->r2 == 0) {
        // 0x803360C0: nop
    
            goto L_803360E4;
    }
    // 0x803360C0: nop

    // 0x803360C4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803360C8: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x803360CC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803360D0: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803360D4: nop

    // 0x803360D8: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803360DC: b           L_80336178
    // 0x803360E0: nop

        goto L_80336178;
    // 0x803360E0: nop

L_803360E4:
    // 0x803360E4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x803360E8: nop

    // 0x803360EC: lwc1        $f16, 0x3C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x803360F0: nop

    // 0x803360F4: swc1        $f16, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f16.u32l;
    // 0x803360F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803360FC: nop

    // 0x80336100: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80336104: nop

    // 0x80336108: addiu       $t5, $t4, -0x6
    ctx->r13 = ADD32(ctx->r12, -0X6);
    // 0x8033610C: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x80336110: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336114: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336118: jal         0x8002A1FC
    // 0x8033611C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_7;
    // 0x8033611C: lui         $a1, 0x4334
    ctx->r5 = S32(0X4334 << 16);
    after_7:
    // 0x80336120: beq         $v0, $zero, L_80336140
    if (ctx->r2 == 0) {
        // 0x80336124: nop
    
            goto L_80336140;
    }
    // 0x80336124: nop

    // 0x80336128: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033612C: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80336130: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80336134: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80336138: nop

    // 0x8033613C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80336140:
    // 0x80336140: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336144: nop

    // 0x80336148: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x8033614C: nop

    // 0x80336150: bgtz        $t0, L_80336170
    if (SIGNED(ctx->r8) > 0) {
        // 0x80336154: nop
    
            goto L_80336170;
    }
    // 0x80336154: nop

    // 0x80336158: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033615C: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80336160: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80336164: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80336168: nop

    // 0x8033616C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80336170:
    // 0x80336170: b           L_80336178
    // 0x80336174: nop

        goto L_80336178;
    // 0x80336174: nop

L_80336178:
    // 0x80336178: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033617C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80336180: jr          $ra
    // 0x80336184: nop

    return;
    // 0x80336184: nop

;}
RECOMP_FUNC void func_80337200_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337200: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337204: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337208: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033720C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337210: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337214: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337218: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033721C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337220: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337224: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337228: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033722C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337230: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337234: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337238: nop

    // 0x8033723C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337240: nop

    // 0x80337244: bne         $t1, $zero, L_803372B8
    if (ctx->r9 != 0) {
        // 0x80337248: nop
    
            goto L_803372B8;
    }
    // 0x80337248: nop

    // 0x8033724C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80337250: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80337254: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80337258: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033725C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80337260: nop

    // 0x80337264: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80337268: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033726C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337270: nop

    // 0x80337274: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80337278: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033727C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80337280: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80337284: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337288: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x8033728C: addiu       $t8, $t8, 0x73D8
    ctx->r24 = ADD32(ctx->r24, 0X73D8);
    // 0x80337290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337294: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80337298: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033729C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803372A0: jal         0x8001C0EC
    // 0x803372A4: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803372A4: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    after_0:
    // 0x803372A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803372AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803372B0: jal         0x8001BBDC
    // 0x803372B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x803372B4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_803372B8:
    // 0x803372B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803372BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803372C0: jal         0x8002A2EC
    // 0x803372C4: lui         $a1, 0x44A5
    ctx->r5 = S32(0X44A5 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x803372C4: lui         $a1, 0x44A5
    ctx->r5 = S32(0X44A5 << 16);
    after_2:
    // 0x803372C8: beq         $v0, $zero, L_80337300
    if (ctx->r2 == 0) {
        // 0x803372CC: nop
    
            goto L_80337300;
    }
    // 0x803372CC: nop

    // 0x803372D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803372D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803372D8: jal         0x8002A3A8
    // 0x803372DC: lui         $a1, 0x44B4
    ctx->r5 = S32(0X44B4 << 16);
    func_8002A3A8(rdram, ctx);
        goto after_3;
    // 0x803372DC: lui         $a1, 0x44B4
    ctx->r5 = S32(0X44B4 << 16);
    after_3:
    // 0x803372E0: beq         $v0, $zero, L_80337300
    if (ctx->r2 == 0) {
        // 0x803372E4: nop
    
            goto L_80337300;
    }
    // 0x803372E4: nop

    // 0x803372E8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803372EC: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803372F0: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x803372F4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803372F8: nop

    // 0x803372FC: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80337300:
    // 0x80337300: b           L_80337308
    // 0x80337304: nop

        goto L_80337308;
    // 0x80337304: nop

L_80337308:
    // 0x80337308: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033730C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337310: jr          $ra
    // 0x80337314: nop

    return;
    // 0x80337314: nop

;}
RECOMP_FUNC void func_80333C54_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333C54: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80333C58: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80333C5C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80333C60: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80333C64: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80333C68: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80333C6C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80333C70: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80333C74: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80333C78: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80333C7C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80333C80: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80333C84: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80333C88: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80333C8C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80333C90: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80333C94: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80333C98: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80333C9C: addiu       $a1, $a1, 0x41D4
    ctx->r5 = ADD32(ctx->r5, 0X41D4);
    // 0x80333CA0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80333CA4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80333CA8: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80333CAC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80333CB0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80333CB4: jal         0x80027464
    // 0x80333CB8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80333CB8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80333CBC: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x80333CC0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333CC4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333CC8: beq         $t1, $at, L_80333EA8
    if (ctx->r9 == ctx->r1) {
        // 0x80333CCC: nop
    
            goto L_80333EA8;
    }
    // 0x80333CCC: nop

    // 0x80333CD0: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_80333CD4:
    // 0x80333CD4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80333CD8: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80333CDC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80333CE0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333CE4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80333CE8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80333CEC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80333CF0: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80333CF4: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x80333CF8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333CFC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80333D00: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x80333D04: nop

    // 0x80333D08: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x80333D0C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80333D10: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x80333D14: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80333D18: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333D1C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80333D20: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80333D24: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x80333D28: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80333D2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80333D30: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x80333D34: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333D38: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80333D3C: sh          $t6, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r14;
    // 0x80333D40: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80333D44: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333D48: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80333D4C: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333D50: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333D54: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333D58: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333D5C: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80333D60: lh          $t3, 0x41F6($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F6);
    // 0x80333D64: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333D68: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80333D6C: lwc1        $f9, -0x51D8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X51D8);
    // 0x80333D70: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80333D74: lwc1        $f8, -0x51D4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X51D4);
    // 0x80333D78: nop

    // 0x80333D7C: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80333D80: jal         0x80034970
    // 0x80333D84: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80333D84: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80333D88: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333D8C: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80333D90: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333D94: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333D98: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333D9C: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80333DA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333DA4: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80333DA8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333DAC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333DB0: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80333DB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333DB8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333DBC: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x80333DC0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333DC4: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x80333DC8: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80333DCC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80333DD0: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x80333DD4: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80333DD8: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333DDC: addu        $t1, $t6, $t8
    ctx->r9 = ADD32(ctx->r14, ctx->r24);
    // 0x80333DE0: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x80333DE4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80333DE8: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333DEC: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80333DF0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333DF4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333DF8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333DFC: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333E00: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80333E04: lh          $t3, 0x41F6($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F6);
    // 0x80333E08: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333E0C: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x80333E10: lwc1        $f19, -0x51D0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X51D0);
    // 0x80333E14: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80333E18: lwc1        $f18, -0x51CC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X51CC);
    // 0x80333E1C: nop

    // 0x80333E20: mul.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x80333E24: jal         0x80036570
    // 0x80333E28: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x80333E28: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x80333E2C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333E30: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80333E34: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333E38: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333E3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333E40: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80333E44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333E48: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80333E4C: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80333E50: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333E54: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80333E58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333E5C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80333E60: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80333E64: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80333E68: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333E6C: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80333E70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333E74: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333E78: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80333E7C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80333E80: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x80333E84: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x80333E88: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x80333E8C: nop

    // 0x80333E90: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80333E94: sll         $t3, $t4, 16
    ctx->r11 = S32(ctx->r12 << 16);
    // 0x80333E98: sra         $t5, $t3, 16
    ctx->r13 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80333E9C: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x80333EA0: bne         $at, $zero, L_80333CD4
    if (ctx->r1 != 0) {
        // 0x80333EA4: sh          $t4, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r12;
            goto L_80333CD4;
    }
    // 0x80333EA4: sh          $t4, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r12;
L_80333EA8:
    // 0x80333EA8: b           L_80333EB0
    // 0x80333EAC: nop

        goto L_80333EB0;
    // 0x80333EAC: nop

L_80333EB0:
    // 0x80333EB0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80333EB4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80333EB8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333EBC: jr          $ra
    // 0x80333EC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80333EC0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803352D8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803352D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803352DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803352E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803352E4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803352E8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803352EC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803352F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803352F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803352F8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803352FC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335300: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335304: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335308: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033530C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80335310: nop

    // 0x80335314: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335318: nop

    // 0x8033531C: bne         $t1, $zero, L_80335360
    if (ctx->r9 != 0) {
        // 0x80335320: nop
    
            goto L_80335360;
    }
    // 0x80335320: nop

    // 0x80335324: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335328: nop

    // 0x8033532C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335330: nop

    // 0x80335334: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335338: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033533C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335340: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335344: nop

    // 0x80335348: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x8033534C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335350: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335354: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80335358: jal         0x80029EF8
    // 0x8033535C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x8033535C: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_0:
L_80335360:
    // 0x80335360: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80335364: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80335368: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033536C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335370: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x80335374: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80335378: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x8033537C: jal         0x80029F58
    // 0x80335380: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_1;
    // 0x80335380: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_1:
    // 0x80335384: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335388: bne         $v0, $at, L_803353A8
    if (ctx->r2 != ctx->r1) {
        // 0x8033538C: nop
    
            goto L_803353A8;
    }
    // 0x8033538C: nop

    // 0x80335390: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80335394: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80335398: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x8033539C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803353A0: nop

    // 0x803353A4: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_803353A8:
    // 0x803353A8: b           L_803353B0
    // 0x803353AC: nop

        goto L_803353B0;
    // 0x803353AC: nop

L_803353B0:
    // 0x803353B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803353B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803353B8: jr          $ra
    // 0x803353BC: nop

    return;
    // 0x803353BC: nop

;}
RECOMP_FUNC void func_80338010_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338010: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338014: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338018: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033801C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338020: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338024: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338028: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033802C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338030: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338034: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338038: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033803C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338040: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x80338044: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80338048: bne         $t8, $at, L_803380C0
    if (ctx->r24 != ctx->r1) {
        // 0x8033804C: nop
    
            goto L_803380C0;
    }
    // 0x8033804C: nop

    // 0x80338050: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80338054: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80338058: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033805C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80338060: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80338064: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338068: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033806C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80338070: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x80338074: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80338078: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033807C: beq         $s0, $at, L_80338098
    if (ctx->r16 == ctx->r1) {
        // 0x80338080: nop
    
            goto L_80338098;
    }
    // 0x80338080: nop

    // 0x80338084: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80338088: beq         $s0, $at, L_803380A8
    if (ctx->r16 == ctx->r1) {
        // 0x8033808C: nop
    
            goto L_803380A8;
    }
    // 0x8033808C: nop

    // 0x80338090: b           L_803380B8
    // 0x80338094: nop

        goto L_803380B8;
    // 0x80338094: nop

L_80338098:
    // 0x80338098: jal         0x80337BC4
    // 0x8033809C: nop

    func_80337BC4_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x8033809C: nop

    after_0:
    // 0x803380A0: b           L_803380C0
    // 0x803380A4: nop

        goto L_803380C0;
    // 0x803380A4: nop

L_803380A8:
    // 0x803380A8: jal         0x80337F44
    // 0x803380AC: nop

    func_80337F44_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x803380AC: nop

    after_1:
    // 0x803380B0: b           L_803380C0
    // 0x803380B4: nop

        goto L_803380C0;
    // 0x803380B4: nop

L_803380B8:
    // 0x803380B8: b           L_803380C0
    // 0x803380BC: nop

        goto L_803380C0;
    // 0x803380BC: nop

L_803380C0:
    // 0x803380C0: b           L_803380C8
    // 0x803380C4: nop

        goto L_803380C8;
    // 0x803380C4: nop

L_803380C8:
    // 0x803380C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803380CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803380D0: jr          $ra
    // 0x803380D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803380D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033A05C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A05C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A060: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A064: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033A068: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A06C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A070: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033A074: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A078: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A07C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A080: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A084: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A088: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033A08C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033A090: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A094: beq         $s0, $at, L_8033A0B0
    if (ctx->r16 == ctx->r1) {
        // 0x8033A098: nop
    
            goto L_8033A0B0;
    }
    // 0x8033A098: nop

    // 0x8033A09C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033A0A0: beq         $s0, $at, L_8033A0C0
    if (ctx->r16 == ctx->r1) {
        // 0x8033A0A4: nop
    
            goto L_8033A0C0;
    }
    // 0x8033A0A4: nop

    // 0x8033A0A8: b           L_8033A0D0
    // 0x8033A0AC: nop

        goto L_8033A0D0;
    // 0x8033A0AC: nop

L_8033A0B0:
    // 0x8033A0B0: jal         0x803393C4
    // 0x8033A0B4: nop

    func_803393C4_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x8033A0B4: nop

    after_0:
    // 0x8033A0B8: b           L_8033A0D8
    // 0x8033A0BC: nop

        goto L_8033A0D8;
    // 0x8033A0BC: nop

L_8033A0C0:
    // 0x8033A0C0: jal         0x8033A010
    // 0x8033A0C4: nop

    func_8033A010_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x8033A0C4: nop

    after_1:
    // 0x8033A0C8: b           L_8033A0D8
    // 0x8033A0CC: nop

        goto L_8033A0D8;
    // 0x8033A0CC: nop

L_8033A0D0:
    // 0x8033A0D0: b           L_8033A0D8
    // 0x8033A0D4: nop

        goto L_8033A0D8;
    // 0x8033A0D4: nop

L_8033A0D8:
    // 0x8033A0D8: b           L_8033A0E0
    // 0x8033A0DC: nop

        goto L_8033A0E0;
    // 0x8033A0DC: nop

L_8033A0E0:
    // 0x8033A0E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A0E4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033A0E8: jr          $ra
    // 0x8033A0EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033A0EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033A4A0_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A4A0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033A4A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A4A8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A4AC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A4B0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A4B4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A4B8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A4BC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A4C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A4C4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A4C8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A4CC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A4D0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033A4D4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A4D8: nop

    // 0x8033A4DC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A4E0: nop

    // 0x8033A4E4: bne         $t1, $zero, L_8033A544
    if (ctx->r9 != 0) {
        // 0x8033A4E8: nop
    
            goto L_8033A544;
    }
    // 0x8033A4E8: nop

    // 0x8033A4EC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A4F0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033A4F4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8033A4F8: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x8033A4FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A500: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033A504: nop

    // 0x8033A508: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x8033A50C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033A510: nop

    // 0x8033A514: lwc1        $f6, 0x1C($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x8033A518: nop

    // 0x8033A51C: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x8033A520: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033A524: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x8033A528: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x8033A52C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A530: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A534: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033A538: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033A53C: jal         0x80019448
    // 0x8033A540: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_0;
    // 0x8033A540: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
L_8033A544:
    // 0x8033A544: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8033A548: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A54C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A550: jal         0x80028FA0
    // 0x8033A554: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x8033A554: nop

    after_1:
    // 0x8033A558: beq         $v0, $zero, L_8033A568
    if (ctx->r2 == 0) {
        // 0x8033A55C: nop
    
            goto L_8033A568;
    }
    // 0x8033A55C: nop

    // 0x8033A560: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8033A564: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_8033A568:
    // 0x8033A568: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033A56C: nop

    // 0x8033A570: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x8033A574: nop

    // 0x8033A578: bne         $t0, $zero, L_8033A674
    if (ctx->r8 != 0) {
        // 0x8033A57C: nop
    
            goto L_8033A674;
    }
    // 0x8033A57C: nop

    // 0x8033A580: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033A584: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8033A588: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033A58C: lwc1        $f8, 0x0($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8033A590: lwc1        $f16, 0x8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8033A594: lwc1        $f10, 0x0($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8033A598: lwc1        $f18, 0x8($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8033A59C: sub.s       $f12, $f8, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x8033A5A0: jal         0x80015634
    // 0x8033A5A4: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_2;
    // 0x8033A5A4: sub.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = ctx->f16.fl - ctx->f18.fl;
    after_2:
    // 0x8033A5A8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8033A5AC: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A5B0: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033A5B4: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8033A5B8: jal         0x800157EC
    // 0x8033A5BC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_3;
    // 0x8033A5BC: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_3:
    // 0x8033A5C0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033A5C4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033A5C8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x8033A5CC: mtc1        $t5, $f4
    ctx->f4.u32l = ctx->r13;
    // 0x8033A5D0: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x8033A5D4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8033A5D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033A5DC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033A5E0: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033A5E4: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8033A5E8: jal         0x80015538
    // 0x8033A5EC: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8033A5EC: cvt.s.d     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f14.fl = CVT_S_D(ctx->f10.d);
    after_4:
    // 0x8033A5F0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033A5F4: nop

    // 0x8033A5F8: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x8033A5FC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8033A600: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8033A604: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A608: lwc1        $f16, 0x0($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8033A60C: lwc1        $f4, 0x4($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8033A610: lwc1        $f18, 0x0($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033A614: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8033A618: sub.s       $f12, $f16, $f18
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f12.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8033A61C: jal         0x800156C4
    // 0x8033A620: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_5;
    // 0x8033A620: sub.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl - ctx->f6.fl;
    after_5:
    // 0x8033A624: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8033A628: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033A62C: jal         0x80015744
    // 0x8033A630: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_6;
    // 0x8033A630: nop

    after_6:
    // 0x8033A634: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x8033A638: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033A63C: lwc1        $f14, 0x20($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033A640: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x8033A644: jal         0x800157EC
    // 0x8033A648: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_7;
    // 0x8033A648: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_7:
    // 0x8033A64C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033A650: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033A654: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A658: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8033A65C: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x8033A660: jal         0x80015538
    // 0x8033A664: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x8033A664: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_8:
    // 0x8033A668: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033A66C: b           L_8033A68C
    // 0x8033A670: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
        goto L_8033A68C;
    // 0x8033A670: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
L_8033A674:
    // 0x8033A674: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A678: nop

    // 0x8033A67C: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x8033A680: nop

    // 0x8033A684: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x8033A688: sh          $t5, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r13;
L_8033A68C:
    // 0x8033A68C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033A690: nop

    // 0x8033A694: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x8033A698: nop

    // 0x8033A69C: swc1        $f10, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f10.u32l;
    // 0x8033A6A0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033A6A4: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8033A6A8: lwc1        $f14, 0x40($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X40);
    // 0x8033A6AC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8033A6B0: jal         0x80015538
    // 0x8033A6B4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x8033A6B4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_9:
    // 0x8033A6B8: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A6BC: nop

    // 0x8033A6C0: swc1        $f0, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f0.u32l;
    // 0x8033A6C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A6C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A6CC: jal         0x80029D8C
    // 0x8033A6D0: nop

    func_80029D8C(rdram, ctx);
        goto after_10;
    // 0x8033A6D0: nop

    after_10:
    // 0x8033A6D4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033A6D8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033A6DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A6E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A6E4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A6E8: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033A6EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033A6F0: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x8033A6F4: jal         0x80029018
    // 0x8033A6F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_11;
    // 0x8033A6F8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_11:
    // 0x8033A6FC: beq         $v0, $zero, L_8033A70C
    if (ctx->r2 == 0) {
        // 0x8033A700: nop
    
            goto L_8033A70C;
    }
    // 0x8033A700: nop

    // 0x8033A704: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x8033A708: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8033A70C:
    // 0x8033A70C: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x8033A710: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A714: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033A718: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A71C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A720: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033A724: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8033A728: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033A72C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x8033A730: jal         0x800295C0
    // 0x8033A734: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_12;
    // 0x8033A734: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_12:
    // 0x8033A738: beq         $v0, $zero, L_8033A748
    if (ctx->r2 == 0) {
        // 0x8033A73C: nop
    
            goto L_8033A748;
    }
    // 0x8033A73C: nop

    // 0x8033A740: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8033A744: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
L_8033A748:
    // 0x8033A748: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033A74C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033A750: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033A754: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A758: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A75C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033A760: addiu       $a2, $sp, 0x2C
    ctx->r6 = ADD32(ctx->r29, 0X2C);
    // 0x8033A764: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033A768: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x8033A76C: jal         0x800295C0
    // 0x8033A770: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_13;
    // 0x8033A770: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_13:
    // 0x8033A774: beq         $v0, $zero, L_8033A784
    if (ctx->r2 == 0) {
        // 0x8033A778: nop
    
            goto L_8033A784;
    }
    // 0x8033A778: nop

    // 0x8033A77C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8033A780: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_8033A784:
    // 0x8033A784: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8033A788: nop

    // 0x8033A78C: beq         $t2, $zero, L_8033A7AC
    if (ctx->r10 == 0) {
        // 0x8033A790: nop
    
            goto L_8033A7AC;
    }
    // 0x8033A790: nop

    // 0x8033A794: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033A798: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8033A79C: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x8033A7A0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A7A4: nop

    // 0x8033A7A8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033A7AC:
    // 0x8033A7AC: b           L_8033A7B4
    // 0x8033A7B0: nop

        goto L_8033A7B4;
    // 0x8033A7B0: nop

L_8033A7B4:
    // 0x8033A7B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A7B8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8033A7BC: jr          $ra
    // 0x8033A7C0: nop

    return;
    // 0x8033A7C0: nop

;}
RECOMP_FUNC void stub_80334E28(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334E1C: jr          $ra
    // 0x80334E20: nop

    return;
    // 0x80334E20: nop

    // 0x80334E24: jr          $ra
    // 0x80334E28: nop

    return;
    // 0x80334E28: nop

;}
RECOMP_FUNC void func_80337318_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337318: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033731C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337320: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337324: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337328: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033732C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337330: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337334: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337338: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033733C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337340: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80337344: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337348: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8033734C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337350: nop

    // 0x80337354: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337358: nop

    // 0x8033735C: bne         $t1, $zero, L_803373D4
    if (ctx->r9 != 0) {
        // 0x80337360: nop
    
            goto L_803373D4;
    }
    // 0x80337360: nop

    // 0x80337364: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80337368: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8033736C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80337370: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80337374: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80337378: nop

    // 0x8033737C: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80337380: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337384: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80337388: nop

    // 0x8033738C: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80337390: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80337394: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80337398: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x8033739C: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x803373A0: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x803373A4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803373A8: jal         0x80336D88
    // 0x803373AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80336D88_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x803373AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x803373B0: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x803373B4: lw          $a1, 0x7A60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X7A60);
    // 0x803373B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x803373BC: jal         0x80336D88
    // 0x803373C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_80336D88_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x803373C0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_1:
    // 0x803373C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803373C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803373CC: jal         0x8001BBDC
    // 0x803373D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_2;
    // 0x803373D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_803373D4:
    // 0x803373D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803373D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803373DC: jal         0x80029C40
    // 0x803373E0: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x803373E0: nop

    after_3:
    // 0x803373E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803373E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803373EC: jal         0x80029D04
    // 0x803373F0: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x803373F0: nop

    after_4:
    // 0x803373F4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x803373F8: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x803373FC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80337400: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337404: nop

    // 0x80337408: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
    // 0x8033740C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80337410: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80337414: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x80337418: b           L_80337420
    // 0x8033741C: nop

        goto L_80337420;
    // 0x8033741C: nop

L_80337420:
    // 0x80337420: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80337424: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80337428: jr          $ra
    // 0x8033742C: nop

    return;
    // 0x8033742C: nop

;}
RECOMP_FUNC void func_80337010_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337010: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337014: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337018: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033701C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80337020: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80337024: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80337028: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033702C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80337030: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80337034: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80337038: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033703C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80337040: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80337044: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80337048: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033704C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80337050: addiu       $a1, $a1, 0x3DCC
    ctx->r5 = ADD32(ctx->r5, 0X3DCC);
    // 0x80337054: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80337058: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033705C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80337060: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80337064: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80337068: jal         0x80027464
    // 0x8033706C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033706C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80337070: sh          $v0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r2;
    // 0x80337074: lh          $t1, 0x26($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X26);
    // 0x80337078: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033707C: beq         $t1, $at, L_80337120
    if (ctx->r9 == ctx->r1) {
        // 0x80337080: nop
    
            goto L_80337120;
    }
    // 0x80337080: nop

    // 0x80337084: lh          $t3, 0x26($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X26);
    // 0x80337088: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033708C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80337090: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80337094: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80337098: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033709C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803370A0: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803370A4: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803370A8: sh          $t2, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r10;
    // 0x803370AC: lh          $t7, 0x26($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X26);
    // 0x803370B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803370B4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803370B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803370BC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803370C0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803370C4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803370C8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803370CC: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x803370D0: sh          $t5, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r13;
    // 0x803370D4: lh          $t9, 0x26($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X26);
    // 0x803370D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803370DC: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x803370E0: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803370E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803370E8: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x803370EC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x803370F0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x803370F4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803370F8: lh          $a0, 0x26($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X26);
    // 0x803370FC: jal         0x8001BBDC
    // 0x80337100: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80337100: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80337104: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80337108: lw          $t0, 0x5100($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5100);
    // 0x8033710C: nop

    // 0x80337110: lh          $t1, 0xA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA);
    // 0x80337114: nop

    // 0x80337118: beq         $t1, $zero, L_80337120
    if (ctx->r9 == 0) {
        // 0x8033711C: nop
    
            goto L_80337120;
    }
    // 0x8033711C: nop

L_80337120:
    // 0x80337120: b           L_80337128
    // 0x80337124: nop

        goto L_80337128;
    // 0x80337124: nop

L_80337128:
    // 0x80337128: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033712C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80337130: jr          $ra
    // 0x80337134: nop

    return;
    // 0x80337134: nop

;}
RECOMP_FUNC void func_80338B78_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338B78: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80338B7C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80338B80: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338B84: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338B88: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338B8C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338B90: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338B94: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338B98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338B9C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338BA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80338BA4: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80338BA8: nop

    // 0x80338BAC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80338BB0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80338BB4: nop

    // 0x80338BB8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80338BBC: sltiu       $at, $t0, 0x6
    ctx->r1 = ctx->r8 < 0X6 ? 1 : 0;
    // 0x80338BC0: beq         $at, $zero, L_80338C44
    if (ctx->r1 == 0) {
        // 0x80338BC4: nop
    
            goto L_80338C44;
    }
    // 0x80338BC4: nop

    // 0x80338BC8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80338BCC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80338BD0: addu        $at, $at, $t0
    gpr jr_addend_80338BDC = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80338BD4: lw          $t0, -0x5158($at)
    ctx->r8 = ADD32(ctx->r1, -0X5158);
    // 0x80338BD8: nop

    // 0x80338BDC: jr          $t0
    // 0x80338BE0: nop

    switch (jr_addend_80338BDC >> 2) {
        case 0: goto L_80338BE4; break;
        case 1: goto L_80338BF4; break;
        case 2: goto L_80338C04; break;
        case 3: goto L_80338C14; break;
        case 4: goto L_80338C24; break;
        case 5: goto L_80338C34; break;
        default: switch_error(__func__, 0x80338BDC, 0x8033AEA8);
    }
    // 0x80338BE0: nop

L_80338BE4:
    // 0x80338BE4: jal         0x80338508
    // 0x80338BE8: nop

    func_80338508_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80338BE8: nop

    after_0:
    // 0x80338BEC: b           L_80338C4C
    // 0x80338BF0: nop

        goto L_80338C4C;
    // 0x80338BF0: nop

L_80338BF4:
    // 0x80338BF4: jal         0x80338754
    // 0x80338BF8: nop

    func_80338754_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x80338BF8: nop

    after_1:
    // 0x80338BFC: b           L_80338C4C
    // 0x80338C00: nop

        goto L_80338C4C;
    // 0x80338C00: nop

L_80338C04:
    // 0x80338C04: jal         0x80338B18
    // 0x80338C08: nop

    func_80338B18_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x80338C08: nop

    after_2:
    // 0x80338C0C: b           L_80338C4C
    // 0x80338C10: nop

        goto L_80338C4C;
    // 0x80338C10: nop

L_80338C14:
    // 0x80338C14: jal         0x80338B58
    // 0x80338C18: nop

    func_80338B58_unk_bin_38(rdram, ctx);
        goto after_3;
    // 0x80338C18: nop

    after_3:
    // 0x80338C1C: b           L_80338C4C
    // 0x80338C20: nop

        goto L_80338C4C;
    // 0x80338C20: nop

L_80338C24:
    // 0x80338C24: jal         0x80338B68
    // 0x80338C28: nop

    func_80338B68_unk_bin_38(rdram, ctx);
        goto after_4;
    // 0x80338C28: nop

    after_4:
    // 0x80338C2C: b           L_80338C4C
    // 0x80338C30: nop

        goto L_80338C4C;
    // 0x80338C30: nop

L_80338C34:
    // 0x80338C34: jal         0x80338350
    // 0x80338C38: nop

    func_80338350_unk_bin_38(rdram, ctx);
        goto after_5;
    // 0x80338C38: nop

    after_5:
    // 0x80338C3C: b           L_80338C4C
    // 0x80338C40: nop

        goto L_80338C4C;
    // 0x80338C40: nop

L_80338C44:
    // 0x80338C44: b           L_80338C4C
    // 0x80338C48: nop

        goto L_80338C4C;
    // 0x80338C48: nop

L_80338C4C:
    // 0x80338C4C: b           L_80338C54
    // 0x80338C50: nop

        goto L_80338C54;
    // 0x80338C50: nop

L_80338C54:
    // 0x80338C54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80338C58: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80338C5C: jr          $ra
    // 0x80338C60: nop

    return;
    // 0x80338C60: nop

;}
RECOMP_FUNC void func_803326DC_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803326DC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803326E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803326E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803326E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803326EC: jal         0x8002B0E4
    // 0x803326F0: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803326F0: nop

    after_0:
    // 0x803326F4: b           L_803326FC
    // 0x803326F8: nop

        goto L_803326FC;
    // 0x803326F8: nop

L_803326FC:
    // 0x803326FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80332700: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80332704: jr          $ra
    // 0x80332708: nop

    return;
    // 0x80332708: nop

;}
RECOMP_FUNC void func_80335F24_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335F24: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80335F28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335F2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335F30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335F34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335F38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335F3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335F40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335F44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335F48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335F4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335F50: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80335F54: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80335F58: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80335F5C: nop

    // 0x80335F60: bne         $t0, $zero, L_80335F80
    if (ctx->r8 != 0) {
        // 0x80335F64: nop
    
            goto L_80335F80;
    }
    // 0x80335F64: nop

    // 0x80335F68: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80335F6C: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x80335F70: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80335F74: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80335F78: nop

    // 0x80335F7C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80335F80:
    // 0x80335F80: b           L_80335F88
    // 0x80335F84: nop

        goto L_80335F88;
    // 0x80335F84: nop

L_80335F88:
    // 0x80335F88: jr          $ra
    // 0x80335F8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80335F8C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80330F08_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F08: jr          $ra
    // 0x80330F0C: nop

    return;
    // 0x80330F0C: nop

    // 0x80330F10: jr          $ra
    // 0x80330F14: nop

    return;
    // 0x80330F14: nop

;}
RECOMP_FUNC void func_80336188_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336188: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033618C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80336190: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336194: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336198: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033619C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803361A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803361A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803361A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803361AC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803361B0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803361B4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803361B8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803361BC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803361C0: nop

    // 0x803361C4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803361C8: nop

    // 0x803361CC: bne         $t1, $zero, L_8033625C
    if (ctx->r9 != 0) {
        // 0x803361D0: nop
    
            goto L_8033625C;
    }
    // 0x803361D0: nop

    // 0x803361D4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803361D8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803361DC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803361E0: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x803361E4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803361E8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803361EC: nop

    // 0x803361F0: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x803361F4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803361F8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803361FC: nop

    // 0x80336200: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80336204: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80336208: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8033620C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336210: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80336214: jal         0x80015538
    // 0x80336218: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80336218: nop

    after_0:
    // 0x8033621C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80336220: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80336224: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80336228: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033622C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80336230: nop

    // 0x80336234: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80336238: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8033623C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80336240: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x80336244: nop

    // 0x80336248: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8033624C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336250: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80336254: nop

    // 0x80336258: swc1        $f10, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f10.u32l;
L_8033625C:
    // 0x8033625C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336260: nop

    // 0x80336264: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x80336268: lw          $a2, 0xD4($t1)
    ctx->r6 = MEM_W(ctx->r9, 0XD4);
    // 0x8033626C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80336270: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80336274: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80336278: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x8033627C: jal         0x800BFF20
    // 0x80336280: nop

    func_800BFF20(rdram, ctx);
        goto after_1;
    // 0x80336280: nop

    after_1:
    // 0x80336284: sb          $v0, 0x23($sp)
    MEM_B(0X23, ctx->r29) = ctx->r2;
    // 0x80336288: lb          $t3, 0x23($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X23);
    // 0x8033628C: nop

    // 0x80336290: bne         $t3, $zero, L_803362B0
    if (ctx->r11 != 0) {
        // 0x80336294: nop
    
            goto L_803362B0;
    }
    // 0x80336294: nop

    // 0x80336298: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033629C: addiu       $t4, $zero, 0x5
    ctx->r12 = ADD32(0, 0X5);
    // 0x803362A0: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x803362A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803362A8: nop

    // 0x803362AC: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_803362B0:
    // 0x803362B0: lb          $t7, 0x23($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X23);
    // 0x803362B4: nop

    // 0x803362B8: beq         $t7, $zero, L_803362E0
    if (ctx->r15 == 0) {
        // 0x803362BC: nop
    
            goto L_803362E0;
    }
    // 0x803362BC: nop

    // 0x803362C0: lb          $t8, 0x23($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X23);
    // 0x803362C4: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803362C8: mtc1        $t8, $f18
    ctx->f18.u32l = ctx->r24;
    // 0x803362CC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803362D0: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803362D4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803362D8: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x803362DC: swc1        $f8, 0xD4($t9)
    MEM_W(0XD4, ctx->r25) = ctx->f8.u32l;
L_803362E0:
    // 0x803362E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803362E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803362E8: jal         0x80029C40
    // 0x803362EC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x803362EC: nop

    after_2:
    // 0x803362F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803362F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803362F8: jal         0x80029D04
    // 0x803362FC: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x803362FC: nop

    after_3:
    // 0x80336300: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336304: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336308: jal         0x80028FA0
    // 0x8033630C: nop

    func_80028FA0(rdram, ctx);
        goto after_4;
    // 0x8033630C: nop

    after_4:
    // 0x80336310: beq         $v0, $zero, L_80336328
    if (ctx->r2 == 0) {
        // 0x80336314: nop
    
            goto L_80336328;
    }
    // 0x80336314: nop

    // 0x80336318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033631C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336320: jal         0x80029B60
    // 0x80336324: nop

    func_80029B60(rdram, ctx);
        goto after_5;
    // 0x80336324: nop

    after_5:
L_80336328:
    // 0x80336328: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8033632C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80336330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336338: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8033633C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80336340: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80336344: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80336348: jal         0x80029018
    // 0x8033634C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x8033634C: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_6:
    // 0x80336350: beq         $v0, $zero, L_80336378
    if (ctx->r2 == 0) {
        // 0x80336354: nop
    
            goto L_80336378;
    }
    // 0x80336354: nop

    // 0x80336358: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8033635C: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x80336360: sh          $t0, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r8;
    // 0x80336364: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80336368: nop

    // 0x8033636C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80336370: b           L_80336394
    // 0x80336374: nop

        goto L_80336394;
    // 0x80336374: nop

L_80336378:
    // 0x80336378: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x8033637C: nop

    // 0x80336380: lwc1        $f18, 0x3C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80336384: nop

    // 0x80336388: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x8033638C: b           L_80336394
    // 0x80336390: nop

        goto L_80336394;
    // 0x80336390: nop

L_80336394:
    // 0x80336394: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80336398: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8033639C: jr          $ra
    // 0x803363A0: nop

    return;
    // 0x803363A0: nop

;}
RECOMP_FUNC void func_80332990_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80332990: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80332994: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80332998: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033299C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803329A0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803329A4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803329A8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803329AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803329B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803329B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803329B8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803329BC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803329C0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803329C4: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803329C8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803329CC: nop

    // 0x803329D0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803329D4: nop

    // 0x803329D8: bne         $t1, $zero, L_80332A7C
    if (ctx->r9 != 0) {
        // 0x803329DC: nop
    
            goto L_80332A7C;
    }
    // 0x803329DC: nop

    // 0x803329E0: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803329E4: nop

    // 0x803329E8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803329EC: nop

    // 0x803329F0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803329F4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803329F8: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803329FC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332A00: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332A04: nop

    // 0x80332A08: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x80332A0C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332A10: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332A14: nop

    // 0x80332A18: swc1        $f6, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f6.u32l;
    // 0x80332A1C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332A20: nop

    // 0x80332A24: sh          $zero, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = 0;
    // 0x80332A28: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332A2C: nop

    // 0x80332A30: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x80332A34: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332A38: nop

    // 0x80332A3C: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x80332A40: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332A44: nop

    // 0x80332A48: sh          $zero, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = 0;
    // 0x80332A4C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332A50: nop

    // 0x80332A54: sh          $zero, 0xB2($t1)
    MEM_H(0XB2, ctx->r9) = 0;
    // 0x80332A58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332A5C: lui         $t3, 0x8012
    ctx->r11 = S32(0X8012 << 16);
    // 0x80332A60: addiu       $t3, $t3, -0x7D3C
    ctx->r11 = ADD32(ctx->r11, -0X7D3C);
    // 0x80332A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332A68: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x80332A6C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80332A70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80332A74: jal         0x8001C0EC
    // 0x80332A78: addiu       $a3, $zero, 0x89
    ctx->r7 = ADD32(0, 0X89);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80332A78: addiu       $a3, $zero, 0x89
    ctx->r7 = ADD32(0, 0X89);
    after_0:
L_80332A7C:
    // 0x80332A7C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332A80: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332A84: lh          $t2, 0x108($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X108);
    // 0x80332A88: nop

    // 0x80332A8C: bne         $t2, $at, L_80332AC0
    if (ctx->r10 != ctx->r1) {
        // 0x80332A90: nop
    
            goto L_80332AC0;
    }
    // 0x80332A90: nop

    // 0x80332A94: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80332A98: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80332A9C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332AA0: nop

    // 0x80332AA4: swc1        $f8, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f8.u32l;
    // 0x80332AA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AB0: jal         0x8001BBDC
    // 0x80332AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80332AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80332AB8: b           L_80332B0C
    // 0x80332ABC: nop

        goto L_80332B0C;
    // 0x80332ABC: nop

L_80332AC0:
    // 0x80332AC0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332AC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332AC8: lh          $s0, 0x108($t6)
    ctx->r16 = MEM_H(ctx->r14, 0X108);
    // 0x80332ACC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332AD0: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80332AD4: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x80332AD8: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80332ADC: sltiu       $t8, $s0, 0x1
    ctx->r24 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80332AE0: or          $s0, $t8, $zero
    ctx->r16 = ctx->r24 | 0;
    // 0x80332AE4: jal         0x8001BB34
    // 0x80332AE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80332AE8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_2:
    // 0x80332AEC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332AF0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332AF4: nop

    // 0x80332AF8: swc1        $f10, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f10.u32l;
    // 0x80332AFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332B00: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332B04: jal         0x8001BBDC
    // 0x80332B08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80332B08: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_80332B0C:
    // 0x80332B0C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332B10: nop

    // 0x80332B14: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80332B18: nop

    // 0x80332B1C: bne         $t1, $zero, L_80332B48
    if (ctx->r9 != 0) {
        // 0x80332B20: nop
    
            goto L_80332B48;
    }
    // 0x80332B20: nop

    // 0x80332B24: lwc1        $f16, 0x3C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80332B28: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332B2C: nop

    // 0x80332B30: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80332B34: nop

    // 0x80332B38: bc1f        L_80332B48
    if (!c1cs) {
        // 0x80332B3C: nop
    
            goto L_80332B48;
    }
    // 0x80332B3C: nop

    // 0x80332B40: b           L_80332DF4
    // 0x80332B44: nop

        goto L_80332DF4;
    // 0x80332B44: nop

L_80332B48:
    // 0x80332B48: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332B4C: nop

    // 0x80332B50: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x80332B54: nop

    // 0x80332B58: bne         $t4, $zero, L_80332BA0
    if (ctx->r12 != 0) {
        // 0x80332B5C: nop
    
            goto L_80332BA0;
    }
    // 0x80332B5C: nop

    // 0x80332B60: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332B64: nop

    // 0x80332B68: lh          $t5, 0xA8($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA8);
    // 0x80332B6C: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80332B70: sll         $t6, $t5, 1
    ctx->r14 = S32(ctx->r13 << 1);
    // 0x80332B74: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80332B78: jal         0x80015538
    // 0x80332B7C: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80332B7C: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x80332B80: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332B84: nop

    // 0x80332B88: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80332B8C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332B90: nop

    // 0x80332B94: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80332B98: nop

    // 0x80332B9C: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
L_80332BA0:
    // 0x80332BA0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332BA4: nop

    // 0x80332BA8: lh          $t1, 0xA6($t9)
    ctx->r9 = MEM_H(ctx->r25, 0XA6);
    // 0x80332BAC: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80332BB0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80332BB4: nop

    // 0x80332BB8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332BBC: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80332BC0: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80332BC4: nop

    // 0x80332BC8: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80332BCC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332BD0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332BD4: nop

    // 0x80332BD8: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80332BDC: mfc1        $t3, $f4
    ctx->r11 = (int32_t)ctx->f4.u32l;
    // 0x80332BE0: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80332BE4: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80332BE8: nop

    // 0x80332BEC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80332BF0: nop

    // 0x80332BF4: slti        $at, $t4, 0x3
    ctx->r1 = SIGNED(ctx->r12) < 0X3 ? 1 : 0;
    // 0x80332BF8: beq         $at, $zero, L_80332DF4
    if (ctx->r1 == 0) {
        // 0x80332BFC: nop
    
            goto L_80332DF4;
    }
    // 0x80332BFC: nop

    // 0x80332C00: slti        $at, $t4, -0x2
    ctx->r1 = SIGNED(ctx->r12) < -0X2 ? 1 : 0;
    // 0x80332C04: bne         $at, $zero, L_80332DF4
    if (ctx->r1 != 0) {
        // 0x80332C08: nop
    
            goto L_80332DF4;
    }
    // 0x80332C08: nop

    // 0x80332C0C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332C10: nop

    // 0x80332C14: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x80332C18: nop

    // 0x80332C1C: beq         $t5, $zero, L_80332DC4
    if (ctx->r13 == 0) {
        // 0x80332C20: nop
    
            goto L_80332DC4;
    }
    // 0x80332C20: nop

    // 0x80332C24: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80332C28: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332C2C: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80332C30: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332C34: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332C38: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80332C3C: nop

    // 0x80332C40: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x80332C44: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80332C48: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80332C4C: sh          $t8, 0xB6($t6)
    MEM_H(0XB6, ctx->r14) = ctx->r24;
    // 0x80332C50: nop

    // 0x80332C54: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80332C58: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332C5C: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80332C60: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332C64: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332C68: lwc1        $f10, 0x24($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X24);
    // 0x80332C6C: nop

    // 0x80332C70: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80332C74: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x80332C78: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80332C7C: sh          $t0, 0xB8($t1)
    MEM_H(0XB8, ctx->r9) = ctx->r8;
    // 0x80332C80: nop

    // 0x80332C84: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80332C88: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332C8C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80332C90: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332C94: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332C98: lwc1        $f18, 0x2C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x80332C9C: nop

    // 0x80332CA0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80332CA4: mfc1        $t2, $f4
    ctx->r10 = (int32_t)ctx->f4.u32l;
    // 0x80332CA8: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80332CAC: sh          $t2, 0xBA($t3)
    MEM_H(0XBA, ctx->r11) = ctx->r10;
    // 0x80332CB0: nop

    // 0x80332CB4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332CB8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332CBC: nop

    // 0x80332CC0: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
    // 0x80332CC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CCC: jal         0x80029C40
    // 0x80332CD0: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80332CD0: nop

    after_5:
    // 0x80332CD4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332CD8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332CDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332CE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332CE4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332CE8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80332CEC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332CF0: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80332CF4: jal         0x80029018
    // 0x80332CF8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x80332CF8: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x80332CFC: beq         $v0, $zero, L_80332D14
    if (ctx->r2 == 0) {
        // 0x80332D00: nop
    
            goto L_80332D14;
    }
    // 0x80332D00: nop

    // 0x80332D04: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332D08: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80332D0C: b           L_80332D60
    // 0x80332D10: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
        goto L_80332D60;
    // 0x80332D10: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
L_80332D14:
    // 0x80332D14: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332D18: nop

    // 0x80332D1C: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x80332D20: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332D24: nop

    // 0x80332D28: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x80332D2C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332D30: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332D34: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80332D38: nop

    // 0x80332D3C: bne         $t1, $at, L_80332D54
    if (ctx->r9 != ctx->r1) {
        // 0x80332D40: nop
    
            goto L_80332D54;
    }
    // 0x80332D40: nop

    // 0x80332D44: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332D48: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80332D4C: b           L_80332D60
    // 0x80332D50: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
        goto L_80332D60;
    // 0x80332D50: sh          $t4, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r12;
L_80332D54:
    // 0x80332D54: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332D58: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80332D5C: sh          $t3, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r11;
L_80332D60:
    // 0x80332D60: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80332D64: nop

    // 0x80332D68: lh          $t8, 0xB6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB6);
    // 0x80332D6C: nop

    // 0x80332D70: mtc1        $t8, $f16
    ctx->f16.u32l = ctx->r24;
    // 0x80332D74: nop

    // 0x80332D78: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80332D7C: swc1        $f18, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f18.u32l;
    // 0x80332D80: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332D84: nop

    // 0x80332D88: lh          $t9, 0xB8($t6)
    ctx->r25 = MEM_H(ctx->r14, 0XB8);
    // 0x80332D8C: nop

    // 0x80332D90: mtc1        $t9, $f4
    ctx->f4.u32l = ctx->r25;
    // 0x80332D94: nop

    // 0x80332D98: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332D9C: swc1        $f6, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f6.u32l;
    // 0x80332DA0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332DA4: nop

    // 0x80332DA8: lh          $t1, 0xBA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XBA);
    // 0x80332DAC: nop

    // 0x80332DB0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x80332DB4: nop

    // 0x80332DB8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332DBC: b           L_80332DF4
    // 0x80332DC0: swc1        $f10, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f10.u32l;
        goto L_80332DF4;
    // 0x80332DC0: swc1        $f10, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f10.u32l;
L_80332DC4:
    // 0x80332DC4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332DC8: nop

    // 0x80332DCC: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
    // 0x80332DD0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332DD4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332DD8: nop

    // 0x80332DDC: swc1        $f16, 0x1C($t2)
    MEM_W(0X1C, ctx->r10) = ctx->f16.u32l;
    // 0x80332DE0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332DE4: nop

    // 0x80332DE8: lwc1        $f18, 0x1C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80332DEC: nop

    // 0x80332DF0: swc1        $f18, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f18.u32l;
L_80332DF4:
    // 0x80332DF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332DF8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80332DFC: nop

    // 0x80332E00: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x80332E04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E0C: jal         0x80029C40
    // 0x80332E10: nop

    func_80029C40(rdram, ctx);
        goto after_7;
    // 0x80332E10: nop

    after_7:
    // 0x80332E14: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332E18: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332E1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332E20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332E24: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80332E28: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80332E2C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332E30: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80332E34: jal         0x80029018
    // 0x80332E38: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x80332E38: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80332E3C: beq         $v0, $zero, L_80332F54
    if (ctx->r2 == 0) {
        // 0x80332E40: nop
    
            goto L_80332F54;
    }
    // 0x80332E40: nop

    // 0x80332E44: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80332E48: lh          $t8, 0x51A0($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X51A0);
    // 0x80332E4C: nop

    // 0x80332E50: andi        $t7, $t8, 0x80
    ctx->r15 = ctx->r24 & 0X80;
    // 0x80332E54: beq         $t7, $zero, L_80332E90
    if (ctx->r15 == 0) {
        // 0x80332E58: nop
    
            goto L_80332E90;
    }
    // 0x80332E58: nop

    // 0x80332E5C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332E60: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332E64: nop

    // 0x80332E68: swc1        $f10, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f10.u32l;
    // 0x80332E6C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80332E70: nop

    // 0x80332E74: lwc1        $f16, 0x2C($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80332E78: nop

    // 0x80332E7C: swc1        $f16, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f16.u32l;
    // 0x80332E80: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332E84: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80332E88: b           L_80332F54
    // 0x80332E8C: sh          $t1, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r9;
        goto L_80332F54;
    // 0x80332E8C: sh          $t1, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r9;
L_80332E90:
    // 0x80332E90: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80332E94: nop

    // 0x80332E98: lh          $t2, 0xA6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XA6);
    // 0x80332E9C: nop

    // 0x80332EA0: bne         $t2, $zero, L_80332F3C
    if (ctx->r10 != 0) {
        // 0x80332EA4: nop
    
            goto L_80332F3C;
    }
    // 0x80332EA4: nop

    // 0x80332EA8: lwc1        $f18, 0x3C($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332EAC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80332EB0: nop

    // 0x80332EB4: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80332EB8: nop

    // 0x80332EBC: bc1f        L_80332F3C
    if (!c1cs) {
        // 0x80332EC0: nop
    
            goto L_80332F3C;
    }
    // 0x80332EC0: nop

    // 0x80332EC4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332EC8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332ECC: jal         0x8002A46C
    // 0x80332ED0: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_9;
    // 0x80332ED0: nop

    after_9:
    // 0x80332ED4: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80332ED8: nop

    // 0x80332EDC: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80332EE0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332EE4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332EE8: nop

    // 0x80332EEC: cvt.w.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    ctx->f6.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80332EF0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x80332EF4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80332EF8: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
    // 0x80332EFC: nop

    // 0x80332F00: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x80332F04: nop

    // 0x80332F08: bltz        $t8, L_80332F34
    if (SIGNED(ctx->r24) < 0) {
        // 0x80332F0C: nop
    
            goto L_80332F34;
    }
    // 0x80332F0C: nop

    // 0x80332F10: slti        $at, $t8, 0xB4
    ctx->r1 = SIGNED(ctx->r24) < 0XB4 ? 1 : 0;
    // 0x80332F14: beq         $at, $zero, L_80332F34
    if (ctx->r1 == 0) {
        // 0x80332F18: nop
    
            goto L_80332F34;
    }
    // 0x80332F18: nop

    // 0x80332F1C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332F20: addiu       $t7, $zero, 0x5A
    ctx->r15 = ADD32(0, 0X5A);
    // 0x80332F24: sh          $t7, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r15;
    // 0x80332F28: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80332F2C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80332F30: sh          $t6, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r14;
L_80332F34:
    // 0x80332F34: b           L_80332F54
    // 0x80332F38: nop

        goto L_80332F54;
    // 0x80332F38: nop

L_80332F3C:
    // 0x80332F3C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332F40: addiu       $t0, $zero, 0x10E
    ctx->r8 = ADD32(0, 0X10E);
    // 0x80332F44: sh          $t0, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r8;
    // 0x80332F48: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80332F4C: addiu       $t4, $zero, -0x1
    ctx->r12 = ADD32(0, -0X1);
    // 0x80332F50: sh          $t4, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r12;
L_80332F54:
    // 0x80332F54: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80332F58: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80332F5C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80332F60: lwc1        $f8, 0x8($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X8);
    // 0x80332F64: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80332F68: lui         $at, 0x44C8
    ctx->r1 = S32(0X44C8 << 16);
    // 0x80332F6C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332F70: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80332F74: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80332F78: nop

    // 0x80332F7C: bc1t        L_80332F94
    if (c1cs) {
        // 0x80332F80: nop
    
            goto L_80332F94;
    }
    // 0x80332F80: nop

    // 0x80332F84: lh          $t7, 0xB0($t8)
    ctx->r15 = MEM_H(ctx->r24, 0XB0);
    // 0x80332F88: nop

    // 0x80332F8C: beq         $t7, $zero, L_80333008
    if (ctx->r15 == 0) {
        // 0x80332F90: nop
    
            goto L_80333008;
    }
    // 0x80332F90: nop

L_80332F94:
    // 0x80332F94: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80332F98: nop

    // 0x80332F9C: lh          $t6, 0xA6($t9)
    ctx->r14 = MEM_H(ctx->r25, 0XA6);
    // 0x80332FA0: nop

    // 0x80332FA4: bne         $t6, $zero, L_80333008
    if (ctx->r14 != 0) {
        // 0x80332FA8: nop
    
            goto L_80333008;
    }
    // 0x80332FA8: nop

    // 0x80332FAC: lwc1        $f4, 0x3C($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80332FB0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80332FB4: nop

    // 0x80332FB8: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80332FBC: nop

    // 0x80332FC0: bc1f        L_80333008
    if (!c1cs) {
        // 0x80332FC4: nop
    
            goto L_80333008;
    }
    // 0x80332FC4: nop

    // 0x80332FC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332FCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332FD0: jal         0x8001B44C
    // 0x80332FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_10;
    // 0x80332FD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80332FD8: beq         $v0, $zero, L_80333008
    if (ctx->r2 == 0) {
        // 0x80332FDC: nop
    
            goto L_80333008;
    }
    // 0x80332FDC: nop

    // 0x80332FE0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80332FE4: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80332FE8: sh          $t1, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r9;
    // 0x80332FEC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80332FF0: nop

    // 0x80332FF4: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
    // 0x80332FF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332FFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333000: jal         0x8001BBDC
    // 0x80333004: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x80333004: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_11:
L_80333008:
    // 0x80333008: b           L_80333010
    // 0x8033300C: nop

        goto L_80333010;
    // 0x8033300C: nop

L_80333010:
    // 0x80333010: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80333014: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80333018: jr          $ra
    // 0x8033301C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033301C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033A7C4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A7C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033A7C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033A7CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A7D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A7D4: jal         0x8002B0E4
    // 0x8033A7D8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033A7D8: nop

    after_0:
    // 0x8033A7DC: b           L_8033A7E4
    // 0x8033A7E0: nop

        goto L_8033A7E4;
    // 0x8033A7E0: nop

L_8033A7E4:
    // 0x8033A7E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033A7E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033A7EC: jr          $ra
    // 0x8033A7F0: nop

    return;
    // 0x8033A7F0: nop

;}
RECOMP_FUNC void func_80336A50_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A50: jr          $ra
    // 0x80336A54: nop

    return;
    // 0x80336A54: nop

    // 0x80336A58: jr          $ra
    // 0x80336A5C: nop

    return;
    // 0x80336A5C: nop

;}
RECOMP_FUNC void func_80333610_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333610: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80333614: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80333618: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033361C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80333620: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80333624: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80333628: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033362C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80333630: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80333634: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80333638: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033363C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80333640: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80333644: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80333648: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033364C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80333650: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80333654: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80333658: addiu       $a1, $a1, 0x4180
    ctx->r5 = ADD32(ctx->r5, 0X4180);
    // 0x8033365C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80333660: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80333664: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    // 0x80333668: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033366C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80333670: jal         0x80027464
    // 0x80333674: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80333674: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80333678: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8033367C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80333680: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80333684: beq         $t1, $at, L_80333864
    if (ctx->r9 == ctx->r1) {
        // 0x80333688: nop
    
            goto L_80333864;
    }
    // 0x80333688: nop

    // 0x8033368C: sh          $zero, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = 0;
L_80333690:
    // 0x80333690: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80333694: lh          $t4, 0x2E($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X2E);
    // 0x80333698: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8033369C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803336A0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803336A4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803336A8: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803336AC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x803336B0: addu        $t7, $t3, $t5
    ctx->r15 = ADD32(ctx->r11, ctx->r13);
    // 0x803336B4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803336B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803336BC: lh          $t8, 0x4238($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4238);
    // 0x803336C0: nop

    // 0x803336C4: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x803336C8: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x803336CC: lh          $t9, 0x2E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X2E);
    // 0x803336D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803336D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803336D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x803336DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x803336E0: sll         $t6, $t9, 4
    ctx->r14 = S32(ctx->r25 << 4);
    // 0x803336E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x803336E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803336EC: subu        $t6, $t6, $t9
    ctx->r14 = SUB32(ctx->r14, ctx->r25);
    // 0x803336F0: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x803336F4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x803336F8: sh          $t6, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r14;
    // 0x803336FC: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x80333700: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80333704: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80333708: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x8033370C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80333710: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80333714: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80333718: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x8033371C: lh          $t3, 0x41F6($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F6);
    // 0x80333720: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333724: mtc1        $t3, $f4
    ctx->f4.u32l = ctx->r11;
    // 0x80333728: lwc1        $f9, -0x51F8($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X51F8);
    // 0x8033372C: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x80333730: lwc1        $f8, -0x51F4($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X51F4);
    // 0x80333734: nop

    // 0x80333738: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8033373C: jal         0x80034970
    // 0x80333740: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_1;
    // 0x80333740: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80333744: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333748: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x8033374C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80333750: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333754: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80333758: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8033375C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333760: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80333764: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333768: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033376C: mul.s       $f4, $f18, $f20
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f20.fl);
    // 0x80333770: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333774: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333778: sll         $t6, $t0, 2
    ctx->r14 = S32(ctx->r8 << 2);
    // 0x8033377C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333780: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x80333784: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80333788: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8033378C: addu        $t6, $t6, $t0
    ctx->r14 = ADD32(ctx->r14, ctx->r8);
    // 0x80333790: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80333794: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80333798: addu        $t1, $t6, $t8
    ctx->r9 = ADD32(ctx->r14, ctx->r24);
    // 0x8033379C: swc1        $f6, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f6.u32l;
    // 0x803337A0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803337A4: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803337A8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803337AC: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803337B0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803337B4: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803337B8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803337BC: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x803337C0: lh          $t3, 0x41F6($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X41F6);
    // 0x803337C4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803337C8: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x803337CC: lwc1        $f19, -0x51F0($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X51F0);
    // 0x803337D0: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x803337D4: lwc1        $f18, -0x51EC($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X51EC);
    // 0x803337D8: nop

    // 0x803337DC: mul.d       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f18.d); 
    ctx->f16.d = MUL_D(ctx->f10.d, ctx->f18.d);
    // 0x803337E0: jal         0x80036570
    // 0x803337E4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    cosf_game(rdram, ctx);
        goto after_2;
    // 0x803337E4: cvt.s.d     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f12.fl = CVT_S_D(ctx->f16.d);
    after_2:
    // 0x803337E8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803337EC: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x803337F0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803337F4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803337F8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803337FC: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80333800: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333804: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80333808: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8033380C: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80333810: mul.s       $f8, $f6, $f20
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f20.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f20.fl);
    // 0x80333814: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333818: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8033381C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80333820: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x80333824: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333828: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8033382C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80333830: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80333834: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x80333838: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8033383C: addu        $t1, $t8, $t9
    ctx->r9 = ADD32(ctx->r24, ctx->r25);
    // 0x80333840: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x80333844: lh          $t2, 0x2E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2E);
    // 0x80333848: nop

    // 0x8033384C: addiu       $t4, $t2, 0x1
    ctx->r12 = ADD32(ctx->r10, 0X1);
    // 0x80333850: sll         $t3, $t4, 16
    ctx->r11 = S32(ctx->r12 << 16);
    // 0x80333854: sra         $t5, $t3, 16
    ctx->r13 = S32(SIGNED(ctx->r11) >> 16);
    // 0x80333858: slti        $at, $t5, 0x6
    ctx->r1 = SIGNED(ctx->r13) < 0X6 ? 1 : 0;
    // 0x8033385C: bne         $at, $zero, L_80333690
    if (ctx->r1 != 0) {
        // 0x80333860: sh          $t4, 0x2E($sp)
        MEM_H(0X2E, ctx->r29) = ctx->r12;
            goto L_80333690;
    }
    // 0x80333860: sh          $t4, 0x2E($sp)
    MEM_H(0X2E, ctx->r29) = ctx->r12;
L_80333864:
    // 0x80333864: b           L_8033386C
    // 0x80333868: nop

        goto L_8033386C;
    // 0x80333868: nop

L_8033386C:
    // 0x8033386C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80333870: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80333874: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80333878: jr          $ra
    // 0x8033387C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033387C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803350D4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803350D4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803350D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803350DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803350E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803350E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803350E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803350EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803350F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803350F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803350FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335100: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335104: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80335108: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033510C: nop

    // 0x80335110: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335114: nop

    // 0x80335118: bne         $t1, $zero, L_803351A0
    if (ctx->r9 != 0) {
        // 0x8033511C: nop
    
            goto L_803351A0;
    }
    // 0x8033511C: nop

    // 0x80335120: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335124: nop

    // 0x80335128: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033512C: nop

    // 0x80335130: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335134: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80335138: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8033513C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80335140: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335144: nop

    // 0x80335148: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x8033514C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335150: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335154: jal         0x8002A46C
    // 0x80335158: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x80335158: nop

    after_0:
    // 0x8033515C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80335160: nop

    // 0x80335164: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x80335168: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033516C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335170: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x80335174: jal         0x80029EF8
    // 0x80335178: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x80335178: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    after_1:
    // 0x8033517C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335180: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x80335184: addiu       $t7, $t7, -0x7EF8
    ctx->r15 = ADD32(ctx->r15, -0X7EF8);
    // 0x80335188: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033518C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80335190: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80335198: jal         0x8001C0EC
    // 0x8033519C: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x8033519C: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_2:
L_803351A0:
    // 0x803351A0: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803351A4: nop

    // 0x803351A8: lwc1        $f6, 0x28($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X28);
    // 0x803351AC: nop

    // 0x803351B0: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x803351B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803351B8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x803351BC: nop

    // 0x803351C0: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
    // 0x803351C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351CC: jal         0x80029C40
    // 0x803351D0: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x803351D0: nop

    after_3:
    // 0x803351D4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803351D8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803351DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803351E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803351E4: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803351E8: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x803351EC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803351F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803351F4: jal         0x80029018
    // 0x803351F8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_4;
    // 0x803351F8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_4:
    // 0x803351FC: beq         $v0, $zero, L_80335228
    if (ctx->r2 == 0) {
        // 0x80335200: nop
    
            goto L_80335228;
    }
    // 0x80335200: nop

    // 0x80335204: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80335208: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033520C: nop

    // 0x80335210: swc1        $f18, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f18.u32l;
    // 0x80335214: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80335218: nop

    // 0x8033521C: lwc1        $f4, 0x2C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80335220: nop

    // 0x80335224: swc1        $f4, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f4.u32l;
L_80335228:
    // 0x80335228: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8033522C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80335230: nop

    // 0x80335234: swc1        $f6, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f6.u32l;
    // 0x80335238: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8033523C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80335240: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335244: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335248: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8033524C: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80335250: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x80335254: jal         0x80029F58
    // 0x80335258: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x80335258: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_5:
    // 0x8033525C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335260: bne         $v0, $at, L_803352C0
    if (ctx->r2 != ctx->r1) {
        // 0x80335264: nop
    
            goto L_803352C0;
    }
    // 0x80335264: nop

    // 0x80335268: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033526C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335270: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335274: addiu       $a2, $zero, 0x3E
    ctx->r6 = ADD32(0, 0X3E);
    // 0x80335278: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033527C: jal         0x800175F0
    // 0x80335280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x80335280: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
    // 0x80335284: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80335288: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x8033528C: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80335290: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80335294: nop

    // 0x80335298: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x8033529C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803352A0: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803352A4: nop

    // 0x803352A8: swc1        $f10, 0x2C($t6)
    MEM_W(0X2C, ctx->r14) = ctx->f10.u32l;
    // 0x803352AC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803352B0: nop

    // 0x803352B4: lwc1        $f16, 0x2C($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x803352B8: nop

    // 0x803352BC: swc1        $f16, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f16.u32l;
L_803352C0:
    // 0x803352C0: b           L_803352C8
    // 0x803352C4: nop

        goto L_803352C8;
    // 0x803352C4: nop

L_803352C8:
    // 0x803352C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803352CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803352D0: jr          $ra
    // 0x803352D4: nop

    return;
    // 0x803352D4: nop

;}
RECOMP_FUNC void func_80331B34_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331B34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331B38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331B3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331B40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331B44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331B48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331B4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331B54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331B58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331B5C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331B60: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80331B64: nop

    // 0x80331B68: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80331B6C: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x80331B70: beq         $at, $zero, L_80331BE4
    if (ctx->r1 == 0) {
        // 0x80331B74: nop
    
            goto L_80331BE4;
    }
    // 0x80331B74: nop

    // 0x80331B78: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331B7C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331B80: addu        $at, $at, $t9
    gpr jr_addend_80331B8C = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331B84: lw          $t9, -0x5258($at)
    ctx->r25 = ADD32(ctx->r1, -0X5258);
    // 0x80331B88: nop

    // 0x80331B8C: jr          $t9
    // 0x80331B90: nop

    switch (jr_addend_80331B8C >> 2) {
        case 0: goto L_80331B94; break;
        case 1: goto L_80331BA4; break;
        case 2: goto L_80331BB4; break;
        case 3: goto L_80331BC4; break;
        case 4: goto L_80331BD4; break;
        default: switch_error(__func__, 0x80331B8C, 0x8033ADA8);
    }
    // 0x80331B90: nop

L_80331B94:
    // 0x80331B94: jal         0x803311B8
    // 0x80331B98: nop

    func_803311B8_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80331B98: nop

    after_0:
    // 0x80331B9C: b           L_80331BEC
    // 0x80331BA0: nop

        goto L_80331BEC;
    // 0x80331BA0: nop

L_80331BA4:
    // 0x80331BA4: jal         0x803313F8
    // 0x80331BA8: nop

    func_803313F8_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x80331BA8: nop

    after_1:
    // 0x80331BAC: b           L_80331BEC
    // 0x80331BB0: nop

        goto L_80331BEC;
    // 0x80331BB0: nop

L_80331BB4:
    // 0x80331BB4: jal         0x803316C4
    // 0x80331BB8: nop

    func_803316C4_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x80331BB8: nop

    after_2:
    // 0x80331BBC: b           L_80331BEC
    // 0x80331BC0: nop

        goto L_80331BEC;
    // 0x80331BC0: nop

L_80331BC4:
    // 0x80331BC4: jal         0x8033180C
    // 0x80331BC8: nop

    func_8033180C_unk_bin_38(rdram, ctx);
        goto after_3;
    // 0x80331BC8: nop

    after_3:
    // 0x80331BCC: b           L_80331BEC
    // 0x80331BD0: nop

        goto L_80331BEC;
    // 0x80331BD0: nop

L_80331BD4:
    // 0x80331BD4: jal         0x80331A18
    // 0x80331BD8: nop

    func_80331A18_unk_bin_38(rdram, ctx);
        goto after_4;
    // 0x80331BD8: nop

    after_4:
    // 0x80331BDC: b           L_80331BEC
    // 0x80331BE0: nop

        goto L_80331BEC;
    // 0x80331BE0: nop

L_80331BE4:
    // 0x80331BE4: b           L_80331BEC
    // 0x80331BE8: nop

        goto L_80331BEC;
    // 0x80331BE8: nop

L_80331BEC:
    // 0x80331BEC: b           L_80331BF4
    // 0x80331BF0: nop

        goto L_80331BF4;
    // 0x80331BF0: nop

L_80331BF4:
    // 0x80331BF4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80331BF8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80331BFC: jr          $ra
    // 0x80331C00: nop

    return;
    // 0x80331C00: nop

;}
RECOMP_FUNC void func_803393C4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803393C4: addiu       $sp, $sp, -0x60
    ctx->r29 = ADD32(ctx->r29, -0X60);
    // 0x803393C8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x803393CC: sw          $s1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r17;
    // 0x803393D0: sw          $s0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r16;
    // 0x803393D4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803393D8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803393DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803393E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803393E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803393E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803393EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803393F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803393F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803393F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803393FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80339400: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339404: sw          $t9, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r25;
    // 0x80339408: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033940C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80339410: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80339414: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80339418: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033941C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80339420: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339424: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80339428: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033942C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80339430: nop

    // 0x80339434: sw          $t2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r10;
    // 0x80339438: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8033943C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80339440: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80339444: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80339448: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033944C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339450: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80339454: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339458: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033945C: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x80339460: nop

    // 0x80339464: sw          $t5, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r13;
    // 0x80339468: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x8033946C: nop

    // 0x80339470: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80339474: nop

    // 0x80339478: bne         $t7, $zero, L_80339660
    if (ctx->r15 != 0) {
        // 0x8033947C: nop
    
            goto L_80339660;
    }
    // 0x8033947C: nop

    // 0x80339480: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80339484: nop

    // 0x80339488: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x8033948C: nop

    // 0x80339490: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80339494: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80339498: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8033949C: nop

    // 0x803394A0: sh          $zero, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = 0;
    // 0x803394A4: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x803394A8: nop

    // 0x803394AC: sh          $zero, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = 0;
    // 0x803394B0: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x803394B4: nop

    // 0x803394B8: sh          $zero, 0xAC($t3)
    MEM_H(0XAC, ctx->r11) = 0;
    // 0x803394BC: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x803394C0: nop

    // 0x803394C4: sh          $zero, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = 0;
    // 0x803394C8: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x803394CC: addiu       $t5, $zero, 0xC8
    ctx->r13 = ADD32(0, 0XC8);
    // 0x803394D0: sh          $t5, 0xBC($t6)
    MEM_H(0XBC, ctx->r14) = ctx->r13;
    // 0x803394D4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803394D8: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x803394DC: nop

    // 0x803394E0: swc1        $f4, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f4.u32l;
    // 0x803394E4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803394E8: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x803394EC: nop

    // 0x803394F0: swc1        $f6, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->f6.u32l;
    // 0x803394F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803394F8: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x803394FC: nop

    // 0x80339500: swc1        $f8, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f8.u32l;
    // 0x80339504: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80339508: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8033950C: nop

    // 0x80339510: swc1        $f10, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f10.u32l;
    // 0x80339514: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80339518: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8033951C: nop

    // 0x80339520: swc1        $f16, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f16.u32l;
    // 0x80339524: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80339528: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8033952C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80339530: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80339534: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80339538: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033953C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80339540: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80339544: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339548: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033954C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339550: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80339554: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339558: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033955C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339560: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80339564: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339568: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033956C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80339570: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80339574: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80339578: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033957C: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80339580: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339584: swc1        $f18, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f18.u32l;
    // 0x80339588: lwc1        $f20, 0x18($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X18);
    // 0x8033958C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339590: addu        $t8, $t0, $t6
    ctx->r24 = ADD32(ctx->r8, ctx->r14);
    // 0x80339594: swc1        $f20, 0x18($t8)
    MEM_W(0X18, ctx->r24) = ctx->f20.u32l;
    // 0x80339598: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x8033959C: nop

    // 0x803395A0: swc1        $f20, 0x18($t1)
    MEM_W(0X18, ctx->r9) = ctx->f20.u32l;
    // 0x803395A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803395A8: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x803395AC: addiu       $t2, $t2, -0x7D3C
    ctx->r10 = ADD32(ctx->r10, -0X7D3C);
    // 0x803395B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803395B4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803395B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803395BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803395C0: jal         0x8001C0EC
    // 0x803395C4: addiu       $a3, $zero, 0x89
    ctx->r7 = ADD32(0, 0X89);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803395C4: addiu       $a3, $zero, 0x89
    ctx->r7 = ADD32(0, 0X89);
    after_0:
    // 0x803395C8: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x803395CC: addiu       $t3, $t3, 0x7874
    ctx->r11 = ADD32(ctx->r11, 0X7874);
    // 0x803395D0: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x803395D4: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x803395D8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803395DC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803395E0: jal         0x8001C0EC
    // 0x803395E4: addiu       $a3, $zero, 0x99
    ctx->r7 = ADD32(0, 0X99);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x803395E4: addiu       $a3, $zero, 0x99
    ctx->r7 = ADD32(0, 0X99);
    after_1:
    // 0x803395E8: lui         $t4, 0x8011
    ctx->r12 = S32(0X8011 << 16);
    // 0x803395EC: addiu       $t4, $t4, 0x7874
    ctx->r12 = ADD32(ctx->r12, 0X7874);
    // 0x803395F0: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x803395F4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x803395F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803395FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80339600: jal         0x8001C0EC
    // 0x80339604: addiu       $a3, $zero, 0x99
    ctx->r7 = ADD32(0, 0X99);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80339604: addiu       $a3, $zero, 0x99
    ctx->r7 = ADD32(0, 0X99);
    after_2:
    // 0x80339608: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8033960C: jal         0x8001BBDC
    // 0x80339610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80339610: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80339614: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80339618: jal         0x8001BBDC
    // 0x8033961C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x8033961C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80339620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339624: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339628: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8033962C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80339630: jal         0x80019448
    // 0x80339634: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_5;
    // 0x80339634: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80339638: lw          $a0, 0x48($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X48);
    // 0x8033963C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80339640: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80339644: jal         0x80019448
    // 0x80339648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_6;
    // 0x80339648: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_6:
    // 0x8033964C: lw          $a0, 0x44($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X44);
    // 0x80339650: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80339654: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80339658: jal         0x80019448
    // 0x8033965C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_7;
    // 0x8033965C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_7:
L_80339660:
    // 0x80339660: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80339664: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339668: lh          $t7, 0x108($t5)
    ctx->r15 = MEM_H(ctx->r13, 0X108);
    // 0x8033966C: nop

    // 0x80339670: bne         $t7, $at, L_80339A50
    if (ctx->r15 != ctx->r1) {
        // 0x80339674: nop
    
            goto L_80339A50;
    }
    // 0x80339674: nop

    // 0x80339678: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033967C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339680: jal         0x8002A640
    // 0x80339684: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8002A640(rdram, ctx);
        goto after_8;
    // 0x80339684: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_8:
    // 0x80339688: sw          $v0, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r2;
    // 0x8033968C: lw          $t0, 0x4C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4C);
    // 0x80339690: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80339694: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x80339698: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8033969C: jal         0x80015538
    // 0x803396A0: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x803396A0: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_9:
    // 0x803396A4: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x803396A8: nop

    // 0x803396AC: swc1        $f0, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f0.u32l;
    // 0x803396B0: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x803396B4: nop

    // 0x803396B8: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x803396BC: nop

    // 0x803396C0: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x803396C4: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x803396C8: nop

    // 0x803396CC: lh          $t2, 0xA8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA8);
    // 0x803396D0: nop

    // 0x803396D4: beq         $t2, $zero, L_8033979C
    if (ctx->r10 == 0) {
        // 0x803396D8: nop
    
            goto L_8033979C;
    }
    // 0x803396D8: nop

    // 0x803396DC: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x803396E0: nop

    // 0x803396E4: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x803396E8: nop

    // 0x803396EC: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x803396F0: sh          $t5, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r13;
    // 0x803396F4: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x803396F8: nop

    // 0x803396FC: lh          $t9, 0xA8($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XA8);
    // 0x80339700: nop

    // 0x80339704: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x80339708: beq         $at, $zero, L_80339730
    if (ctx->r1 == 0) {
        // 0x8033970C: nop
    
            goto L_80339730;
    }
    // 0x8033970C: nop

    // 0x80339710: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80339714: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80339718: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033971C: lwc1        $f8, 0xD4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x80339720: nop

    // 0x80339724: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80339728: b           L_80339770
    // 0x8033972C: swc1        $f16, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f16.u32l;
        goto L_80339770;
    // 0x8033972C: swc1        $f16, 0xD4($t0)
    MEM_W(0XD4, ctx->r8) = ctx->f16.u32l;
L_80339730:
    // 0x80339730: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80339734: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80339738: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033973C: lwc1        $f18, 0xD4($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x80339740: nop

    // 0x80339744: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80339748: nop

    // 0x8033974C: bc1f        L_80339770
    if (!c1cs) {
        // 0x80339750: nop
    
            goto L_80339770;
    }
    // 0x80339750: nop

    // 0x80339754: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80339758: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033975C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80339760: lwc1        $f6, 0xD4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XD4);
    // 0x80339764: nop

    // 0x80339768: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8033976C: swc1        $f10, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f10.u32l;
L_80339770:
    // 0x80339770: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339774: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80339778: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033977C: lwc1        $f16, 0xD8($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0XD8);
    // 0x80339780: lwc1        $f12, 0x18($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X18);
    // 0x80339784: mul.s       $f14, $f16, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f14.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80339788: jal         0x80015538
    // 0x8033978C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x8033978C: nop

    after_10:
    // 0x80339790: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80339794: nop

    // 0x80339798: swc1        $f0, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f0.u32l;
L_8033979C:
    // 0x8033979C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x803397A0: nop

    // 0x803397A4: lwc1        $f4, 0xD4($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x803397A8: nop

    // 0x803397AC: swc1        $f4, 0x48($t4)
    MEM_W(0X48, ctx->r12) = ctx->f4.u32l;
    // 0x803397B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803397B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803397B8: jal         0x8001BBDC
    // 0x803397BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x803397BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x803397C0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803397C4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803397C8: jal         0x8001BB34
    // 0x803397CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_12;
    // 0x803397CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x803397D0: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x803397D4: nop

    // 0x803397D8: lh          $t3, 0xAC($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XAC);
    // 0x803397DC: nop

    // 0x803397E0: beq         $t3, $zero, L_80339A48
    if (ctx->r11 == 0) {
        // 0x803397E4: nop
    
            goto L_80339A48;
    }
    // 0x803397E4: nop

    // 0x803397E8: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x803397EC: nop

    // 0x803397F0: lh          $t9, 0xAC($t7)
    ctx->r25 = MEM_H(ctx->r15, 0XAC);
    // 0x803397F4: nop

    // 0x803397F8: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x803397FC: sh          $t0, 0xAC($t7)
    MEM_H(0XAC, ctx->r15) = ctx->r8;
    // 0x80339800: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80339804: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80339808: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x8033980C: lwc1        $f6, 0x8($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80339810: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80339814: nop

    // 0x80339818: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8033981C: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80339820: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80339824: lwc1        $f18, -0x5140($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5140);
    // 0x80339828: lwc1        $f16, 0x40($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8033982C: nop

    // 0x80339830: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80339834: nop

    // 0x80339838: bc1f        L_80339A48
    if (!c1cs) {
        // 0x8033983C: nop
    
            goto L_80339A48;
    }
    // 0x8033983C: nop

    // 0x80339840: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80339844: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339848: nop

    // 0x8033984C: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80339850: nop

    // 0x80339854: bc1f        L_80339A48
    if (!c1cs) {
        // 0x80339858: nop
    
            goto L_80339A48;
    }
    // 0x80339858: nop

    // 0x8033985C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339860: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339864: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80339868: addiu       $a2, $zero, 0x38
    ctx->r6 = ADD32(0, 0X38);
    // 0x8033986C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80339870: jal         0x800175F0
    // 0x80339874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_13;
    // 0x80339874: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_13:
    // 0x80339878: jal         0x80014E80
    // 0x8033987C: addiu       $a0, $zero, -0x168
    ctx->r4 = ADD32(0, -0X168);
    Math_Random(rdram, ctx);
        goto after_14;
    // 0x8033987C: addiu       $a0, $zero, -0x168
    ctx->r4 = ADD32(0, -0X168);
    after_14:
    // 0x80339880: or          $s1, $v0, $zero
    ctx->r17 = ctx->r2 | 0;
    // 0x80339884: jal         0x80014E80
    // 0x80339888: addiu       $a0, $zero, -0xB4
    ctx->r4 = ADD32(0, -0XB4);
    Math_Random(rdram, ctx);
        goto after_15;
    // 0x80339888: addiu       $a0, $zero, -0xB4
    ctx->r4 = ADD32(0, -0XB4);
    after_15:
    // 0x8033988C: mtc1        $s1, $f6
    ctx->f6.u32l = ctx->r17;
    // 0x80339890: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339894: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80339898: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8033989C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803398A0: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x803398A4: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x803398A8: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x803398AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x803398B0: cvt.s.w     $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    ctx->f4.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803398B4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803398B8: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803398BC: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x803398C0: add.s       $f16, $f10, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f18.fl;
    // 0x803398C4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803398C8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803398CC: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803398D0: lwc1        $f4, 0x1C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x803398D4: mfc1        $a3, $f8
    ctx->r7 = (int32_t)ctx->f8.u32l;
    // 0x803398D8: addiu       $a1, $a1, 0x466C
    ctx->r5 = ADD32(ctx->r5, 0X466C);
    // 0x803398DC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x803398E0: jal         0x80027464
    // 0x803398E4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80027464(rdram, ctx);
        goto after_16;
    // 0x803398E4: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_16:
    // 0x803398E8: sw          $v0, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r2;
    // 0x803398EC: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x803398F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803398F4: beq         $t2, $at, L_80339A00
    if (ctx->r10 == ctx->r1) {
        // 0x803398F8: nop
    
            goto L_80339A00;
    }
    // 0x803398F8: nop

    // 0x803398FC: lw          $t4, 0x50($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X50);
    // 0x80339900: lw          $t3, 0x50($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X50);
    // 0x80339904: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80339908: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8033990C: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80339910: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339914: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80339918: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x8033991C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80339920: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80339924: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339928: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x8033992C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339930: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80339934: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80339938: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033993C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80339940: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80339944: addu        $t7, $t9, $t0
    ctx->r15 = ADD32(ctx->r25, ctx->r8);
    // 0x80339948: swc1        $f6, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f6.u32l;
    // 0x8033994C: lwc1        $f20, 0x14($t7)
    ctx->f20.u32l = MEM_W(ctx->r15, 0X14);
    // 0x80339950: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339954: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
    // 0x80339958: lw          $t6, 0x50($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X50);
    // 0x8033995C: nop

    // 0x80339960: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80339964: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80339968: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8033996C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80339970: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80339974: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80339978: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x8033997C: jal         0x80014E80
    // 0x80339980: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_17;
    // 0x80339980: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_17:
    // 0x80339984: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339988: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x8033998C: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x80339990: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80339994: jal         0x80015538
    // 0x80339998: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_18;
    // 0x80339998: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_18:
    // 0x8033999C: lw          $t2, 0x50($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X50);
    // 0x803399A0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803399A4: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x803399A8: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803399AC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803399B0: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x803399B4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803399B8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803399BC: swc1        $f0, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f0.u32l;
    // 0x803399C0: jal         0x80014E80
    // 0x803399C4: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    Math_Random(rdram, ctx);
        goto after_19;
    // 0x803399C4: addiu       $a0, $zero, -0xA
    ctx->r4 = ADD32(0, -0XA);
    after_19:
    // 0x803399C8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803399CC: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x803399D0: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x803399D4: jal         0x80015538
    // 0x803399D8: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_20;
    // 0x803399D8: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_20:
    // 0x803399DC: lw          $t5, 0x50($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X50);
    // 0x803399E0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803399E4: sll         $t3, $t5, 2
    ctx->r11 = S32(ctx->r13 << 2);
    // 0x803399E8: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x803399EC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803399F0: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x803399F4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803399F8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803399FC: swc1        $f0, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f0.u32l;
L_80339A00:
    // 0x80339A00: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80339A04: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80339A08: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80339A0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339A10: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80339A14: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80339A18: lwc1        $f18, 0x8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X8);
    // 0x80339A1C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80339A20: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80339A24: nop

    // 0x80339A28: bc1f        L_80339A48
    if (!c1cs) {
        // 0x80339A2C: nop
    
            goto L_80339A48;
    }
    // 0x80339A2C: nop

    // 0x80339A30: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80339A34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80339A38: sb          $t7, -0x1C50($at)
    MEM_B(-0X1C50, ctx->r1) = ctx->r15;
    // 0x80339A3C: addiu       $t6, $zero, 0x1E
    ctx->r14 = ADD32(0, 0X1E);
    // 0x80339A40: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80339A44: sb          $t6, -0x1C48($at)
    MEM_B(-0X1C48, ctx->r1) = ctx->r14;
L_80339A48:
    // 0x80339A48: b           L_80339B5C
    // 0x80339A4C: nop

        goto L_80339B5C;
    // 0x80339A4C: nop

L_80339A50:
    // 0x80339A50: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80339A54: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80339A58: nop

    // 0x80339A5C: swc1        $f8, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f8.u32l;
    // 0x80339A60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339A64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339A68: jal         0x8001BBDC
    // 0x80339A6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_21;
    // 0x80339A6C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_21:
    // 0x80339A70: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339A74: nop

    // 0x80339A78: lh          $t2, 0xB8($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB8);
    // 0x80339A7C: nop

    // 0x80339A80: bne         $t2, $zero, L_80339AB0
    if (ctx->r10 != 0) {
        // 0x80339A84: nop
    
            goto L_80339AB0;
    }
    // 0x80339A84: nop

    // 0x80339A88: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80339A8C: nop

    // 0x80339A90: lh          $t5, 0xBA($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XBA);
    // 0x80339A94: lwc1        $f12, 0x20($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X20);
    // 0x80339A98: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x80339A9C: jal         0x80015538
    // 0x80339AA0: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_22;
    // 0x80339AA0: cvt.s.w     $f14, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    ctx->f14.fl = CVT_S_W(ctx->f10.u32l);
    after_22:
    // 0x80339AA4: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80339AA8: b           L_80339ADC
    // 0x80339AAC: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
        goto L_80339ADC;
    // 0x80339AAC: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
L_80339AB0:
    // 0x80339AB0: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80339AB4: nop

    // 0x80339AB8: lh          $t0, 0xBA($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBA);
    // 0x80339ABC: lwc1        $f12, 0x20($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80339AC0: negu        $t7, $t0
    ctx->r15 = SUB32(0, ctx->r8);
    // 0x80339AC4: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x80339AC8: jal         0x80015538
    // 0x80339ACC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_23;
    // 0x80339ACC: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    after_23:
    // 0x80339AD0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80339AD4: nop

    // 0x80339AD8: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
L_80339ADC:
    // 0x80339ADC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80339AE0: nop

    // 0x80339AE4: lh          $t1, 0xB8($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XB8);
    // 0x80339AE8: nop

    // 0x80339AEC: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x80339AF0: sh          $t2, 0xB8($t8)
    MEM_H(0XB8, ctx->r24) = ctx->r10;
    // 0x80339AF4: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80339AF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80339AFC: lh          $t5, 0xB8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XB8);
    // 0x80339B00: nop

    // 0x80339B04: bne         $t5, $at, L_80339B18
    if (ctx->r13 != ctx->r1) {
        // 0x80339B08: nop
    
            goto L_80339B18;
    }
    // 0x80339B08: nop

    // 0x80339B0C: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80339B10: nop

    // 0x80339B14: sh          $zero, 0xB8($t3)
    MEM_H(0XB8, ctx->r11) = 0;
L_80339B18:
    // 0x80339B18: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80339B1C: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x80339B20: sh          $t9, 0xBA($t0)
    MEM_H(0XBA, ctx->r8) = ctx->r25;
    // 0x80339B24: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80339B28: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80339B2C: lh          $t6, 0x108($t7)
    ctx->r14 = MEM_H(ctx->r15, 0X108);
    // 0x80339B30: nop

    // 0x80339B34: bne         $t6, $at, L_80339B5C
    if (ctx->r14 != ctx->r1) {
        // 0x80339B38: nop
    
            goto L_80339B5C;
    }
    // 0x80339B38: nop

    // 0x80339B3C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339B40: nop

    // 0x80339B44: lh          $t2, 0xB6($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XB6);
    // 0x80339B48: nop

    // 0x80339B4C: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x80339B50: nop

    // 0x80339B54: cvt.s.w     $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    ctx->f18.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80339B58: swc1        $f18, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f18.u32l;
L_80339B5C:
    // 0x80339B5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339B60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339B64: jal         0x80029C40
    // 0x80339B68: nop

    func_80029C40(rdram, ctx);
        goto after_24;
    // 0x80339B68: nop

    after_24:
    // 0x80339B6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339B70: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339B74: jal         0x80029D04
    // 0x80339B78: nop

    func_80029D04(rdram, ctx);
        goto after_25;
    // 0x80339B78: nop

    after_25:
    // 0x80339B7C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80339B80: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80339B84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339B88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339B8C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80339B90: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x80339B94: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80339B98: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80339B9C: jal         0x80029018
    // 0x80339BA0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_80029018(rdram, ctx);
        goto after_26;
    // 0x80339BA0: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_26:
    // 0x80339BA4: beq         $v0, $zero, L_80339BC8
    if (ctx->r2 == 0) {
        // 0x80339BA8: nop
    
            goto L_80339BC8;
    }
    // 0x80339BA8: nop

    // 0x80339BAC: jal         0x800297DC
    // 0x80339BB0: nop

    func_800297DC(rdram, ctx);
        goto after_27;
    // 0x80339BB0: nop

    after_27:
    // 0x80339BB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339BB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339BBC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80339BC0: jal         0x80029A9C
    // 0x80339BC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029A9C(rdram, ctx);
        goto after_28;
    // 0x80339BC4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_28:
L_80339BC8:
    // 0x80339BC8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80339BCC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80339BD0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80339BD4: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80339BD8: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80339BDC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339BE0: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80339BE4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339BE8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339BEC: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x80339BF0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80339BF4: beq         $t5, $at, L_80339D1C
    if (ctx->r13 == ctx->r1) {
        // 0x80339BF8: nop
    
            goto L_80339D1C;
    }
    // 0x80339BF8: nop

    // 0x80339BFC: lw          $t9, 0x48($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X48);
    // 0x80339C00: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80339C04: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339C08: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339C0C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80339C10: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339C14: lwc1        $f10, 0x3C($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80339C18: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339C1C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339C20: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339C24: swc1        $f10, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f10.u32l;
    // 0x80339C28: lw          $t6, 0x48($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X48);
    // 0x80339C2C: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80339C30: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80339C34: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80339C38: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339C3C: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80339C40: lwc1        $f16, 0x18($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X18);
    // 0x80339C44: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80339C48: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339C4C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80339C50: swc1        $f16, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f16.u32l;
    // 0x80339C54: lw          $t8, 0x48($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X48);
    // 0x80339C58: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339C5C: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80339C60: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80339C64: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339C68: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80339C6C: lwc1        $f4, 0x1C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80339C70: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339C74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339C78: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80339C7C: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80339C80: lw          $t3, 0x48($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X48);
    // 0x80339C84: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80339C88: sll         $t9, $t3, 2
    ctx->r25 = S32(ctx->r11 << 2);
    // 0x80339C8C: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80339C90: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80339C94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80339C98: lwc1        $f18, 0x0($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80339C9C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80339CA0: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x80339CA4: add.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f6.fl;
    // 0x80339CA8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80339CAC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339CB0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80339CB4: swc1        $f8, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f8.u32l;
    // 0x80339CB8: lw          $t7, 0x48($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X48);
    // 0x80339CBC: lw          $t0, 0x5C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X5C);
    // 0x80339CC0: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x80339CC4: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80339CC8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80339CCC: addu        $t6, $t6, $t7
    ctx->r14 = ADD32(ctx->r14, ctx->r15);
    // 0x80339CD0: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80339CD4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80339CD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339CDC: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80339CE0: swc1        $f10, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f10.u32l;
    // 0x80339CE4: lw          $t1, 0x48($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X48);
    // 0x80339CE8: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80339CEC: sll         $t8, $t1, 2
    ctx->r24 = S32(ctx->r9 << 2);
    // 0x80339CF0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80339CF4: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x80339CF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339CFC: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x80339D00: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80339D04: addu        $t8, $t8, $t1
    ctx->r24 = ADD32(ctx->r24, ctx->r9);
    // 0x80339D08: add.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80339D0C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80339D10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339D14: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80339D18: swc1        $f18, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f18.u32l;
L_80339D1C:
    // 0x80339D1C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80339D20: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80339D24: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80339D28: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80339D2C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339D30: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339D34: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339D38: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80339D3C: addu        $t3, $t3, $t5
    ctx->r11 = ADD32(ctx->r11, ctx->r13);
    // 0x80339D40: lh          $t3, 0x423A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X423A);
    // 0x80339D44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80339D48: beq         $t3, $at, L_80339E70
    if (ctx->r11 == ctx->r1) {
        // 0x80339D4C: nop
    
            goto L_80339E70;
    }
    // 0x80339D4C: nop

    // 0x80339D50: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80339D54: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80339D58: sll         $t7, $t0, 2
    ctx->r15 = S32(ctx->r8 << 2);
    // 0x80339D5C: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80339D60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339D64: addu        $t7, $t7, $t0
    ctx->r15 = ADD32(ctx->r15, ctx->r8);
    // 0x80339D68: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80339D6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339D70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339D74: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80339D78: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x80339D7C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80339D80: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80339D84: sll         $t1, $t2, 2
    ctx->r9 = S32(ctx->r10 << 2);
    // 0x80339D88: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80339D8C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80339D90: addu        $t1, $t1, $t2
    ctx->r9 = ADD32(ctx->r9, ctx->r10);
    // 0x80339D94: lwc1        $f8, 0x18($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X18);
    // 0x80339D98: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80339D9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339DA0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80339DA4: swc1        $f8, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f8.u32l;
    // 0x80339DA8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80339DAC: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80339DB0: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80339DB4: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339DB8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80339DBC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80339DC0: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80339DC4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80339DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339DCC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80339DD0: swc1        $f10, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f10.u32l;
    // 0x80339DD4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80339DD8: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80339DDC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80339DE0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80339DE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339DE8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339DEC: lwc1        $f16, 0x0($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80339DF0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80339DF4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80339DF8: sub.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x80339DFC: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80339E00: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339E04: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80339E08: swc1        $f18, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f18.u32l;
    // 0x80339E0C: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80339E10: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80339E14: sll         $t2, $t6, 2
    ctx->r10 = S32(ctx->r14 << 2);
    // 0x80339E18: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80339E1C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80339E20: addu        $t2, $t2, $t6
    ctx->r10 = ADD32(ctx->r10, ctx->r14);
    // 0x80339E24: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80339E28: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80339E2C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339E30: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80339E34: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x80339E38: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80339E3C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339E40: sll         $t4, $t8, 2
    ctx->r12 = S32(ctx->r24 << 2);
    // 0x80339E44: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80339E48: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80339E4C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80339E50: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80339E54: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80339E58: addu        $t4, $t4, $t8
    ctx->r12 = ADD32(ctx->r12, ctx->r24);
    // 0x80339E5C: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80339E60: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80339E64: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339E68: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80339E6C: swc1        $f16, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f16.u32l;
L_80339E70:
    // 0x80339E70: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80339E74: nop

    // 0x80339E78: lh          $t3, 0xBC($t5)
    ctx->r11 = MEM_H(ctx->r13, 0XBC);
    // 0x80339E7C: nop

    // 0x80339E80: beq         $t3, $zero, L_80339EF8
    if (ctx->r11 == 0) {
        // 0x80339E84: nop
    
            goto L_80339EF8;
    }
    // 0x80339E84: nop

    // 0x80339E88: lw          $t9, 0x5C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X5C);
    // 0x80339E8C: nop

    // 0x80339E90: lh          $t0, 0xBC($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XBC);
    // 0x80339E94: nop

    // 0x80339E98: addiu       $t7, $t0, -0x1
    ctx->r15 = ADD32(ctx->r8, -0X1);
    // 0x80339E9C: sh          $t7, 0xBC($t9)
    MEM_H(0XBC, ctx->r25) = ctx->r15;
    // 0x80339EA0: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80339EA4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80339EA8: lh          $t2, 0xBC($t6)
    ctx->r10 = MEM_H(ctx->r14, 0XBC);
    // 0x80339EAC: nop

    // 0x80339EB0: bne         $t2, $at, L_80339ED0
    if (ctx->r10 != ctx->r1) {
        // 0x80339EB4: nop
    
            goto L_80339ED0;
    }
    // 0x80339EB4: nop

    // 0x80339EB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339EBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339EC0: jal         0x800281A4
    // 0x80339EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_29;
    // 0x80339EC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_29:
    // 0x80339EC8: b           L_80339EF8
    // 0x80339ECC: nop

        goto L_80339EF8;
    // 0x80339ECC: nop

L_80339ED0:
    // 0x80339ED0: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339ED4: nop

    // 0x80339ED8: lh          $t8, 0xBC($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XBC);
    // 0x80339EDC: nop

    // 0x80339EE0: bne         $t8, $zero, L_80339EF8
    if (ctx->r24 != 0) {
        // 0x80339EE4: nop
    
            goto L_80339EF8;
    }
    // 0x80339EE4: nop

    // 0x80339EE8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339EEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339EF0: jal         0x800281A4
    // 0x80339EF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_30;
    // 0x80339EF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_30:
L_80339EF8:
    // 0x80339EF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339EFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339F00: jal         0x8001B62C
    // 0x80339F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_31;
    // 0x80339F04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_31:
    // 0x80339F08: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80339F0C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339F10: nop

    // 0x80339F14: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80339F18: nop

    // 0x80339F1C: bc1f        L_80339F7C
    if (!c1cs) {
        // 0x80339F20: nop
    
            goto L_80339F7C;
    }
    // 0x80339F20: nop

    // 0x80339F24: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80339F28: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80339F2C: lw          $t4, 0x5C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X5C);
    // 0x80339F30: nop

    // 0x80339F34: swc1        $f18, 0x40($t4)
    MEM_W(0X40, ctx->r12) = ctx->f18.u32l;
    // 0x80339F38: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80339F3C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80339F40: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80339F44: nop

    // 0x80339F48: swc1        $f6, 0xD4($t5)
    MEM_W(0XD4, ctx->r13) = ctx->f6.u32l;
    // 0x80339F4C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80339F50: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80339F54: lw          $t3, 0x5C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X5C);
    // 0x80339F58: nop

    // 0x80339F5C: swc1        $f8, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->f8.u32l;
    // 0x80339F60: lw          $t7, 0x5C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X5C);
    // 0x80339F64: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x80339F68: sh          $t0, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r8;
    // 0x80339F6C: lw          $t6, 0x5C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X5C);
    // 0x80339F70: addiu       $t9, $zero, 0xC
    ctx->r25 = ADD32(0, 0XC);
    // 0x80339F74: b           L_80339FEC
    // 0x80339F78: sh          $t9, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r25;
        goto L_80339FEC;
    // 0x80339F78: sh          $t9, 0xAC($t6)
    MEM_H(0XAC, ctx->r14) = ctx->r25;
L_80339F7C:
    // 0x80339F7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80339F80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80339F84: jal         0x8001B62C
    // 0x80339F88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_32;
    // 0x80339F88: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_32:
    // 0x80339F8C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80339F90: nop

    // 0x80339F94: c.eq.s      $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f0.fl == ctx->f10.fl;
    // 0x80339F98: nop

    // 0x80339F9C: bc1f        L_80339FEC
    if (!c1cs) {
        // 0x80339FA0: nop
    
            goto L_80339FEC;
    }
    // 0x80339FA0: nop

    // 0x80339FA4: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80339FA8: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80339FAC: lw          $t2, 0x5C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X5C);
    // 0x80339FB0: nop

    // 0x80339FB4: swc1        $f16, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f16.u32l;
    // 0x80339FB8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80339FBC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339FC0: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80339FC4: nop

    // 0x80339FC8: swc1        $f4, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f4.u32l;
    // 0x80339FCC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80339FD0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80339FD4: lw          $t8, 0x5C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X5C);
    // 0x80339FD8: nop

    // 0x80339FDC: swc1        $f18, 0xD8($t8)
    MEM_W(0XD8, ctx->r24) = ctx->f18.u32l;
    // 0x80339FE0: lw          $t5, 0x5C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X5C);
    // 0x80339FE4: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80339FE8: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
L_80339FEC:
    // 0x80339FEC: b           L_80339FF4
    // 0x80339FF0: nop

        goto L_80339FF4;
    // 0x80339FF0: nop

L_80339FF4:
    // 0x80339FF4: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80339FF8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80339FFC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033A000: lw          $s0, 0x24($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X24);
    // 0x8033A004: lw          $s1, 0x28($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X28);
    // 0x8033A008: jr          $ra
    // 0x8033A00C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
    return;
    // 0x8033A00C: addiu       $sp, $sp, 0x60
    ctx->r29 = ADD32(ctx->r29, 0X60);
;}
RECOMP_FUNC void func_80339064_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80339064: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80339068: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033906C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80339070: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80339074: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80339078: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033907C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80339080: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80339084: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80339088: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033908C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80339090: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80339094: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80339098: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033909C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803390A0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x803390A4: addiu       $a1, $a1, 0x463C
    ctx->r5 = ADD32(ctx->r5, 0X463C);
    // 0x803390A8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803390AC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x803390B0: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    // 0x803390B4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803390B8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x803390BC: jal         0x80027464
    // 0x803390C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x803390C0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803390C4: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x803390C8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803390CC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803390D0: beq         $t1, $at, L_803392BC
    if (ctx->r9 == ctx->r1) {
        // 0x803390D4: nop
    
            goto L_803392BC;
    }
    // 0x803390D4: nop

    // 0x803390D8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803390DC: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x803390E0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803390E4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803390E8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803390EC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803390F0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803390F4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803390F8: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x803390FC: nop

    // 0x80339100: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x80339104: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80339108: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033910C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80339110: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80339114: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80339118: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033911C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80339120: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80339124: lh          $t8, 0x423A($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X423A);
    // 0x80339128: nop

    // 0x8033912C: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x80339130: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80339134: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80339138: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x8033913C: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80339140: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80339144: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339148: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033914C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80339150: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339154: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80339158: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x8033915C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80339160: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80339164: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80339168: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033916C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80339170: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80339174: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339178: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033917C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339180: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80339184: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80339188: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033918C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x80339190: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80339194: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80339198: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033919C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803391A0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803391A4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803391A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803391AC: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803391B0: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x803391B4: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x803391B8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803391BC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803391C0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803391C4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803391C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803391CC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803391D0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803391D4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803391D8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803391DC: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x803391E0: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x803391E4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803391E8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803391EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803391F0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803391F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x803391F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803391FC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80339200: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339204: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80339208: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x8033920C: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80339210: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80339214: sll         $t6, $t9, 2
    ctx->r14 = S32(ctx->r25 << 2);
    // 0x80339218: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x8033921C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80339220: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80339224: addu        $t6, $t6, $t9
    ctx->r14 = ADD32(ctx->r14, ctx->r25);
    // 0x80339228: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8033922C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339230: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80339234: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
    // 0x80339238: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033923C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80339240: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80339244: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339248: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033924C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80339250: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80339254: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80339258: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033925C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80339260: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80339264: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80339268: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8033926C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80339270: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80339274: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80339278: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033927C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80339280: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80339284: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80339288: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033928C: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80339290: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80339294: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80339298: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8033929C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803392A0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803392A4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803392A8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803392AC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803392B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803392B4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803392B8: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_803392BC:
    // 0x803392BC: b           L_803392C4
    // 0x803392C0: nop

        goto L_803392C4;
    // 0x803392C0: nop

L_803392C4:
    // 0x803392C4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803392C8: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803392CC: jr          $ra
    // 0x803392D0: nop

    return;
    // 0x803392D0: nop

;}
RECOMP_FUNC void func_803334E4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803334E4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803334E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803334EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334F4: jal         0x8002B0E4
    // 0x803334F8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x803334F8: nop

    after_0:
    // 0x803334FC: b           L_80333504
    // 0x80333500: nop

        goto L_80333504;
    // 0x80333500: nop

L_80333504:
    // 0x80333504: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333508: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033350C: jr          $ra
    // 0x80333510: nop

    return;
    // 0x80333510: nop

;}
RECOMP_FUNC void func_803366A8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803366A8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803366AC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803366B0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803366B4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803366B8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803366BC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803366C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803366C4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803366C8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803366CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803366D0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803366D4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803366D8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803366DC: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803366E0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803366E4: nop

    // 0x803366E8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803366EC: nop

    // 0x803366F0: bne         $t1, $zero, L_80336840
    if (ctx->r9 != 0) {
        // 0x803366F4: nop
    
            goto L_80336840;
    }
    // 0x803366F4: nop

    // 0x803366F8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803366FC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80336700: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80336704: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80336708: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033670C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80336710: nop

    // 0x80336714: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80336718: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033671C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80336720: nop

    // 0x80336724: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80336728: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033672C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80336730: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80336734: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80336738: jal         0x80015538
    // 0x8033673C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8033673C: nop

    after_0:
    // 0x80336740: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80336744: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80336748: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8033674C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80336750: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80336754: nop

    // 0x80336758: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033675C: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x80336760: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80336764: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x80336768: nop

    // 0x8033676C: jal         0x800297DC
    // 0x80336770: nop

    func_800297DC(rdram, ctx);
        goto after_1;
    // 0x80336770: nop

    after_1:
    // 0x80336774: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80336778: sll         $t2, $s0, 2
    ctx->r10 = S32(ctx->r16 << 2);
    // 0x8033677C: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x80336780: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80336784: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80336788: subu        $t2, $t2, $s0
    ctx->r10 = SUB32(ctx->r10, ctx->r16);
    // 0x8033678C: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80336790: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80336794: addu        $t2, $t2, $s0
    ctx->r10 = ADD32(ctx->r10, ctx->r16);
    // 0x80336798: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8033679C: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x803367A0: cvt.s.w     $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    ctx->f14.fl = CVT_S_W(ctx->f16.u32l);
    // 0x803367A4: jal         0x80015538
    // 0x803367A8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x803367A8: cvt.s.w     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    ctx->f12.fl = CVT_S_W(ctx->f10.u32l);
    after_2:
    // 0x803367AC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803367B0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803367B4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803367B8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803367BC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803367C0: nop

    // 0x803367C4: cvt.w.s     $f18, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    ctx->f18.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803367C8: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x803367CC: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803367D0: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x803367D4: nop

    // 0x803367D8: jal         0x80014E80
    // 0x803367DC: addiu       $a0, $zero, -0x2D
    ctx->r4 = ADD32(0, -0X2D);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x803367DC: addiu       $a0, $zero, -0x2D
    ctx->r4 = ADD32(0, -0X2D);
    after_3:
    // 0x803367E0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803367E4: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803367E8: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x803367EC: mtc1        $s0, $f6
    ctx->f6.u32l = ctx->r16;
    // 0x803367F0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803367F4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803367F8: jal         0x80015538
    // 0x803367FC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803367FC: cvt.s.w     $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    ctx->f12.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x80336800: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80336804: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80336808: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8033680C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80336810: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80336814: nop

    // 0x80336818: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033681C: mfc1        $t9, $f8
    ctx->r25 = (int32_t)ctx->f8.u32l;
    // 0x80336820: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80336824: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
    // 0x80336828: nop

    // 0x8033682C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80336830: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80336834: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80336838: nop

    // 0x8033683C: swc1        $f10, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f10.u32l;
L_80336840:
    // 0x80336840: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80336844: nop

    // 0x80336848: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x8033684C: lw          $a2, 0xD4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0XD4);
    // 0x80336850: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80336854: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80336858: cvt.s.w     $f16, $f16
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 16);
    ctx->f16.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033685C: mfc1        $a1, $f16
    ctx->r5 = (int32_t)ctx->f16.u32l;
    // 0x80336860: jal         0x800BFF20
    // 0x80336864: nop

    func_800BFF20(rdram, ctx);
        goto after_5;
    // 0x80336864: nop

    after_5:
    // 0x80336868: sb          $v0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r2;
    // 0x8033686C: lb          $t4, 0x33($sp)
    ctx->r12 = MEM_B(ctx->r29, 0X33);
    // 0x80336870: nop

    // 0x80336874: bne         $t4, $zero, L_803368A8
    if (ctx->r12 != 0) {
        // 0x80336878: nop
    
            goto L_803368A8;
    }
    // 0x80336878: nop

    // 0x8033687C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80336880: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x80336884: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x80336888: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033688C: nop

    // 0x80336890: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x80336894: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80336898: nop

    // 0x8033689C: lwc1        $f18, 0x3C($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x803368A0: nop

    // 0x803368A4: swc1        $f18, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f18.u32l;
L_803368A8:
    // 0x803368A8: lb          $t9, 0x33($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X33);
    // 0x803368AC: nop

    // 0x803368B0: beq         $t9, $zero, L_803368D8
    if (ctx->r25 == 0) {
        // 0x803368B4: nop
    
            goto L_803368D8;
    }
    // 0x803368B4: nop

    // 0x803368B8: lb          $t0, 0x33($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X33);
    // 0x803368BC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x803368C0: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x803368C4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803368C8: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803368CC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803368D0: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x803368D4: swc1        $f10, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f10.u32l;
L_803368D8:
    // 0x803368D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803368E0: jal         0x80029C40
    // 0x803368E4: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x803368E4: nop

    after_6:
    // 0x803368E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803368F0: jal         0x80029D04
    // 0x803368F4: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x803368F4: nop

    after_7:
    // 0x803368F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803368FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336900: jal         0x80028FA0
    // 0x80336904: nop

    func_80028FA0(rdram, ctx);
        goto after_8;
    // 0x80336904: nop

    after_8:
    // 0x80336908: beq         $v0, $zero, L_80336920
    if (ctx->r2 == 0) {
        // 0x8033690C: nop
    
            goto L_80336920;
    }
    // 0x8033690C: nop

    // 0x80336910: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336914: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336918: jal         0x80029B60
    // 0x8033691C: nop

    func_80029B60(rdram, ctx);
        goto after_9;
    // 0x8033691C: nop

    after_9:
L_80336920:
    // 0x80336920: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80336924: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80336928: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033692C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336930: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80336934: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80336938: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033693C: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80336940: jal         0x80029018
    // 0x80336944: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_10;
    // 0x80336944: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_10:
    // 0x80336948: beq         $v0, $zero, L_803369E8
    if (ctx->r2 == 0) {
        // 0x8033694C: nop
    
            goto L_803369E8;
    }
    // 0x8033694C: nop

    // 0x80336950: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80336954: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80336958: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8033695C: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80336960: jal         0x80015538
    // 0x80336964: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80336964: nop

    after_11:
    // 0x80336968: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x8033696C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80336970: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80336974: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80336978: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8033697C: nop

    // 0x80336980: cvt.w.s     $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80336984: mfc1        $t4, $f4
    ctx->r12 = (int32_t)ctx->f4.u32l;
    // 0x80336988: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x8033698C: sh          $t4, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r12;
    // 0x80336990: nop

    // 0x80336994: jal         0x80014E80
    // 0x80336998: addiu       $a0, $zero, -0xB4
    ctx->r4 = ADD32(0, -0XB4);
    Math_Random(rdram, ctx);
        goto after_12;
    // 0x80336998: addiu       $a0, $zero, -0xB4
    ctx->r4 = ADD32(0, -0XB4);
    after_12:
    // 0x8033699C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803369A0: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803369A4: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x803369A8: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x803369AC: mtc1        $t7, $f6
    ctx->f6.u32l = ctx->r15;
    // 0x803369B0: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803369B4: jal         0x80015538
    // 0x803369B8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_13;
    // 0x803369B8: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_13:
    // 0x803369BC: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x803369C0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803369C4: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x803369C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803369CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803369D0: nop

    // 0x803369D4: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803369D8: mfc1        $t9, $f10
    ctx->r25 = (int32_t)ctx->f10.u32l;
    // 0x803369DC: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x803369E0: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
    // 0x803369E4: nop

L_803369E8:
    // 0x803369E8: b           L_803369F0
    // 0x803369EC: nop

        goto L_803369F0;
    // 0x803369EC: nop

L_803369F0:
    // 0x803369F0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803369F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803369F8: jr          $ra
    // 0x803369FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803369FC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80338E88_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338E88: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338E8C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338E90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338E94: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338E98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338E9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338EA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338EA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338EAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338EB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338EB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338EB8: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80338EBC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80338EC0: nop

    // 0x80338EC4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338EC8: nop

    // 0x80338ECC: bne         $t1, $zero, L_80338F90
    if (ctx->r9 != 0) {
        // 0x80338ED0: nop
    
            goto L_80338F90;
    }
    // 0x80338ED0: nop

    // 0x80338ED4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80338ED8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80338EDC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80338EE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338EE4: lui         $t4, 0x8012
    ctx->r12 = S32(0X8012 << 16);
    // 0x80338EE8: addiu       $t4, $t4, -0x7260
    ctx->r12 = ADD32(ctx->r12, -0X7260);
    // 0x80338EEC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338EF0: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80338EF4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338EF8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80338EFC: jal         0x8001C0EC
    // 0x80338F00: addiu       $a3, $zero, 0x18E
    ctx->r7 = ADD32(0, 0X18E);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80338F00: addiu       $a3, $zero, 0x18E
    ctx->r7 = ADD32(0, 0X18E);
    after_0:
    // 0x80338F04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338F08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80338F10: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x80338F14: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80338F18: jal         0x800175F0
    // 0x80338F1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80338F1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80338F20: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80338F24: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80338F28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80338F2C: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80338F30: addiu       $t6, $zero, 0x10
    ctx->r14 = ADD32(0, 0X10);
    // 0x80338F34: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x80338F38: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x80338F3C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80338F40: lui         $a3, 0x4080
    ctx->r7 = S32(0X4080 << 16);
    // 0x80338F44: jal         0x8002AE38
    // 0x80338F48: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8002AE38(rdram, ctx);
        goto after_2;
    // 0x80338F48: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_2:
    // 0x80338F4C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80338F50: nop

    // 0x80338F54: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x80338F58: nop

    // 0x80338F5C: beq         $t8, $zero, L_80338F90
    if (ctx->r24 == 0) {
        // 0x80338F60: nop
    
            goto L_80338F90;
    }
    // 0x80338F60: nop

    // 0x80338F64: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80338F68: lui         $at, 0x4370
    ctx->r1 = S32(0X4370 << 16);
    // 0x80338F6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80338F70: lwc1        $f8, 0x4($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80338F74: lh          $a0, 0xA8($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XA8);
    // 0x80338F78: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80338F7C: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80338F80: mfc1        $a2, $f16
    ctx->r6 = (int32_t)ctx->f16.u32l;
    // 0x80338F84: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x80338F88: jal         0x800941C4
    // 0x80338F8C: nop

    func_800941C4(rdram, ctx);
        goto after_3;
    // 0x80338F8C: nop

    after_3:
L_80338F90:
    // 0x80338F90: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338F94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338F98: jal         0x8001B44C
    // 0x80338F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80338F9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80338FA0: beq         $v0, $zero, L_80338FB8
    if (ctx->r2 == 0) {
        // 0x80338FA4: nop
    
            goto L_80338FB8;
    }
    // 0x80338FA4: nop

    // 0x80338FA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338FAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338FB0: jal         0x8002B114
    // 0x80338FB4: nop

    func_8002B114(rdram, ctx);
        goto after_5;
    // 0x80338FB4: nop

    after_5:
L_80338FB8:
    // 0x80338FB8: b           L_80338FC0
    // 0x80338FBC: nop

        goto L_80338FC0;
    // 0x80338FBC: nop

L_80338FC0:
    // 0x80338FC0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80338FC4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80338FC8: jr          $ra
    // 0x80338FCC: nop

    return;
    // 0x80338FCC: nop

;}
RECOMP_FUNC void func_803378FC_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803378FC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80337900: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80337904: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80337908: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033790C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337910: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337914: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033791C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337920: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337924: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337928: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033792C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337930: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80337934: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337938: nop

    // 0x8033793C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337940: nop

    // 0x80337944: bne         $t1, $zero, L_80337994
    if (ctx->r9 != 0) {
        // 0x80337948: nop
    
            goto L_80337994;
    }
    // 0x80337948: nop

    // 0x8033794C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80337950: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80337954: nop

    // 0x80337958: swc1        $f4, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f4.u32l;
    // 0x8033795C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337960: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80337964: nop

    // 0x80337968: swc1        $f6, 0x48($t3)
    MEM_W(0X48, ctx->r11) = ctx->f6.u32l;
    // 0x8033796C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337970: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80337974: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x80337978: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8033797C: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80337980: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80337984: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337988: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033798C: jal         0x8001BBDC
    // 0x80337990: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80337990: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_80337994:
    // 0x80337994: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80337998: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033799C: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x803379A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803379A4: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x803379A8: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x803379AC: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x803379B0: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x803379B4: jal         0x8001BB34
    // 0x803379B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x803379B8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
    // 0x803379BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803379C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803379C4: jal         0x80029C40
    // 0x803379C8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x803379C8: nop

    after_2:
    // 0x803379CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803379D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803379D4: jal         0x80029D04
    // 0x803379D8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x803379D8: nop

    after_3:
    // 0x803379DC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803379E0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803379E4: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x803379E8: nop

    // 0x803379EC: bne         $t2, $at, L_80337A2C
    if (ctx->r10 != ctx->r1) {
        // 0x803379F0: nop
    
            goto L_80337A2C;
    }
    // 0x803379F0: nop

    // 0x803379F4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803379F8: addiu       $t3, $zero, 0x5
    ctx->r11 = ADD32(0, 0X5);
    // 0x803379FC: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x80337A00: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80337A04: nop

    // 0x80337A08: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
    // 0x80337A0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337A10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337A14: jal         0x8001BBDC
    // 0x80337A18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80337A18: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80337A1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337A20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337A24: jal         0x8001BB34
    // 0x80337A28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_5;
    // 0x80337A28: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_80337A2C:
    // 0x80337A2C: b           L_80337A34
    // 0x80337A30: nop

        goto L_80337A34;
    // 0x80337A30: nop

L_80337A34:
    // 0x80337A34: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80337A38: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80337A3C: jr          $ra
    // 0x80337A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80337A40: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80338754_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338754: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x80338758: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033875C: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80338760: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338764: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338768: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033876C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338770: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338774: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338778: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033877C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338780: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338784: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338788: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8033878C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80338790: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80338794: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
    // 0x80338798: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8033879C: nop

    // 0x803387A0: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x803387A4: nop

    // 0x803387A8: bne         $t2, $zero, L_80338814
    if (ctx->r10 != 0) {
        // 0x803387AC: nop
    
            goto L_80338814;
    }
    // 0x803387AC: nop

    // 0x803387B0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x803387B4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803387B8: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x803387BC: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x803387C0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803387C4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803387C8: nop

    // 0x803387CC: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x803387D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803387D4: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x803387D8: nop

    // 0x803387DC: swc1        $f6, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f6.u32l;
    // 0x803387E0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803387E4: addiu       $t7, $zero, 0x258
    ctx->r15 = ADD32(0, 0X258);
    // 0x803387E8: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x803387EC: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x803387F0: nop

    // 0x803387F4: lwc1        $f8, 0x3C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x803387F8: nop

    // 0x803387FC: swc1        $f8, 0xD4($t9)
    MEM_W(0XD4, ctx->r25) = ctx->f8.u32l;
    // 0x80338800: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80338804: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80338808: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8033880C: nop

    // 0x80338810: swc1        $f10, 0xD8($t0)
    MEM_W(0XD8, ctx->r8) = ctx->f10.u32l;
L_80338814:
    // 0x80338814: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338818: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033881C: jal         0x80028FA0
    // 0x80338820: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x80338820: nop

    after_0:
    // 0x80338824: beq         $v0, $zero, L_8033883C
    if (ctx->r2 == 0) {
        // 0x80338828: nop
    
            goto L_8033883C;
    }
    // 0x80338828: nop

    // 0x8033882C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338830: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338834: jal         0x80029B60
    // 0x80338838: nop

    func_80029B60(rdram, ctx);
        goto after_1;
    // 0x80338838: nop

    after_1:
L_8033883C:
    // 0x8033883C: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80338840: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80338844: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x80338848: nop

    // 0x8033884C: bne         $t2, $at, L_803388A0
    if (ctx->r10 != ctx->r1) {
        // 0x80338850: nop
    
            goto L_803388A0;
    }
    // 0x80338850: nop

    // 0x80338854: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338858: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033885C: jal         0x8002A8B4
    // 0x80338860: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_2;
    // 0x80338860: lui         $a1, 0x3F80
    ctx->r5 = S32(0X3F80 << 16);
    after_2:
    // 0x80338864: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338868: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033886C: jal         0x8002A9A4
    // 0x80338870: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A9A4(rdram, ctx);
        goto after_3;
    // 0x80338870: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_3:
    // 0x80338874: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338878: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033887C: jal         0x8002A560
    // 0x80338880: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    func_8002A560(rdram, ctx);
        goto after_4;
    // 0x80338880: lui         $a1, 0x4100
    ctx->r5 = S32(0X4100 << 16);
    after_4:
    // 0x80338884: bne         $v0, $zero, L_80338898
    if (ctx->r2 != 0) {
        // 0x80338888: nop
    
            goto L_80338898;
    }
    // 0x80338888: nop

    // 0x8033888C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80338890: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80338894: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
L_80338898:
    // 0x80338898: b           L_803389B8
    // 0x8033889C: nop

        goto L_803389B8;
    // 0x8033889C: nop

L_803388A0:
    // 0x803388A0: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x803388A4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x803388A8: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x803388AC: nop

    // 0x803388B0: bne         $t6, $at, L_80338920
    if (ctx->r14 != ctx->r1) {
        // 0x803388B4: nop
    
            goto L_80338920;
    }
    // 0x803388B4: nop

    // 0x803388B8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x803388BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803388C0: lw          $a2, 0xD4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0XD4);
    // 0x803388C4: lw          $a3, 0xD8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0XD8);
    // 0x803388C8: jal         0x800BFFCC
    // 0x803388CC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    func_800BFFCC(rdram, ctx);
        goto after_5;
    // 0x803388CC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    after_5:
    // 0x803388D0: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x803388D4: lb          $t8, 0x2F($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X2F);
    // 0x803388D8: nop

    // 0x803388DC: bne         $t8, $zero, L_803388F0
    if (ctx->r24 != 0) {
        // 0x803388E0: nop
    
            goto L_803388F0;
    }
    // 0x803388E0: nop

    // 0x803388E4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x803388E8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x803388EC: sb          $t9, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r25;
L_803388F0:
    // 0x803388F0: lb          $t1, 0x2F($sp)
    ctx->r9 = MEM_B(ctx->r29, 0X2F);
    // 0x803388F4: nop

    // 0x803388F8: beq         $t1, $zero, L_80338920
    if (ctx->r9 == 0) {
        // 0x803388FC: nop
    
            goto L_80338920;
    }
    // 0x803388FC: nop

    // 0x80338900: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x80338904: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80338908: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x8033890C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80338910: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80338914: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80338918: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8033891C: swc1        $f6, 0xD8($t3)
    MEM_W(0XD8, ctx->r11) = ctx->f6.u32l;
L_80338920:
    // 0x80338920: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80338924: lui         $at, 0x4180
    ctx->r1 = S32(0X4180 << 16);
    // 0x80338928: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033892C: lwc1        $f8, 0x44($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X44);
    // 0x80338930: nop

    // 0x80338934: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80338938: nop

    // 0x8033893C: bc1f        L_80338960
    if (!c1cs) {
        // 0x80338940: nop
    
            goto L_80338960;
    }
    // 0x80338940: nop

    // 0x80338944: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80338948: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033894C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80338950: lwc1        $f16, 0x44($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80338954: nop

    // 0x80338958: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x8033895C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
L_80338960:
    // 0x80338960: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80338964: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80338968: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033896C: lwc1        $f6, 0x48($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X48);
    // 0x80338970: nop

    // 0x80338974: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80338978: nop

    // 0x8033897C: bc1f        L_803389A0
    if (!c1cs) {
        // 0x80338980: nop
    
            goto L_803389A0;
    }
    // 0x80338980: nop

    // 0x80338984: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80338988: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8033898C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80338990: lwc1        $f10, 0x48($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X48);
    // 0x80338994: nop

    // 0x80338998: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8033899C: swc1        $f18, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f18.u32l;
L_803389A0:
    // 0x803389A0: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x803389A4: nop

    // 0x803389A8: lh          $t9, 0xA6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA6);
    // 0x803389AC: nop

    // 0x803389B0: addiu       $t0, $t9, -0x10
    ctx->r8 = ADD32(ctx->r25, -0X10);
    // 0x803389B4: sh          $t0, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r8;
L_803389B8:
    // 0x803389B8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x803389BC: nop

    // 0x803389C0: lwc1        $f4, 0x3C($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x803389C4: nop

    // 0x803389C8: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
    // 0x803389CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389D4: jal         0x80029C40
    // 0x803389D8: nop

    func_80029C40(rdram, ctx);
        goto after_6;
    // 0x803389D8: nop

    after_6:
    // 0x803389DC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803389E4: jal         0x80029D04
    // 0x803389E8: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x803389E8: nop

    after_7:
    // 0x803389EC: lui         $at, 0xC2A0
    ctx->r1 = S32(0XC2A0 << 16);
    // 0x803389F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803389F4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803389F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803389FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338A00: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x80338A04: addiu       $a2, $sp, 0x3C
    ctx->r6 = ADD32(ctx->r29, 0X3C);
    // 0x80338A08: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80338A0C: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x80338A10: jal         0x800295C0
    // 0x80338A14: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_8;
    // 0x80338A14: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_8:
    // 0x80338A18: beq         $v0, $zero, L_80338A40
    if (ctx->r2 == 0) {
        // 0x80338A1C: nop
    
            goto L_80338A40;
    }
    // 0x80338A1C: nop

    // 0x80338A20: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80338A24: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80338A28: nop

    // 0x80338A2C: swc1        $f10, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f10.u32l;
    // 0x80338A30: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80338A34: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80338A38: nop

    // 0x80338A3C: swc1        $f16, 0x18($t3)
    MEM_W(0X18, ctx->r11) = ctx->f16.u32l;
L_80338A40:
    // 0x80338A40: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80338A44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80338A48: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338A4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338A50: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80338A54: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x80338A58: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80338A5C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80338A60: jal         0x80029018
    // 0x80338A64: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x80338A64: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_9:
    // 0x80338A68: beq         $v0, $zero, L_80338AD0
    if (ctx->r2 == 0) {
        // 0x80338A6C: nop
    
            goto L_80338AD0;
    }
    // 0x80338A6C: nop

    // 0x80338A70: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80338A74: nop

    // 0x80338A78: lwc1        $f6, 0x3C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80338A7C: nop

    // 0x80338A80: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80338A84: jal         0x800297DC
    // 0x80338A88: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x80338A88: nop

    after_10:
    // 0x80338A8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338A90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338A94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80338A98: jal         0x80029824
    // 0x80338A9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x80338A9C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x80338AA0: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80338AA4: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80338AA8: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x80338AAC: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80338AB0: nop

    // 0x80338AB4: lwc1        $f8, 0x3C($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80338AB8: nop

    // 0x80338ABC: swc1        $f8, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f8.u32l;
    // 0x80338AC0: lwc1        $f10, 0x30($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80338AC4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80338AC8: nop

    // 0x80338ACC: swc1        $f10, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f10.u32l;
L_80338AD0:
    // 0x80338AD0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80338AD4: nop

    // 0x80338AD8: lh          $t8, 0xA6($t0)
    ctx->r24 = MEM_H(ctx->r8, 0XA6);
    // 0x80338ADC: nop

    // 0x80338AE0: bgez        $t8, L_80338B00
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80338AE4: nop
    
            goto L_80338B00;
    }
    // 0x80338AE4: nop

    // 0x80338AE8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80338AEC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80338AF0: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x80338AF4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80338AF8: nop

    // 0x80338AFC: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80338B00:
    // 0x80338B00: b           L_80338B08
    // 0x80338B04: nop

        goto L_80338B08;
    // 0x80338B04: nop

L_80338B08:
    // 0x80338B08: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80338B0C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80338B10: jr          $ra
    // 0x80338B14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80338B14: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80338B58_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338B58: jr          $ra
    // 0x80338B5C: nop

    return;
    // 0x80338B5C: nop

    // 0x80338B60: jr          $ra
    // 0x80338B64: nop

    return;
    // 0x80338B64: nop

;}
RECOMP_FUNC void func_8033AC74_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033AC74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033AC78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033AC7C: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8033AC80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033AC84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033AC88: jal         0x8002B0E4
    // 0x8033AC8C: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033AC8C: nop

    after_0:
    // 0x8033AC90: b           L_8033AC98
    // 0x8033AC94: nop

        goto L_8033AC98;
    // 0x8033AC94: nop

L_8033AC98:
    // 0x8033AC98: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033AC9C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033ACA0: jr          $ra
    // 0x8033ACA4: nop

    return;
    // 0x8033ACA4: nop

;}
RECOMP_FUNC void func_80331D0C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D0C: jr          $ra
    // 0x80331D10: nop

    return;
    // 0x80331D10: nop

    // 0x80331D14: jr          $ra
    // 0x80331D18: nop

    return;
    // 0x80331D18: nop

;}
RECOMP_FUNC void func_80336D88_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336D88: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80336D8C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80336D90: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x80336D94: sw          $a1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r5;
    // 0x80336D98: sw          $a2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r6;
    // 0x80336D9C: sw          $s1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r17;
    // 0x80336DA0: sw          $s0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r16;
    // 0x80336DA4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80336DA8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80336DAC: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80336DB0: lw          $a2, 0x0($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X0);
    // 0x80336DB4: lw          $a3, 0x4($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X4);
    // 0x80336DB8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80336DBC: lwc1        $f6, 0x3C($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80336DC0: addiu       $a1, $a1, 0x3DD8
    ctx->r5 = ADD32(ctx->r5, 0X3DD8);
    // 0x80336DC4: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80336DC8: jal         0x80027464
    // 0x80336DCC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80336DCC: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x80336DD0: sh          $v0, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r2;
    // 0x80336DD4: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x80336DD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80336DDC: beq         $t7, $at, L_80336FE8
    if (ctx->r15 == ctx->r1) {
        // 0x80336DE0: nop
    
            goto L_80336FE8;
    }
    // 0x80336DE0: nop

    // 0x80336DE4: lh          $a0, 0x3E($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X3E);
    // 0x80336DE8: lh          $a1, 0x32($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X32);
    // 0x80336DEC: jal         0x80026F10
    // 0x80336DF0: nop

    func_80026F10(rdram, ctx);
        goto after_1;
    // 0x80336DF0: nop

    after_1:
    // 0x80336DF4: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x80336DF8: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80336DFC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80336E00: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336E04: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80336E08: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80336E0C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80336E10: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80336E14: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80336E18: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x80336E1C: lh          $t3, 0x42($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X42);
    // 0x80336E20: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80336E24: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80336E28: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80336E2C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80336E30: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80336E34: lwc1        $f8, 0x0($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80336E38: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80336E3C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80336E40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336E44: add.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f16.fl;
    // 0x80336E48: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80336E4C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80336E50: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x80336E54: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x80336E58: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80336E5C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80336E60: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80336E64: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80336E68: add.s       $f16, $f10, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f10.fl + ctx->f8.fl;
    // 0x80336E6C: swc1        $f16, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f16.u32l;
    // 0x80336E70: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x80336E74: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80336E78: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336E7C: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80336E80: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80336E84: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80336E88: swc1        $f6, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f6.u32l;
    // 0x80336E8C: lh          $t0, 0x42($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X42);
    // 0x80336E90: nop

    // 0x80336E94: sll         $t1, $t0, 4
    ctx->r9 = S32(ctx->r8 << 4);
    // 0x80336E98: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x80336E9C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80336EA0: addiu       $t2, $t1, 0x14A
    ctx->r10 = ADD32(ctx->r9, 0X14A);
    // 0x80336EA4: slti        $at, $t2, 0xB5
    ctx->r1 = SIGNED(ctx->r10) < 0XB5 ? 1 : 0;
    // 0x80336EA8: bne         $at, $zero, L_80336EF4
    if (ctx->r1 != 0) {
        // 0x80336EAC: nop
    
            goto L_80336EF4;
    }
    // 0x80336EAC: nop

    // 0x80336EB0: slti        $at, $t2, 0x168
    ctx->r1 = SIGNED(ctx->r10) < 0X168 ? 1 : 0;
    // 0x80336EB4: bne         $at, $zero, L_80336EC4
    if (ctx->r1 != 0) {
        // 0x80336EB8: nop
    
            goto L_80336EC4;
    }
    // 0x80336EB8: nop

    // 0x80336EBC: b           L_80336EE0
    // 0x80336EC0: addiu       $s0, $t1, -0x1E
    ctx->r16 = ADD32(ctx->r9, -0X1E);
        goto L_80336EE0;
    // 0x80336EC0: addiu       $s0, $t1, -0x1E
    ctx->r16 = ADD32(ctx->r9, -0X1E);
L_80336EC4:
    // 0x80336EC4: lh          $s0, 0x42($sp)
    ctx->r16 = MEM_H(ctx->r29, 0X42);
    // 0x80336EC8: nop

    // 0x80336ECC: sll         $t3, $s0, 4
    ctx->r11 = S32(ctx->r16 << 4);
    // 0x80336ED0: subu        $t3, $t3, $s0
    ctx->r11 = SUB32(ctx->r11, ctx->r16);
    // 0x80336ED4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80336ED8: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x80336EDC: addiu       $s0, $s0, 0x14A
    ctx->r16 = ADD32(ctx->r16, 0X14A);
L_80336EE0:
    // 0x80336EE0: mtc1        $s0, $f10
    ctx->f10.u32l = ctx->r16;
    // 0x80336EE4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80336EE8: cvt.s.w     $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    ctx->f8.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80336EEC: b           L_80336F48
    // 0x80336EF0: swc1        $f8, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f8.u32l;
        goto L_80336F48;
    // 0x80336EF0: swc1        $f8, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f8.u32l;
L_80336EF4:
    // 0x80336EF4: lh          $t5, 0x42($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X42);
    // 0x80336EF8: nop

    // 0x80336EFC: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x80336F00: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80336F04: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80336F08: addiu       $t7, $t6, 0x14A
    ctx->r15 = ADD32(ctx->r14, 0X14A);
    // 0x80336F0C: bgez        $t7, L_80336F1C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80336F10: nop
    
            goto L_80336F1C;
    }
    // 0x80336F10: nop

    // 0x80336F14: b           L_80336F38
    // 0x80336F18: addiu       $s1, $t6, 0x2B2
    ctx->r17 = ADD32(ctx->r14, 0X2B2);
        goto L_80336F38;
    // 0x80336F18: addiu       $s1, $t6, 0x2B2
    ctx->r17 = ADD32(ctx->r14, 0X2B2);
L_80336F1C:
    // 0x80336F1C: lh          $s1, 0x42($sp)
    ctx->r17 = MEM_H(ctx->r29, 0X42);
    // 0x80336F20: nop

    // 0x80336F24: sll         $t8, $s1, 4
    ctx->r24 = S32(ctx->r17 << 4);
    // 0x80336F28: subu        $t8, $t8, $s1
    ctx->r24 = SUB32(ctx->r24, ctx->r17);
    // 0x80336F2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80336F30: or          $s1, $t8, $zero
    ctx->r17 = ctx->r24 | 0;
    // 0x80336F34: addiu       $s1, $s1, 0x14A
    ctx->r17 = ADD32(ctx->r17, 0X14A);
L_80336F38:
    // 0x80336F38: mtc1        $s1, $f16
    ctx->f16.u32l = ctx->r17;
    // 0x80336F3C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80336F40: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80336F44: swc1        $f18, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f18.u32l;
L_80336F48:
    // 0x80336F48: lw          $t0, 0x38($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X38);
    // 0x80336F4C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80336F50: lwc1        $f4, 0x40($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80336F54: nop

    // 0x80336F58: swc1        $f4, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f4.u32l;
    // 0x80336F5C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80336F60: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80336F64: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80336F68: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80336F6C: nop

    // 0x80336F70: sh          $zero, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = 0;
    // 0x80336F74: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80336F78: addiu       $t5, $zero, 0x8C
    ctx->r13 = ADD32(0, 0X8C);
    // 0x80336F7C: sh          $t5, 0xB2($t7)
    MEM_H(0XB2, ctx->r15) = ctx->r13;
    // 0x80336F80: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80336F84: nop

    // 0x80336F88: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
    // 0x80336F8C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80336F90: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80336F94: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80336F98: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80336F9C: addiu       $t0, $t0, 0x73E0
    ctx->r8 = ADD32(ctx->r8, 0X73E0);
    // 0x80336FA0: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x80336FA4: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80336FA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336FAC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80336FB0: jal         0x8001C0EC
    // 0x80336FB4: addiu       $a3, $zero, 0x121
    ctx->r7 = ADD32(0, 0X121);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x80336FB4: addiu       $a3, $zero, 0x121
    ctx->r7 = ADD32(0, 0X121);
    after_2:
    // 0x80336FB8: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x80336FBC: jal         0x8001BBDC
    // 0x80336FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80336FC0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80336FC4: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x80336FC8: jal         0x80029C40
    // 0x80336FCC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80336FCC: nop

    after_4:
    // 0x80336FD0: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x80336FD4: jal         0x80029D04
    // 0x80336FD8: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x80336FD8: nop

    after_5:
    // 0x80336FDC: lw          $t1, 0x38($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X38);
    // 0x80336FE0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80336FE4: sh          $t2, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r10;
L_80336FE8:
    // 0x80336FE8: lh          $v0, 0x32($sp)
    ctx->r2 = MEM_H(ctx->r29, 0X32);
    // 0x80336FEC: b           L_80336FFC
    // 0x80336FF0: nop

        goto L_80336FFC;
    // 0x80336FF0: nop

    // 0x80336FF4: b           L_80336FFC
    // 0x80336FF8: nop

        goto L_80336FFC;
    // 0x80336FF8: nop

L_80336FFC:
    // 0x80336FFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80337000: lw          $s0, 0x1C($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X1C);
    // 0x80337004: lw          $s1, 0x20($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X20);
    // 0x80337008: jr          $ra
    // 0x8033700C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033700C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80338FD0_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338FD0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80338FD4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80338FD8: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80338FDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338FE0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338FE4: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80338FE8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338FEC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338FF0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338FF4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338FF8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338FFC: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80339000: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80339004: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339008: beq         $s0, $at, L_80339024
    if (ctx->r16 == ctx->r1) {
        // 0x8033900C: nop
    
            goto L_80339024;
    }
    // 0x8033900C: nop

    // 0x80339010: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80339014: beq         $s0, $at, L_80339034
    if (ctx->r16 == ctx->r1) {
        // 0x80339018: nop
    
            goto L_80339034;
    }
    // 0x80339018: nop

    // 0x8033901C: b           L_80339044
    // 0x80339020: nop

        goto L_80339044;
    // 0x80339020: nop

L_80339024:
    // 0x80339024: jal         0x80338E24
    // 0x80339028: nop

    func_80338E24_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80339028: nop

    after_0:
    // 0x8033902C: b           L_8033904C
    // 0x80339030: nop

        goto L_8033904C;
    // 0x80339030: nop

L_80339034:
    // 0x80339034: jal         0x80338E88
    // 0x80339038: nop

    func_80338E88_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x80339038: nop

    after_1:
    // 0x8033903C: b           L_8033904C
    // 0x80339040: nop

        goto L_8033904C;
    // 0x80339040: nop

L_80339044:
    // 0x80339044: b           L_8033904C
    // 0x80339048: nop

        goto L_8033904C;
    // 0x80339048: nop

L_8033904C:
    // 0x8033904C: b           L_80339054
    // 0x80339050: nop

        goto L_80339054;
    // 0x80339050: nop

L_80339054:
    // 0x80339054: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80339058: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033905C: jr          $ra
    // 0x80339060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80339060: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80337430_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337430: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80337434: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337438: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033743C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337440: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337444: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337448: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033744C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337450: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337454: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337458: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033745C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337460: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80337464: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337468: nop

    // 0x8033746C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337470: nop

    // 0x80337474: bne         $t1, $zero, L_803374A8
    if (ctx->r9 != 0) {
        // 0x80337478: nop
    
            goto L_803374A8;
    }
    // 0x80337478: nop

    // 0x8033747C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80337480: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80337484: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80337488: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033748C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80337490: nop

    // 0x80337494: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80337498: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033749C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x803374A0: nop

    // 0x803374A4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
L_803374A8:
    // 0x803374A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374B0: jal         0x80029C40
    // 0x803374B4: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x803374B4: nop

    after_0:
    // 0x803374B8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374BC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374C0: jal         0x80029D04
    // 0x803374C4: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x803374C4: nop

    after_1:
    // 0x803374C8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x803374CC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803374D0: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x803374D4: nop

    // 0x803374D8: bne         $t7, $at, L_80337520
    if (ctx->r15 != ctx->r1) {
        // 0x803374DC: nop
    
            goto L_80337520;
    }
    // 0x803374DC: nop

    // 0x803374E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803374E8: jal         0x8001B44C
    // 0x803374EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x803374EC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x803374F0: beq         $v0, $zero, L_80337520
    if (ctx->r2 == 0) {
        // 0x803374F4: nop
    
            goto L_80337520;
    }
    // 0x803374F4: nop

    // 0x803374F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803374FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337500: jal         0x8001BBDC
    // 0x80337504: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x80337504: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
    // 0x80337508: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8033750C: nop

    // 0x80337510: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x80337514: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337518: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8033751C: sb          $t9, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r25;
L_80337520:
    // 0x80337520: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80337524: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80337528: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x8033752C: nop

    // 0x80337530: bne         $t2, $at, L_80337584
    if (ctx->r10 != ctx->r1) {
        // 0x80337534: nop
    
            goto L_80337584;
    }
    // 0x80337534: nop

    // 0x80337538: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8033753C: nop

    // 0x80337540: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x80337544: nop

    // 0x80337548: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8033754C: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
    // 0x80337550: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80337554: nop

    // 0x80337558: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8033755C: nop

    // 0x80337560: slti        $at, $t7, 0x1E
    ctx->r1 = SIGNED(ctx->r15) < 0X1E ? 1 : 0;
    // 0x80337564: bne         $at, $zero, L_80337584
    if (ctx->r1 != 0) {
        // 0x80337568: nop
    
            goto L_80337584;
    }
    // 0x80337568: nop

    // 0x8033756C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80337570: addiu       $t8, $zero, 0x5
    ctx->r24 = ADD32(0, 0X5);
    // 0x80337574: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x80337578: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8033757C: nop

    // 0x80337580: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_80337584:
    // 0x80337584: b           L_8033758C
    // 0x80337588: nop

        goto L_8033758C;
    // 0x80337588: nop

L_8033758C:
    // 0x8033758C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80337590: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80337594: jr          $ra
    // 0x80337598: nop

    return;
    // 0x80337598: nop

;}
RECOMP_FUNC void func_8033452C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033452C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334538: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033453C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033454C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334550: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334558: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033455C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334560: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334564: nop

    // 0x80334568: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033456C: nop

    // 0x80334570: bne         $t1, $zero, L_80334690
    if (ctx->r9 != 0) {
        // 0x80334574: nop
    
            goto L_80334690;
    }
    // 0x80334574: nop

    // 0x80334578: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8033457C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80334580: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80334584: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334588: nop

    // 0x8033458C: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x80334590: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334594: nop

    // 0x80334598: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x8033459C: nop

    // 0x803345A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803345A4: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x803345A8: sll         $t7, $t7, 3
    ctx->r15 = S32(ctx->r15 << 3);
    // 0x803345AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803345B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803345B4: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
    // 0x803345B8: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803345BC: nop

    // 0x803345C0: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
    // 0x803345C4: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x803345C8: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803345CC: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x803345D0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803345D4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803345D8: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x803345DC: nop

    // 0x803345E0: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803345E4: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x803345E8: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x803345EC: sh          $t1, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r9;
    // 0x803345F0: nop

    // 0x803345F4: jal         0x80014E80
    // 0x803345F8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x803345F8: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x803345FC: andi        $t2, $v0, 0x1
    ctx->r10 = ctx->r2 & 0X1;
    // 0x80334600: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334604: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80334608: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033460C: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x80334610: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334614: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334618: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8033461C: addiu       $t4, $t3, 0x5A
    ctx->r12 = ADD32(ctx->r11, 0X5A);
    // 0x80334620: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80334624: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334628: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033462C: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
    // 0x80334630: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80334634: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80334638: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8033463C: nop

    // 0x80334640: swc1        $f16, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f16.u32l;
    // 0x80334644: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80334648: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8033464C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334650: nop

    // 0x80334654: swc1        $f18, 0x40($t5)
    MEM_W(0X40, ctx->r13) = ctx->f18.u32l;
    // 0x80334658: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8033465C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80334660: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334664: nop

    // 0x80334668: swc1        $f4, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f4.u32l;
    // 0x8033466C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334670: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80334674: addiu       $t0, $t0, -0x759C
    ctx->r8 = ADD32(ctx->r8, -0X759C);
    // 0x80334678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033467C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80334680: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80334684: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334688: jal         0x8001C0EC
    // 0x8033468C: addiu       $a3, $zero, 0x173
    ctx->r7 = ADD32(0, 0X173);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x8033468C: addiu       $a3, $zero, 0x173
    ctx->r7 = ADD32(0, 0X173);
    after_1:
L_80334690:
    // 0x80334690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334694: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334698: jal         0x80028FA0
    // 0x8033469C: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x8033469C: nop

    after_2:
    // 0x803346A0: beq         $v0, $zero, L_803346B4
    if (ctx->r2 == 0) {
        // 0x803346A4: nop
    
            goto L_803346B4;
    }
    // 0x803346A4: nop

    // 0x803346A8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803346AC: nop

    // 0x803346B0: sh          $zero, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = 0;
L_803346B4:
    // 0x803346B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803346B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803346BC: jal         0x80029C40
    // 0x803346C0: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x803346C0: nop

    after_3:
    // 0x803346C4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803346C8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803346CC: lh          $t2, 0xA6($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA6);
    // 0x803346D0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x803346D4: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x803346D8: jal         0x80015538
    // 0x803346DC: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x803346DC: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_4:
    // 0x803346E0: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x803346E4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803346E8: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x803346EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x803346F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x803346F4: nop

    // 0x803346F8: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x803346FC: mfc1        $t4, $f8
    ctx->r12 = (int32_t)ctx->f8.u32l;
    // 0x80334700: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x80334704: sh          $t4, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r12;
    // 0x80334708: nop

    // 0x8033470C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80334710: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80334714: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334718: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033471C: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x80334720: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80334724: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80334728: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033472C: jal         0x800294F0
    // 0x80334730: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_800294F0(rdram, ctx);
        goto after_5;
    // 0x80334730: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80334734: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334738: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033473C: lh          $t5, 0xA6($t7)
    ctx->r13 = MEM_H(ctx->r15, 0XA6);
    // 0x80334740: lwc1        $f7, -0x51B8($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X51B8);
    // 0x80334744: mtc1        $t5, $f18
    ctx->f18.u32l = ctx->r13;
    // 0x80334748: lwc1        $f6, -0x51B4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X51B4);
    // 0x8033474C: cvt.d.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.d = CVT_D_W(ctx->f18.u32l);
    // 0x80334750: mul.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = MUL_D(ctx->f4.d, ctx->f6.d);
    // 0x80334754: jal         0x80034970
    // 0x80334758: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    sinf_game(rdram, ctx);
        goto after_6;
    // 0x80334758: cvt.s.d     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f12.fl = CVT_S_D(ctx->f8.d);
    after_6:
    // 0x8033475C: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x80334760: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80334764: lh          $t0, 0xB6($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XB6);
    // 0x80334768: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033476C: mtc1        $t0, $f18
    ctx->f18.u32l = ctx->r8;
    // 0x80334770: mul.s       $f16, $f0, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f0.fl, ctx->f10.fl);
    // 0x80334774: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80334778: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8033477C: add.s       $f6, $f16, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f16.fl + ctx->f4.fl;
    // 0x80334780: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80334784: swc1        $f10, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f10.u32l;
    // 0x80334788: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033478C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334790: jal         0x80029D04
    // 0x80334794: nop

    func_80029D04(rdram, ctx);
        goto after_7;
    // 0x80334794: nop

    after_7:
    // 0x80334798: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033479C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803347A0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803347A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803347A8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x803347AC: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x803347B0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803347B4: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x803347B8: jal         0x80029018
    // 0x803347BC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x803347BC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_8:
    // 0x803347C0: beq         $v0, $zero, L_803347D4
    if (ctx->r2 == 0) {
        // 0x803347C4: nop
    
            goto L_803347D4;
    }
    // 0x803347C4: nop

    // 0x803347C8: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803347CC: nop

    // 0x803347D0: sh          $zero, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = 0;
L_803347D4:
    // 0x803347D4: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x803347D8: nop

    // 0x803347DC: lh          $t2, 0xA8($t9)
    ctx->r10 = MEM_H(ctx->r25, 0XA8);
    // 0x803347E0: nop

    // 0x803347E4: bne         $t2, $zero, L_80334894
    if (ctx->r10 != 0) {
        // 0x803347E8: nop
    
            goto L_80334894;
    }
    // 0x803347E8: nop

    // 0x803347EC: lh          $t3, 0xAA($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XAA);
    // 0x803347F0: nop

    // 0x803347F4: bne         $t3, $zero, L_80334894
    if (ctx->r11 != 0) {
        // 0x803347F8: nop
    
            goto L_80334894;
    }
    // 0x803347F8: nop

    // 0x803347FC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334800: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80334804: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80334808: lwc1        $f4, 0x3C($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x8033480C: nop

    // 0x80334810: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80334814: nop

    // 0x80334818: bc1f        L_80334834
    if (!c1cs) {
        // 0x8033481C: nop
    
            goto L_80334834;
    }
    // 0x8033481C: nop

    // 0x80334820: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80334824: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80334828: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033482C: b           L_80334848
    // 0x80334830: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
        goto L_80334848;
    // 0x80334830: swc1        $f8, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f8.u32l;
L_80334834:
    // 0x80334834: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80334838: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033483C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334840: nop

    // 0x80334844: swc1        $f10, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f10.u32l;
L_80334848:
    // 0x80334848: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8033484C: addiu       $t5, $zero, 0xA
    ctx->r13 = ADD32(0, 0XA);
    // 0x80334850: sh          $t5, 0xAA($t0)
    MEM_H(0XAA, ctx->r8) = ctx->r13;
    // 0x80334854: jal         0x80014E80
    // 0x80334858: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_9;
    // 0x80334858: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_9:
    // 0x8033485C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334860: andi        $t8, $v0, 0x1
    ctx->r24 = ctx->r2 & 0X1;
    // 0x80334864: addiu       $t1, $t8, 0x1
    ctx->r9 = ADD32(ctx->r24, 0X1);
    // 0x80334868: sh          $t1, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r9;
    // 0x8033486C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80334870: nop

    // 0x80334874: lh          $t3, 0xA8($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XA8);
    // 0x80334878: nop

    // 0x8033487C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80334880: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x80334884: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x80334888: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033488C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80334890: sh          $t4, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r12;
L_80334894:
    // 0x80334894: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334898: nop

    // 0x8033489C: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x803348A0: nop

    // 0x803348A4: beq         $t7, $zero, L_803348C4
    if (ctx->r15 == 0) {
        // 0x803348A8: nop
    
            goto L_803348C4;
    }
    // 0x803348A8: nop

    // 0x803348AC: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803348B0: nop

    // 0x803348B4: lh          $t0, 0xA8($t5)
    ctx->r8 = MEM_H(ctx->r13, 0XA8);
    // 0x803348B8: nop

    // 0x803348BC: addiu       $t8, $t0, -0x1
    ctx->r24 = ADD32(ctx->r8, -0X1);
    // 0x803348C0: sh          $t8, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r24;
L_803348C4:
    // 0x803348C4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x803348C8: nop

    // 0x803348CC: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x803348D0: nop

    // 0x803348D4: beq         $t2, $zero, L_803348F4
    if (ctx->r10 == 0) {
        // 0x803348D8: nop
    
            goto L_803348F4;
    }
    // 0x803348D8: nop

    // 0x803348DC: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x803348E0: nop

    // 0x803348E4: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x803348E8: nop

    // 0x803348EC: addiu       $t9, $t4, -0x1
    ctx->r25 = ADD32(ctx->r12, -0X1);
    // 0x803348F0: sh          $t9, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r25;
L_803348F4:
    // 0x803348F4: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803348F8: nop

    // 0x803348FC: lh          $t7, 0xB8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XB8);
    // 0x80334900: nop

    // 0x80334904: bne         $t7, $zero, L_80334970
    if (ctx->r15 != 0) {
        // 0x80334908: nop
    
            goto L_80334970;
    }
    // 0x80334908: nop

    // 0x8033490C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80334910: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80334914: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334918: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8033491C: lwc1        $f18, 0x8($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80334920: nop

    // 0x80334924: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80334928: nop

    // 0x8033492C: bc1f        L_80334968
    if (!c1cs) {
        // 0x80334930: nop
    
            goto L_80334968;
    }
    // 0x80334930: nop

    // 0x80334934: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334938: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033493C: lui         $a1, 0x44BB
    ctx->r5 = S32(0X44BB << 16);
    // 0x80334940: jal         0x8002A1FC
    // 0x80334944: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_10;
    // 0x80334944: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_10:
    // 0x80334948: beq         $v0, $zero, L_80334968
    if (ctx->r2 == 0) {
        // 0x8033494C: nop
    
            goto L_80334968;
    }
    // 0x8033494C: nop

    // 0x80334950: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80334954: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80334958: sh          $t5, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r13;
    // 0x8033495C: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334960: nop

    // 0x80334964: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80334968:
    // 0x80334968: b           L_80334998
    // 0x8033496C: nop

        goto L_80334998;
    // 0x8033496C: nop

L_80334970:
    // 0x80334970: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334978: lui         $a1, 0x44D4
    ctx->r5 = S32(0X44D4 << 16);
    // 0x8033497C: jal         0x8002A1FC
    // 0x80334980: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_11;
    // 0x80334980: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_11:
    // 0x80334984: bne         $v0, $zero, L_80334998
    if (ctx->r2 != 0) {
        // 0x80334988: nop
    
            goto L_80334998;
    }
    // 0x80334988: nop

    // 0x8033498C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334990: nop

    // 0x80334994: sh          $zero, 0xB8($t4)
    MEM_H(0XB8, ctx->r12) = 0;
L_80334998:
    // 0x80334998: b           L_803349A0
    // 0x8033499C: nop

        goto L_803349A0;
    // 0x8033499C: nop

L_803349A0:
    // 0x803349A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803349A4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803349A8: jr          $ra
    // 0x803349AC: nop

    return;
    // 0x803349AC: nop

;}
RECOMP_FUNC void func_80330000_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
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
    // 0x80330040: addiu       $a1, $a1, 0x3FA0
    ctx->r5 = ADD32(ctx->r5, 0X3FA0);
    // 0x80330044: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330048: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033004C: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
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
    // 0x8033006C: beq         $t1, $at, L_803301D0
    if (ctx->r9 == ctx->r1) {
        // 0x80330070: nop
    
            goto L_803301D0;
    }
    // 0x80330070: nop

    // 0x80330074: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330078: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x8033007C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330080: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330084: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330088: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033008C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330090: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330094: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x80330098: nop

    // 0x8033009C: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x803300A0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x803300A4: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803300A8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803300AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803300B4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803300B8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803300BC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803300C0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300C4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803300C8: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x803300CC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x803300D0: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803300D4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803300D8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300DC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803300E0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803300E4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x803300E8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x803300EC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803300F0: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803300F4: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803300F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x803300FC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330100: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x80330104: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330108: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033010C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80330110: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80330114: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80330118: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033011C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80330120: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x80330124: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80330128: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8033012C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330130: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330134: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330138: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033013C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330140: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330144: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330148: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8033014C: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x80330150: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80330154: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330158: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033015C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330160: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330164: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330168: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8033016C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330170: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330174: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330178: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x8033017C: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80330180: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330184: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330188: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8033018C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330190: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80330194: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330198: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033019C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803301A0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803301A4: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
    // 0x803301A8: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x803301AC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803301B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803301B4: jal         0x80019448
    // 0x803301B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x803301B8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x803301BC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x803301C0: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x803301C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803301C8: jal         0x80019448
    // 0x803301CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x803301CC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
L_803301D0:
    // 0x803301D0: b           L_803301D8
    // 0x803301D4: nop

        goto L_803301D8;
    // 0x803301D4: nop

L_803301D8:
    // 0x803301D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803301DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803301E0: jr          $ra
    // 0x803301E4: nop

    return;
    // 0x803301E4: nop

;}
RECOMP_FUNC void func_803363A4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803363A4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x803363A8: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803363AC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x803363B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803363B4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803363B8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803363BC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803363C0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363C4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803363C8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803363CC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803363D0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803363D4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803363D8: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x803363DC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803363E0: nop

    // 0x803363E4: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803363E8: nop

    // 0x803363EC: bne         $t1, $zero, L_80336510
    if (ctx->r9 != 0) {
        // 0x803363F0: nop
    
            goto L_80336510;
    }
    // 0x803363F0: nop

    // 0x803363F4: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803363F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803363FC: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80336400: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x80336404: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80336408: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033640C: nop

    // 0x80336410: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80336414: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80336418: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033641C: nop

    // 0x80336420: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80336424: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80336428: addiu       $t6, $zero, 0x78
    ctx->r14 = ADD32(0, 0X78);
    // 0x8033642C: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x80336430: jal         0x80014E80
    // 0x80336434: addiu       $a0, $zero, -0xB4
    ctx->r4 = ADD32(0, -0XB4);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80336434: addiu       $a0, $zero, -0xB4
    ctx->r4 = ADD32(0, -0XB4);
    after_0:
    // 0x80336438: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033643C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80336440: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x80336444: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80336448: jal         0x80015538
    // 0x8033644C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8033644C: cvt.s.w     $f14, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    ctx->f14.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x80336450: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80336454: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80336458: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8033645C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80336460: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80336464: nop

    // 0x80336468: cvt.w.s     $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = CVT_W_S(ctx->f0.fl);
    // 0x8033646C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80336470: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80336474: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x80336478: nop

    // 0x8033647C: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80336480: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80336484: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80336488: nop

    // 0x8033648C: swc1        $f16, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f16.u32l;
    // 0x80336490: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80336494: nop

    // 0x80336498: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x8033649C: lw          $a2, 0xD4($t3)
    ctx->r6 = MEM_W(ctx->r11, 0XD4);
    // 0x803364A0: mtc1        $t4, $f18
    ctx->f18.u32l = ctx->r12;
    // 0x803364A4: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x803364A8: cvt.s.w     $f18, $f18
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    ctx->f18.fl = CVT_S_W(ctx->f18.u32l);
    // 0x803364AC: mfc1        $a1, $f18
    ctx->r5 = (int32_t)ctx->f18.u32l;
    // 0x803364B0: jal         0x800BFF20
    // 0x803364B4: nop

    func_800BFF20(rdram, ctx);
        goto after_2;
    // 0x803364B4: nop

    after_2:
    // 0x803364B8: sb          $v0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r2;
    // 0x803364BC: lb          $t5, 0x33($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X33);
    // 0x803364C0: nop

    // 0x803364C4: beq         $t5, $zero, L_803364EC
    if (ctx->r13 == 0) {
        // 0x803364C8: nop
    
            goto L_803364EC;
    }
    // 0x803364C8: nop

    // 0x803364CC: lb          $t6, 0x33($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X33);
    // 0x803364D0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x803364D4: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x803364D8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803364DC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x803364E0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803364E4: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x803364E8: swc1        $f10, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f10.u32l;
L_803364EC:
    // 0x803364EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803364F0: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x803364F4: addiu       $t8, $t8, 0x731C
    ctx->r24 = ADD32(ctx->r24, 0X731C);
    // 0x803364F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803364FC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80336500: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80336504: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80336508: jal         0x8001C0EC
    // 0x8033650C: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x8033650C: addiu       $a3, $zero, 0xEF
    ctx->r7 = ADD32(0, 0XEF);
    after_3:
L_80336510:
    // 0x80336510: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336514: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336518: jal         0x80029C40
    // 0x8033651C: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x8033651C: nop

    after_4:
    // 0x80336520: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336524: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336528: jal         0x80029D04
    // 0x8033652C: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x8033652C: nop

    after_5:
    // 0x80336530: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336534: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336538: jal         0x80028FA0
    // 0x8033653C: nop

    func_80028FA0(rdram, ctx);
        goto after_6;
    // 0x8033653C: nop

    after_6:
    // 0x80336540: beq         $v0, $zero, L_80336558
    if (ctx->r2 == 0) {
        // 0x80336544: nop
    
            goto L_80336558;
    }
    // 0x80336544: nop

    // 0x80336548: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033654C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336550: jal         0x80029B60
    // 0x80336554: nop

    func_80029B60(rdram, ctx);
        goto after_7;
    // 0x80336554: nop

    after_7:
L_80336558:
    // 0x80336558: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033655C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80336560: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336564: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336568: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8033656C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x80336570: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80336574: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80336578: jal         0x80029018
    // 0x8033657C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_8;
    // 0x8033657C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_8:
    // 0x80336580: beq         $v0, $zero, L_803365A8
    if (ctx->r2 == 0) {
        // 0x80336584: nop
    
            goto L_803365A8;
    }
    // 0x80336584: nop

    // 0x80336588: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033658C: addiu       $t9, $zero, 0x4
    ctx->r25 = ADD32(0, 0X4);
    // 0x80336590: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80336594: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80336598: nop

    // 0x8033659C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803365A0: b           L_80336698
    // 0x803365A4: nop

        goto L_80336698;
    // 0x803365A4: nop

L_803365A8:
    // 0x803365A8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803365AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803365B0: lbu         $t4, 0x132($t2)
    ctx->r12 = MEM_BU(ctx->r10, 0X132);
    // 0x803365B4: nop

    // 0x803365B8: bne         $t4, $at, L_80336610
    if (ctx->r12 != ctx->r1) {
        // 0x803365BC: nop
    
            goto L_80336610;
    }
    // 0x803365BC: nop

    // 0x803365C0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803365C4: nop

    // 0x803365C8: lh          $t5, 0xA6($t3)
    ctx->r13 = MEM_H(ctx->r11, 0XA6);
    // 0x803365CC: nop

    // 0x803365D0: addiu       $t6, $t5, -0x8
    ctx->r14 = ADD32(ctx->r13, -0X8);
    // 0x803365D4: sh          $t6, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r14;
    // 0x803365D8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803365DC: nop

    // 0x803365E0: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803365E4: nop

    // 0x803365E8: bgtz        $t8, L_80336610
    if (SIGNED(ctx->r24) > 0) {
        // 0x803365EC: nop
    
            goto L_80336610;
    }
    // 0x803365EC: nop

    // 0x803365F0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x803365F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803365F8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803365FC: nop

    // 0x80336600: swc1        $f4, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f4.u32l;
    // 0x80336604: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80336608: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8033660C: sb          $t0, 0x132($t1)
    MEM_B(0X132, ctx->r9) = ctx->r8;
L_80336610:
    // 0x80336610: lb          $t2, 0x33($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X33);
    // 0x80336614: nop

    // 0x80336618: beq         $t2, $zero, L_8033664C
    if (ctx->r10 == 0) {
        // 0x8033661C: nop
    
            goto L_8033664C;
    }
    // 0x8033661C: nop

    // 0x80336620: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80336624: nop

    // 0x80336628: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x8033662C: lw          $a2, 0xD4($t4)
    ctx->r6 = MEM_W(ctx->r12, 0XD4);
    // 0x80336630: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80336634: or          $a0, $t4, $zero
    ctx->r4 = ctx->r12 | 0;
    // 0x80336638: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033663C: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x80336640: jal         0x800BFF20
    // 0x80336644: nop

    func_800BFF20(rdram, ctx);
        goto after_9;
    // 0x80336644: nop

    after_9:
    // 0x80336648: sb          $v0, 0x33($sp)
    MEM_B(0X33, ctx->r29) = ctx->r2;
L_8033664C:
    // 0x8033664C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80336650: nop

    // 0x80336654: lwc1        $f8, 0x3C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80336658: nop

    // 0x8033665C: swc1        $f8, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f8.u32l;
    // 0x80336660: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336664: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336668: jal         0x8002A1FC
    // 0x8033666C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_10;
    // 0x8033666C: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_10:
    // 0x80336670: bne         $v0, $zero, L_80336690
    if (ctx->r2 != 0) {
        // 0x80336674: nop
    
            goto L_80336690;
    }
    // 0x80336674: nop

    // 0x80336678: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033667C: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80336680: sh          $t3, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r11;
    // 0x80336684: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80336688: nop

    // 0x8033668C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
L_80336690:
    // 0x80336690: b           L_80336698
    // 0x80336694: nop

        goto L_80336698;
    // 0x80336694: nop

L_80336698:
    // 0x80336698: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033669C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803366A0: jr          $ra
    // 0x803366A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803366A4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_803327D8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803327D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803327DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803327E0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803327E4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803327E8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803327EC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803327F0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803327F4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803327F8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803327FC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80332800: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80332804: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80332808: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033280C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80332810: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80332814: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80332818: addiu       $a1, $a1, 0x403C
    ctx->r5 = ADD32(ctx->r5, 0X403C);
    // 0x8033281C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80332820: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80332824: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80332828: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033282C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80332830: jal         0x80027464
    // 0x80332834: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80332834: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80332838: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033283C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80332840: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80332844: beq         $t1, $at, L_803328D0
    if (ctx->r9 == ctx->r1) {
        // 0x80332848: nop
    
            goto L_803328D0;
    }
    // 0x80332848: nop

    // 0x8033284C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80332850: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80332854: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80332858: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033285C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80332860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332864: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80332868: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8033286C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80332870: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80332874: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80332878: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8033287C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80332880: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80332884: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332888: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033288C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332890: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80332894: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80332898: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033289C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803328A0: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x803328A4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803328A8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x803328AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803328B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803328B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803328B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803328BC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803328C0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803328C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803328C8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803328CC: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_803328D0:
    // 0x803328D0: b           L_803328D8
    // 0x803328D4: nop

        goto L_803328D8;
    // 0x803328D4: nop

L_803328D8:
    // 0x803328D8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803328DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803328E0: jr          $ra
    // 0x803328E4: nop

    return;
    // 0x803328E4: nop

;}
RECOMP_FUNC void func_80337B60_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337B60: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80337B64: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80337B68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337B6C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80337B70: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80337B74: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80337B78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80337B7C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80337B80: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80337B84: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80337B88: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80337B8C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80337B90: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80337B94: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337B98: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80337B9C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337BA0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337BA4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80337BA8: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80337BAC: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337BB0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80337BB4: jr          $ra
    // 0x80337BB8: nop

    return;
    // 0x80337BB8: nop

    // 0x80337BBC: jr          $ra
    // 0x80337BC0: nop

    return;
    // 0x80337BC0: nop

;}
RECOMP_FUNC void func_80336A60_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A60: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80336A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336A68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80336A6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80336A70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80336A74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80336A78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80336A80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80336A84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80336A88: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80336A8C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80336A90: nop

    // 0x80336A94: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80336A98: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80336A9C: nop

    // 0x80336AA0: addiu       $t0, $t9, -0x2
    ctx->r8 = ADD32(ctx->r25, -0X2);
    // 0x80336AA4: sltiu       $at, $t0, 0x7
    ctx->r1 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x80336AA8: beq         $at, $zero, L_80336B3C
    if (ctx->r1 == 0) {
        // 0x80336AAC: nop
    
            goto L_80336B3C;
    }
    // 0x80336AAC: nop

    // 0x80336AB0: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80336AB4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80336AB8: addu        $at, $at, $t0
    gpr jr_addend_80336AC4 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80336ABC: lw          $t0, -0x519C($at)
    ctx->r8 = ADD32(ctx->r1, -0X519C);
    // 0x80336AC0: nop

    // 0x80336AC4: jr          $t0
    // 0x80336AC8: nop

    switch (jr_addend_80336AC4 >> 2) {
        case 0: goto L_80336ACC; break;
        case 1: goto L_80336AEC; break;
        case 2: goto L_80336AFC; break;
        case 3: goto L_80336ADC; break;
        case 4: goto L_80336B0C; break;
        case 5: goto L_80336B1C; break;
        case 6: goto L_80336B2C; break;
        default: switch_error(__func__, 0x80336AC4, 0x8033AE64);
    }
    // 0x80336AC8: nop

L_80336ACC:
    // 0x80336ACC: jal         0x80335F90
    // 0x80336AD0: nop

    func_80335F90_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80336AD0: nop

    after_0:
    // 0x80336AD4: b           L_80336B44
    // 0x80336AD8: nop

        goto L_80336B44;
    // 0x80336AD8: nop

L_80336ADC:
    // 0x80336ADC: jal         0x803363A4
    // 0x80336AE0: nop

    func_803363A4_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x80336AE0: nop

    after_1:
    // 0x80336AE4: b           L_80336B44
    // 0x80336AE8: nop

        goto L_80336B44;
    // 0x80336AE8: nop

L_80336AEC:
    // 0x80336AEC: jal         0x80336188
    // 0x80336AF0: nop

    func_80336188_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x80336AF0: nop

    after_2:
    // 0x80336AF4: b           L_80336B44
    // 0x80336AF8: nop

        goto L_80336B44;
    // 0x80336AF8: nop

L_80336AFC:
    // 0x80336AFC: jal         0x803366A8
    // 0x80336B00: nop

    func_803366A8_unk_bin_38(rdram, ctx);
        goto after_3;
    // 0x80336B00: nop

    after_3:
    // 0x80336B04: b           L_80336B44
    // 0x80336B08: nop

        goto L_80336B44;
    // 0x80336B08: nop

L_80336B0C:
    // 0x80336B0C: jal         0x80336A40
    // 0x80336B10: nop

    func_80336A40_unk_bin_38(rdram, ctx);
        goto after_4;
    // 0x80336B10: nop

    after_4:
    // 0x80336B14: b           L_80336B44
    // 0x80336B18: nop

        goto L_80336B44;
    // 0x80336B18: nop

L_80336B1C:
    // 0x80336B1C: jal         0x80336A00
    // 0x80336B20: nop

    func_80336A00_unk_bin_38(rdram, ctx);
        goto after_5;
    // 0x80336B20: nop

    after_5:
    // 0x80336B24: b           L_80336B44
    // 0x80336B28: nop

        goto L_80336B44;
    // 0x80336B28: nop

L_80336B2C:
    // 0x80336B2C: jal         0x80336A50
    // 0x80336B30: nop

    func_80336A50_unk_bin_38(rdram, ctx);
        goto after_6;
    // 0x80336B30: nop

    after_6:
    // 0x80336B34: b           L_80336B44
    // 0x80336B38: nop

        goto L_80336B44;
    // 0x80336B38: nop

L_80336B3C:
    // 0x80336B3C: b           L_80336B44
    // 0x80336B40: nop

        goto L_80336B44;
    // 0x80336B40: nop

L_80336B44:
    // 0x80336B44: b           L_80336B4C
    // 0x80336B48: nop

        goto L_80336B4C;
    // 0x80336B48: nop

L_80336B4C:
    // 0x80336B4C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80336B50: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80336B54: jr          $ra
    // 0x80336B58: nop

    return;
    // 0x80336B58: nop

;}
RECOMP_FUNC void func_80335630_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335630: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80335634: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80335638: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033563C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80335640: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335644: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335648: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033564C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335650: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335654: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335658: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033565C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335660: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80335664: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335668: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x8033566C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335670: nop

    // 0x80335674: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80335678: nop

    // 0x8033567C: bne         $t1, $zero, L_8033570C
    if (ctx->r9 != 0) {
        // 0x80335680: nop
    
            goto L_8033570C;
    }
    // 0x80335680: nop

    // 0x80335684: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80335688: nop

    // 0x8033568C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80335690: nop

    // 0x80335694: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80335698: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033569C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803356A0: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x803356A4: nop

    // 0x803356A8: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x803356AC: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803356B0: nop

    // 0x803356B4: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803356B8: nop

    // 0x803356BC: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x803356C0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803356C4: nop

    // 0x803356C8: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x803356CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803356D0: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x803356D4: addiu       $t8, $t8, -0x7EF8
    ctx->r24 = ADD32(ctx->r24, -0X7EF8);
    // 0x803356D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803356DC: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x803356E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803356E4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803356E8: jal         0x8001C0EC
    // 0x803356EC: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x803356EC: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x803356F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803356F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803356F8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x803356FC: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x80335700: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335704: jal         0x8001ABF4
    // 0x80335708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80335708: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_8033570C:
    // 0x8033570C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335714: jal         0x8002A2EC
    // 0x80335718: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x80335718: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_2:
    // 0x8033571C: beq         $v0, $zero, L_8033573C
    if (ctx->r2 == 0) {
        // 0x80335720: nop
    
            goto L_8033573C;
    }
    // 0x80335720: nop

    // 0x80335724: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80335728: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8033572C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80335730: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80335734: nop

    // 0x80335738: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033573C:
    // 0x8033573C: b           L_80335744
    // 0x80335740: nop

        goto L_80335744;
    // 0x80335740: nop

L_80335744:
    // 0x80335744: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335748: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033574C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335750: jr          $ra
    // 0x80335754: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80335754: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80333514_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333514: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80333518: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033351C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333520: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333524: jal         0x8002B0E4
    // 0x80333528: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80333528: nop

    after_0:
    // 0x8033352C: b           L_80333534
    // 0x80333530: nop

        goto L_80333534;
    // 0x80333530: nop

L_80333534:
    // 0x80333534: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80333538: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033353C: jr          $ra
    // 0x80333540: nop

    return;
    // 0x80333540: nop

;}
RECOMP_FUNC void func_8033A8BC_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A8BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033A8C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A8C4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033A8C8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x8033A8CC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8033A8D0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8033A8D4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033A8D8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x8033A8DC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x8033A8E0: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8033A8E4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033A8E8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8033A8EC: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033A8F0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8033A8F4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033A8F8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8033A8FC: addiu       $a1, $a1, 0x4660
    ctx->r5 = ADD32(ctx->r5, 0X4660);
    // 0x8033A900: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033A904: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033A908: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8033A90C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033A910: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8033A914: jal         0x80027464
    // 0x8033A918: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033A918: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8033A91C: b           L_8033A924
    // 0x8033A920: nop

        goto L_8033A924;
    // 0x8033A920: nop

L_8033A924:
    // 0x8033A924: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A928: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033A92C: jr          $ra
    // 0x8033A930: nop

    return;
    // 0x8033A930: nop

;}
RECOMP_FUNC void func_80334DA4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334DA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80334DA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334DAC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80334DB0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80334DB4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80334DB8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80334DBC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80334DC0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80334DC4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80334DC8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80334DCC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80334DD0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80334DD4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80334DD8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80334DDC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334DE0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80334DE4: addiu       $a1, $a1, 0x3F04
    ctx->r5 = ADD32(ctx->r5, 0X3F04);
    // 0x80334DE8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334DEC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80334DF0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334DF4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80334DF8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80334DFC: jal         0x80027464
    // 0x80334E00: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334E00: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80334E04: b           L_80334E0C
    // 0x80334E08: nop

        goto L_80334E0C;
    // 0x80334E08: nop

L_80334E0C:
    // 0x80334E0C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334E10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80334E14: jr          $ra
    // 0x80334E18: nop

    return;
    // 0x80334E18: nop

;}
RECOMP_FUNC void func_803392D4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803392D4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803392D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803392DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803392E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803392E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803392E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803392EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803392F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803392F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803392F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803392FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80339300: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80339304: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80339308: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x8033930C: nop

    // 0x80339310: bne         $t0, $zero, L_80339334
    if (ctx->r8 != 0) {
        // 0x80339314: nop
    
            goto L_80339334;
    }
    // 0x80339314: nop

    // 0x80339318: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x8033931C: nop

    // 0x80339320: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80339324: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80339328: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x8033932C: b           L_803393B4
    // 0x80339330: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_803393B4;
    // 0x80339330: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_80339334:
    // 0x80339334: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80339338: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x8033933C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339340: bne         $t4, $at, L_803393B4
    if (ctx->r12 != ctx->r1) {
        // 0x80339344: nop
    
            goto L_803393B4;
    }
    // 0x80339344: nop

    // 0x80339348: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8033934C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80339350: lh          $t6, 0x108($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X108);
    // 0x80339354: nop

    // 0x80339358: bne         $t6, $at, L_803393B4
    if (ctx->r14 != ctx->r1) {
        // 0x8033935C: nop
    
            goto L_803393B4;
    }
    // 0x8033935C: nop

    // 0x80339360: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80339364: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x80339368: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x8033936C: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x80339370: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80339374: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x80339378: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8033937C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80339380: lwc1        $f4, 0x20($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X20);
    // 0x80339384: nop

    // 0x80339388: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8033938C: mfc1        $t1, $f6
    ctx->r9 = (int32_t)ctx->f6.u32l;
    // 0x80339390: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x80339394: sh          $t1, 0xB6($t9)
    MEM_H(0XB6, ctx->r25) = ctx->r9;
    // 0x80339398: nop

    // 0x8033939C: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x803393A0: nop

    // 0x803393A4: sh          $zero, 0xB8($t2)
    MEM_H(0XB8, ctx->r10) = 0;
    // 0x803393A8: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x803393AC: addiu       $t3, $zero, 0x6
    ctx->r11 = ADD32(0, 0X6);
    // 0x803393B0: sh          $t3, 0xBA($t4)
    MEM_H(0XBA, ctx->r12) = ctx->r11;
L_803393B4:
    // 0x803393B4: b           L_803393BC
    // 0x803393B8: nop

        goto L_803393BC;
    // 0x803393B8: nop

L_803393BC:
    // 0x803393BC: jr          $ra
    // 0x803393C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x803393C0: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033448C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033448C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334490: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80334494: nop

    // 0x80334498: bne         $t6, $zero, L_8033451C
    if (ctx->r14 != 0) {
        // 0x8033449C: nop
    
            goto L_8033451C;
    }
    // 0x8033449C: nop

    // 0x803344A0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x803344A4: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x803344A8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803344AC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803344B0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803344B4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803344B8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803344BC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803344C0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803344C4: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x803344C8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x803344CC: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x803344D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803344D4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x803344D8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803344DC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x803344E0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x803344E4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x803344E8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x803344EC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803344F0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x803344F4: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x803344F8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803344FC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334500: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334504: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334508: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033450C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334510: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80334514: addiu       $t1, $zero, 0x3
    ctx->r9 = ADD32(0, 0X3);
    // 0x80334518: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_8033451C:
    // 0x8033451C: jr          $ra
    // 0x80334520: nop

    return;
    // 0x80334520: nop

    // 0x80334524: jr          $ra
    // 0x80334528: nop

    return;
    // 0x80334528: nop

;}
RECOMP_FUNC void func_803343C8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803343C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803343CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803343D0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x803343D4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x803343D8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x803343DC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x803343E0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x803343E4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x803343E8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x803343EC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x803343F0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x803343F4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x803343F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x803343FC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80334400: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80334404: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80334408: addiu       $a1, $a1, 0x4264
    ctx->r5 = ADD32(ctx->r5, 0X4264);
    // 0x8033440C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80334410: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80334414: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80334418: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8033441C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80334420: jal         0x80027464
    // 0x80334424: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80334424: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80334428: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x8033442C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80334430: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80334434: beq         $t1, $at, L_80334474
    if (ctx->r9 == ctx->r1) {
        // 0x80334438: nop
    
            goto L_80334474;
    }
    // 0x80334438: nop

    // 0x8033443C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80334440: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80334444: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80334448: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8033444C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80334450: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80334454: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80334458: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8033445C: sh          $zero, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = 0;
    // 0x80334460: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80334464: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80334468: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8033446C: jal         0x80019448
    // 0x80334470: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_1;
    // 0x80334470: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_80334474:
    // 0x80334474: b           L_8033447C
    // 0x80334478: nop

        goto L_8033447C;
    // 0x80334478: nop

L_8033447C:
    // 0x8033447C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334480: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80334484: jr          $ra
    // 0x80334488: nop

    return;
    // 0x80334488: nop

;}
RECOMP_FUNC void func_80330C34_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C34: jr          $ra
    // 0x80330C38: nop

    return;
    // 0x80330C38: nop

    // 0x80330C3C: jr          $ra
    // 0x80330C40: nop

    return;
    // 0x80330C40: nop

;}
RECOMP_FUNC void func_80337A54_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337A54: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80337A58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80337A5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80337A60: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337A64: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337A68: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337A6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337A70: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337A74: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337A78: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337A7C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80337A80: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80337A84: nop

    // 0x80337A88: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x80337A8C: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80337A90: nop

    // 0x80337A94: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x80337A98: sltiu       $at, $t0, 0x7
    ctx->r1 = ctx->r8 < 0X7 ? 1 : 0;
    // 0x80337A9C: beq         $at, $zero, L_80337B30
    if (ctx->r1 == 0) {
        // 0x80337AA0: nop
    
            goto L_80337B30;
    }
    // 0x80337AA0: nop

    // 0x80337AA4: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80337AA8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80337AAC: addu        $at, $at, $t0
    gpr jr_addend_80337AB8 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80337AB0: lw          $t0, -0x5180($at)
    ctx->r8 = ADD32(ctx->r1, -0X5180);
    // 0x80337AB4: nop

    // 0x80337AB8: jr          $t0
    // 0x80337ABC: nop

    switch (jr_addend_80337AB8 >> 2) {
        case 0: goto L_80337AC0; break;
        case 1: goto L_80337AD0; break;
        case 2: goto L_80337AE0; break;
        case 3: goto L_80337AF0; break;
        case 4: goto L_80337B00; break;
        case 5: goto L_80337B20; break;
        case 6: goto L_80337B10; break;
        default: switch_error(__func__, 0x80337AB8, 0x8033AE80);
    }
    // 0x80337ABC: nop

L_80337AC0:
    // 0x80337AC0: jal         0x80337200
    // 0x80337AC4: nop

    func_80337200_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80337AC4: nop

    after_0:
    // 0x80337AC8: b           L_80337B38
    // 0x80337ACC: nop

        goto L_80337B38;
    // 0x80337ACC: nop

L_80337AD0:
    // 0x80337AD0: jal         0x80337318
    // 0x80337AD4: nop

    func_80337318_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x80337AD4: nop

    after_1:
    // 0x80337AD8: b           L_80337B38
    // 0x80337ADC: nop

        goto L_80337B38;
    // 0x80337ADC: nop

L_80337AE0:
    // 0x80337AE0: jal         0x803376F0
    // 0x80337AE4: nop

    func_803376F0_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x80337AE4: nop

    after_2:
    // 0x80337AE8: b           L_80337B38
    // 0x80337AEC: nop

        goto L_80337B38;
    // 0x80337AEC: nop

L_80337AF0:
    // 0x80337AF0: jal         0x80337430
    // 0x80337AF4: nop

    func_80337430_unk_bin_38(rdram, ctx);
        goto after_3;
    // 0x80337AF4: nop

    after_3:
    // 0x80337AF8: b           L_80337B38
    // 0x80337AFC: nop

        goto L_80337B38;
    // 0x80337AFC: nop

L_80337B00:
    // 0x80337B00: jal         0x8033759C
    // 0x80337B04: nop

    func_8033759C_unk_bin_38(rdram, ctx);
        goto after_4;
    // 0x80337B04: nop

    after_4:
    // 0x80337B08: b           L_80337B38
    // 0x80337B0C: nop

        goto L_80337B38;
    // 0x80337B0C: nop

L_80337B10:
    // 0x80337B10: jal         0x803378FC
    // 0x80337B14: nop

    func_803378FC_unk_bin_38(rdram, ctx);
        goto after_5;
    // 0x80337B14: nop

    after_5:
    // 0x80337B18: b           L_80337B38
    // 0x80337B1C: nop

        goto L_80337B38;
    // 0x80337B1C: nop

L_80337B20:
    // 0x80337B20: jal         0x803377F8
    // 0x80337B24: nop

    func_803377F8_unk_bin_38(rdram, ctx);
        goto after_6;
    // 0x80337B24: nop

    after_6:
    // 0x80337B28: b           L_80337B38
    // 0x80337B2C: nop

        goto L_80337B38;
    // 0x80337B2C: nop

L_80337B30:
    // 0x80337B30: b           L_80337B38
    // 0x80337B34: nop

        goto L_80337B38;
    // 0x80337B34: nop

L_80337B38:
    // 0x80337B38: b           L_80337B40
    // 0x80337B3C: nop

        goto L_80337B40;
    // 0x80337B3C: nop

L_80337B40:
    // 0x80337B40: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80337B44: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80337B48: jr          $ra
    // 0x80337B4C: nop

    return;
    // 0x80337B4C: nop

;}
