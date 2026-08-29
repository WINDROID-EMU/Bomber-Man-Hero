#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_800DA7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800DA7C4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800DA7C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800DA7CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800DA7D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800DA7D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800DA7D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800DA7DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA7E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800DA7E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800DA7E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800DA7EC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800DA7F0: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800DA7F4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800DA7F8: bne         $t8, $at, L_800DA818
    if (ctx->r24 != ctx->r1) {
        // 0x800DA7FC: nop
    
            goto L_800DA818;
    }
    // 0x800DA7FC: nop

    // 0x800DA800: b           L_800DA808
    // 0x800DA804: nop

        goto L_800DA808;
    // 0x800DA804: nop

L_800DA808:
    // 0x800DA808: jal         0x800DA760
    // 0x800DA80C: nop

    func_800DA760(rdram, ctx);
        goto after_0;
    // 0x800DA80C: nop

    after_0:
    // 0x800DA810: b           L_800DA820
    // 0x800DA814: nop

        goto L_800DA820;
    // 0x800DA814: nop

L_800DA818:
    // 0x800DA818: b           L_800DA820
    // 0x800DA81C: nop

        goto L_800DA820;
    // 0x800DA81C: nop

L_800DA820:
    // 0x800DA820: b           L_800DA828
    // 0x800DA824: nop

        goto L_800DA828;
    // 0x800DA824: nop

L_800DA828:
    // 0x800DA828: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800DA82C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800DA830: jr          $ra
    // 0x800DA834: nop

    return;
    // 0x800DA834: nop

;}
RECOMP_FUNC void func_8009DA38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009DA38: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x8009DA3C: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x8009DA40: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x8009DA44: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8009DA48: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x8009DA4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009DA50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009DA54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009DA58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009DA5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009DA60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009DA64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009DA68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009DA6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009DA70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009DA74: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x8009DA78: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8009DA7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009DA80: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8009DA84: nop

    // 0x8009DA88: beq         $s0, $at, L_8009DAB0
    if (ctx->r16 == ctx->r1) {
        // 0x8009DA8C: nop
    
            goto L_8009DAB0;
    }
    // 0x8009DA8C: nop

    // 0x8009DA90: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8009DA94: beq         $s0, $at, L_8009DC30
    if (ctx->r16 == ctx->r1) {
        // 0x8009DA98: nop
    
            goto L_8009DC30;
    }
    // 0x8009DA98: nop

    // 0x8009DA9C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8009DAA0: beq         $s0, $at, L_8009DCB4
    if (ctx->r16 == ctx->r1) {
        // 0x8009DAA4: nop
    
            goto L_8009DCB4;
    }
    // 0x8009DAA4: nop

    // 0x8009DAA8: b           L_8009DDF8
    // 0x8009DAAC: nop

        goto L_8009DDF8;
    // 0x8009DAAC: nop

L_8009DAB0:
    // 0x8009DAB0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8009DAB4: nop

    // 0x8009DAB8: lbu         $t2, 0x132($t1)
    ctx->r10 = MEM_BU(ctx->r9, 0X132);
    // 0x8009DABC: nop

    // 0x8009DAC0: bne         $t2, $zero, L_8009DBD0
    if (ctx->r10 != 0) {
        // 0x8009DAC4: nop
    
            goto L_8009DBD0;
    }
    // 0x8009DAC4: nop

    // 0x8009DAC8: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009DACC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x8009DAD0: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x8009DAD4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8009DAD8: nop

    // 0x8009DADC: lh          $t6, 0xE8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE8);
    // 0x8009DAE0: nop

    // 0x8009DAE4: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
    // 0x8009DAE8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009DAEC: nop

    // 0x8009DAF0: lh          $t8, 0xEA($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XEA);
    // 0x8009DAF4: nop

    // 0x8009DAF8: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x8009DAFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009DB00: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8009DB04: addiu       $t9, $t9, 0x6950
    ctx->r25 = ADD32(ctx->r25, 0X6950);
    // 0x8009DB08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009DB0C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8009DB10: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8009DB14: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8009DB18: jal         0x8001C0EC
    // 0x8009DB1C: addiu       $a3, $zero, 0xA5
    ctx->r7 = ADD32(0, 0XA5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8009DB1C: addiu       $a3, $zero, 0xA5
    ctx->r7 = ADD32(0, 0XA5);
    after_0:
    // 0x8009DB20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009DB24: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009DB28: addiu       $a3, $a3, 0x698C
    ctx->r7 = ADD32(ctx->r7, 0X698C);
    // 0x8009DB2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009DB30: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x8009DB34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009DB38: jal         0x8001ABF4
    // 0x8009DB3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8009DB3C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009DB40: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009DB44: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009DB48: addiu       $a3, $a3, 0x698C
    ctx->r7 = ADD32(ctx->r7, 0X698C);
    // 0x8009DB4C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009DB50: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x8009DB54: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x8009DB58: jal         0x8001ABF4
    // 0x8009DB5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x8009DB5C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x8009DB60: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009DB64: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009DB68: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009DB6C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009DB70: jal         0x80019448
    // 0x8009DB74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_3;
    // 0x8009DB74: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_3:
    // 0x8009DB78: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8009DB7C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009DB80: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009DB84: jal         0x80019448
    // 0x8009DB88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_4;
    // 0x8009DB88: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x8009DB8C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DB90: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x8009DB94: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009DB98: jal         0x80019448
    // 0x8009DB9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_5;
    // 0x8009DB9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x8009DBA0: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8009DBA4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009DBA8: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8009DBAC: nop

    // 0x8009DBB0: swc1        $f4, 0x18($t0)
    MEM_W(0X18, ctx->r8) = ctx->f4.u32l;
    // 0x8009DBB4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009DBB8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009DBBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009DBC0: addiu       $a2, $zero, 0x2C
    ctx->r6 = ADD32(0, 0X2C);
    // 0x8009DBC4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009DBC8: jal         0x800175F0
    // 0x8009DBCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_6;
    // 0x8009DBCC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_6:
L_8009DBD0:
    // 0x8009DBD0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8009DBD4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8009DBD8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009DBDC: lwc1        $f6, 0x4($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8009DBE0: nop

    // 0x8009DBE4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8009DBE8: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x8009DBEC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8009DBF0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8009DBF4: lwc1        $f18, 0x48F8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X48F8);
    // 0x8009DBF8: lwc1        $f16, 0x4($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8009DBFC: nop

    // 0x8009DC00: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8009DC04: nop

    // 0x8009DC08: bc1f        L_8009DC28
    if (!c1cs) {
        // 0x8009DC0C: nop
    
            goto L_8009DC28;
    }
    // 0x8009DC0C: nop

    // 0x8009DC10: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009DC14: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x8009DC18: sh          $t3, 0xA4($t4)
    MEM_H(0XA4, ctx->r12) = ctx->r11;
    // 0x8009DC1C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x8009DC20: nop

    // 0x8009DC24: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_8009DC28:
    // 0x8009DC28: b           L_8009DDF8
    // 0x8009DC2C: nop

        goto L_8009DDF8;
    // 0x8009DC2C: nop

L_8009DC30:
    // 0x8009DC30: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8009DC34: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8009DC38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009DC3C: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8009DC40: nop

    // 0x8009DC44: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009DC48: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x8009DC4C: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009DC50: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x8009DC54: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009DC58: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8009DC5C: jal         0x80015538
    // 0x8009DC60: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x8009DC60: nop

    after_7:
    // 0x8009DC64: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8009DC68: nop

    // 0x8009DC6C: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x8009DC70: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8009DC74: lui         $at, 0x432A
    ctx->r1 = S32(0X432A << 16);
    // 0x8009DC78: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8009DC7C: lwc1        $f10, 0x1C($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8009DC80: nop

    // 0x8009DC84: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x8009DC88: nop

    // 0x8009DC8C: bc1f        L_8009DCAC
    if (!c1cs) {
        // 0x8009DC90: nop
    
            goto L_8009DCAC;
    }
    // 0x8009DC90: nop

    // 0x8009DC94: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8009DC98: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x8009DC9C: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8009DCA0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x8009DCA4: nop

    // 0x8009DCA8: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_8009DCAC:
    // 0x8009DCAC: b           L_8009DDF8
    // 0x8009DCB0: nop

        goto L_8009DDF8;
    // 0x8009DCB0: nop

L_8009DCB4:
    // 0x8009DCB4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8009DCB8: nop

    // 0x8009DCBC: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x8009DCC0: nop

    // 0x8009DCC4: bne         $t4, $zero, L_8009DCFC
    if (ctx->r12 != 0) {
        // 0x8009DCC8: nop
    
            goto L_8009DCFC;
    }
    // 0x8009DCC8: nop

    // 0x8009DCCC: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8009DCD0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8009DCD4: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x8009DCD8: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8009DCDC: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x8009DCE0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8009DCE4: lwc1        $f18, 0x4($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X4);
    // 0x8009DCE8: lwc1        $f12, 0x0($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X0);
    // 0x8009DCEC: lw          $a2, 0x8($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X8);
    // 0x8009DCF0: lw          $a3, 0x1C($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X1C);
    // 0x8009DCF4: jal         0x8009D75C
    // 0x8009DCF8: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    func_8009D75C(rdram, ctx);
        goto after_8;
    // 0x8009DCF8: sub.s       $f14, $f18, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f14.fl = ctx->f18.fl - ctx->f4.fl;
    after_8:
L_8009DCFC:
    // 0x8009DCFC: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8009DD00: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x8009DD04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009DD08: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8009DD0C: nop

    // 0x8009DD10: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8009DD14: swc1        $f10, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f10.u32l;
    // 0x8009DD18: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8009DD1C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x8009DD20: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009DD24: lwc1        $f16, 0x0($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8009DD28: nop

    // 0x8009DD2C: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8009DD30: swc1        $f4, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->f4.u32l;
    // 0x8009DD34: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8009DD38: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8009DD3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8009DD40: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8009DD44: nop

    // 0x8009DD48: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x8009DD4C: swc1        $f10, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f10.u32l;
    // 0x8009DD50: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x8009DD54: lui         $at, 0xC416
    ctx->r1 = S32(0XC416 << 16);
    // 0x8009DD58: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8009DD5C: lwc1        $f16, 0x0($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X0);
    // 0x8009DD60: nop

    // 0x8009DD64: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x8009DD68: nop

    // 0x8009DD6C: bc1f        L_8009DDF0
    if (!c1cs) {
        // 0x8009DD70: nop
    
            goto L_8009DDF0;
    }
    // 0x8009DD70: nop

    // 0x8009DD74: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x8009DD78: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x8009DD7C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x8009DD80: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009DD84: nop

    // 0x8009DD88: lh          $t5, 0xE8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE8);
    // 0x8009DD8C: nop

    // 0x8009DD90: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
    // 0x8009DD94: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8009DD98: nop

    // 0x8009DD9C: lh          $t7, 0xEA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XEA);
    // 0x8009DDA0: nop

    // 0x8009DDA4: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8009DDA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009DDAC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009DDB0: jal         0x800281A4
    // 0x8009DDB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_9;
    // 0x8009DDB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8009DDB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009DDBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009DDC0: jal         0x800281A4
    // 0x8009DDC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_800281A4(rdram, ctx);
        goto after_10;
    // 0x8009DDC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_10:
    // 0x8009DDC8: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x8009DDCC: jal         0x8002B0E4
    // 0x8009DDD0: nop

    func_8002B0E4(rdram, ctx);
        goto after_11;
    // 0x8009DDD0: nop

    after_11:
    // 0x8009DDD4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DDD8: jal         0x8002B0E4
    // 0x8009DDDC: nop

    func_8002B0E4(rdram, ctx);
        goto after_12;
    // 0x8009DDDC: nop

    after_12:
    // 0x8009DDE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009DDE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009DDE8: jal         0x8002B0E4
    // 0x8009DDEC: nop

    func_8002B0E4(rdram, ctx);
        goto after_13;
    // 0x8009DDEC: nop

    after_13:
L_8009DDF0:
    // 0x8009DDF0: b           L_8009DDF8
    // 0x8009DDF4: nop

        goto L_8009DDF8;
    // 0x8009DDF4: nop

L_8009DDF8:
    // 0x8009DDF8: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8009DDFC: nop

    // 0x8009DE00: lh          $t9, 0xE8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE8);
    // 0x8009DE04: nop

    // 0x8009DE08: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
    // 0x8009DE0C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x8009DE10: nop

    // 0x8009DE14: lh          $t1, 0xEA($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XEA);
    // 0x8009DE18: nop

    // 0x8009DE1C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x8009DE20: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8009DE24: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009DE28: beq         $t2, $at, L_8009DFD0
    if (ctx->r10 == ctx->r1) {
        // 0x8009DE2C: nop
    
            goto L_8009DFD0;
    }
    // 0x8009DE2C: nop

    // 0x8009DE30: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DE34: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009DE38: beq         $t3, $at, L_8009DFD0
    if (ctx->r11 == ctx->r1) {
        // 0x8009DE3C: nop
    
            goto L_8009DFD0;
    }
    // 0x8009DE3C: nop

    // 0x8009DE40: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DE44: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8009DE48: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8009DE4C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8009DE50: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009DE54: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009DE58: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8009DE5C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8009DE60: lwc1        $f20, 0x0($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X0);
    // 0x8009DE64: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009DE68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DE6C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009DE70: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009DE74: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009DE78: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009DE7C: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x8009DE80: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DE84: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009DE88: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8009DE8C: swc1        $f20, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f20.u32l;
    // 0x8009DE90: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DE94: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8009DE98: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009DE9C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009DEA0: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8009DEA4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009DEA8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009DEAC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009DEB0: lwc1        $f20, 0x4($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8009DEB4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009DEB8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DEBC: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009DEC0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009DEC4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009DEC8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009DECC: swc1        $f20, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f20.u32l;
    // 0x8009DED0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DED4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009DED8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8009DEDC: swc1        $f20, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f20.u32l;
    // 0x8009DEE0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DEE4: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8009DEE8: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8009DEEC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8009DEF0: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009DEF4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009DEF8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8009DEFC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8009DF00: lwc1        $f20, 0x8($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X8);
    // 0x8009DF04: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009DF08: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DF0C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009DF10: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009DF14: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009DF18: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009DF1C: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x8009DF20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DF24: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009DF28: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8009DF2C: swc1        $f20, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f20.u32l;
    // 0x8009DF30: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DF34: lw          $t2, 0x40($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X40);
    // 0x8009DF38: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8009DF3C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009DF40: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x8009DF44: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009DF48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009DF4C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009DF50: lwc1        $f20, 0x1C($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8009DF54: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8009DF58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DF5C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009DF60: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8009DF64: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009DF68: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8009DF6C: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x8009DF70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DF74: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009DF78: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8009DF7C: swc1        $f20, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f20.u32l;
    // 0x8009DF80: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x8009DF84: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8009DF88: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8009DF8C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8009DF90: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x8009DF94: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8009DF98: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8009DF9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8009DFA0: lwc1        $f20, 0x18($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X18);
    // 0x8009DFA4: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8009DFA8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DFAC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009DFB0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8009DFB4: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8009DFB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8009DFBC: swc1        $f20, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f20.u32l;
    // 0x8009DFC0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009DFC4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8009DFC8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8009DFCC: swc1        $f20, 0x4168($at)
    MEM_W(0X4168, ctx->r1) = ctx->f20.u32l;
L_8009DFD0:
    // 0x8009DFD0: b           L_8009DFD8
    // 0x8009DFD4: nop

        goto L_8009DFD8;
    // 0x8009DFD4: nop

L_8009DFD8:
    // 0x8009DFD8: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x8009DFDC: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x8009DFE0: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8009DFE4: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x8009DFE8: jr          $ra
    // 0x8009DFEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x8009DFEC: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80082CC4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80082CC4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80082CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80082CCC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80082CD0: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x80082CD4: nop

    // 0x80082CD8: sw          $t6, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r14;
    // 0x80082CDC: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80082CE0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80082CE4: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x80082CE8: bne         $t7, $at, L_80082CFC
    if (ctx->r15 != ctx->r1) {
        // 0x80082CEC: nop
    
            goto L_80082CFC;
    }
    // 0x80082CEC: nop

    // 0x80082CF0: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80082CF4: b           L_80082E04
    // 0x80082CF8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_80082E04;
    // 0x80082CF8: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_80082CFC:
    // 0x80082CFC: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80082D00: addiu       $at, $zero, 0x17
    ctx->r1 = ADD32(0, 0X17);
    // 0x80082D04: beq         $t9, $at, L_80082D30
    if (ctx->r25 == ctx->r1) {
        // 0x80082D08: nop
    
            goto L_80082D30;
    }
    // 0x80082D08: nop

    // 0x80082D0C: addiu       $at, $zero, 0x33
    ctx->r1 = ADD32(0, 0X33);
    // 0x80082D10: beq         $t9, $at, L_80082D30
    if (ctx->r25 == ctx->r1) {
        // 0x80082D14: nop
    
            goto L_80082D30;
    }
    // 0x80082D14: nop

    // 0x80082D18: addiu       $at, $zero, 0xA9
    ctx->r1 = ADD32(0, 0XA9);
    // 0x80082D1C: beq         $t9, $at, L_80082D30
    if (ctx->r25 == ctx->r1) {
        // 0x80082D20: nop
    
            goto L_80082D30;
    }
    // 0x80082D20: nop

    // 0x80082D24: addiu       $at, $zero, 0x3B
    ctx->r1 = ADD32(0, 0X3B);
    // 0x80082D28: bne         $t9, $at, L_80082D3C
    if (ctx->r25 != ctx->r1) {
        // 0x80082D2C: nop
    
            goto L_80082D3C;
    }
    // 0x80082D2C: nop

L_80082D30:
    // 0x80082D30: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80082D34: b           L_80082E04
    // 0x80082D38: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_80082E04;
    // 0x80082D38: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_80082D3C:
    // 0x80082D3C: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80082D40: addiu       $at, $zero, 0xD
    ctx->r1 = ADD32(0, 0XD);
    // 0x80082D44: bne         $t1, $at, L_80082D58
    if (ctx->r9 != ctx->r1) {
        // 0x80082D48: nop
    
            goto L_80082D58;
    }
    // 0x80082D48: nop

    // 0x80082D4C: addiu       $t2, $zero, 0x6
    ctx->r10 = ADD32(0, 0X6);
    // 0x80082D50: b           L_80082E04
    // 0x80082D54: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
        goto L_80082E04;
    // 0x80082D54: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_80082D58:
    // 0x80082D58: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80082D5C: addiu       $at, $zero, 0x1F
    ctx->r1 = ADD32(0, 0X1F);
    // 0x80082D60: beq         $t3, $at, L_80082D80
    if (ctx->r11 == ctx->r1) {
        // 0x80082D64: nop
    
            goto L_80082D80;
    }
    // 0x80082D64: nop

    // 0x80082D68: addiu       $at, $zero, 0x43
    ctx->r1 = ADD32(0, 0X43);
    // 0x80082D6C: beq         $t3, $at, L_80082D80
    if (ctx->r11 == ctx->r1) {
        // 0x80082D70: nop
    
            goto L_80082D80;
    }
    // 0x80082D70: nop

    // 0x80082D74: addiu       $at, $zero, 0x66
    ctx->r1 = ADD32(0, 0X66);
    // 0x80082D78: bne         $t3, $at, L_80082D8C
    if (ctx->r11 != ctx->r1) {
        // 0x80082D7C: nop
    
            goto L_80082D8C;
    }
    // 0x80082D7C: nop

L_80082D80:
    // 0x80082D80: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x80082D84: b           L_80082E04
    // 0x80082D88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_80082E04;
    // 0x80082D88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_80082D8C:
    // 0x80082D8C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80082D90: addiu       $at, $zero, 0x21
    ctx->r1 = ADD32(0, 0X21);
    // 0x80082D94: bne         $t5, $at, L_80082DA8
    if (ctx->r13 != ctx->r1) {
        // 0x80082D98: nop
    
            goto L_80082DA8;
    }
    // 0x80082D98: nop

    // 0x80082D9C: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80082DA0: b           L_80082E04
    // 0x80082DA4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
        goto L_80082E04;
    // 0x80082DA4: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80082DA8:
    // 0x80082DA8: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x80082DAC: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x80082DB0: beq         $t7, $at, L_80082DC4
    if (ctx->r15 == ctx->r1) {
        // 0x80082DB4: nop
    
            goto L_80082DC4;
    }
    // 0x80082DB4: nop

    // 0x80082DB8: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x80082DBC: bne         $t7, $at, L_80082DD0
    if (ctx->r15 != ctx->r1) {
        // 0x80082DC0: nop
    
            goto L_80082DD0;
    }
    // 0x80082DC0: nop

L_80082DC4:
    // 0x80082DC4: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80082DC8: b           L_80082E04
    // 0x80082DCC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
        goto L_80082E04;
    // 0x80082DCC: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
L_80082DD0:
    // 0x80082DD0: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80082DD4: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x80082DD8: bne         $t9, $at, L_80082DEC
    if (ctx->r25 != ctx->r1) {
        // 0x80082DDC: nop
    
            goto L_80082DEC;
    }
    // 0x80082DDC: nop

    // 0x80082DE0: addiu       $t0, $zero, 0x9
    ctx->r8 = ADD32(0, 0X9);
    // 0x80082DE4: b           L_80082E04
    // 0x80082DE8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
        goto L_80082E04;
    // 0x80082DE8: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
L_80082DEC:
    // 0x80082DEC: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80082DF0: addiu       $at, $zero, 0x4A
    ctx->r1 = ADD32(0, 0X4A);
    // 0x80082DF4: bne         $t1, $at, L_80082E04
    if (ctx->r9 != ctx->r1) {
        // 0x80082DF8: nop
    
            goto L_80082E04;
    }
    // 0x80082DF8: nop

    // 0x80082DFC: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80082E00: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
L_80082E04:
    // 0x80082E04: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80082E08: nop

    // 0x80082E0C: beq         $t3, $zero, L_80082E20
    if (ctx->r11 == 0) {
        // 0x80082E10: nop
    
            goto L_80082E20;
    }
    // 0x80082E10: nop

    // 0x80082E14: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80082E18: jal         0x8005E230
    // 0x80082E1C: nop

    Demo_Start(rdram, ctx);
        goto after_0;
    // 0x80082E1C: nop

    after_0:
L_80082E20:
    // 0x80082E20: b           L_80082E28
    // 0x80082E24: nop

        goto L_80082E28;
    // 0x80082E24: nop

L_80082E28:
    // 0x80082E28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80082E2C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80082E30: jr          $ra
    // 0x80082E34: nop

    return;
    // 0x80082E34: nop

;}
RECOMP_FUNC void func_8006357C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006357C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80063580: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80063584: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x80063588: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006358C: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80063590: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80063594: sw          $t6, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r14;
    // 0x80063598: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8006359C: lui         $t8, 0xE700
    ctx->r24 = S32(0XE700 << 16);
    // 0x800635A0: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800635A4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x800635A8: nop

    // 0x800635AC: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800635B0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800635B4: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800635B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800635BC: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800635C0: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800635C4: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x800635C8: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x800635CC: lui         $t3, 0xB600
    ctx->r11 = S32(0XB600 << 16);
    // 0x800635D0: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800635D4: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x800635D8: lui         $t5, 0x1F
    ctx->r13 = S32(0X1F << 16);
    // 0x800635DC: ori         $t5, $t5, 0x3204
    ctx->r13 = ctx->r13 | 0X3204;
    // 0x800635E0: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800635E4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800635E8: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x800635EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800635F0: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800635F4: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x800635F8: sw          $t7, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r15;
    // 0x800635FC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80063600: lui         $t9, 0xB700
    ctx->r25 = S32(0XB700 << 16);
    // 0x80063604: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x80063608: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8006360C: lui         $t1, 0x2
    ctx->r9 = S32(0X2 << 16);
    // 0x80063610: ori         $t1, $t1, 0x2205
    ctx->r9 = ctx->r9 | 0X2205;
    // 0x80063614: sw          $t1, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r9;
    // 0x80063618: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8006361C: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x80063620: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063624: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x80063628: sw          $t4, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r12;
    // 0x8006362C: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x80063630: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80063634: lui         $t5, 0xBA00
    ctx->r13 = S32(0XBA00 << 16);
    // 0x80063638: ori         $t5, $t5, 0x1301
    ctx->r13 = ctx->r13 | 0X1301;
    // 0x8006363C: sw          $t5, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r13;
    // 0x80063640: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80063644: nop

    // 0x80063648: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
    // 0x8006364C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80063650: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80063654: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063658: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8006365C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80063660: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x80063664: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80063668: lui         $t0, 0xB900
    ctx->r8 = S32(0XB900 << 16);
    // 0x8006366C: ori         $t0, $t0, 0x31D
    ctx->r8 = ctx->r8 | 0X31D;
    // 0x80063670: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80063674: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80063678: lui         $t2, 0x55
    ctx->r10 = S32(0X55 << 16);
    // 0x8006367C: ori         $t2, $t2, 0x3048
    ctx->r10 = ctx->r10 | 0X3048;
    // 0x80063680: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80063684: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80063688: lw          $t4, -0x1F04($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X1F04);
    // 0x8006368C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063690: addiu       $t5, $t4, 0x8
    ctx->r13 = ADD32(ctx->r12, 0X8);
    // 0x80063694: sw          $t5, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r13;
    // 0x80063698: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8006369C: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x800636A0: lui         $t6, 0xFCFF
    ctx->r14 = S32(0XFCFF << 16);
    // 0x800636A4: ori         $t6, $t6, 0xFFFF
    ctx->r14 = ctx->r14 | 0XFFFF;
    // 0x800636A8: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800636AC: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x800636B0: lui         $t8, 0xFFFC
    ctx->r24 = S32(0XFFFC << 16);
    // 0x800636B4: ori         $t8, $t8, 0xF279
    ctx->r24 = ctx->r24 | 0XF279;
    // 0x800636B8: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x800636BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800636C0: lw          $t0, -0x1F04($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F04);
    // 0x800636C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800636C8: addiu       $t1, $t0, 0x8
    ctx->r9 = ADD32(ctx->r8, 0X8);
    // 0x800636CC: sw          $t1, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r9;
    // 0x800636D0: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
    // 0x800636D4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800636D8: lui         $t2, 0xBA00
    ctx->r10 = S32(0XBA00 << 16);
    // 0x800636DC: ori         $t2, $t2, 0x602
    ctx->r10 = ctx->r10 | 0X602;
    // 0x800636E0: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x800636E4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800636E8: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x800636EC: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x800636F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800636F4: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x800636F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800636FC: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x80063700: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x80063704: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x80063708: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8006370C: lui         $t8, 0xBA00
    ctx->r24 = S32(0XBA00 << 16);
    // 0x80063710: ori         $t8, $t8, 0xC02
    ctx->r24 = ctx->r24 | 0XC02;
    // 0x80063714: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x80063718: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8006371C: addiu       $t0, $zero, 0x2000
    ctx->r8 = ADD32(0, 0X2000);
    // 0x80063720: sw          $t0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r8;
    // 0x80063724: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80063728: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8006372C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063730: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80063734: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x80063738: sw          $t2, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r10;
    // 0x8006373C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80063740: lui         $t4, 0xBA00
    ctx->r12 = S32(0XBA00 << 16);
    // 0x80063744: ori         $t4, $t4, 0xE02
    ctx->r12 = ctx->r12 | 0XE02;
    // 0x80063748: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8006374C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80063750: ori         $t6, $zero, 0x8000
    ctx->r14 = 0 | 0X8000;
    // 0x80063754: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80063758: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006375C: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80063760: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063764: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x80063768: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8006376C: sw          $t8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r24;
    // 0x80063770: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80063774: lui         $t0, 0xFD10
    ctx->r8 = S32(0XFD10 << 16);
    // 0x80063778: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8006377C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80063780: addiu       $t2, $t2, -0x3560
    ctx->r10 = ADD32(ctx->r10, -0X3560);
    // 0x80063784: lw          $t3, 0xD0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0XD0);
    // 0x80063788: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8006378C: addiu       $t4, $t3, 0x10
    ctx->r12 = ADD32(ctx->r11, 0X10);
    // 0x80063790: sw          $t4, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->r12;
    // 0x80063794: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80063798: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8006379C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800637A0: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x800637A4: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x800637A8: sw          $t6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r14;
    // 0x800637AC: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x800637B0: lui         $t8, 0xE800
    ctx->r24 = S32(0XE800 << 16);
    // 0x800637B4: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x800637B8: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x800637BC: nop

    // 0x800637C0: sw          $zero, 0x4($t0)
    MEM_W(0X4, ctx->r8) = 0;
    // 0x800637C4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800637C8: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x800637CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800637D0: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x800637D4: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x800637D8: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800637DC: lw          $t4, 0x10($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X10);
    // 0x800637E0: lui         $t3, 0xF500
    ctx->r11 = S32(0XF500 << 16);
    // 0x800637E4: ori         $t3, $t3, 0x100
    ctx->r11 = ctx->r11 | 0X100;
    // 0x800637E8: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x800637EC: lw          $t6, 0x10($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X10);
    // 0x800637F0: lui         $t5, 0x700
    ctx->r13 = S32(0X700 << 16);
    // 0x800637F4: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800637F8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800637FC: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x80063800: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063804: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80063808: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8006380C: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
    // 0x80063810: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x80063814: lui         $t9, 0xE600
    ctx->r25 = S32(0XE600 << 16);
    // 0x80063818: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x8006381C: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x80063820: nop

    // 0x80063824: sw          $zero, 0x4($t1)
    MEM_W(0X4, ctx->r9) = 0;
    // 0x80063828: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8006382C: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x80063830: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063834: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x80063838: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8006383C: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x80063840: lw          $t5, 0x8($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X8);
    // 0x80063844: lui         $t4, 0xF000
    ctx->r12 = S32(0XF000 << 16);
    // 0x80063848: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8006384C: lw          $t7, 0x8($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X8);
    // 0x80063850: lui         $t6, 0x703
    ctx->r14 = S32(0X703 << 16);
    // 0x80063854: ori         $t6, $t6, 0xC000
    ctx->r14 = ctx->r14 | 0XC000;
    // 0x80063858: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8006385C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80063860: lw          $t8, -0x1F04($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1F04);
    // 0x80063864: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80063868: addiu       $t9, $t8, 0x8
    ctx->r25 = ADD32(ctx->r24, 0X8);
    // 0x8006386C: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x80063870: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
    // 0x80063874: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80063878: lui         $t0, 0xE700
    ctx->r8 = S32(0XE700 << 16);
    // 0x8006387C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80063880: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80063884: nop

    // 0x80063888: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8006388C: b           L_80063894
    // 0x80063890: nop

        goto L_80063894;
    // 0x80063890: nop

