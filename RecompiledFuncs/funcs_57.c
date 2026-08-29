#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80281000_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281008: jal         0x80085D54
    // 0x8028100C: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x8028100C: nop

    after_0:
    // 0x80281010: beq         $v0, $zero, L_80281020
    if (ctx->r2 == 0) {
        // 0x80281014: nop
    
            goto L_80281020;
    }
    // 0x80281014: nop

    // 0x80281018: b           L_8028108C
    // 0x8028101C: nop

        goto L_8028108C;
    // 0x8028101C: nop

L_80281020:
    // 0x80281020: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80281024: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80281028: nop

    // 0x8028102C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80281030: beq         $t7, $zero, L_80281084
    if (ctx->r15 == 0) {
        // 0x80281034: nop
    
            goto L_80281084;
    }
    // 0x80281034: nop

    // 0x80281038: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028103C: lw          $t8, -0x1C10($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X1C10);
    // 0x80281040: nop

    // 0x80281044: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80281048: bne         $t9, $zero, L_80281074
    if (ctx->r25 != 0) {
        // 0x8028104C: nop
    
            goto L_80281074;
    }
    // 0x8028104C: nop

    // 0x80281050: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281054: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281058: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028105C: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80281060: nop

    // 0x80281064: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80281068: nop

    // 0x8028106C: bc1f        L_80281084
    if (!c1cs) {
        // 0x80281070: nop
    
            goto L_80281084;
    }
    // 0x80281070: nop

L_80281074:
    // 0x80281074: jal         0x80280E74
    // 0x80281078: nop

    func_80280E74_code_extra_3(rdram, ctx);
        goto after_1;
    // 0x80281078: nop

    after_1:
    // 0x8028107C: b           L_8028108C
    // 0x80281080: nop

        goto L_8028108C;
    // 0x80281080: nop

L_80281084:
    // 0x80281084: b           L_8028108C
    // 0x80281088: nop

        goto L_8028108C;
    // 0x80281088: nop

L_8028108C:
    // 0x8028108C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281090: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281094: jr          $ra
    // 0x80281098: nop

    return;
    // 0x80281098: nop

;}
RECOMP_FUNC void func_80280F70_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280F70: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280F74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280F78: jal         0x80085D54
    // 0x80280F7C: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80280F7C: nop

    after_0:
    // 0x80280F80: beq         $v0, $zero, L_80280F90
    if (ctx->r2 == 0) {
        // 0x80280F84: nop
    
            goto L_80280F90;
    }
    // 0x80280F84: nop

    // 0x80280F88: b           L_80280FF0
    // 0x80280F8C: nop

        goto L_80280FF0;
    // 0x80280F8C: nop

L_80280F90:
    // 0x80280F90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280F94: lw          $t6, -0x1C10($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1C10);
    // 0x80280F98: nop

    // 0x80280F9C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80280FA0: bne         $t7, $zero, L_80280FB8
    if (ctx->r15 != 0) {
        // 0x80280FA4: nop
    
            goto L_80280FB8;
    }
    // 0x80280FA4: nop

    // 0x80280FA8: jal         0x80280E74
    // 0x80280FAC: nop

    func_80280E74_code_extra_3(rdram, ctx);
        goto after_1;
    // 0x80280FAC: nop

    after_1:
    // 0x80280FB0: b           L_80280FF0
    // 0x80280FB4: nop

        goto L_80280FF0;
    // 0x80280FB4: nop

L_80280FB8:
    // 0x80280FB8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280FBC: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80280FC0: nop

    // 0x80280FC4: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80280FC8: beq         $t9, $zero, L_80280FE0
    if (ctx->r25 == 0) {
        // 0x80280FCC: nop
    
            goto L_80280FE0;
    }
    // 0x80280FCC: nop

    // 0x80280FD0: jal         0x80280DF8
    // 0x80280FD4: nop

    func_80280DF8_code_extra_3(rdram, ctx);
        goto after_2;
    // 0x80280FD4: nop

    after_2:
    // 0x80280FD8: b           L_80280FF0
    // 0x80280FDC: nop

        goto L_80280FF0;
    // 0x80280FDC: nop

L_80280FE0:
    // 0x80280FE0: jal         0x80280C84
    // 0x80280FE4: nop

    func_80280C84_code_extra_3(rdram, ctx);
        goto after_3;
    // 0x80280FE4: nop

    after_3:
    // 0x80280FE8: b           L_80280FF0
    // 0x80280FEC: nop

        goto L_80280FF0;
    // 0x80280FEC: nop

L_80280FF0:
    // 0x80280FF0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280FF4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280FF8: jr          $ra
    // 0x80280FFC: nop

    return;
    // 0x80280FFC: nop

;}
RECOMP_FUNC void func_802810FC_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802810FC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281100: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281104: jal         0x80085D54
    // 0x80281108: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80281108: nop

    after_0:
    // 0x8028110C: beq         $v0, $zero, L_8028111C
    if (ctx->r2 == 0) {
        // 0x80281110: nop
    
            goto L_8028111C;
    }
    // 0x80281110: nop

    // 0x80281114: b           L_80281198
    // 0x80281118: nop

        goto L_80281198;
    // 0x80281118: nop

L_8028111C:
    // 0x8028111C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281120: lw          $t6, -0x1C10($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1C10);
    // 0x80281124: nop

    // 0x80281128: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8028112C: bne         $t7, $zero, L_80281144
    if (ctx->r15 != 0) {
        // 0x80281130: nop
    
            goto L_80281144;
    }
    // 0x80281130: nop

    // 0x80281134: jal         0x80280E74
    // 0x80281138: nop

    func_80280E74_code_extra_3(rdram, ctx);
        goto after_1;
    // 0x80281138: nop

    after_1:
    // 0x8028113C: b           L_80281198
    // 0x80281140: nop

        goto L_80281198;
    // 0x80281140: nop

L_80281144:
    // 0x80281144: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281148: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x8028114C: nop

    // 0x80281150: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80281154: beq         $t9, $zero, L_8028116C
    if (ctx->r25 == 0) {
        // 0x80281158: nop
    
            goto L_8028116C;
    }
    // 0x80281158: nop

    // 0x8028115C: jal         0x80280DF8
    // 0x80281160: nop

    func_80280DF8_code_extra_3(rdram, ctx);
        goto after_2;
    // 0x80281160: nop

    after_2:
    // 0x80281164: b           L_80281198
    // 0x80281168: nop

        goto L_80281198;
    // 0x80281168: nop

L_8028116C:
    // 0x8028116C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281170: jal         0x8001B44C
    // 0x80281174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80281174: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281178: beq         $v0, $zero, L_80281190
    if (ctx->r2 == 0) {
        // 0x8028117C: nop
    
            goto L_80281190;
    }
    // 0x8028117C: nop

    // 0x80281180: jal         0x80280C84
    // 0x80281184: nop

    func_80280C84_code_extra_3(rdram, ctx);
        goto after_4;
    // 0x80281184: nop

    after_4:
    // 0x80281188: b           L_80281198
    // 0x8028118C: nop

        goto L_80281198;
    // 0x8028118C: nop

L_80281190:
    // 0x80281190: b           L_80281198
    // 0x80281194: nop

        goto L_80281198;
    // 0x80281194: nop

L_80281198:
    // 0x80281198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028119C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802811A0: jr          $ra
    // 0x802811A4: nop

    return;
    // 0x802811A4: nop

;}
RECOMP_FUNC void func_80280000_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280000: addiu       $sp, $sp, -0x50
    ctx->r29 = ADD32(ctx->r29, -0X50);
    // 0x80280004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280008: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028000C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280010: nop

    // 0x80280014: lwc1        $f4, 0x0($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80280018: nop

    // 0x8028001C: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x80280020: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280024: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280028: nop

    // 0x8028002C: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80280030: nop

    // 0x80280034: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
    // 0x80280038: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028003C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280040: nop

    // 0x80280044: lwc1        $f8, 0x8($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80280048: nop

    // 0x8028004C: swc1        $f8, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f8.u32l;
    // 0x80280050: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280054: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280058: nop

    // 0x8028005C: lwc1        $f10, 0x24($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X24);
    // 0x80280060: nop

    // 0x80280064: swc1        $f10, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->f10.u32l;
    // 0x80280068: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028006C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280070: nop

    // 0x80280074: lwc1        $f16, 0x28($t0)
    ctx->f16.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80280078: nop

    // 0x8028007C: swc1        $f16, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f16.u32l;
    // 0x80280080: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280084: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280088: nop

    // 0x8028008C: lwc1        $f18, 0x2C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x80280090: nop

    // 0x80280094: swc1        $f18, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f18.u32l;
    // 0x80280098: lwc1        $f4, 0x48($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8028009C: lwc1        $f6, 0x3C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x802800A0: nop

    // 0x802800A4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x802800A8: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
    // 0x802800AC: lui         $at, 0x42EE
    ctx->r1 = S32(0X42EE << 16);
    // 0x802800B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802800B4: lwc1        $f10, 0x48($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802800B8: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802800BC: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x802800C0: jal         0x800843CC
    // 0x802800C4: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x802800C4: add.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl + ctx->f16.fl;
    after_0:
    // 0x802800C8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802800CC: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x802800D0: nop

    // 0x802800D4: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x802800D8: beq         $t3, $zero, L_80280100
    if (ctx->r11 == 0) {
        // 0x802800DC: nop
    
            goto L_80280100;
    }
    // 0x802800DC: nop

    // 0x802800E0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802800E4: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x802800E8: lui         $at, 0x42EE
    ctx->r1 = S32(0X42EE << 16);
    // 0x802800EC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802800F0: lwc1        $f18, 0x0($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X0);
    // 0x802800F4: nop

    // 0x802800F8: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802800FC: swc1        $f6, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f6.u32l;
L_80280100:
    // 0x80280100: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80280104: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80280108: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x8028010C: jal         0x800843CC
    // 0x80280110: nop

    func_800843CC(rdram, ctx);
        goto after_1;
    // 0x80280110: nop

    after_1:
    // 0x80280114: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280118: lbu         $t5, 0x76E0($t5)
    ctx->r13 = MEM_BU(ctx->r13, 0X76E0);
    // 0x8028011C: nop

    // 0x80280120: andi        $t6, $t5, 0x1
    ctx->r14 = ctx->r13 & 0X1;
    // 0x80280124: beq         $t6, $zero, L_80280140
    if (ctx->r14 == 0) {
        // 0x80280128: nop
    
            goto L_80280140;
    }
    // 0x80280128: nop

    // 0x8028012C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280130: addiu       $t7, $t7, 0x7760
    ctx->r15 = ADD32(ctx->r15, 0X7760);
    // 0x80280134: lwc1        $f8, 0x4($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80280138: nop

    // 0x8028013C: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
L_80280140:
    // 0x80280140: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280144: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x80280148: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028014C: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80280150: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80280154: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80280158: lwc1        $f10, 0x7760($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X7760);
    // 0x8028015C: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80280160: nop

    // 0x80280164: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80280168: nop

    // 0x8028016C: bc1f        L_80280180
    if (!c1cs) {
        // 0x80280170: nop
    
            goto L_80280180;
    }
    // 0x80280170: nop

    // 0x80280174: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80280178: b           L_80280184
    // 0x8028017C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
        goto L_80280184;
    // 0x8028017C: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
L_80280180:
    // 0x80280180: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_80280184:
    // 0x80280184: lwc1        $f18, 0x4C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80280188: lwc1        $f4, 0x40($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X40);
    // 0x8028018C: nop

    // 0x80280190: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x80280194: swc1        $f6, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f6.u32l;
    // 0x80280198: lwc1        $f8, 0x44($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8028019C: lwc1        $f10, 0x38($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X38);
    // 0x802801A0: nop

    // 0x802801A4: add.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802801A8: swc1        $f16, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f16.u32l;
    // 0x802801AC: addiu       $t2, $zero, 0x8
    ctx->r10 = ADD32(0, 0X8);
    // 0x802801B0: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x802801B4: sb          $zero, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = 0;
    // 0x802801B8: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_802801BC:
    // 0x802801BC: sb          $zero, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = 0;
    // 0x802801C0: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