L_80063894:
    // 0x80063894: jr          $ra
    // 0x80063898: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80063898: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8006707C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006707C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80067080: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80067084: jal         0x80066AE8
    // 0x80067088: nop

    func_80066AE8(rdram, ctx);
        goto after_0;
    // 0x80067088: nop

    after_0:
    // 0x8006708C: addiu       $t6, $zero, 0x4E
    ctx->r14 = ADD32(0, 0X4E);
    // 0x80067090: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
L_80067094:
    // 0x80067094: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80067098: jal         0x8001A928
    // 0x8006709C: nop

    func_8001A928(rdram, ctx);
        goto after_1;
    // 0x8006709C: nop

    after_1:
    // 0x800670A0: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800670A4: nop

    // 0x800670A8: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x800670AC: slti        $at, $t8, 0x8E
    ctx->r1 = SIGNED(ctx->r24) < 0X8E ? 1 : 0;
    // 0x800670B0: bne         $at, $zero, L_80067094
    if (ctx->r1 != 0) {
        // 0x800670B4: sw          $t8, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r24;
            goto L_80067094;
    }
    // 0x800670B4: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800670B8: jal         0x80065C20
    // 0x800670BC: nop

    func_80065C20(rdram, ctx);
        goto after_2;
    // 0x800670BC: nop

    after_2:
    // 0x800670C0: jal         0x800669E0
    // 0x800670C4: nop

    func_800669E0(rdram, ctx);
        goto after_3;
    // 0x800670C4: nop

    after_3:
    // 0x800670C8: jal         0x800650F0
    // 0x800670CC: nop

    func_800650F0(rdram, ctx);
        goto after_4;
    // 0x800670CC: nop

    after_4:
    // 0x800670D0: b           L_800670D8
    // 0x800670D4: nop

        goto L_800670D8;
    // 0x800670D4: nop

L_800670D8:
    // 0x800670D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800670DC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800670E0: jr          $ra
    // 0x800670E4: nop

    return;
    // 0x800670E4: nop

;}
RECOMP_FUNC void func_800B4E90(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B4E90: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800B4E94: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B4E98: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B4E9C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B4EA0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B4EA4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B4EA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4EAC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B4EB0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B4EB4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B4EB8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B4EBC: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B4EC0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B4EC4: bne         $t8, $at, L_800B4EDC
    if (ctx->r24 != ctx->r1) {
        // 0x800B4EC8: nop
    
            goto L_800B4EDC;
    }
    // 0x800B4EC8: nop

    // 0x800B4ECC: jal         0x800B4C80
    // 0x800B4ED0: nop

    func_800B4C80(rdram, ctx);
        goto after_0;
    // 0x800B4ED0: nop

    after_0:
    // 0x800B4ED4: b           L_800B4EE4
    // 0x800B4ED8: nop

        goto L_800B4EE4;
    // 0x800B4ED8: nop

L_800B4EDC:
    // 0x800B4EDC: jal         0x800B4E60
    // 0x800B4EE0: nop

    func_800B4E60(rdram, ctx);
        goto after_1;
    // 0x800B4EE0: nop

    after_1:
L_800B4EE4:
    // 0x800B4EE4: b           L_800B4EEC
    // 0x800B4EE8: nop

        goto L_800B4EEC;
    // 0x800B4EE8: nop

L_800B4EEC:
    // 0x800B4EEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B4EF0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800B4EF4: jr          $ra
    // 0x800B4EF8: nop

    return;
    // 0x800B4EF8: nop

;}
RECOMP_FUNC void func_800CECB0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CECB0: jr          $ra
    // 0x800CECB4: nop

    return;
    // 0x800CECB4: nop

    // 0x800CECB8: jr          $ra
    // 0x800CECBC: nop

    return;
    // 0x800CECBC: nop

;}
RECOMP_FUNC void func_800608B8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800608B8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800608BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800608C0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800608C4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800608C8: jal         0x8006031C
    // 0x800608CC: nop

    func_8006031C(rdram, ctx);
        goto after_0;
    // 0x800608CC: nop

    after_0:
    // 0x800608D0: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_800608D4:
    // 0x800608D4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800608D8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800608DC: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x800608E0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800608E4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800608E8: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x800608EC: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x800608F0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800608F4: bne         $t0, $at, L_80060904
    if (ctx->r8 != ctx->r1) {
        // 0x800608F8: nop
    
            goto L_80060904;
    }
    // 0x800608F8: nop

    // 0x800608FC: b           L_80060B8C
    // 0x80060900: nop

        goto L_80060B8C;
    // 0x80060900: nop

L_80060904:
    // 0x80060904: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80060908: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8006090C: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80060910: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80060914: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80060918: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x8006091C: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x80060920: nop

    // 0x80060924: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x80060928: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8006092C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060930: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80060934: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80060938: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8006093C: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80060940: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80060944: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80060948: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8006094C: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80060950: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80060954: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x80060958: sll         $t2, $t0, 3
    ctx->r10 = S32(ctx->r8 << 3);
    // 0x8006095C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80060960: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80060964: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x80060968: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8006096C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80060970: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80060974: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80060978: addu        $t1, $t9, $t2
    ctx->r9 = ADD32(ctx->r25, ctx->r10);
    // 0x8006097C: lwc1        $f4, 0x8($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80060980: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80060984: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060988: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8006098C: swc1        $f4, 0x4150($at)
    MEM_W(0X4150, ctx->r1) = ctx->f4.u32l;
    // 0x80060990: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80060994: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x80060998: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8006099C: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x800609A0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x800609A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800609A8: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800609AC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800609B0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800609B4: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x800609B8: addu        $t8, $t5, $t7
    ctx->r24 = ADD32(ctx->r13, ctx->r15);
    // 0x800609BC: lwc1        $f6, 0xC($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800609C0: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800609C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800609C8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800609CC: swc1        $f6, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f6.u32l;
    // 0x800609D0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800609D4: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x800609D8: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x800609DC: sll         $t5, $t6, 2
    ctx->r13 = S32(ctx->r14 << 2);
    // 0x800609E0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800609E4: addu        $t3, $t3, $t1
    ctx->r11 = ADD32(ctx->r11, ctx->r9);
    // 0x800609E8: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800609EC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800609F0: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800609F4: addu        $t5, $t5, $t6
    ctx->r13 = ADD32(ctx->r13, ctx->r14);
    // 0x800609F8: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x800609FC: lwc1        $f8, 0x10($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X10);
    // 0x80060A00: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80060A04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060A08: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80060A0C: swc1        $f8, 0x4158($at)
    MEM_W(0X4158, ctx->r1) = ctx->f8.u32l;
    // 0x80060A10: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80060A14: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x80060A18: sll         $t0, $t8, 3
    ctx->r8 = S32(ctx->r24 << 3);
    // 0x80060A1C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80060A20: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80060A24: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80060A28: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80060A2C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80060A30: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80060A34: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80060A38: addu        $t9, $t7, $t0
    ctx->r25 = ADD32(ctx->r15, ctx->r8);
    // 0x80060A3C: lwc1        $f10, 0x14($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X14);
    // 0x80060A40: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80060A44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060A48: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80060A4C: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x80060A50: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80060A54: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x80060A58: sll         $t6, $t4, 3
    ctx->r14 = S32(ctx->r12 << 3);
    // 0x80060A5C: sll         $t7, $t8, 2
    ctx->r15 = S32(ctx->r24 << 2);
    // 0x80060A60: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x80060A64: addu        $t6, $t6, $t4
    ctx->r14 = ADD32(ctx->r14, ctx->r12);
    // 0x80060A68: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80060A6C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80060A70: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80060A74: addu        $t7, $t7, $t8
    ctx->r15 = ADD32(ctx->r15, ctx->r24);
    // 0x80060A78: addu        $t5, $t3, $t6
    ctx->r13 = ADD32(ctx->r11, ctx->r14);
    // 0x80060A7C: lwc1        $f16, 0x18($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X18);
    // 0x80060A80: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80060A84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060A88: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80060A8C: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x80060A90: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80060A94: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x80060A98: sll         $t1, $t9, 3
    ctx->r9 = S32(ctx->r25 << 3);
    // 0x80060A9C: sll         $t3, $t4, 2
    ctx->r11 = S32(ctx->r12 << 2);
    // 0x80060AA0: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80060AA4: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80060AA8: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80060AAC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80060AB0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80060AB4: addu        $t3, $t3, $t4
    ctx->r11 = ADD32(ctx->r11, ctx->r12);
    // 0x80060AB8: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80060ABC: lwc1        $f18, 0x1C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80060AC0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80060AC4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060AC8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80060ACC: swc1        $f18, 0x4224($at)
    MEM_W(0X4224, ctx->r1) = ctx->f18.u32l;
    // 0x80060AD0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80060AD4: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x80060AD8: sll         $t8, $t5, 3
    ctx->r24 = S32(ctx->r13 << 3);
    // 0x80060ADC: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80060AE0: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80060AE4: addu        $t8, $t8, $t5
    ctx->r24 = ADD32(ctx->r24, ctx->r13);
    // 0x80060AE8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80060AEC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80060AF0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060AF4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80060AF8: addu        $t7, $t6, $t8
    ctx->r15 = ADD32(ctx->r14, ctx->r24);
    // 0x80060AFC: lwc1        $f4, 0x20($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X20);
    // 0x80060B00: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80060B04: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060B08: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80060B0C: swc1        $f4, 0x4228($at)
    MEM_W(0X4228, ctx->r1) = ctx->f4.u32l;
    // 0x80060B10: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80060B14: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80060B18: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x80060B1C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80060B20: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80060B24: addu        $t4, $t4, $t2
    ctx->r12 = ADD32(ctx->r12, ctx->r10);
    // 0x80060B28: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80060B2C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80060B30: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80060B34: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80060B38: addu        $t3, $t1, $t4
    ctx->r11 = ADD32(ctx->r9, ctx->r12);
    // 0x80060B3C: lw          $t5, 0x0($t3)
    ctx->r13 = MEM_W(ctx->r11, 0X0);
    // 0x80060B40: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80060B44: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80060B48: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80060B4C: sh          $t5, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r13;
    // 0x80060B50: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80060B54: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80060B58: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80060B5C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80060B60: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80060B64: addu        $t2, $t7, $t0
    ctx->r10 = ADD32(ctx->r15, ctx->r8);
    // 0x80060B68: lw          $a0, 0x0($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X0);
    // 0x80060B6C: lw          $a1, 0x18($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X18);
    // 0x80060B70: jal         0x80060808
    // 0x80060B74: nop

    func_80060808(rdram, ctx);
        goto after_1;
    // 0x80060B74: nop

    after_1:
    // 0x80060B78: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80060B7C: nop

    // 0x80060B80: addiu       $t4, $t1, 0x1
    ctx->r12 = ADD32(ctx->r9, 0X1);
    // 0x80060B84: b           L_800608D4
    // 0x80060B88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
        goto L_800608D4;
    // 0x80060B88: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_80060B8C:
    // 0x80060B8C: b           L_80060B94
    // 0x80060B90: nop

        goto L_80060B94;
    // 0x80060B90: nop

L_80060B94:
    // 0x80060B94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80060B9C: jr          $ra
    // 0x80060BA0: nop

    return;
    // 0x80060BA0: nop

;}
RECOMP_FUNC void func_80093B64(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80093B64: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80093B68: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80093B6C: swc1        $f23, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(23 - 1) * 2];
    // 0x80093B70: swc1        $f22, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f22.u32l;
    // 0x80093B74: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80093B78: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80093B7C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80093B80: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80093B84: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80093B88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80093B8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80093B90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80093B94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80093B98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80093B9C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80093BA0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80093BA4: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80093BA8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80093BAC: nop

    // 0x80093BB0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80093BB4: nop

    // 0x80093BB8: bne         $t1, $zero, L_80093C40
    if (ctx->r9 != 0) {
        // 0x80093BBC: nop
    
            goto L_80093C40;
    }
    // 0x80093BBC: nop

    // 0x80093BC0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80093BC4: nop

    // 0x80093BC8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80093BCC: nop

    // 0x80093BD0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80093BD4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80093BD8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80093BDC: addiu       $at, $zero, 0x27
    ctx->r1 = ADD32(0, 0X27);
    // 0x80093BE0: lh          $t6, 0xE4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE4);
    // 0x80093BE4: nop

    // 0x80093BE8: bne         $t6, $at, L_80093C14
    if (ctx->r14 != ctx->r1) {
        // 0x80093BEC: nop
    
            goto L_80093C14;
    }
    // 0x80093BEC: nop

    // 0x80093BF0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80093BF4: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80093BF8: addiu       $t7, $t7, 0x31F0
    ctx->r15 = ADD32(ctx->r15, 0X31F0);
    // 0x80093BFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80093C00: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80093C04: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80093C08: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80093C0C: jal         0x8001C0EC
    // 0x80093C10: addiu       $a3, $zero, 0x39
    ctx->r7 = ADD32(0, 0X39);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80093C10: addiu       $a3, $zero, 0x39
    ctx->r7 = ADD32(0, 0X39);
    after_0:
L_80093C14:
    // 0x80093C14: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80093C18: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80093C1C: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80093C20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80093C24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80093C28: jal         0x8001BB34
    // 0x80093C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80093C2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80093C30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80093C34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80093C38: jal         0x8001BB04
    // 0x80093C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB04(rdram, ctx);
        goto after_2;
    // 0x80093C3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
L_80093C40:
    // 0x80093C40: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80093C44: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80093C48: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80093C4C: lwc1        $f4, 0xD4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0XD4);
    // 0x80093C50: nop

    // 0x80093C54: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80093C58: nop

    // 0x80093C5C: bc1f        L_80093CEC
    if (!c1cs) {
        // 0x80093C60: nop
    
            goto L_80093CEC;
    }
    // 0x80093C60: nop

    // 0x80093C64: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80093C68: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80093C6C: lwc1        $f8, 0xD4($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0XD4);
    // 0x80093C70: lwc1        $f17, 0x33E0($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X33E0);
    // 0x80093C74: lwc1        $f16, 0x33E4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X33E4);
    // 0x80093C78: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80093C7C: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80093C80: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80093C84: swc1        $f4, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f4.u32l;
    // 0x80093C88: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80093C8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80093C90: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80093C94: lwc1        $f6, 0xD4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x80093C98: nop

    // 0x80093C9C: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x80093CA0: nop

    // 0x80093CA4: bc1f        L_80093CC0
    if (!c1cs) {
        // 0x80093CA8: nop
    
            goto L_80093CC0;
    }
    // 0x80093CA8: nop

    // 0x80093CAC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80093CB0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80093CB4: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80093CB8: nop

    // 0x80093CBC: swc1        $f10, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f10.u32l;
L_80093CC0:
    // 0x80093CC0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80093CC4: nop

    // 0x80093CC8: lwc1        $f22, 0xD4($t2)
    ctx->f22.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x80093CCC: nop

    // 0x80093CD0: swc1        $f22, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f22.u32l;
    // 0x80093CD4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80093CD8: mov.s       $f20, $f22
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 22);
    ctx->f20.fl = ctx->f22.fl;
    // 0x80093CDC: swc1        $f20, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f20.u32l;
    // 0x80093CE0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80093CE4: nop

    // 0x80093CE8: swc1        $f20, 0xC($t6)
    MEM_W(0XC, ctx->r14) = ctx->f20.u32l;
L_80093CEC:
    // 0x80093CEC: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80093CF0: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x80093CF4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80093CF8: lwc1        $f16, 0xD8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0XD8);
    // 0x80093CFC: nop

    // 0x80093D00: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80093D04: nop

    // 0x80093D08: bc1f        L_80093D6C
    if (!c1cs) {
        // 0x80093D0C: nop
    
            goto L_80093D6C;
    }
    // 0x80093D0C: nop

    // 0x80093D10: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80093D14: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80093D18: lwc1        $f4, 0xD8($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0XD8);
    // 0x80093D1C: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80093D20: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80093D24: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80093D28: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80093D2C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80093D30: swc1        $f16, 0xD8($t8)
    MEM_W(0XD8, ctx->r24) = ctx->f16.u32l;
    // 0x80093D34: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80093D38: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x80093D3C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80093D40: lwc1        $f18, 0xD8($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0XD8);
    // 0x80093D44: nop

    // 0x80093D48: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80093D4C: nop

    // 0x80093D50: bc1f        L_80093D6C
    if (!c1cs) {
        // 0x80093D54: nop
    
            goto L_80093D6C;
    }
    // 0x80093D54: nop

    // 0x80093D58: lui         $at, 0x4260
    ctx->r1 = S32(0X4260 << 16);
    // 0x80093D5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80093D60: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80093D64: nop

    // 0x80093D68: swc1        $f6, 0xD8($t0)
    MEM_W(0XD8, ctx->r8) = ctx->f6.u32l;
L_80093D6C:
    // 0x80093D6C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80093D70: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80093D74: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80093D78: lwc1        $f10, 0xD8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0XD8);
    // 0x80093D7C: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80093D80: jal         0x80015538
    // 0x80093D84: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80093D84: sub.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl - ctx->f10.fl;
    after_3:
    // 0x80093D88: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80093D8C: nop

    // 0x80093D90: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x80093D94: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80093D98: nop

    // 0x80093D9C: lh          $t2, 0xAC($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAC);
    // 0x80093DA0: nop

    // 0x80093DA4: beq         $t2, $zero, L_80093F0C
    if (ctx->r10 == 0) {
        // 0x80093DA8: nop
    
            goto L_80093F0C;
    }
    // 0x80093DA8: nop

    // 0x80093DAC: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80093DB0: nop

    // 0x80093DB4: lwc1        $f16, 0x28($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X28);
    // 0x80093DB8: lwc1        $f18, 0x4C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X4C);
    // 0x80093DBC: nop

    // 0x80093DC0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80093DC4: swc1        $f4, 0x28($t5)
    MEM_W(0X28, ctx->r13) = ctx->f4.u32l;
    // 0x80093DC8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80093DCC: lui         $at, 0xC1C0
    ctx->r1 = S32(0XC1C0 << 16);
    // 0x80093DD0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80093DD4: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x80093DD8: nop

    // 0x80093DDC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80093DE0: nop

    // 0x80093DE4: bc1f        L_80093E00
    if (!c1cs) {
        // 0x80093DE8: nop
    
            goto L_80093E00;
    }
    // 0x80093DE8: nop

    // 0x80093DEC: lui         $at, 0xC1C0
    ctx->r1 = S32(0XC1C0 << 16);
    // 0x80093DF0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80093DF4: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80093DF8: nop

    // 0x80093DFC: swc1        $f10, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f10.u32l;
L_80093E00:
    // 0x80093E00: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80093E04: nop

    // 0x80093E08: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80093E0C: lwc1        $f18, 0x28($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80093E10: nop

    // 0x80093E14: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x80093E18: swc1        $f4, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f4.u32l;
    // 0x80093E1C: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80093E20: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80093E24: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80093E28: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80093E2C: lwc1        $f12, 0x0($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X0);
    // 0x80093E30: lw          $a2, 0x8($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X8);
    // 0x80093E34: jal         0x80067748
    // 0x80093E38: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    func_80067748(rdram, ctx);
        goto after_4;
    // 0x80093E38: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_4:
    // 0x80093E3C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80093E40: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80093E44: nop

    // 0x80093E48: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80093E4C: beq         $t1, $zero, L_80093F0C
    if (ctx->r9 == 0) {
        // 0x80093E50: nop
    
            goto L_80093F0C;
    }
    // 0x80093E50: nop

    // 0x80093E54: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80093E58: lbu         $t3, 0x76E0($t3)
    ctx->r11 = MEM_BU(ctx->r11, 0X76E0);
    // 0x80093E5C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80093E60: andi        $t4, $t3, 0x1
    ctx->r12 = ctx->r11 & 0X1;
    // 0x80093E64: sll         $t2, $t4, 2
    ctx->r10 = S32(ctx->r12 << 2);
    // 0x80093E68: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80093E6C: lw          $t5, 0x7740($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7740);
    // 0x80093E70: addiu       $at, $zero, 0xF5
    ctx->r1 = ADD32(0, 0XF5);
    // 0x80093E74: beq         $t5, $at, L_80093E88
    if (ctx->r13 == ctx->r1) {
        // 0x80093E78: nop
    
            goto L_80093E88;
    }
    // 0x80093E78: nop

    // 0x80093E7C: addiu       $at, $zero, 0xD9
    ctx->r1 = ADD32(0, 0XD9);
    // 0x80093E80: bne         $t5, $at, L_80093EB0
    if (ctx->r13 != ctx->r1) {
        // 0x80093E84: nop
    
            goto L_80093EB0;
    }
    // 0x80093E84: nop

L_80093E88:
    // 0x80093E88: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80093E8C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80093E90: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80093E94: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80093E98: nop

    // 0x80093E9C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x80093EA0: b           L_80093F14
    // 0x80093EA4: nop

        goto L_80093F14;
    // 0x80093EA4: nop

    // 0x80093EA8: b           L_80093F0C
    // 0x80093EAC: nop

        goto L_80093F0C;
    // 0x80093EAC: nop

L_80093EB0:
    // 0x80093EB0: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80093EB4: nop

    // 0x80093EB8: sh          $zero, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = 0;
    // 0x80093EBC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80093EC0: lbu         $t0, 0x76E0($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X76E0);
    // 0x80093EC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80093EC8: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x80093ECC: sll         $t3, $t1, 2
    ctx->r11 = S32(ctx->r9 << 2);
    // 0x80093ED0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80093ED4: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x80093ED8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80093EDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80093EE0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80093EE4: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80093EE8: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
    // 0x80093EEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80093EF0: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80093EF4: nop

    // 0x80093EF8: swc1        $f4, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f4.u32l;
    // 0x80093EFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80093F00: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80093F04: nop

    // 0x80093F08: swc1        $f6, 0x4C($t5)
    MEM_W(0X4C, ctx->r13) = ctx->f6.u32l;
L_80093F0C:
    // 0x80093F0C: b           L_80093F14
    // 0x80093F10: nop

        goto L_80093F14;
    // 0x80093F10: nop