L_802801C4:
    // 0x802801C4: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x802801C8: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x802801CC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x802801D0: subu        $t4, $t4, $t3
    ctx->r12 = SUB32(ctx->r12, ctx->r11);
    // 0x802801D4: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x802801D8: addiu       $t5, $t5, 0x1590
    ctx->r13 = ADD32(ctx->r13, 0X1590);
    // 0x802801DC: addu        $t6, $t4, $t5
    ctx->r14 = ADD32(ctx->r12, ctx->r13);
    // 0x802801E0: lwc1        $f18, 0x0($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802801E4: lwc1        $f4, 0x4C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802801E8: lwc1        $f10, 0x8($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X8);
    // 0x802801EC: lwc1        $f16, 0x44($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802801F0: add.s       $f12, $f18, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x802801F4: lwc1        $f6, 0x4($t6)
    ctx->f6.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802801F8: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802801FC: lwc1        $f8, 0x48($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80280200: mfc1        $a2, $f18
    ctx->r6 = (int32_t)ctx->f18.u32l;
    // 0x80280204: jal         0x80084430
    // 0x80280208: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    func_80084430(rdram, ctx);
        goto after_2;
    // 0x80280208: add.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl + ctx->f8.fl;
    after_2:
    // 0x8028020C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80280210: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80280214: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80280218: bne         $t7, $at, L_80280240
    if (ctx->r15 != ctx->r1) {
        // 0x8028021C: nop
    
            goto L_80280240;
    }
    // 0x8028021C: nop

    // 0x80280220: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80280224: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80280228: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8028022C: lbu         $t9, 0x15F0($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X15F0);
    // 0x80280230: lbu         $t0, 0x2F($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2F);
    // 0x80280234: nop

    // 0x80280238: or          $t1, $t9, $t0
    ctx->r9 = ctx->r25 | ctx->r8;
    // 0x8028023C: sb          $t1, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r9;
L_80280240:
    // 0x80280240: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x80280244: nop

    // 0x80280248: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8028024C: slti        $at, $t3, 0x8
    ctx->r1 = SIGNED(ctx->r11) < 0X8 ? 1 : 0;
    // 0x80280250: bne         $at, $zero, L_802801C4
    if (ctx->r1 != 0) {
        // 0x80280254: sw          $t3, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r11;
            goto L_802801C4;
    }
    // 0x80280254: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x80280258: lbu         $t4, 0x2F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2F);
    // 0x8028025C: nop

    // 0x80280260: andi        $t5, $t4, 0xF
    ctx->r13 = ctx->r12 & 0XF;
    // 0x80280264: sra         $t6, $t4, 4
    ctx->r14 = S32(SIGNED(ctx->r12) >> 4);
    // 0x80280268: or          $t7, $t5, $t6
    ctx->r15 = ctx->r13 | ctx->r14;
    // 0x8028026C: sb          $t7, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r15;
    // 0x80280270: lbu         $t8, 0x2F($sp)
    ctx->r24 = MEM_BU(ctx->r29, 0X2F);
    // 0x80280274: nop

    // 0x80280278: bne         $t8, $zero, L_802802A8
    if (ctx->r24 != 0) {
        // 0x8028027C: nop
    
            goto L_802802A8;
    }
    // 0x8028027C: nop

    // 0x80280280: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80280284: nop

    // 0x80280288: beq         $t9, $zero, L_802802A0
    if (ctx->r25 == 0) {
        // 0x8028028C: nop
    
            goto L_802802A0;
    }
    // 0x8028028C: nop

    // 0x80280290: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80280294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80280298: bne         $t0, $at, L_802802A8
    if (ctx->r8 != ctx->r1) {
        // 0x8028029C: nop
    
            goto L_802802A8;
    }
    // 0x8028029C: nop

L_802802A0:
    // 0x802802A0: b           L_80280428
    // 0x802802A4: nop

        goto L_80280428;
    // 0x802802A4: nop

L_802802A8:
    // 0x802802A8: lbu         $t1, 0x2F($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X2F);
    // 0x802802AC: nop

    // 0x802802B0: bne         $t1, $zero, L_802802F8
    if (ctx->r9 != 0) {
        // 0x802802B4: nop
    
            goto L_802802F8;
    }
    // 0x802802B4: nop

    // 0x802802B8: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802802BC: nop

    // 0x802802C0: swc1        $f4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f4.u32l;
    // 0x802802C4: lwc1        $f6, 0x18($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X18);
    // 0x802802C8: nop

    // 0x802802CC: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x802802D0: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802802D4: nop

    // 0x802802D8: bgez        $t2, L_802802E8
    if (SIGNED(ctx->r10) >= 0) {
        // 0x802802DC: sra         $t3, $t2, 1
        ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
            goto L_802802E8;
    }
    // 0x802802DC: sra         $t3, $t2, 1
    ctx->r11 = S32(SIGNED(ctx->r10) >> 1);
    // 0x802802E0: addiu       $at, $t2, 0x1
    ctx->r1 = ADD32(ctx->r10, 0X1);
    // 0x802802E4: sra         $t3, $at, 1
    ctx->r11 = S32(SIGNED(ctx->r1) >> 1);
L_802802E8:
    // 0x802802E8: sw          $t3, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r11;
    // 0x802802EC: lbu         $t4, 0x2E($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2E);
    // 0x802802F0: b           L_8028037C
    // 0x802802F4: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
        goto L_8028037C;
    // 0x802802F4: sb          $t4, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r12;
L_802802F8:
    // 0x802802F8: lbu         $t5, 0x2E($sp)
    ctx->r13 = MEM_BU(ctx->r29, 0X2E);
    // 0x802802FC: lbu         $t6, 0x2F($sp)
    ctx->r14 = MEM_BU(ctx->r29, 0X2F);
    // 0x80280300: nop

    // 0x80280304: beq         $t5, $t6, L_8028037C
    if (ctx->r13 == ctx->r14) {
        // 0x80280308: nop
    
            goto L_8028037C;
    }
    // 0x80280308: nop

    // 0x8028030C: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x80280310: nop

    // 0x80280314: beq         $t7, $zero, L_8028037C
    if (ctx->r15 == 0) {
        // 0x80280318: nop
    
            goto L_8028037C;
    }
    // 0x80280318: nop

    // 0x8028031C: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80280320: nop

    // 0x80280324: bgez        $t8, L_80280334
    if (SIGNED(ctx->r24) >= 0) {
        // 0x80280328: sra         $t9, $t8, 1
        ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
            goto L_80280334;
    }
    // 0x80280328: sra         $t9, $t8, 1
    ctx->r25 = S32(SIGNED(ctx->r24) >> 1);
    // 0x8028032C: addiu       $at, $t8, 0x1
    ctx->r1 = ADD32(ctx->r24, 0X1);
    // 0x80280330: sra         $t9, $at, 1
    ctx->r25 = S32(SIGNED(ctx->r1) >> 1);
L_80280334:
    // 0x80280334: beq         $t9, $zero, L_8028037C
    if (ctx->r25 == 0) {
        // 0x80280338: nop
    
            goto L_8028037C;
    }
    // 0x80280338: nop

    // 0x8028033C: lbu         $t0, 0x2E($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0X2E);
    // 0x80280340: nop

    // 0x80280344: sb          $t0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r8;
    // 0x80280348: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8028034C: nop

    // 0x80280350: bgez        $t1, L_80280360
    if (SIGNED(ctx->r9) >= 0) {
        // 0x80280354: sra         $t2, $t1, 1
        ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
            goto L_80280360;
    }
    // 0x80280354: sra         $t2, $t1, 1
    ctx->r10 = S32(SIGNED(ctx->r9) >> 1);
    // 0x80280358: addiu       $at, $t1, 0x1
    ctx->r1 = ADD32(ctx->r9, 0X1);
    // 0x8028035C: sra         $t2, $at, 1
    ctx->r10 = S32(SIGNED(ctx->r1) >> 1);
L_80280360:
    // 0x80280360: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80280364: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280368: nop

    // 0x8028036C: swc1        $f8, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f8.u32l;
    // 0x80280370: lwc1        $f10, 0x18($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X18);
    // 0x80280374: nop

    // 0x80280378: swc1        $f10, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f10.u32l;
L_8028037C:
    // 0x8028037C: lwc1        $f16, 0x4C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80280380: nop

    // 0x80280384: swc1        $f16, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f16.u32l;
    // 0x80280388: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x8028038C: nop

    // 0x80280390: swc1        $f18, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f18.u32l;
    // 0x80280394: lbu         $t3, 0x2F($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X2F);
    // 0x80280398: nop

    // 0x8028039C: sb          $t3, 0x2E($sp)
    MEM_B(0X2E, ctx->r29) = ctx->r11;
    // 0x802803A0: lbu         $t4, 0x2F($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0X2F);
    // 0x802803A4: lui         $t6, 0x8028
    ctx->r14 = S32(0X8028 << 16);
    // 0x802803A8: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x802803AC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x802803B0: lw          $t6, 0x15F8($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X15F8);
    // 0x802803B4: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x802803B8: lwc1        $f8, 0x4C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802803BC: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802803C0: mflo        $t8
    ctx->r24 = lo;
    // 0x802803C4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x802803C8: nop

    // 0x802803CC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x802803D0: add.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl + ctx->f8.fl;
    // 0x802803D4: swc1        $f10, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->f10.u32l;
    // 0x802803D8: lbu         $t9, 0x2F($sp)
    ctx->r25 = MEM_BU(ctx->r29, 0X2F);
    // 0x802803DC: lui         $t1, 0x8028
    ctx->r9 = S32(0X8028 << 16);
    // 0x802803E0: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x802803E4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802803E8: lw          $t1, 0x15FC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X15FC);
    // 0x802803EC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x802803F0: lwc1        $f4, 0x44($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802803F4: multu       $t1, $t2
    result = U64(U32(ctx->r9)) * U64(U32(ctx->r10)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x802803F8: mflo        $t3
    ctx->r11 = lo;
    // 0x802803FC: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x80280400: nop

    // 0x80280404: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80280408: add.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl + ctx->f4.fl;
    // 0x8028040C: swc1        $f6, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->f6.u32l;
    // 0x80280410: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x80280414: nop

    // 0x80280418: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8028041C: slti        $at, $t5, 0x1E
    ctx->r1 = SIGNED(ctx->r13) < 0X1E ? 1 : 0;
    // 0x80280420: bne         $at, $zero, L_802801BC
    if (ctx->r1 != 0) {
        // 0x80280424: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_802801BC;
    }
    // 0x80280424: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_80280428:
    // 0x80280428: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x8028042C: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x80280430: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80280434: jal         0x80084430
    // 0x80280438: nop

    func_80084430(rdram, ctx);
        goto after_3;
    // 0x80280438: nop

    after_3:
    // 0x8028043C: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80280440: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80280444: nop

    // 0x80280448: slti        $at, $t6, 0x3
    ctx->r1 = SIGNED(ctx->r14) < 0X3 ? 1 : 0;
    // 0x8028044C: beq         $at, $zero, L_802804A4
    if (ctx->r1 == 0) {
        // 0x80280450: nop
    
            goto L_802804A4;
    }
    // 0x80280450: nop

    // 0x80280454: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80280458: nop

    // 0x8028045C: beq         $t7, $zero, L_802804A4
    if (ctx->r15 == 0) {
        // 0x80280460: nop
    
            goto L_802804A4;
    }
    // 0x80280460: nop

    // 0x80280464: lwc1        $f12, 0x4C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x80280468: lwc1        $f14, 0x48($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X48);
    // 0x8028046C: lw          $a2, 0x44($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X44);
    // 0x80280470: jal         0x800843CC
    // 0x80280474: nop

    func_800843CC(rdram, ctx);
        goto after_4;
    // 0x80280474: nop

    after_4:
    // 0x80280478: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028047C: lbu         $t8, 0x76E0($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X76E0);
    // 0x80280480: nop

    // 0x80280484: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80280488: bne         $t9, $zero, L_802804A4
    if (ctx->r25 != 0) {
        // 0x8028048C: nop
    
            goto L_802804A4;
    }
    // 0x8028048C: nop

    // 0x80280490: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280494: addiu       $t0, $t0, 0x7760
    ctx->r8 = ADD32(ctx->r8, 0X7760);
    // 0x80280498: lwc1        $f8, 0x0($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8028049C: nop

    // 0x802804A0: swc1        $f8, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->f8.u32l;
L_802804A4:
    // 0x802804A4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802804A8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802804AC: lwc1        $f10, 0x4C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4C);
    // 0x802804B0: nop

    // 0x802804B4: swc1        $f10, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->f10.u32l;
    // 0x802804B8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802804BC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802804C0: lwc1        $f16, 0x48($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X48);
    // 0x802804C4: nop

    // 0x802804C8: swc1        $f16, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f16.u32l;
    // 0x802804CC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802804D0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802804D4: lwc1        $f18, 0x44($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X44);
    // 0x802804D8: nop

    // 0x802804DC: swc1        $f18, 0x8($t3)
    MEM_W(0X8, ctx->r11) = ctx->f18.u32l;
    // 0x802804E0: b           L_802804E8
    // 0x802804E4: nop

        goto L_802804E8;
    // 0x802804E4: nop

L_802804E8:
    // 0x802804E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802804EC: addiu       $sp, $sp, 0x50
    ctx->r29 = ADD32(ctx->r29, 0X50);
    // 0x802804F0: jr          $ra
    // 0x802804F4: nop

    return;
    // 0x802804F4: nop

;}
RECOMP_FUNC void func_802811F8_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811F8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802811FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281200: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281204: jal         0x8001B62C
    // 0x80281208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80281208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x8028120C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80281210: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281214: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281218: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8028121C: nop

    // 0x80281220: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80281224: nop

    // 0x80281228: bc1f        L_8028125C
    if (!c1cs) {
        // 0x8028122C: nop
    
            goto L_8028125C;
    }
    // 0x8028122C: nop

    // 0x80281230: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281234: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281238: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028123C: lwc1        $f8, 0x1898($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1898);
    // 0x80281240: nop

    // 0x80281244: swc1        $f8, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f8.u32l;
    // 0x80281248: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x8028124C: lw          $t7, 0x51A4($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X51A4);
    // 0x80281250: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80281254: ori         $t8, $t7, 0x1
    ctx->r24 = ctx->r15 | 0X1;
    // 0x80281258: sw          $t8, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r24;
L_8028125C:
    // 0x8028125C: jal         0x80280724
    // 0x80281260: nop

    func_80280724_code_extra_3(rdram, ctx);
        goto after_1;
    // 0x80281260: nop

    after_1:
    // 0x80281264: jal         0x802807EC
    // 0x80281268: nop

    func_802807EC_code_extra_3(rdram, ctx);
        goto after_2;
    // 0x80281268: nop

    after_2:
    // 0x8028126C: jal         0x80280B30
    // 0x80281270: nop

    func_80280B30_code_extra_3(rdram, ctx);
        goto after_3;
    // 0x80281270: nop

    after_3:
    // 0x80281274: jal         0x80280A7C
    // 0x80281278: nop

    func_80280A7C_code_extra_3(rdram, ctx);
        goto after_4;
    // 0x80281278: nop

    after_4:
    // 0x8028127C: b           L_80281284
    // 0x80281280: nop

        goto L_80281284;
    // 0x80281280: nop

L_80281284:
    // 0x80281284: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281288: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028128C: jr          $ra
    // 0x80281290: nop

    return;
    // 0x80281290: nop

;}
RECOMP_FUNC void func_80280F00_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280F00: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280F04: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280F08: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x80280F0C: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x80280F10: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280F14: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280F18: addiu       $t7, $zero, 0x130
    ctx->r15 = ADD32(0, 0X130);
    // 0x80280F1C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80280F20: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80280F24: addiu       $t9, $t9, 0x5F34
    ctx->r25 = ADD32(ctx->r25, 0X5F34);
    // 0x80280F28: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80280F2C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80280F30: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280F34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280F38: jal         0x8001C0EC
    // 0x80280F3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80280F3C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80280F40: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80280F44: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80280F48: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80280F4C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80280F50: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280F54: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80280F58: b           L_80280F60
    // 0x80280F5C: nop

        goto L_80280F60;
    // 0x80280F5C: nop

L_80280F60:
    // 0x80280F60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280F64: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80280F68: jr          $ra
    // 0x80280F6C: nop

    return;
    // 0x80280F6C: nop

;}
RECOMP_FUNC void func_80281314_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281314: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281318: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028131C: jal         0x80280604
    // 0x80281320: nop

    func_80280604_code_extra_3(rdram, ctx);
        goto after_0;
    // 0x80281320: nop

    after_0:
    // 0x80281324: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80281328: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x8028132C: jal         0x80085B34
    // 0x80281330: nop

    func_80085B34(rdram, ctx);
        goto after_1;
    // 0x80281330: nop

    after_1:
    // 0x80281334: jal         0x802804F8
    // 0x80281338: nop

    func_802804F8_code_extra_3(rdram, ctx);
        goto after_2;
    // 0x80281338: nop

    after_2:
    // 0x8028133C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281340: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281344: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80281348: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x8028134C: nop

    // 0x80281350: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x80281354: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80281358: lw          $t9, 0xEE4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XEE4);
    // 0x8028135C: nop

    // 0x80281360: jalr        $t9
    // 0x80281364: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x80281364: nop

    after_3:
    // 0x80281368: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8028136C: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281370: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x80281374: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x80281378: nop

    // 0x8028137C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x80281380: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x80281384: lw          $t9, 0xEE0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0XEE0);
    // 0x80281388: nop

    // 0x8028138C: jalr        $t9
    // 0x80281390: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80281390: nop

    after_4:
    // 0x80281394: jal         0x80280BD8
    // 0x80281398: nop

    func_80280BD8_code_extra_3(rdram, ctx);
        goto after_5;
    // 0x80281398: nop

    after_5:
    // 0x8028139C: jal         0x80280000
    // 0x802813A0: nop

    func_80280000_code_extra_3(rdram, ctx);
        goto after_6;
    // 0x802813A0: nop

    after_6:
    // 0x802813A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802813A8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802813AC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802813B0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802813B4: nop

    // 0x802813B8: swc1        $f4, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f4.u32l;
    // 0x802813BC: jal         0x8001CD20
    // 0x802813C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_7;
    // 0x802813C0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_7:
    // 0x802813C4: jal         0x8001AD6C
    // 0x802813C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_8;
    // 0x802813C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x802813CC: b           L_802813D4
    // 0x802813D0: nop

        goto L_802813D4;
    // 0x802813D0: nop

L_802813D4:
    // 0x802813D4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802813D8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802813DC: jr          $ra
    // 0x802813E0: nop

    return;
    // 0x802813E0: nop

;}
RECOMP_FUNC void func_80281294_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281294: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281298: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028129C: jal         0x80280724
    // 0x802812A0: nop

    func_80280724_code_extra_3(rdram, ctx);
        goto after_0;
    // 0x802812A0: nop

    after_0:
    // 0x802812A4: jal         0x802807EC
    // 0x802812A8: nop

    func_802807EC_code_extra_3(rdram, ctx);
        goto after_1;
    // 0x802812A8: nop

    after_1:
    // 0x802812AC: jal         0x80280B30
    // 0x802812B0: nop

    func_80280B30_code_extra_3(rdram, ctx);
        goto after_2;
    // 0x802812B0: nop

    after_2:
    // 0x802812B4: jal         0x80280A7C
    // 0x802812B8: nop

    func_80280A7C_code_extra_3(rdram, ctx);
        goto after_3;
    // 0x802812B8: nop

    after_3:
    // 0x802812BC: b           L_802812C4
    // 0x802812C0: nop

        goto L_802812C4;
    // 0x802812C0: nop

L_802812C4:
    // 0x802812C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802812C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802812CC: jr          $ra
    // 0x802812D0: nop

    return;
    // 0x802812D0: nop

;}
RECOMP_FUNC void func_80280B30_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280B30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280B34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280B38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280B3C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280B40: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280B44: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80280B48: lwc1        $f9, 0x1880($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1880);
    // 0x80280B4C: lwc1        $f8, 0x1884($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1884);
    // 0x80280B50: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280B54: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80280B58: jal         0x80034970
    // 0x80280B5C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x80280B5C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80280B60: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280B64: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280B68: nop

    // 0x80280B6C: lwc1        $f16, 0x44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80280B70: nop

    // 0x80280B74: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80280B78: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x80280B7C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280B80: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280B84: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280B88: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80280B8C: lwc1        $f9, 0x1888($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1888);
    // 0x80280B90: lwc1        $f8, 0x188C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X188C);
    // 0x80280B94: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280B98: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80280B9C: jal         0x80036570
    // 0x80280BA0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x80280BA0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x80280BA4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280BA8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280BAC: nop

    // 0x80280BB0: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80280BB4: nop

    // 0x80280BB8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80280BBC: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x80280BC0: b           L_80280BC8
    // 0x80280BC4: nop

        goto L_80280BC8;
    // 0x80280BC4: nop

L_80280BC8:
    // 0x80280BC8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280BCC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280BD0: jr          $ra
    // 0x80280BD4: nop

    return;
    // 0x80280BD4: nop