L_80093F14:
    // 0x80093F14: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80093F18: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80093F1C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80093F20: lwc1        $f23, 0x20($sp)
    ctx->f_odd[(23 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80093F24: lwc1        $f22, 0x24($sp)
    ctx->f22.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80093F28: jr          $ra
    // 0x80093F2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80093F2C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_800B8F38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B8F38: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800B8F3C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800B8F40: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800B8F44: sb          $zero, 0x27($sp)
    MEM_B(0X27, ctx->r29) = 0;
    // 0x800B8F48: sb          $zero, 0x26($sp)
    MEM_B(0X26, ctx->r29) = 0;
L_800B8F4C:
    // 0x800B8F4C: lb          $a0, 0x26($sp)
    ctx->r4 = MEM_B(ctx->r29, 0X26);
    // 0x800B8F50: jal         0x800B8EBC
    // 0x800B8F54: nop

    func_800B8EBC(rdram, ctx);
        goto after_0;
    // 0x800B8F54: nop

    after_0:
    // 0x800B8F58: sll         $s0, $v0, 24
    ctx->r16 = S32(ctx->r2 << 24);
    // 0x800B8F5C: lb          $t7, 0x27($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X27);
    // 0x800B8F60: sra         $t6, $s0, 24
    ctx->r14 = S32(SIGNED(ctx->r16) >> 24);
    // 0x800B8F64: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800B8F68: addu        $t8, $t7, $s0
    ctx->r24 = ADD32(ctx->r15, ctx->r16);
    // 0x800B8F6C: sb          $t8, 0x27($sp)
    MEM_B(0X27, ctx->r29) = ctx->r24;
    // 0x800B8F70: lb          $t9, 0x26($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X26);
    // 0x800B8F74: nop

    // 0x800B8F78: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800B8F7C: sll         $t1, $t0, 24
    ctx->r9 = S32(ctx->r8 << 24);
    // 0x800B8F80: sra         $t2, $t1, 24
    ctx->r10 = S32(SIGNED(ctx->r9) >> 24);
    // 0x800B8F84: slti        $at, $t2, 0x5
    ctx->r1 = SIGNED(ctx->r10) < 0X5 ? 1 : 0;
    // 0x800B8F88: bne         $at, $zero, L_800B8F4C
    if (ctx->r1 != 0) {
        // 0x800B8F8C: sb          $t0, 0x26($sp)
        MEM_B(0X26, ctx->r29) = ctx->r8;
            goto L_800B8F4C;
    }
    // 0x800B8F8C: sb          $t0, 0x26($sp)
    MEM_B(0X26, ctx->r29) = ctx->r8;
    // 0x800B8F90: lb          $v0, 0x27($sp)
    ctx->r2 = MEM_B(ctx->r29, 0X27);
    // 0x800B8F94: b           L_800B8FA4
    // 0x800B8F98: nop

        goto L_800B8FA4;
    // 0x800B8F98: nop

    // 0x800B8F9C: b           L_800B8FA4
    // 0x800B8FA0: nop

        goto L_800B8FA4;
    // 0x800B8FA0: nop

L_800B8FA4:
    // 0x800B8FA4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800B8FA8: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800B8FAC: jr          $ra
    // 0x800B8FB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800B8FB0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8008BC04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8008BC04: lh          $t6, 0x0($a0)
    ctx->r14 = MEM_H(ctx->r4, 0X0);
    // 0x8008BC08: lh          $t7, 0x6($a0)
    ctx->r15 = MEM_H(ctx->r4, 0X6);
    // 0x8008BC0C: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x8008BC10: mtc1        $t7, $f16
    ctx->f16.u32l = ctx->r15;
    // 0x8008BC14: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008BC18: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BC1C: lwc1        $f8, 0x4F44($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F44);
    // 0x8008BC20: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8008BC24: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BC28: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x8008BC2C: nop

    // 0x8008BC30: div.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = DIV_S(ctx->f10.fl, ctx->f18.fl);
    // 0x8008BC34: swc1        $f4, 0x4F68($at)
    MEM_W(0X4F68, ctx->r1) = ctx->f4.u32l;
    // 0x8008BC38: lh          $t8, 0x2($a0)
    ctx->r24 = MEM_H(ctx->r4, 0X2);
    // 0x8008BC3C: lh          $t9, 0x6($a0)
    ctx->r25 = MEM_H(ctx->r4, 0X6);
    // 0x8008BC40: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8008BC44: mtc1        $t9, $f18
    ctx->f18.u32l = ctx->r25;
    // 0x8008BC48: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8008BC4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BC50: lwc1        $f16, 0x4F48($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4F48);
    // 0x8008BC54: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x8008BC58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BC5C: sub.s       $f10, $f8, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x8008BC60: nop

    // 0x8008BC64: div.s       $f6, $f10, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8008BC68: swc1        $f6, 0x4F6C($at)
    MEM_W(0X4F6C, ctx->r1) = ctx->f6.u32l;
    // 0x8008BC6C: lh          $t0, 0x4($a0)
    ctx->r8 = MEM_H(ctx->r4, 0X4);
    // 0x8008BC70: lh          $t1, 0x6($a0)
    ctx->r9 = MEM_H(ctx->r4, 0X6);
    // 0x8008BC74: mtc1        $t0, $f8
    ctx->f8.u32l = ctx->r8;
    // 0x8008BC78: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8008BC7C: cvt.s.w     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8008BC80: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BC84: lwc1        $f18, 0x4F4C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X4F4C);
    // 0x8008BC88: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8008BC8C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BC90: sub.s       $f10, $f16, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8008BC94: nop

    // 0x8008BC98: div.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8008BC9C: swc1        $f8, 0x4F70($at)
    MEM_W(0X4F70, ctx->r1) = ctx->f8.u32l;
    // 0x8008BCA0: lh          $t2, 0x6($a0)
    ctx->r10 = MEM_H(ctx->r4, 0X6);
    // 0x8008BCA4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008BCA8: sh          $t2, 0x4C20($at)
    MEM_H(0X4C20, ctx->r1) = ctx->r10;
    // 0x8008BCAC: jr          $ra
    // 0x8008BCB0: nop

    return;
    // 0x8008BCB0: nop

    // 0x8008BCB4: jr          $ra
    // 0x8008BCB8: nop

    return;
    // 0x8008BCB8: nop

;}
RECOMP_FUNC void func_800974C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800974C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800974C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800974C8: sw          $a0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r4;
    // 0x800974CC: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x800974D0: nop

    // 0x800974D4: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800974D8: nop

    // 0x800974DC: bne         $t7, $zero, L_80097534
    if (ctx->r15 != 0) {
        // 0x800974E0: nop
    
            goto L_80097534;
    }
    // 0x800974E0: nop

    // 0x800974E4: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x800974E8: nop

    // 0x800974EC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800974F0: nop

    // 0x800974F4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800974F8: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800974FC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80097500: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x80097504: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x80097508: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009750C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097510: jal         0x8001BBDC
    // 0x80097514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80097514: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80097518: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009751C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097520: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097524: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x80097528: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8009752C: jal         0x800175F0
    // 0x80097530: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x80097530: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_80097534:
    // 0x80097534: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80097538: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8009753C: lh          $t4, 0x108($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X108);
    // 0x80097540: nop

    // 0x80097544: bne         $t4, $at, L_8009761C
    if (ctx->r12 != ctx->r1) {
        // 0x80097548: nop
    
            goto L_8009761C;
    }
    // 0x80097548: nop

    // 0x8009754C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097550: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097558: jal         0x8001B6BC
    // 0x8009755C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_2;
    // 0x8009755C: lui         $a2, 0x4160
    ctx->r6 = S32(0X4160 << 16);
    after_2:
    // 0x80097560: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x80097564: addiu       $t5, $zero, 0x3
    ctx->r13 = ADD32(0, 0X3);
    // 0x80097568: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8009756C: addiu       $t7, $zero, 0xE
    ctx->r15 = ADD32(0, 0XE);
    // 0x80097570: sw          $t7, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r15;
L_80097574:
    // 0x80097574: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x80097578: jal         0x80026E58
    // 0x8009757C: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    Get_ObjIdx_ByPos(rdram, ctx);
        goto after_3;
    // 0x8009757C: addiu       $a0, $zero, 0x54
    ctx->r4 = ADD32(0, 0X54);
    after_3:
    // 0x80097580: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80097584: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80097588: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009758C: bne         $t9, $at, L_8009759C
    if (ctx->r25 != ctx->r1) {
        // 0x80097590: nop
    
            goto L_8009759C;
    }
    // 0x80097590: nop

    // 0x80097594: b           L_8009761C
    // 0x80097598: nop

        goto L_8009761C;
    // 0x80097598: nop

L_8009759C:
    // 0x8009759C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800975A0: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x800975A4: sll         $t8, $t0, 2
    ctx->r24 = S32(ctx->r8 << 2);
    // 0x800975A8: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800975AC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800975B0: addu        $t8, $t8, $t0
    ctx->r24 = ADD32(ctx->r24, ctx->r8);
    // 0x800975B4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800975B8: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800975BC: addu        $t1, $t1, $t8
    ctx->r9 = ADD32(ctx->r9, ctx->r24);
    // 0x800975C0: lh          $t1, 0x41F6($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X41F6);
    // 0x800975C4: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800975C8: nop

    // 0x800975CC: bne         $t1, $t3, L_80097604
    if (ctx->r9 != ctx->r11) {
        // 0x800975D0: nop
    
            goto L_80097604;
    }
    // 0x800975D0: nop

    // 0x800975D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800975D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800975DC: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800975E0: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800975E4: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800975E8: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800975EC: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800975F0: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800975F4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800975F8: sh          $t4, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r12;
    // 0x800975FC: b           L_8009761C
    // 0x80097600: nop

        goto L_8009761C;
    // 0x80097600: nop

L_80097604:
    // 0x80097604: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80097608: nop

    // 0x8009760C: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x80097610: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80097614: b           L_80097574
    // 0x80097618: nop

        goto L_80097574;
    // 0x80097618: nop

L_8009761C:
    // 0x8009761C: b           L_80097624
    // 0x80097620: nop

        goto L_80097624;
    // 0x80097620: nop

L_80097624:
    // 0x80097624: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097628: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8009762C: jr          $ra
    // 0x80097630: nop

    return;
    // 0x80097630: nop

;}
RECOMP_FUNC void func_80060278(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80060278: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8006027C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80060280: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_80060284:
    // 0x80060284: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80060288: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006028C: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80060290: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80060294: sw          $zero, -0x3560($at)
    MEM_W(-0X3560, ctx->r1) = 0;
    // 0x80060298: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8006029C: nop

    // 0x800602A0: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x800602A4: slti        $at, $t9, 0x2BC
    ctx->r1 = SIGNED(ctx->r25) < 0X2BC ? 1 : 0;
    // 0x800602A8: bne         $at, $zero, L_80060284
    if (ctx->r1 != 0) {
        // 0x800602AC: sw          $t9, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r25;
            goto L_80060284;
    }
    // 0x800602AC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800602B0: lui         $a0, 0x8024
    ctx->r4 = S32(0X8024 << 16);
    // 0x800602B4: jal         0x8001E954
    // 0x800602B8: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    Set_DecompressHeap(rdram, ctx);
        goto after_0;
    // 0x800602B8: ori         $a0, $a0, 0xC000
    ctx->r4 = ctx->r4 | 0XC000;
    after_0:
    // 0x800602BC: lui         $a1, 0x12
    ctx->r5 = S32(0X12 << 16);
    // 0x800602C0: lui         $a2, 0x13
    ctx->r6 = S32(0X13 << 16);
    // 0x800602C4: addiu       $a2, $a2, -0x72E0
    ctx->r6 = ADD32(ctx->r6, -0X72E0);
    // 0x800602C8: addiu       $a1, $a1, 0x7FF0
    ctx->r5 = ADD32(ctx->r5, 0X7FF0);
    // 0x800602CC: jal         0x8001E98C
    // 0x800602D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    LoadFile(rdram, ctx);
        goto after_1;
    // 0x800602D0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_1:
    // 0x800602D4: lui         $t1, 0x8032
    ctx->r9 = S32(0X8032 << 16);
    // 0x800602D8: lw          $t1, 0x4994($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4994);
    // 0x800602DC: lui         $t0, 0x8032
    ctx->r8 = S32(0X8032 << 16);
    // 0x800602E0: addiu       $t0, $t0, 0x1428
    ctx->r8 = ADD32(ctx->r8, 0X1428);
    // 0x800602E4: beq         $t0, $t1, L_80060304
    if (ctx->r8 == ctx->r9) {
        // 0x800602E8: nop
    
            goto L_80060304;
    }
    // 0x800602E8: nop

    // 0x800602EC: lui         $a1, 0x65
    ctx->r5 = S32(0X65 << 16);
    // 0x800602F0: lui         $a2, 0x65
    ctx->r6 = S32(0X65 << 16);
    // 0x800602F4: addiu       $a2, $a2, -0x13A0
    ctx->r6 = ADD32(ctx->r6, -0X13A0);
    // 0x800602F8: addiu       $a1, $a1, -0x3C40
    ctx->r5 = ADD32(ctx->r5, -0X3C40);
    // 0x800602FC: jal         0x8001EA68
    // 0x80060300: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    DecompressFile(rdram, ctx);
        goto after_2;
    // 0x80060300: addiu       $a0, $zero, 0x1A
    ctx->r4 = ADD32(0, 0X1A);
    after_2:
L_80060304:
    // 0x80060304: b           L_8006030C
    // 0x80060308: nop

        goto L_8006030C;
    // 0x80060308: nop

L_8006030C:
    // 0x8006030C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80060310: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80060314: jr          $ra
    // 0x80060318: nop

    return;
    // 0x80060318: nop

;}
RECOMP_FUNC void func_80088184(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088184: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x80088188: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8008818C: sb          $t6, 0x5243($at)
    MEM_B(0X5243, ctx->r1) = ctx->r14;
    // 0x80088190: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80088194: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80088198: sb          $t7, 0x5245($at)
    MEM_B(0X5245, ctx->r1) = ctx->r15;
    // 0x8008819C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800881A0: lb          $t8, 0x5245($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5245);
    // 0x800881A4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800881A8: sb          $t8, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r24;
    // 0x800881AC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800881B0: sb          $zero, 0x523F($at)
    MEM_B(0X523F, ctx->r1) = 0;
    // 0x800881B4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800881B8: sb          $zero, 0x5240($at)
    MEM_B(0X5240, ctx->r1) = 0;
    // 0x800881BC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x800881C0: sb          $zero, 0x5241($at)
    MEM_B(0X5241, ctx->r1) = 0;
    // 0x800881C4: jr          $ra
    // 0x800881C8: nop

    return;
    // 0x800881C8: nop

    // 0x800881CC: jr          $ra
    // 0x800881D0: nop

    return;
    // 0x800881D0: nop

;}
RECOMP_FUNC void func_80099C4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80099C4C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80099C50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80099C54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80099C58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80099C5C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80099C60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80099C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80099C68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80099C6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80099C70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80099C74: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80099C78: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80099C7C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80099C80: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80099C84: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80099C88: nop

    // 0x80099C8C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80099C90: nop

    // 0x80099C94: bne         $t1, $zero, L_80099CE0
    if (ctx->r9 != 0) {
        // 0x80099C98: nop
    
            goto L_80099CE0;
    }
    // 0x80099C98: nop

    // 0x80099C9C: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80099CA0: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80099CA4: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80099CA8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80099CAC: addiu       $t4, $zero, 0x3C
    ctx->r12 = ADD32(0, 0X3C);
    // 0x80099CB0: sh          $t4, 0xAE($t5)
    MEM_H(0XAE, ctx->r13) = ctx->r12;
    // 0x80099CB4: jal         0x80014E80
    // 0x80099CB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80099CB8: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_0:
    // 0x80099CBC: beq         $v0, $zero, L_80099CD4
    if (ctx->r2 == 0) {
        // 0x80099CC0: nop
    
            goto L_80099CD4;
    }
    // 0x80099CC0: nop

    // 0x80099CC4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80099CC8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80099CCC: b           L_80099CE0
    // 0x80099CD0: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
        goto L_80099CE0;
    // 0x80099CD0: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
L_80099CD4:
    // 0x80099CD4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80099CD8: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x80099CDC: sh          $t8, 0xB0($t9)
    MEM_H(0XB0, ctx->r25) = ctx->r24;
L_80099CE0:
    // 0x80099CE0: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80099CE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80099CE8: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80099CEC: nop

    // 0x80099CF0: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
    // 0x80099CF4: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80099CF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80099CFC: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80099D00: nop

    // 0x80099D04: swc1        $f6, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->f6.u32l;
    // 0x80099D08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099D0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099D10: jal         0x8002A46C
    // 0x80099D14: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_1;
    // 0x80099D14: nop

    after_1:
    // 0x80099D18: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80099D1C: nop

    // 0x80099D20: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x80099D24: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80099D28: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80099D2C: lh          $t4, 0xB0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB0);
    // 0x80099D30: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x80099D34: mtc1        $t4, $f8
    ctx->f8.u32l = ctx->r12;
    // 0x80099D38: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80099D3C: cvt.d.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.d = CVT_D_W(ctx->f8.u32l);
    // 0x80099D40: lwc1        $f12, 0x20($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X20);
    // 0x80099D44: mul.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = MUL_D(ctx->f10.d, ctx->f16.d);
    // 0x80099D48: jal         0x80015538
    // 0x80099D4C: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80099D4C: cvt.s.d     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f14.fl = CVT_S_D(ctx->f18.d);
    after_2:
    // 0x80099D50: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80099D54: nop

    // 0x80099D58: swc1        $f0, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f0.u32l;
    // 0x80099D5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099D60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099D64: jal         0x80028FA0
    // 0x80099D68: nop

    func_80028FA0(rdram, ctx);
        goto after_3;
    // 0x80099D68: nop

    after_3:
    // 0x80099D6C: beq         $v0, $zero, L_80099D7C
    if (ctx->r2 == 0) {
        // 0x80099D70: nop
    
            goto L_80099D7C;
    }
    // 0x80099D70: nop

    // 0x80099D74: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80099D78: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_80099D7C:
    // 0x80099D7C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099D80: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099D84: jal         0x80029D8C
    // 0x80099D88: nop

    func_80029D8C(rdram, ctx);
        goto after_4;
    // 0x80099D88: nop

    after_4:
    // 0x80099D8C: lui         $at, 0xC270
    ctx->r1 = S32(0XC270 << 16);
    // 0x80099D90: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80099D94: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80099D98: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099D9C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099DA0: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80099DA4: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x80099DA8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80099DAC: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x80099DB0: jal         0x800295C0
    // 0x80099DB4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_800295C0(rdram, ctx);
        goto after_5;
    // 0x80099DB4: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_5:
    // 0x80099DB8: beq         $v0, $zero, L_80099DC8
    if (ctx->r2 == 0) {
        // 0x80099DBC: nop
    
            goto L_80099DC8;
    }
    // 0x80099DBC: nop

    // 0x80099DC0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80099DC4: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
L_80099DC8:
    // 0x80099DC8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80099DCC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80099DD0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80099DD4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099DD8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099DDC: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    // 0x80099DE0: addiu       $a2, $sp, 0x28
    ctx->r6 = ADD32(ctx->r29, 0X28);
    // 0x80099DE4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80099DE8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80099DEC: jal         0x800295C0
    // 0x80099DF0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x80099DF0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_6:
    // 0x80099DF4: beq         $v0, $zero, L_80099E04
    if (ctx->r2 == 0) {
        // 0x80099DF8: nop
    
            goto L_80099E04;
    }
    // 0x80099DF8: nop

    // 0x80099DFC: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80099E00: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_80099E04:
    // 0x80099E04: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80099E08: nop

    // 0x80099E0C: lh          $t0, 0xAE($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XAE);
    // 0x80099E10: nop

    // 0x80099E14: bne         $t0, $zero, L_80099E28
    if (ctx->r8 != 0) {
        // 0x80099E18: nop
    
            goto L_80099E28;
    }
    // 0x80099E18: nop

    // 0x80099E1C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80099E20: b           L_80099E40
    // 0x80099E24: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
        goto L_80099E40;
    // 0x80099E24: sw          $t1, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r9;
L_80099E28:
    // 0x80099E28: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80099E2C: nop

    // 0x80099E30: lh          $t3, 0xAE($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAE);
    // 0x80099E34: nop

    // 0x80099E38: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x80099E3C: sh          $t4, 0xAE($t2)
    MEM_H(0XAE, ctx->r10) = ctx->r12;
L_80099E40:
    // 0x80099E40: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80099E44: nop

    // 0x80099E48: beq         $t5, $zero, L_80099EC4
    if (ctx->r13 == 0) {
        // 0x80099E4C: nop
    
            goto L_80099EC4;
    }
    // 0x80099E4C: nop

    // 0x80099E50: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
L_80099E54:
    // 0x80099E54: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80099E58: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80099E5C: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x80099E60: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80099E64: lh          $t0, 0xE8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XE8);
    // 0x80099E68: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80099E6C: beq         $t0, $at, L_80099E94
    if (ctx->r8 == ctx->r1) {
        // 0x80099E70: sw          $t0, 0x20($sp)
        MEM_W(0X20, ctx->r29) = ctx->r8;
            goto L_80099E94;
    }
    // 0x80099E70: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x80099E74: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099E78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099E7C: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80099E80: jal         0x800281A4
    // 0x80099E84: nop

    func_800281A4(rdram, ctx);
        goto after_7;
    // 0x80099E84: nop

    after_7:
    // 0x80099E88: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80099E8C: jal         0x8002B0E4
    // 0x80099E90: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x80099E90: nop

    after_8:
L_80099E94:
    // 0x80099E94: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80099E98: nop

    // 0x80099E9C: addiu       $t3, $t1, 0x1
    ctx->r11 = ADD32(ctx->r9, 0X1);
    // 0x80099EA0: slti        $at, $t3, 0x4
    ctx->r1 = SIGNED(ctx->r11) < 0X4 ? 1 : 0;
    // 0x80099EA4: bne         $at, $zero, L_80099E54
    if (ctx->r1 != 0) {
        // 0x80099EA8: sw          $t3, 0x2C($sp)
        MEM_W(0X2C, ctx->r29) = ctx->r11;
            goto L_80099E54;
    }
    // 0x80099EA8: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x80099EAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80099EB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80099EB4: jal         0x8002B0E4
    // 0x80099EB8: nop

    func_8002B0E4(rdram, ctx);
        goto after_9;
    // 0x80099EB8: nop

    after_9:
    // 0x80099EBC: b           L_80099ECC
    // 0x80099EC0: nop

        goto L_80099ECC;
    // 0x80099EC0: nop

L_80099EC4:
    // 0x80099EC4: b           L_80099ECC
    // 0x80099EC8: nop

        goto L_80099ECC;
    // 0x80099EC8: nop

L_80099ECC:
    // 0x80099ECC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80099ED0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x80099ED4: jr          $ra
    // 0x80099ED8: nop

    return;
    // 0x80099ED8: nop

;}
RECOMP_FUNC void func_800916C0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800916C0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800916C4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800916C8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800916CC: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800916D0: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800916D4: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800916D8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800916DC: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800916E0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800916E4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800916E8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800916EC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800916F0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800916F4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800916F8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800916FC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80091700: addiu       $a1, $a1, 0x1594
    ctx->r5 = ADD32(ctx->r5, 0X1594);
    // 0x80091704: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80091708: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8009170C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091710: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091714: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80091718: jal         0x80027464
    // 0x8009171C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8009171C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091720: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091724: b           L_8009172C
    // 0x80091728: nop

        goto L_8009172C;
    // 0x80091728: nop

L_8009172C:
    // 0x8009172C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091730: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091734: jr          $ra
    // 0x80091738: nop

    return;
    // 0x80091738: nop

;}
RECOMP_FUNC void func_80086ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80086ECC: addiu       $sp, $sp, -0xB8
    ctx->r29 = ADD32(ctx->r29, -0XB8);
    // 0x80086ED0: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x80086ED4: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80086ED8: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x80086EDC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80086EE0: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x80086EE4: nop

    // 0x80086EE8: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80086EEC: nop

    // 0x80086EF0: bne         $t7, $zero, L_80086F00
    if (ctx->r15 != 0) {
        // 0x80086EF4: nop
    
            goto L_80086F00;
    }
    // 0x80086EF4: nop

    // 0x80086EF8: b           L_80087680
    // 0x80086EFC: nop

        goto L_80087680;
    // 0x80086EFC: nop

L_80086F00:
    // 0x80086F00: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80086F04: lw          $t8, 0x7544($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7544);
    // 0x80086F08: addiu       $at, $zero, 0x2A8
    ctx->r1 = ADD32(0, 0X2A8);
    // 0x80086F0C: lh          $t9, 0xE4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XE4);
    // 0x80086F10: nop

    // 0x80086F14: bne         $t9, $at, L_8008703C
    if (ctx->r25 != ctx->r1) {
        // 0x80086F18: nop
    
            goto L_8008703C;
    }
    // 0x80086F18: nop

    // 0x80086F1C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80086F20: lw          $t0, 0x7544($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7544);
    // 0x80086F24: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80086F28: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80086F2C: nop

    // 0x80086F30: bne         $t1, $at, L_80086FA8
    if (ctx->r9 != ctx->r1) {
        // 0x80086F34: nop
    
            goto L_80086FA8;
    }
    // 0x80086F34: nop

    // 0x80086F38: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80086F3C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80086F40: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80086F44: lw          $t3, 0x7544($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7544);
    // 0x80086F48: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80086F4C: nop

    // 0x80086F50: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80086F54: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80086F58: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80086F5C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80086F60: lw          $t5, 0x7544($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7544);
    // 0x80086F64: lwc1        $f6, 0x4($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80086F68: nop

    // 0x80086F6C: swc1        $f6, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f6.u32l;
    // 0x80086F70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80086F74: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80086F78: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80086F7C: lw          $t7, 0x7544($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7544);
    // 0x80086F80: lwc1        $f8, 0x8($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80086F84: nop

    // 0x80086F88: swc1        $f8, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f8.u32l;
    // 0x80086F8C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80086F90: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80086F94: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80086F98: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x80086F9C: lwc1        $f10, 0x1C($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80086FA0: b           L_80087034
    // 0x80086FA4: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
        goto L_80087034;
    // 0x80086FA4: swc1        $f10, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f10.u32l;
L_80086FA8:
    // 0x80086FA8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80086FAC: lw          $t0, 0x7544($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7544);
    // 0x80086FB0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80086FB4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80086FB8: nop

    // 0x80086FBC: bne         $t1, $at, L_80087034
    if (ctx->r9 != ctx->r1) {
        // 0x80086FC0: nop
    
            goto L_80087034;
    }
    // 0x80086FC0: nop

    // 0x80086FC4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80086FC8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80086FCC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80086FD0: lw          $t3, 0x7544($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7544);
    // 0x80086FD4: lwc1        $f16, 0x0($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X0);
    // 0x80086FD8: nop

    // 0x80086FDC: swc1        $f16, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f16.u32l;
    // 0x80086FE0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80086FE4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80086FE8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80086FEC: lw          $t5, 0x7544($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7544);
    // 0x80086FF0: lwc1        $f18, 0x4($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X4);
    // 0x80086FF4: nop

    // 0x80086FF8: swc1        $f18, 0x4($t5)
    MEM_W(0X4, ctx->r13) = ctx->f18.u32l;
    // 0x80086FFC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087000: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80087004: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80087008: lw          $t7, 0x7544($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7544);
    // 0x8008700C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x80087010: nop

    // 0x80087014: swc1        $f4, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f4.u32l;
    // 0x80087018: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008701C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80087020: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80087024: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x80087028: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x8008702C: nop

    // 0x80087030: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
L_80087034:
    // 0x80087034: b           L_80087670
    // 0x80087038: nop

        goto L_80087670;
    // 0x80087038: nop

L_8008703C:
    // 0x8008703C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80087040: lw          $t0, 0x7544($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7544);
    // 0x80087044: addiu       $at, $zero, 0x2A9
    ctx->r1 = ADD32(0, 0X2A9);
    // 0x80087048: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x8008704C: nop

    // 0x80087050: bne         $t1, $at, L_800870EC
    if (ctx->r9 != ctx->r1) {
        // 0x80087054: nop
    
            goto L_800870EC;
    }
    // 0x80087054: nop

    // 0x80087058: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008705C: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x80087060: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087064: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x80087068: nop

    // 0x8008706C: bne         $t3, $at, L_800870E4
    if (ctx->r11 != ctx->r1) {
        // 0x80087070: nop
    
            goto L_800870E4;
    }
    // 0x80087070: nop

    // 0x80087074: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80087078: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8008707C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80087080: lw          $t5, 0x7544($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7544);
    // 0x80087084: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80087088: nop

    // 0x8008708C: swc1        $f8, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f8.u32l;
    // 0x80087090: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087094: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80087098: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008709C: lw          $t7, 0x7544($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7544);
    // 0x800870A0: lwc1        $f10, 0x4($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800870A4: nop

    // 0x800870A8: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x800870AC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800870B0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800870B4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800870B8: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x800870BC: lwc1        $f16, 0x8($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800870C0: nop

    // 0x800870C4: swc1        $f16, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f16.u32l;
    // 0x800870C8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800870CC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x800870D0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800870D4: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x800870D8: lwc1        $f18, 0x1C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800870DC: nop

    // 0x800870E0: swc1        $f18, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f18.u32l;
L_800870E4:
    // 0x800870E4: b           L_80087670
    // 0x800870E8: nop

        goto L_80087670;
    // 0x800870E8: nop

L_800870EC:
    // 0x800870EC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800870F0: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x800870F4: addiu       $at, $zero, 0x2AE
    ctx->r1 = ADD32(0, 0X2AE);
    // 0x800870F8: lh          $t3, 0xE4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE4);
    // 0x800870FC: nop

    // 0x80087100: bne         $t3, $at, L_8008725C
    if (ctx->r11 != ctx->r1) {
        // 0x80087104: nop
    
            goto L_8008725C;
    }
    // 0x80087104: nop

    // 0x80087108: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8008710C: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x80087110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087114: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x80087118: nop

    // 0x8008711C: bne         $t5, $at, L_80087254
    if (ctx->r13 != ctx->r1) {
        // 0x80087120: nop
    
            goto L_80087254;
    }
    // 0x80087120: nop

    // 0x80087124: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087128: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8008712C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80087130: lw          $t7, 0x7544($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7544);
    // 0x80087134: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80087138: nop

    // 0x8008713C: swc1        $f4, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->f4.u32l;
    // 0x80087140: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80087144: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80087148: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8008714C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80087150: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80087154: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80087158: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x8008715C: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80087160: swc1        $f10, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f10.u32l;
    // 0x80087164: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80087168: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8008716C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80087170: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x80087174: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x80087178: nop

    // 0x8008717C: swc1        $f16, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->f16.u32l;
    // 0x80087180: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80087184: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80087188: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8008718C: lw          $t3, 0x7544($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7544);
    // 0x80087190: lwc1        $f18, 0x1C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80087194: nop

    // 0x80087198: swc1        $f18, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f18.u32l;
    // 0x8008719C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800871A0: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x800871A4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x800871A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800871AC: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x800871B0: nop

    // 0x800871B4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800871B8: nop

    // 0x800871BC: bc1f        L_80087210
    if (!c1cs) {
        // 0x800871C0: nop
    
            goto L_80087210;
    }
    // 0x800871C0: nop

    // 0x800871C4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800871C8: lw          $t5, 0x7544($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7544);
    // 0x800871CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800871D0: lwc1        $f8, 0xC($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0XC);
    // 0x800871D4: lwc1        $f17, -0x32A8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X32A8);
    // 0x800871D8: lwc1        $f16, -0x32A4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X32A4);
    // 0x800871DC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x800871E0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x800871E4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x800871E8: swc1        $f4, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->f4.u32l;
    // 0x800871EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800871F0: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x800871F4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800871F8: lwc1        $f20, 0xC($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0XC);
    // 0x800871FC: nop

    // 0x80087200: swc1        $f20, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f20.u32l;
    // 0x80087204: lw          $t7, 0x7544($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7544);
    // 0x80087208: nop

    // 0x8008720C: swc1        $f20, 0x10($t7)
    MEM_W(0X10, ctx->r15) = ctx->f20.u32l;
L_80087210:
    // 0x80087210: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80087214: lh          $t8, -0x1DE4($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1DE4);
    // 0x80087218: nop

    // 0x8008721C: slti        $at, $t8, 0x5A
    ctx->r1 = SIGNED(ctx->r24) < 0X5A ? 1 : 0;
    // 0x80087220: beq         $at, $zero, L_80087248
    if (ctx->r1 == 0) {
        // 0x80087224: nop
    
            goto L_80087248;
    }
    // 0x80087224: nop

    // 0x80087228: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x8008722C: lh          $a1, -0x1DE4($a1)
    ctx->r5 = MEM_H(ctx->r5, -0X1DE4);
    // 0x80087230: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087234: andi        $t9, $a1, 0x1
    ctx->r25 = ctx->r5 & 0X1;
    // 0x80087238: jal         0x8001BB34
    // 0x8008723C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x8008723C: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_0:
    // 0x80087240: b           L_80087254
    // 0x80087244: nop

        goto L_80087254;
    // 0x80087244: nop

L_80087248:
    // 0x80087248: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008724C: jal         0x8001BB34
    // 0x80087250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80087250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80087254:
    // 0x80087254: b           L_80087670
    // 0x80087258: nop

        goto L_80087670;
    // 0x80087258: nop

L_8008725C:
    // 0x8008725C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80087260: lw          $t0, 0x7544($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7544);
    // 0x80087264: addiu       $at, $zero, 0x2AA
    ctx->r1 = ADD32(0, 0X2AA);
    // 0x80087268: lh          $t1, 0xE4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE4);
    // 0x8008726C: nop

    // 0x80087270: bne         $t1, $at, L_80087338
    if (ctx->r9 != ctx->r1) {
        // 0x80087274: nop
    
            goto L_80087338;
    }
    // 0x80087274: nop

    // 0x80087278: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008727C: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x80087280: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087284: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x80087288: nop

    // 0x8008728C: bne         $t3, $at, L_80087330
    if (ctx->r11 != ctx->r1) {
        // 0x80087290: nop
    
            goto L_80087330;
    }
    // 0x80087290: nop

    // 0x80087294: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80087298: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8008729C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800872A0: lw          $t5, 0x7544($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7544);
    // 0x800872A4: lwc1        $f6, 0x0($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800872A8: nop

    // 0x800872AC: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x800872B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800872B4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800872B8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800872BC: lw          $t7, 0x7544($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7544);
    // 0x800872C0: lwc1        $f8, 0x4($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800872C4: nop

    // 0x800872C8: swc1        $f8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f8.u32l;
    // 0x800872CC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800872D0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800872D4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800872D8: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x800872DC: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800872E0: nop

    // 0x800872E4: swc1        $f10, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f10.u32l;
    // 0x800872E8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800872EC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x800872F0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800872F4: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x800872F8: lwc1        $f16, 0x1C($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x800872FC: nop

    // 0x80087300: swc1        $f16, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f16.u32l;
    // 0x80087304: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087308: jal         0x8001B44C
    // 0x8008730C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x8008730C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    after_2:
    // 0x80087310: beq         $v0, $zero, L_80087328
    if (ctx->r2 == 0) {
        // 0x80087314: nop
    
            goto L_80087328;
    }
    // 0x80087314: nop

    // 0x80087318: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8008731C: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80087320: jal         0x8001B6BC
    // 0x80087324: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    func_8001B6BC(rdram, ctx);
        goto after_3;
    // 0x80087324: lui         $a2, 0x42F0
    ctx->r6 = S32(0X42F0 << 16);
    after_3:
L_80087328:
    // 0x80087328: jal         0x8001AD6C
    // 0x8008732C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001AD6C(rdram, ctx);
        goto after_4;
    // 0x8008732C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
L_80087330:
    // 0x80087330: b           L_80087670
    // 0x80087334: nop

        goto L_80087670;
    // 0x80087334: nop

L_80087338:
    // 0x80087338: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8008733C: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x80087340: addiu       $at, $zero, 0x2AB
    ctx->r1 = ADD32(0, 0X2AB);
    // 0x80087344: lh          $t3, 0xE4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XE4);
    // 0x80087348: nop

    // 0x8008734C: bne         $t3, $at, L_80087430
    if (ctx->r11 != ctx->r1) {
        // 0x80087350: nop
    
            goto L_80087430;
    }
    // 0x80087350: nop

    // 0x80087354: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80087358: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x8008735C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087360: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x80087364: nop

    // 0x80087368: bne         $t5, $at, L_80087428
    if (ctx->r13 != ctx->r1) {
        // 0x8008736C: nop
    
            goto L_80087428;
    }
    // 0x8008736C: nop

    // 0x80087370: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087374: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80087378: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8008737C: lw          $a1, 0x1C($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X1C);
    // 0x80087380: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x80087384: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80087388: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8008738C: jal         0x800372A0
    // 0x80087390: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    guRotateF(rdram, ctx);
        goto after_5;
    // 0x80087390: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    after_5:
    // 0x80087394: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80087398: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8008739C: addiu       $a0, $sp, 0x38
    ctx->r4 = ADD32(ctx->r29, 0X38);
    // 0x800873A0: lw          $a1, 0x0($t7)
    ctx->r5 = MEM_W(ctx->r15, 0X0);
    // 0x800873A4: lw          $a2, 0x4($t7)
    ctx->r6 = MEM_W(ctx->r15, 0X4);
    // 0x800873A8: lw          $a3, 0x8($t7)
    ctx->r7 = MEM_W(ctx->r15, 0X8);
    // 0x800873AC: jal         0x80037200
    // 0x800873B0: nop

    guTranslateF(rdram, ctx);
        goto after_6;
    // 0x800873B0: nop

    after_6:
    // 0x800873B4: addiu       $t8, $sp, 0x78
    ctx->r24 = ADD32(ctx->r29, 0X78);
    // 0x800873B8: or          $a0, $t8, $zero
    ctx->r4 = ctx->r24 | 0;
    // 0x800873BC: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x800873C0: jal         0x80036400
    // 0x800873C4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    guMtxCatF(rdram, ctx);
        goto after_7;
    // 0x800873C4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    after_7:
    // 0x800873C8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800873CC: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x800873D0: lui         $a3, 0xC194
    ctx->r7 = S32(0XC194 << 16);
    // 0x800873D4: addiu       $t0, $t9, 0x4
    ctx->r8 = ADD32(ctx->r25, 0X4);
    // 0x800873D8: addiu       $t1, $t9, 0x8
    ctx->r9 = ADD32(ctx->r25, 0X8);
    // 0x800873DC: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
    // 0x800873E0: sw          $t0, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r8;
    // 0x800873E4: ori         $a3, $a3, 0xCCCD
    ctx->r7 = ctx->r7 | 0XCCCD;
    // 0x800873E8: addiu       $a0, $sp, 0x78
    ctx->r4 = ADD32(ctx->r29, 0X78);
    // 0x800873EC: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800873F0: lui         $a2, 0x4302
    ctx->r6 = S32(0X4302 << 16);
    // 0x800873F4: jal         0x80036360
    // 0x800873F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    guMtxXFMF(rdram, ctx);
        goto after_8;
    // 0x800873F8: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    after_8:
    // 0x800873FC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80087400: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x80087404: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80087408: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8008740C: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80087410: jal         0x80015538
    // 0x80087414: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x80087414: nop

    after_9:
    // 0x80087418: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8008741C: lw          $t3, 0x7544($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7544);
    // 0x80087420: nop

    // 0x80087424: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
L_80087428:
    // 0x80087428: b           L_80087670
    // 0x8008742C: nop

        goto L_80087670;
    // 0x8008742C: nop

L_80087430:
    // 0x80087430: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80087434: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x80087438: addiu       $at, $zero, 0x2AC
    ctx->r1 = ADD32(0, 0X2AC);
    // 0x8008743C: lh          $t5, 0xE4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE4);
    // 0x80087440: nop

    // 0x80087444: bne         $t5, $at, L_80087588
    if (ctx->r13 != ctx->r1) {
        // 0x80087448: nop
    
            goto L_80087588;
    }
    // 0x80087448: nop

    // 0x8008744C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087450: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x80087454: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087458: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x8008745C: nop

    // 0x80087460: bne         $t7, $at, L_80087580
    if (ctx->r15 != ctx->r1) {
        // 0x80087464: nop
    
            goto L_80087580;
    }
    // 0x80087464: nop

    // 0x80087468: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8008746C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80087470: addiu       $at, $zero, 0x26D
    ctx->r1 = ADD32(0, 0X26D);
    // 0x80087474: lh          $t0, 0xA4($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA4);
    // 0x80087478: nop

    // 0x8008747C: bne         $t0, $at, L_80087510
    if (ctx->r8 != ctx->r1) {
        // 0x80087480: nop
    
            goto L_80087510;
    }
    // 0x80087480: nop

    // 0x80087484: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80087488: jal         0x8001B62C
    // 0x8008748C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_10;
    // 0x8008748C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80087490: swc1        $f0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f0.u32l;
    // 0x80087494: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80087498: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8008749C: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x800874A0: nop

    // 0x800874A4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800874A8: nop

    // 0x800874AC: bc1f        L_800874C8
    if (!c1cs) {
        // 0x800874B0: nop
    
            goto L_800874C8;
    }
    // 0x800874B0: nop

    // 0x800874B4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800874B8: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x800874BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800874C0: b           L_80087508
    // 0x800874C4: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
        goto L_80087508;
    // 0x800874C4: swc1        $f8, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f8.u32l;
L_800874C8:
    // 0x800874C8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800874CC: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x800874D0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800874D4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800874D8: lwc1        $f10, 0x28($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X28);
    // 0x800874DC: nop

    // 0x800874E0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800874E4: swc1        $f18, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f18.u32l;
    // 0x800874E8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800874EC: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x800874F0: nop

    // 0x800874F4: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x800874F8: lwc1        $f6, 0x28($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X28);
    // 0x800874FC: nop

    // 0x80087500: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80087504: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
L_80087508:
    // 0x80087508: b           L_80087580
    // 0x8008750C: nop

        goto L_80087580;
    // 0x8008750C: nop

L_80087510:
    // 0x80087510: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80087514: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80087518: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8008751C: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x80087520: lwc1        $f10, 0x0($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X0);
    // 0x80087524: nop

    // 0x80087528: swc1        $f10, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->f10.u32l;
    // 0x8008752C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80087530: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80087534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087538: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x8008753C: lwc1        $f16, 0x4($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80087540: nop

    // 0x80087544: swc1        $f16, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f16.u32l;
    // 0x80087548: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8008754C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80087550: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80087554: lw          $t8, 0x7544($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7544);
    // 0x80087558: lwc1        $f18, 0x8($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8008755C: nop

    // 0x80087560: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
    // 0x80087564: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80087568: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8008756C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80087570: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x80087574: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80087578: nop

    // 0x8008757C: swc1        $f4, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f4.u32l;
L_80087580:
    // 0x80087580: b           L_80087670
    // 0x80087584: nop

        goto L_80087670;
    // 0x80087584: nop

L_80087588:
    // 0x80087588: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8008758C: lw          $t1, 0x7544($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7544);
    // 0x80087590: addiu       $at, $zero, 0x2AD
    ctx->r1 = ADD32(0, 0X2AD);
    // 0x80087594: lh          $t2, 0xE4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XE4);
    // 0x80087598: nop

    // 0x8008759C: bne         $t2, $at, L_80087670
    if (ctx->r10 != ctx->r1) {
        // 0x800875A0: nop
    
            goto L_80087670;
    }
    // 0x800875A0: nop

    // 0x800875A4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800875A8: lw          $t3, 0x7544($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7544);
    // 0x800875AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800875B0: lh          $t4, 0xA4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA4);
    // 0x800875B4: nop

    // 0x800875B8: bne         $t4, $at, L_80087670
    if (ctx->r12 != ctx->r1) {
        // 0x800875BC: nop
    
            goto L_80087670;
    }
    // 0x800875BC: nop

    // 0x800875C0: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800875C4: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x800875C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800875CC: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x800875D0: lwc1        $f6, 0x0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X0);
    // 0x800875D4: nop

    // 0x800875D8: swc1        $f6, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f6.u32l;
    // 0x800875DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800875E0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x800875E4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800875E8: lw          $t8, 0x7544($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7544);
    // 0x800875EC: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x800875F0: nop

    // 0x800875F4: swc1        $f8, 0x4($t8)
    MEM_W(0X4, ctx->r24) = ctx->f8.u32l;
    // 0x800875F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800875FC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80087600: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80087604: lw          $t9, 0x7544($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7544);
    // 0x80087608: lwc1        $f10, 0x8($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X8);
    // 0x8008760C: nop

    // 0x80087610: swc1        $f10, 0x8($t9)
    MEM_W(0X8, ctx->r25) = ctx->f10.u32l;
    // 0x80087614: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80087618: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8008761C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80087620: lw          $t2, 0x7544($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7544);
    // 0x80087624: lwc1        $f16, 0x18($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X18);
    // 0x80087628: nop

    // 0x8008762C: swc1        $f16, 0x18($t2)
    MEM_W(0X18, ctx->r10) = ctx->f16.u32l;
    // 0x80087630: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80087634: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80087638: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8008763C: lw          $t4, 0x7544($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7544);
    // 0x80087640: lwc1        $f18, 0x1C($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80087644: nop

    // 0x80087648: swc1        $f18, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f18.u32l;
    // 0x8008764C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80087650: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80087654: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80087658: lw          $t6, 0x7544($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7544);
    // 0x8008765C: lwc1        $f4, 0x20($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X20);
    // 0x80087660: nop

    // 0x80087664: swc1        $f4, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f4.u32l;
    // 0x80087668: jal         0x8001AD6C
    // 0x8008766C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001AD6C(rdram, ctx);
        goto after_11;
    // 0x8008766C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_11:
L_80087670:
    // 0x80087670: jal         0x8001CD20
    // 0x80087674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001CD20(rdram, ctx);
        goto after_12;
    // 0x80087674: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_12:
    // 0x80087678: b           L_80087680
    // 0x8008767C: nop

        goto L_80087680;
    // 0x8008767C: nop

L_80087680:
    // 0x80087680: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x80087684: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x80087688: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8008768C: jr          $ra
    // 0x80087690: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
    return;
    // 0x80087690: addiu       $sp, $sp, 0xB8
    ctx->r29 = ADD32(ctx->r29, 0XB8);
;}
RECOMP_FUNC void func_800C5888(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C5888: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800C588C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800C5890: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800C5894: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x800C5898: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C589C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C58A0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C58A4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C58A8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C58AC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C58B0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C58B4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C58B8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C58BC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C58C0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800C58C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C58C8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800C58CC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x800C58D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800C58D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C58D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800C58DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800C58E0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800C58E4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C58E8: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x800C58EC: nop

    // 0x800C58F0: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x800C58F4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800C58F8: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x800C58FC: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x800C5900: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x800C5904: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C5908: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x800C590C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x800C5910: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x800C5914: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C5918: lh          $t5, 0x423A($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X423A);
    // 0x800C591C: nop

    // 0x800C5920: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x800C5924: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C5928: nop

    // 0x800C592C: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x800C5930: nop

    // 0x800C5934: bne         $t7, $zero, L_800C5998
    if (ctx->r15 != 0) {
        // 0x800C5938: nop
    
            goto L_800C5998;
    }
    // 0x800C5938: nop

    // 0x800C593C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800C5940: nop

    // 0x800C5944: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x800C5948: nop

    // 0x800C594C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800C5950: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x800C5954: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C5958: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800C595C: nop

    // 0x800C5960: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x800C5964: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C5968: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C596C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800C5970: jal         0x80029EF8
    // 0x800C5974: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C5974: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_0:
    // 0x800C5978: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C597C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800C5980: jal         0x80029EF8
    // 0x800C5984: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_1;
    // 0x800C5984: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_1:
    // 0x800C5988: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C598C: lui         $a1, 0x4120
    ctx->r5 = S32(0X4120 << 16);
    // 0x800C5990: jal         0x80029EF8
    // 0x800C5994: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    func_80029EF8(rdram, ctx);
        goto after_2;
    // 0x800C5994: lui         $a2, 0x4040
    ctx->r6 = S32(0X4040 << 16);
    after_2:
L_800C5998:
    // 0x800C5998: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C599C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C59A0: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800C59A4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C59A8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C59AC: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C59B0: jal         0x80029F58
    // 0x800C59B4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    func_80029F58(rdram, ctx);
        goto after_3;
    // 0x800C59B4: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x800C59B8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C59BC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C59C0: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x800C59C4: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C59C8: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C59CC: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C59D0: jal         0x80029F58
    // 0x800C59D4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800C59D4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800C59D8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C59DC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800C59E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C59E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C59E8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C59EC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C59F0: lui         $a3, 0xC2D6
    ctx->r7 = S32(0XC2D6 << 16);
    // 0x800C59F4: jal         0x80029F58
    // 0x800C59F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    func_80029F58(rdram, ctx);
        goto after_5;
    // 0x800C59F8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800C59FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C5A00: bne         $v0, $at, L_800C5BC8
    if (ctx->r2 != ctx->r1) {
        // 0x800C5A04: nop
    
            goto L_800C5BC8;
    }
    // 0x800C5A04: nop

    // 0x800C5A08: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800C5A0C: addiu       $t2, $zero, 0x7
    ctx->r10 = ADD32(0, 0X7);
    // 0x800C5A10: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800C5A14: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C5A18: nop

    // 0x800C5A1C: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
    // 0x800C5A20: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5A24: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5A28: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x800C5A2C: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800C5A30: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C5A34: sll         $t9, $t7, 2
    ctx->r25 = S32(ctx->r15 << 2);
    // 0x800C5A38: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800C5A3C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C5A40: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C5A44: lwc1        $f16, 0x4D78($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X4D78);
    // 0x800C5A48: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800C5A4C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x800C5A50: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800C5A54: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800C5A58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C5A5C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C5A60: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x800C5A64: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C5A68: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C5A6C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800C5A70: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800C5A74: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800C5A78: addu        $t8, $t9, $t0
    ctx->r24 = ADD32(ctx->r25, ctx->r8);
    // 0x800C5A7C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C5A80: swc1        $f16, 0x4154($at)
    MEM_W(0X4154, ctx->r1) = ctx->f16.u32l;
    // 0x800C5A84: lwc1        $f20, 0x4($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800C5A88: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C5A8C: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x800C5A90: swc1        $f20, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f20.u32l;
    // 0x800C5A94: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800C5A98: nop

    // 0x800C5A9C: swc1        $f20, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f20.u32l;
    // 0x800C5AA0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C5AA4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800C5AA8: nop

    // 0x800C5AAC: swc1        $f18, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f18.u32l;
    // 0x800C5AB0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800C5AB4: nop

    // 0x800C5AB8: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800C5ABC: nop

    // 0x800C5AC0: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800C5AC4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800C5AC8: nop

    // 0x800C5ACC: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800C5AD0: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800C5AD4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x800C5AD8: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800C5ADC: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C5AE0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800C5AE4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C5AE8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C5AEC: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800C5AF0: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C5AF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C5AF8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C5AFC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C5B00: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x800C5B04: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800C5B08: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800C5B0C: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x800C5B10: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C5B14: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x800C5B18: swc1        $f4, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f4.u32l;
    // 0x800C5B1C: lwc1        $f20, 0x2C($t3)
    ctx->f20.u32l = MEM_W(ctx->r11, 0X2C);
    // 0x800C5B20: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C5B24: swc1        $f20, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f20.u32l;
    // 0x800C5B28: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x800C5B2C: nop

    // 0x800C5B30: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C5B34: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C5B38: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C5B3C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C5B40: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C5B44: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C5B48: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x800C5B4C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5B50: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5B54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C5B58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5B5C: sll         $t8, $t9, 2
    ctx->r24 = S32(ctx->r25 << 2);
    // 0x800C5B60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C5B64: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C5B68: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C5B6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C5B70: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800C5B74: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C5B78: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C5B7C: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x800C5B80: addu        $t8, $t8, $t9
    ctx->r24 = ADD32(ctx->r24, ctx->r25);
    // 0x800C5B84: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C5B88: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x800C5B8C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800C5B90: addu        $t2, $t8, $t1
    ctx->r10 = ADD32(ctx->r24, ctx->r9);
    // 0x800C5B94: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x800C5B98: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x800C5B9C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C5BA0: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x800C5BA4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800C5BA8: nop

    // 0x800C5BAC: sll         $t3, $t0, 2
    ctx->r11 = S32(ctx->r8 << 2);
    // 0x800C5BB0: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800C5BB4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C5BB8: addu        $t3, $t3, $t0
    ctx->r11 = ADD32(ctx->r11, ctx->r8);
    // 0x800C5BBC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C5BC0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C5BC4: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
L_800C5BC8:
    // 0x800C5BC8: b           L_800C5BD0
    // 0x800C5BCC: nop

        goto L_800C5BD0;
    // 0x800C5BCC: nop

L_800C5BD0:
    // 0x800C5BD0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800C5BD4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x800C5BD8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x800C5BDC: jr          $ra
    // 0x800C5BE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800C5BE0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800F643C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F643C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F6440: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F6444: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F6448: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F644C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800F6450: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F6454: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F6458: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F645C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F6460: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F6464: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F6468: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F646C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F6470: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F6474: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F6478: addiu       $a1, $a1, 0x3430
    ctx->r5 = ADD32(ctx->r5, 0X3430);
    // 0x800F647C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F6480: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F6484: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F6488: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F648C: jal         0x80027464
    // 0x800F6490: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F6490: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x800F6494: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800F6498: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F649C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F64A0: beq         $t0, $at, L_800F65AC
    if (ctx->r8 == ctx->r1) {
        // 0x800F64A4: nop
    
            goto L_800F65AC;
    }
    // 0x800F64A4: nop

    // 0x800F64A8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x800F64AC: lw          $t1, 0x5100($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5100);
    // 0x800F64B0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800F64B4: lh          $t2, 0xA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA);
    // 0x800F64B8: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x800F64BC: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x800F64C0: subu        $t3, $t3, $t2
    ctx->r11 = SUB32(ctx->r11, ctx->r10);
    // 0x800F64C4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F64C8: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F64CC: bgez        $t3, L_800F64DC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800F64D0: sra         $t4, $t3, 1
        ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
            goto L_800F64DC;
    }
    // 0x800F64D0: sra         $t4, $t3, 1
    ctx->r12 = S32(SIGNED(ctx->r11) >> 1);
    // 0x800F64D4: addiu       $at, $t3, 0x1
    ctx->r1 = ADD32(ctx->r11, 0X1);
    // 0x800F64D8: sra         $t4, $at, 1
    ctx->r12 = S32(SIGNED(ctx->r1) >> 1);
L_800F64DC:
    // 0x800F64DC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F64E0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x800F64E4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F64E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F64EC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800F64F0: sh          $t4, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r12;
    // 0x800F64F4: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x800F64F8: lw          $t8, 0x5100($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5100);
    // 0x800F64FC: nop

    // 0x800F6500: lh          $t6, 0xC($t8)
    ctx->r14 = MEM_H(ctx->r24, 0XC);
    // 0x800F6504: nop

    // 0x800F6508: beq         $t6, $zero, L_800F653C
    if (ctx->r14 == 0) {
        // 0x800F650C: nop
    
            goto L_800F653C;
    }
    // 0x800F650C: nop

    // 0x800F6510: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800F6514: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F6518: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F651C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F6520: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F6524: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F6528: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F652C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F6530: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800F6534: b           L_800F6564
    // 0x800F6538: sh          $t9, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r25;
        goto L_800F6564;
    // 0x800F6538: sh          $t9, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r25;
L_800F653C:
    // 0x800F653C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800F6540: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F6544: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800F6548: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F654C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800F6550: addu        $t5, $t5, $t3
    ctx->r13 = ADD32(ctx->r13, ctx->r11);
    // 0x800F6554: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800F6558: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800F655C: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x800F6560: sh          $t2, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = ctx->r10;
L_800F6564:
    // 0x800F6564: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800F6568: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x800F656C: sll         $t6, $t8, 2
    ctx->r14 = S32(ctx->r24 << 2);
    // 0x800F6570: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800F6574: lw          $t4, 0x5100($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5100);
    // 0x800F6578: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x800F657C: addu        $t6, $t6, $t8
    ctx->r14 = ADD32(ctx->r14, ctx->r24);
    // 0x800F6580: lh          $t7, 0xE($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XE);
    // 0x800F6584: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x800F6588: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F658C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x800F6590: sh          $t7, 0x41FA($at)
    MEM_H(0X41FA, ctx->r1) = ctx->r15;
    // 0x800F6594: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800F6598: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800F659C: addiu       $a3, $a3, -0x46D4
    ctx->r7 = ADD32(ctx->r7, -0X46D4);
    // 0x800F65A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800F65A4: jal         0x8001ABF4
    // 0x800F65A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800F65A8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800F65AC:
    // 0x800F65AC: b           L_800F65B4
    // 0x800F65B0: nop

        goto L_800F65B4;
    // 0x800F65B0: nop

L_800F65B4:
    // 0x800F65B4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F65B8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F65BC: jr          $ra
    // 0x800F65C0: nop

    return;
    // 0x800F65C0: nop

;}
RECOMP_FUNC void func_800E3B40(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3B40: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E3B44: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E3B48: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3B4C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E3B50: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E3B54: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3B58: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3B5C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3B60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3B64: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3B68: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3B6C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E3B70: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E3B74: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E3B78: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E3B7C: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800E3B80: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800E3B84: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x800E3B88: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E3B8C: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E3B90: addiu       $a1, $a1, 0x439C
    ctx->r5 = ADD32(ctx->r5, 0X439C);
    // 0x800E3B94: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E3B98: jal         0x80027464
    // 0x800E3B9C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E3B9C: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800E3BA0: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800E3BA4: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800E3BA8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E3BAC: beq         $t1, $at, L_800E3C74
    if (ctx->r9 == ctx->r1) {
        // 0x800E3BB0: nop
    
            goto L_800E3C74;
    }
    // 0x800E3BB0: nop

    // 0x800E3BB4: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800E3BB8: addiu       $t2, $t2, -0x700C
    ctx->r10 = ADD32(ctx->r10, -0X700C);
    // 0x800E3BBC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3BC0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800E3BC4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E3BC8: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800E3BCC: jal         0x8001C0EC
    // 0x800E3BD0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800E3BD0: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_1:
    // 0x800E3BD4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3BD8: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E3BDC: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E3BE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E3BE4: jal         0x8001ABF4
    // 0x800E3BE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E3BE8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E3BEC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E3BF0: addiu       $a3, $a3, -0x6D98
    ctx->r7 = ADD32(ctx->r7, -0X6D98);
    // 0x800E3BF4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3BF8: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E3BFC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E3C00: jal         0x8001ABF4
    // 0x800E3C04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800E3C04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800E3C08: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800E3C0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E3C10: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800E3C14: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800E3C18: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E3C1C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800E3C20: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800E3C24: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E3C28: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3C2C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E3C30: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x800E3C34: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800E3C38: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3C3C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3C40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3C44: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3C48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3C4C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3C50: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E3C54: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800E3C58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3C5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3C60: jal         0x8002B114
    // 0x800E3C64: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x800E3C64: nop

    after_4:
    // 0x800E3C68: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E3C6C: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800E3C70: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
L_800E3C74:
    // 0x800E3C74: b           L_800E3C7C
    // 0x800E3C78: nop

        goto L_800E3C7C;
    // 0x800E3C78: nop

L_800E3C7C:
    // 0x800E3C7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E3C80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E3C84: jr          $ra
    // 0x800E3C88: nop

    return;
    // 0x800E3C88: nop

;}
RECOMP_FUNC void func_800E3C8C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E3C8C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E3C90: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E3C94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E3C98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E3C9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E3CA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3CA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3CA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3CAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3CB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3CB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E3CB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E3CBC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E3CC0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E3CC4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800E3CC8: lwc1        $f4, 0x8($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800E3CCC: lw          $a2, 0x0($t0)
    ctx->r6 = MEM_W(ctx->r8, 0X0);
    // 0x800E3CD0: lw          $a3, 0x4($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X4);
    // 0x800E3CD4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800E3CD8: lwc1        $f6, 0x3C($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x800E3CDC: addiu       $a1, $a1, 0x43A8
    ctx->r5 = ADD32(ctx->r5, 0X43A8);
    // 0x800E3CE0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800E3CE4: jal         0x80027464
    // 0x800E3CE8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800E3CE8: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_0:
    // 0x800E3CEC: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800E3CF0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800E3CF4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800E3CF8: beq         $t1, $at, L_800E3DC0
    if (ctx->r9 == ctx->r1) {
        // 0x800E3CFC: nop
    
            goto L_800E3DC0;
    }
    // 0x800E3CFC: nop

    // 0x800E3D00: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x800E3D04: addiu       $t2, $t2, -0x700C
    ctx->r10 = ADD32(ctx->r10, -0X700C);
    // 0x800E3D08: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3D0C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800E3D10: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E3D14: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800E3D18: jal         0x8001C0EC
    // 0x800E3D1C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800E3D1C: addiu       $a3, $zero, 0x70
    ctx->r7 = ADD32(0, 0X70);
    after_1:
    // 0x800E3D20: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3D24: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E3D28: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E3D2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E3D30: jal         0x8001ABF4
    // 0x800E3D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800E3D34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800E3D38: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800E3D3C: addiu       $a3, $a3, -0x6D20
    ctx->r7 = ADD32(ctx->r7, -0X6D20);
    // 0x800E3D40: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x800E3D44: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800E3D48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800E3D4C: jal         0x8001ABF4
    // 0x800E3D50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_3;
    // 0x800E3D50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_3:
    // 0x800E3D54: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800E3D58: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E3D5C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800E3D60: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800E3D64: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800E3D68: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800E3D6C: lwc1        $f8, 0x1C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x800E3D70: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800E3D74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3D78: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800E3D7C: swc1        $f8, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f8.u32l;
    // 0x800E3D80: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800E3D84: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800E3D88: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E3D8C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3D90: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E3D94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E3D98: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E3D9C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E3DA0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800E3DA4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E3DA8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E3DAC: jal         0x8002B114
    // 0x800E3DB0: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x800E3DB0: nop

    after_4:
    // 0x800E3DB4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E3DB8: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800E3DBC: sh          $t8, 0xB2($t9)
    MEM_H(0XB2, ctx->r25) = ctx->r24;
L_800E3DC0:
    // 0x800E3DC0: b           L_800E3DC8
    // 0x800E3DC4: nop

        goto L_800E3DC8;
    // 0x800E3DC4: nop

L_800E3DC8:
    // 0x800E3DC8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E3DCC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E3DD0: jr          $ra
    // 0x800E3DD4: nop

    return;
    // 0x800E3DD4: nop

;}
RECOMP_FUNC void func_800A9424(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A9424: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A9428: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A942C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A9430: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A9434: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A9438: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A943C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9440: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A9444: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A9448: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A944C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A9450: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A9454: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800A9458: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A945C: nop

    // 0x800A9460: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800A9464: nop

    // 0x800A9468: bne         $t1, $zero, L_800A94F8
    if (ctx->r9 != 0) {
        // 0x800A946C: nop
    
            goto L_800A94F8;
    }
    // 0x800A946C: nop

    // 0x800A9470: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800A9474: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800A9478: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800A947C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A9480: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A9484: nop

    // 0x800A9488: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A948C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A9490: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800A9494: nop

    // 0x800A9498: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A949C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800A94A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800A94A4: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A94A8: nop

    // 0x800A94AC: swc1        $f8, 0x40($t6)
    MEM_W(0X40, ctx->r14) = ctx->f8.u32l;
    // 0x800A94B0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A94B4: nop

    // 0x800A94B8: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x800A94BC: nop

    // 0x800A94C0: bne         $t8, $zero, L_800A94F8
    if (ctx->r24 != 0) {
        // 0x800A94C4: nop
    
            goto L_800A94F8;
    }
    // 0x800A94C4: nop

    // 0x800A94C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A94CC: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800A94D0: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
    // 0x800A94D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A94D8: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800A94DC: addiu       $t1, $t1, 0x75D0
    ctx->r9 = ADD32(ctx->r9, 0X75D0);
    // 0x800A94E0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A94E4: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800A94E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A94EC: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800A94F0: jal         0x8001C0EC
    // 0x800A94F4: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A94F4: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_0:
L_800A94F8:
    // 0x800A94F8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A94FC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A9500: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A9504: nop

    // 0x800A9508: beq         $t3, $at, L_800A95D8
    if (ctx->r11 == ctx->r1) {
        // 0x800A950C: nop
    
            goto L_800A95D8;
    }
    // 0x800A950C: nop

    // 0x800A9510: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9514: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A9518: jal         0x8001B44C
    // 0x800A951C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x800A951C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800A9520: beq         $v0, $zero, L_800A95D8
    if (ctx->r2 == 0) {
        // 0x800A9524: nop
    
            goto L_800A95D8;
    }
    // 0x800A9524: nop

    // 0x800A9528: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A952C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A9530: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x800A9534: nop

    // 0x800A9538: bne         $t5, $at, L_800A9598
    if (ctx->r13 != ctx->r1) {
        // 0x800A953C: nop
    
            goto L_800A9598;
    }
    // 0x800A953C: nop

    // 0x800A9540: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A9544: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800A9548: sh          $t6, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r14;
    // 0x800A954C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x800A9550: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800A9554: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800A9558: nop

    // 0x800A955C: swc1        $f10, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f10.u32l;
    // 0x800A9560: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A9564: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800A9568: sb          $t9, 0x132($t0)
    MEM_B(0X132, ctx->r8) = ctx->r25;
    // 0x800A956C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9570: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x800A9574: addiu       $t1, $t1, 0x75D0
    ctx->r9 = ADD32(ctx->r9, 0X75D0);
    // 0x800A9578: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A957C: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800A9580: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A9584: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800A9588: jal         0x8001C0EC
    // 0x800A958C: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_2;
    // 0x800A958C: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_2:
    // 0x800A9590: b           L_800A95D8
    // 0x800A9594: nop

        goto L_800A95D8;
    // 0x800A9594: nop

L_800A9598:
    // 0x800A9598: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800A959C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800A95A0: nop

    // 0x800A95A4: swc1        $f16, 0x48($t2)
    MEM_W(0X48, ctx->r10) = ctx->f16.u32l;
    // 0x800A95A8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800A95AC: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x800A95B0: sb          $t3, 0x132($t4)
    MEM_B(0X132, ctx->r12) = ctx->r11;
    // 0x800A95B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A95B8: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x800A95BC: addiu       $t5, $t5, 0x75D0
    ctx->r13 = ADD32(ctx->r13, 0X75D0);
    // 0x800A95C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A95C4: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800A95C8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A95CC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x800A95D0: jal         0x8001C0EC
    // 0x800A95D4: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    func_8001C0EC(rdram, ctx);
        goto after_3;
    // 0x800A95D4: addiu       $a3, $zero, 0x81
    ctx->r7 = ADD32(0, 0X81);
    after_3:
L_800A95D8:
    // 0x800A95D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A95DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A95E0: jal         0x80029C40
    // 0x800A95E4: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A95E4: nop

    after_4:
    // 0x800A95E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A95EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A95F0: jal         0x80029D04
    // 0x800A95F4: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A95F4: nop

    after_5:
    // 0x800A95F8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800A95FC: nop

    // 0x800A9600: lwc1        $f18, 0x3C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x800A9604: nop

    // 0x800A9608: swc1        $f18, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f18.u32l;
    // 0x800A960C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800A9610: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A9614: lbu         $t8, 0x132($t7)
    ctx->r24 = MEM_BU(ctx->r15, 0X132);
    // 0x800A9618: nop

    // 0x800A961C: bne         $t8, $at, L_800A9654
    if (ctx->r24 != ctx->r1) {
        // 0x800A9620: nop
    
            goto L_800A9654;
    }
    // 0x800A9620: nop

    // 0x800A9624: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A9628: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A962C: jal         0x8001B44C
    // 0x800A9630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800A9630: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800A9634: beq         $v0, $zero, L_800A9654
    if (ctx->r2 == 0) {
        // 0x800A9638: nop
    
            goto L_800A9654;
    }
    // 0x800A9638: nop

    // 0x800A963C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800A9640: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800A9644: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800A9648: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800A964C: nop

    // 0x800A9650: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800A9654:
    // 0x800A9654: b           L_800A965C
    // 0x800A9658: nop

        goto L_800A965C;
    // 0x800A9658: nop

L_800A965C:
    // 0x800A965C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A9660: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800A9664: jr          $ra
    // 0x800A9668: nop

    return;
    // 0x800A9668: nop

;}
RECOMP_FUNC void func_80069314(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80069314: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80069318: addiu       $t6, $t6, 0x77D0
    ctx->r14 = ADD32(ctx->r14, 0X77D0);
    // 0x8006931C: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80069320: lwc1        $f6, 0x4F88($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F88);
    // 0x80069324: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80069328: nop

    // 0x8006932C: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80069330: nop

    // 0x80069334: bc1t        L_8006942C
    if (c1cs) {
        // 0x80069338: nop
    
            goto L_8006942C;
    }
    // 0x80069338: nop

    // 0x8006933C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80069340: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80069344: addiu       $t8, $t8, 0x7760
    ctx->r24 = ADD32(ctx->r24, 0X7760);
    // 0x80069348: addiu       $t7, $t7, 0x77D0
    ctx->r15 = ADD32(ctx->r15, 0X77D0);
    // 0x8006934C: lwc1        $f8, 0x0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80069350: lwc1        $f10, 0x0($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X0);
    // 0x80069354: nop

    // 0x80069358: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8006935C: nop

    // 0x80069360: bc1f        L_8006942C
    if (!c1cs) {
        // 0x80069364: nop
    
            goto L_8006942C;
    }
    // 0x80069364: nop

    // 0x80069368: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006936C: addiu       $t9, $t9, 0x7780
    ctx->r25 = ADD32(ctx->r25, 0X7780);
    // 0x80069370: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80069374: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80069378: addiu       $t1, $t1, 0x76F0
    ctx->r9 = ADD32(ctx->r9, 0X76F0);
    // 0x8006937C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x80069380: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80069384: addiu       $t2, $t2, 0x7790
    ctx->r10 = ADD32(ctx->r10, 0X7790);
    // 0x80069388: lw          $t3, 0x0($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X0);
    // 0x8006938C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80069390: addiu       $t4, $t4, 0x7700
    ctx->r12 = ADD32(ctx->r12, 0X7700);
    // 0x80069394: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x80069398: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8006939C: addiu       $t5, $t5, 0x77A0
    ctx->r13 = ADD32(ctx->r13, 0X77A0);
    // 0x800693A0: lw          $t6, 0x0($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X0);
    // 0x800693A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800693A8: addiu       $t7, $t7, 0x7710
    ctx->r15 = ADD32(ctx->r15, 0X7710);
    // 0x800693AC: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x800693B0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800693B4: addiu       $t8, $t8, 0x77B0
    ctx->r24 = ADD32(ctx->r24, 0X77B0);
    // 0x800693B8: lw          $t9, 0x0($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X0);
    // 0x800693BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800693C0: addiu       $t0, $t0, 0x7720
    ctx->r8 = ADD32(ctx->r8, 0X7720);
    // 0x800693C4: sw          $t9, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r25;
    // 0x800693C8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800693CC: addiu       $t1, $t1, 0x77C0
    ctx->r9 = ADD32(ctx->r9, 0X77C0);
    // 0x800693D0: lw          $t2, 0x0($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X0);
    // 0x800693D4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800693D8: addiu       $t3, $t3, 0x7730
    ctx->r11 = ADD32(ctx->r11, 0X7730);
    // 0x800693DC: sw          $t2, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->r10;
    // 0x800693E0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800693E4: addiu       $t4, $t4, 0x77D0
    ctx->r12 = ADD32(ctx->r12, 0X77D0);
    // 0x800693E8: lwc1        $f16, 0x0($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X0);
    // 0x800693EC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800693F0: addiu       $t5, $t5, 0x7760
    ctx->r13 = ADD32(ctx->r13, 0X7760);
    // 0x800693F4: swc1        $f16, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f16.u32l;
    // 0x800693F8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800693FC: addiu       $t7, $t7, 0x7740
    ctx->r15 = ADD32(ctx->r15, 0X7740);
    // 0x80069400: addiu       $t6, $zero, 0xFF
    ctx->r14 = ADD32(0, 0XFF);
    // 0x80069404: sw          $t6, 0x0($t7)
    MEM_W(0X0, ctx->r15) = ctx->r14;
    // 0x80069408: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006940C: addiu       $t8, $t8, 0x7750
    ctx->r24 = ADD32(ctx->r24, 0X7750);
    // 0x80069410: sw          $zero, 0x0($t8)
    MEM_W(0X0, ctx->r24) = 0;
    // 0x80069414: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80069418: addiu       $t9, $t9, 0x77E0
    ctx->r25 = ADD32(ctx->r25, 0X77E0);
    // 0x8006941C: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x80069420: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80069424: addiu       $t1, $t1, 0x7770
    ctx->r9 = ADD32(ctx->r9, 0X7770);
    // 0x80069428: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
L_8006942C:
    // 0x8006942C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80069430: addiu       $t2, $t2, 0x77D0
    ctx->r10 = ADD32(ctx->r10, 0X77D0);
    // 0x80069434: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x80069438: lwc1        $f4, 0x4F8C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F8C);
    // 0x8006943C: lwc1        $f18, 0x4($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X4);
    // 0x80069440: nop

    // 0x80069444: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x80069448: nop

    // 0x8006944C: bc1t        L_80069544
    if (c1cs) {
        // 0x80069450: nop
    
            goto L_80069544;
    }
    // 0x80069450: nop

    // 0x80069454: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80069458: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8006945C: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x80069460: addiu       $t3, $t3, 0x77D0
    ctx->r11 = ADD32(ctx->r11, 0X77D0);
    // 0x80069464: lwc1        $f6, 0x4($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X4);
    // 0x80069468: lwc1        $f8, 0x4($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X4);
    // 0x8006946C: nop

    // 0x80069470: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x80069474: nop

    // 0x80069478: bc1f        L_80069544
    if (!c1cs) {
        // 0x8006947C: nop
    
            goto L_80069544;
    }
    // 0x8006947C: nop

    // 0x80069480: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80069484: addiu       $t5, $t5, 0x7780
    ctx->r13 = ADD32(ctx->r13, 0X7780);
    // 0x80069488: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x8006948C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80069490: addiu       $t7, $t7, 0x76F0
    ctx->r15 = ADD32(ctx->r15, 0X76F0);
    // 0x80069494: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x80069498: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006949C: addiu       $t8, $t8, 0x7790
    ctx->r24 = ADD32(ctx->r24, 0X7790);
    // 0x800694A0: lw          $t9, 0x4($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X4);
    // 0x800694A4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800694A8: addiu       $t0, $t0, 0x7700
    ctx->r8 = ADD32(ctx->r8, 0X7700);
    // 0x800694AC: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x800694B0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800694B4: addiu       $t1, $t1, 0x77A0
    ctx->r9 = ADD32(ctx->r9, 0X77A0);
    // 0x800694B8: lw          $t2, 0x4($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X4);
    // 0x800694BC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800694C0: addiu       $t3, $t3, 0x7710
    ctx->r11 = ADD32(ctx->r11, 0X7710);
    // 0x800694C4: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x800694C8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800694CC: addiu       $t4, $t4, 0x77B0
    ctx->r12 = ADD32(ctx->r12, 0X77B0);
    // 0x800694D0: lw          $t5, 0x4($t4)
    ctx->r13 = MEM_W(ctx->r12, 0X4);
    // 0x800694D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800694D8: addiu       $t6, $t6, 0x7720
    ctx->r14 = ADD32(ctx->r14, 0X7720);
    // 0x800694DC: sw          $t5, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r13;
    // 0x800694E0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800694E4: addiu       $t7, $t7, 0x77C0
    ctx->r15 = ADD32(ctx->r15, 0X77C0);
    // 0x800694E8: lw          $t8, 0x4($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X4);
    // 0x800694EC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800694F0: addiu       $t9, $t9, 0x7730
    ctx->r25 = ADD32(ctx->r25, 0X7730);
    // 0x800694F4: sw          $t8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r24;
    // 0x800694F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800694FC: addiu       $t0, $t0, 0x77D0
    ctx->r8 = ADD32(ctx->r8, 0X77D0);
    // 0x80069500: lwc1        $f10, 0x4($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80069504: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80069508: addiu       $t1, $t1, 0x7760
    ctx->r9 = ADD32(ctx->r9, 0X7760);
    // 0x8006950C: swc1        $f10, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->f10.u32l;
    // 0x80069510: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80069514: addiu       $t3, $t3, 0x7740
    ctx->r11 = ADD32(ctx->r11, 0X7740);
    // 0x80069518: addiu       $t2, $zero, 0xFF
    ctx->r10 = ADD32(0, 0XFF);
    // 0x8006951C: sw          $t2, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->r10;
    // 0x80069520: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80069524: addiu       $t4, $t4, 0x7750
    ctx->r12 = ADD32(ctx->r12, 0X7750);
    // 0x80069528: sw          $zero, 0x4($t4)
    MEM_W(0X4, ctx->r12) = 0;
    // 0x8006952C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80069530: addiu       $t5, $t5, 0x77E0
    ctx->r13 = ADD32(ctx->r13, 0X77E0);
    // 0x80069534: lw          $t6, 0x4($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X4);
    // 0x80069538: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006953C: addiu       $t7, $t7, 0x7770
    ctx->r15 = ADD32(ctx->r15, 0X7770);
    // 0x80069540: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
L_80069544:
    // 0x80069544: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80069548: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x8006954C: nop

    // 0x80069550: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80069554: bne         $t9, $zero, L_80069590
    if (ctx->r25 != 0) {
        // 0x80069558: nop
    
            goto L_80069590;
    }
    // 0x80069558: nop

    // 0x8006955C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80069560: addiu       $t0, $t0, 0x7730
    ctx->r8 = ADD32(ctx->r8, 0X7730);
    // 0x80069564: lw          $t1, 0x0($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X0);
    // 0x80069568: nop

    // 0x8006956C: bltz        $t1, L_80069584
    if (SIGNED(ctx->r9) < 0) {
        // 0x80069570: nop
    
            goto L_80069584;
    }
    // 0x80069570: nop

    // 0x80069574: lw          $t2, 0x4($t0)
    ctx->r10 = MEM_W(ctx->r8, 0X4);
    // 0x80069578: nop

    // 0x8006957C: blez        $t2, L_80069590
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80069580: nop
    
            goto L_80069590;
    }
    // 0x80069580: nop

L_80069584:
    // 0x80069584: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80069588: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006958C: sb          $t3, 0x76E0($at)
    MEM_B(0X76E0, ctx->r1) = ctx->r11;
L_80069590:
    // 0x80069590: jr          $ra
    // 0x80069594: nop

    return;
    // 0x80069594: nop

    // 0x80069598: jr          $ra
    // 0x8006959C: nop

    return;
    // 0x8006959C: nop

;}
RECOMP_FUNC void func_8009AA10(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009AA10: addiu       $sp, $sp, -0xC0
    ctx->r29 = ADD32(ctx->r29, -0XC0);
    // 0x8009AA14: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8009AA18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009AA1C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009AA20: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009AA24: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009AA28: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009AA2C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009AA30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009AA34: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009AA38: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009AA3C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009AA40: sw          $t9, 0xBC($sp)
    MEM_W(0XBC, ctx->r29) = ctx->r25;
    // 0x8009AA44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AA48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AA4C: jal         0x8002AA94
    // 0x8009AA50: nop

    func_8002AA94(rdram, ctx);
        goto after_0;
    // 0x8009AA50: nop

    after_0:
    // 0x8009AA54: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AA58: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AA5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009AA60: jal         0x80098864
    // 0x8009AA64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_80098864(rdram, ctx);
        goto after_1;
    // 0x8009AA64: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8009AA68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AA6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AA70: jal         0x8002A640
    // 0x8009AA74: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    func_8002A640(rdram, ctx);
        goto after_2;
    // 0x8009AA74: lui         $a1, 0x4000
    ctx->r5 = S32(0X4000 << 16);
    after_2:
    // 0x8009AA78: sw          $v0, 0xB4($sp)
    MEM_W(0XB4, ctx->r29) = ctx->r2;
    // 0x8009AA7C: lw          $t0, 0xB4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XB4);
    // 0x8009AA80: nop

    // 0x8009AA84: bne         $t0, $zero, L_8009AAA8
    if (ctx->r8 != 0) {
        // 0x8009AA88: nop
    
            goto L_8009AAA8;
    }
    // 0x8009AA88: nop

    // 0x8009AA8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AA90: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AA94: jal         0x8002A46C
    // 0x8009AA98: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_3;
    // 0x8009AA98: nop

    after_3:
    // 0x8009AA9C: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x8009AAA0: b           L_8009AAD0
    // 0x8009AAA4: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
        goto L_8009AAD0;
    // 0x8009AAA4: swc1        $f0, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f0.u32l;
L_8009AAA8:
    // 0x8009AAA8: lw          $t3, 0xB4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB4);
    // 0x8009AAAC: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x8009AAB0: sll         $t4, $t3, 1
    ctx->r12 = S32(ctx->r11 << 1);
    // 0x8009AAB4: mtc1        $t4, $f4
    ctx->f4.u32l = ctx->r12;
    // 0x8009AAB8: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x8009AABC: jal         0x80015538
    // 0x8009AAC0: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8009AAC0: cvt.s.w     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    ctx->f14.fl = CVT_S_W(ctx->f4.u32l);
    after_4:
    // 0x8009AAC4: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x8009AAC8: nop

    // 0x8009AACC: swc1        $f0, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f0.u32l;
L_8009AAD0:
    // 0x8009AAD0: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x8009AAD4: nop

    // 0x8009AAD8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x8009AADC: nop

    // 0x8009AAE0: bne         $t7, $zero, L_8009AB68
    if (ctx->r15 != 0) {
        // 0x8009AAE4: nop
    
            goto L_8009AB68;
    }
    // 0x8009AAE4: nop

    // 0x8009AAE8: lw          $t8, 0xB4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0XB4);
    // 0x8009AAEC: nop

    // 0x8009AAF0: bne         $t8, $zero, L_8009AB60
    if (ctx->r24 != 0) {
        // 0x8009AAF4: nop
    
            goto L_8009AB60;
    }
    // 0x8009AAF4: nop

    // 0x8009AAF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AAFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AB00: jal         0x8002A1FC
    // 0x8009AB04: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_5;
    // 0x8009AB04: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_5:
    // 0x8009AB08: beq         $v0, $zero, L_8009AB60
    if (ctx->r2 == 0) {
        // 0x8009AB0C: nop
    
            goto L_8009AB60;
    }
    // 0x8009AB0C: nop

    // 0x8009AB10: jal         0x80014E80
    // 0x8009AB14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_6;
    // 0x8009AB14: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_6:
    // 0x8009AB18: bne         $v0, $zero, L_8009AB60
    if (ctx->r2 != 0) {
        // 0x8009AB1C: nop
    
            goto L_8009AB60;
    }
    // 0x8009AB1C: nop

    // 0x8009AB20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AB24: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8009AB28: addiu       $t9, $t9, 0x6940
    ctx->r25 = ADD32(ctx->r25, 0X6940);
    // 0x8009AB2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AB30: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x8009AB34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009AB38: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009AB3C: jal         0x8001C0EC
    // 0x8009AB40: addiu       $a3, $zero, 0xAB
    ctx->r7 = ADD32(0, 0XAB);
    func_8001C0EC(rdram, ctx);
        goto after_7;
    // 0x8009AB40: addiu       $a3, $zero, 0xAB
    ctx->r7 = ADD32(0, 0XAB);
    after_7:
    // 0x8009AB44: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AB48: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AB4C: jal         0x8001B754
    // 0x8009AB50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_8;
    // 0x8009AB50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_8:
    // 0x8009AB54: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x8009AB58: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x8009AB5C: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_8009AB60:
    // 0x8009AB60: b           L_8009AB80
    // 0x8009AB64: nop

        goto L_8009AB80;
    // 0x8009AB64: nop

L_8009AB68:
    // 0x8009AB68: lw          $t2, 0xBC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XBC);
    // 0x8009AB6C: nop

    // 0x8009AB70: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x8009AB74: nop

    // 0x8009AB78: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8009AB7C: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_8009AB80:
    // 0x8009AB80: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AB84: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AB88: jal         0x8001B62C
    // 0x8009AB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_9;
    // 0x8009AB8C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_9:
    // 0x8009AB90: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x8009AB94: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009AB98: nop

    // 0x8009AB9C: c.eq.s      $f0, $f6
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f0.fl == ctx->f6.fl;
    // 0x8009ABA0: nop

    // 0x8009ABA4: bc1f        L_8009AC7C
    if (!c1cs) {
        // 0x8009ABA8: nop
    
            goto L_8009AC7C;
    }
    // 0x8009ABA8: nop

    // 0x8009ABAC: lw          $t5, 0xBC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XBC);
    // 0x8009ABB0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8009ABB4: lw          $a1, 0x1C($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X1C);
    // 0x8009ABB8: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8009ABBC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8009ABC0: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8009ABC4: jal         0x800372A0
    // 0x8009ABC8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_10;
    // 0x8009ABC8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_10:
    // 0x8009ABCC: lw          $t6, 0xBC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XBC);
    // 0x8009ABD0: addiu       $a0, $sp, 0x34
    ctx->r4 = ADD32(ctx->r29, 0X34);
    // 0x8009ABD4: lw          $a1, 0x0($t6)
    ctx->r5 = MEM_W(ctx->r14, 0X0);
    // 0x8009ABD8: lw          $a2, 0x4($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X4);
    // 0x8009ABDC: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x8009ABE0: jal         0x80037200
    // 0x8009ABE4: nop

    guTranslateF(rdram, ctx);
        goto after_11;
    // 0x8009ABE4: nop

    after_11:
    // 0x8009ABE8: addiu       $t7, $sp, 0x74
    ctx->r15 = ADD32(ctx->r29, 0X74);
    // 0x8009ABEC: or          $a0, $t7, $zero
    ctx->r4 = ctx->r15 | 0;
    // 0x8009ABF0: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x8009ABF4: jal         0x80036400
    // 0x8009ABF8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    guMtxCatF(rdram, ctx);
        goto after_12;
    // 0x8009ABF8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    after_12:
    // 0x8009ABFC: addiu       $t8, $sp, 0x30
    ctx->r24 = ADD32(ctx->r29, 0X30);
    // 0x8009AC00: addiu       $t9, $sp, 0x2C
    ctx->r25 = ADD32(ctx->r29, 0X2C);
    // 0x8009AC04: addiu       $t0, $sp, 0x28
    ctx->r8 = ADD32(ctx->r29, 0X28);
    // 0x8009AC08: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8009AC0C: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x8009AC10: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8009AC14: addiu       $a0, $sp, 0x74
    ctx->r4 = ADD32(ctx->r29, 0X74);
    // 0x8009AC18: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x8009AC1C: lui         $a2, 0x4220
    ctx->r6 = S32(0X4220 << 16);
    // 0x8009AC20: jal         0x80036360
    // 0x8009AC24: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    guMtxXFMF(rdram, ctx);
        goto after_13;
    // 0x8009AC24: lui         $a3, 0x42F0
    ctx->r7 = S32(0X42F0 << 16);
    after_13:
    // 0x8009AC28: lwc1        $f10, 0x28($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8009AC2C: lw          $t1, 0xBC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XBC);
    // 0x8009AC30: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8009AC34: lwc1        $f16, 0x1C($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x8009AC38: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x8009AC3C: lw          $a2, 0x30($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X30);
    // 0x8009AC40: lw          $a3, 0x2C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X2C);
    // 0x8009AC44: addiu       $a1, $a1, 0x3454
    ctx->r5 = ADD32(ctx->r5, 0X3454);
    // 0x8009AC48: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009AC4C: jal         0x80027464
    // 0x8009AC50: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_14;
    // 0x8009AC50: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_14:
    // 0x8009AC54: sw          $v0, 0xB8($sp)
    MEM_W(0XB8, ctx->r29) = ctx->r2;
    // 0x8009AC58: lw          $t3, 0xB8($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XB8);
    // 0x8009AC5C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009AC60: beq         $t3, $at, L_8009AC7C
    if (ctx->r11 == ctx->r1) {
        // 0x8009AC64: nop
    
            goto L_8009AC7C;
    }
    // 0x8009AC64: nop

    // 0x8009AC68: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009AC6C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009AC70: lw          $a1, 0xB8($sp)
    ctx->r5 = MEM_W(ctx->r29, 0XB8);
    // 0x8009AC74: jal         0x80026F10
    // 0x8009AC78: nop

    func_80026F10(rdram, ctx);
        goto after_15;
    // 0x8009AC78: nop

    after_15:
L_8009AC7C:
    // 0x8009AC7C: b           L_8009AC84
    // 0x8009AC80: nop

        goto L_8009AC84;
    // 0x8009AC80: nop

L_8009AC84:
    // 0x8009AC84: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8009AC88: addiu       $sp, $sp, 0xC0
    ctx->r29 = ADD32(ctx->r29, 0XC0);
    // 0x8009AC8C: jr          $ra
    // 0x8009AC90: nop

    return;
    // 0x8009AC90: nop

;}
RECOMP_FUNC void func_8009C7C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009C7C4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009C7C8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009C7CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009C7D0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009C7D4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009C7D8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009C7DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C7E0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009C7E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009C7E8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009C7EC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009C7F0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009C7F4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009C7F8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C7FC: nop

    // 0x8009C800: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009C804: nop

    // 0x8009C808: bne         $t1, $zero, L_8009C844
    if (ctx->r9 != 0) {
        // 0x8009C80C: nop
    
            goto L_8009C844;
    }
    // 0x8009C80C: nop

    // 0x8009C810: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009C814: nop

    // 0x8009C818: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8009C81C: nop

    // 0x8009C820: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8009C824: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8009C828: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009C82C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009C830: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x8009C834: addiu       $a3, $a3, 0x6A50
    ctx->r7 = ADD32(ctx->r7, 0X6A50);
    // 0x8009C838: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009C83C: jal         0x8001ABF4
    // 0x8009C840: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x8009C840: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_8009C844:
    // 0x8009C844: b           L_8009C84C
    // 0x8009C848: nop

        goto L_8009C84C;
    // 0x8009C848: nop

L_8009C84C:
    // 0x8009C84C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009C850: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009C854: jr          $ra
    // 0x8009C858: nop

    return;
    // 0x8009C858: nop

;}
RECOMP_FUNC void func_800FBE54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FBE54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800FBE58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800FBE5C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FBE60: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800FBE64: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800FBE68: lwc1        $f6, 0x57BC($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X57BC);
    // 0x800FBE6C: lwc1        $f4, 0x8($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800FBE70: nop

    // 0x800FBE74: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800FBE78: nop

    // 0x800FBE7C: bc1f        L_800FBE9C
    if (!c1cs) {
        // 0x800FBE80: nop
    
            goto L_800FBE9C;
    }
    // 0x800FBE80: nop

    // 0x800FBE84: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FBE88: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FBE8C: jal         0x8001BB34
    // 0x800FBE90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800FBE90: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800FBE94: b           L_800FBEAC
    // 0x800FBE98: nop

        goto L_800FBEAC;
    // 0x800FBE98: nop

L_800FBE9C:
    // 0x800FBE9C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FBEA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FBEA4: jal         0x8001BB34
    // 0x800FBEA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800FBEA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800FBEAC:
    // 0x800FBEAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800FBEB0: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800FBEB4: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800FBEB8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800FBEBC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FBEC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800FBEC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800FBEC8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800FBECC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800FBED0: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x800FBED4: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x800FBED8: bne         $t9, $at, L_800FBEF8
    if (ctx->r25 != ctx->r1) {
        // 0x800FBEDC: nop
    
            goto L_800FBEF8;
    }
    // 0x800FBEDC: nop

    // 0x800FBEE0: b           L_800FBEE8
    // 0x800FBEE4: nop

        goto L_800FBEE8;
    // 0x800FBEE4: nop

L_800FBEE8:
    // 0x800FBEE8: jal         0x800FBCB0
    // 0x800FBEEC: nop

    func_800FBCB0(rdram, ctx);
        goto after_2;
    // 0x800FBEEC: nop

    after_2:
    // 0x800FBEF0: b           L_800FBEF8
    // 0x800FBEF4: nop

        goto L_800FBEF8;
    // 0x800FBEF4: nop

L_800FBEF8:
    // 0x800FBEF8: b           L_800FBF00
    // 0x800FBEFC: nop

        goto L_800FBF00;
    // 0x800FBEFC: nop

L_800FBF00:
    // 0x800FBF00: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800FBF04: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800FBF08: jr          $ra
    // 0x800FBF0C: nop

    return;
    // 0x800FBF0C: nop