;}
RECOMP_FUNC void func_80280604_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280604: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280608: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028060C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280610: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280614: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280618: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028061C: nop

    // 0x80280620: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80280624: nop

    // 0x80280628: bc1f        L_80280658
    if (!c1cs) {
        // 0x8028062C: nop
    
            goto L_80280658;
    }
    // 0x8028062C: nop

    // 0x80280630: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80280634: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280638: nop

    // 0x8028063C: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80280640: nop

    // 0x80280644: bc1f        L_80280658
    if (!c1cs) {
        // 0x80280648: nop
    
            goto L_80280658;
    }
    // 0x80280648: nop

    // 0x8028064C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280650: b           L_80280658
    // 0x80280654: sw          $zero, -0x1BF0($at)
    MEM_W(-0X1BF0, ctx->r1) = 0;
        goto L_80280658;
    // 0x80280654: sw          $zero, -0x1BF0($at)
    MEM_W(-0X1BF0, ctx->r1) = 0;
L_80280658:
    // 0x80280658: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028065C: lwc1        $f10, -0x1C6C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80280660: nop

    // 0x80280664: mul.s       $f12, $f10, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = MUL_S(ctx->f10.fl, ctx->f10.fl);
    // 0x80280668: jal         0x800366E0
    // 0x8028066C: nop

    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x8028066C: nop

    after_0:
    // 0x80280670: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80280674: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280678: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028067C: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280680: nop

    // 0x80280684: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80280688: nop

    // 0x8028068C: bc1f        L_802806A0
    if (!c1cs) {
        // 0x80280690: nop
    
            goto L_802806A0;
    }
    // 0x80280690: nop

    // 0x80280694: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280698: b           L_8028070C
    // 0x8028069C: sw          $zero, -0x1BE8($at)
    MEM_W(-0X1BE8, ctx->r1) = 0;
        goto L_8028070C;
    // 0x8028069C: sw          $zero, -0x1BE8($at)
    MEM_W(-0X1BE8, ctx->r1) = 0;
L_802806A0:
    // 0x802806A0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802806A4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802806A8: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802806AC: nop

    // 0x802806B0: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x802806B4: nop

    // 0x802806B8: bc1f        L_802806D0
    if (!c1cs) {
        // 0x802806BC: nop
    
            goto L_802806D0;
    }
    // 0x802806BC: nop

    // 0x802806C0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802806C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806C8: b           L_8028070C
    // 0x802806CC: sw          $t6, -0x1BE8($at)
    MEM_W(-0X1BE8, ctx->r1) = ctx->r14;
        goto L_8028070C;
    // 0x802806CC: sw          $t6, -0x1BE8($at)
    MEM_W(-0X1BE8, ctx->r1) = ctx->r14;
L_802806D0:
    // 0x802806D0: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x802806D4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802806D8: lwc1        $f8, 0x1C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802806DC: nop

    // 0x802806E0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802806E4: nop

    // 0x802806E8: bc1f        L_80280700
    if (!c1cs) {
        // 0x802806EC: nop
    
            goto L_80280700;
    }
    // 0x802806EC: nop

    // 0x802806F0: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x802806F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806F8: b           L_8028070C
    // 0x802806FC: sw          $t7, -0x1BE8($at)
    MEM_W(-0X1BE8, ctx->r1) = ctx->r15;
        goto L_8028070C;
    // 0x802806FC: sw          $t7, -0x1BE8($at)
    MEM_W(-0X1BE8, ctx->r1) = ctx->r15;
L_80280700:
    // 0x80280700: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80280704: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280708: sw          $t8, -0x1BE8($at)
    MEM_W(-0X1BE8, ctx->r1) = ctx->r24;
L_8028070C:
    // 0x8028070C: b           L_80280714
    // 0x80280710: nop

        goto L_80280714;
    // 0x80280710: nop

L_80280714:
    // 0x80280714: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280718: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8028071C: jr          $ra
    // 0x80280720: nop

    return;
    // 0x80280720: nop

;}
RECOMP_FUNC void func_80280DF8_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280DF8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280DFC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280E00: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80280E04: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
    // 0x80280E08: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280E0C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280E10: addiu       $t7, $zero, 0x12E
    ctx->r15 = ADD32(0, 0X12E);
    // 0x80280E14: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80280E18: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80280E1C: addiu       $t9, $t9, 0x5F34
    ctx->r25 = ADD32(ctx->r25, 0X5F34);
    // 0x80280E20: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80280E24: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80280E28: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280E2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280E30: jal         0x8001C0EC
    // 0x80280E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80280E34: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80280E38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280E3C: jal         0x8001B754
    // 0x80280E40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80280E40: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80280E44: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80280E48: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80280E4C: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80280E50: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80280E54: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280E58: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80280E5C: b           L_80280E64
    // 0x80280E60: nop

        goto L_80280E64;
    // 0x80280E60: nop

L_80280E64:
    // 0x80280E64: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280E68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80280E6C: jr          $ra
    // 0x80280E70: nop

    return;
    // 0x80280E70: nop

;}
RECOMP_FUNC void func_80280BD8_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280BD8: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80280BDC: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80280BE0: nop

    // 0x80280BE4: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80280BE8: beq         $t7, $zero, L_80280C60
    if (ctx->r15 == 0) {
        // 0x80280BEC: nop
    
            goto L_80280C60;
    }
    // 0x80280BEC: nop

    // 0x80280BF0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280BF4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280BF8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280BFC: lwc1        $f4, 0x28($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X28);
    // 0x80280C00: lwc1        $f9, 0x1890($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1890);
    // 0x80280C04: lwc1        $f8, 0x1894($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1894);
    // 0x80280C08: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280C0C: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280C10: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280C14: swc1        $f16, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f16.u32l;
    // 0x80280C18: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280C1C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280C20: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80280C24: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280C28: lwc1        $f18, 0x28($t9)
    ctx->f18.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80280C2C: nop

    // 0x80280C30: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80280C34: nop

    // 0x80280C38: bc1f        L_80280C58
    if (!c1cs) {
        // 0x80280C3C: nop
    
            goto L_80280C58;
    }
    // 0x80280C3C: nop

    // 0x80280C40: lui         $at, 0xC240
    ctx->r1 = S32(0XC240 << 16);
    // 0x80280C44: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280C48: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280C4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280C50: nop

    // 0x80280C54: swc1        $f6, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f6.u32l;
L_80280C58:
    // 0x80280C58: b           L_80280C74
    // 0x80280C5C: nop

        goto L_80280C74;
    // 0x80280C5C: nop

L_80280C60:
    // 0x80280C60: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280C64: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280C68: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80280C6C: nop

    // 0x80280C70: swc1        $f8, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f8.u32l;
L_80280C74:
    // 0x80280C74: jr          $ra
    // 0x80280C78: nop

    return;
    // 0x80280C78: nop

    // 0x80280C7C: jr          $ra
    // 0x80280C80: nop

    return;
    // 0x80280C80: nop

;}
RECOMP_FUNC void func_802811A8_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802811A8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802811AC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802811B0: jal         0x80280724
    // 0x802811B4: nop

    func_80280724_code_extra_3(rdram, ctx);
        goto after_0;
    // 0x802811B4: nop

    after_0:
    // 0x802811B8: jal         0x802807EC
    // 0x802811BC: nop

    func_802807EC_code_extra_3(rdram, ctx);
        goto after_1;
    // 0x802811BC: nop

    after_1:
    // 0x802811C0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802811C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802811C8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802811CC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802811D0: nop

    // 0x802811D4: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
    // 0x802811D8: jal         0x80280B30
    // 0x802811DC: nop

    func_80280B30_code_extra_3(rdram, ctx);
        goto after_2;
    // 0x802811DC: nop

    after_2:
    // 0x802811E0: b           L_802811E8
    // 0x802811E4: nop

        goto L_802811E8;
    // 0x802811E4: nop

L_802811E8:
    // 0x802811E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802811EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802811F0: jr          $ra
    // 0x802811F4: nop

    return;
    // 0x802811F4: nop

;}
RECOMP_FUNC void func_80280C84_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280C84: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280C88: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280C8C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280C90: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280C94: addiu       $t6, $zero, 0x12D
    ctx->r14 = ADD32(0, 0X12D);
    // 0x80280C98: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80280C9C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280CA0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280CA4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280CA8: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80280CAC: nop

    // 0x80280CB0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x80280CB4: nop

    // 0x80280CB8: bc1f        L_80280CC8
    if (!c1cs) {
        // 0x80280CBC: nop
    
            goto L_80280CC8;
    }
    // 0x80280CBC: nop

    // 0x80280CC0: b           L_80280D9C
    // 0x80280CC4: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
        goto L_80280D9C;
    // 0x80280CC4: sh          $zero, 0x26($sp)
    MEM_H(0X26, ctx->r29) = 0;
L_80280CC8:
    // 0x80280CC8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280CCC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280CD0: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80280CD4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280CD8: lwc1        $f8, 0x44($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80280CDC: nop

    // 0x80280CE0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80280CE4: nop

    // 0x80280CE8: bc1f        L_80280CFC
    if (!c1cs) {
        // 0x80280CEC: nop
    
            goto L_80280CFC;
    }
    // 0x80280CEC: nop

    // 0x80280CF0: addiu       $t0, $zero, 0x6
    ctx->r8 = ADD32(0, 0X6);
    // 0x80280CF4: b           L_80280D9C
    // 0x80280CF8: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
        goto L_80280D9C;
    // 0x80280CF8: sh          $t0, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r8;
L_80280CFC:
    // 0x80280CFC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280D00: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280D04: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280D08: lwc1        $f16, 0x44($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80280D0C: nop

    // 0x80280D10: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80280D14: nop

    // 0x80280D18: bc1f        L_80280D2C
    if (!c1cs) {
        // 0x80280D1C: nop
    
            goto L_80280D2C;
    }
    // 0x80280D1C: nop

    // 0x80280D20: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x80280D24: b           L_80280D9C
    // 0x80280D28: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
        goto L_80280D9C;
    // 0x80280D28: sh          $t2, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r10;
L_80280D2C:
    // 0x80280D2C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280D30: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280D34: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80280D38: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280D3C: lwc1        $f4, 0x44($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80280D40: nop

    // 0x80280D44: c.le.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl <= ctx->f6.fl;
    // 0x80280D48: nop

    // 0x80280D4C: bc1f        L_80280D60
    if (!c1cs) {
        // 0x80280D50: nop
    
            goto L_80280D60;
    }
    // 0x80280D50: nop

    // 0x80280D54: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80280D58: b           L_80280D9C
    // 0x80280D5C: sh          $t4, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r12;
        goto L_80280D9C;
    // 0x80280D5C: sh          $t4, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r12;
L_80280D60:
    // 0x80280D60: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280D64: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280D68: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80280D6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280D70: lwc1        $f8, 0x44($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80280D74: nop

    // 0x80280D78: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80280D7C: nop

    // 0x80280D80: bc1f        L_80280D94
    if (!c1cs) {
        // 0x80280D84: nop
    
            goto L_80280D94;
    }
    // 0x80280D84: nop

    // 0x80280D88: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80280D8C: b           L_80280D9C
    // 0x80280D90: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
        goto L_80280D9C;
    // 0x80280D90: sh          $t6, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r14;
L_80280D94:
    // 0x80280D94: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x80280D98: sh          $t7, 0x26($sp)
    MEM_H(0X26, ctx->r29) = ctx->r15;
L_80280D9C:
    // 0x80280D9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280DA0: jal         0x8001B880
    // 0x80280DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_0;
    // 0x80280DA4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80280DA8: sw          $v0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r2;
    // 0x80280DAC: lh          $t8, 0x26($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X26);
    // 0x80280DB0: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80280DB4: nop

    // 0x80280DB8: beq         $t8, $t9, L_80280DE0
    if (ctx->r24 == ctx->r25) {
        // 0x80280DBC: nop
    
            goto L_80280DE0;
    }
    // 0x80280DBC: nop

    // 0x80280DC0: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x80280DC4: addiu       $t0, $t0, 0x5F34
    ctx->r8 = ADD32(ctx->r8, 0X5F34);
    // 0x80280DC8: lh          $a2, 0x26($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X26);
    // 0x80280DCC: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80280DD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280DD8: jal         0x8001C0EC
    // 0x80280DDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80280DDC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
L_80280DE0:
    // 0x80280DE0: b           L_80280DE8
    // 0x80280DE4: nop

        goto L_80280DE8;
    // 0x80280DE4: nop

L_80280DE8:
    // 0x80280DE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280DEC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80280DF0: jr          $ra
    // 0x80280DF4: nop

    return;
    // 0x80280DF4: nop

;}
RECOMP_FUNC void func_802812D4_code_extra_3(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802812D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802812D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802812DC: jal         0x80280724
    // 0x802812E0: nop

    func_80280724_code_extra_3(rdram, ctx);
        goto after_0;
    // 0x802812E0: nop

    after_0:
    // 0x802812E4: jal         0x802807EC
    // 0x802812E8: nop

    func_802807EC_code_extra_3(rdram, ctx);
        goto after_1;
    // 0x802812E8: nop

    after_1:
    // 0x802812EC: jal         0x80280B30
    // 0x802812F0: nop

    func_80280B30_code_extra_3(rdram, ctx);
        goto after_2;
    // 0x802812F0: nop

    after_2:
    // 0x802812F4: jal         0x80280A7C
    // 0x802812F8: nop

    func_80280A7C_code_extra_3(rdram, ctx);
        goto after_3;
    // 0x802812F8: nop

    after_3:
    // 0x802812FC: b           L_80281304
    // 0x80281300: nop

        goto L_80281304;
    // 0x80281300: nop

L_80281304:
    // 0x80281304: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281308: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028130C: jr          $ra
    // 0x80281310: nop

    return;
    // 0x80281310: nop

;}
RECOMP_FUNC void func_80280738_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280738: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8028073C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x80280740: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280744: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80280748: lwc1        $f4, 0x15D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X15D0);
    // 0x8028074C: nop

    // 0x80280750: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80280754: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280758: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028075C: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280760: lwc1        $f6, 0x44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80280764: nop

    // 0x80280768: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x8028076C: nop

    // 0x80280770: bc1f        L_802807D8
    if (!c1cs) {
        // 0x80280774: nop
    
            goto L_802807D8;
    }
    // 0x80280774: nop

    // 0x80280778: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028077C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280780: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80280784: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280788: lwc1        $f10, 0x44($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X44);
    // 0x8028078C: nop

    // 0x80280790: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80280794: swc1        $f18, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f18.u32l;
    // 0x80280798: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028079C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802807A0: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802807A4: lwc1        $f4, 0x44($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X44);
    // 0x802807A8: nop

    // 0x802807AC: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x802807B0: nop

    // 0x802807B4: bc1f        L_802807D0
    if (!c1cs) {
        // 0x802807B8: nop
    
            goto L_802807D0;
    }
    // 0x802807B8: nop

    // 0x802807BC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802807C0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802807C4: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802807C8: nop

    // 0x802807CC: swc1        $f8, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f8.u32l;
L_802807D0:
    // 0x802807D0: b           L_80280854
    // 0x802807D4: nop

        goto L_80280854;
    // 0x802807D4: nop

L_802807D8:
    // 0x802807D8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802807DC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802807E0: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x802807E4: lwc1        $f10, 0x44($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X44);
    // 0x802807E8: nop

    // 0x802807EC: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x802807F0: nop

    // 0x802807F4: bc1f        L_80280854
    if (!c1cs) {
        // 0x802807F8: nop
    
            goto L_80280854;
    }
    // 0x802807F8: nop

    // 0x802807FC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280800: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280804: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80280808: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028080C: lwc1        $f18, 0x44($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80280810: nop

    // 0x80280814: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x80280818: swc1        $f6, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f6.u32l;
    // 0x8028081C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280820: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280824: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80280828: lwc1        $f8, 0x44($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X44);
    // 0x8028082C: nop

    // 0x80280830: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80280834: nop

    // 0x80280838: bc1f        L_80280854
    if (!c1cs) {
        // 0x8028083C: nop
    
            goto L_80280854;
    }
    // 0x8028083C: nop

    // 0x80280840: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280844: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280848: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8028084C: nop

    // 0x80280850: swc1        $f16, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f16.u32l;
L_80280854:
    // 0x80280854: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280858: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028085C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80280860: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280864: lwc1        $f18, 0x44($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X44);
    // 0x80280868: nop

    // 0x8028086C: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x80280870: nop

    // 0x80280874: bc1f        L_80280894
    if (!c1cs) {
        // 0x80280878: nop
    
            goto L_80280894;
    }
    // 0x80280878: nop

    // 0x8028087C: lui         $at, 0x4190
    ctx->r1 = S32(0X4190 << 16);
    // 0x80280880: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280884: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280888: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8028088C: b           L_802808CC
    // 0x80280890: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
        goto L_802808CC;
    // 0x80280890: swc1        $f6, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f6.u32l;