;}
RECOMP_FUNC void func_8007D0DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007D0DC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8007D0E0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007D0E4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8007D0E8: lh          $t6, -0x1D08($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D08);
    // 0x8007D0EC: addiu       $at, $zero, 0x15
    ctx->r1 = ADD32(0, 0X15);
    // 0x8007D0F0: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8007D0F4: mflo        $t7
    ctx->r15 = lo;
    // 0x8007D0F8: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8007D0FC: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
    // 0x8007D100: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x8007D104: nop

    // 0x8007D108: slti        $at, $t9, 0x4
    ctx->r1 = SIGNED(ctx->r25) < 0X4 ? 1 : 0;
    // 0x8007D10C: bne         $at, $zero, L_8007D11C
    if (ctx->r1 != 0) {
        // 0x8007D110: nop
    
            goto L_8007D11C;
    }
    // 0x8007D110: nop

    // 0x8007D114: addiu       $t0, $zero, 0x4
    ctx->r8 = ADD32(0, 0X4);
    // 0x8007D118: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8007D11C:
    // 0x8007D11C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8007D120: lh          $t1, -0x1F00($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1F00);
    // 0x8007D124: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007D128: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x8007D12C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007D130: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x8007D134: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8007D138: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8007D13C: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x8007D140: lwc1        $f4, 0x4150($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4150);
    // 0x8007D144: nop

    // 0x8007D148: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8007D14C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007D150: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x8007D154: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007D158: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8007D15C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007D160: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8007D164: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8007D168: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x8007D16C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x8007D170: lwc1        $f6, 0x4154($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4154);
    // 0x8007D174: nop

    // 0x8007D178: swc1        $f6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f6.u32l;
    // 0x8007D17C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007D180: lh          $t5, -0x1F00($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X1F00);
    // 0x8007D184: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007D188: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8007D18C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8007D190: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8007D194: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x8007D198: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8007D19C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x8007D1A0: lwc1        $f8, 0x4158($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4158);
    // 0x8007D1A4: nop

    // 0x8007D1A8: swc1        $f8, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f8.u32l;
    // 0x8007D1AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8007D1B0: lh          $a0, -0x1F00($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1F00);
    // 0x8007D1B4: jal         0x8001A928
    // 0x8007D1B8: nop

    func_8001A928(rdram, ctx);
        goto after_0;
    // 0x8007D1B8: nop

    after_0:
    // 0x8007D1BC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007D1C0: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x8007D1C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007D1C8: sh          $zero, -0x1F00($at)
    MEM_H(-0X1F00, ctx->r1) = 0;
    // 0x8007D1CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x8007D1D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8007D1D4: bne         $t7, $at, L_8007D20C
    if (ctx->r15 != ctx->r1) {
        // 0x8007D1D8: nop
    
            goto L_8007D20C;
    }
    // 0x8007D1D8: nop

    // 0x8007D1DC: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D1E0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D1E4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D1E8: jal         0x8007CF98
    // 0x8007D1EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8007CF98(rdram, ctx);
        goto after_1;
    // 0x8007D1EC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x8007D1F0: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D1F4: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D1F8: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D1FC: jal         0x8007CF98
    // 0x8007D200: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_8007CF98(rdram, ctx);
        goto after_2;
    // 0x8007D200: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_2:
    // 0x8007D204: b           L_8007D2B0
    // 0x8007D208: nop

        goto L_8007D2B0;
    // 0x8007D208: nop

L_8007D20C:
    // 0x8007D20C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8007D210: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8007D214: bne         $t8, $at, L_8007D260
    if (ctx->r24 != ctx->r1) {
        // 0x8007D218: nop
    
            goto L_8007D260;
    }
    // 0x8007D218: nop

    // 0x8007D21C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D220: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D224: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D228: jal         0x8007CF98
    // 0x8007D22C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    func_8007CF98(rdram, ctx);
        goto after_3;
    // 0x8007D22C: addiu       $a0, $zero, 0x3
    ctx->r4 = ADD32(0, 0X3);
    after_3:
    // 0x8007D230: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D234: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D238: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D23C: jal         0x8007CF98
    // 0x8007D240: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_8007CF98(rdram, ctx);
        goto after_4;
    // 0x8007D240: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_4:
    // 0x8007D244: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D248: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D24C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D250: jal         0x8007CF98
    // 0x8007D254: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_8007CF98(rdram, ctx);
        goto after_5;
    // 0x8007D254: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_5:
    // 0x8007D258: b           L_8007D2B0
    // 0x8007D25C: nop

        goto L_8007D2B0;
    // 0x8007D25C: nop

L_8007D260:
    // 0x8007D260: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D264: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D268: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D26C: jal         0x8007CF98
    // 0x8007D270: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    func_8007CF98(rdram, ctx);
        goto after_6;
    // 0x8007D270: addiu       $a0, $zero, 0x6
    ctx->r4 = ADD32(0, 0X6);
    after_6:
    // 0x8007D274: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D278: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D27C: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D280: jal         0x8007CF98
    // 0x8007D284: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    func_8007CF98(rdram, ctx);
        goto after_7;
    // 0x8007D284: addiu       $a0, $zero, 0x7
    ctx->r4 = ADD32(0, 0X7);
    after_7:
    // 0x8007D288: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D28C: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D290: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D294: jal         0x8007CF98
    // 0x8007D298: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    func_8007CF98(rdram, ctx);
        goto after_8;
    // 0x8007D298: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_8:
    // 0x8007D29C: lw          $a1, 0x20($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X20);
    // 0x8007D2A0: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D2A4: lw          $a3, 0x18($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X18);
    // 0x8007D2A8: jal         0x8007CF98
    // 0x8007D2AC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    func_8007CF98(rdram, ctx);
        goto after_9;
    // 0x8007D2AC: addiu       $a0, $zero, 0x9
    ctx->r4 = ADD32(0, 0X9);
    after_9:
L_8007D2B0:
    // 0x8007D2B0: b           L_8007D2B8
    // 0x8007D2B4: nop

        goto L_8007D2B8;
    // 0x8007D2B4: nop

L_8007D2B8:
    // 0x8007D2B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D2BC: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8007D2C0: jr          $ra
    // 0x8007D2C4: nop

    return;
    // 0x8007D2C4: nop

;}
RECOMP_FUNC void func_800C16BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C16BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C16C0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C16C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C16C8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C16CC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C16D0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C16D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C16D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C16DC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C16E0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C16E4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C16E8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C16EC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C16F0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C16F4: nop

    // 0x800C16F8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C16FC: nop

    // 0x800C1700: bne         $t1, $zero, L_800C1754
    if (ctx->r9 != 0) {
        // 0x800C1704: nop
    
            goto L_800C1754;
    }
    // 0x800C1704: nop

    // 0x800C1708: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C170C: nop

    // 0x800C1710: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C1714: nop

    // 0x800C1718: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C171C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C1720: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C1724: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C1728: nop

    // 0x800C172C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800C1730: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1734: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1738: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    // 0x800C173C: jal         0x80029EF8
    // 0x800C1740: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    func_80029EF8(rdram, ctx);
        goto after_0;
    // 0x800C1740: lui         $a2, 0x3F40
    ctx->r6 = S32(0X3F40 << 16);
    after_0:
    // 0x800C1744: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1748: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C174C: jal         0x8001BBDC
    // 0x800C1750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800C1750: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_800C1754:
    // 0x800C1754: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C1758: nop

    // 0x800C175C: lwc1        $f6, 0x28($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X28);
    // 0x800C1760: nop

    // 0x800C1764: swc1        $f6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f6.u32l;
    // 0x800C1768: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800C176C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C1770: nop

    // 0x800C1774: swc1        $f8, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f8.u32l;
    // 0x800C1778: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C177C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1780: jal         0x80029C40
    // 0x800C1784: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800C1784: nop

    after_2:
    // 0x800C1788: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800C178C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x800C1790: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1794: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1798: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800C179C: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800C17A0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C17A4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C17A8: jal         0x80029018
    // 0x800C17AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800C17AC: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_3:
    // 0x800C17B0: beq         $v0, $zero, L_800C17D8
    if (ctx->r2 == 0) {
        // 0x800C17B4: nop
    
            goto L_800C17D8;
    }
    // 0x800C17B4: nop

    // 0x800C17B8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800C17BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800C17C0: nop

    // 0x800C17C4: swc1        $f18, 0x24($t8)
    MEM_W(0X24, ctx->r24) = ctx->f18.u32l;
    // 0x800C17C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800C17CC: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C17D0: nop

    // 0x800C17D4: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
L_800C17D8:
    // 0x800C17D8: lwc1        $f6, 0x20($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X20);
    // 0x800C17DC: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C17E0: nop

    // 0x800C17E4: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
    // 0x800C17E8: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x800C17EC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C17F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C17F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C17F8: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800C17FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800C1800: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800C1804: jal         0x80029F58
    // 0x800C1808: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    func_80029F58(rdram, ctx);
        goto after_4;
    // 0x800C1808: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x800C180C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C1810: bne         $v0, $at, L_800C1864
    if (ctx->r2 != ctx->r1) {
        // 0x800C1814: nop
    
            goto L_800C1864;
    }
    // 0x800C1814: nop

    // 0x800C1818: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C181C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1820: jal         0x8001B44C
    // 0x800C1824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_5;
    // 0x800C1824: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
    // 0x800C1828: beq         $v0, $zero, L_800C1864
    if (ctx->r2 == 0) {
        // 0x800C182C: nop
    
            goto L_800C1864;
    }
    // 0x800C182C: nop

    // 0x800C1830: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C1834: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x800C1838: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
    // 0x800C183C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1840: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1844: jal         0x8001BBDC
    // 0x800C1848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x800C1848: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
    // 0x800C184C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C1850: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x800C1854: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x800C1858: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C185C: nop

    // 0x800C1860: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800C1864:
    // 0x800C1864: b           L_800C186C
    // 0x800C1868: nop

        goto L_800C186C;
    // 0x800C1868: nop

L_800C186C:
    // 0x800C186C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C1870: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C1874: jr          $ra
    // 0x800C1878: nop

    return;
    // 0x800C1878: nop

;}
RECOMP_FUNC void func_80075D68(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80075D68: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80075D6C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80075D70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80075D74: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80075D78: nop

    // 0x80075D7C: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80075D80: nop

    // 0x80075D84: swc1        $f4, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f4.u32l;
    // 0x80075D88: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80075D8C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80075D90: nop

    // 0x80075D94: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80075D98: nop

    // 0x80075D9C: swc1        $f6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f6.u32l;
    // 0x80075DA0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80075DA4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80075DA8: nop

    // 0x80075DAC: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80075DB0: nop

    // 0x80075DB4: swc1        $f8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f8.u32l;
    // 0x80075DB8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80075DBC: nop

    // 0x80075DC0: swc1        $f10, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f10.u32l;
    // 0x80075DC4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80075DC8: nop

    // 0x80075DCC: swc1        $f16, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f16.u32l;
    // 0x80075DD0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80075DD4: nop

    // 0x80075DD8: swc1        $f18, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f18.u32l;
    // 0x80075DDC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80075DE0: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80075DE4: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x80075DE8: bne         $t9, $at, L_80075E74
    if (ctx->r25 != ctx->r1) {
        // 0x80075DEC: nop
    
            goto L_80075E74;
    }
    // 0x80075DEC: nop

    // 0x80075DF0: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80075DF4: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80075DF8: lh          $t1, 0x1304($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X1304);
    // 0x80075DFC: nop

    // 0x80075E00: beq         $t1, $zero, L_80075E50
    if (ctx->r9 == 0) {
        // 0x80075E04: nop
    
            goto L_80075E50;
    }
    // 0x80075E04: nop

    // 0x80075E08: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80075E0C: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80075E10: lwc1        $f4, 0x1260($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X1260);
    // 0x80075E14: nop

    // 0x80075E18: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x80075E1C: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x80075E20: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80075E24: lui         $at, 0x4352
    ctx->r1 = S32(0X4352 << 16);
    // 0x80075E28: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075E2C: lwc1        $f6, 0x1264($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X1264);
    // 0x80075E30: nop

    // 0x80075E34: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x80075E38: swc1        $f10, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f10.u32l;
    // 0x80075E3C: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80075E40: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x80075E44: lwc1        $f16, 0x1268($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X1268);
    // 0x80075E48: b           L_80075E74
    // 0x80075E4C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
        goto L_80075E74;
    // 0x80075E4C: swc1        $f16, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f16.u32l;
L_80075E50:
    // 0x80075E50: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80075E54: nop

    // 0x80075E58: swc1        $f18, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f18.u32l;
    // 0x80075E5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80075E60: nop

    // 0x80075E64: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x80075E68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80075E6C: nop

    // 0x80075E70: swc1        $f6, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->f6.u32l;
L_80075E74:
    // 0x80075E74: lwc1        $f8, 0x3C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x80075E78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075E7C: swc1        $f8, 0x75A8($at)
    MEM_W(0X75A8, ctx->r1) = ctx->f8.u32l;
    // 0x80075E80: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80075E84: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075E88: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80075E8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075E90: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80075E94: swc1        $f18, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f18.u32l;
    // 0x80075E98: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80075E9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075EA0: swc1        $f4, 0x75B8($at)
    MEM_W(0X75B8, ctx->r1) = ctx->f4.u32l;
    // 0x80075EA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075EA8: lwc1        $f6, 0x75A8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x80075EAC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80075EB0: nop

    // 0x80075EB4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80075EB8: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80075EBC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075EC0: lwc1        $f16, 0x75B0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75B0);
    // 0x80075EC4: lwc1        $f18, 0x2C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80075EC8: nop

    // 0x80075ECC: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80075ED0: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x80075ED4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075ED8: lwc1        $f6, 0x75B8($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80075EDC: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x80075EE0: nop

    // 0x80075EE4: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80075EE8: swc1        $f10, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f10.u32l;
    // 0x80075EEC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80075EF0: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80075EF4: jal         0x80015634
    // 0x80075EF8: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x80075EF8: nop

    after_0:
    // 0x80075EFC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80075F00: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075F04: nop

    // 0x80075F08: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80075F0C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80075F10: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80075F14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075F18: swc1        $f4, 0x75C8($at)
    MEM_W(0X75C8, ctx->r1) = ctx->f4.u32l;
    // 0x80075F1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075F20: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80075F24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075F28: lwc1        $f14, 0x75C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x80075F2C: jal         0x80015538
    // 0x80075F30: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80075F30: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x80075F34: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x80075F38: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80075F3C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075F40: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80075F44: nop

    // 0x80075F48: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80075F4C: nop

    // 0x80075F50: bc1f        L_80075F80
    if (!c1cs) {
        // 0x80075F54: nop
    
            goto L_80075F80;
    }
    // 0x80075F54: nop

    // 0x80075F58: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80075F5C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075F60: nop

    // 0x80075F64: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80075F68: nop

    // 0x80075F6C: bc1f        L_80075F80
    if (!c1cs) {
        // 0x80075F70: nop
    
            goto L_80075F80;
    }
    // 0x80075F70: nop

    // 0x80075F74: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x80075F78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80075F7C: sb          $t5, 0x75F8($at)
    MEM_B(0X75F8, ctx->r1) = ctx->r13;
L_80075F80:
    // 0x80075F80: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80075F84: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80075F88: jal         0x800155A8
    // 0x80075F8C: nop

    Math_CalcAngle2D(rdram, ctx);
        goto after_2;
    // 0x80075F8C: nop

    after_2:
    // 0x80075F90: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80075F94: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80075F98: nop

    // 0x80075F9C: sub.s       $f18, $f16, $f0
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f0.fl;
    // 0x80075FA0: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80075FA4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80075FA8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80075FAC: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80075FB0: nop

    // 0x80075FB4: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80075FB8: nop

    // 0x80075FBC: bc1f        L_80075FFC
    if (!c1cs) {
        // 0x80075FC0: nop
    
            goto L_80075FFC;
    }
    // 0x80075FC0: nop

    // 0x80075FC4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80075FC8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80075FCC: nop

    // 0x80075FD0: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80075FD4: nop

    // 0x80075FD8: bc1f        L_80075FFC
    if (!c1cs) {
        // 0x80075FDC: nop
    
            goto L_80075FFC;
    }
    // 0x80075FDC: nop

    // 0x80075FE0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80075FE4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80075FE8: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80075FEC: nop

    // 0x80075FF0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x80075FF4: b           L_80076050
    // 0x80075FF8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
        goto L_80076050;
    // 0x80075FF8: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
L_80075FFC:
    // 0x80075FFC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80076000: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80076004: lwc1        $f8, 0x18($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80076008: nop

    // 0x8007600C: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80076010: nop

    // 0x80076014: bc1f        L_80076050
    if (!c1cs) {
        // 0x80076018: nop
    
            goto L_80076050;
    }
    // 0x80076018: nop

    // 0x8007601C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80076020: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80076024: nop

    // 0x80076028: c.le.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl <= ctx->f6.fl;
    // 0x8007602C: nop

    // 0x80076030: bc1f        L_80076050
    if (!c1cs) {
        // 0x80076034: nop
    
            goto L_80076050;
    }
    // 0x80076034: nop

    // 0x80076038: lui         $at, 0x4407
    ctx->r1 = S32(0X4407 << 16);
    // 0x8007603C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80076040: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80076044: nop

    // 0x80076048: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8007604C: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
L_80076050:
    // 0x80076050: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80076054: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80076058: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8007605C: nop

    // 0x80076060: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80076064: nop

    // 0x80076068: bc1f        L_8007609C
    if (!c1cs) {
        // 0x8007606C: nop
    
            goto L_8007609C;
    }
    // 0x8007606C: nop

    // 0x80076070: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80076074: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80076078: nop

    // 0x8007607C: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80076080: nop

    // 0x80076084: bc1f        L_8007609C
    if (!c1cs) {
        // 0x80076088: nop
    
            goto L_8007609C;
    }
    // 0x80076088: nop

    // 0x8007608C: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80076090: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80076094: b           L_800760E8
    // 0x80076098: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
        goto L_800760E8;
    // 0x80076098: swc1        $f10, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f10.u32l;
L_8007609C:
    // 0x8007609C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x800760A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800760A4: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800760A8: nop

    // 0x800760AC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x800760B0: nop

    // 0x800760B4: bc1f        L_800760E8
    if (!c1cs) {
        // 0x800760B8: nop
    
            goto L_800760E8;
    }
    // 0x800760B8: nop

    // 0x800760BC: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800760C0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800760C4: nop

    // 0x800760C8: c.le.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl <= ctx->f8.fl;
    // 0x800760CC: nop

    // 0x800760D0: bc1f        L_800760E8
    if (!c1cs) {
        // 0x800760D4: nop
    
            goto L_800760E8;
    }
    // 0x800760D4: nop

    // 0x800760D8: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x800760DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800760E0: nop

    // 0x800760E4: swc1        $f4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f4.u32l;
L_800760E8:
    // 0x800760E8: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x800760EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800760F0: swc1        $f6, 0x75C0($at)
    MEM_W(0X75C0, ctx->r1) = ctx->f6.u32l;
    // 0x800760F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800760F8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800760FC: nop

    // 0x80076100: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80076104: nop

    // 0x80076108: beq         $t7, $zero, L_80076118
    if (ctx->r15 == 0) {
        // 0x8007610C: nop
    
            goto L_80076118;
    }
    // 0x8007610C: nop

    // 0x80076110: b           L_8007614C
    // 0x80076114: nop

        goto L_8007614C;
    // 0x80076114: nop

L_80076118:
    // 0x80076118: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007611C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80076120: addiu       $at, $zero, 0x25
    ctx->r1 = ADD32(0, 0X25);
    // 0x80076124: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80076128: nop

    // 0x8007612C: bne         $t9, $at, L_80076144
    if (ctx->r25 != ctx->r1) {
        // 0x80076130: nop
    
            goto L_80076144;
    }
    // 0x80076130: nop

    // 0x80076134: jal         0x80071CF4
    // 0x80076138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80071CF4(rdram, ctx);
        goto after_3;
    // 0x80076138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x8007613C: b           L_8007614C
    // 0x80076140: nop

        goto L_8007614C;
    // 0x80076140: nop

L_80076144:
    // 0x80076144: jal         0x80071CF4
    // 0x80076148: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80071CF4(rdram, ctx);
        goto after_4;
    // 0x80076148: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_4:
L_8007614C:
    // 0x8007614C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076150: lwc1        $f12, -0x1EBC($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EBC);
    // 0x80076154: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076158: lwc1        $f14, 0x75B0($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75B0);
    // 0x8007615C: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x80076160: jal         0x80071A88
    // 0x80076164: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    func_80071A88(rdram, ctx);
        goto after_5;
    // 0x80076164: addiu       $a2, $a2, 0x75EF
    ctx->r6 = ADD32(ctx->r6, 0X75EF);
    after_5:
    // 0x80076168: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007616C: swc1        $f0, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f0.u32l;
    // 0x80076170: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076174: lwc1        $f10, 0x75A8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X75A8);
    // 0x80076178: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007617C: swc1        $f10, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f10.u32l;
    // 0x80076180: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076184: lwc1        $f18, 0x75B8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X75B8);
    // 0x80076188: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007618C: swc1        $f18, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f18.u32l;
    // 0x80076190: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80076194: lwc1        $f16, 0x75D8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X75D8);
    // 0x80076198: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007619C: swc1        $f16, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f16.u32l;
    // 0x800761A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800761A4: lwc1        $f8, 0x75C0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X75C0);
    // 0x800761A8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800761AC: swc1        $f8, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f8.u32l;
    // 0x800761B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800761B4: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x800761B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800761BC: lwc1        $f14, 0x75C8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X75C8);
    // 0x800761C0: lui         $a2, 0x8017
    ctx->r6 = S32(0X8017 << 16);
    // 0x800761C4: jal         0x80071A88
    // 0x800761C8: addiu       $a2, $a2, 0x75F8
    ctx->r6 = ADD32(ctx->r6, 0X75F8);
    func_80071A88(rdram, ctx);
        goto after_6;
    // 0x800761C8: addiu       $a2, $a2, 0x75F8
    ctx->r6 = ADD32(ctx->r6, 0X75F8);
    after_6:
    // 0x800761CC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800761D0: swc1        $f0, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f0.u32l;
    // 0x800761D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800761D8: lwc1        $f4, 0x75D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75D0);
    // 0x800761DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800761E0: swc1        $f4, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f4.u32l;
    // 0x800761E4: b           L_800761EC
    // 0x800761E8: nop

        goto L_800761EC;
    // 0x800761E8: nop

L_800761EC:
    // 0x800761EC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800761F0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x800761F4: jr          $ra
    // 0x800761F8: nop

    return;
    // 0x800761F8: nop

;}
RECOMP_FUNC void func_800CA2D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CA2D4: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800CA2D8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800CA2DC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CA2E0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CA2E4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CA2E8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CA2EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA2F0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CA2F4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CA2F8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CA2FC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CA300: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CA304: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x800CA308: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA30C: nop

    // 0x800CA310: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CA314: nop

    // 0x800CA318: bne         $t1, $zero, L_800CA3A0
    if (ctx->r9 != 0) {
        // 0x800CA31C: nop
    
            goto L_800CA3A0;
    }
    // 0x800CA31C: nop

    // 0x800CA320: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA324: nop

    // 0x800CA328: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CA32C: nop

    // 0x800CA330: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CA334: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CA338: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA33C: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800CA340: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x800CA344: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800CA348: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CA34C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA350: nop

    // 0x800CA354: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x800CA358: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA35C: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800CA360: addiu       $t8, $t8, -0x7E10
    ctx->r24 = ADD32(ctx->r24, -0X7E10);
    // 0x800CA364: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA368: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800CA36C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800CA370: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800CA374: jal         0x8001C0EC
    // 0x800CA378: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800CA378: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_0:
    // 0x800CA37C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA380: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x800CA384: addiu       $t9, $t9, -0x7E00
    ctx->r25 = ADD32(ctx->r25, -0X7E00);
    // 0x800CA388: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA38C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x800CA390: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CA394: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800CA398: jal         0x8001C0EC
    // 0x800CA39C: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800CA39C: addiu       $a3, $zero, 0x68
    ctx->r7 = ADD32(0, 0X68);
    after_1:
L_800CA3A0:
    // 0x800CA3A0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800CA3A4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA3A8: nop

    // 0x800CA3AC: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
    // 0x800CA3B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA3B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA3B8: jal         0x80029C40
    // 0x800CA3BC: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800CA3BC: nop

    after_2:
    // 0x800CA3C0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800CA3C4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800CA3C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA3CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA3D0: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800CA3D4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800CA3D8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800CA3DC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800CA3E0: jal         0x80029018
    // 0x800CA3E4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800CA3E4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800CA3E8: beq         $v0, $zero, L_800CA408
    if (ctx->r2 == 0) {
        // 0x800CA3EC: nop
    
            goto L_800CA408;
    }
    // 0x800CA3EC: nop

    // 0x800CA3F0: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA3F4: addiu       $t1, $zero, 0x5
    ctx->r9 = ADD32(0, 0X5);
    // 0x800CA3F8: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x800CA3FC: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA400: nop

    // 0x800CA404: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800CA408:
    // 0x800CA408: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA40C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA410: jal         0x8001B62C
    // 0x800CA414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_4;
    // 0x800CA414: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800CA418: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800CA41C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800CA420: nop

    // 0x800CA424: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x800CA428: nop

    // 0x800CA42C: bc1f        L_800CA474
    if (!c1cs) {
        // 0x800CA430: nop
    
            goto L_800CA474;
    }
    // 0x800CA430: nop

    // 0x800CA434: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA438: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800CA43C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800CA440: lwc1        $f18, 0x0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X0);
    // 0x800CA444: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x800CA448: lw          $a3, 0x4($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X4);
    // 0x800CA44C: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x800CA450: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800CA454: lwc1        $f10, 0x1C($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x800CA458: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x800CA45C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800CA460: addiu       $a1, $a1, 0x3FDC
    ctx->r5 = ADD32(ctx->r5, 0X3FDC);
    // 0x800CA464: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800CA468: jal         0x80027464
    // 0x800CA46C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80027464(rdram, ctx);
        goto after_5;
    // 0x800CA46C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800CA470: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
L_800CA474:
    // 0x800CA474: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CA478: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CA47C: jal         0x8001B44C
    // 0x800CA480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x800CA480: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x800CA484: beq         $v0, $zero, L_800CA4D4
    if (ctx->r2 == 0) {
        // 0x800CA488: nop
    
            goto L_800CA4D4;
    }
    // 0x800CA488: nop

    // 0x800CA48C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA490: nop

    // 0x800CA494: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800CA498: nop

    // 0x800CA49C: bne         $t6, $zero, L_800CA4BC
    if (ctx->r14 != 0) {
        // 0x800CA4A0: nop
    
            goto L_800CA4BC;
    }
    // 0x800CA4A0: nop

    // 0x800CA4A4: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA4A8: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800CA4AC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x800CA4B0: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA4B4: b           L_800CA4D4
    // 0x800CA4B8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_800CA4D4;
    // 0x800CA4B8: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_800CA4BC:
    // 0x800CA4BC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x800CA4C0: nop

    // 0x800CA4C4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x800CA4C8: nop

    // 0x800CA4CC: addiu       $t3, $t1, -0x1
    ctx->r11 = ADD32(ctx->r9, -0X1);
    // 0x800CA4D0: sh          $t3, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r11;
L_800CA4D4:
    // 0x800CA4D4: b           L_800CA4DC
    // 0x800CA4D8: nop

        goto L_800CA4DC;
    // 0x800CA4D8: nop

L_800CA4DC:
    // 0x800CA4DC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800CA4E0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x800CA4E4: jr          $ra
    // 0x800CA4E8: nop

    return;
    // 0x800CA4E8: nop

;}
RECOMP_FUNC void func_800722FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800722FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80072300: lbu         $t6, 0x76DC($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76DC);
    // 0x80072304: nop

    // 0x80072308: beq         $t6, $zero, L_80072348
    if (ctx->r14 == 0) {
        // 0x8007230C: nop
    
            goto L_80072348;
    }
    // 0x8007230C: nop

    // 0x80072310: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072314: sb          $zero, 0x76DC($at)
    MEM_B(0X76DC, ctx->r1) = 0;
    // 0x80072318: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007231C: lwc1        $f4, 0x76C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X76C8);
    // 0x80072320: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072324: swc1        $f4, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f4.u32l;
    // 0x80072328: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8007232C: lwc1        $f6, 0x76D0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X76D0);
    // 0x80072330: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072334: swc1        $f6, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f6.u32l;
    // 0x80072338: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007233C: lbu         $t7, 0x76D8($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76D8);
    // 0x80072340: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072344: sb          $t7, 0x7974($at)
    MEM_B(0X7974, ctx->r1) = ctx->r15;
L_80072348:
    // 0x80072348: jr          $ra
    // 0x8007234C: nop

    return;
    // 0x8007234C: nop

    // 0x80072350: jr          $ra
    // 0x80072354: nop

    return;
    // 0x80072354: nop

;}
RECOMP_FUNC void func_800BB6BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BB6BC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800BB6C0: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800BB6C4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BB6C8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800BB6CC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BB6D0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800BB6D4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800BB6D8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800BB6DC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800BB6E0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800BB6E4: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x800BB6E8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800BB6EC: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x800BB6F0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BB6F4: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x800BB6F8: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800BB6FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800BB700: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x800BB704: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x800BB708: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800BB70C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800BB710: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800BB714: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x800BB718: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800BB71C: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x800BB720: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BB724: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800BB728: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x800BB72C: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800BB730: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800BB734: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
    // 0x800BB738: jr          $ra
    // 0x800BB73C: nop

    return;
    // 0x800BB73C: nop

    // 0x800BB740: jr          $ra
    // 0x800BB744: nop

    return;
    // 0x800BB744: nop