L_80280894:
    // 0x80280894: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280898: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028089C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802808A0: lwc1        $f8, 0x44($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X44);
    // 0x802808A4: nop

    // 0x802808A8: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x802808AC: nop

    // 0x802808B0: bc1f        L_802808CC
    if (!c1cs) {
        // 0x802808B4: nop
    
            goto L_802808CC;
    }
    // 0x802808B4: nop

    // 0x802808B8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802808BC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802808C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802808C4: nop

    // 0x802808C8: swc1        $f16, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f16.u32l;
L_802808CC:
    // 0x802808CC: b           L_802808D4
    // 0x802808D0: nop

        goto L_802808D4;
    // 0x802808D0: nop

L_802808D4:
    // 0x802808D4: jr          $ra
    // 0x802808D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802808D8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8028117C_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028117C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80281180: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281184: jal         0x80280370
    // 0x80281188: nop

    func_80280370_code_extra_4(rdram, ctx);
        goto after_0;
    // 0x80281188: nop

    after_0:
    // 0x8028118C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281190: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80281194: jal         0x800682E0
    // 0x80281198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800682E0(rdram, ctx);
        goto after_1;
    // 0x80281198: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x8028119C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802811A0: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x802811A4: jal         0x80085B34
    // 0x802811A8: nop

    func_80085B34(rdram, ctx);
        goto after_2;
    // 0x802811A8: nop

    after_2:
    // 0x802811AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802811B0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802811B4: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x802811B8: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x802811BC: nop

    // 0x802811C0: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x802811C4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802811C8: lw          $t9, 0x958($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X958);
    // 0x802811CC: nop

    // 0x802811D0: jalr        $t9
    // 0x802811D4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_3;
    // 0x802811D4: nop

    after_3:
    // 0x802811D8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802811DC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802811E0: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x802811E4: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x802811E8: nop

    // 0x802811EC: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x802811F0: addu        $t9, $t9, $t2
    ctx->r25 = ADD32(ctx->r25, ctx->r10);
    // 0x802811F4: lw          $t9, 0x95C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X95C);
    // 0x802811F8: nop

    // 0x802811FC: jalr        $t9
    // 0x80281200: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x80281200: nop

    after_4:
    // 0x80281204: jal         0x80280050
    // 0x80281208: nop

    func_80280050_code_extra_4(rdram, ctx);
        goto after_5;
    // 0x80281208: nop

    after_5:
    // 0x8028120C: jal         0x802800F8
    // 0x80281210: nop

    func_802800F8_code_extra_4(rdram, ctx);
        goto after_6;
    // 0x80281210: nop

    after_6:
    // 0x80281214: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281218: lh          $t3, -0x1F00($t3)
    ctx->r11 = MEM_H(ctx->r11, -0X1F00);
    // 0x8028121C: nop

    // 0x80281220: beq         $t3, $zero, L_80281238
    if (ctx->r11 == 0) {
        // 0x80281224: nop
    
            goto L_80281238;
    }
    // 0x80281224: nop

    // 0x80281228: lui         $t4, 0x8028
    ctx->r12 = S32(0X8028 << 16);
    // 0x8028122C: addiu       $t4, $t4, 0x1570
    ctx->r12 = ADD32(ctx->r12, 0X1570);
    // 0x80281230: b           L_80281244
    // 0x80281234: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
        goto L_80281244;
    // 0x80281234: sw          $t4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r12;
L_80281238:
    // 0x80281238: lui         $t5, 0x8028
    ctx->r13 = S32(0X8028 << 16);
    // 0x8028123C: addiu       $t5, $t5, 0x1510
    ctx->r13 = ADD32(ctx->r13, 0X1510);
    // 0x80281240: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
L_80281244:
    // 0x80281244: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x80281248: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028124C: lui         $a2, 0x426C
    ctx->r6 = S32(0X426C << 16);
    // 0x80281250: jal         0x80084BD8
    // 0x80281254: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    func_80084BD8(rdram, ctx);
        goto after_7;
    // 0x80281254: lui         $a3, 0xC26C
    ctx->r7 = S32(0XC26C << 16);
    after_7:
    // 0x80281258: jal         0x8001CD20
    // 0x8028125C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_8;
    // 0x8028125C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_8:
    // 0x80281260: jal         0x8001AD6C
    // 0x80281264: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_9;
    // 0x80281264: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_9:
    // 0x80281268: jal         0x80017B04
    // 0x8028126C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80017B04(rdram, ctx);
        goto after_10;
    // 0x8028126C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_10:
    // 0x80281270: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80281274: bne         $v0, $at, L_80281294
    if (ctx->r2 != ctx->r1) {
        // 0x80281278: nop
    
            goto L_80281294;
    }
    // 0x80281278: nop

    // 0x8028127C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281280: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281284: addiu       $a2, $zero, 0x5
    ctx->r6 = ADD32(0, 0X5);
    // 0x80281288: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028128C: jal         0x800178D4
    // 0x80281290: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_11;
    // 0x80281290: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_11:
L_80281294:
    // 0x80281294: b           L_8028129C
    // 0x80281298: nop

        goto L_8028129C;
    // 0x80281298: nop

L_8028129C:
    // 0x8028129C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802812A0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802812A4: jr          $ra
    // 0x802812A8: nop

    return;
    // 0x802812A8: nop

;}
RECOMP_FUNC void func_80280370_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280370: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280374: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280378: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028037C: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280380: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280384: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x80280388: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x8028038C: nop

    // 0x80280390: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x80280394: jal         0x800366E0
    // 0x80280398: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    sqrtf_recomp(rdram, ctx);
        goto after_0;
    // 0x80280398: add.s       $f12, $f6, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f12.fl = ctx->f6.fl + ctx->f10.fl;
    after_0:
    // 0x8028039C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x802803A0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802803A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802803A8: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802803AC: nop

    // 0x802803B0: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802803B4: nop

    // 0x802803B8: bc1f        L_802803CC
    if (!c1cs) {
        // 0x802803BC: nop
    
            goto L_802803CC;
    }
    // 0x802803BC: nop

    // 0x802803C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803C4: b           L_80280438
    // 0x802803C8: sh          $zero, -0x1BDA($at)
    MEM_H(-0X1BDA, ctx->r1) = 0;
        goto L_80280438;
    // 0x802803C8: sh          $zero, -0x1BDA($at)
    MEM_H(-0X1BDA, ctx->r1) = 0;
L_802803CC:
    // 0x802803CC: lui         $at, 0x420C
    ctx->r1 = S32(0X420C << 16);
    // 0x802803D0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802803D4: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x802803D8: nop

    // 0x802803DC: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802803E0: nop

    // 0x802803E4: bc1f        L_802803FC
    if (!c1cs) {
        // 0x802803E8: nop
    
            goto L_802803FC;
    }
    // 0x802803E8: nop

    // 0x802803EC: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802803F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803F4: b           L_80280438
    // 0x802803F8: sh          $t6, -0x1BDA($at)
    MEM_H(-0X1BDA, ctx->r1) = ctx->r14;
        goto L_80280438;
    // 0x802803F8: sh          $t6, -0x1BDA($at)
    MEM_H(-0X1BDA, ctx->r1) = ctx->r14;
L_802803FC:
    // 0x802803FC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80280400: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280404: lwc1        $f6, 0x1C($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280408: nop

    // 0x8028040C: c.lt.s      $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f6.fl < ctx->f10.fl;
    // 0x80280410: nop

    // 0x80280414: bc1f        L_8028042C
    if (!c1cs) {
        // 0x80280418: nop
    
            goto L_8028042C;
    }
    // 0x80280418: nop

    // 0x8028041C: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x80280420: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280424: b           L_80280438
    // 0x80280428: sh          $t7, -0x1BDA($at)
    MEM_H(-0X1BDA, ctx->r1) = ctx->r15;
        goto L_80280438;
    // 0x80280428: sh          $t7, -0x1BDA($at)
    MEM_H(-0X1BDA, ctx->r1) = ctx->r15;
L_8028042C:
    // 0x8028042C: addiu       $t8, $zero, 0x3
    ctx->r24 = ADD32(0, 0X3);
    // 0x80280430: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280434: sh          $t8, -0x1BDA($at)
    MEM_H(-0X1BDA, ctx->r1) = ctx->r24;
L_80280438:
    // 0x80280438: b           L_80280440
    // 0x8028043C: nop

        goto L_80280440;
    // 0x8028043C: nop

L_80280440:
    // 0x80280440: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280444: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280448: jr          $ra
    // 0x8028044C: nop

    return;
    // 0x8028044C: nop

;}
RECOMP_FUNC void func_802810F4_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802810F4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802810F8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802810FC: jal         0x80280738
    // 0x80281100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280738_code_extra_4(rdram, ctx);
        goto after_0;
    // 0x80281100: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80281104: b           L_8028110C
    // 0x80281108: nop

        goto L_8028110C;
    // 0x80281108: nop

L_8028110C:
    // 0x8028110C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281110: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281114: jr          $ra
    // 0x80281118: nop

    return;
    // 0x80281118: nop

;}
RECOMP_FUNC void func_8028111C_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028111C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281120: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281124: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281128: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028112C: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x80281130: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281134: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80281138: jal         0x80015538
    // 0x8028113C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x8028113C: nop

    after_0:
    // 0x80281140: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281144: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281148: nop

    // 0x8028114C: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80281150: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281154: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281158: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028115C: nop

    // 0x80281160: swc1        $f4, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f4.u32l;
    // 0x80281164: b           L_8028116C
    // 0x80281168: nop

        goto L_8028116C;
    // 0x80281168: nop

L_8028116C:
    // 0x8028116C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281170: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281174: jr          $ra
    // 0x80281178: nop

    return;
    // 0x80281178: nop

;}
RECOMP_FUNC void func_80280944_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280944: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80280948: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028094C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80280950: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80280954: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280958: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028095C: addiu       $t6, $zero, 0x191
    ctx->r14 = ADD32(0, 0X191);
    // 0x80280960: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80280964: jal         0x802808DC
    // 0x80280968: nop

    func_802808DC_code_extra_4(rdram, ctx);
        goto after_0;
    // 0x80280968: nop

    after_0:
    // 0x8028096C: sh          $v0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r2;
    // 0x80280970: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280974: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x80280978: nop

    // 0x8028097C: beq         $t8, $zero, L_80280994
    if (ctx->r24 == 0) {
        // 0x80280980: nop
    
            goto L_80280994;
    }
    // 0x80280980: nop

    // 0x80280984: lh          $t9, 0x36($sp)
    ctx->r25 = MEM_H(ctx->r29, 0X36);
    // 0x80280988: nop

    // 0x8028098C: addiu       $t0, $t9, 0x3
    ctx->r8 = ADD32(ctx->r25, 0X3);
    // 0x80280990: sh          $t0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r8;
L_80280994:
    // 0x80280994: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280998: jal         0x8001B880
    // 0x8028099C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B880(rdram, ctx);
        goto after_1;
    // 0x8028099C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x802809A0: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x802809A4: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x802809A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802809AC: nop

    // 0x802809B0: swc1        $f4, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f4.u32l;
    // 0x802809B4: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x802809B8: nop

    // 0x802809BC: beq         $t1, $zero, L_80280A00
    if (ctx->r9 == 0) {
        // 0x802809C0: nop
    
            goto L_80280A00;
    }
    // 0x802809C0: nop

    // 0x802809C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802809C8: beq         $t1, $at, L_80280A00
    if (ctx->r9 == ctx->r1) {
        // 0x802809CC: nop
    
            goto L_80280A00;
    }
    // 0x802809CC: nop

    // 0x802809D0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x802809D4: beq         $t1, $at, L_80280A00
    if (ctx->r9 == ctx->r1) {
        // 0x802809D8: nop
    
            goto L_80280A00;
    }
    // 0x802809D8: nop

    // 0x802809DC: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x802809E0: beq         $t1, $at, L_80280A00
    if (ctx->r9 == ctx->r1) {
        // 0x802809E4: nop
    
            goto L_80280A00;
    }
    // 0x802809E4: nop

    // 0x802809E8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x802809EC: beq         $t1, $at, L_80280A00
    if (ctx->r9 == ctx->r1) {
        // 0x802809F0: nop
    
            goto L_80280A00;
    }
    // 0x802809F0: nop

    // 0x802809F4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x802809F8: bne         $t1, $at, L_80280A3C
    if (ctx->r9 != ctx->r1) {
        // 0x802809FC: nop
    
            goto L_80280A3C;
    }
    // 0x802809FC: nop

L_80280A00:
    // 0x80280A00: lh          $t2, 0x36($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X36);
    // 0x80280A04: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80280A08: nop

    // 0x80280A0C: beq         $t2, $t3, L_80280A3C
    if (ctx->r10 == ctx->r11) {
        // 0x80280A10: nop
    
            goto L_80280A3C;
    }
    // 0x80280A10: nop

    // 0x80280A14: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280A18: jal         0x8001B62C
    // 0x80280A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_2;
    // 0x80280A1C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80280A20: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80280A24: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280A28: jal         0x8001B580
    // 0x80280A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_3;
    // 0x80280A2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80280A30: nop

    // 0x80280A34: div.s       $f6, $f20, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f0.fl); 
    ctx->f6.fl = DIV_S(ctx->f20.fl, ctx->f0.fl);
    // 0x80280A38: swc1        $f6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f6.u32l;
L_80280A3C:
    // 0x80280A3C: lh          $t4, 0x36($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X36);
    // 0x80280A40: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x80280A44: nop

    // 0x80280A48: beq         $t4, $t5, L_80280A78
    if (ctx->r12 == ctx->r13) {
        // 0x80280A4C: nop
    
            goto L_80280A78;
    }
    // 0x80280A4C: nop

    // 0x80280A50: lui         $t6, 0x8011
    ctx->r14 = S32(0X8011 << 16);
    // 0x80280A54: addiu       $t6, $t6, 0x5F5C
    ctx->r14 = ADD32(ctx->r14, 0X5F5C);
    // 0x80280A58: lh          $a2, 0x36($sp)
    ctx->r6 = MEM_H(ctx->r29, 0X36);
    // 0x80280A5C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80280A60: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280A64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280A68: jal         0x8001C0EC
    // 0x80280A6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_4;
    // 0x80280A6C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_4:
    // 0x80280A70: jal         0x80280000
    // 0x80280A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_4(rdram, ctx);
        goto after_5;
    // 0x80280A74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
L_80280A78:
    // 0x80280A78: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80280A7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280A80: lwc1        $f8, 0x2C($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80280A84: nop

    // 0x80280A88: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80280A8C: nop

    // 0x80280A90: bc1t        L_80280B08
    if (c1cs) {
        // 0x80280A94: nop
    
            goto L_80280B08;
    }
    // 0x80280A94: nop

    // 0x80280A98: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280A9C: jal         0x8001B580
    // 0x80280AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B580(rdram, ctx);
        goto after_6;
    // 0x80280AA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80280AA4: lwc1        $f16, 0x2C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80280AA8: mov.s       $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    ctx->f20.fl = ctx->f0.fl;
    // 0x80280AAC: mul.s       $f18, $f20, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f20.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f20.fl, ctx->f16.fl);
    // 0x80280AB0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280AB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280AB8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80280ABC: nop

    // 0x80280AC0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80280AC4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80280AC8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80280ACC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80280AD0: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x80280AD4: mfc1        $t8, $f4
    ctx->r24 = (int32_t)ctx->f4.u32l;
    // 0x80280AD8: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80280ADC: and         $t9, $t8, $at
    ctx->r25 = ctx->r24 & ctx->r1;
    // 0x80280AE0: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80280AE4: bgez        $t9, L_80280AFC
    if (SIGNED(ctx->r25) >= 0) {
        // 0x80280AE8: cvt.s.w     $f6, $f6
        CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
            goto L_80280AFC;
    }
    // 0x80280AE8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80280AEC: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x80280AF0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280AF4: nop

    // 0x80280AF8: add.s       $f6, $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f6.fl = ctx->f6.fl + ctx->f8.fl;
L_80280AFC:
    // 0x80280AFC: mfc1        $a2, $f6
    ctx->r6 = (int32_t)ctx->f6.u32l;
    // 0x80280B00: jal         0x8001B6BC
    // 0x80280B04: nop

    func_8001B6BC(rdram, ctx);
        goto after_7;
    // 0x80280B04: nop

    after_7:
L_80280B08:
    // 0x80280B08: b           L_80280B10
    // 0x80280B0C: nop

        goto L_80280B10;
    // 0x80280B0C: nop

L_80280B10:
    // 0x80280B10: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80280B14: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80280B18: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80280B1C: jr          $ra
    // 0x80280B20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80280B20: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80280050_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280050: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280054: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280058: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028005C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280060: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280064: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80280068: lwc1        $f9, 0x1600($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1600);
    // 0x8028006C: lwc1        $f8, 0x1604($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X1604);
    // 0x80280070: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280074: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x80280078: jal         0x80034970
    // 0x8028007C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    sinf_game(rdram, ctx);
        goto after_0;
    // 0x8028007C: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_0:
    // 0x80280080: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280084: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280088: nop

    // 0x8028008C: lwc1        $f16, 0x44($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80280090: nop

    // 0x80280094: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x80280098: swc1        $f18, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f18.u32l;
    // 0x8028009C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802800A0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802800A4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802800A8: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x802800AC: lwc1        $f9, 0x1608($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X1608);
    // 0x802800B0: lwc1        $f8, 0x160C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X160C);
    // 0x802800B4: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x802800B8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x802800BC: jal         0x80036570
    // 0x802800C0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    cosf_game(rdram, ctx);
        goto after_1;
    // 0x802800C0: cvt.s.d     $f12, $f10
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f12.fl = CVT_S_D(ctx->f10.d);
    after_1:
    // 0x802800C4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802800C8: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802800CC: nop

    // 0x802800D0: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x802800D4: nop

    // 0x802800D8: mul.s       $f18, $f0, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f0.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f0.fl, ctx->f16.fl);
    // 0x802800DC: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x802800E0: b           L_802800E8
    // 0x802800E4: nop

        goto L_802800E8;
    // 0x802800E4: nop

L_802800E8:
    // 0x802800E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802800EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802800F0: jr          $ra
    // 0x802800F4: nop

    return;
    // 0x802800F4: nop

;}
RECOMP_FUNC void func_80280C28_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280C28: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280C2C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280C30: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280C34: lh          $t6, -0x1D08($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D08);
    // 0x80280C38: nop

    // 0x80280C3C: bne         $t6, $zero, L_80280D74
    if (ctx->r14 != 0) {
        // 0x80280C40: nop
    
            goto L_80280D74;
    }
    // 0x80280C40: nop

    // 0x80280C44: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280C48: lhu         $t7, -0x1C82($t7)
    ctx->r15 = MEM_HU(ctx->r15, -0X1C82);
    // 0x80280C4C: nop

    // 0x80280C50: andi        $t8, $t7, 0x2014
    ctx->r24 = ctx->r15 & 0X2014;
    // 0x80280C54: beq         $t8, $zero, L_80280D10
    if (ctx->r24 == 0) {
        // 0x80280C58: nop
    
            goto L_80280D10;
    }
    // 0x80280C58: nop

    // 0x80280C5C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280C60: lh          $t9, -0x1F00($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1F00);
    // 0x80280C64: nop

    // 0x80280C68: bne         $t9, $zero, L_80280CC4
    if (ctx->r25 != 0) {
        // 0x80280C6C: nop
    
            goto L_80280CC4;
    }
    // 0x80280C6C: nop

    // 0x80280C70: jal         0x80079DFC
    // 0x80280C74: nop

    func_80079DFC(rdram, ctx);
        goto after_0;
    // 0x80280C74: nop

    after_0:
    // 0x80280C78: bne         $v0, $zero, L_80280CBC
    if (ctx->r2 != 0) {
        // 0x80280C7C: nop
    
            goto L_80280CBC;
    }
    // 0x80280C7C: nop

    // 0x80280C80: jal         0x8007DA44
    // 0x80280C84: nop

    func_8007DA44(rdram, ctx);
        goto after_1;
    // 0x80280C84: nop

    after_1:
    // 0x80280C88: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280C8C: lh          $t0, -0x1F00($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1F00);
    // 0x80280C90: nop

    // 0x80280C94: beq         $t0, $zero, L_80280CBC
    if (ctx->r8 == 0) {
        // 0x80280C98: nop
    
            goto L_80280CBC;
    }
    // 0x80280C98: nop

    // 0x80280C9C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280CA0: sh          $zero, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = 0;
    // 0x80280CA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280CA8: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x80280CAC: jal         0x80280944
    // 0x80280CB0: nop

    func_80280944_code_extra_4(rdram, ctx);
        goto after_2;
    // 0x80280CB0: nop

    after_2:
    // 0x80280CB4: b           L_80280DF8
    // 0x80280CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80280DF8;
    // 0x80280CB8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80280CBC:
    // 0x80280CBC: b           L_80280D08
    // 0x80280CC0: nop

        goto L_80280D08;
    // 0x80280CC0: nop

L_80280CC4:
    // 0x80280CC4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280CC8: lh          $t1, -0x1D18($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1D18);
    // 0x80280CCC: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x80280CD0: bne         $t1, $at, L_80280CF4
    if (ctx->r9 != ctx->r1) {
        // 0x80280CD4: nop
    
            goto L_80280CF4;
    }
    // 0x80280CD4: nop

    // 0x80280CD8: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x80280CDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280CE0: sh          $t2, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = ctx->r10;
    // 0x80280CE4: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80280CE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280CEC: b           L_80280D08
    // 0x80280CF0: sh          $t3, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r11;
        goto L_80280D08;
    // 0x80280CF0: sh          $t3, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r11;
L_80280CF4:
    // 0x80280CF4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280CF8: lh          $t4, -0x1D18($t4)
    ctx->r12 = MEM_H(ctx->r12, -0X1D18);
    // 0x80280CFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280D00: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80280D04: sh          $t5, -0x1D18($at)
    MEM_H(-0X1D18, ctx->r1) = ctx->r13;
L_80280D08:
    // 0x80280D08: b           L_80280D6C
    // 0x80280D0C: nop

        goto L_80280D6C;
    // 0x80280D0C: nop

L_80280D10:
    // 0x80280D10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280D14: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x80280D18: nop

    // 0x80280D1C: andi        $t7, $t6, 0x2014
    ctx->r15 = ctx->r14 & 0X2014;
    // 0x80280D20: bne         $t7, $zero, L_80280D6C
    if (ctx->r15 != 0) {
        // 0x80280D24: nop
    
            goto L_80280D6C;
    }
    // 0x80280D24: nop

    // 0x80280D28: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280D2C: lh          $t8, -0x1F00($t8)
    ctx->r24 = MEM_H(ctx->r24, -0X1F00);
    // 0x80280D30: nop

    // 0x80280D34: beq         $t8, $zero, L_80280D6C
    if (ctx->r24 == 0) {
        // 0x80280D38: nop
    
            goto L_80280D6C;
    }
    // 0x80280D38: nop

    // 0x80280D3C: jal         0x8007DB2C
    // 0x80280D40: nop

    func_8007DB2C(rdram, ctx);
        goto after_3;
    // 0x80280D40: nop

    after_3:
    // 0x80280D44: jal         0x80280944
    // 0x80280D48: nop

    func_80280944_code_extra_4(rdram, ctx);
        goto after_4;
    // 0x80280D48: nop

    after_4:
    // 0x80280D4C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280D50: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280D54: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80280D58: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80280D5C: jal         0x800178D4
    // 0x80280D60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_5;
    // 0x80280D60: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_5:
    // 0x80280D64: b           L_80280DF8
    // 0x80280D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80280DF8;
    // 0x80280D68: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80280D6C:
    // 0x80280D6C: b           L_80280DE8
    // 0x80280D70: nop

        goto L_80280DE8;
    // 0x80280D70: nop

L_80280D74:
    // 0x80280D74: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280D78: lhu         $t9, -0x1C82($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C82);
    // 0x80280D7C: nop

    // 0x80280D80: andi        $t0, $t9, 0x2014
    ctx->r8 = ctx->r25 & 0X2014;
    // 0x80280D84: beq         $t0, $zero, L_80280DC0
    if (ctx->r8 == 0) {
        // 0x80280D88: nop
    
            goto L_80280DC0;
    }
    // 0x80280D88: nop

    // 0x80280D8C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280D90: lh          $t1, -0x1D08($t1)
    ctx->r9 = MEM_H(ctx->r9, -0X1D08);
    // 0x80280D94: nop

    // 0x80280D98: slti        $at, $t1, 0x3E9
    ctx->r1 = SIGNED(ctx->r9) < 0X3E9 ? 1 : 0;
    // 0x80280D9C: beq         $at, $zero, L_80280DB8
    if (ctx->r1 == 0) {
        // 0x80280DA0: nop
    
            goto L_80280DB8;
    }
    // 0x80280DA0: nop

    // 0x80280DA4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280DA8: lh          $t2, -0x1D08($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1D08);
    // 0x80280DAC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280DB0: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x80280DB4: sh          $t3, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = ctx->r11;
L_80280DB8:
    // 0x80280DB8: b           L_80280DE8
    // 0x80280DBC: nop

        goto L_80280DE8;
    // 0x80280DBC: nop

L_80280DC0:
    // 0x80280DC0: jal         0x8007DD60
    // 0x80280DC4: nop

    func_8007DD60(rdram, ctx);
        goto after_6;
    // 0x80280DC4: nop

    after_6:
    // 0x80280DC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280DCC: sh          $zero, -0x1D08($at)
    MEM_H(-0X1D08, ctx->r1) = 0;
    // 0x80280DD0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280DD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280DD8: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80280DDC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80280DE0: jal         0x800178D4
    // 0x80280DE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_7;
    // 0x80280DE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_7:
L_80280DE8:
    // 0x80280DE8: b           L_80280DF8
    // 0x80280DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80280DF8;
    // 0x80280DEC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80280DF0: b           L_80280DF8
    // 0x80280DF4: nop

        goto L_80280DF8;
    // 0x80280DF4: nop

L_80280DF8:
    // 0x80280DF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280DFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80280E00: jr          $ra
    // 0x80280E04: nop

    return;
    // 0x80280E04: nop

;}
RECOMP_FUNC void func_80281064_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281064: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80281068: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028106C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281070: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x80281074: nop

    // 0x80281078: slti        $at, $t6, 0x78
    ctx->r1 = SIGNED(ctx->r14) < 0X78 ? 1 : 0;
    // 0x8028107C: bne         $at, $zero, L_80281090
    if (ctx->r1 != 0) {
        // 0x80281080: nop
    
            goto L_80281090;
    }
    // 0x80281080: nop

    // 0x80281084: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80281088: jal         0x80069A54
    // 0x8028108C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x8028108C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80281090:
    // 0x80281090: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281094: lbu         $t7, -0x1F70($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F70);
    // 0x80281098: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028109C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x802810A0: sb          $t8, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r24;
    // 0x802810A4: b           L_802810AC
    // 0x802810A8: nop

        goto L_802810AC;
    // 0x802810A8: nop

L_802810AC:
    // 0x802810AC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802810B0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802810B4: jr          $ra
    // 0x802810B8: nop

    return;
    // 0x802810B8: nop

;}
RECOMP_FUNC void func_80280E08_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280E08: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280E0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280E10: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280E14: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280E18: addiu       $at, $zero, 0x3D
    ctx->r1 = ADD32(0, 0X3D);
    // 0x80280E1C: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80280E20: nop

    // 0x80280E24: beq         $t7, $at, L_80280E34
    if (ctx->r15 == ctx->r1) {
        // 0x80280E28: nop
    
            goto L_80280E34;
    }
    // 0x80280E28: nop

    // 0x80280E2C: bne         $t7, $zero, L_80280F14
    if (ctx->r15 != 0) {
        // 0x80280E30: nop
    
            goto L_80280F14;
    }
    // 0x80280E30: nop

L_80280E34:
    // 0x80280E34: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280E38: lbu         $t8, -0x1F78($t8)
    ctx->r24 = MEM_BU(ctx->r24, -0X1F78);
    // 0x80280E3C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80280E40: bne         $t8, $at, L_80280E68
    if (ctx->r24 != ctx->r1) {
        // 0x80280E44: nop
    
            goto L_80280E68;
    }
    // 0x80280E44: nop

    // 0x80280E48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280E4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280E50: addiu       $a2, $zero, 0x72
    ctx->r6 = ADD32(0, 0X72);
    // 0x80280E54: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80280E58: jal         0x800178D4
    // 0x80280E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x80280E5C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80280E60: b           L_80280EE8
    // 0x80280E64: nop

        goto L_80280EE8;
    // 0x80280E64: nop

L_80280E68:
    // 0x80280E68: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280E6C: lbu         $t9, -0x1F78($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X1F78);
    // 0x80280E70: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80280E74: bne         $t9, $at, L_80280E9C
    if (ctx->r25 != ctx->r1) {
        // 0x80280E78: nop
    
            goto L_80280E9C;
    }
    // 0x80280E78: nop

    // 0x80280E7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280E80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280E84: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80280E88: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80280E8C: jal         0x800178D4
    // 0x80280E90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80280E90: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80280E94: b           L_80280EE8
    // 0x80280E98: nop

        goto L_80280EE8;
    // 0x80280E98: nop

L_80280E9C:
    // 0x80280E9C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280EA0: lbu         $t0, -0x1F78($t0)
    ctx->r8 = MEM_BU(ctx->r8, -0X1F78);
    // 0x80280EA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80280EA8: bne         $t0, $at, L_80280EE8
    if (ctx->r8 != ctx->r1) {
        // 0x80280EAC: nop
    
            goto L_80280EE8;
    }
    // 0x80280EAC: nop

    // 0x80280EB0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280EB4: lbu         $t1, -0x1F80($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X1F80);
    // 0x80280EB8: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80280EBC: beq         $t1, $at, L_80280ED0
    if (ctx->r9 == ctx->r1) {
        // 0x80280EC0: nop
    
            goto L_80280ED0;
    }
    // 0x80280EC0: nop

    // 0x80280EC4: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80280EC8: bne         $t1, $at, L_80280EE8
    if (ctx->r9 != ctx->r1) {
        // 0x80280ECC: nop
    
            goto L_80280EE8;
    }
    // 0x80280ECC: nop

L_80280ED0:
    // 0x80280ED0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280ED8: addiu       $a2, $zero, 0x73
    ctx->r6 = ADD32(0, 0X73);
    // 0x80280EDC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80280EE0: jal         0x800178D4
    // 0x80280EE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80280EE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_80280EE8:
    // 0x80280EE8: jal         0x80280B24
    // 0x80280EEC: nop

    func_80280B24_code_extra_4(rdram, ctx);
        goto after_3;
    // 0x80280EEC: nop

    after_3:
    // 0x80280EF0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280EF4: lh          $t2, -0x1F00($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1F00);
    // 0x80280EF8: nop

    // 0x80280EFC: beq         $t2, $zero, L_80280F0C
    if (ctx->r10 == 0) {
        // 0x80280F00: nop
    
            goto L_80280F0C;
    }
    // 0x80280F00: nop

    // 0x80280F04: jal         0x8007DB2C
    // 0x80280F08: nop

    func_8007DB2C(rdram, ctx);
        goto after_4;
    // 0x80280F08: nop

    after_4:
L_80280F0C:
    // 0x80280F0C: b           L_80280F24
    // 0x80280F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80280F24;
    // 0x80280F10: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80280F14:
    // 0x80280F14: b           L_80280F24
    // 0x80280F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80280F24;
    // 0x80280F18: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80280F1C: b           L_80280F24
    // 0x80280F20: nop

        goto L_80280F24;
    // 0x80280F20: nop

L_80280F24:
    // 0x80280F24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280F28: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280F2C: jr          $ra
    // 0x80280F30: nop

    return;
    // 0x80280F30: nop

;}
RECOMP_FUNC void func_802800F8_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802800F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802800FC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280100: addiu       $at, $zero, 0x193
    ctx->r1 = ADD32(0, 0X193);
    // 0x80280104: lh          $t7, 0xA4($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA4);
    // 0x80280108: nop

    // 0x8028010C: bne         $t7, $at, L_8028012C
    if (ctx->r15 != ctx->r1) {
        // 0x80280110: nop
    
            goto L_8028012C;
    }
    // 0x80280110: nop

    // 0x80280114: lui         $at, 0xC080
    ctx->r1 = S32(0XC080 << 16);
    // 0x80280118: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028011C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280120: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280124: b           L_80280360
    // 0x80280128: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
        goto L_80280360;
    // 0x80280128: swc1        $f4, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f4.u32l;
L_8028012C:
    // 0x8028012C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280130: lhu         $t9, -0x1C82($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C82);
    // 0x80280134: nop

    // 0x80280138: andi        $t0, $t9, 0x4000
    ctx->r8 = ctx->r25 & 0X4000;
    // 0x8028013C: beq         $t0, $zero, L_8028023C
    if (ctx->r8 == 0) {
        // 0x80280140: nop
    
            goto L_8028023C;
    }
    // 0x80280140: nop

    // 0x80280144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280148: lwc1        $f6, 0x6450($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x8028014C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80280150: nop

    // 0x80280154: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80280158: nop

    // 0x8028015C: bc1f        L_802801C0
    if (!c1cs) {
        // 0x80280160: nop
    
            goto L_802801C0;
    }
    // 0x80280160: nop

    // 0x80280164: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280168: lwc1        $f10, 0x6450($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x8028016C: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80280170: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x80280174: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280178: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x8028017C: sub.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d - ctx->f18.d;
    // 0x80280180: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280184: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80280188: swc1        $f6, 0x6450($at)
    MEM_W(0X6450, ctx->r1) = ctx->f6.u32l;
    // 0x8028018C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280190: lwc1        $f8, 0x6450($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x80280194: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80280198: nop

    // 0x8028019C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802801A0: nop

    // 0x802801A4: bc1f        L_802801B8
    if (!c1cs) {
        // 0x802801A8: nop
    
            goto L_802801B8;
    }
    // 0x802801A8: nop

    // 0x802801AC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802801B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802801B4: swc1        $f16, 0x6450($at)
    MEM_W(0X6450, ctx->r1) = ctx->f16.u32l;