;}
RECOMP_FUNC void Demo_HandlePrintText(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8005C2BC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8005C2C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8005C2C4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x8005C2C8: lw          $t6, 0x47E8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X47E8);
    // 0x8005C2CC: nop

    // 0x8005C2D0: bne         $t6, $zero, L_8005C2E0
    if (ctx->r14 != 0) {
        // 0x8005C2D4: nop
    
            goto L_8005C2E0;
    }
    // 0x8005C2D4: nop

    // 0x8005C2D8: b           L_8005C428
    // 0x8005C2DC: nop

        goto L_8005C428;
    // 0x8005C2DC: nop

L_8005C2E0:
    // 0x8005C2E0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8005C2E4: lh          $t7, 0x47F0($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X47F0);
    // 0x8005C2E8: nop

    // 0x8005C2EC: beq         $t7, $zero, L_8005C2FC
    if (ctx->r15 == 0) {
        // 0x8005C2F0: nop
    
            goto L_8005C2FC;
    }
    // 0x8005C2F0: nop

    // 0x8005C2F4: jal         0x8005BAD0
    // 0x8005C2F8: nop

    Demo_RenderTextBG(rdram, ctx);
        goto after_0;
    // 0x8005C2F8: nop

    after_0:
L_8005C2FC:
    // 0x8005C2FC: jal         0x8005BC50
    // 0x8005C300: nop

    Demo_SetupTextPal(rdram, ctx);
        goto after_1;
    // 0x8005C300: nop

    after_1:
    // 0x8005C304: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x8005C308: lh          $t8, 0x47EC($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X47EC);
    // 0x8005C30C: nop

    // 0x8005C310: sh          $t8, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r24;
    // 0x8005C314: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8005C318: lh          $t9, 0x47EE($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X47EE);
    // 0x8005C31C: nop

    // 0x8005C320: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
    // 0x8005C324: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x8005C328: lw          $t0, 0x47E8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X47E8);
    // 0x8005C32C: nop

    // 0x8005C330: lh          $t1, 0x8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X8);
    // 0x8005C334: nop

    // 0x8005C338: sh          $t1, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r9;
    // 0x8005C33C: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x8005C340: lw          $t2, 0x47E8($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X47E8);
    // 0x8005C344: nop

    // 0x8005C348: addiu       $t3, $t2, 0xC
    ctx->r11 = ADD32(ctx->r10, 0XC);
    // 0x8005C34C: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_8005C350:
    // 0x8005C350: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8005C354: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8005C358: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8005C35C: nop

    // 0x8005C360: bne         $t5, $at, L_8005C3B0
    if (ctx->r13 != ctx->r1) {
        // 0x8005C364: nop
    
            goto L_8005C3B0;
    }
    // 0x8005C364: nop

    // 0x8005C368: lh          $t6, 0x22($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X22);
    // 0x8005C36C: nop

    // 0x8005C370: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x8005C374: sh          $t7, 0x22($sp)
    MEM_H(0X22, ctx->r29) = ctx->r15;
    // 0x8005C378: lh          $t8, 0x22($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X22);
    // 0x8005C37C: nop

    // 0x8005C380: bne         $t8, $zero, L_8005C390
    if (ctx->r24 != 0) {
        // 0x8005C384: nop
    
            goto L_8005C390;
    }
    // 0x8005C384: nop

    // 0x8005C388: b           L_8005C420
    // 0x8005C38C: nop

        goto L_8005C420;
    // 0x8005C38C: nop

L_8005C390:
    // 0x8005C390: lh          $t9, 0x1E($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X1E);
    // 0x8005C394: nop

    // 0x8005C398: addiu       $t0, $t9, 0x10
    ctx->r8 = ADD32(ctx->r25, 0X10);
    // 0x8005C39C: sh          $t0, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r8;
    // 0x8005C3A0: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8005C3A4: lh          $t1, 0x47EC($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X47EC);
    // 0x8005C3A8: b           L_8005C408
    // 0x8005C3AC: sh          $t1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r9;
        goto L_8005C408;
    // 0x8005C3AC: sh          $t1, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r9;
L_8005C3B0:
    // 0x8005C3B0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x8005C3B4: lh          $a0, 0x20($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X20);
    // 0x8005C3B8: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x8005C3BC: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x8005C3C0: bgez        $t3, L_8005C3D4
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8005C3C4: andi        $a2, $t3, 0x1F
        ctx->r6 = ctx->r11 & 0X1F;
            goto L_8005C3D4;
    }
    // 0x8005C3C4: andi        $a2, $t3, 0x1F
    ctx->r6 = ctx->r11 & 0X1F;
    // 0x8005C3C8: beq         $a2, $zero, L_8005C3D4
    if (ctx->r6 == 0) {
        // 0x8005C3CC: nop
    
            goto L_8005C3D4;
    }
    // 0x8005C3CC: nop

    // 0x8005C3D0: addiu       $a2, $a2, -0x20
    ctx->r6 = ADD32(ctx->r6, -0X20);
L_8005C3D4:
    // 0x8005C3D4: sll         $t4, $a2, 3
    ctx->r12 = S32(ctx->r6 << 3);
    // 0x8005C3D8: or          $a2, $t4, $zero
    ctx->r6 = ctx->r12 | 0;
    // 0x8005C3DC: bgez        $t3, L_8005C3EC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8005C3E0: sra         $a3, $t3, 5
        ctx->r7 = S32(SIGNED(ctx->r11) >> 5);
            goto L_8005C3EC;
    }
    // 0x8005C3E0: sra         $a3, $t3, 5
    ctx->r7 = S32(SIGNED(ctx->r11) >> 5);
    // 0x8005C3E4: addiu       $at, $t3, 0x1F
    ctx->r1 = ADD32(ctx->r11, 0X1F);
    // 0x8005C3E8: sra         $a3, $at, 5
    ctx->r7 = S32(SIGNED(ctx->r1) >> 5);
L_8005C3EC:
    // 0x8005C3EC: sll         $t5, $a3, 4
    ctx->r13 = S32(ctx->r7 << 4);
    // 0x8005C3F0: jal         0x8005BF70
    // 0x8005C3F4: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    Demo_RenderChar(rdram, ctx);
        goto after_2;
    // 0x8005C3F4: or          $a3, $t5, $zero
    ctx->r7 = ctx->r13 | 0;
    after_2:
    // 0x8005C3F8: lh          $t6, 0x20($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X20);
    // 0x8005C3FC: nop

    // 0x8005C400: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8005C404: sh          $t7, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r15;
L_8005C408:
    // 0x8005C408: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8005C40C: nop

    // 0x8005C410: addiu       $t9, $t8, 0x2
    ctx->r25 = ADD32(ctx->r24, 0X2);
    // 0x8005C414: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8005C418: b           L_8005C350
    // 0x8005C41C: nop

        goto L_8005C350;
    // 0x8005C41C: nop

L_8005C420:
    // 0x8005C420: b           L_8005C428
    // 0x8005C424: nop

        goto L_8005C428;
    // 0x8005C424: nop

L_8005C428:
    // 0x8005C428: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8005C42C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8005C430: jr          $ra
    // 0x8005C434: nop

    return;
    // 0x8005C434: nop

;}
RECOMP_FUNC void func_800C4040(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C4040: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C4044: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C4048: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800C404C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C4050: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C4054: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800C4058: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C405C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4060: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C4064: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C4068: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C406C: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800C4070: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800C4074: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800C4078: beq         $s0, $at, L_800C40AC
    if (ctx->r16 == ctx->r1) {
        // 0x800C407C: nop
    
            goto L_800C40AC;
    }
    // 0x800C407C: nop

    // 0x800C4080: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800C4084: beq         $s0, $at, L_800C40BC
    if (ctx->r16 == ctx->r1) {
        // 0x800C4088: nop
    
            goto L_800C40BC;
    }
    // 0x800C4088: nop

    // 0x800C408C: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800C4090: beq         $s0, $at, L_800C40CC
    if (ctx->r16 == ctx->r1) {
        // 0x800C4094: nop
    
            goto L_800C40CC;
    }
    // 0x800C4094: nop

    // 0x800C4098: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800C409C: beq         $s0, $at, L_800C40DC
    if (ctx->r16 == ctx->r1) {
        // 0x800C40A0: nop
    
            goto L_800C40DC;
    }
    // 0x800C40A0: nop

    // 0x800C40A4: b           L_800C40EC
    // 0x800C40A8: nop

        goto L_800C40EC;
    // 0x800C40A8: nop

L_800C40AC:
    // 0x800C40AC: jal         0x800C3A00
    // 0x800C40B0: nop

    func_800C3A00(rdram, ctx);
        goto after_0;
    // 0x800C40B0: nop

    after_0:
    // 0x800C40B4: b           L_800C40F4
    // 0x800C40B8: nop

        goto L_800C40F4;
    // 0x800C40B8: nop

L_800C40BC:
    // 0x800C40BC: jal         0x800C3C10
    // 0x800C40C0: nop

    func_800C3C10(rdram, ctx);
        goto after_1;
    // 0x800C40C0: nop

    after_1:
    // 0x800C40C4: b           L_800C40F4
    // 0x800C40C8: nop

        goto L_800C40F4;
    // 0x800C40C8: nop

L_800C40CC:
    // 0x800C40CC: jal         0x800C3E18
    // 0x800C40D0: nop

    func_800C3E18(rdram, ctx);
        goto after_2;
    // 0x800C40D0: nop

    after_2:
    // 0x800C40D4: b           L_800C40F4
    // 0x800C40D8: nop

        goto L_800C40F4;
    // 0x800C40D8: nop

L_800C40DC:
    // 0x800C40DC: jal         0x800C3F00
    // 0x800C40E0: nop

    func_800C3F00(rdram, ctx);
        goto after_3;
    // 0x800C40E0: nop

    after_3:
    // 0x800C40E4: b           L_800C40F4
    // 0x800C40E8: nop

        goto L_800C40F4;
    // 0x800C40E8: nop

L_800C40EC:
    // 0x800C40EC: b           L_800C40F4
    // 0x800C40F0: nop

        goto L_800C40F4;
    // 0x800C40F0: nop

L_800C40F4:
    // 0x800C40F4: b           L_800C40FC
    // 0x800C40F8: nop

        goto L_800C40FC;
    // 0x800C40F8: nop

L_800C40FC:
    // 0x800C40FC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C4100: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800C4104: jr          $ra
    // 0x800C4108: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800C4108: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80096254(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096254: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80096258: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009625C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80096260: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80096264: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80096268: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009626C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096270: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096278: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009627C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80096280: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80096284: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80096288: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8009628C: nop

    // 0x80096290: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80096294: nop

    // 0x80096298: bne         $t1, $zero, L_800962E0
    if (ctx->r9 != 0) {
        // 0x8009629C: nop
    
            goto L_800962E0;
    }
    // 0x8009629C: nop

    // 0x800962A0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800962A4: nop

    // 0x800962A8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800962AC: nop

    // 0x800962B0: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800962B4: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800962B8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800962BC: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x800962C0: sh          $t5, 0x108($t6)
    MEM_H(0X108, ctx->r14) = ctx->r13;
    // 0x800962C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800962C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800962CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800962D0: addiu       $a2, $zero, 0x61
    ctx->r6 = ADD32(0, 0X61);
    // 0x800962D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800962D8: jal         0x800175F0
    // 0x800962DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_0;
    // 0x800962DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
L_800962E0:
    // 0x800962E0: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800962E4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800962E8: lh          $t8, 0x108($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X108);
    // 0x800962EC: nop

    // 0x800962F0: bne         $t8, $at, L_80096338
    if (ctx->r24 != ctx->r1) {
        // 0x800962F4: nop
    
            goto L_80096338;
    }
    // 0x800962F4: nop

    // 0x800962F8: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800962FC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80096300: lh          $t0, 0xA6($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA6);
    // 0x80096304: addiu       $t3, $t3, 0x65D8
    ctx->r11 = ADD32(ctx->r11, 0X65D8);
    // 0x80096308: sll         $t1, $t0, 1
    ctx->r9 = S32(ctx->r8 << 1);
    // 0x8009630C: addu        $t4, $t1, $t3
    ctx->r12 = ADD32(ctx->r9, ctx->r11);
    // 0x80096310: lbu         $t2, 0x1($t4)
    ctx->r10 = MEM_BU(ctx->r12, 0X1);
    // 0x80096314: nop

    // 0x80096318: xori        $t5, $t2, 0x1
    ctx->r13 = ctx->r10 ^ 0X1;
    // 0x8009631C: sb          $t5, 0x1($t4)
    MEM_B(0X1, ctx->r12) = ctx->r13;
    // 0x80096320: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80096324: jal         0x8009612C
    // 0x80096328: nop

    func_8009612C(rdram, ctx);
        goto after_1;
    // 0x80096328: nop

    after_1:
    // 0x8009632C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80096330: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80096334: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
L_80096338:
    // 0x80096338: b           L_80096340
    // 0x8009633C: nop

        goto L_80096340;
    // 0x8009633C: nop

L_80096340:
    // 0x80096340: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096344: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80096348: jr          $ra
    // 0x8009634C: nop

    return;
    // 0x8009634C: nop

;}
RECOMP_FUNC void func_80096F88(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80096F88: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80096F8C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80096F90: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80096F94: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80096F98: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80096F9C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096FA0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80096FA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80096FA8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80096FAC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80096FB0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80096FB4: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80096FB8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80096FBC: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80096FC0: nop

    // 0x80096FC4: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x80096FC8: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80096FCC: nop

    // 0x80096FD0: lwc1        $f12, 0x2C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80096FD4: nop

    // 0x80096FD8: swc1        $f12, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f12.u32l;
    // 0x80096FDC: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80096FE0: nop

    // 0x80096FE4: swc1        $f12, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f12.u32l;
    // 0x80096FE8: b           L_80096FF0
    // 0x80096FEC: nop

        goto L_80096FF0;
    // 0x80096FEC: nop

L_80096FF0:
    // 0x80096FF0: jr          $ra
    // 0x80096FF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80096FF4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800C1380(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1380: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C1384: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800C1388: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800C138C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800C1390: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800C1394: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800C1398: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800C139C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800C13A0: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800C13A4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800C13A8: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800C13AC: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800C13B0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800C13B4: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800C13B8: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800C13BC: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800C13C0: addiu       $a1, $a1, 0x3ED4
    ctx->r5 = ADD32(ctx->r5, 0X3ED4);
    // 0x800C13C4: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800C13C8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800C13CC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800C13D0: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800C13D4: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800C13D8: jal         0x80027464
    // 0x800C13DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800C13DC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800C13E0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800C13E4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C13E8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800C13EC: beq         $t1, $at, L_800C1478
    if (ctx->r9 == ctx->r1) {
        // 0x800C13F0: nop
    
            goto L_800C1478;
    }
    // 0x800C13F0: nop

    // 0x800C13F4: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C13F8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C13FC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800C1400: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C1404: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800C1408: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800C140C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800C1410: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800C1414: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C1418: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800C141C: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x800C1420: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800C1424: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C1428: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x800C142C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C1430: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800C1434: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800C1438: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800C143C: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800C1440: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C1444: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800C1448: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x800C144C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C1450: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x800C1454: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800C1458: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C145C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800C1460: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800C1464: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800C1468: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800C146C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800C1470: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800C1474: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
L_800C1478:
    // 0x800C1478: b           L_800C1480
    // 0x800C147C: nop

        goto L_800C1480;
    // 0x800C147C: nop

L_800C1480:
    // 0x800C1480: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800C1484: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C1488: jr          $ra
    // 0x800C148C: nop

    return;
    // 0x800C148C: nop

;}
RECOMP_FUNC void func_800A6A5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A6A5C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800A6A60: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800A6A64: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800A6A68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A6A6C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A6A70: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800A6A74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A6A78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A6A7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A6A80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A6A84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A6A88: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800A6A8C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800A6A90: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800A6A94: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800A6A98: nop

    // 0x800A6A9C: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800A6AA0: nop

    // 0x800A6AA4: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x800A6AA8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800A6AAC: nop

    // 0x800A6AB0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800A6AB4: nop

    // 0x800A6AB8: bne         $t3, $zero, L_800A6B88
    if (ctx->r11 != 0) {
        // 0x800A6ABC: nop
    
            goto L_800A6B88;
    }
    // 0x800A6ABC: nop

    // 0x800A6AC0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800A6AC4: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A6AC8: nop

    // 0x800A6ACC: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800A6AD0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800A6AD4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800A6AD8: nop

    // 0x800A6ADC: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800A6AE0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A6AE4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800A6AE8: sb          $t6, 0x132($t7)
    MEM_B(0X132, ctx->r15) = ctx->r14;
    // 0x800A6AEC: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800A6AF0: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x800A6AF4: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x800A6AF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6AFC: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x800A6B00: addiu       $t0, $t0, 0x7088
    ctx->r8 = ADD32(ctx->r8, 0X7088);
    // 0x800A6B04: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6B08: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x800A6B0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6B10: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x800A6B14: jal         0x8001C0EC
    // 0x800A6B18: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800A6B18: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_0:
    // 0x800A6B1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6B20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6B24: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A6B28: addiu       $a3, $a3, 0x7178
    ctx->r7 = ADD32(ctx->r7, 0X7178);
    // 0x800A6B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6B30: jal         0x8001ABF4
    // 0x800A6B34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800A6B34: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800A6B38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6B3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6B40: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A6B44: addiu       $a3, $a3, 0x7194
    ctx->r7 = ADD32(ctx->r7, 0X7194);
    // 0x800A6B48: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A6B4C: jal         0x8001ABF4
    // 0x800A6B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800A6B50: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x800A6B54: lh          $t1, 0x32($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X32);
    // 0x800A6B58: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A6B5C: beq         $t1, $at, L_800A6B88
    if (ctx->r9 == ctx->r1) {
        // 0x800A6B60: nop
    
            goto L_800A6B88;
    }
    // 0x800A6B60: nop

    // 0x800A6B64: lh          $t2, 0x32($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X32);
    // 0x800A6B68: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A6B6C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800A6B70: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A6B74: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800A6B78: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800A6B7C: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800A6B80: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800A6B84: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_800A6B88:
    // 0x800A6B88: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A6B8C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6B90: lh          $s0, 0x108($t4)
    ctx->r16 = MEM_H(ctx->r12, 0X108);
    // 0x800A6B94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6B98: andi        $t5, $s0, 0x1
    ctx->r13 = ctx->r16 & 0X1;
    // 0x800A6B9C: or          $s0, $t5, $zero
    ctx->r16 = ctx->r13 | 0;
    // 0x800A6BA0: sltiu       $t6, $s0, 0x1
    ctx->r14 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800A6BA4: or          $s0, $t6, $zero
    ctx->r16 = ctx->r14 | 0;
    // 0x800A6BA8: jal         0x8001BB34
    // 0x800A6BAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x800A6BAC: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x800A6BB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6BB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6BB8: jal         0x80029C40
    // 0x800A6BBC: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x800A6BBC: nop

    after_4:
    // 0x800A6BC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6BC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6BC8: jal         0x80029D04
    // 0x800A6BCC: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800A6BCC: nop

    after_5:
    // 0x800A6BD0: lh          $t7, 0x32($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X32);
    // 0x800A6BD4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A6BD8: beq         $t7, $at, L_800A6C08
    if (ctx->r15 == ctx->r1) {
        // 0x800A6BDC: nop
    
            goto L_800A6C08;
    }
    // 0x800A6BDC: nop

    // 0x800A6BE0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800A6BE4: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800A6BE8: lh          $s0, 0x108($t8)
    ctx->r16 = MEM_H(ctx->r24, 0X108);
    // 0x800A6BEC: nop

    // 0x800A6BF0: andi        $t9, $s0, 0x1
    ctx->r25 = ctx->r16 & 0X1;
    // 0x800A6BF4: or          $s0, $t9, $zero
    ctx->r16 = ctx->r25 | 0;
    // 0x800A6BF8: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800A6BFC: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x800A6C00: jal         0x8001BB34
    // 0x800A6C04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_6;
    // 0x800A6C04: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_6:
L_800A6C08:
    // 0x800A6C08: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800A6C0C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A6C10: lh          $t2, 0x108($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X108);
    // 0x800A6C14: nop

    // 0x800A6C18: bne         $t2, $at, L_800A6CF4
    if (ctx->r10 != ctx->r1) {
        // 0x800A6C1C: nop
    
            goto L_800A6CF4;
    }
    // 0x800A6C1C: nop

    // 0x800A6C20: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800A6C24: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x800A6C28: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
    // 0x800A6C2C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800A6C30: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800A6C34: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800A6C38: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800A6C3C: nop

    // 0x800A6C40: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800A6C44: lh          $t8, 0x32($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X32);
    // 0x800A6C48: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800A6C4C: beq         $t8, $at, L_800A6C88
    if (ctx->r24 == ctx->r1) {
        // 0x800A6C50: nop
    
            goto L_800A6C88;
    }
    // 0x800A6C50: nop

    // 0x800A6C54: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x800A6C58: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800A6C5C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800A6C60: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A6C64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800A6C68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800A6C6C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800A6C70: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800A6C74: addiu       $t9, $zero, -0x1
    ctx->r25 = ADD32(0, -0X1);
    // 0x800A6C78: sh          $t9, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r25;
    // 0x800A6C7C: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x800A6C80: jal         0x8001BB34
    // 0x800A6C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_7;
    // 0x800A6C84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_7:
L_800A6C88:
    // 0x800A6C88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6C8C: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x800A6C90: addiu       $t2, $t2, 0x7088
    ctx->r10 = ADD32(ctx->r10, 0X7088);
    // 0x800A6C94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6C98: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x800A6C9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6CA0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800A6CA4: jal         0x8001C0EC
    // 0x800A6CA8: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    func_8001C0EC(rdram, ctx);
        goto after_8;
    // 0x800A6CA8: addiu       $a3, $zero, 0x75
    ctx->r7 = ADD32(0, 0X75);
    after_8:
    // 0x800A6CAC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6CB0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6CB4: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A6CB8: addiu       $a3, $a3, 0x7108
    ctx->r7 = ADD32(ctx->r7, 0X7108);
    // 0x800A6CBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800A6CC0: jal         0x8001ABF4
    // 0x800A6CC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_9;
    // 0x800A6CC4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_9:
    // 0x800A6CC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6CCC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6CD0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800A6CD4: addiu       $a3, $a3, 0x7124
    ctx->r7 = ADD32(ctx->r7, 0X7124);
    // 0x800A6CD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800A6CDC: jal         0x8001ABF4
    // 0x800A6CE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_10;
    // 0x800A6CE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_10:
    // 0x800A6CE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800A6CE8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800A6CEC: jal         0x8001BB34
    // 0x800A6CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_11;
    // 0x800A6CF0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
L_800A6CF4:
    // 0x800A6CF4: b           L_800A6CFC
    // 0x800A6CF8: nop

        goto L_800A6CFC;
    // 0x800A6CF8: nop

L_800A6CFC:
    // 0x800A6CFC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800A6D00: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800A6D04: jr          $ra
    // 0x800A6D08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800A6D08: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800B5074_1(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B5064: jr          $ra
    // 0x800B5068: nop

    return;
    // 0x800B5068: nop

    // 0x800B506C: jr          $ra
    // 0x800B5070: nop

    return;
    // 0x800B5070: nop

;}
RECOMP_FUNC void func_800E816C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E816C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E8170: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E8174: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E8178: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E817C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E8180: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E8184: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8188: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E818C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E8190: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E8194: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E8198: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E819C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E81A0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E81A4: nop

    // 0x800E81A8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E81AC: nop

    // 0x800E81B0: bne         $t1, $zero, L_800E8208
    if (ctx->r9 != 0) {
        // 0x800E81B4: nop
    
            goto L_800E8208;
    }
    // 0x800E81B4: nop

    // 0x800E81B8: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E81BC: nop

    // 0x800E81C0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E81C4: nop

    // 0x800E81C8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E81CC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E81D0: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E81D4: nop

    // 0x800E81D8: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E81DC: nop

    // 0x800E81E0: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E81E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E81E8: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E81EC: addiu       $t7, $t7, -0x6730
    ctx->r15 = ADD32(ctx->r15, -0X6730);
    // 0x800E81F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E81F4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E81F8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E81FC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800E8200: jal         0x8001C0EC
    // 0x800E8204: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E8204: addiu       $a3, $zero, 0xB5
    ctx->r7 = ADD32(0, 0XB5);
    after_0:
L_800E8208:
    // 0x800E8208: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E820C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E8210: jal         0x8002A1FC
    // 0x800E8214: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_1;
    // 0x800E8214: lui         $a1, 0x43F0
    ctx->r5 = S32(0X43F0 << 16);
    after_1:
    // 0x800E8218: beq         $v0, $zero, L_800E8238
    if (ctx->r2 == 0) {
        // 0x800E821C: nop
    
            goto L_800E8238;
    }
    // 0x800E821C: nop

    // 0x800E8220: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E8224: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x800E8228: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x800E822C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E8230: nop

    // 0x800E8234: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800E8238:
    // 0x800E8238: b           L_800E8240
    // 0x800E823C: nop

        goto L_800E8240;
    // 0x800E823C: nop

L_800E8240:
    // 0x800E8240: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E8244: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E8248: jr          $ra
    // 0x800E824C: nop

    return;
    // 0x800E824C: nop

;}
RECOMP_FUNC void func_800BD164(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BD164: jr          $ra
    // 0x800BD168: nop

    return;
    // 0x800BD168: nop

    // 0x800BD16C: jr          $ra
    // 0x800BD170: nop

    return;
    // 0x800BD170: nop

;}
RECOMP_FUNC void func_800F9098(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9098: jr          $ra
    // 0x800F909C: nop

    return;
    // 0x800F909C: nop

    // 0x800F90A0: jr          $ra
    // 0x800F90A4: nop

    return;
    // 0x800F90A4: nop

;}
RECOMP_FUNC void func_8009878C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009878C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80098790: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80098794: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80098798: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009879C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800987A0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800987A4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800987A8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800987AC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800987B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800987B4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800987B8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800987BC: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800987C0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800987C4: nop

    // 0x800987C8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800987CC: nop

    // 0x800987D0: bne         $t1, $zero, L_8009884C
    if (ctx->r9 != 0) {
        // 0x800987D4: nop
    
            goto L_8009884C;
    }
    // 0x800987D4: nop

    // 0x800987D8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800987DC: nop

    // 0x800987E0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800987E4: nop

    // 0x800987E8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800987EC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800987F0: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800987F4: addiu       $at, $zero, 0x194
    ctx->r1 = ADD32(0, 0X194);
    // 0x800987F8: lh          $t6, 0xE4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE4);
    // 0x800987FC: nop

    // 0x80098800: bne         $t6, $at, L_8009882C
    if (ctx->r14 != ctx->r1) {
        // 0x80098804: nop
    
            goto L_8009882C;
    }
    // 0x80098804: nop

    // 0x80098808: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8009880C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80098810: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80098814: addiu       $a3, $a3, 0x6D78
    ctx->r7 = ADD32(ctx->r7, 0X6D78);
    // 0x80098818: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8009881C: jal         0x8001ABF4
    // 0x80098820: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80098820: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_0:
    // 0x80098824: b           L_8009884C
    // 0x80098828: nop

        goto L_8009884C;
    // 0x80098828: nop

L_8009882C:
    // 0x8009882C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80098830: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x80098834: addiu       $a3, $a3, 0x6D78
    ctx->r7 = ADD32(ctx->r7, 0X6D78);
    // 0x80098838: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009883C: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80098840: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80098844: jal         0x8001ABF4
    // 0x80098848: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80098848: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_1:
L_8009884C:
    // 0x8009884C: b           L_80098854
    // 0x80098850: nop

        goto L_80098854;
    // 0x80098850: nop

L_80098854:
    // 0x80098854: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80098858: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009885C: jr          $ra
    // 0x80098860: nop

    return;
    // 0x80098860: nop

;}
RECOMP_FUNC void func_800B1B7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B1B7C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800B1B80: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800B1B84: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800B1B88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B1B8C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B1B90: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B1B94: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B1B98: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1B9C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B1BA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1BA4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B1BA8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800B1BAC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800B1BB0: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x800B1BB4: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B1BB8: nop

    // 0x800B1BBC: lh          $t1, 0xE8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XE8);
    // 0x800B1BC0: nop

    // 0x800B1BC4: sh          $t1, 0x32($sp)
    MEM_H(0X32, ctx->r29) = ctx->r9;
    // 0x800B1BC8: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B1BCC: nop

    // 0x800B1BD0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800B1BD4: nop

    // 0x800B1BD8: bne         $t3, $zero, L_800B1CB0
    if (ctx->r11 != 0) {
        // 0x800B1BDC: nop
    
            goto L_800B1CB0;
    }
    // 0x800B1BDC: nop

    // 0x800B1BE0: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B1BE4: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800B1BE8: sb          $t4, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r12;
    // 0x800B1BEC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800B1BF0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B1BF4: nop

    // 0x800B1BF8: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x800B1BFC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800B1C00: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B1C04: nop

    // 0x800B1C08: swc1        $f6, 0x48($t7)
    MEM_W(0X48, ctx->r15) = ctx->f6.u32l;
    // 0x800B1C0C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B1C10: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800B1C14: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x800B1C18: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B1C1C: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800B1C20: sh          $t0, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r8;
    // 0x800B1C24: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1C28: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1C2C: jal         0x8001BBDC
    // 0x800B1C30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800B1C30: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800B1C34: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B1C38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1C3C: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800B1C40: addiu       $t3, $t3, 0x7884
    ctx->r11 = ADD32(ctx->r11, 0X7884);
    // 0x800B1C44: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1C48: lh          $a2, 0xAA($t2)
    ctx->r6 = MEM_H(ctx->r10, 0XAA);
    // 0x800B1C4C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800B1C50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B1C54: jal         0x8001C0EC
    // 0x800B1C58: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x800B1C58: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_1:
    // 0x800B1C5C: lh          $t4, 0x32($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X32);
    // 0x800B1C60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800B1C64: beq         $t4, $at, L_800B1C94
    if (ctx->r12 == ctx->r1) {
        // 0x800B1C68: nop
    
            goto L_800B1C94;
    }
    // 0x800B1C68: nop

    // 0x800B1C6C: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x800B1C70: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800B1C74: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B1C78: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1C7C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B1C80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B1C84: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B1C88: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800B1C8C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800B1C90: sh          $t5, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = ctx->r13;