L_802801B8:
    // 0x802801B8: b           L_80280234
    // 0x802801BC: nop

        goto L_80280234;
    // 0x802801BC: nop

L_802801C0:
    // 0x802801C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802801C4: lwc1        $f18, 0x6450($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x802801C8: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802801CC: nop

    // 0x802801D0: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802801D4: nop

    // 0x802801D8: bc1f        L_80280234
    if (!c1cs) {
        // 0x802801DC: nop
    
            goto L_80280234;
    }
    // 0x802801DC: nop

    // 0x802801E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802801E4: lwc1        $f6, 0x6450($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x802801E8: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x802801EC: mtc1        $at, $f11
    ctx->f_odd[(11 - 1) * 2] = ctx->r1;
    // 0x802801F0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802801F4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802801F8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802801FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280200: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80280204: swc1        $f18, 0x6450($at)
    MEM_W(0X6450, ctx->r1) = ctx->f18.u32l;
    // 0x80280208: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028020C: lwc1        $f4, 0x6450($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x80280210: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280214: nop

    // 0x80280218: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8028021C: nop

    // 0x80280220: bc1f        L_80280234
    if (!c1cs) {
        // 0x80280224: nop
    
            goto L_80280234;
    }
    // 0x80280224: nop

    // 0x80280228: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028022C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280230: swc1        $f8, 0x6450($at)
    MEM_W(0X6450, ctx->r1) = ctx->f8.u32l;
L_80280234:
    // 0x80280234: b           L_80280348
    // 0x80280238: nop

        goto L_80280348;
    // 0x80280238: nop

L_8028023C:
    // 0x8028023C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280240: lhu         $t1, -0x1C82($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C82);
    // 0x80280244: nop

    // 0x80280248: andi        $t2, $t1, 0x8000
    ctx->r10 = ctx->r9 & 0X8000;
    // 0x8028024C: beq         $t2, $zero, L_802802D4
    if (ctx->r10 == 0) {
        // 0x80280250: nop
    
            goto L_802802D4;
    }
    // 0x80280250: nop

    // 0x80280254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280258: lwc1        $f10, 0x6450($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x8028025C: lui         $at, 0x40E0
    ctx->r1 = S32(0X40E0 << 16);
    // 0x80280260: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280264: nop

    // 0x80280268: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x8028026C: nop

    // 0x80280270: bc1f        L_802802A0
    if (!c1cs) {
        // 0x80280274: nop
    
            goto L_802802A0;
    }
    // 0x80280274: nop

    // 0x80280278: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028027C: lwc1        $f18, 0x6450($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x80280280: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80280284: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80280288: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028028C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80280290: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80280294: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280298: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8028029C: swc1        $f10, 0x6450($at)
    MEM_W(0X6450, ctx->r1) = ctx->f10.u32l;
L_802802A0:
    // 0x802802A0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802802A4: lh          $t3, 0x65B8($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X65B8);
    // 0x802802A8: nop

    // 0x802802AC: slti        $at, $t3, 0x32
    ctx->r1 = SIGNED(ctx->r11) < 0X32 ? 1 : 0;
    // 0x802802B0: beq         $at, $zero, L_802802CC
    if (ctx->r1 == 0) {
        // 0x802802B4: nop
    
            goto L_802802CC;
    }
    // 0x802802B4: nop

    // 0x802802B8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802802BC: lh          $t4, 0x65B8($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X65B8);
    // 0x802802C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802802C4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x802802C8: sh          $t5, 0x65B8($at)
    MEM_H(0X65B8, ctx->r1) = ctx->r13;
L_802802CC:
    // 0x802802CC: b           L_80280348
    // 0x802802D0: nop

        goto L_80280348;
    // 0x802802D0: nop

L_802802D4:
    // 0x802802D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802802D8: lwc1        $f16, 0x6450($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x802802DC: lui         $at, 0xC0E0
    ctx->r1 = S32(0XC0E0 << 16);
    // 0x802802E0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802802E4: nop

    // 0x802802E8: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x802802EC: nop

    // 0x802802F0: bc1f        L_80280320
    if (!c1cs) {
        // 0x802802F4: nop
    
            goto L_80280320;
    }
    // 0x802802F4: nop

    // 0x802802F8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802802FC: lwc1        $f4, 0x6450($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x80280300: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80280304: mtc1        $at, $f9
    ctx->f_odd[(9 - 1) * 2] = ctx->r1;
    // 0x80280308: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028030C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280310: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x80280314: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280318: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8028031C: swc1        $f16, 0x6450($at)
    MEM_W(0X6450, ctx->r1) = ctx->f16.u32l;
L_80280320:
    // 0x80280320: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280324: lh          $t6, 0x65B8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X65B8);
    // 0x80280328: nop

    // 0x8028032C: beq         $t6, $zero, L_80280348
    if (ctx->r14 == 0) {
        // 0x80280330: nop
    
            goto L_80280348;
    }
    // 0x80280330: nop

    // 0x80280334: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280338: lh          $t7, 0x65B8($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X65B8);
    // 0x8028033C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280340: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80280344: sh          $t8, 0x65B8($at)
    MEM_H(0X65B8, ctx->r1) = ctx->r24;
L_80280348:
    // 0x80280348: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028034C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280350: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280354: lwc1        $f18, 0x6450($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6450);
    // 0x80280358: nop

    // 0x8028035C: swc1        $f18, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f18.u32l;
L_80280360:
    // 0x80280360: jr          $ra
    // 0x80280364: nop

    return;
    // 0x80280364: nop

    // 0x80280368: jr          $ra
    // 0x8028036C: nop

    return;
    // 0x8028036C: nop

;}
RECOMP_FUNC void func_80280FA4_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280FA4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280FA8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280FAC: jal         0x80085D54
    // 0x80280FB0: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80280FB0: nop

    after_0:
    // 0x80280FB4: beq         $v0, $zero, L_80280FC4
    if (ctx->r2 == 0) {
        // 0x80280FB8: nop
    
            goto L_80280FC4;
    }
    // 0x80280FB8: nop

    // 0x80280FBC: b           L_80281054
    // 0x80280FC0: nop

        goto L_80281054;
    // 0x80280FC0: nop

L_80280FC4:
    // 0x80280FC4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280FC8: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280FCC: nop

    // 0x80280FD0: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80280FD4: nop

    // 0x80280FD8: bne         $t7, $zero, L_80281018
    if (ctx->r15 != 0) {
        // 0x80280FDC: nop
    
            goto L_80281018;
    }
    // 0x80280FDC: nop

    // 0x80280FE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280FE4: jal         0x8001B62C
    // 0x80280FE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_1;
    // 0x80280FE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80280FEC: lui         $at, 0x41C0
    ctx->r1 = S32(0X41C0 << 16);
    // 0x80280FF0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280FF4: nop

    // 0x80280FF8: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80280FFC: nop

    // 0x80281000: bc1f        L_80281010
    if (!c1cs) {
        // 0x80281004: nop
    
            goto L_80281010;
    }
    // 0x80281004: nop

    // 0x80281008: jal         0x80280BA4
    // 0x8028100C: nop

    func_80280BA4_code_extra_4(rdram, ctx);
        goto after_2;
    // 0x8028100C: nop

    after_2:
L_80281010:
    // 0x80281010: b           L_8028104C
    // 0x80281014: nop

        goto L_8028104C;
    // 0x80281014: nop

L_80281018:
    // 0x80281018: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028101C: jal         0x8001B44C
    // 0x80281020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80281020: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80281024: beq         $v0, $zero, L_8028104C
    if (ctx->r2 == 0) {
        // 0x80281028: nop
    
            goto L_8028104C;
    }
    // 0x80281028: nop

    // 0x8028102C: jal         0x80280944
    // 0x80281030: nop

    func_80280944_code_extra_4(rdram, ctx);
        goto after_4;
    // 0x80281030: nop

    after_4:
    // 0x80281034: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281038: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028103C: addiu       $t8, $zero, 0x3C
    ctx->r24 = ADD32(0, 0X3C);
    // 0x80281040: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x80281044: b           L_80281054
    // 0x80281048: nop

        goto L_80281054;
    // 0x80281048: nop

L_8028104C:
    // 0x8028104C: b           L_80281054
    // 0x80281050: nop

        goto L_80281054;
    // 0x80281050: nop

L_80281054:
    // 0x80281054: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80281058: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028105C: jr          $ra
    // 0x80281060: nop

    return;
    // 0x80281060: nop

;}
RECOMP_FUNC void func_80281440_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281440: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80281444: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80281448: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028144C: addiu       $t6, $t6, -0x3560
    ctx->r14 = ADD32(ctx->r14, -0X3560);
    // 0x80281450: lw          $a3, 0x8($t6)
    ctx->r7 = MEM_W(ctx->r14, 0X8);
    // 0x80281454: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281458: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028145C: jal         0x8001BD44
    // 0x80281460: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    func_8001BD44(rdram, ctx);
        goto after_0;
    // 0x80281460: addiu       $a2, $zero, 0x12
    ctx->r6 = ADD32(0, 0X12);
    after_0:
    // 0x80281464: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80281468: addiu       $t7, $t7, 0x5F5C
    ctx->r15 = ADD32(ctx->r15, 0X5F5C);
    // 0x8028146C: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80281470: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281474: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80281478: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8028147C: jal         0x8001C0EC
    // 0x80281480: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80281480: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x80281484: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281488: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028148C: addiu       $t8, $zero, 0x4
    ctx->r24 = ADD32(0, 0X4);
    // 0x80281490: sh          $t8, 0xE4($t9)
    MEM_H(0XE4, ctx->r25) = ctx->r24;
    // 0x80281494: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281498: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028149C: addiu       $t0, $zero, 0x191
    ctx->r8 = ADD32(0, 0X191);
    // 0x802814A0: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x802814A4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802814A8: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x802814AC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x802814B0: jal         0x80019448
    // 0x802814B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_80019448(rdram, ctx);
        goto after_2;
    // 0x802814B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x802814B8: jal         0x80280000
    // 0x802814BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_4(rdram, ctx);
        goto after_3;
    // 0x802814BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_3:
    // 0x802814C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802814C4: sh          $zero, -0x1BDA($at)
    MEM_H(-0X1BDA, ctx->r1) = 0;
    // 0x802814C8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802814CC: sb          $zero, -0x1BD4($at)
    MEM_B(-0X1BD4, ctx->r1) = 0;
    // 0x802814D0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802814D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802814D8: swc1        $f4, -0x1BB8($at)
    MEM_W(-0X1BB8, ctx->r1) = ctx->f4.u32l;
    // 0x802814DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802814E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802814E4: swc1        $f6, 0x6450($at)
    MEM_W(0X6450, ctx->r1) = ctx->f6.u32l;
    // 0x802814E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802814EC: sh          $zero, 0x65B8($at)
    MEM_H(0X65B8, ctx->r1) = 0;
    // 0x802814F0: b           L_802814F8
    // 0x802814F4: nop

        goto L_802814F8;
    // 0x802814F4: nop

L_802814F8:
    // 0x802814F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802814FC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80281500: jr          $ra
    // 0x80281504: nop

    return;
    // 0x80281504: nop

    // 0x80281508: nop

    // 0x8028150C: nop

;}
RECOMP_FUNC void func_802810BC_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802810BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802810C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802810C4: jal         0x80280450
    // 0x802810C8: nop

    func_80280450_code_extra_4(rdram, ctx);
        goto after_0;
    // 0x802810C8: nop

    after_0:
    // 0x802810CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x802810D0: lh          $a0, -0x1BDA($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1BDA);
    // 0x802810D4: jal         0x80280738
    // 0x802810D8: nop

    func_80280738_code_extra_4(rdram, ctx);
        goto after_1;
    // 0x802810D8: nop

    after_1:
    // 0x802810DC: b           L_802810E4
    // 0x802810E0: nop

        goto L_802810E4;
    // 0x802810E0: nop

L_802810E4:
    // 0x802810E4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802810E8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802810EC: jr          $ra
    // 0x802810F0: nop

    return;
    // 0x802810F0: nop

;}
RECOMP_FUNC void func_802808DC_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802808DC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x802808E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802808E4: lh          $t6, 0x65B8($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X65B8);
    // 0x802808E8: nop

    // 0x802808EC: bgtz        $t6, L_802808FC
    if (SIGNED(ctx->r14) > 0) {
        // 0x802808F0: nop
    
            goto L_802808FC;
    }
    // 0x802808F0: nop

    // 0x802808F4: b           L_80280928
    // 0x802808F8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
        goto L_80280928;
    // 0x802808F8: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_802808FC:
    // 0x802808FC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280900: lh          $t7, 0x65B8($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X65B8);
    // 0x80280904: nop

    // 0x80280908: slti        $at, $t7, 0x32
    ctx->r1 = SIGNED(ctx->r15) < 0X32 ? 1 : 0;
    // 0x8028090C: beq         $at, $zero, L_80280920
    if (ctx->r1 == 0) {
        // 0x80280910: nop
    
            goto L_80280920;
    }
    // 0x80280910: nop

    // 0x80280914: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x80280918: b           L_80280928
    // 0x8028091C: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
        goto L_80280928;
    // 0x8028091C: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
L_80280920:
    // 0x80280920: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80280924: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
L_80280928:
    // 0x80280928: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x8028092C: b           L_8028093C
    // 0x80280930: nop

        goto L_8028093C;
    // 0x80280930: nop

    // 0x80280934: b           L_8028093C
    // 0x80280938: nop

        goto L_8028093C;
    // 0x80280938: nop

L_8028093C:
    // 0x8028093C: jr          $ra
    // 0x80280940: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80280940: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80280BA4_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280BA4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280BA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280BAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280BB0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280BB4: addiu       $t6, $zero, 0x193
    ctx->r14 = ADD32(0, 0X193);
    // 0x80280BB8: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80280BBC: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80280BC0: addiu       $t8, $t8, 0x5F5C
    ctx->r24 = ADD32(ctx->r24, 0X5F5C);
    // 0x80280BC4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80280BC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280BCC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280BD0: addiu       $a2, $zero, 0x7
    ctx->r6 = ADD32(0, 0X7);
    // 0x80280BD4: jal         0x8001C0EC
    // 0x80280BD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80280BD8: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80280BDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280BE0: sb          $zero, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = 0;
    // 0x80280BE4: jal         0x80280000
    // 0x80280BE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_80280000_code_extra_4(rdram, ctx);
        goto after_1;
    // 0x80280BE8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_1:
    // 0x80280BEC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280BF0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280BF4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80280BF8: nop

    // 0x80280BFC: swc1        $f4, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f4.u32l;
    // 0x80280C00: addiu       $a0, $zero, 0x5A
    ctx->r4 = ADD32(0, 0X5A);
    // 0x80280C04: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80280C08: jal         0x8001FB3C
    // 0x80280C0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80280C0C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x80280C10: b           L_80280C18
    // 0x80280C14: nop

        goto L_80280C18;
    // 0x80280C14: nop

L_80280C18:
    // 0x80280C18: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280C1C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280C20: jr          $ra
    // 0x80280C24: nop

    return;
    // 0x80280C24: nop

;}
RECOMP_FUNC void func_80280450_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280450: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80280454: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280458: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028045C: sb          $zero, -0x1BD4($at)
    MEM_B(-0X1BD4, ctx->r1) = 0;
    // 0x80280460: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x80280464: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280468: lh          $t6, -0x1BDA($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1BDA);
    // 0x8028046C: nop

    // 0x80280470: beq         $t6, $zero, L_8028051C
    if (ctx->r14 == 0) {
        // 0x80280474: nop
    
            goto L_8028051C;
    }
    // 0x80280474: nop

    // 0x80280478: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028047C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280480: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80280484: lwc1        $f14, 0x51D4($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x80280488: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x8028048C: jal         0x800157EC
    // 0x80280490: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_800157EC(rdram, ctx);
        goto after_0;
    // 0x80280490: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_0:
    // 0x80280494: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x80280498: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8028049C: nop

    // 0x802804A0: bne         $t8, $zero, L_802804C0
    if (ctx->r24 != 0) {
        // 0x802804A4: nop
    
            goto L_802804C0;
    }
    // 0x802804A4: nop

    // 0x802804A8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802804AC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802804B0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802804B4: lwc1        $f4, 0x51D4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X51D4);
    // 0x802804B8: b           L_8028051C
    // 0x802804BC: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
        goto L_8028051C;
    // 0x802804BC: swc1        $f4, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f4.u32l;
L_802804C0:
    // 0x802804C0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x802804C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802804C8: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x802804CC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x802804D0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802804D4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x802804D8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x802804DC: lwc1        $f12, 0x3C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x802804E0: jal         0x80015538
    // 0x802804E4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x802804E4: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_1:
    // 0x802804E8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802804EC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802804F0: nop

    // 0x802804F4: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x802804F8: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x802804FC: nop

    // 0x80280500: blez        $t4, L_80280514
    if (SIGNED(ctx->r12) <= 0) {
        // 0x80280504: nop
    
            goto L_80280514;
    }
    // 0x80280504: nop

    // 0x80280508: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8028050C: b           L_8028051C
    // 0x80280510: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
        goto L_8028051C;
    // 0x80280510: sw          $t5, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r13;
L_80280514:
    // 0x80280514: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80280518: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
L_8028051C:
    // 0x8028051C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280520: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280524: lui         $a2, 0x40E0
    ctx->r6 = S32(0X40E0 << 16);
    // 0x80280528: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8028052C: lwc1        $f14, 0x3C($t7)
    ctx->f14.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80280530: jal         0x800157EC
    // 0x80280534: nop

    func_800157EC(rdram, ctx);
        goto after_2;
    // 0x80280534: nop

    after_2:
    // 0x80280538: mtc1        $v0, $f8
    ctx->f8.u32l = ctx->r2;
    // 0x8028053C: nop

    // 0x80280540: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80280544: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
    // 0x80280548: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8028054C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280550: nop

    // 0x80280554: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80280558: nop

    // 0x8028055C: bc1f        L_8028057C
    if (!c1cs) {
        // 0x80280560: nop
    
            goto L_8028057C;
    }
    // 0x80280560: nop

    // 0x80280564: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280568: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028056C: nop

    // 0x80280570: lwc1        $f4, 0x3C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80280574: b           L_802805B0
    // 0x80280578: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
        goto L_802805B0;
    // 0x80280578: swc1        $f4, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f4.u32l;
L_8028057C:
    // 0x8028057C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280580: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x80280584: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280588: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028058C: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80280590: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80280594: mul.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80280598: jal         0x80015538
    // 0x8028059C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8028059C: nop

    after_3:
    // 0x802805A0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802805A4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802805A8: nop

    // 0x802805AC: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
L_802805B0:
    // 0x802805B0: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x802805B4: nop

    // 0x802805B8: blez        $t1, L_80280618
    if (SIGNED(ctx->r9) <= 0) {
        // 0x802805BC: nop
    
            goto L_80280618;
    }
    // 0x802805BC: nop

    // 0x802805C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802805C4: lwc1        $f10, -0x1BB8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x802805C8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802805CC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802805D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802805D4: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x802805D8: swc1        $f18, -0x1BB8($at)
    MEM_W(-0X1BB8, ctx->r1) = ctx->f18.u32l;
    // 0x802805DC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802805E0: lwc1        $f4, -0x1BB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x802805E4: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x802805E8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802805EC: nop

    // 0x802805F0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802805F4: nop

    // 0x802805F8: bc1f        L_80280610
    if (!c1cs) {
        // 0x802805FC: nop
    
            goto L_80280610;
    }
    // 0x802805FC: nop

    // 0x80280600: lui         $at, 0xC220
    ctx->r1 = S32(0XC220 << 16);
    // 0x80280604: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280608: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028060C: swc1        $f8, -0x1BB8($at)
    MEM_W(-0X1BB8, ctx->r1) = ctx->f8.u32l;
L_80280610:
    // 0x80280610: b           L_802806FC
    // 0x80280614: nop

        goto L_802806FC;
    // 0x80280614: nop

L_80280618:
    // 0x80280618: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8028061C: nop

    // 0x80280620: bgez        $t2, L_80280680
    if (SIGNED(ctx->r10) >= 0) {
        // 0x80280624: nop
    
            goto L_80280680;
    }
    // 0x80280624: nop

    // 0x80280628: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028062C: lwc1        $f10, -0x1BB8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x80280630: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80280634: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280638: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028063C: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80280640: swc1        $f18, -0x1BB8($at)
    MEM_W(-0X1BB8, ctx->r1) = ctx->f18.u32l;
    // 0x80280644: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280648: lwc1        $f4, -0x1BB8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x8028064C: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x80280650: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280654: nop

    // 0x80280658: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8028065C: nop

    // 0x80280660: bc1f        L_80280678
    if (!c1cs) {
        // 0x80280664: nop
    
            goto L_80280678;
    }
    // 0x80280664: nop

    // 0x80280668: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8028066C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280670: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280674: swc1        $f8, -0x1BB8($at)
    MEM_W(-0X1BB8, ctx->r1) = ctx->f8.u32l;
L_80280678:
    // 0x80280678: b           L_802806FC
    // 0x8028067C: nop

        goto L_802806FC;
    // 0x8028067C: nop

L_80280680:
    // 0x80280680: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280684: lwc1        $f10, -0x1BB8($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x80280688: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028068C: nop

    // 0x80280690: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x80280694: nop

    // 0x80280698: bc1f        L_802806C0
    if (!c1cs) {
        // 0x8028069C: nop
    
            goto L_802806C0;
    }
    // 0x8028069C: nop

    // 0x802806A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806A4: lwc1        $f18, -0x1BB8($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x802806A8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802806AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802806B0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806B4: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x802806B8: b           L_802806FC
    // 0x802806BC: swc1        $f6, -0x1BB8($at)
    MEM_W(-0X1BB8, ctx->r1) = ctx->f6.u32l;
        goto L_802806FC;
    // 0x802806BC: swc1        $f6, -0x1BB8($at)
    MEM_W(-0X1BB8, ctx->r1) = ctx->f6.u32l;
L_802806C0:
    // 0x802806C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806C4: lwc1        $f8, -0x1BB8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x802806C8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x802806CC: nop

    // 0x802806D0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x802806D4: nop

    // 0x802806D8: bc1f        L_802806FC
    if (!c1cs) {
        // 0x802806DC: nop
    
            goto L_802806FC;
    }
    // 0x802806DC: nop

    // 0x802806E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806E4: lwc1        $f16, -0x1BB8($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x802806E8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802806EC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802806F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802806F4: add.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl + ctx->f18.fl;
    // 0x802806F8: swc1        $f4, -0x1BB8($at)
    MEM_W(-0X1BB8, ctx->r1) = ctx->f4.u32l;
L_802806FC:
    // 0x802806FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280700: lwc1        $f14, -0x1BB8($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X1BB8);
    // 0x80280704: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80280708: jal         0x80015538
    // 0x8028070C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8028070C: nop

    after_4:
    // 0x80280710: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280714: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280718: nop

    // 0x8028071C: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    // 0x80280720: b           L_80280728
    // 0x80280724: nop

        goto L_80280728;
    // 0x80280724: nop

L_80280728:
    // 0x80280728: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028072C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80280730: jr          $ra
    // 0x80280734: nop

    return;
    // 0x80280734: nop

;}
RECOMP_FUNC void func_80280000_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280000: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280004: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280008: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8028000C: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x80280010: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80280014: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x80280018: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8028001C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80280020: addiu       $t8, $t8, 0x5FE8
    ctx->r24 = ADD32(ctx->r24, 0X5FE8);
    // 0x80280024: addu        $a3, $t7, $t8
    ctx->r7 = ADD32(ctx->r15, ctx->r24);
    // 0x80280028: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028002C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280030: jal         0x8001ABF4
    // 0x80280034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x80280034: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80280038: b           L_80280040
    // 0x8028003C: nop

        goto L_80280040;
    // 0x8028003C: nop

L_80280040:
    // 0x80280040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280048: jr          $ra
    // 0x8028004C: nop

    return;
    // 0x8028004C: nop

;}
RECOMP_FUNC void func_80280B24_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280B24: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80280B28: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280B2C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280B30: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280B34: addiu       $t6, $zero, 0x192
    ctx->r14 = ADD32(0, 0X192);
    // 0x80280B38: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80280B3C: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80280B40: addiu       $t8, $t8, 0x5F5C
    ctx->r24 = ADD32(ctx->r24, 0X5F5C);
    // 0x80280B44: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80280B48: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280B4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280B50: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80280B54: jal         0x8001C0EC
    // 0x80280B58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80280B58: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80280B5C: jal         0x80280000
    // 0x80280B60: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    func_80280000_code_extra_4(rdram, ctx);
        goto after_1;
    // 0x80280B60: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    after_1:
    // 0x80280B64: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x80280B68: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x80280B6C: jal         0x8001FB3C
    // 0x80280B70: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x80280B70: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_2:
    // 0x80280B74: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80280B78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80280B7C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80280B80: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80280B84: jal         0x800178D4
    // 0x80280B88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80280B88: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80280B8C: b           L_80280B94
    // 0x80280B90: nop

        goto L_80280B94;
    // 0x80280B90: nop

L_80280B94:
    // 0x80280B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80280B98: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80280B9C: jr          $ra
    // 0x80280BA0: nop

    return;
    // 0x80280BA0: nop

;}
RECOMP_FUNC void func_802812AC_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802812AC: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x802812B0: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x802812B4: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802812B8: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x802812BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802812C0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802812C4: nop

    // 0x802812C8: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x802812CC: nop

    // 0x802812D0: bne         $t7, $zero, L_80281414
    if (ctx->r15 != 0) {
        // 0x802812D4: nop
    
            goto L_80281414;
    }
    // 0x802812D4: nop

    // 0x802812D8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802812DC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802812E0: nop

    // 0x802812E4: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x802812E8: nop

    // 0x802812EC: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802812F0: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x802812F4: jal         0x8001819C
    // 0x802812F8: nop

    Reset_LightSettings(rdram, ctx);
        goto after_0;
    // 0x802812F8: nop

    after_0:
    // 0x802812FC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281300: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281304: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80281308: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x8028130C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281310: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281314: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80281318: nop

    // 0x8028131C: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x80281320: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80281324: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281328: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028132C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281330: nop

    // 0x80281334: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x80281338: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8028133C: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281340: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80281344: nop

    // 0x80281348: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x8028134C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281350: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281354: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281358: nop

    // 0x8028135C: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x80281360: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281364: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281368: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028136C: nop

    // 0x80281370: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x80281374: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281378: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028137C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281380: nop

    // 0x80281384: swc1        $f18, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f18.u32l;
    // 0x80281388: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8028138C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281390: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281394: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281398: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028139C: swc1        $f4, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f4.u32l;
    // 0x802813A0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802813A4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802813A8: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x802813AC: nop

    // 0x802813B0: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x802813B4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802813B8: nop

    // 0x802813BC: swc1        $f20, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f20.u32l;
    // 0x802813C0: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x802813C4: addiu       $t2, $t2, 0x5F5C
    ctx->r10 = ADD32(ctx->r10, 0X5F5C);
    // 0x802813C8: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x802813CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802813D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802813D4: addiu       $a2, $zero, 0x8
    ctx->r6 = ADD32(0, 0X8);
    // 0x802813D8: jal         0x8001C0EC
    // 0x802813DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802813DC: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802813E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802813E4: jal         0x8001B754
    // 0x802813E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x802813E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802813EC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802813F0: jal         0x8001BBDC
    // 0x802813F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x802813F4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802813F8: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802813FC: addiu       $a3, $a3, 0x5FE8
    ctx->r7 = ADD32(ctx->r7, 0X5FE8);
    // 0x80281400: addiu       $a3, $a3, 0x54
    ctx->r7 = ADD32(ctx->r7, 0X54);
    // 0x80281404: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80281408: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028140C: jal         0x8001ABF4
    // 0x80281410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x80281410: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_80281414:
    // 0x80281414: jal         0x8001CD20
    // 0x80281418: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_5;
    // 0x80281418: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x8028141C: jal         0x8001AD6C
    // 0x80281420: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_6;
    // 0x80281420: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x80281424: b           L_8028142C
    // 0x80281428: nop

        goto L_8028142C;
    // 0x80281428: nop

L_8028142C:
    // 0x8028142C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80281430: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80281434: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80281438: jr          $ra
    // 0x8028143C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x8028143C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80280F34_code_extra_4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280F34: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280F38: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280F3C: jal         0x80280E08
    // 0x80280F40: nop

    func_80280E08_code_extra_4(rdram, ctx);
        goto after_0;
    // 0x80280F40: nop

    after_0:
    // 0x80280F44: beq         $v0, $zero, L_80280F54
    if (ctx->r2 == 0) {
        // 0x80280F48: nop
    
            goto L_80280F54;
    }
    // 0x80280F48: nop

    // 0x80280F4C: b           L_80280F94
    // 0x80280F50: nop

        goto L_80280F94;
    // 0x80280F50: nop

L_80280F54:
    // 0x80280F54: jal         0x80085D54
    // 0x80280F58: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80280F58: nop

    after_1:
    // 0x80280F5C: beq         $v0, $zero, L_80280F6C
    if (ctx->r2 == 0) {
        // 0x80280F60: nop
    
            goto L_80280F6C;
    }
    // 0x80280F60: nop

    // 0x80280F64: b           L_80280F94
    // 0x80280F68: nop

        goto L_80280F94;
    // 0x80280F68: nop

L_80280F6C:
    // 0x80280F6C: jal         0x80280C28
    // 0x80280F70: nop

    func_80280C28_code_extra_4(rdram, ctx);
        goto after_2;
    // 0x80280F70: nop

    after_2:
    // 0x80280F74: beq         $v0, $zero, L_80280F84
    if (ctx->r2 == 0) {
        // 0x80280F78: nop
    
            goto L_80280F84;
    }
    // 0x80280F78: nop

    // 0x80280F7C: b           L_80280F94
    // 0x80280F80: nop

        goto L_80280F94;
    // 0x80280F80: nop

L_80280F84:
    // 0x80280F84: jal         0x80280944
    // 0x80280F88: nop

    func_80280944_code_extra_4(rdram, ctx);
        goto after_3;
    // 0x80280F88: nop

    after_3:
    // 0x80280F8C: b           L_80280F94
    // 0x80280F90: nop

        goto L_80280F94;
    // 0x80280F90: nop

L_80280F94:
    // 0x80280F94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80280F98: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80280F9C: jr          $ra
    // 0x80280FA0: nop

    return;
    // 0x80280FA0: nop

;}
RECOMP_FUNC void func_802802B8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802802B8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802802BC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802802C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802802C4: sb          $zero, 0x65F0($at)
    MEM_B(0X65F0, ctx->r1) = 0;
    // 0x802802C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802802CC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802802D0: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x802802D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802802D8: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x802802DC: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x802802E0: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x802802E4: jal         0x800843CC
    // 0x802802E8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_800843CC(rdram, ctx);
        goto after_0;
    // 0x802802E8: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_0:
    // 0x802802EC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802802F0: lbu         $t7, 0x76E0($t7)
    ctx->r15 = MEM_BU(ctx->r15, 0X76E0);
    // 0x802802F4: nop

    // 0x802802F8: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x802802FC: beq         $t8, $zero, L_80280318
    if (ctx->r24 == 0) {
        // 0x80280300: nop
    
            goto L_80280318;
    }
    // 0x80280300: nop

    // 0x80280304: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280308: lb          $t9, 0x65F0($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X65F0);
    // 0x8028030C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280310: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80280314: sb          $t0, 0x65F0($at)
    MEM_B(0X65F0, ctx->r1) = ctx->r8;
L_80280318:
    // 0x80280318: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028031C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280320: nop

    // 0x80280324: lwc1        $f12, 0x0($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X0);
    // 0x80280328: lwc1        $f14, 0x4($t1)
    ctx->f14.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8028032C: lw          $a2, 0x8($t1)
    ctx->r6 = MEM_W(ctx->r9, 0X8);
    // 0x80280330: jal         0x800843CC
    // 0x80280334: nop

    func_800843CC(rdram, ctx);
        goto after_1;
    // 0x80280334: nop

    after_1:
    // 0x80280338: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8028033C: lbu         $t2, 0x76E0($t2)
    ctx->r10 = MEM_BU(ctx->r10, 0X76E0);
    // 0x80280340: nop

    // 0x80280344: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x80280348: bne         $t3, $zero, L_80280398
    if (ctx->r11 != 0) {
        // 0x8028034C: nop
    
            goto L_80280398;
    }
    // 0x8028034C: nop

    // 0x80280350: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280354: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280358: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028035C: addiu       $t4, $t4, 0x7760
    ctx->r12 = ADD32(ctx->r12, 0X7760);
    // 0x80280360: lwc1        $f8, 0x0($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X0);
    // 0x80280364: lwc1        $f10, 0x4($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X4);
    // 0x80280368: nop

    // 0x8028036C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80280370: nop

    // 0x80280374: bc1f        L_80280390
    if (!c1cs) {
        // 0x80280378: nop
    
            goto L_80280390;
    }
    // 0x80280378: nop

    // 0x8028037C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280380: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80280384: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280388: ori         $t7, $t6, 0x2
    ctx->r15 = ctx->r14 | 0X2;
    // 0x8028038C: sb          $t7, 0x65F0($at)
    MEM_B(0X65F0, ctx->r1) = ctx->r15;