L_800B1C94:
    // 0x800B1C94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1C98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1C9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B1CA0: addiu       $a2, $zero, 0x13
    ctx->r6 = ADD32(0, 0X13);
    // 0x800B1CA4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800B1CA8: jal         0x800175F0
    // 0x800B1CAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x800B1CAC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_800B1CB0:
    // 0x800B1CB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1CB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1CB8: jal         0x80029C40
    // 0x800B1CBC: nop

    func_80029C40(rdram, ctx);
        goto after_3;
    // 0x800B1CBC: nop

    after_3:
    // 0x800B1CC0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1CC4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1CC8: jal         0x80029D04
    // 0x800B1CCC: nop

    func_80029D04(rdram, ctx);
        goto after_4;
    // 0x800B1CCC: nop

    after_4:
    // 0x800B1CD0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B1CD4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B1CD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1CDC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1CE0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800B1CE4: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800B1CE8: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800B1CEC: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800B1CF0: jal         0x80029018
    // 0x800B1CF4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800B1CF4: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800B1CF8: beq         $v0, $zero, L_800B1D1C
    if (ctx->r2 == 0) {
        // 0x800B1CFC: nop
    
            goto L_800B1D1C;
    }
    // 0x800B1CFC: nop

    // 0x800B1D00: jal         0x800297DC
    // 0x800B1D04: nop

    func_800297DC(rdram, ctx);
        goto after_6;
    // 0x800B1D04: nop

    after_6:
    // 0x800B1D08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1D0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1D10: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B1D14: jal         0x80029824
    // 0x800B1D18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_7;
    // 0x800B1D18: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_7:
L_800B1D1C:
    // 0x800B1D1C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B1D20: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800B1D24: lh          $t9, 0xB4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB4);
    // 0x800B1D28: nop

    // 0x800B1D2C: bne         $t9, $at, L_800B1D98
    if (ctx->r25 != ctx->r1) {
        // 0x800B1D30: nop
    
            goto L_800B1D98;
    }
    // 0x800B1D30: nop

    // 0x800B1D34: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B1D38: lui         $at, 0xC470
    ctx->r1 = S32(0XC470 << 16);
    // 0x800B1D3C: lwc1        $f16, 0x8($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X8);
    // 0x800B1D40: lwc1        $f18, 0x2C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x800B1D44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B1D48: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B1D4C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800B1D50: nop

    // 0x800B1D54: bc1f        L_800B1D98
    if (!c1cs) {
        // 0x800B1D58: nop
    
            goto L_800B1D98;
    }
    // 0x800B1D58: nop

    // 0x800B1D5C: jal         0x800297DC
    // 0x800B1D60: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x800B1D60: nop

    after_8:
    // 0x800B1D64: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1D68: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1D6C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B1D70: jal         0x80029824
    // 0x800B1D74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x800B1D74: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x800B1D78: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B1D7C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B1D80: nop

    // 0x800B1D84: swc1        $f8, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f8.u32l;
    // 0x800B1D88: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B1D8C: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B1D90: nop

    // 0x800B1D94: swc1        $f10, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->f10.u32l;
L_800B1D98:
    // 0x800B1D98: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B1D9C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800B1DA0: lh          $t4, 0xB4($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB4);
    // 0x800B1DA4: nop

    // 0x800B1DA8: bne         $t4, $at, L_800B1E14
    if (ctx->r12 != ctx->r1) {
        // 0x800B1DAC: nop
    
            goto L_800B1E14;
    }
    // 0x800B1DAC: nop

    // 0x800B1DB0: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B1DB4: lui         $at, 0xC516
    ctx->r1 = S32(0XC516 << 16);
    // 0x800B1DB8: lwc1        $f16, 0x8($t6)
    ctx->f16.u32l = MEM_W(ctx->r14, 0X8);
    // 0x800B1DBC: lwc1        $f18, 0x2C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800B1DC0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B1DC4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x800B1DC8: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x800B1DCC: nop

    // 0x800B1DD0: bc1f        L_800B1E14
    if (!c1cs) {
        // 0x800B1DD4: nop
    
            goto L_800B1E14;
    }
    // 0x800B1DD4: nop

    // 0x800B1DD8: jal         0x800297DC
    // 0x800B1DDC: nop

    func_800297DC(rdram, ctx);
        goto after_10;
    // 0x800B1DDC: nop

    after_10:
    // 0x800B1DE0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1DE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1DE8: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800B1DEC: jal         0x80029824
    // 0x800B1DF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_11;
    // 0x800B1DF0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x800B1DF4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800B1DF8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B1DFC: nop

    // 0x800B1E00: swc1        $f8, 0x24($t5)
    MEM_W(0X24, ctx->r13) = ctx->f8.u32l;
    // 0x800B1E04: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800B1E08: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B1E0C: nop

    // 0x800B1E10: swc1        $f10, 0x2C($t7)
    MEM_W(0X2C, ctx->r15) = ctx->f10.u32l;
L_800B1E14:
    // 0x800B1E14: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1E18: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1E1C: jal         0x8001B44C
    // 0x800B1E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_12;
    // 0x800B1E20: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x800B1E24: beq         $v0, $zero, L_800B1F90
    if (ctx->r2 == 0) {
        // 0x800B1E28: nop
    
            goto L_800B1F90;
    }
    // 0x800B1E28: nop

    // 0x800B1E2C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B1E30: nop

    // 0x800B1E34: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x800B1E38: nop

    // 0x800B1E3C: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800B1E40: sh          $t0, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r8;
    // 0x800B1E44: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x800B1E48: nop

    // 0x800B1E4C: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x800B1E50: nop

    // 0x800B1E54: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x800B1E58: sh          $t3, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r11;
    // 0x800B1E5C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B1E60: nop

    // 0x800B1E64: lh          $t6, 0xAA($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XAA);
    // 0x800B1E68: nop

    // 0x800B1E6C: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x800B1E70: bne         $at, $zero, L_800B1E9C
    if (ctx->r1 != 0) {
        // 0x800B1E74: nop
    
            goto L_800B1E9C;
    }
    // 0x800B1E74: nop

    // 0x800B1E78: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x800B1E7C: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800B1E80: sh          $t5, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r13;
    // 0x800B1E84: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B1E88: nop

    // 0x800B1E8C: sh          $zero, 0xAA($t9)
    MEM_H(0XAA, ctx->r25) = 0;
    // 0x800B1E90: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x800B1E94: nop

    // 0x800B1E98: sb          $zero, 0x132($t0)
    MEM_B(0X132, ctx->r8) = 0;
L_800B1E9C:
    // 0x800B1E9C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x800B1EA0: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800B1EA4: lh          $t2, 0xAA($t8)
    ctx->r10 = MEM_H(ctx->r24, 0XAA);
    // 0x800B1EA8: nop

    // 0x800B1EAC: bne         $t2, $at, L_800B1F00
    if (ctx->r10 != ctx->r1) {
        // 0x800B1EB0: nop
    
            goto L_800B1F00;
    }
    // 0x800B1EB0: nop

    // 0x800B1EB4: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800B1EB8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x800B1EBC: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800B1EC0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B1EC4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B1EC8: lwc1        $f16, 0x4($t3)
    ctx->f16.u32l = MEM_W(ctx->r11, 0X4);
    // 0x800B1ECC: nop

    // 0x800B1ED0: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800B1ED4: mfc1        $t4, $f18
    ctx->r12 = (int32_t)ctx->f18.u32l;
    // 0x800B1ED8: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x800B1EDC: sh          $t4, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r12;
    // 0x800B1EE0: nop

    // 0x800B1EE4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x800B1EE8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x800B1EEC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800B1EF0: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x800B1EF4: nop

    // 0x800B1EF8: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x800B1EFC: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
L_800B1F00:
    // 0x800B1F00: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x800B1F04: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800B1F08: lh          $t7, 0xAA($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XAA);
    // 0x800B1F0C: nop

    // 0x800B1F10: bne         $t7, $at, L_800B1F68
    if (ctx->r15 != ctx->r1) {
        // 0x800B1F14: nop
    
            goto L_800B1F68;
    }
    // 0x800B1F14: nop

    // 0x800B1F18: cfc1        $t0, $FpcCsr
    ctx->r8 = get_cop1_cs();
    // 0x800B1F1C: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x800B1F20: ori         $at, $t0, 0x3
    ctx->r1 = ctx->r8 | 0X3;
    // 0x800B1F24: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800B1F28: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800B1F2C: lwc1        $f10, 0x4($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800B1F30: nop

    // 0x800B1F34: cvt.w.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_S(ctx->f10.fl);
    // 0x800B1F38: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x800B1F3C: ctc1        $t0, $FpcCsr
    set_cop1_cs(ctx->r8);
    // 0x800B1F40: sh          $t8, 0xAE($t9)
    MEM_H(0XAE, ctx->r25) = ctx->r24;
    // 0x800B1F44: nop

    // 0x800B1F48: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x800B1F4C: nop

    // 0x800B1F50: lh          $t1, 0xAE($t2)
    ctx->r9 = MEM_H(ctx->r10, 0XAE);
    // 0x800B1F54: nop

    // 0x800B1F58: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x800B1F5C: nop

    // 0x800B1F60: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x800B1F64: swc1        $f4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f4.u32l;
L_800B1F68:
    // 0x800B1F68: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x800B1F6C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800B1F70: lui         $t3, 0x8011
    ctx->r11 = S32(0X8011 << 16);
    // 0x800B1F74: addiu       $t3, $t3, 0x7884
    ctx->r11 = ADD32(ctx->r11, 0X7884);
    // 0x800B1F78: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800B1F7C: lh          $a2, 0xAA($t4)
    ctx->r6 = MEM_H(ctx->r12, 0XAA);
    // 0x800B1F80: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x800B1F84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800B1F88: jal         0x8001C0EC
    // 0x800B1F8C: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    func_8001C0EC(rdram, ctx);
        goto after_13;
    // 0x800B1F8C: addiu       $a3, $zero, 0xA2
    ctx->r7 = ADD32(0, 0XA2);
    after_13:
L_800B1F90:
    // 0x800B1F90: b           L_800B1F98
    // 0x800B1F94: nop

        goto L_800B1F98;
    // 0x800B1F94: nop

L_800B1F98:
    // 0x800B1F98: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800B1F9C: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800B1FA0: jr          $ra
    // 0x800B1FA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800B1FA4: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_800A1018(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800A1018: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800A101C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800A1020: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800A1024: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800A1028: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800A102C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800A1030: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800A1034: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1038: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800A103C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800A1040: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800A1044: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800A1048: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800A104C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800A1050: beq         $s0, $at, L_800A1078
    if (ctx->r16 == ctx->r1) {
        // 0x800A1054: nop
    
            goto L_800A1078;
    }
    // 0x800A1054: nop

    // 0x800A1058: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800A105C: beq         $s0, $at, L_800A1088
    if (ctx->r16 == ctx->r1) {
        // 0x800A1060: nop
    
            goto L_800A1088;
    }
    // 0x800A1060: nop

    // 0x800A1064: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800A1068: beq         $s0, $at, L_800A1098
    if (ctx->r16 == ctx->r1) {
        // 0x800A106C: nop
    
            goto L_800A1098;
    }
    // 0x800A106C: nop

    // 0x800A1070: b           L_800A10A8
    // 0x800A1074: nop

        goto L_800A10A8;
    // 0x800A1074: nop

L_800A1078:
    // 0x800A1078: jal         0x800A0D3C
    // 0x800A107C: nop

    func_800A0D3C(rdram, ctx);
        goto after_0;
    // 0x800A107C: nop

    after_0:
    // 0x800A1080: b           L_800A10A8
    // 0x800A1084: nop

        goto L_800A10A8;
    // 0x800A1084: nop

L_800A1088:
    // 0x800A1088: jal         0x800A0DAC
    // 0x800A108C: nop

    func_800A0DAC(rdram, ctx);
        goto after_1;
    // 0x800A108C: nop

    after_1:
    // 0x800A1090: b           L_800A10A8
    // 0x800A1094: nop

        goto L_800A10A8;
    // 0x800A1094: nop

L_800A1098:
    // 0x800A1098: jal         0x800A0FA8
    // 0x800A109C: nop

    func_800A0FA8(rdram, ctx);
        goto after_2;
    // 0x800A109C: nop

    after_2:
    // 0x800A10A0: b           L_800A10A8
    // 0x800A10A4: nop

        goto L_800A10A8;
    // 0x800A10A4: nop

L_800A10A8:
    // 0x800A10A8: b           L_800A10B0
    // 0x800A10AC: nop

        goto L_800A10B0;
    // 0x800A10AC: nop

L_800A10B0:
    // 0x800A10B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800A10B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800A10B8: jr          $ra
    // 0x800A10BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800A10BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B954C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B954C: jr          $ra
    // 0x800B9550: nop

    return;
    // 0x800B9550: nop

    // 0x800B9554: jr          $ra
    // 0x800B9558: nop

    return;
    // 0x800B9558: nop

;}
RECOMP_FUNC void func_800F9CB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F9CB8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800F9CBC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800F9CC0: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800F9CC4: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800F9CC8: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800F9CCC: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800F9CD0: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800F9CD4: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800F9CD8: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800F9CDC: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800F9CE0: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800F9CE4: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800F9CE8: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800F9CEC: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800F9CF0: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800F9CF4: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800F9CF8: addiu       $a1, $a1, 0x37F0
    ctx->r5 = ADD32(ctx->r5, 0X37F0);
    // 0x800F9CFC: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800F9D00: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800F9D04: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800F9D08: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800F9D0C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800F9D10: jal         0x80027464
    // 0x800F9D14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800F9D14: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800F9D18: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x800F9D1C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x800F9D20: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800F9D24: beq         $t1, $at, L_800F9DC8
    if (ctx->r9 == ctx->r1) {
        // 0x800F9D28: nop
    
            goto L_800F9DC8;
    }
    // 0x800F9D28: nop

    // 0x800F9D2C: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x800F9D30: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800F9D34: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800F9D38: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F9D3C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800F9D40: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800F9D44: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800F9D48: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800F9D4C: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x800F9D50: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x800F9D54: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x800F9D58: lw          $t7, 0x5100($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5100);
    // 0x800F9D5C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800F9D60: lh          $t8, 0x0($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X0);
    // 0x800F9D64: nop

    // 0x800F9D68: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
    // 0x800F9D6C: lui         $a0, 0x8016
    ctx->r4 = S32(0X8016 << 16);
    // 0x800F9D70: lw          $a0, 0x519C($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X519C);
    // 0x800F9D74: jal         0x80026260
    // 0x800F9D78: nop

    func_80026260(rdram, ctx);
        goto after_1;
    // 0x800F9D78: nop

    after_1:
    // 0x800F9D7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800F9D80: bne         $v0, $at, L_800F9DC8
    if (ctx->r2 != ctx->r1) {
        // 0x800F9D84: nop
    
            goto L_800F9DC8;
    }
    // 0x800F9D84: nop

    // 0x800F9D88: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800F9D8C: addiu       $at, $zero, 0x4F
    ctx->r1 = ADD32(0, 0X4F);
    // 0x800F9D90: lh          $t0, 0xE4($t6)
    ctx->r8 = MEM_H(ctx->r14, 0XE4);
    // 0x800F9D94: nop

    // 0x800F9D98: bne         $t0, $at, L_800F9DB0
    if (ctx->r8 != ctx->r1) {
        // 0x800F9D9C: nop
    
            goto L_800F9DB0;
    }
    // 0x800F9D9C: nop

    // 0x800F9DA0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800F9DA4: addiu       $t1, $zero, 0x50
    ctx->r9 = ADD32(0, 0X50);
    // 0x800F9DA8: b           L_800F9DBC
    // 0x800F9DAC: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
        goto L_800F9DBC;
    // 0x800F9DAC: sh          $t1, 0xE4($t2)
    MEM_H(0XE4, ctx->r10) = ctx->r9;
L_800F9DB0:
    // 0x800F9DB0: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800F9DB4: addiu       $t3, $zero, 0x4F
    ctx->r11 = ADD32(0, 0X4F);
    // 0x800F9DB8: sh          $t3, 0xE4($t4)
    MEM_H(0XE4, ctx->r12) = ctx->r11;
L_800F9DBC:
    // 0x800F9DBC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800F9DC0: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x800F9DC4: sh          $t5, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r13;
L_800F9DC8:
    // 0x800F9DC8: b           L_800F9DD0
    // 0x800F9DCC: nop

        goto L_800F9DD0;
    // 0x800F9DCC: nop

L_800F9DD0:
    // 0x800F9DD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800F9DD4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800F9DD8: jr          $ra
    // 0x800F9DDC: nop

    return;
    // 0x800F9DDC: nop

;}
RECOMP_FUNC void func_800F103C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F103C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800F1040: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800F1044: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F1048: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800F104C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800F1050: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800F1054: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1058: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800F105C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800F1060: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800F1064: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800F1068: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800F106C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800F1070: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1074: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1078: jal         0x800281A4
    // 0x800F107C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x800F107C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800F1080: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x800F1084: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x800F1088: jal         0x8002B114
    // 0x800F108C: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x800F108C: nop

    after_1:
    // 0x800F1090: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800F1094: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800F1098: jal         0x8002B0E4
    // 0x800F109C: nop

    func_8002B0E4(rdram, ctx);
        goto after_2;
    // 0x800F109C: nop

    after_2:
    // 0x800F10A0: b           L_800F10A8
    // 0x800F10A4: nop

        goto L_800F10A8;
    // 0x800F10A4: nop

L_800F10A8:
    // 0x800F10A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800F10AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800F10B0: jr          $ra
    // 0x800F10B4: nop

    return;
    // 0x800F10B4: nop

;}
RECOMP_FUNC void func_800956F0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800956F0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x800956F4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x800956F8: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800956FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80095700: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80095704: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80095708: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009570C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095710: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80095714: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095718: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009571C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095720: lbu         $t8, 0x4282($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4282);
    // 0x80095724: nop

    // 0x80095728: bne         $t8, $zero, L_80095864
    if (ctx->r24 != 0) {
        // 0x8009572C: nop
    
            goto L_80095864;
    }
    // 0x8009572C: nop

    // 0x80095730: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80095734: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80095738: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009573C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80095740: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80095744: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80095748: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8009574C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80095750: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80095754: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80095758: sb          $t9, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r25;
    // 0x8009575C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80095760: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80095764: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095768: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8009576C: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80095770: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80095774: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80095778: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8009577C: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80095780: sh          $zero, 0x41F8($at)
    MEM_H(0X41F8, ctx->r1) = 0;
    // 0x80095784: jal         0x80014E80
    // 0x80095788: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80095788: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x8009578C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80095790: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x80095794: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80095798: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x8009579C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800957A0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800957A4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800957A8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x800957AC: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x800957B0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800957B4: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x800957B8: swc1        $f6, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f6.u32l;
    // 0x800957BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800957C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800957C4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800957C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800957CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800957D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800957D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800957D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800957DC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800957E0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800957E4: swc1        $f8, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f8.u32l;
    // 0x800957E8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800957EC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800957F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800957F4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x800957F8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x800957FC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80095800: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80095804: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80095808: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009580C: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80095810: swc1        $f10, 0x4190($at)
    MEM_W(0X4190, ctx->r1) = ctx->f10.u32l;
    // 0x80095814: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80095818: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8009581C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80095820: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80095824: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80095828: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8009582C: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80095830: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80095834: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095838: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009583C: swc1        $f16, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f16.u32l;
    // 0x80095840: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095844: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x80095848: addiu       $t2, $t2, -0x4720
    ctx->r10 = ADD32(ctx->r10, -0X4720);
    // 0x8009584C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095850: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80095854: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80095858: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8009585C: jal         0x8001C0EC
    // 0x80095860: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80095860: addiu       $a3, $zero, 0x47
    ctx->r7 = ADD32(0, 0X47);
    after_1:
L_80095864:
    // 0x80095864: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095868: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8009586C: jal         0x80028FA0
    // 0x80095870: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x80095870: nop

    after_2:
    // 0x80095874: beq         $v0, $zero, L_8009588C
    if (ctx->r2 == 0) {
        // 0x80095878: nop
    
            goto L_8009588C;
    }
    // 0x80095878: nop

    // 0x8009587C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095884: jal         0x80029B60
    // 0x80095888: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x80095888: nop

    after_3:
L_8009588C:
    // 0x8009588C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095890: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095894: jal         0x80029C40
    // 0x80095898: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80095898: nop

    after_4:
    // 0x8009589C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800958A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800958A4: jal         0x80029D04
    // 0x800958A8: nop

    func_80029D04(rdram, ctx);
        goto after_5;
    // 0x800958A8: nop

    after_5:
    // 0x800958AC: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x800958B0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800958B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800958B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800958BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800958C0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x800958C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800958C8: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x800958CC: jal         0x80029018
    // 0x800958D0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_6;
    // 0x800958D0: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_6:
    // 0x800958D4: beq         $v0, $zero, L_80095978
    if (ctx->r2 == 0) {
        // 0x800958D8: nop
    
            goto L_80095978;
    }
    // 0x800958D8: nop

    // 0x800958DC: jal         0x800297DC
    // 0x800958E0: nop

    func_800297DC(rdram, ctx);
        goto after_7;
    // 0x800958E0: nop

    after_7:
    // 0x800958E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800958E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800958EC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x800958F0: jal         0x80029824
    // 0x800958F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_8;
    // 0x800958F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800958F8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x800958FC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80095900: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80095904: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80095908: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8009590C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80095910: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80095914: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80095918: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8009591C: lh          $t5, 0x41F6($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X41F6);
    // 0x80095920: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80095924: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x80095928: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8009592C: jal         0x80015538
    // 0x80095930: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x80095930: cvt.s.w     $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    ctx->f12.fl = CVT_S_W(ctx->f6.u32l);
    after_9:
    // 0x80095934: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80095938: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8009593C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80095940: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80095944: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80095948: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8009594C: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80095950: cvt.w.s     $f8, $f0
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 0);
    ctx->f8.u32l = CVT_W_S(ctx->f0.fl);
    // 0x80095954: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80095958: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8009595C: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80095960: mfc1        $t7, $f8
    ctx->r15 = (int32_t)ctx->f8.u32l;
    // 0x80095964: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80095968: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8009596C: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80095970: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80095974: sh          $t7, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r15;
L_80095978:
    // 0x80095978: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8009597C: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x80095980: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095984: sll         $t1, $t9, 2
    ctx->r9 = S32(ctx->r25 << 2);
    // 0x80095988: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x8009598C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80095990: addu        $t1, $t1, $t9
    ctx->r9 = ADD32(ctx->r9, ctx->r25);
    // 0x80095994: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80095998: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8009599C: lwc1        $f12, 0x416C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x800959A0: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x800959A4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x800959A8: jal         0x80015538
    // 0x800959AC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x800959AC: nop

    after_10:
    // 0x800959B0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800959B4: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x800959B8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800959BC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x800959C0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800959C4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800959C8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x800959CC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800959D0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x800959D4: swc1        $f0, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f0.u32l;
    // 0x800959D8: b           L_800959E0
    // 0x800959DC: nop

        goto L_800959E0;
    // 0x800959DC: nop

L_800959E0:
    // 0x800959E0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x800959E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800959E8: jr          $ra
    // 0x800959EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x800959EC: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80079E9C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079E9C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80079EA0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079EA4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80079EA8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80079EAC: jal         0x800794C4
    // 0x80079EB0: nop

    func_800794C4(rdram, ctx);
        goto after_0;
    // 0x80079EB0: nop

    after_0:
    // 0x80079EB4: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80079EB8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80079EBC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80079EC0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80079EC4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80079EC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80079ECC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80079ED0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80079ED4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80079ED8: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80079EDC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80079EE0: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x80079EE4: lw          $a3, 0x48($t0)
    ctx->r7 = MEM_W(ctx->r8, 0X48);
    // 0x80079EE8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80079EEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80079EF0: jal         0x8001BD44
    // 0x80079EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001BD44(rdram, ctx);
        goto after_1;
    // 0x80079EF4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80079EF8: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80079EFC: lb          $t1, 0x5250($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X5250);
    // 0x80079F00: nop

    // 0x80079F04: bne         $t1, $zero, L_80079F20
    if (ctx->r9 != 0) {
        // 0x80079F08: nop
    
            goto L_80079F20;
    }
    // 0x80079F08: nop

    // 0x80079F0C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80079F10: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x80079F14: sh          $t2, 0xE4($t3)
    MEM_H(0XE4, ctx->r11) = ctx->r10;
    // 0x80079F18: b           L_80079F8C
    // 0x80079F1C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
        goto L_80079F8C;
    // 0x80079F1C: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
L_80079F20:
    // 0x80079F20: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80079F24: lb          $t4, 0x5250($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X5250);
    // 0x80079F28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80079F2C: bne         $t4, $at, L_80079F4C
    if (ctx->r12 != ctx->r1) {
        // 0x80079F30: nop
    
            goto L_80079F4C;
    }
    // 0x80079F30: nop

    // 0x80079F34: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80079F38: addiu       $t5, $zero, 0x9
    ctx->r13 = ADD32(0, 0X9);
    // 0x80079F3C: sh          $t5, 0xE4($t6)
    MEM_H(0XE4, ctx->r14) = ctx->r13;
    // 0x80079F40: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80079F44: b           L_80079F8C
    // 0x80079F48: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
        goto L_80079F8C;
    // 0x80079F48: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
L_80079F4C:
    // 0x80079F4C: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80079F50: lb          $t8, 0x5250($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X5250);
    // 0x80079F54: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80079F58: bne         $t8, $at, L_80079F78
    if (ctx->r24 != ctx->r1) {
        // 0x80079F5C: nop
    
            goto L_80079F78;
    }
    // 0x80079F5C: nop

    // 0x80079F60: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80079F64: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80079F68: sh          $t9, 0xE4($t0)
    MEM_H(0XE4, ctx->r8) = ctx->r25;
    // 0x80079F6C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80079F70: b           L_80079F8C
    // 0x80079F74: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
        goto L_80079F8C;
    // 0x80079F74: sw          $t1, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r9;
L_80079F78:
    // 0x80079F78: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80079F7C: addiu       $t2, $zero, 0xB
    ctx->r10 = ADD32(0, 0XB);
    // 0x80079F80: sh          $t2, 0xE4($t3)
    MEM_H(0XE4, ctx->r11) = ctx->r10;
    // 0x80079F84: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80079F88: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
L_80079F8C:
    // 0x80079F8C: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x80079F90: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80079F94: sll         $t6, $t5, 3
    ctx->r14 = S32(ctx->r13 << 3);
    // 0x80079F98: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x80079F9C: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80079FA0: addiu       $t7, $t7, 0x63DC
    ctx->r15 = ADD32(ctx->r15, 0X63DC);
    // 0x80079FA4: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80079FA8: addu        $a3, $t6, $t7
    ctx->r7 = ADD32(ctx->r14, ctx->r15);
    // 0x80079FAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80079FB0: jal         0x8001ABF4
    // 0x80079FB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x80079FB4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
    // 0x80079FB8: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80079FBC: addiu       $t8, $zero, 0x64
    ctx->r24 = ADD32(0, 0X64);
    // 0x80079FC0: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x80079FC4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80079FC8: addiu       $t0, $zero, 0x14
    ctx->r8 = ADD32(0, 0X14);
    // 0x80079FCC: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
    // 0x80079FD0: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80079FD4: nop

    // 0x80079FD8: sh          $zero, 0xAA($t2)
    MEM_H(0XAA, ctx->r10) = 0;
    // 0x80079FDC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80079FE0: addiu       $t3, $zero, 0xFF
    ctx->r11 = ADD32(0, 0XFF);
    // 0x80079FE4: sh          $t3, 0xAE($t4)
    MEM_H(0XAE, ctx->r12) = ctx->r11;
    // 0x80079FE8: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80079FEC: nop

    // 0x80079FF0: sh          $zero, 0xB0($t5)
    MEM_H(0XB0, ctx->r13) = 0;
    // 0x80079FF4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80079FF8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80079FFC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007A000: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x8007A004: nop

    // 0x8007A008: swc1        $f4, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f4.u32l;
    // 0x8007A00C: b           L_8007A014
    // 0x8007A010: nop

        goto L_8007A014;
    // 0x8007A010: nop

L_8007A014:
    // 0x8007A014: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007A018: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007A01C: jr          $ra
    // 0x8007A020: nop

    return;
    // 0x8007A020: nop

;}