L_80280390:
    // 0x80280390: b           L_802803AC
    // 0x80280394: nop

        goto L_802803AC;
    // 0x80280394: nop

L_80280398:
    // 0x80280398: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028039C: lb          $t8, 0x65F0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X65F0);
    // 0x802803A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803A4: ori         $t9, $t8, 0x2
    ctx->r25 = ctx->r24 | 0X2;
    // 0x802803A8: sb          $t9, 0x65F0($at)
    MEM_B(0X65F0, ctx->r1) = ctx->r25;
L_802803AC:
    // 0x802803AC: b           L_802803B4
    // 0x802803B0: nop

        goto L_802803B4;
    // 0x802803B0: nop

L_802803B4:
    // 0x802803B4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802803B8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802803BC: jr          $ra
    // 0x802803C0: nop

    return;
    // 0x802803C0: nop

;}
RECOMP_FUNC void func_802859BC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802859BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802859C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802859C4: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802859C8: jal         0x802804B8
    // 0x802859CC: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802859CC: nop

    after_0:
    // 0x802859D0: jal         0x80282168
    // 0x802859D4: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802859D4: nop

    after_1:
    // 0x802859D8: b           L_802859E0
    // 0x802859DC: nop

        goto L_802859E0;
    // 0x802859DC: nop

L_802859E0:
    // 0x802859E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802859E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802859E8: jr          $ra
    // 0x802859EC: nop

    return;
    // 0x802859EC: nop

;}
RECOMP_FUNC void func_80285A58_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285A58: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285A5C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285A60: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80285A64: jal         0x802804B8
    // 0x80285A68: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285A68: nop

    after_0:
    // 0x80285A6C: jal         0x80280B88
    // 0x80285A70: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285A70: nop

    after_1:
    // 0x80285A74: b           L_80285A7C
    // 0x80285A78: nop

        goto L_80285A7C;
    // 0x80285A78: nop

L_80285A7C:
    // 0x80285A7C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285A80: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285A84: jr          $ra
    // 0x80285A88: nop

    return;
    // 0x80285A88: nop

;}
RECOMP_FUNC void func_802858B4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802858B4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802858B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802858BC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802858C0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802858C4: jal         0x802804B8
    // 0x802858C8: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802858C8: nop

    after_0:
    // 0x802858CC: jal         0x80282168
    // 0x802858D0: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802858D0: nop

    after_1:
    // 0x802858D4: b           L_802858DC
    // 0x802858D8: nop

        goto L_802858DC;
    // 0x802858D8: nop

L_802858DC:
    // 0x802858DC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802858E0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802858E4: jr          $ra
    // 0x802858E8: nop

    return;
    // 0x802858E8: nop

;}
RECOMP_FUNC void func_80284FDC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284FDC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284FE0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284FE4: jal         0x80283A2C
    // 0x80284FE8: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284FE8: nop

    after_0:
    // 0x80284FEC: beq         $v0, $zero, L_80284FFC
    if (ctx->r2 == 0) {
        // 0x80284FF0: nop
    
            goto L_80284FFC;
    }
    // 0x80284FF0: nop

    // 0x80284FF4: b           L_80285044
    // 0x80284FF8: nop

        goto L_80285044;
    // 0x80284FF8: nop

L_80284FFC:
    // 0x80284FFC: jal         0x80085D54
    // 0x80285000: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80285000: nop

    after_1:
    // 0x80285004: beq         $v0, $zero, L_80285014
    if (ctx->r2 == 0) {
        // 0x80285008: nop
    
            goto L_80285014;
    }
    // 0x80285008: nop

    // 0x8028500C: b           L_80285044
    // 0x80285010: nop

        goto L_80285044;
    // 0x80285010: nop

L_80285014:
    // 0x80285014: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285018: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x8028501C: nop

    // 0x80285020: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80285024: beq         $t7, $zero, L_8028503C
    if (ctx->r15 == 0) {
        // 0x80285028: nop
    
            goto L_8028503C;
    }
    // 0x80285028: nop

    // 0x8028502C: jal         0x80283740
    // 0x80285030: nop

    func_80283740_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80285030: nop

    after_2:
    // 0x80285034: b           L_80285044
    // 0x80285038: nop

        goto L_80285044;
    // 0x80285038: nop

L_8028503C:
    // 0x8028503C: b           L_80285044
    // 0x80285040: nop

        goto L_80285044;
    // 0x80285040: nop

L_80285044:
    // 0x80285044: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285048: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028504C: jr          $ra
    // 0x80285050: nop

    return;
    // 0x80285050: nop

;}
RECOMP_FUNC void func_80283EE4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283EE4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283EE8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283EEC: jal         0x80283A2C
    // 0x80283EF0: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80283EF0: nop

    after_0:
    // 0x80283EF4: beq         $v0, $zero, L_80283F04
    if (ctx->r2 == 0) {
        // 0x80283EF8: nop
    
            goto L_80283F04;
    }
    // 0x80283EF8: nop

    // 0x80283EFC: b           L_80283FD0
    // 0x80283F00: nop

        goto L_80283FD0;
    // 0x80283F00: nop

L_80283F04:
    // 0x80283F04: jal         0x80085D54
    // 0x80283F08: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80283F08: nop

    after_1:
    // 0x80283F0C: beq         $v0, $zero, L_80283F1C
    if (ctx->r2 == 0) {
        // 0x80283F10: nop
    
            goto L_80283F1C;
    }
    // 0x80283F10: nop

    // 0x80283F14: b           L_80283FD0
    // 0x80283F18: nop

        goto L_80283FD0;
    // 0x80283F18: nop

L_80283F1C:
    // 0x80283F1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283F20: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80283F24: nop

    // 0x80283F28: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80283F2C: bne         $t7, $zero, L_80283F44
    if (ctx->r15 != 0) {
        // 0x80283F30: nop
    
            goto L_80283F44;
    }
    // 0x80283F30: nop

    // 0x80283F34: jal         0x80282B2C
    // 0x80283F38: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80283F38: nop

    after_2:
    // 0x80283F3C: b           L_80283FD0
    // 0x80283F40: nop

        goto L_80283FD0;
    // 0x80283F40: nop

L_80283F44:
    // 0x80283F44: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283F48: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80283F4C: nop

    // 0x80283F50: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80283F54: beq         $t9, $zero, L_80283F84
    if (ctx->r25 == 0) {
        // 0x80283F58: nop
    
            goto L_80283F84;
    }
    // 0x80283F58: nop

    // 0x80283F5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283F60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283F64: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80283F68: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283F6C: jal         0x800178D4
    // 0x80283F70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80283F70: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80283F74: jal         0x802837D8
    // 0x80283F78: nop

    func_802837D8_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80283F78: nop

    after_4:
    // 0x80283F7C: b           L_80283FD0
    // 0x80283F80: nop

        goto L_80283FD0;
    // 0x80283F80: nop

L_80283F84:
    // 0x80283F84: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283F88: lhu         $t0, -0x1C7C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C7C);
    // 0x80283F8C: nop

    // 0x80283F90: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80283F94: beq         $t1, $zero, L_80283FAC
    if (ctx->r9 == 0) {
        // 0x80283F98: nop
    
            goto L_80283FAC;
    }
    // 0x80283F98: nop

    // 0x80283F9C: jal         0x80282A98
    // 0x80283FA0: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x80283FA0: nop

    after_5:
    // 0x80283FA4: b           L_80283FD0
    // 0x80283FA8: nop

        goto L_80283FD0;
    // 0x80283FA8: nop

L_80283FAC:
    // 0x80283FAC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283FB0: jal         0x8001B44C
    // 0x80283FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_6;
    // 0x80283FB4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_6:
    // 0x80283FB8: beq         $v0, $zero, L_80283FC8
    if (ctx->r2 == 0) {
        // 0x80283FBC: nop
    
            goto L_80283FC8;
    }
    // 0x80283FBC: nop

    // 0x80283FC0: jal         0x802828D8
    // 0x80283FC4: nop

    func_802828D8_code_extra_5(rdram, ctx);
        goto after_7;
    // 0x80283FC4: nop

    after_7:
L_80283FC8:
    // 0x80283FC8: b           L_80283FD0
    // 0x80283FCC: nop

        goto L_80283FD0;
    // 0x80283FCC: nop

L_80283FD0:
    // 0x80283FD0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283FD4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283FD8: jr          $ra
    // 0x80283FDC: nop

    return;
    // 0x80283FDC: nop

;}
RECOMP_FUNC void func_802857D0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802857D0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802857D4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802857D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802857DC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802857E0: jal         0x802804B8
    // 0x802857E4: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802857E4: nop

    after_0:
    // 0x802857E8: jal         0x80280B88
    // 0x802857EC: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802857EC: nop

    after_1:
    // 0x802857F0: b           L_802857F8
    // 0x802857F4: nop

        goto L_802857F8;
    // 0x802857F4: nop

L_802857F8:
    // 0x802857F8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802857FC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285800: jr          $ra
    // 0x80285804: nop

    return;
    // 0x80285804: nop

;}
RECOMP_FUNC void func_80283740_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283740: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283744: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283748: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x8028374C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80283750: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283754: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283758: addiu       $t7, $zero, 0x20F
    ctx->r15 = ADD32(0, 0X20F);
    // 0x8028375C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283760: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80283764: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80283768: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8028376C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283770: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283774: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283778: jal         0x8001C0EC
    // 0x8028377C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028377C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283780: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283784: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283788: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8028378C: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283790: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283794: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283798: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028379C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802837A0: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x802837A4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802837A8: jal         0x800178D4
    // 0x802837AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x802837AC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x802837B0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x802837B4: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802837B8: jal         0x8001FB3C
    // 0x802837BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x802837BC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802837C0: b           L_802837C8
    // 0x802837C4: nop

        goto L_802837C8;
    // 0x802837C4: nop

L_802837C8:
    // 0x802837C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802837CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802837D0: jr          $ra
    // 0x802837D4: nop

    return;
    // 0x802837D4: nop

;}
RECOMP_FUNC void func_80285FEC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285FEC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80285FF0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80285FF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80285FF8: jal         0x8001B62C
    // 0x80285FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_0;
    // 0x80285FFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80286000: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80286004: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286008: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028600C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80286010: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80286014: nop

    // 0x80286018: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x8028601C: nop

    // 0x80286020: bc1f        L_80286054
    if (!c1cs) {
        // 0x80286024: nop
    
            goto L_80286054;
    }
    // 0x80286024: nop

    // 0x80286028: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028602C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80286030: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80286034: lwc1        $f8, 0x44($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80286038: mtc1        $at, $f17
    ctx->f_odd[(17 - 1) * 2] = ctx->r1;
    // 0x8028603C: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80286040: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80286044: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80286048: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8028604C: b           L_80286068
    // 0x80286050: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
        goto L_80286068;
    // 0x80286050: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
L_80286054:
    // 0x80286054: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80286058: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028605C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80286060: nop

    // 0x80286064: swc1        $f6, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f6.u32l;
L_80286068:
    // 0x80286068: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8028606C: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80286070: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80286074: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80286078: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x8028607C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80286080: jal         0x8001BB04
    // 0x80286084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB04(rdram, ctx);
        goto after_1;
    // 0x80286084: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
    // 0x80286088: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028608C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80286090: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80286094: lwc1        $f8, 0x44($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80286098: nop

    // 0x8028609C: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x802860A0: nop

    // 0x802860A4: bc1f        L_802860E0
    if (!c1cs) {
        // 0x802860A8: nop
    
            goto L_802860E0;
    }
    // 0x802860A8: nop

    // 0x802860AC: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x802860B0: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x802860B4: nop

    // 0x802860B8: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x802860BC: nop

    // 0x802860C0: bc1f        L_802860E0
    if (!c1cs) {
        // 0x802860C4: nop
    
            goto L_802860E0;
    }
    // 0x802860C4: nop

    // 0x802860C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802860CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802860D0: addiu       $a2, $zero, 0x30
    ctx->r6 = ADD32(0, 0X30);
    // 0x802860D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802860D8: jal         0x800178D4
    // 0x802860DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802860DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
L_802860E0:
    // 0x802860E0: b           L_802860E8
    // 0x802860E4: nop

        goto L_802860E8;
    // 0x802860E4: nop

L_802860E8:
    // 0x802860E8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802860EC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802860F0: jr          $ra
    // 0x802860F4: nop

    return;
    // 0x802860F4: nop

;}
RECOMP_FUNC void func_80283928_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283928: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8028392C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283930: addiu       $t6, $zero, 0x14
    ctx->r14 = ADD32(0, 0X14);
    // 0x80283934: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80283938: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028393C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283940: addiu       $t7, $zero, 0x212
    ctx->r15 = ADD32(0, 0X212);
    // 0x80283944: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283948: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8028394C: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80283950: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80283954: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283958: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028395C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283960: jal         0x8001C0EC
    // 0x80283964: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80283964: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283968: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8028396C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283970: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283974: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283978: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028397C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283980: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283984: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283988: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x8028398C: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283990: jal         0x800178D4
    // 0x80283994: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80283994: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80283998: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x8028399C: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x802839A0: jal         0x8001FB3C
    // 0x802839A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_2;
    // 0x802839A4: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x802839A8: b           L_802839B0
    // 0x802839AC: nop

        goto L_802839B0;
    // 0x802839AC: nop

L_802839B0:
    // 0x802839B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802839B4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802839B8: jr          $ra
    // 0x802839BC: nop

    return;
    // 0x802839BC: nop

;}
RECOMP_FUNC void func_80285A24_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285A24: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285A28: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285A2C: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80285A30: jal         0x802804B8
    // 0x80285A34: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285A34: nop

    after_0:
    // 0x80285A38: jal         0x80280B88
    // 0x80285A3C: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285A3C: nop

    after_1:
    // 0x80285A40: b           L_80285A48
    // 0x80285A44: nop

        goto L_80285A48;
    // 0x80285A44: nop

L_80285A48:
    // 0x80285A48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285A4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285A50: jr          $ra
    // 0x80285A54: nop

    return;
    // 0x80285A54: nop

;}
RECOMP_FUNC void func_80284DFC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284DFC: jr          $ra
    // 0x80284E00: nop

    return;
    // 0x80284E00: nop

    // 0x80284E04: jr          $ra
    // 0x80284E08: nop

    return;
    // 0x80284E08: nop

;}
RECOMP_FUNC void func_80283B18_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283B18: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283B1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283B20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283B24: lbu         $t6, -0x1F78($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F78);
    // 0x80283B28: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80283B2C: bne         $t6, $at, L_80283B5C
    if (ctx->r14 != ctx->r1) {
        // 0x80283B30: nop
    
            goto L_80283B5C;
    }
    // 0x80283B30: nop

    // 0x80283B34: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283B38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283B3C: addiu       $a2, $zero, 0x75
    ctx->r6 = ADD32(0, 0X75);
    // 0x80283B40: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283B44: jal         0x800178D4
    // 0x80283B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_0;
    // 0x80283B48: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_0:
    // 0x80283B4C: jal         0x802839C0
    // 0x80283B50: nop

    func_802839C0_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80283B50: nop

    after_1:
    // 0x80283B54: b           L_80283B6C
    // 0x80283B58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80283B6C;
    // 0x80283B58: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80283B5C:
    // 0x80283B5C: b           L_80283B6C
    // 0x80283B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80283B6C;
    // 0x80283B60: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80283B64: b           L_80283B6C
    // 0x80283B68: nop

        goto L_80283B6C;
    // 0x80283B68: nop

L_80283B6C:
    // 0x80283B6C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283B70: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283B74: jr          $ra
    // 0x80283B78: nop

    return;
    // 0x80283B78: nop

;}
RECOMP_FUNC void func_8028588C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028588C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285890: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285894: jal         0x80282168
    // 0x80285898: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285898: nop

    after_0:
    // 0x8028589C: b           L_802858A4
    // 0x802858A0: nop

        goto L_802858A4;
    // 0x802858A0: nop

L_802858A4:
    // 0x802858A4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802858A8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802858AC: jr          $ra
    // 0x802858B0: nop

    return;
    // 0x802858B0: nop

;}
