#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void alSynNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035DF0: addiu       $sp, $sp, -0x78
    ctx->r29 = ADD32(ctx->r29, -0X78);
    // 0x80035DF4: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80035DF8: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80035DFC: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80035E00: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80035E04: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80035E08: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80035E0C: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80035E10: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80035E14: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80035E18: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80035E1C: lw          $s7, 0x14($a1)
    ctx->r23 = MEM_W(ctx->r5, 0X14);
    // 0x80035E20: sw          $zero, 0x0($a0)
    MEM_W(0X0, ctx->r4) = 0;
    // 0x80035E24: lw          $t6, 0x4($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X4);
    // 0x80035E28: sw          $zero, 0x20($a0)
    MEM_W(0X20, ctx->r4) = 0;
    // 0x80035E2C: sw          $zero, 0x1C($a0)
    MEM_W(0X1C, ctx->r4) = 0;
    // 0x80035E30: sw          $t6, 0x3C($a0)
    MEM_W(0X3C, ctx->r4) = ctx->r14;
    // 0x80035E34: lw          $t7, 0x18($a1)
    ctx->r15 = MEM_W(ctx->r5, 0X18);
    // 0x80035E38: addiu       $t8, $zero, 0xA0
    ctx->r24 = ADD32(0, 0XA0);
    // 0x80035E3C: sw          $t8, 0x48($a0)
    MEM_W(0X48, ctx->r4) = ctx->r24;
    // 0x80035E40: sw          $t7, 0x44($a0)
    MEM_W(0X44, ctx->r4) = ctx->r15;
    // 0x80035E44: lw          $t9, 0x10($a1)
    ctx->r25 = MEM_W(ctx->r5, 0X10);
    // 0x80035E48: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80035E4C: or          $fp, $a1, $zero
    ctx->r30 = ctx->r5 | 0;
    // 0x80035E50: addiu       $t0, $zero, 0x1C
    ctx->r8 = ADD32(0, 0X1C);
    // 0x80035E54: sw          $t9, 0x24($a0)
    MEM_W(0X24, ctx->r4) = ctx->r25;
    // 0x80035E58: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80035E5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80035E60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035E64: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x80035E68: jal         0x80035870
    // 0x80035E6C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x80035E6C: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_0:
    // 0x80035E70: sw          $v0, 0x5C($sp)
    MEM_W(0X5C, ctx->r29) = ctx->r2;
    // 0x80035E74: jal         0x8003F270
    // 0x80035E78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    alSaveNew(rdram, ctx);
        goto after_1;
    // 0x80035E78: or          $a0, $v0, $zero
    ctx->r4 = ctx->r2 | 0;
    after_1:
    // 0x80035E7C: lw          $t1, 0x5C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X5C);
    // 0x80035E80: addiu       $t2, $zero, 0x4C
    ctx->r10 = ADD32(0, 0X4C);
    // 0x80035E84: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80035E88: sw          $t1, 0x38($s6)
    MEM_W(0X38, ctx->r22) = ctx->r9;
    // 0x80035E8C: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80035E90: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035E94: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80035E98: jal         0x80035870
    // 0x80035E9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_2;
    // 0x80035E9C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_2:
    // 0x80035EA0: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80035EA4: sw          $v0, 0x34($s6)
    MEM_W(0X34, ctx->r22) = ctx->r2;
    // 0x80035EA8: sw          $t3, 0x40($s6)
    MEM_W(0X40, ctx->r22) = ctx->r11;
    // 0x80035EAC: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80035EB0: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80035EB4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x80035EB8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80035EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035EC0: jal         0x80035870
    // 0x80035EC4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_3;
    // 0x80035EC4: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_3:
    // 0x80035EC8: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x80035ECC: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80035ED0: jal         0x8003F308
    // 0x80035ED4: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    alAuxBusNew(rdram, ctx);
        goto after_4;
    // 0x80035ED4: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_4:
    // 0x80035ED8: addiu       $t5, $zero, 0x20
    ctx->r13 = ADD32(0, 0X20);
    // 0x80035EDC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x80035EE0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80035EE4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035EE8: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    // 0x80035EEC: jal         0x80035870
    // 0x80035EF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    alHeapDBAlloc(rdram, ctx);
        goto after_5;
    // 0x80035EF0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_5:
    // 0x80035EF4: sw          $v0, 0x30($s6)
    MEM_W(0X30, ctx->r22) = ctx->r2;
    // 0x80035EF8: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80035EFC: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80035F00: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x80035F04: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80035F08: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035F0C: jal         0x80035870
    // 0x80035F10: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_6;
    // 0x80035F10: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_6:
    // 0x80035F14: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x80035F18: or          $a1, $v0, $zero
    ctx->r5 = ctx->r2 | 0;
    // 0x80035F1C: jal         0x8003F2B4
    // 0x80035F20: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    alMainBusNew(rdram, ctx);
        goto after_7;
    // 0x80035F20: lw          $a2, 0x4($fp)
    ctx->r6 = MEM_W(ctx->r30, 0X4);
    after_7:
    // 0x80035F24: lbu         $t7, 0x1C($fp)
    ctx->r15 = MEM_BU(ctx->r30, 0X1C);
    // 0x80035F28: or          $a0, $s6, $zero
    ctx->r4 = ctx->r22 | 0;
    // 0x80035F2C: or          $a2, $fp, $zero
    ctx->r6 = ctx->r30 | 0;
    // 0x80035F30: beq         $t7, $zero, L_80035F4C
    if (ctx->r15 == 0) {
        // 0x80035F34: addiu       $a1, $zero, 0x2
        ctx->r5 = ADD32(0, 0X2);
            goto L_80035F4C;
    }
    // 0x80035F34: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80035F38: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035F3C: jal         0x8003FA10
    // 0x80035F40: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    alSynAllocFX(rdram, ctx);
        goto after_8;
    // 0x80035F40: or          $a3, $s7, $zero
    ctx->r7 = ctx->r23 | 0;
    after_8:
    // 0x80035F44: b           L_80035F5C
    // 0x80035F48: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
        goto L_80035F5C;
    // 0x80035F48: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_80035F4C:
    // 0x80035F4C: lw          $a0, 0x30($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X30);
    // 0x80035F50: jal         0x8003FAB0
    // 0x80035F54: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    alMainBusParam(rdram, ctx);
        goto after_9;
    // 0x80035F54: lw          $a2, 0x34($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X34);
    after_9:
    // 0x80035F58: sw          $zero, 0x4($s6)
    MEM_W(0X4, ctx->r22) = 0;
L_80035F5C:
    // 0x80035F5C: sw          $zero, 0x8($s6)
    MEM_W(0X8, ctx->r22) = 0;
    // 0x80035F60: sw          $zero, 0x14($s6)
    MEM_W(0X14, ctx->r22) = 0;
    // 0x80035F64: sw          $zero, 0x18($s6)
    MEM_W(0X18, ctx->r22) = 0;
    // 0x80035F68: sw          $zero, 0xC($s6)
    MEM_W(0XC, ctx->r22) = 0;
    // 0x80035F6C: sw          $zero, 0x10($s6)
    MEM_W(0X10, ctx->r22) = 0;
    // 0x80035F70: lw          $a3, 0x4($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X4);
    // 0x80035F74: addiu       $t8, $zero, 0xDC
    ctx->r24 = ADD32(0, 0XDC);
    // 0x80035F78: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80035F7C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80035F80: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80035F84: jal         0x80035870
    // 0x80035F88: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_10;
    // 0x80035F88: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_10:
    // 0x80035F8C: lw          $t9, 0x4($fp)
    ctx->r25 = MEM_W(ctx->r30, 0X4);
    // 0x80035F90: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
    // 0x80035F94: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80035F98: blez        $t9, L_80036058
    if (SIGNED(ctx->r25) <= 0) {
        // 0x80035F9C: addiu       $a1, $s6, 0x4
        ctx->r5 = ADD32(ctx->r22, 0X4);
            goto L_80036058;
    }
    // 0x80035F9C: addiu       $a1, $s6, 0x4
    ctx->r5 = ADD32(ctx->r22, 0X4);
    // 0x80035FA0: addiu       $s1, $v0, 0x8C
    ctx->r17 = ADD32(ctx->r2, 0X8C);
    // 0x80035FA4: addiu       $s2, $v0, 0x58
    ctx->r18 = ADD32(ctx->r2, 0X58);
    // 0x80035FA8: addiu       $s3, $v0, 0x10
    ctx->r19 = ADD32(ctx->r2, 0X10);
    // 0x80035FAC: sw          $a1, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r5;
L_80035FB0:
    // 0x80035FB0: lw          $a1, 0x48($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X48);
    // 0x80035FB4: or          $s5, $s0, $zero
    ctx->r21 = ctx->r16 | 0;
    // 0x80035FB8: jal         0x800357E0
    // 0x80035FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    alLink(rdram, ctx);
        goto after_11;
    // 0x80035FBC: or          $a0, $s0, $zero
    ctx->r4 = ctx->r16 | 0;
    after_11:
    // 0x80035FC0: sw          $zero, 0x8($s0)
    MEM_W(0X8, ctx->r16) = 0;
    // 0x80035FC4: lw          $a1, 0x24($s6)
    ctx->r5 = MEM_W(ctx->r22, 0X24);
    // 0x80035FC8: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80035FCC: jal         0x8003F3E4
    // 0x80035FD0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alLoadNew(rdram, ctx);
        goto after_12;
    // 0x80035FD0: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_12:
    // 0x80035FD4: or          $a0, $s3, $zero
    ctx->r4 = ctx->r19 | 0;
    // 0x80035FD8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80035FDC: jal         0x8003FC00
    // 0x80035FE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alLoadParam(rdram, ctx);
        goto after_13;
    // 0x80035FE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_13:
    // 0x80035FE4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80035FE8: jal         0x8003F35C
    // 0x80035FEC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alResampleNew(rdram, ctx);
        goto after_14;
    // 0x80035FEC: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_14:
    // 0x80035FF0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80035FF4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80035FF8: jal         0x80040750
    // 0x80035FFC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alResampleParam(rdram, ctx);
        goto after_15;
    // 0x80035FFC: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_15:
    // 0x80036000: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80036004: jal         0x8003F48C
    // 0x80036008: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    alEnvmixerNew(rdram, ctx);
        goto after_16;
    // 0x80036008: or          $a1, $s7, $zero
    ctx->r5 = ctx->r23 | 0;
    after_16:
    // 0x8003600C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80036010: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80036014: jal         0x80040B64
    // 0x80036018: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    alEnvmixerParam(rdram, ctx);
        goto after_17;
    // 0x80036018: or          $a2, $s2, $zero
    ctx->r6 = ctx->r18 | 0;
    after_17:
    // 0x8003601C: lw          $a0, 0x34($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X34);
    // 0x80036020: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80036024: jal         0x800416B0
    // 0x80036028: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    alAuxBusParam(rdram, ctx);
        goto after_18;
    // 0x80036028: or          $a2, $s1, $zero
    ctx->r6 = ctx->r17 | 0;
    after_18:
    // 0x8003602C: addiu       $t0, $s5, 0x8C
    ctx->r8 = ADD32(ctx->r21, 0X8C);
    // 0x80036030: sw          $t0, 0xC($s5)
    MEM_W(0XC, ctx->r21) = ctx->r8;
    // 0x80036034: lw          $t1, 0x4($fp)
    ctx->r9 = MEM_W(ctx->r30, 0X4);
    // 0x80036038: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x8003603C: addiu       $s0, $s0, 0xDC
    ctx->r16 = ADD32(ctx->r16, 0XDC);
    // 0x80036040: slt         $at, $s4, $t1
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r9) ? 1 : 0;
    // 0x80036044: addiu       $s1, $s1, 0xDC
    ctx->r17 = ADD32(ctx->r17, 0XDC);
    // 0x80036048: addiu       $s2, $s2, 0xDC
    ctx->r18 = ADD32(ctx->r18, 0XDC);
    // 0x8003604C: bne         $at, $zero, L_80035FB0
    if (ctx->r1 != 0) {
        // 0x80036050: addiu       $s3, $s3, 0xDC
        ctx->r19 = ADD32(ctx->r19, 0XDC);
            goto L_80035FB0;
    }
    // 0x80036050: addiu       $s3, $s3, 0xDC
    ctx->r19 = ADD32(ctx->r19, 0XDC);
    // 0x80036054: or          $s4, $zero, $zero
    ctx->r20 = 0 | 0;
L_80036058:
    // 0x80036058: lw          $a0, 0x5C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X5C);
    // 0x8003605C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x80036060: jal         0x800417C0
    // 0x80036064: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    alSaveParam(rdram, ctx);
        goto after_19;
    // 0x80036064: lw          $a2, 0x30($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X30);
    after_19:
    // 0x80036068: lw          $a3, 0x8($fp)
    ctx->r7 = MEM_W(ctx->r30, 0X8);
    // 0x8003606C: addiu       $t2, $zero, 0x1C
    ctx->r10 = ADD32(0, 0X1C);
    // 0x80036070: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80036074: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80036078: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8003607C: jal         0x80035870
    // 0x80036080: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    alHeapDBAlloc(rdram, ctx);
        goto after_20;
    // 0x80036080: or          $a2, $s7, $zero
    ctx->r6 = ctx->r23 | 0;
    after_20:
    // 0x80036084: sw          $zero, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = 0;
    // 0x80036088: lw          $t3, 0x8($fp)
    ctx->r11 = MEM_W(ctx->r30, 0X8);
    // 0x8003608C: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80036090: blezl       $t3, L_800360C0
    if (SIGNED(ctx->r11) <= 0) {
        // 0x80036094: sw          $s7, 0x28($s6)
        MEM_W(0X28, ctx->r22) = ctx->r23;
            goto L_800360C0;
    }
    goto skip_0;
    // 0x80036094: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
    skip_0:
    // 0x80036098: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
L_8003609C:
    // 0x8003609C: addiu       $s4, $s4, 0x1
    ctx->r20 = ADD32(ctx->r20, 0X1);
    // 0x800360A0: sw          $t4, 0x0($v1)
    MEM_W(0X0, ctx->r3) = ctx->r12;
    // 0x800360A4: sw          $v1, 0x2C($s6)
    MEM_W(0X2C, ctx->r22) = ctx->r3;
    // 0x800360A8: lw          $t5, 0x8($fp)
    ctx->r13 = MEM_W(ctx->r30, 0X8);
    // 0x800360AC: addiu       $v1, $v1, 0x1C
    ctx->r3 = ADD32(ctx->r3, 0X1C);
    // 0x800360B0: slt         $at, $s4, $t5
    ctx->r1 = SIGNED(ctx->r20) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800360B4: bnel        $at, $zero, L_8003609C
    if (ctx->r1 != 0) {
        // 0x800360B8: lw          $t4, 0x2C($s6)
        ctx->r12 = MEM_W(ctx->r22, 0X2C);
            goto L_8003609C;
    }
    goto skip_1;
    // 0x800360B8: lw          $t4, 0x2C($s6)
    ctx->r12 = MEM_W(ctx->r22, 0X2C);
    skip_1:
    // 0x800360BC: sw          $s7, 0x28($s6)
    MEM_W(0X28, ctx->r22) = ctx->r23;
L_800360C0:
    // 0x800360C0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800360C4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x800360C8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x800360CC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800360D0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800360D4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800360D8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800360DC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800360E0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800360E4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800360E8: jr          $ra
    // 0x800360EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
    return;
    // 0x800360EC: addiu       $sp, $sp, 0x78
    ctx->r29 = ADD32(ctx->r29, 0X78);
;}
RECOMP_FUNC void func_8000D834(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D834: jr          $ra
    // 0x8000D838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x8000D838: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000D83C: jr          $ra
    // 0x8000D840: nop

    return;
    // 0x8000D840: nop

    // 0x8000D844: jr          $ra
    // 0x8000D848: nop

    return;
    // 0x8000D848: nop

;}
RECOMP_FUNC void alSndpSetPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800354C0: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x800354C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800354C8: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x800354CC: lw          $v0, 0x40($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X40);
    // 0x800354D0: or          $t0, $a1, $zero
    ctx->r8 = ctx->r5 | 0;
    // 0x800354D4: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800354D8: sh          $t6, 0x20($sp)
    MEM_H(0X20, ctx->r29) = ctx->r14;
    // 0x800354DC: sb          $t0, 0x28($sp)
    MEM_B(0X28, ctx->r29) = ctx->r8;
    // 0x800354E0: lw          $t7, 0x3C($a0)
    ctx->r15 = MEM_W(ctx->r4, 0X3C);
    // 0x800354E4: addiu       $a1, $sp, 0x20
    ctx->r5 = ADD32(ctx->r29, 0X20);
    // 0x800354E8: addiu       $a0, $a0, 0x14
    ctx->r4 = ADD32(ctx->r4, 0X14);
    // 0x800354EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800354F0: subu        $t8, $t8, $t7
    ctx->r24 = SUB32(ctx->r24, ctx->r15);
    // 0x800354F4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800354F8: addu        $t9, $t8, $v0
    ctx->r25 = ADD32(ctx->r24, ctx->r2);
    // 0x800354FC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80035500: jal         0x8003E80C
    // 0x80035504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x80035504: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x80035508: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8003550C: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80035510: jr          $ra
    // 0x80035514: nop

    return;
    // 0x80035514: nop

;}
RECOMP_FUNC void func_8001D9E4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D9E4: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8001D9E8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001D9EC: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8001D9F0: jal         0x8005F0F4
    // 0x8001D9F4: nop

    func_8005F0F4(rdram, ctx);
        goto after_0;
    // 0x8001D9F4: nop

    after_0:
    // 0x8001D9F8: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8001D9FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DA00: sw          $t6, -0x1EF4($at)
    MEM_W(-0X1EF4, ctx->r1) = ctx->r14;
    // 0x8001DA04: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001DA08: lw          $t7, -0x1EF4($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1EF4);
    // 0x8001DA0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DA10: addiu       $t8, $t7, 0x68
    ctx->r24 = ADD32(ctx->r15, 0X68);
    // 0x8001DA14: sw          $t8, -0x1EFC($at)
    MEM_W(-0X1EFC, ctx->r1) = ctx->r24;
    // 0x8001DA18: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001DA1C: lw          $t9, -0x1EF4($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1EF4);
    // 0x8001DA20: ori         $at, $zero, 0x8148
    ctx->r1 = 0 | 0X8148;
    // 0x8001DA24: addu        $t0, $t9, $at
    ctx->r8 = ADD32(ctx->r25, ctx->r1);
    // 0x8001DA28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DA2C: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8001DA30: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8001DA34: lw          $t1, -0x1F04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X1F04);
    // 0x8001DA38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DA3C: addiu       $t2, $t1, 0x8
    ctx->r10 = ADD32(ctx->r9, 0X8);
    // 0x8001DA40: sw          $t2, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r10;
    // 0x8001DA44: sw          $t1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r9;
    // 0x8001DA48: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8001DA4C: lui         $t3, 0xBC00
    ctx->r11 = S32(0XBC00 << 16);
    // 0x8001DA50: ori         $t3, $t3, 0x6
    ctx->r11 = ctx->r11 | 0X6;
    // 0x8001DA54: sw          $t3, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r11;
    // 0x8001DA58: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8001DA5C: nop

    // 0x8001DA60: sw          $zero, 0x4($t5)
    MEM_W(0X4, ctx->r13) = 0;
    // 0x8001DA64: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001DA68: lw          $t6, -0x1F04($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F04);
    // 0x8001DA6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DA70: addiu       $t7, $t6, 0x8
    ctx->r15 = ADD32(ctx->r14, 0X8);
    // 0x8001DA74: sw          $t7, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r15;
    // 0x8001DA78: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
    // 0x8001DA7C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8001DA80: lui         $t8, 0xBC00
    ctx->r24 = S32(0XBC00 << 16);
    // 0x8001DA84: ori         $t8, $t8, 0x406
    ctx->r24 = ctx->r24 | 0X406;
    // 0x8001DA88: sw          $t8, 0x0($t9)
    MEM_W(0X0, ctx->r25) = ctx->r24;
    // 0x8001DA8C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001DA90: addiu       $t0, $t0, -0x3560
    ctx->r8 = ADD32(ctx->r8, -0X3560);
    // 0x8001DA94: lw          $a0, 0x0($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X0);
    // 0x8001DA98: jal         0x800358D0
    // 0x8001DA9C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8001DA9C: nop

    after_1:
    // 0x8001DAA0: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8001DAA4: nop

    // 0x8001DAA8: sw          $v0, 0x4($t1)
    MEM_W(0X4, ctx->r9) = ctx->r2;
    // 0x8001DAAC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001DAB0: lw          $t2, -0x1F04($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F04);
    // 0x8001DAB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DAB8: addiu       $t3, $t2, 0x8
    ctx->r11 = ADD32(ctx->r10, 0X8);
    // 0x8001DABC: sw          $t3, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r11;
    // 0x8001DAC0: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
    // 0x8001DAC4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DAC8: lui         $t4, 0x600
    ctx->r12 = S32(0X600 << 16);
    // 0x8001DACC: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8001DAD0: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8001DAD4: lui         $t6, 0x100
    ctx->r14 = S32(0X100 << 16);
    // 0x8001DAD8: addiu       $t6, $t6, 0xC68
    ctx->r14 = ADD32(ctx->r14, 0XC68);
    // 0x8001DADC: sw          $t6, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r14;
    // 0x8001DAE0: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x8001DAE4: lw          $t8, 0x5254($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5254);
    // 0x8001DAE8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8001DAEC: bne         $t8, $at, L_8001DB28
    if (ctx->r24 != ctx->r1) {
        // 0x8001DAF0: nop
    
            goto L_8001DB28;
    }
    // 0x8001DAF0: nop

    // 0x8001DAF4: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001DAF8: lw          $t9, -0x1F04($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1F04);
    // 0x8001DAFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DB00: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x8001DB04: sw          $t0, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r8;
    // 0x8001DB08: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8001DB0C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8001DB10: lui         $t1, 0x600
    ctx->r9 = S32(0X600 << 16);
    // 0x8001DB14: sw          $t1, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->r9;
    // 0x8001DB18: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8001DB1C: lui         $t3, 0x100
    ctx->r11 = S32(0X100 << 16);
    // 0x8001DB20: addiu       $t3, $t3, 0xB78
    ctx->r11 = ADD32(ctx->r11, 0XB78);
    // 0x8001DB24: sw          $t3, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->r11;
L_8001DB28:
    // 0x8001DB28: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001DB2C: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8001DB30: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DB34: addiu       $t6, $t5, 0x8
    ctx->r14 = ADD32(ctx->r13, 0X8);
    // 0x8001DB38: sw          $t6, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r14;
    // 0x8001DB3C: sw          $t5, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r13;
    // 0x8001DB40: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x8001DB44: lui         $t7, 0x600
    ctx->r15 = S32(0X600 << 16);
    // 0x8001DB48: sw          $t7, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r15;
    // 0x8001DB4C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8001DB50: lui         $t9, 0x100
    ctx->r25 = S32(0X100 << 16);
    // 0x8001DB54: addiu       $t9, $t9, 0xC50
    ctx->r25 = ADD32(ctx->r25, 0XC50);
    // 0x8001DB58: sw          $t9, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->r25;
    // 0x8001DB5C: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x8001DB60: lw          $t1, 0x5254($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5254);
    // 0x8001DB64: nop

    // 0x8001DB68: bne         $t1, $zero, L_8001DBB4
    if (ctx->r9 != 0) {
        // 0x8001DB6C: nop
    
            goto L_8001DBB4;
    }
    // 0x8001DB6C: nop

    // 0x8001DB70: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001DB74: lw          $t2, -0x1F58($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F58);
    // 0x8001DB78: nop

    // 0x8001DB7C: beq         $t2, $zero, L_8001DBAC
    if (ctx->r10 == 0) {
        // 0x8001DB80: nop
    
            goto L_8001DBAC;
    }
    // 0x8001DB80: nop

    // 0x8001DB84: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x8001DB88: lw          $t3, 0x526C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X526C);
    // 0x8001DB8C: nop

    // 0x8001DB90: beq         $t3, $zero, L_8001DBAC
    if (ctx->r11 == 0) {
        // 0x8001DB94: nop
    
            goto L_8001DBAC;
    }
    // 0x8001DB94: nop

    // 0x8001DB98: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8001DB9C: lw          $t9, 0x526C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X526C);
    // 0x8001DBA0: nop

    // 0x8001DBA4: jalr        $t9
    // 0x8001DBA8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_2;
    // 0x8001DBA8: nop

    after_2:
L_8001DBAC:
    // 0x8001DBAC: b           L_8001DBE8
    // 0x8001DBB0: nop

        goto L_8001DBE8;
    // 0x8001DBB0: nop

L_8001DBB4:
    // 0x8001DBB4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x8001DBB8: lw          $t4, 0x5254($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5254);
    // 0x8001DBBC: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8001DBC0: bne         $t4, $at, L_8001DBD4
    if (ctx->r12 != ctx->r1) {
        // 0x8001DBC4: nop
    
            goto L_8001DBD4;
    }
    // 0x8001DBC4: nop

    // 0x8001DBC8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001DBCC: b           L_8001DBE8
    // 0x8001DBD0: sw          $zero, 0x5254($at)
    MEM_W(0X5254, ctx->r1) = 0;
        goto L_8001DBE8;
    // 0x8001DBD0: sw          $zero, 0x5254($at)
    MEM_W(0X5254, ctx->r1) = 0;
L_8001DBD4:
    // 0x8001DBD4: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x8001DBD8: lw          $t5, 0x5254($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X5254);
    // 0x8001DBDC: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8001DBE0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8001DBE4: sw          $t6, 0x5254($at)
    MEM_W(0X5254, ctx->r1) = ctx->r14;
L_8001DBE8:
    // 0x8001DBE8: jal         0x8001D3CC
    // 0x8001DBEC: nop

    func_8001D3CC(rdram, ctx);
        goto after_3;
    // 0x8001DBEC: nop

    after_3:
    // 0x8001DBF0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001DBF4: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8001DBF8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DBFC: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8001DC00: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8001DC04: sw          $t7, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r15;
    // 0x8001DC08: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x8001DC0C: lui         $t0, 0xE900
    ctx->r8 = S32(0XE900 << 16);
    // 0x8001DC10: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8001DC14: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8001DC18: nop

    // 0x8001DC1C: sw          $zero, 0x4($t2)
    MEM_W(0X4, ctx->r10) = 0;
    // 0x8001DC20: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001DC24: lw          $t3, -0x1F04($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1F04);
    // 0x8001DC28: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001DC2C: addiu       $t9, $t3, 0x8
    ctx->r25 = ADD32(ctx->r11, 0X8);
    // 0x8001DC30: sw          $t9, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r25;
    // 0x8001DC34: sw          $t3, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r11;
    // 0x8001DC38: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DC3C: lui         $t4, 0xB800
    ctx->r12 = S32(0XB800 << 16);
    // 0x8001DC40: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8001DC44: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001DC48: nop

    // 0x8001DC4C: sw          $zero, 0x4($t6)
    MEM_W(0X4, ctx->r14) = 0;
    // 0x8001DC50: jal         0x800322B0
    // 0x8001DC54: nop

    osWritebackDCacheAll_recomp(rdram, ctx);
        goto after_4;
    // 0x8001DC54: nop

    after_4:
    // 0x8001DC58: jal         0x8001D814
    // 0x8001DC5C: nop

    Create_GfxTask(rdram, ctx);
        goto after_5;
    // 0x8001DC5C: nop

    after_5:
    // 0x8001DC60: b           L_8001DC68
    // 0x8001DC64: nop

        goto L_8001DC68;
    // 0x8001DC64: nop

L_8001DC68:
    // 0x8001DC68: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001DC6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8001DC70: jr          $ra
    // 0x8001DC74: nop

    return;
    // 0x8001DC74: nop

;}
RECOMP_FUNC void Math_Atan2f(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80014F50: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80014F54: c.eq.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl == ctx->f14.fl;
    // 0x80014F58: nop

    // 0x80014F5C: bc1f        L_80014FD8
    if (!c1cs) {
        // 0x80014F60: nop
    
            goto L_80014FD8;
    }
    // 0x80014F60: nop

    // 0x80014F64: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80014F68: nop

    // 0x80014F6C: c.eq.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl == ctx->f4.fl;
    // 0x80014F70: nop

    // 0x80014F74: bc1f        L_80014F90
    if (!c1cs) {
        // 0x80014F78: nop
    
            goto L_80014F90;
    }
    // 0x80014F78: nop

    // 0x80014F7C: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x80014F80: b           L_80015530
    // 0x80014F84: nop

        goto L_80015530;
    // 0x80014F84: nop

    // 0x80014F88: b           L_80014FD0
    // 0x80014F8C: nop

        goto L_80014FD0;
    // 0x80014F8C: nop

L_80014F90:
    // 0x80014F90: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80014F94: nop

    // 0x80014F98: c.lt.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl < ctx->f12.fl;
    // 0x80014F9C: nop

    // 0x80014FA0: bc1f        L_80014FC0
    if (!c1cs) {
        // 0x80014FA4: nop
    
            goto L_80014FC0;
    }
    // 0x80014FA4: nop

    // 0x80014FA8: lui         $at, 0x4234
    ctx->r1 = S32(0X4234 << 16);
    // 0x80014FAC: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80014FB0: b           L_80015530
    // 0x80014FB4: nop

        goto L_80015530;
    // 0x80014FB4: nop

    // 0x80014FB8: b           L_80014FD0
    // 0x80014FBC: nop

        goto L_80014FD0;
    // 0x80014FBC: nop

L_80014FC0:
    // 0x80014FC0: lui         $at, 0x4361
    ctx->r1 = S32(0X4361 << 16);
    // 0x80014FC4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80014FC8: b           L_80015530
    // 0x80014FCC: nop

        goto L_80015530;
    // 0x80014FCC: nop

L_80014FD0:
    // 0x80014FD0: b           L_80015528
    // 0x80014FD4: nop

        goto L_80015528;
    // 0x80014FD4: nop

L_80014FD8:
    // 0x80014FD8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80014FDC: nop

    // 0x80014FE0: c.eq.s      $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f12.fl == ctx->f8.fl;
    // 0x80014FE4: nop

    // 0x80014FE8: bc1f        L_80015038
    if (!c1cs) {
        // 0x80014FEC: nop
    
            goto L_80015038;
    }
    // 0x80014FEC: nop

    // 0x80014FF0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80014FF4: nop

    // 0x80014FF8: c.lt.s      $f10, $f14
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f10.fl < ctx->f14.fl;
    // 0x80014FFC: nop

    // 0x80015000: bc1f        L_80015020
    if (!c1cs) {
        // 0x80015004: nop
    
            goto L_80015020;
    }
    // 0x80015004: nop

    // 0x80015008: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x8001500C: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80015010: b           L_80015530
    // 0x80015014: nop

        goto L_80015530;
    // 0x80015014: nop

    // 0x80015018: b           L_80015030
    // 0x8001501C: nop

        goto L_80015030;
    // 0x8001501C: nop

L_80015020:
    // 0x80015020: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80015024: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80015028: b           L_80015530
    // 0x8001502C: nop

        goto L_80015530;
    // 0x8001502C: nop

L_80015030:
    // 0x80015030: b           L_80015528
    // 0x80015034: nop

        goto L_80015528;
    // 0x80015034: nop

L_80015038:
    // 0x80015038: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001503C: nop

    // 0x80015040: c.eq.s      $f14, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f14.fl == ctx->f16.fl;
    // 0x80015044: nop

    // 0x80015048: bc1f        L_80015094
    if (!c1cs) {
        // 0x8001504C: nop
    
            goto L_80015094;
    }
    // 0x8001504C: nop

    // 0x80015050: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80015054: nop

    // 0x80015058: c.lt.s      $f18, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f18.fl < ctx->f12.fl;
    // 0x8001505C: nop

    // 0x80015060: bc1f        L_8001507C
    if (!c1cs) {
        // 0x80015064: nop
    
            goto L_8001507C;
    }
    // 0x80015064: nop

    // 0x80015068: mtc1        $zero, $f0
    ctx->f0.u32l = 0;
    // 0x8001506C: b           L_80015530
    // 0x80015070: nop

        goto L_80015530;
    // 0x80015070: nop

    // 0x80015074: b           L_8001508C
    // 0x80015078: nop

        goto L_8001508C;
    // 0x80015078: nop

L_8001507C:
    // 0x8001507C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80015080: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x80015084: b           L_80015530
    // 0x80015088: nop

        goto L_80015530;
    // 0x80015088: nop

L_8001508C:
    // 0x8001508C: b           L_80015528
    // 0x80015090: nop

        goto L_80015528;
    // 0x80015090: nop

L_80015094:
    // 0x80015094: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80015098: nop

    // 0x8001509C: mul.s       $f6, $f14, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x800150A0: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x800150A4: nop

    // 0x800150A8: bc1f        L_800150F8
    if (!c1cs) {
        // 0x800150AC: nop
    
            goto L_800150F8;
    }
    // 0x800150AC: nop

    // 0x800150B0: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800150B4: nop

    // 0x800150B8: c.lt.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl < ctx->f12.fl;
    // 0x800150BC: nop

    // 0x800150C0: bc1f        L_800150E0
    if (!c1cs) {
        // 0x800150C4: nop
    
            goto L_800150E0;
    }
    // 0x800150C4: nop

    // 0x800150C8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800150CC: lwc1        $f0, -0x43F0($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X43F0);
    // 0x800150D0: b           L_80015530
    // 0x800150D4: nop

        goto L_80015530;
    // 0x800150D4: nop

    // 0x800150D8: b           L_800150F0
    // 0x800150DC: nop

        goto L_800150F0;
    // 0x800150DC: nop

L_800150E0:
    // 0x800150E0: lui         $at, 0x4307
    ctx->r1 = S32(0X4307 << 16);
    // 0x800150E4: mtc1        $at, $f0
    ctx->f0.u32l = ctx->r1;
    // 0x800150E8: b           L_80015530
    // 0x800150EC: nop

        goto L_80015530;
    // 0x800150EC: nop

L_800150F0:
    // 0x800150F0: b           L_80015528
    // 0x800150F4: nop

        goto L_80015528;
    // 0x800150F4: nop

L_800150F8:
    // 0x800150F8: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800150FC: nop

    // 0x80015100: c.lt.s      $f10, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f10.fl < ctx->f12.fl;
    // 0x80015104: nop

    // 0x80015108: bc1f        L_80015314
    if (!c1cs) {
        // 0x8001510C: nop
    
            goto L_80015314;
    }
    // 0x8001510C: nop

    // 0x80015110: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80015114: nop

    // 0x80015118: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x8001511C: nop

    // 0x80015120: bc1f        L_80015208
    if (!c1cs) {
        // 0x80015124: nop
    
            goto L_80015208;
    }
    // 0x80015124: nop

    // 0x80015128: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x8001512C: nop

    // 0x80015130: bc1f        L_80015194
    if (!c1cs) {
        // 0x80015134: nop
    
            goto L_80015194;
    }
    // 0x80015134: nop

    // 0x80015138: nop

    // 0x8001513C: div.s       $f18, $f14, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80015140: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80015144: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80015148: nop

    // 0x8001514C: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80015150: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x80015154: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x80015158: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8001515C: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x80015160: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015164: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015168: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001516C: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80015170: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x80015174: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x80015178: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8001517C: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80015180: lwc1        $f0, -0x5C00($at)
    ctx->f0.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x80015184: b           L_80015530
    // 0x80015188: nop

        goto L_80015530;
    // 0x80015188: nop

    // 0x8001518C: b           L_80015200
    // 0x80015190: nop

        goto L_80015200;
    // 0x80015190: nop

L_80015194:
    // 0x80015194: nop

    // 0x80015198: div.s       $f16, $f12, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f16.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    // 0x8001519C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800151A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800151A4: nop

    // 0x800151A8: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x800151AC: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x800151B0: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x800151B4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x800151B8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800151BC: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x800151C0: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800151C4: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800151C8: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800151CC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800151D0: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800151D4: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x800151D8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800151DC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800151E0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800151E4: lwc1        $f16, -0x5C00($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x800151E8: nop

    // 0x800151EC: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x800151F0: swc1        $f18, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f18.u32l;
    // 0x800151F4: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800151F8: b           L_80015530
    // 0x800151FC: nop

        goto L_80015530;
    // 0x800151FC: nop

L_80015200:
    // 0x80015200: b           L_8001530C
    // 0x80015204: nop

        goto L_8001530C;
    // 0x80015204: nop

L_80015208:
    // 0x80015208: mul.s       $f4, $f12, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x8001520C: nop

    // 0x80015210: mul.s       $f8, $f14, $f14
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f8.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80015214: c.lt.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl < ctx->f4.fl;
    // 0x80015218: nop

    // 0x8001521C: bc1f        L_8001529C
    if (!c1cs) {
        // 0x80015220: nop
    
            goto L_8001529C;
    }
    // 0x80015220: nop

    // 0x80015224: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80015228: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8001522C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80015230: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80015234: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80015238: div.s       $f16, $f6, $f12
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f16.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x8001523C: mul.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f18.fl);
    // 0x80015240: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x80015244: cfc1        $t2, $FpcCsr
    ctx->r10 = get_cop1_cs();
    // 0x80015248: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8001524C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80015250: ori         $at, $t2, 0x3
    ctx->r1 = ctx->r10 | 0X3;
    // 0x80015254: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015258: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8001525C: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80015260: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80015264: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80015268: mfc1        $t3, $f6
    ctx->r11 = (int32_t)ctx->f6.u32l;
    // 0x8001526C: ctc1        $t2, $FpcCsr
    set_cop1_cs(ctx->r10);
    // 0x80015270: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80015274: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80015278: lwc1        $f16, -0x5C00($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x8001527C: nop

    // 0x80015280: sub.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f8.fl - ctx->f16.fl;
    // 0x80015284: swc1        $f18, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f18.u32l;
    // 0x80015288: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x8001528C: b           L_80015530
    // 0x80015290: nop

        goto L_80015530;
    // 0x80015290: nop

    // 0x80015294: b           L_8001530C
    // 0x80015298: nop

        goto L_8001530C;
    // 0x80015298: nop

L_8001529C:
    // 0x8001529C: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800152A0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800152A4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800152A8: mul.s       $f10, $f4, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f12.fl);
    // 0x800152AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800152B0: div.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800152B4: mul.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800152B8: swc1        $f16, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f16.u32l;
    // 0x800152BC: cfc1        $t5, $FpcCsr
    ctx->r13 = get_cop1_cs();
    // 0x800152C0: lwc1        $f18, 0x4($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800152C4: ori         $at, $t5, 0x3
    ctx->r1 = ctx->r13 | 0X3;
    // 0x800152C8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800152CC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800152D0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800152D4: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800152D8: mfc1        $t6, $f4
    ctx->r14 = (int32_t)ctx->f4.u32l;
    // 0x800152DC: ctc1        $t5, $FpcCsr
    set_cop1_cs(ctx->r13);
    // 0x800152E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800152E4: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800152E8: lwc1        $f10, -0x5C00($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x800152EC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800152F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800152F4: nop

    // 0x800152F8: add.s       $f8, $f10, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x800152FC: swc1        $f8, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f8.u32l;
    // 0x80015300: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80015304: b           L_80015530
    // 0x80015308: nop

        goto L_80015530;
    // 0x80015308: nop

L_8001530C:
    // 0x8001530C: b           L_80015528
    // 0x80015310: nop

        goto L_80015528;
    // 0x80015310: nop

L_80015314:
    // 0x80015314: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80015318: nop

    // 0x8001531C: c.lt.s      $f16, $f14
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f16.fl < ctx->f14.fl;
    // 0x80015320: nop

    // 0x80015324: bc1f        L_80015438
    if (!c1cs) {
        // 0x80015328: nop
    
            goto L_80015438;
    }
    // 0x80015328: nop

    // 0x8001532C: mul.s       $f18, $f12, $f12
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f18.fl = MUL_S(ctx->f12.fl, ctx->f12.fl);
    // 0x80015330: nop

    // 0x80015334: mul.s       $f4, $f14, $f14
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f4.fl = MUL_S(ctx->f14.fl, ctx->f14.fl);
    // 0x80015338: c.lt.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl < ctx->f18.fl;
    // 0x8001533C: nop

    // 0x80015340: bc1f        L_800153C0
    if (!c1cs) {
        // 0x80015344: nop
    
            goto L_800153C0;
    }
    // 0x80015344: nop

    // 0x80015348: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8001534C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80015350: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80015354: mul.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f14.fl);
    // 0x80015358: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8001535C: div.s       $f8, $f6, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f12.fl);
    // 0x80015360: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80015364: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80015368: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8001536C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80015370: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80015374: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80015378: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8001537C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015380: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80015384: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80015388: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8001538C: mfc1        $t9, $f6
    ctx->r25 = (int32_t)ctx->f6.u32l;
    // 0x80015390: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80015394: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80015398: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8001539C: lwc1        $f8, -0x5C00($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x800153A0: nop

    // 0x800153A4: sub.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl - ctx->f8.fl;
    // 0x800153A8: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
    // 0x800153AC: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800153B0: b           L_80015530
    // 0x800153B4: nop

        goto L_80015530;
    // 0x800153B4: nop

    // 0x800153B8: b           L_80015430
    // 0x800153BC: nop

        goto L_80015430;
    // 0x800153BC: nop

L_800153C0:
    // 0x800153C0: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x800153C4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800153C8: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800153CC: mul.s       $f10, $f18, $f12
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f10.fl = MUL_S(ctx->f18.fl, ctx->f12.fl);
    // 0x800153D0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800153D4: div.s       $f6, $f10, $f14
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f6.fl = DIV_S(ctx->f10.fl, ctx->f14.fl);
    // 0x800153D8: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x800153DC: swc1        $f8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f8.u32l;
    // 0x800153E0: cfc1        $t1, $FpcCsr
    ctx->r9 = get_cop1_cs();
    // 0x800153E4: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800153E8: ori         $at, $t1, 0x3
    ctx->r1 = ctx->r9 | 0X3;
    // 0x800153EC: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800153F0: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800153F4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800153F8: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x800153FC: mfc1        $t2, $f18
    ctx->r10 = (int32_t)ctx->f18.u32l;
    // 0x80015400: ctc1        $t1, $FpcCsr
    set_cop1_cs(ctx->r9);
    // 0x80015404: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80015408: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8001540C: lwc1        $f10, -0x5C00($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x80015410: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80015414: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80015418: nop

    // 0x8001541C: add.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = ctx->f10.fl + ctx->f6.fl;
    // 0x80015420: swc1        $f4, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f4.u32l;
    // 0x80015424: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80015428: b           L_80015530
    // 0x8001542C: nop

        goto L_80015530;
    // 0x8001542C: nop

L_80015430:
    // 0x80015430: b           L_80015528
    // 0x80015434: nop

        goto L_80015528;
    // 0x80015434: nop

L_80015438:
    // 0x80015438: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x8001543C: nop

    // 0x80015440: bc1f        L_800154BC
    if (!c1cs) {
        // 0x80015444: nop
    
            goto L_800154BC;
    }
    // 0x80015444: nop

    // 0x80015448: nop

    // 0x8001544C: div.s       $f8, $f14, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f8.fl = DIV_S(ctx->f14.fl, ctx->f12.fl);
    // 0x80015450: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80015454: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80015458: nop

    // 0x8001545C: mul.s       $f18, $f8, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f8.fl, ctx->f16.fl);
    // 0x80015460: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x80015464: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x80015468: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8001546C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x80015470: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80015474: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80015478: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001547C: cvt.w.s     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.u32l = CVT_W_S(ctx->f10.fl);
    // 0x80015480: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x80015484: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x80015488: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8001548C: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80015490: lwc1        $f4, -0x5C00($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x80015494: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80015498: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8001549C: nop

    // 0x800154A0: add.s       $f16, $f4, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800154A4: swc1        $f16, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f16.u32l;
    // 0x800154A8: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x800154AC: b           L_80015530
    // 0x800154B0: nop

        goto L_80015530;
    // 0x800154B0: nop

    // 0x800154B4: b           L_80015528
    // 0x800154B8: nop

        goto L_80015528;
    // 0x800154B8: nop

L_800154BC:
    // 0x800154BC: nop

    // 0x800154C0: div.s       $f18, $f12, $f14
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f14.fl); 
    ctx->f18.fl = DIV_S(ctx->f12.fl, ctx->f14.fl);
    // 0x800154C4: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x800154C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800154CC: nop

    // 0x800154D0: mul.s       $f6, $f18, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f10.fl);
    // 0x800154D4: swc1        $f6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f6.u32l;
    // 0x800154D8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x800154DC: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x800154E0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800154E4: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x800154E8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800154EC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800154F0: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800154F4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800154F8: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x800154FC: mfc1        $t8, $f16
    ctx->r24 = (int32_t)ctx->f16.u32l;
    // 0x80015500: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80015504: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80015508: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8001550C: lwc1        $f18, -0x5C00($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5C00);
    // 0x80015510: nop

    // 0x80015514: sub.s       $f10, $f4, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f4.fl - ctx->f18.fl;
    // 0x80015518: swc1        $f10, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->f10.u32l;
    // 0x8001551C: lwc1        $f0, 0x0($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X0);
    // 0x80015520: b           L_80015530
    // 0x80015524: nop

        goto L_80015530;
    // 0x80015524: nop

L_80015528:
    // 0x80015528: b           L_80015530
    // 0x8001552C: nop

        goto L_80015530;
    // 0x8001552C: nop

L_80015530:
    // 0x80015530: jr          $ra
    // 0x80015534: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80015534: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8000BD20(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000BD20: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000BD24: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000BD28: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000BD2C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8000BD30: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x8000BD34: lh          $t6, 0x32($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X32);
    // 0x8000BD38: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000BD3C: lw          $t8, 0x2D88($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D88);
    // 0x8000BD40: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x8000BD44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000BD48: sw          $t9, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r25;
    // 0x8000BD4C: lh          $t0, 0x32($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X32);
    // 0x8000BD50: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000BD54: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8000BD58: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8000BD5C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8000BD60: lw          $t2, 0x2D5C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D5C);
    // 0x8000BD64: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8000BD68: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8000BD6C: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8000BD70: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8000BD74: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8000BD78: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000BD7C: lw          $t5, 0xC($t4)
    ctx->r13 = MEM_W(ctx->r12, 0XC);
    // 0x8000BD80: nop

    // 0x8000BD84: beq         $t5, $at, L_8000BD94
    if (ctx->r13 == ctx->r1) {
        // 0x8000BD88: nop
    
            goto L_8000BD94;
    }
    // 0x8000BD88: nop

    // 0x8000BD8C: b           L_8000C2C0
    // 0x8000BD90: nop

        goto L_8000C2C0;
    // 0x8000BD90: nop

L_8000BD94:
    // 0x8000BD94: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000BD98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8000BD9C: nop

    // 0x8000BDA0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8000BDA4: nop

    // 0x8000BDA8: bc1f        L_8000BDC0
    if (!c1cs) {
        // 0x8000BDAC: nop
    
            goto L_8000BDC0;
    }
    // 0x8000BDAC: nop

    // 0x8000BDB0: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000BDB4: nop

    // 0x8000BDB8: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8000BDBC: swc1        $f10, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->f10.u32l;
L_8000BDC0:
    // 0x8000BDC0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BDC4: lwc1        $f18, 0x2D8C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2D8C);
    // 0x8000BDC8: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000BDCC: nop

    // 0x8000BDD0: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x8000BDD4: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8000BDD8: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000BDDC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000BDE0: nop

    // 0x8000BDE4: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8000BDE8: nop

    // 0x8000BDEC: bc1f        L_8000BE00
    if (!c1cs) {
        // 0x8000BDF0: nop
    
            goto L_8000BE00;
    }
    // 0x8000BDF0: nop

    // 0x8000BDF4: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000BDF8: nop

    // 0x8000BDFC: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8000BE00:
    // 0x8000BE00: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x8000BE04: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BE08: lwc1        $f18, 0x2D90($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2D90);
    // 0x8000BE0C: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000BE10: nop

    // 0x8000BE14: c.le.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl <= ctx->f18.fl;
    // 0x8000BE18: nop

    // 0x8000BE1C: bc1f        L_8000BEE0
    if (!c1cs) {
        // 0x8000BE20: nop
    
            goto L_8000BEE0;
    }
    // 0x8000BE20: nop

    // 0x8000BE24: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BE28: lwc1        $f4, 0x2D90($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D90);
    // 0x8000BE2C: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000BE30: lui         $at, 0x4300
    ctx->r1 = S32(0X4300 << 16);
    // 0x8000BE34: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000BE38: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8000BE3C: mul.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f8.fl, ctx->f10.fl);
    // 0x8000BE40: nop

    // 0x8000BE44: div.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = DIV_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8000BE48: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000BE4C: nop

    // 0x8000BE50: ori         $at, $t6, 0x3
    ctx->r1 = ctx->r14 | 0X3;
    // 0x8000BE54: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000BE58: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000BE5C: nop

    // 0x8000BE60: cvt.w.s     $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    ctx->f6.u32l = CVT_W_S(ctx->f18.fl);
    // 0x8000BE64: mfc1        $t7, $f6
    ctx->r15 = (int32_t)ctx->f6.u32l;
    // 0x8000BE68: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000BE6C: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
    // 0x8000BE70: nop

    // 0x8000BE74: lh          $t8, 0x1E($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X1E);
    // 0x8000BE78: nop

    // 0x8000BE7C: slti        $at, $t8, 0x80
    ctx->r1 = SIGNED(ctx->r24) < 0X80 ? 1 : 0;
    // 0x8000BE80: bne         $at, $zero, L_8000BE90
    if (ctx->r1 != 0) {
        // 0x8000BE84: nop
    
            goto L_8000BE90;
    }
    // 0x8000BE84: nop

    // 0x8000BE88: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x8000BE8C: sh          $t9, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r25;
L_8000BE90:
    // 0x8000BE90: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8000BE94: nop

    // 0x8000BE98: lb          $t1, 0xE($t0)
    ctx->r9 = MEM_B(ctx->r8, 0XE);
    // 0x8000BE9C: nop

    // 0x8000BEA0: sb          $t1, 0x1D($sp)
    MEM_B(0X1D, ctx->r29) = ctx->r9;
    // 0x8000BEA4: lb          $t3, 0x1D($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X1D);
    // 0x8000BEA8: lh          $t2, 0x1E($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1E);
    // 0x8000BEAC: andi        $t4, $t3, 0x7F
    ctx->r12 = ctx->r11 & 0X7F;
    // 0x8000BEB0: slt         $at, $t2, $t4
    ctx->r1 = SIGNED(ctx->r10) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x8000BEB4: beq         $at, $zero, L_8000BEE0
    if (ctx->r1 == 0) {
        // 0x8000BEB8: nop
    
            goto L_8000BEE0;
    }
    // 0x8000BEB8: nop

    // 0x8000BEBC: lb          $t5, 0x1D($sp)
    ctx->r13 = MEM_B(ctx->r29, 0X1D);
    // 0x8000BEC0: nop

    // 0x8000BEC4: andi        $t6, $t5, 0x80
    ctx->r14 = ctx->r13 & 0X80;
    // 0x8000BEC8: beq         $t6, $zero, L_8000BEDC
    if (ctx->r14 == 0) {
        // 0x8000BECC: nop
    
            goto L_8000BEDC;
    }
    // 0x8000BECC: nop

    // 0x8000BED0: andi        $t7, $t5, 0x7F
    ctx->r15 = ctx->r13 & 0X7F;
    // 0x8000BED4: b           L_8000BEE0
    // 0x8000BED8: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
        goto L_8000BEE0;
    // 0x8000BED8: sh          $t7, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r15;
L_8000BEDC:
    // 0x8000BEDC: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
L_8000BEE0:
    // 0x8000BEE0: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x8000BEE4: lh          $a1, 0x1E($sp)
    ctx->r5 = MEM_H(ctx->r29, 0X1E);
    // 0x8000BEE8: jal         0x8000C2D0
    // 0x8000BEEC: nop

    func_8000C2D0(rdram, ctx);
        goto after_0;
    // 0x8000BEEC: nop

    after_0:
    // 0x8000BEF0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000BEF4: lh          $t9, 0x2D9C($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2D9C);
    // 0x8000BEF8: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x8000BEFC: nop

    // 0x8000BF00: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000BF04: sh          $t0, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r8;
    // 0x8000BF08: lh          $t1, 0x36($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X36);
    // 0x8000BF0C: nop

    // 0x8000BF10: slti        $at, $t1, 0x168
    ctx->r1 = SIGNED(ctx->r9) < 0X168 ? 1 : 0;
    // 0x8000BF14: bne         $at, $zero, L_8000BF2C
    if (ctx->r1 != 0) {
        // 0x8000BF18: nop
    
            goto L_8000BF2C;
    }
    // 0x8000BF18: nop

    // 0x8000BF1C: lh          $t3, 0x36($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X36);
    // 0x8000BF20: nop

    // 0x8000BF24: addiu       $t2, $t3, -0x168
    ctx->r10 = ADD32(ctx->r11, -0X168);
    // 0x8000BF28: sh          $t2, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r10;
L_8000BF2C:
    // 0x8000BF2C: lh          $t4, 0x36($sp)
    ctx->r12 = MEM_H(ctx->r29, 0X36);
    // 0x8000BF30: nop

    // 0x8000BF34: slti        $at, $t4, 0xB5
    ctx->r1 = SIGNED(ctx->r12) < 0XB5 ? 1 : 0;
    // 0x8000BF38: bne         $at, $zero, L_8000BF50
    if (ctx->r1 != 0) {
        // 0x8000BF3C: nop
    
            goto L_8000BF50;
    }
    // 0x8000BF3C: nop

    // 0x8000BF40: lh          $t6, 0x36($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X36);
    // 0x8000BF44: addiu       $t5, $zero, 0x168
    ctx->r13 = ADD32(0, 0X168);
    // 0x8000BF48: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x8000BF4C: sh          $t7, 0x36($sp)
    MEM_H(0X36, ctx->r29) = ctx->r15;
L_8000BF50:
    // 0x8000BF50: lh          $t8, 0x36($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X36);
    // 0x8000BF54: addiu       $at, $zero, 0xB4
    ctx->r1 = ADD32(0, 0XB4);
    // 0x8000BF58: sll         $t9, $t8, 7
    ctx->r25 = S32(ctx->r24 << 7);
    // 0x8000BF5C: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x8000BF60: mflo        $t0
    ctx->r8 = lo;
    // 0x8000BF64: sb          $t0, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r8;
    // 0x8000BF68: nop

    // 0x8000BF6C: lbu         $t1, 0x1C($sp)
    ctx->r9 = MEM_BU(ctx->r29, 0X1C);
    // 0x8000BF70: nop

    // 0x8000BF74: slti        $at, $t1, 0x80
    ctx->r1 = SIGNED(ctx->r9) < 0X80 ? 1 : 0;
    // 0x8000BF78: bne         $at, $zero, L_8000BF88
    if (ctx->r1 != 0) {
        // 0x8000BF7C: nop
    
            goto L_8000BF88;
    }
    // 0x8000BF7C: nop

    // 0x8000BF80: addiu       $t3, $zero, 0x7F
    ctx->r11 = ADD32(0, 0X7F);
    // 0x8000BF84: sb          $t3, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r11;
L_8000BF88:
    // 0x8000BF88: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BF8C: lwc1        $f8, 0x2D98($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2D98);
    // 0x8000BF90: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000BF94: nop

    // 0x8000BF98: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x8000BF9C: nop

    // 0x8000BFA0: bc1t        L_8000C0D0
    if (c1cs) {
        // 0x8000BFA4: nop
    
            goto L_8000C0D0;
    }
    // 0x8000BFA4: nop

    // 0x8000BFA8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BFAC: lwc1        $f4, 0x2D94($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D94);
    // 0x8000BFB0: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000BFB4: nop

    // 0x8000BFB8: sub.s       $f18, $f16, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f16.fl - ctx->f4.fl;
    // 0x8000BFBC: swc1        $f18, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f18.u32l;
    // 0x8000BFC0: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000BFC4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8000BFC8: nop

    // 0x8000BFCC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x8000BFD0: nop

    // 0x8000BFD4: bc1f        L_8000BFE8
    if (!c1cs) {
        // 0x8000BFD8: nop
    
            goto L_8000BFE8;
    }
    // 0x8000BFD8: nop

    // 0x8000BFDC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000BFE0: nop

    // 0x8000BFE4: swc1        $f10, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f10.u32l;
L_8000BFE8:
    // 0x8000BFE8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000BFEC: lwc1        $f4, 0x2D98($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2D98);
    // 0x8000BFF0: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000BFF4: nop

    // 0x8000BFF8: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x8000BFFC: nop

    // 0x8000C000: bc1f        L_8000C0D0
    if (!c1cs) {
        // 0x8000C004: nop
    
            goto L_8000C0D0;
    }
    // 0x8000C004: nop

    // 0x8000C008: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000C00C: lwc1        $f6, 0x2D98($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2D98);
    // 0x8000C010: lwc1        $f18, 0x24($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000C014: lbu         $t2, 0x1C($sp)
    ctx->r10 = MEM_BU(ctx->r29, 0X1C);
    // 0x8000C018: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8000C01C: addiu       $t4, $zero, 0x40
    ctx->r12 = ADD32(0, 0X40);
    // 0x8000C020: subu        $t5, $t4, $t2
    ctx->r13 = SUB32(ctx->r12, ctx->r10);
    // 0x8000C024: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x8000C028: lui         $at, 0x4280
    ctx->r1 = S32(0X4280 << 16);
    // 0x8000C02C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000C030: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000C034: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000C038: mul.s       $f4, $f16, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f16.fl, ctx->f8.fl);
    // 0x8000C03C: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x8000C040: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x8000C044: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000C048: nop

    // 0x8000C04C: cvt.w.s     $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    ctx->f10.u32l = CVT_W_S(ctx->f6.fl);
    // 0x8000C050: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000C054: nop

    // 0x8000C058: andi        $at, $t7, 0x4
    ctx->r1 = ctx->r15 & 0X4;
    // 0x8000C05C: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8000C060: beq         $t7, $zero, L_8000C0B4
    if (ctx->r15 == 0) {
        // 0x8000C064: nop
    
            goto L_8000C0B4;
    }
    // 0x8000C064: nop

    // 0x8000C068: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x8000C06C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8000C070: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000C074: sub.s       $f10, $f6, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f10.fl;
    // 0x8000C078: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000C07C: nop

    // 0x8000C080: cvt.w.s     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.u32l = CVT_W_S(ctx->f10.fl);
    // 0x8000C084: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000C088: nop

    // 0x8000C08C: andi        $at, $t7, 0x4
    ctx->r1 = ctx->r15 & 0X4;
    // 0x8000C090: andi        $t7, $t7, 0x78
    ctx->r15 = ctx->r15 & 0X78;
    // 0x8000C094: bne         $t7, $zero, L_8000C0AC
    if (ctx->r15 != 0) {
        // 0x8000C098: nop
    
            goto L_8000C0AC;
    }
    // 0x8000C098: nop

    // 0x8000C09C: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8000C0A0: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8000C0A4: b           L_8000C0C4
    // 0x8000C0A8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
        goto L_8000C0C4;
    // 0x8000C0A8: or          $t7, $t7, $at
    ctx->r15 = ctx->r15 | ctx->r1;
L_8000C0AC:
    // 0x8000C0AC: b           L_8000C0C4
    // 0x8000C0B0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
        goto L_8000C0C4;
    // 0x8000C0B0: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
L_8000C0B4:
    // 0x8000C0B4: mfc1        $t7, $f10
    ctx->r15 = (int32_t)ctx->f10.u32l;
    // 0x8000C0B8: nop

    // 0x8000C0BC: bltz        $t7, L_8000C0AC
    if (SIGNED(ctx->r15) < 0) {
        // 0x8000C0C0: nop
    
            goto L_8000C0AC;
    }
    // 0x8000C0C0: nop

L_8000C0C4:
    // 0x8000C0C4: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x8000C0C8: sb          $t7, 0x1C($sp)
    MEM_B(0X1C, ctx->r29) = ctx->r15;
    // 0x8000C0CC: nop

L_8000C0D0:
    // 0x8000C0D0: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x8000C0D4: lbu         $a1, 0x1C($sp)
    ctx->r5 = MEM_BU(ctx->r29, 0X1C);
    // 0x8000C0D8: jal         0x8000C7D4
    // 0x8000C0DC: nop

    func_8000C7D4(rdram, ctx);
        goto after_1;
    // 0x8000C0DC: nop

    after_1:
    // 0x8000C0E0: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x8000C0E4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8000C0E8: lwc1        $f16, 0x0($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8000C0EC: lwc1        $f8, 0x4($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X4);
    // 0x8000C0F0: nop

    // 0x8000C0F4: add.s       $f18, $f16, $f8
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f18.fl = ctx->f16.fl + ctx->f8.fl;
    // 0x8000C0F8: c.eq.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl == ctx->f4.fl;
    // 0x8000C0FC: nop

    // 0x8000C100: bc1t        L_8000C2A8
    if (c1cs) {
        // 0x8000C104: nop
    
            goto L_8000C2A8;
    }
    // 0x8000C104: nop

    // 0x8000C108: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x8000C10C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000C110: lwc1        $f10, 0x2DA4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X2DA4);
    // 0x8000C114: lwc1        $f6, 0x0($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8000C118: nop

    // 0x8000C11C: mul.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = MUL_S(ctx->f6.fl, ctx->f10.fl);
    // 0x8000C120: swc1        $f16, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f16.u32l;
    // 0x8000C124: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8000C128: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000C12C: lwc1        $f18, 0x2DA4($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X2DA4);
    // 0x8000C130: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8000C134: nop

    // 0x8000C138: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8000C13C: swc1        $f4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f4.u32l;
    // 0x8000C140: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x8000C144: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8000C148: lwc1        $f6, 0x8($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8000C14C: nop

    // 0x8000C150: c.le.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl <= ctx->f6.fl;
    // 0x8000C154: nop

    // 0x8000C158: bc1f        L_8000C268
    if (!c1cs) {
        // 0x8000C15C: nop
    
            goto L_8000C268;
    }
    // 0x8000C15C: nop

    // 0x8000C160: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000C164: nop

    // 0x8000C168: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x8000C16C: nop

    // 0x8000C170: bc1f        L_8000C268
    if (!c1cs) {
        // 0x8000C174: nop
    
            goto L_8000C268;
    }
    // 0x8000C174: nop

    // 0x8000C178: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8000C17C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8000C180: lwc1        $f8, 0x24($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000C184: nop

    // 0x8000C188: mul.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f8.fl, ctx->f18.fl);
    // 0x8000C18C: swc1        $f4, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f4.u32l;
    // 0x8000C190: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8000C194: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000C198: lwc1        $f10, 0x20($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000C19C: nop

    // 0x8000C1A0: mul.s       $f16, $f10, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8000C1A4: swc1        $f16, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f16.u32l;
    // 0x8000C1A8: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x8000C1AC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000C1B0: lh          $t2, 0x2D9E($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X2D9E);
    // 0x8000C1B4: lh          $t4, 0xC($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XC);
    // 0x8000C1B8: nop

    // 0x8000C1BC: slt         $at, $t4, $t2
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8000C1C0: beq         $at, $zero, L_8000C260
    if (ctx->r1 == 0) {
        // 0x8000C1C4: nop
    
            goto L_8000C260;
    }
    // 0x8000C1C4: nop

    // 0x8000C1C8: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x8000C1CC: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000C1D0: lh          $t6, 0xC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XC);
    // 0x8000C1D4: lwc1        $f18, 0x8($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8000C1D8: mtc1        $t6, $f10
    ctx->f10.u32l = ctx->r14;
    // 0x8000C1DC: sub.s       $f4, $f8, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f8.fl - ctx->f18.fl;
    // 0x8000C1E0: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000C1E4: add.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f4.fl;
    // 0x8000C1E8: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x8000C1EC: nop

    // 0x8000C1F0: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x8000C1F4: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000C1F8: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000C1FC: nop

    // 0x8000C200: cvt.w.s     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8000C204: mfc1        $t8, $f8
    ctx->r24 = (int32_t)ctx->f8.u32l;
    // 0x8000C208: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x8000C20C: sh          $t8, 0xC($t5)
    MEM_H(0XC, ctx->r13) = ctx->r24;
    // 0x8000C210: nop

    // 0x8000C214: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8000C218: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000C21C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8000C220: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000C224: lh          $t9, 0x2D9E($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X2D9E);
    // 0x8000C228: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000C22C: lh          $t1, 0xC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XC);
    // 0x8000C230: neg.s       $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = -ctx->f18.fl;
    // 0x8000C234: mul.s       $f4, $f10, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x8000C238: subu        $t3, $t9, $t1
    ctx->r11 = SUB32(ctx->r25, ctx->r9);
    // 0x8000C23C: mtc1        $t3, $f16
    ctx->f16.u32l = ctx->r11;
    // 0x8000C240: mtc1        $t9, $f10
    ctx->f10.u32l = ctx->r25;
    // 0x8000C244: cvt.s.w     $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    ctx->f8.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000C248: cvt.s.w     $f6, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    ctx->f6.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8000C24C: nop

    // 0x8000C250: div.s       $f16, $f8, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = DIV_S(ctx->f8.fl, ctx->f6.fl);
    // 0x8000C254: mul.s       $f10, $f4, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f16.fl);
    // 0x8000C258: add.s       $f8, $f18, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x8000C25C: swc1        $f8, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f8.u32l;
L_8000C260:
    // 0x8000C260: b           L_8000C274
    // 0x8000C264: nop

        goto L_8000C274;
    // 0x8000C264: nop

L_8000C268:
    // 0x8000C268: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x8000C26C: nop

    // 0x8000C270: sh          $zero, 0xC($t4)
    MEM_H(0XC, ctx->r12) = 0;
L_8000C274:
    // 0x8000C274: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000C278: lwc1        $f6, 0x2DA0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X2DA0);
    // 0x8000C27C: lwc1        $f4, 0x24($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8000C280: lwc1        $f18, 0x20($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X20);
    // 0x8000C284: sub.s       $f16, $f6, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f4.fl;
    // 0x8000C288: sub.s       $f10, $f6, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8000C28C: nop

    // 0x8000C290: div.s       $f8, $f16, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f8.fl = DIV_S(ctx->f16.fl, ctx->f10.fl);
    // 0x8000C294: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x8000C298: lh          $a0, 0x32($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X32);
    // 0x8000C29C: lw          $a1, 0x24($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X24);
    // 0x8000C2A0: jal         0x8000C48C
    // 0x8000C2A4: nop

    func_8000C48C(rdram, ctx);
        goto after_2;
    // 0x8000C2A4: nop

    after_2:
L_8000C2A8:
    // 0x8000C2A8: lwc1        $f4, 0x38($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X38);
    // 0x8000C2AC: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8000C2B0: nop

    // 0x8000C2B4: swc1        $f4, 0x8($t2)
    MEM_W(0X8, ctx->r10) = ctx->f4.u32l;
    // 0x8000C2B8: b           L_8000C2C0
    // 0x8000C2BC: nop

        goto L_8000C2C0;
    // 0x8000C2BC: nop

L_8000C2C0:
    // 0x8000C2C0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000C2C4: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8000C2C8: jr          $ra
    // 0x8000C2CC: nop

    return;
    // 0x8000C2CC: nop

;}
RECOMP_FUNC void func_800253EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800253EC: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800253F0: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x800253F4: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x800253F8: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x800253FC: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80025400: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80025404: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x80025408: addu        $v0, $v0, $t7
    ctx->r2 = ADD32(ctx->r2, ctx->r15);
    // 0x8002540C: lbu         $v0, 0x7494($v0)
    ctx->r2 = MEM_BU(ctx->r2, 0X7494);
    // 0x80025410: b           L_80025420
    // 0x80025414: nop

        goto L_80025420;
    // 0x80025414: nop

    // 0x80025418: b           L_80025420
    // 0x8002541C: nop

        goto L_80025420;
    // 0x8002541C: nop

L_80025420:
    // 0x80025420: jr          $ra
    // 0x80025424: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80025424: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8002A2EC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A2EC: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x8002A2F0: sw          $a1, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r5;
    // 0x8002A2F4: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8002A2F8: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002A2FC: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8002A300: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8002A304: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x8002A308: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x8002A30C: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8002A310: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002A314: sw          $t8, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r24;
    // 0x8002A318: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002A31C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002A320: lw          $t0, 0xC($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC);
    // 0x8002A324: lwc1        $f4, 0x0($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X0);
    // 0x8002A328: lwc1        $f6, 0x0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X0);
    // 0x8002A32C: nop

    // 0x8002A330: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8002A334: swc1        $f8, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->f8.u32l;
    // 0x8002A338: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002A33C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8002A340: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x8002A344: lwc1        $f10, 0x8($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X8);
    // 0x8002A348: lwc1        $f16, 0x8($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X8);
    // 0x8002A34C: nop

    // 0x8002A350: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8002A354: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
    // 0x8002A358: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x8002A35C: lwc1        $f8, 0x4($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X4);
    // 0x8002A360: mul.s       $f6, $f4, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f4.fl);
    // 0x8002A364: lwc1        $f18, 0x14($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X14);
    // 0x8002A368: mul.s       $f10, $f8, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f8.fl, ctx->f8.fl);
    // 0x8002A36C: nop

    // 0x8002A370: mul.s       $f4, $f18, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f18.fl, ctx->f18.fl);
    // 0x8002A374: add.s       $f16, $f6, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f6.fl + ctx->f10.fl;
    // 0x8002A378: c.lt.s      $f16, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f16.fl < ctx->f4.fl;
    // 0x8002A37C: nop

    // 0x8002A380: bc1f        L_8002A390
    if (!c1cs) {
        // 0x8002A384: nop
    
            goto L_8002A390;
    }
    // 0x8002A384: nop

    // 0x8002A388: b           L_8002A3A0
    // 0x8002A38C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A3A0;
    // 0x8002A38C: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8002A390:
    // 0x8002A390: b           L_8002A3A0
    // 0x8002A394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A3A0;
    // 0x8002A394: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8002A398: b           L_8002A3A0
    // 0x8002A39C: nop

        goto L_8002A3A0;
    // 0x8002A39C: nop

L_8002A3A0:
    // 0x8002A3A0: jr          $ra
    // 0x8002A3A4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x8002A3A4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void func_80008744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008744: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80008748: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000874C: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80008750: lh          $t6, -0x5C9C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5C9C);
    // 0x80008754: nop

    // 0x80008758: bne         $t6, $zero, L_80008768
    if (ctx->r14 != 0) {
        // 0x8000875C: nop
    
            goto L_80008768;
    }
    // 0x8000875C: nop

    // 0x80008760: b           L_80008B74
    // 0x80008764: nop

        goto L_80008B74;
    // 0x80008764: nop

L_80008768:
    // 0x80008768: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000876C: lh          $t7, -0x5C9C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5C9C);
    // 0x80008770: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80008774: blez        $t7, L_80008B6C
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80008778: nop
    
            goto L_80008B6C;
    }
    // 0x80008778: nop

L_8000877C:
    // 0x8000877C: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80008780: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x80008784: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80008788: lw          $t0, 0x2DA8($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X2DA8);
    // 0x8000878C: subu        $t9, $t9, $t8
    ctx->r25 = SUB32(ctx->r25, ctx->r24);
    // 0x80008790: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80008794: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80008798: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8000879C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800087A0: nop

    // 0x800087A4: lh          $t3, 0x0($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X0);
    // 0x800087A8: nop

    // 0x800087AC: bgez        $t3, L_800087BC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x800087B0: nop
    
            goto L_800087BC;
    }
    // 0x800087B0: nop

    // 0x800087B4: b           L_80008B50
    // 0x800087B8: nop

        goto L_80008B50;
    // 0x800087B8: nop

L_800087BC:
    // 0x800087BC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x800087C0: nop

    // 0x800087C4: lb          $t5, 0x8($t4)
    ctx->r13 = MEM_B(ctx->r12, 0X8);
    // 0x800087C8: nop

    // 0x800087CC: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800087D0: sb          $t6, 0x8($t4)
    MEM_B(0X8, ctx->r12) = ctx->r14;
    // 0x800087D4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x800087D8: nop

    // 0x800087DC: lb          $t8, 0x8($t7)
    ctx->r24 = MEM_B(ctx->r15, 0X8);
    // 0x800087E0: nop

    // 0x800087E4: beq         $t8, $zero, L_800087F4
    if (ctx->r24 == 0) {
        // 0x800087E8: nop
    
            goto L_800087F4;
    }
    // 0x800087E8: nop

    // 0x800087EC: b           L_80008B50
    // 0x800087F0: nop

        goto L_80008B50;
    // 0x800087F0: nop

L_800087F4:
    // 0x800087F4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800087F8: nop

    // 0x800087FC: lb          $t0, 0x9($t9)
    ctx->r8 = MEM_B(ctx->r25, 0X9);
    // 0x80008800: nop

    // 0x80008804: addiu       $t1, $t0, -0x1
    ctx->r9 = ADD32(ctx->r8, -0X1);
    // 0x80008808: sb          $t1, 0x9($t9)
    MEM_B(0X9, ctx->r25) = ctx->r9;
    // 0x8000880C: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80008810: nop

    // 0x80008814: lb          $t3, 0x9($t2)
    ctx->r11 = MEM_B(ctx->r10, 0X9);
    // 0x80008818: nop

    // 0x8000881C: bne         $t3, $zero, L_80008838
    if (ctx->r11 != 0) {
        // 0x80008820: nop
    
            goto L_80008838;
    }
    // 0x80008820: nop

    // 0x80008824: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80008828: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8000882C: sh          $t5, 0x0($t6)
    MEM_H(0X0, ctx->r14) = ctx->r13;
    // 0x80008830: b           L_80008B50
    // 0x80008834: nop

        goto L_80008B50;
    // 0x80008834: nop

L_80008838:
    // 0x80008838: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8000883C: nop

    // 0x80008840: lh          $t7, 0x2($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X2);
    // 0x80008844: nop

    // 0x80008848: sh          $t7, 0x18($sp)
    MEM_H(0X18, ctx->r29) = ctx->r15;
    // 0x8000884C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80008850: lw          $t8, -0x5CFC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CFC);
    // 0x80008854: nop

    // 0x80008858: slti        $at, $t8, 0x2
    ctx->r1 = SIGNED(ctx->r24) < 0X2 ? 1 : 0;
    // 0x8000885C: bne         $at, $zero, L_80008884
    if (ctx->r1 != 0) {
        // 0x80008860: nop
    
            goto L_80008884;
    }
    // 0x80008860: nop

    // 0x80008864: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x80008868: nop

    // 0x8000886C: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80008870: beq         $at, $zero, L_80008884
    if (ctx->r1 == 0) {
        // 0x80008874: nop
    
            goto L_80008884;
    }
    // 0x80008874: nop

    // 0x80008878: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8000887C: b           L_80008888
    // 0x80008880: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
        goto L_80008888;
    // 0x80008880: sw          $t1, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r9;
L_80008884:
    // 0x80008884: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
L_80008888:
    // 0x80008888: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x8000888C: nop

    // 0x80008890: bne         $t9, $zero, L_800088E4
    if (ctx->r25 != 0) {
        // 0x80008894: nop
    
            goto L_800088E4;
    }
    // 0x80008894: nop

    // 0x80008898: lh          $t3, 0x18($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X18);
    // 0x8000889C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800088A0: sll         $t5, $t3, 2
    ctx->r13 = S32(ctx->r11 << 2);
    // 0x800088A4: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x800088A8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800088AC: lw          $t2, 0x2D5C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D5C);
    // 0x800088B0: subu        $t5, $t5, $t3
    ctx->r13 = SUB32(ctx->r13, ctx->r11);
    // 0x800088B4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800088B8: addu        $t6, $t2, $t5
    ctx->r14 = ADD32(ctx->r10, ctx->r13);
    // 0x800088BC: lw          $t4, 0x8($t6)
    ctx->r12 = MEM_W(ctx->r14, 0X8);
    // 0x800088C0: nop

    // 0x800088C4: andi        $t7, $t4, 0x1000
    ctx->r15 = ctx->r12 & 0X1000;
    // 0x800088C8: beq         $t7, $zero, L_800088E4
    if (ctx->r15 == 0) {
        // 0x800088CC: nop
    
            goto L_800088E4;
    }
    // 0x800088CC: nop

    // 0x800088D0: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x800088D4: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x800088D8: sh          $t0, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r8;
    // 0x800088DC: b           L_80008B50
    // 0x800088E0: nop

        goto L_80008B50;
    // 0x800088E0: nop

L_800088E4:
    // 0x800088E4: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800088E8: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800088EC: lb          $t9, 0x9($t1)
    ctx->r25 = MEM_B(ctx->r9, 0X9);
    // 0x800088F0: lb          $t2, 0x2DB5($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X2DB5);
    // 0x800088F4: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x800088F8: bne         $t3, $t2, L_80008968
    if (ctx->r11 != ctx->r10) {
        // 0x800088FC: nop
    
            goto L_80008968;
    }
    // 0x800088FC: nop

    // 0x80008900: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80008904: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008908: lb          $t6, 0x4($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X4);
    // 0x8000890C: lb          $t4, 0x7($t5)
    ctx->r12 = MEM_B(ctx->r13, 0X7);
    // 0x80008910: mtc1        $t6, $f4
    ctx->f4.u32l = ctx->r14;
    // 0x80008914: lwc1        $f8, 0x2DB0($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X2DB0);
    // 0x80008918: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000891C: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80008920: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x80008924: mul.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80008928: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000892C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80008930: mul.s       $f4, $f10, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f18.fl);
    // 0x80008934: nop

    // 0x80008938: div.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f4.fl, ctx->f6.fl);
    // 0x8000893C: cfc1        $t7, $FpcCsr
    ctx->r15 = get_cop1_cs();
    // 0x80008940: nop

    // 0x80008944: ori         $at, $t7, 0x3
    ctx->r1 = ctx->r15 | 0X3;
    // 0x80008948: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8000894C: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80008950: nop

    // 0x80008954: cvt.w.s     $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    ctx->f16.u32l = CVT_W_S(ctx->f8.fl);
    // 0x80008958: mfc1        $t0, $f16
    ctx->r8 = (int32_t)ctx->f16.u32l;
    // 0x8000895C: ctc1        $t7, $FpcCsr
    set_cop1_cs(ctx->r15);
    // 0x80008960: b           L_800089B4
    // 0x80008964: sb          $t0, 0x4($t5)
    MEM_B(0X4, ctx->r13) = ctx->r8;
        goto L_800089B4;
    // 0x80008964: sb          $t0, 0x4($t5)
    MEM_B(0X4, ctx->r13) = ctx->r8;
L_80008968:
    // 0x80008968: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8000896C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008970: lb          $t1, 0x4($t8)
    ctx->r9 = MEM_B(ctx->r24, 0X4);
    // 0x80008974: lwc1        $f4, 0x2DAC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X2DAC);
    // 0x80008978: mtc1        $t1, $f10
    ctx->f10.u32l = ctx->r9;
    // 0x8000897C: nop

    // 0x80008980: cvt.s.w     $f18, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    ctx->f18.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80008984: mul.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = MUL_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80008988: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x8000898C: nop

    // 0x80008990: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x80008994: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80008998: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8000899C: nop

    // 0x800089A0: cvt.w.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800089A4: mfc1        $t3, $f8
    ctx->r11 = (int32_t)ctx->f8.u32l;
    // 0x800089A8: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x800089AC: sb          $t3, 0x4($t8)
    MEM_B(0X4, ctx->r24) = ctx->r11;
    // 0x800089B0: nop

L_800089B4:
    // 0x800089B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800089B8: nop

    // 0x800089BC: lb          $t6, 0x4($t2)
    ctx->r14 = MEM_B(ctx->r10, 0X4);
    // 0x800089C0: nop

    // 0x800089C4: slti        $at, $t6, 0x6
    ctx->r1 = SIGNED(ctx->r14) < 0X6 ? 1 : 0;
    // 0x800089C8: bne         $at, $zero, L_80008B44
    if (ctx->r1 != 0) {
        // 0x800089CC: nop
    
            goto L_80008B44;
    }
    // 0x800089CC: nop

    // 0x800089D0: lw          $t4, 0x20($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X20);
    // 0x800089D4: nop

    // 0x800089D8: beq         $t4, $zero, L_80008A64
    if (ctx->r12 == 0) {
        // 0x800089DC: nop
    
            goto L_80008A64;
    }
    // 0x800089DC: nop

    // 0x800089E0: lh          $t0, 0x18($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X18);
    // 0x800089E4: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800089E8: sll         $t5, $t0, 2
    ctx->r13 = S32(ctx->r8 << 2);
    // 0x800089EC: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x800089F0: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x800089F4: lw          $t7, 0x2D5C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2D5C);
    // 0x800089F8: subu        $t5, $t5, $t0
    ctx->r13 = SUB32(ctx->r13, ctx->r8);
    // 0x800089FC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80008A00: addu        $t1, $t7, $t5
    ctx->r9 = ADD32(ctx->r15, ctx->r13);
    // 0x80008A04: lbu         $t9, 0x26($t1)
    ctx->r25 = MEM_BU(ctx->r9, 0X26);
    // 0x80008A08: nop

    // 0x80008A0C: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x80008A10: sb          $t3, 0x26($t1)
    MEM_B(0X26, ctx->r9) = ctx->r11;
    // 0x80008A14: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80008A18: nop

    // 0x80008A1C: lh          $a0, 0x0($t8)
    ctx->r4 = MEM_H(ctx->r24, 0X0);
    // 0x80008A20: jal         0x8000AC1C
    // 0x80008A24: nop

    func_8000AC1C(rdram, ctx);
        goto after_0;
    // 0x80008A24: nop

    after_0:
    // 0x80008A28: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
    // 0x80008A2C: lh          $t6, 0x18($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X18);
    // 0x80008A30: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80008A34: sll         $t4, $t6, 2
    ctx->r12 = S32(ctx->r14 << 2);
    // 0x80008A38: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x80008A3C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80008A40: lw          $t2, 0x2D5C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2D5C);
    // 0x80008A44: subu        $t4, $t4, $t6
    ctx->r12 = SUB32(ctx->r12, ctx->r14);
    // 0x80008A48: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80008A4C: addu        $t0, $t2, $t4
    ctx->r8 = ADD32(ctx->r10, ctx->r12);
    // 0x80008A50: lbu         $t7, 0x26($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X26);
    // 0x80008A54: nop

    // 0x80008A58: addiu       $t5, $t7, -0x1
    ctx->r13 = ADD32(ctx->r15, -0X1);
    // 0x80008A5C: b           L_80008A7C
    // 0x80008A60: sb          $t5, 0x26($t0)
    MEM_B(0X26, ctx->r8) = ctx->r13;
        goto L_80008A7C;
    // 0x80008A60: sb          $t5, 0x26($t0)
    MEM_B(0X26, ctx->r8) = ctx->r13;
L_80008A64:
    // 0x80008A64: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x80008A68: nop

    // 0x80008A6C: lh          $a0, 0x0($t9)
    ctx->r4 = MEM_H(ctx->r25, 0X0);
    // 0x80008A70: jal         0x8000AC1C
    // 0x80008A74: nop

    func_8000AC1C(rdram, ctx);
        goto after_1;
    // 0x80008A74: nop

    after_1:
    // 0x80008A78: sh          $v0, 0x1A($sp)
    MEM_H(0X1A, ctx->r29) = ctx->r2;
L_80008A7C:
    // 0x80008A7C: lh          $t3, 0x1A($sp)
    ctx->r11 = MEM_H(ctx->r29, 0X1A);
    // 0x80008A80: nop

    // 0x80008A84: bgez        $t3, L_80008AA0
    if (SIGNED(ctx->r11) >= 0) {
        // 0x80008A88: nop
    
            goto L_80008AA0;
    }
    // 0x80008A88: nop

    // 0x80008A8C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80008A90: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80008A94: sh          $t1, 0x0($t8)
    MEM_H(0X0, ctx->r24) = ctx->r9;
    // 0x80008A98: b           L_80008B50
    // 0x80008A9C: nop

        goto L_80008B50;
    // 0x80008A9C: nop

L_80008AA0:
    // 0x80008AA0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x80008AA4: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80008AA8: lb          $a1, 0x4($t6)
    ctx->r5 = MEM_B(ctx->r14, 0X4);
    // 0x80008AAC: jal         0x8000C6F8
    // 0x80008AB0: nop

    func_8000C6F8(rdram, ctx);
        goto after_2;
    // 0x80008AB0: nop

    after_2:
    // 0x80008AB4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80008AB8: lh          $a0, 0x1A($sp)
    ctx->r4 = MEM_H(ctx->r29, 0X1A);
    // 0x80008ABC: lbu         $a1, 0x6($t2)
    ctx->r5 = MEM_BU(ctx->r10, 0X6);
    // 0x80008AC0: jal         0x8000C7D4
    // 0x80008AC4: nop

    func_8000C7D4(rdram, ctx);
        goto after_3;
    // 0x80008AC4: nop

    after_3:
    // 0x80008AC8: lh          $t0, 0x1A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X1A);
    // 0x80008ACC: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80008AD0: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80008AD4: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x80008AD8: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80008ADC: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80008AE0: lw          $t5, 0x2D5C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D5C);
    // 0x80008AE4: subu        $t9, $t9, $t0
    ctx->r25 = SUB32(ctx->r25, ctx->r8);
    // 0x80008AE8: lb          $t7, 0x5($t4)
    ctx->r15 = MEM_B(ctx->r12, 0X5);
    // 0x80008AEC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80008AF0: addu        $t3, $t5, $t9
    ctx->r11 = ADD32(ctx->r13, ctx->r25);
    // 0x80008AF4: sb          $t7, 0x23($t3)
    MEM_B(0X23, ctx->r11) = ctx->r15;
    // 0x80008AF8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80008AFC: lb          $t1, 0x2DB4($t1)
    ctx->r9 = MEM_B(ctx->r9, 0X2DB4);
    // 0x80008B00: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x80008B04: nop

    // 0x80008B08: sb          $t1, 0x8($t8)
    MEM_B(0X8, ctx->r24) = ctx->r9;
    // 0x80008B0C: lh          $t2, 0x1A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X1A);
    // 0x80008B10: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80008B14: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x80008B18: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x80008B1C: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80008B20: lw          $t6, 0x2D5C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2D5C);
    // 0x80008B24: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x80008B28: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80008B2C: addu        $t0, $t6, $t4
    ctx->r8 = ADD32(ctx->r14, ctx->r12);
    // 0x80008B30: lw          $t5, 0x8($t0)
    ctx->r13 = MEM_W(ctx->r8, 0X8);
    // 0x80008B34: nop

    // 0x80008B38: ori         $t9, $t5, 0x20
    ctx->r25 = ctx->r13 | 0X20;
    // 0x80008B3C: b           L_80008B50
    // 0x80008B40: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
        goto L_80008B50;
    // 0x80008B40: sw          $t9, 0x8($t0)
    MEM_W(0X8, ctx->r8) = ctx->r25;
L_80008B44:
    // 0x80008B44: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80008B48: addiu       $t7, $zero, -0x1
    ctx->r15 = ADD32(0, -0X1);
    // 0x80008B4C: sh          $t7, 0x0($t3)
    MEM_H(0X0, ctx->r11) = ctx->r15;
L_80008B50:
    // 0x80008B50: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80008B54: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80008B58: lh          $t2, -0x5C9C($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X5C9C);
    // 0x80008B5C: addiu       $t8, $t1, 0x1
    ctx->r24 = ADD32(ctx->r9, 0X1);
    // 0x80008B60: slt         $at, $t8, $t2
    ctx->r1 = SIGNED(ctx->r24) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x80008B64: bne         $at, $zero, L_8000877C
    if (ctx->r1 != 0) {
        // 0x80008B68: sw          $t8, 0x24($sp)
        MEM_W(0X24, ctx->r29) = ctx->r24;
            goto L_8000877C;
    }
    // 0x80008B68: sw          $t8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r24;
L_80008B6C:
    // 0x80008B6C: b           L_80008B74
    // 0x80008B70: nop

        goto L_80008B74;
    // 0x80008B70: nop

L_80008B74:
    // 0x80008B74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80008B78: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80008B7C: jr          $ra
    // 0x80008B80: nop

    return;
    // 0x80008B80: nop

;}
RECOMP_FUNC void Debug_Parse_SetModeMenuOptions(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002DCA8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8002DCAC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002DCB0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002DCB4: lhu         $t6, 0x76A0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X76A0);
    // 0x8002DCB8: nop

    // 0x8002DCBC: andi        $t7, $t6, 0x800
    ctx->r15 = ctx->r14 & 0X800;
    // 0x8002DCC0: beq         $t7, $zero, L_8002DCFC
    if (ctx->r15 == 0) {
        // 0x8002DCC4: nop
    
            goto L_8002DCFC;
    }
    // 0x8002DCC4: nop

    // 0x8002DCC8: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002DCCC: lh          $t8, 0x769C($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X769C);
    // 0x8002DCD0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DCD4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8002DCD8: sll         $t0, $t9, 16
    ctx->r8 = S32(ctx->r25 << 16);
    // 0x8002DCDC: sra         $t1, $t0, 16
    ctx->r9 = S32(SIGNED(ctx->r8) >> 16);
    // 0x8002DCE0: bgez        $t1, L_8002DCF4
    if (SIGNED(ctx->r9) >= 0) {
        // 0x8002DCE4: sh          $t9, 0x769C($at)
        MEM_H(0X769C, ctx->r1) = ctx->r25;
            goto L_8002DCF4;
    }
    // 0x8002DCE4: sh          $t9, 0x769C($at)
    MEM_H(0X769C, ctx->r1) = ctx->r25;
    // 0x8002DCE8: addiu       $t2, $zero, 0x9
    ctx->r10 = ADD32(0, 0X9);
    // 0x8002DCEC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DCF0: sh          $t2, 0x769C($at)
    MEM_H(0X769C, ctx->r1) = ctx->r10;
L_8002DCF4:
    // 0x8002DCF4: b           L_8002DD44
    // 0x8002DCF8: nop

        goto L_8002DD44;
    // 0x8002DCF8: nop

L_8002DCFC:
    // 0x8002DCFC: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002DD00: lhu         $t3, 0x76A0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X76A0);
    // 0x8002DD04: nop

    // 0x8002DD08: andi        $t4, $t3, 0x400
    ctx->r12 = ctx->r11 & 0X400;
    // 0x8002DD0C: beq         $t4, $zero, L_8002DD44
    if (ctx->r12 == 0) {
        // 0x8002DD10: nop
    
            goto L_8002DD44;
    }
    // 0x8002DD10: nop

    // 0x8002DD14: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002DD18: lh          $t5, 0x769C($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X769C);
    // 0x8002DD1C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DD20: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8002DD24: sll         $t7, $t6, 16
    ctx->r15 = S32(ctx->r14 << 16);
    // 0x8002DD28: sra         $t8, $t7, 16
    ctx->r24 = S32(SIGNED(ctx->r15) >> 16);
    // 0x8002DD2C: sh          $t6, 0x769C($at)
    MEM_H(0X769C, ctx->r1) = ctx->r14;
    // 0x8002DD30: slti        $at, $t8, 0xA
    ctx->r1 = SIGNED(ctx->r24) < 0XA ? 1 : 0;
    // 0x8002DD34: bne         $at, $zero, L_8002DD44
    if (ctx->r1 != 0) {
        // 0x8002DD38: nop
    
            goto L_8002DD44;
    }
    // 0x8002DD38: nop

    // 0x8002DD3C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DD40: sh          $zero, 0x769C($at)
    MEM_H(0X769C, ctx->r1) = 0;
L_8002DD44:
    // 0x8002DD44: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002DD48: lh          $t9, 0x769C($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X769C);
    // 0x8002DD4C: nop

    // 0x8002DD50: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x8002DD54: sltiu       $at, $t0, 0x9
    ctx->r1 = ctx->r8 < 0X9 ? 1 : 0;
    // 0x8002DD58: beq         $at, $zero, L_8002E224
    if (ctx->r1 == 0) {
        // 0x8002DD5C: nop
    
            goto L_8002E224;
    }
    // 0x8002DD5C: nop

    // 0x8002DD60: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8002DD64: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DD68: addu        $at, $at, $t0
    gpr jr_addend_8002DD74 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8002DD6C: lw          $t0, -0x4018($at)
    ctx->r8 = ADD32(ctx->r1, -0X4018);
    // 0x8002DD70: nop

    // 0x8002DD74: jr          $t0
    // 0x8002DD78: nop

    switch (jr_addend_8002DD74 >> 2) {
        case 0: goto L_8002DD7C; break;
        case 1: goto L_8002DDF8; break;
        case 2: goto L_8002DE74; break;
        case 3: goto L_8002DEF0; break;
        case 4: goto L_8002DFBC; break;
        case 5: goto L_8002E020; break;
        case 6: goto L_8002E084; break;
        case 7: goto L_8002E0E8; break;
        case 8: goto L_8002E14C; break;
        default: switch_error(__func__, 0x8002DD74, 0x8004BFE8);
    }
    // 0x8002DD78: nop

L_8002DD7C:
    // 0x8002DD7C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002DD80: lhu         $t1, 0x76A0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X76A0);
    // 0x8002DD84: nop

    // 0x8002DD88: andi        $t2, $t1, 0x100
    ctx->r10 = ctx->r9 & 0X100;
    // 0x8002DD8C: beq         $t2, $zero, L_8002DDB8
    if (ctx->r10 == 0) {
        // 0x8002DD90: nop
    
            goto L_8002DDB8;
    }
    // 0x8002DD90: nop

    // 0x8002DD94: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002DD98: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8002DD9C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DDA0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002DDA4: lwc1        $f4, 0x0($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X0);
    // 0x8002DDA8: nop

    // 0x8002DDAC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002DDB0: b           L_8002DDF0
    // 0x8002DDB4: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
        goto L_8002DDF0;
    // 0x8002DDB4: swc1        $f8, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f8.u32l;
L_8002DDB8:
    // 0x8002DDB8: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8002DDBC: lhu         $t4, 0x76A0($t4)
    ctx->r12 = MEM_HU(ctx->r12, 0X76A0);
    // 0x8002DDC0: nop

    // 0x8002DDC4: andi        $t5, $t4, 0x200
    ctx->r13 = ctx->r12 & 0X200;
    // 0x8002DDC8: beq         $t5, $zero, L_8002DDF0
    if (ctx->r13 == 0) {
        // 0x8002DDCC: nop
    
            goto L_8002DDF0;
    }
    // 0x8002DDCC: nop

    // 0x8002DDD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002DDD4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8002DDD8: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DDDC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002DDE0: lwc1        $f10, 0x0($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X0);
    // 0x8002DDE4: nop

    // 0x8002DDE8: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8002DDEC: swc1        $f18, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->f18.u32l;
L_8002DDF0:
    // 0x8002DDF0: b           L_8002E224
    // 0x8002DDF4: nop

        goto L_8002E224;
    // 0x8002DDF4: nop

L_8002DDF8:
    // 0x8002DDF8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8002DDFC: lhu         $t7, 0x76A0($t7)
    ctx->r15 = MEM_HU(ctx->r15, 0X76A0);
    // 0x8002DE00: nop

    // 0x8002DE04: andi        $t8, $t7, 0x100
    ctx->r24 = ctx->r15 & 0X100;
    // 0x8002DE08: beq         $t8, $zero, L_8002DE34
    if (ctx->r24 == 0) {
        // 0x8002DE0C: nop
    
            goto L_8002DE34;
    }
    // 0x8002DE0C: nop

    // 0x8002DE10: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002DE14: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8002DE18: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DE1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002DE20: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x8002DE24: nop

    // 0x8002DE28: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002DE2C: b           L_8002DE6C
    // 0x8002DE30: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
        goto L_8002DE6C;
    // 0x8002DE30: swc1        $f8, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->f8.u32l;
L_8002DE34:
    // 0x8002DE34: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002DE38: lhu         $t0, 0x76A0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X76A0);
    // 0x8002DE3C: nop

    // 0x8002DE40: andi        $t1, $t0, 0x200
    ctx->r9 = ctx->r8 & 0X200;
    // 0x8002DE44: beq         $t1, $zero, L_8002DE6C
    if (ctx->r9 == 0) {
        // 0x8002DE48: nop
    
            goto L_8002DE6C;
    }
    // 0x8002DE48: nop

    // 0x8002DE4C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002DE50: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8002DE54: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DE58: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002DE5C: lwc1        $f10, 0x4($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X4);
    // 0x8002DE60: nop

    // 0x8002DE64: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8002DE68: swc1        $f18, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f18.u32l;
L_8002DE6C:
    // 0x8002DE6C: b           L_8002E224
    // 0x8002DE70: nop

        goto L_8002E224;
    // 0x8002DE70: nop

L_8002DE74:
    // 0x8002DE74: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002DE78: lhu         $t3, 0x76A0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X76A0);
    // 0x8002DE7C: nop

    // 0x8002DE80: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x8002DE84: beq         $t4, $zero, L_8002DEB0
    if (ctx->r12 == 0) {
        // 0x8002DE88: nop
    
            goto L_8002DEB0;
    }
    // 0x8002DE88: nop

    // 0x8002DE8C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002DE90: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8002DE94: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DE98: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002DE9C: lwc1        $f4, 0x8($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X8);
    // 0x8002DEA0: nop

    // 0x8002DEA4: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x8002DEA8: b           L_8002DEE8
    // 0x8002DEAC: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
        goto L_8002DEE8;
    // 0x8002DEAC: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
L_8002DEB0:
    // 0x8002DEB0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8002DEB4: lhu         $t6, 0x76A0($t6)
    ctx->r14 = MEM_HU(ctx->r14, 0X76A0);
    // 0x8002DEB8: nop

    // 0x8002DEBC: andi        $t7, $t6, 0x200
    ctx->r15 = ctx->r14 & 0X200;
    // 0x8002DEC0: beq         $t7, $zero, L_8002DEE8
    if (ctx->r15 == 0) {
        // 0x8002DEC4: nop
    
            goto L_8002DEE8;
    }
    // 0x8002DEC4: nop

    // 0x8002DEC8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002DECC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8002DED0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8002DED4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8002DED8: lwc1        $f10, 0x8($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0X8);
    // 0x8002DEDC: nop

    // 0x8002DEE0: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x8002DEE4: swc1        $f18, 0x8($t8)
    MEM_W(0X8, ctx->r24) = ctx->f18.u32l;
L_8002DEE8:
    // 0x8002DEE8: b           L_8002E224
    // 0x8002DEEC: nop

        goto L_8002E224;
    // 0x8002DEEC: nop

L_8002DEF0:
    // 0x8002DEF0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8002DEF4: lhu         $t9, -0x1C7C($t9)
    ctx->r25 = MEM_HU(ctx->r25, -0X1C7C);
    // 0x8002DEF8: nop

    // 0x8002DEFC: andi        $t0, $t9, 0x100
    ctx->r8 = ctx->r25 & 0X100;
    // 0x8002DF00: bne         $t0, $zero, L_8002DF14
    if (ctx->r8 != 0) {
        // 0x8002DF04: nop
    
            goto L_8002DF14;
    }
    // 0x8002DF04: nop

    // 0x8002DF08: andi        $t1, $t9, 0x200
    ctx->r9 = ctx->r25 & 0X200;
    // 0x8002DF0C: beq         $t1, $zero, L_8002DFB4
    if (ctx->r9 == 0) {
        // 0x8002DF10: nop
    
            goto L_8002DFB4;
    }
    // 0x8002DF10: nop

L_8002DF14:
    // 0x8002DF14: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8002DF18: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8002DF1C: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8002DF20: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8002DF24: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002DF28: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002DF2C: lwc1        $f4, 0x0($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X0);
    // 0x8002DF30: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8002DF34: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x8002DF38: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x8002DF3C: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8002DF40: div         $zero, $t4, $at
    lo = S32(S64(S32(ctx->r12)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r12)) % S64(S32(ctx->r1)));
    // 0x8002DF44: mflo        $t5
    ctx->r13 = lo;
    // 0x8002DF48: sll         $t6, $t5, 4
    ctx->r14 = S32(ctx->r13 << 4);
    // 0x8002DF4C: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8002DF50: sll         $t6, $t6, 1
    ctx->r14 = S32(ctx->r14 << 1);
    // 0x8002DF54: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x8002DF58: nop

    // 0x8002DF5C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002DF60: swc1        $f10, 0x0($t2)
    MEM_W(0X0, ctx->r10) = ctx->f10.u32l;
    // 0x8002DF64: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x8002DF68: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8002DF6C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8002DF70: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x8002DF74: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8002DF78: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8002DF7C: lwc1        $f16, 0x8($t7)
    ctx->f16.u32l = MEM_W(ctx->r15, 0X8);
    // 0x8002DF80: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8002DF84: cvt.w.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.u32l = CVT_W_S(ctx->f16.fl);
    // 0x8002DF88: mfc1        $t0, $f18
    ctx->r8 = (int32_t)ctx->f18.u32l;
    // 0x8002DF8C: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x8002DF90: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x8002DF94: mflo        $t9
    ctx->r25 = lo;
    // 0x8002DF98: sll         $t1, $t9, 4
    ctx->r9 = S32(ctx->r25 << 4);
    // 0x8002DF9C: subu        $t1, $t1, $t9
    ctx->r9 = SUB32(ctx->r9, ctx->r25);
    // 0x8002DFA0: sll         $t1, $t1, 1
    ctx->r9 = S32(ctx->r9 << 1);
    // 0x8002DFA4: mtc1        $t1, $f4
    ctx->f4.u32l = ctx->r9;
    // 0x8002DFA8: nop

    // 0x8002DFAC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8002DFB0: swc1        $f6, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f6.u32l;
L_8002DFB4:
    // 0x8002DFB4: b           L_8002E224
    // 0x8002DFB8: nop

        goto L_8002E224;
    // 0x8002DFB8: nop

L_8002DFBC:
    // 0x8002DFBC: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002DFC0: lhu         $t3, 0x76A0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X76A0);
    // 0x8002DFC4: nop

    // 0x8002DFC8: andi        $t4, $t3, 0x100
    ctx->r12 = ctx->r11 & 0X100;
    // 0x8002DFCC: beq         $t4, $zero, L_8002DFEC
    if (ctx->r12 == 0) {
        // 0x8002DFD0: nop
    
            goto L_8002DFEC;
    }
    // 0x8002DFD0: nop

    // 0x8002DFD4: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002DFD8: lh          $t5, 0x7694($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7694);
    // 0x8002DFDC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002DFE0: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8002DFE4: b           L_8002E018
    // 0x8002DFE8: sh          $t6, 0x7694($at)
    MEM_H(0X7694, ctx->r1) = ctx->r14;
        goto L_8002E018;
    // 0x8002DFE8: sh          $t6, 0x7694($at)
    MEM_H(0X7694, ctx->r1) = ctx->r14;
L_8002DFEC:
    // 0x8002DFEC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002DFF0: lhu         $t2, 0x76A0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X76A0);
    // 0x8002DFF4: nop

    // 0x8002DFF8: andi        $t8, $t2, 0x200
    ctx->r24 = ctx->r10 & 0X200;
    // 0x8002DFFC: beq         $t8, $zero, L_8002E018
    if (ctx->r24 == 0) {
        // 0x8002E000: nop
    
            goto L_8002E018;
    }
    // 0x8002E000: nop

    // 0x8002E004: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002E008: lh          $t0, 0x7694($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7694);
    // 0x8002E00C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E010: addiu       $t9, $t0, -0x1
    ctx->r25 = ADD32(ctx->r8, -0X1);
    // 0x8002E014: sh          $t9, 0x7694($at)
    MEM_H(0X7694, ctx->r1) = ctx->r25;
L_8002E018:
    // 0x8002E018: b           L_8002E224
    // 0x8002E01C: nop

        goto L_8002E224;
    // 0x8002E01C: nop

L_8002E020:
    // 0x8002E020: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002E024: lhu         $t1, 0x76A0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X76A0);
    // 0x8002E028: nop

    // 0x8002E02C: andi        $t7, $t1, 0x100
    ctx->r15 = ctx->r9 & 0X100;
    // 0x8002E030: beq         $t7, $zero, L_8002E050
    if (ctx->r15 == 0) {
        // 0x8002E034: nop
    
            goto L_8002E050;
    }
    // 0x8002E034: nop

    // 0x8002E038: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002E03C: lh          $t3, 0x7696($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X7696);
    // 0x8002E040: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E044: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8002E048: b           L_8002E07C
    // 0x8002E04C: sh          $t4, 0x7696($at)
    MEM_H(0X7696, ctx->r1) = ctx->r12;
        goto L_8002E07C;
    // 0x8002E04C: sh          $t4, 0x7696($at)
    MEM_H(0X7696, ctx->r1) = ctx->r12;
L_8002E050:
    // 0x8002E050: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002E054: lhu         $t5, 0x76A0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X76A0);
    // 0x8002E058: nop

    // 0x8002E05C: andi        $t6, $t5, 0x200
    ctx->r14 = ctx->r13 & 0X200;
    // 0x8002E060: beq         $t6, $zero, L_8002E07C
    if (ctx->r14 == 0) {
        // 0x8002E064: nop
    
            goto L_8002E07C;
    }
    // 0x8002E064: nop

    // 0x8002E068: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002E06C: lh          $t2, 0x7696($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X7696);
    // 0x8002E070: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E074: addiu       $t8, $t2, -0x1
    ctx->r24 = ADD32(ctx->r10, -0X1);
    // 0x8002E078: sh          $t8, 0x7696($at)
    MEM_H(0X7696, ctx->r1) = ctx->r24;
L_8002E07C:
    // 0x8002E07C: b           L_8002E224
    // 0x8002E080: nop

        goto L_8002E224;
    // 0x8002E080: nop

L_8002E084:
    // 0x8002E084: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002E088: lhu         $t0, 0x76A0($t0)
    ctx->r8 = MEM_HU(ctx->r8, 0X76A0);
    // 0x8002E08C: nop

    // 0x8002E090: andi        $t9, $t0, 0x100
    ctx->r25 = ctx->r8 & 0X100;
    // 0x8002E094: beq         $t9, $zero, L_8002E0B4
    if (ctx->r25 == 0) {
        // 0x8002E098: nop
    
            goto L_8002E0B4;
    }
    // 0x8002E098: nop

    // 0x8002E09C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002E0A0: lh          $t1, 0x7698($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7698);
    // 0x8002E0A4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E0A8: addiu       $t7, $t1, 0x1
    ctx->r15 = ADD32(ctx->r9, 0X1);
    // 0x8002E0AC: b           L_8002E0E0
    // 0x8002E0B0: sh          $t7, 0x7698($at)
    MEM_H(0X7698, ctx->r1) = ctx->r15;
        goto L_8002E0E0;
    // 0x8002E0B0: sh          $t7, 0x7698($at)
    MEM_H(0X7698, ctx->r1) = ctx->r15;
L_8002E0B4:
    // 0x8002E0B4: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002E0B8: lhu         $t3, 0x76A0($t3)
    ctx->r11 = MEM_HU(ctx->r11, 0X76A0);
    // 0x8002E0BC: nop

    // 0x8002E0C0: andi        $t4, $t3, 0x200
    ctx->r12 = ctx->r11 & 0X200;
    // 0x8002E0C4: beq         $t4, $zero, L_8002E0E0
    if (ctx->r12 == 0) {
        // 0x8002E0C8: nop
    
            goto L_8002E0E0;
    }
    // 0x8002E0C8: nop

    // 0x8002E0CC: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002E0D0: lh          $t5, 0x7698($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7698);
    // 0x8002E0D4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E0D8: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8002E0DC: sh          $t6, 0x7698($at)
    MEM_H(0X7698, ctx->r1) = ctx->r14;
L_8002E0E0:
    // 0x8002E0E0: b           L_8002E224
    // 0x8002E0E4: nop

        goto L_8002E224;
    // 0x8002E0E4: nop

L_8002E0E8:
    // 0x8002E0E8: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002E0EC: lhu         $t2, 0x76A0($t2)
    ctx->r10 = MEM_HU(ctx->r10, 0X76A0);
    // 0x8002E0F0: nop

    // 0x8002E0F4: andi        $t8, $t2, 0x100
    ctx->r24 = ctx->r10 & 0X100;
    // 0x8002E0F8: beq         $t8, $zero, L_8002E118
    if (ctx->r24 == 0) {
        // 0x8002E0FC: nop
    
            goto L_8002E118;
    }
    // 0x8002E0FC: nop

    // 0x8002E100: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002E104: lh          $t0, 0x769A($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X769A);
    // 0x8002E108: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E10C: addiu       $t9, $t0, 0x1
    ctx->r25 = ADD32(ctx->r8, 0X1);
    // 0x8002E110: b           L_8002E144
    // 0x8002E114: sh          $t9, 0x769A($at)
    MEM_H(0X769A, ctx->r1) = ctx->r25;
        goto L_8002E144;
    // 0x8002E114: sh          $t9, 0x769A($at)
    MEM_H(0X769A, ctx->r1) = ctx->r25;
L_8002E118:
    // 0x8002E118: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002E11C: lhu         $t1, 0x76A0($t1)
    ctx->r9 = MEM_HU(ctx->r9, 0X76A0);
    // 0x8002E120: nop

    // 0x8002E124: andi        $t7, $t1, 0x200
    ctx->r15 = ctx->r9 & 0X200;
    // 0x8002E128: beq         $t7, $zero, L_8002E144
    if (ctx->r15 == 0) {
        // 0x8002E12C: nop
    
            goto L_8002E144;
    }
    // 0x8002E12C: nop

    // 0x8002E130: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002E134: lh          $t3, 0x769A($t3)
    ctx->r11 = MEM_H(ctx->r11, 0X769A);
    // 0x8002E138: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E13C: addiu       $t4, $t3, -0x1
    ctx->r12 = ADD32(ctx->r11, -0X1);
    // 0x8002E140: sh          $t4, 0x769A($at)
    MEM_H(0X769A, ctx->r1) = ctx->r12;
L_8002E144:
    // 0x8002E144: b           L_8002E224
    // 0x8002E148: nop

        goto L_8002E224;
    // 0x8002E148: nop

L_8002E14C:
    // 0x8002E14C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8002E150: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8002E154: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x8002E158: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8002E15C: lwc1        $f8, 0x4($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X4);
    // 0x8002E160: lwc1        $f12, 0x0($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X0);
    // 0x8002E164: lw          $a2, 0x8($t5)
    ctx->r6 = MEM_W(ctx->r13, 0X8);
    // 0x8002E168: jal         0x8002C144
    // 0x8002E16C: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    func_8002C144(rdram, ctx);
        goto after_0;
    // 0x8002E16C: add.s       $f14, $f8, $f10
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f14.fl = ctx->f8.fl + ctx->f10.fl;
    after_0:
    // 0x8002E170: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002E174: lbu         $t6, 0x76E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X76E0);
    // 0x8002E178: nop

    // 0x8002E17C: andi        $t2, $t6, 0x1
    ctx->r10 = ctx->r14 & 0X1;
    // 0x8002E180: bne         $t2, $zero, L_8002E21C
    if (ctx->r10 != 0) {
        // 0x8002E184: nop
    
            goto L_8002E21C;
    }
    // 0x8002E184: nop

    // 0x8002E188: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002E18C: lhu         $t8, 0x76A0($t8)
    ctx->r24 = MEM_HU(ctx->r24, 0X76A0);
    // 0x8002E190: nop

    // 0x8002E194: andi        $t0, $t8, 0x200
    ctx->r8 = ctx->r24 & 0X200;
    // 0x8002E198: beq         $t0, $zero, L_8002E1D4
    if (ctx->r8 == 0) {
        // 0x8002E19C: nop
    
            goto L_8002E1D4;
    }
    // 0x8002E19C: nop

    // 0x8002E1A0: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8002E1A4: lb          $t9, 0x768A($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X768A);
    // 0x8002E1A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E1AC: addiu       $t1, $t9, -0x1
    ctx->r9 = ADD32(ctx->r25, -0X1);
    // 0x8002E1B0: sll         $t7, $t1, 24
    ctx->r15 = S32(ctx->r9 << 24);
    // 0x8002E1B4: sra         $t3, $t7, 24
    ctx->r11 = S32(SIGNED(ctx->r15) >> 24);
    // 0x8002E1B8: bgez        $t3, L_8002E1CC
    if (SIGNED(ctx->r11) >= 0) {
        // 0x8002E1BC: sb          $t1, 0x768A($at)
        MEM_B(0X768A, ctx->r1) = ctx->r9;
            goto L_8002E1CC;
    }
    // 0x8002E1BC: sb          $t1, 0x768A($at)
    MEM_B(0X768A, ctx->r1) = ctx->r9;
    // 0x8002E1C0: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x8002E1C4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E1C8: sb          $t4, 0x768A($at)
    MEM_B(0X768A, ctx->r1) = ctx->r12;
L_8002E1CC:
    // 0x8002E1CC: b           L_8002E21C
    // 0x8002E1D0: nop

        goto L_8002E21C;
    // 0x8002E1D0: nop

L_8002E1D4:
    // 0x8002E1D4: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002E1D8: lhu         $t5, 0x76A0($t5)
    ctx->r13 = MEM_HU(ctx->r13, 0X76A0);
    // 0x8002E1DC: nop

    // 0x8002E1E0: andi        $t6, $t5, 0x100
    ctx->r14 = ctx->r13 & 0X100;
    // 0x8002E1E4: beq         $t6, $zero, L_8002E21C
    if (ctx->r14 == 0) {
        // 0x8002E1E8: nop
    
            goto L_8002E21C;
    }
    // 0x8002E1E8: nop

    // 0x8002E1EC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8002E1F0: lb          $t2, 0x768A($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X768A);
    // 0x8002E1F4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E1F8: addiu       $t8, $t2, 0x1
    ctx->r24 = ADD32(ctx->r10, 0X1);
    // 0x8002E1FC: sll         $t0, $t8, 24
    ctx->r8 = S32(ctx->r24 << 24);
    // 0x8002E200: sra         $t9, $t0, 24
    ctx->r25 = S32(SIGNED(ctx->r8) >> 24);
    // 0x8002E204: sb          $t8, 0x768A($at)
    MEM_B(0X768A, ctx->r1) = ctx->r24;
    // 0x8002E208: slti        $at, $t9, 0x3
    ctx->r1 = SIGNED(ctx->r25) < 0X3 ? 1 : 0;
    // 0x8002E20C: bne         $at, $zero, L_8002E21C
    if (ctx->r1 != 0) {
        // 0x8002E210: nop
    
            goto L_8002E21C;
    }
    // 0x8002E210: nop

    // 0x8002E214: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E218: sb          $zero, 0x768A($at)
    MEM_B(0X768A, ctx->r1) = 0;
L_8002E21C:
    // 0x8002E21C: b           L_8002E224
    // 0x8002E220: nop

        goto L_8002E224;
    // 0x8002E220: nop

L_8002E224:
    // 0x8002E224: b           L_8002E22C
    // 0x8002E228: nop

        goto L_8002E22C;
    // 0x8002E228: nop

L_8002E22C:
    // 0x8002E22C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E230: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8002E234: jr          $ra
    // 0x8002E238: nop

    return;
    // 0x8002E238: nop

;}
RECOMP_FUNC void Get_DecompressHeap(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001E96C: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001E970: lw          $v0, 0x76D4($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X76D4);
    // 0x8001E974: jr          $ra
    // 0x8001E978: nop

    return;
    // 0x8001E978: nop

    // 0x8001E97C: jr          $ra
    // 0x8001E980: nop

    return;
    // 0x8001E980: nop

    // 0x8001E984: jr          $ra
    // 0x8001E988: nop

    return;
    // 0x8001E988: nop

;}
RECOMP_FUNC void func_8000B4CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000B4CC: lui         $v0, 0x8005
    ctx->r2 = S32(0X8005 << 16);
    // 0x8000B4D0: lw          $v0, 0x2D64($v0)
    ctx->r2 = MEM_W(ctx->r2, 0X2D64);
    // 0x8000B4D4: jr          $ra
    // 0x8000B4D8: nop

    return;
    // 0x8000B4D8: nop

    // 0x8000B4DC: jr          $ra
    // 0x8000B4E0: nop

    return;
    // 0x8000B4E0: nop

    // 0x8000B4E4: jr          $ra
    // 0x8000B4E8: nop

    return;
    // 0x8000B4E8: nop

;}
RECOMP_FUNC void func_8001B014(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001B014: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8001B018: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
L_8001B01C:
    // 0x8001B01C: sll         $t6, $a0, 2
    ctx->r14 = S32(ctx->r4 << 2);
    // 0x8001B020: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B024: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B028: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x8001B02C: addu        $t6, $t6, $a0
    ctx->r14 = ADD32(ctx->r14, ctx->r4);
    // 0x8001B030: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x8001B034: sll         $t8, $t7, 1
    ctx->r24 = S32(ctx->r15 << 1);
    // 0x8001B038: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x8001B03C: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x8001B040: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8001B044: lh          $t0, 0x4298($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X4298);
    // 0x8001B048: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8001B04C: beq         $t0, $at, L_8001B20C
    if (ctx->r8 == ctx->r1) {
        // 0x8001B050: sw          $t0, 0xC($sp)
        MEM_W(0XC, ctx->r29) = ctx->r8;
            goto L_8001B20C;
    }
    // 0x8001B050: sw          $t0, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r8;
    // 0x8001B054: lw          $t1, 0xC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC);
    // 0x8001B058: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8001B05C: sll         $t2, $t1, 3
    ctx->r10 = S32(ctx->r9 << 3);
    // 0x8001B060: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8001B064: lbu         $t3, -0x3D61($t3)
    ctx->r11 = MEM_BU(ctx->r11, -0X3D61);
    // 0x8001B068: nop

    // 0x8001B06C: bne         $t3, $a1, L_8001B20C
    if (ctx->r11 != ctx->r5) {
        // 0x8001B070: nop
    
            goto L_8001B20C;
    }
    // 0x8001B070: nop

    // 0x8001B074: lw          $t4, 0xC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC);
    // 0x8001B078: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001B07C: sll         $t5, $t4, 3
    ctx->r13 = S32(ctx->r12 << 3);
    // 0x8001B080: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8001B084: lw          $t7, -0x3D68($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X3D68);
    // 0x8001B088: nop

    // 0x8001B08C: sw          $t7, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r15;
    // 0x8001B090: lw          $t6, 0xC($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC);
    // 0x8001B094: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001B098: sll         $t8, $t6, 3
    ctx->r24 = S32(ctx->r14 << 3);
    // 0x8001B09C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001B0A0: lbu         $t9, -0x3D63($t9)
    ctx->r25 = MEM_BU(ctx->r25, -0X3D63);
    // 0x8001B0A4: nop

    // 0x8001B0A8: sb          $t9, 0xB($sp)
    MEM_B(0XB, ctx->r29) = ctx->r25;
    // 0x8001B0AC: lw          $t0, 0x18($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X18);
    // 0x8001B0B0: nop

    // 0x8001B0B4: lw          $t1, 0x4($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X4);
    // 0x8001B0B8: nop

    // 0x8001B0BC: beq         $t1, $zero, L_8001B15C
    if (ctx->r9 == 0) {
        // 0x8001B0C0: nop
    
            goto L_8001B15C;
    }
    // 0x8001B0C0: nop

    // 0x8001B0C4: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8001B0C8: lbu         $t4, 0xB($sp)
    ctx->r12 = MEM_BU(ctx->r29, 0XB);
    // 0x8001B0CC: lw          $t3, 0x4($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X4);
    // 0x8001B0D0: lh          $t1, 0x14($t2)
    ctx->r9 = MEM_H(ctx->r10, 0X14);
    // 0x8001B0D4: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8001B0D8: lbu         $t7, 0x0($t5)
    ctx->r15 = MEM_BU(ctx->r13, 0X0);
    // 0x8001B0DC: lw          $t8, 0xC($t2)
    ctx->r24 = MEM_W(ctx->r10, 0XC);
    // 0x8001B0E0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8001B0E4: sll         $t3, $t1, 3
    ctx->r11 = S32(ctx->r9 << 3);
    // 0x8001B0E8: sll         $t6, $t7, 2
    ctx->r14 = S32(ctx->r15 << 2);
    // 0x8001B0EC: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8001B0F0: addu        $t9, $t8, $t6
    ctx->r25 = ADD32(ctx->r24, ctx->r14);
    // 0x8001B0F4: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8001B0F8: lw          $t4, -0x3560($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X3560);
    // 0x8001B0FC: nop

    // 0x8001B100: addu        $t5, $t0, $t4
    ctx->r13 = ADD32(ctx->r8, ctx->r12);
    // 0x8001B104: sw          $t5, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r13;
    // 0x8001B108: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001B10C: lw          $t7, -0x1F04($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F04);
    // 0x8001B110: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B114: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8001B118: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8001B11C: sw          $t7, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r15;
    // 0x8001B120: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8001B124: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8001B128: lbu         $t9, 0x16($t6)
    ctx->r25 = MEM_BU(ctx->r14, 0X16);
    // 0x8001B12C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8001B130: sll         $t2, $t9, 2
    ctx->r10 = S32(ctx->r25 << 2);
    // 0x8001B134: andi        $t1, $t2, 0xFFFF
    ctx->r9 = ctx->r10 & 0XFFFF;
    // 0x8001B138: sll         $t3, $t1, 8
    ctx->r11 = S32(ctx->r9 << 8);
    // 0x8001B13C: or          $t0, $t3, $at
    ctx->r8 = ctx->r11 | ctx->r1;
    // 0x8001B140: ori         $t4, $t0, 0x6
    ctx->r12 = ctx->r8 | 0X6;
    // 0x8001B144: sw          $t4, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->r12;
    // 0x8001B148: lw          $t7, 0x14($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X14);
    // 0x8001B14C: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x8001B150: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001B154: addu        $t8, $t7, $at
    ctx->r24 = ADD32(ctx->r15, ctx->r1);
    // 0x8001B158: sw          $t8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r24;
L_8001B15C:
    // 0x8001B15C: lw          $t9, 0x18($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X18);
    // 0x8001B160: nop

    // 0x8001B164: lw          $t2, 0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X8);
    // 0x8001B168: nop

    // 0x8001B16C: beq         $t2, $zero, L_8001B20C
    if (ctx->r10 == 0) {
        // 0x8001B170: nop
    
            goto L_8001B20C;
    }
    // 0x8001B170: nop

    // 0x8001B174: lw          $t1, 0x18($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X18);
    // 0x8001B178: lbu         $t0, 0xB($sp)
    ctx->r8 = MEM_BU(ctx->r29, 0XB);
    // 0x8001B17C: lw          $t3, 0x8($t1)
    ctx->r11 = MEM_W(ctx->r9, 0X8);
    // 0x8001B180: lh          $t2, 0x14($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X14);
    // 0x8001B184: addu        $t4, $t3, $t0
    ctx->r12 = ADD32(ctx->r11, ctx->r8);
    // 0x8001B188: lbu         $t5, 0x0($t4)
    ctx->r13 = MEM_BU(ctx->r12, 0X0);
    // 0x8001B18C: lw          $t8, 0x10($t1)
    ctx->r24 = MEM_W(ctx->r9, 0X10);
    // 0x8001B190: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001B194: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x8001B198: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8001B19C: addu        $t0, $t0, $t3
    ctx->r8 = ADD32(ctx->r8, ctx->r11);
    // 0x8001B1A0: addu        $t6, $t8, $t7
    ctx->r14 = ADD32(ctx->r24, ctx->r15);
    // 0x8001B1A4: lw          $t9, 0x0($t6)
    ctx->r25 = MEM_W(ctx->r14, 0X0);
    // 0x8001B1A8: lw          $t0, -0x3560($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X3560);
    // 0x8001B1AC: nop

    // 0x8001B1B0: addu        $t4, $t9, $t0
    ctx->r12 = ADD32(ctx->r25, ctx->r8);
    // 0x8001B1B4: sw          $t4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r12;
    // 0x8001B1B8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8001B1BC: lw          $t5, -0x1F04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X1F04);
    // 0x8001B1C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001B1C4: addiu       $t8, $t5, 0x8
    ctx->r24 = ADD32(ctx->r13, 0X8);
    // 0x8001B1C8: sw          $t8, -0x1F04($at)
    MEM_W(-0X1F04, ctx->r1) = ctx->r24;
    // 0x8001B1CC: sw          $t5, 0x0($sp)
    MEM_W(0X0, ctx->r29) = ctx->r13;
    // 0x8001B1D0: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8001B1D4: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x8001B1D8: lbu         $t6, 0x17($t7)
    ctx->r14 = MEM_BU(ctx->r15, 0X17);
    // 0x8001B1DC: lw          $t4, 0x0($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X0);
    // 0x8001B1E0: sll         $t1, $t6, 2
    ctx->r9 = S32(ctx->r14 << 2);
    // 0x8001B1E4: andi        $t2, $t1, 0xFFFF
    ctx->r10 = ctx->r9 & 0XFFFF;
    // 0x8001B1E8: sll         $t3, $t2, 8
    ctx->r11 = S32(ctx->r10 << 8);
    // 0x8001B1EC: or          $t9, $t3, $at
    ctx->r25 = ctx->r11 | ctx->r1;
    // 0x8001B1F0: ori         $t0, $t9, 0x6
    ctx->r8 = ctx->r25 | 0X6;
    // 0x8001B1F4: sw          $t0, 0x0($t4)
    MEM_W(0X0, ctx->r12) = ctx->r8;
    // 0x8001B1F8: lw          $t5, 0x10($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X10);
    // 0x8001B1FC: lw          $t7, 0x0($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X0);
    // 0x8001B200: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x8001B204: addu        $t8, $t5, $at
    ctx->r24 = ADD32(ctx->r13, ctx->r1);
    // 0x8001B208: sw          $t8, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->r24;
L_8001B20C:
    // 0x8001B20C: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8001B210: nop

    // 0x8001B214: addiu       $t1, $t6, 0x1
    ctx->r9 = ADD32(ctx->r14, 0X1);
    // 0x8001B218: slti        $at, $t1, 0x4
    ctx->r1 = SIGNED(ctx->r9) < 0X4 ? 1 : 0;
    // 0x8001B21C: bne         $at, $zero, L_8001B01C
    if (ctx->r1 != 0) {
        // 0x8001B220: sw          $t1, 0x1C($sp)
        MEM_W(0X1C, ctx->r29) = ctx->r9;
            goto L_8001B01C;
    }
    // 0x8001B220: sw          $t1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r9;
    // 0x8001B224: b           L_8001B22C
    // 0x8001B228: nop

        goto L_8001B22C;
    // 0x8001B228: nop

L_8001B22C:
    // 0x8001B22C: jr          $ra
    // 0x8001B230: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    return;
    // 0x8001B230: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
;}
RECOMP_FUNC void func_8001EC1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001EC1C: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8001EC20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EC24: sw          $t6, -0x1F60($at)
    MEM_W(-0X1F60, ctx->r1) = ctx->r14;
    // 0x8001EC28: jr          $ra
    // 0x8001EC2C: nop

    return;
    // 0x8001EC2C: nop

    // 0x8001EC30: jr          $ra
    // 0x8001EC34: nop

    return;
    // 0x8001EC34: nop

;}
RECOMP_FUNC void alSndpGetSound(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80035520: jr          $ra
    // 0x80035524: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
    return;
    // 0x80035524: lh          $v0, 0x3E($a0)
    ctx->r2 = MEM_H(ctx->r4, 0X3E);
;}
RECOMP_FUNC void func_80024744(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024744: addiu       $sp, $sp, -0x70
    ctx->r29 = ADD32(ctx->r29, -0X70);
    // 0x80024748: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002474C: jal         0x8001DEDC
    // 0x80024750: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    UpdateActiveController(rdram, ctx);
        goto after_0;
    // 0x80024750: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_0:
    // 0x80024754: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80024758: lw          $t6, 0x65EC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65EC);
    // 0x8002475C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80024760: beq         $t6, $at, L_800247A4
    if (ctx->r14 == ctx->r1) {
        // 0x80024764: nop
    
            goto L_800247A4;
    }
    // 0x80024764: nop

    // 0x80024768: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8002476C: beq         $t6, $at, L_800247A4
    if (ctx->r14 == ctx->r1) {
        // 0x80024770: nop
    
            goto L_800247A4;
    }
    // 0x80024770: nop

    // 0x80024774: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80024778: beq         $t6, $at, L_800247A4
    if (ctx->r14 == ctx->r1) {
        // 0x8002477C: nop
    
            goto L_800247A4;
    }
    // 0x8002477C: nop

    // 0x80024780: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80024784: beq         $t6, $at, L_800247A4
    if (ctx->r14 == ctx->r1) {
        // 0x80024788: nop
    
            goto L_800247A4;
    }
    // 0x80024788: nop

    // 0x8002478C: addiu       $at, $zero, 0x7
    ctx->r1 = ADD32(0, 0X7);
    // 0x80024790: beq         $t6, $at, L_800247A4
    if (ctx->r14 == ctx->r1) {
        // 0x80024794: nop
    
            goto L_800247A4;
    }
    // 0x80024794: nop

    // 0x80024798: addiu       $at, $zero, 0x8
    ctx->r1 = ADD32(0, 0X8);
    // 0x8002479C: bne         $t6, $at, L_80024800
    if (ctx->r14 != ctx->r1) {
        // 0x800247A0: nop
    
            goto L_80024800;
    }
    // 0x800247A0: nop

L_800247A4:
    // 0x800247A4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800247A8: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800247AC: lw          $a1, -0x1EA4($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1EA4);
    // 0x800247B0: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800247B4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800247B8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x800247BC: jal         0x800372A0
    // 0x800247C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_1;
    // 0x800247C0: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_1:
    // 0x800247C4: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x800247C8: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x800247CC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800247D0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800247D4: addiu       $t9, $t9, -0x1C6C
    ctx->r25 = ADD32(ctx->r25, -0X1C6C);
    // 0x800247D8: addiu       $t7, $t7, -0x1C74
    ctx->r15 = ADD32(ctx->r15, -0X1C74);
    // 0x800247DC: lw          $a3, -0x1C6C($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X1C6C);
    // 0x800247E0: lw          $a1, -0x1C74($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X1C74);
    // 0x800247E4: addiu       $t8, $sp, 0x6C
    ctx->r24 = ADD32(ctx->r29, 0X6C);
    // 0x800247E8: sw          $t8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r24;
    // 0x800247EC: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800247F0: sw          $t9, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r25;
    // 0x800247F4: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x800247F8: jal         0x80036360
    // 0x800247FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    guMtxXFMF(rdram, ctx);
        goto after_2;
    // 0x800247FC: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_2:
L_80024800:
    // 0x80024800: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80024804: lb          $t0, -0x1BDC($t0)
    ctx->r8 = MEM_B(ctx->r8, -0X1BDC);
    // 0x80024808: nop

    // 0x8002480C: beq         $t0, $zero, L_8002489C
    if (ctx->r8 == 0) {
        // 0x80024810: nop
    
            goto L_8002489C;
    }
    // 0x80024810: nop

    // 0x80024814: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80024818: lhu         $t1, -0x1C82($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C82);
    // 0x8002481C: addiu       $at, $zero, 0x3000
    ctx->r1 = ADD32(0, 0X3000);
    // 0x80024820: andi        $t2, $t1, 0x3000
    ctx->r10 = ctx->r9 & 0X3000;
    // 0x80024824: bne         $t2, $at, L_80024838
    if (ctx->r10 != ctx->r1) {
        // 0x80024828: nop
    
            goto L_80024838;
    }
    // 0x80024828: nop

    // 0x8002482C: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80024830: jal         0x80069AA8
    // 0x80024834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069AA8(rdram, ctx);
        goto after_3;
    // 0x80024834: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
L_80024838:
    // 0x80024838: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8002483C: lb          $t3, -0x1BF4($t3)
    ctx->r11 = MEM_B(ctx->r11, -0X1BF4);
    // 0x80024840: nop

    // 0x80024844: beq         $t3, $zero, L_8002489C
    if (ctx->r11 == 0) {
        // 0x80024848: nop
    
            goto L_8002489C;
    }
    // 0x80024848: nop

    // 0x8002484C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80024850: lhu         $t4, -0x1C82($t4)
    ctx->r12 = MEM_HU(ctx->r12, -0X1C82);
    // 0x80024854: addiu       $at, $zero, 0x2020
    ctx->r1 = ADD32(0, 0X2020);
    // 0x80024858: andi        $t5, $t4, 0x2020
    ctx->r13 = ctx->r12 & 0X2020;
    // 0x8002485C: bne         $t5, $at, L_8002489C
    if (ctx->r13 != ctx->r1) {
        // 0x80024860: nop
    
            goto L_8002489C;
    }
    // 0x80024860: nop

    // 0x80024864: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80024868: lw          $t6, -0x1BD8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1BD8);
    // 0x8002486C: nop

    // 0x80024870: slti        $at, $t6, 0x80
    ctx->r1 = SIGNED(ctx->r14) < 0X80 ? 1 : 0;
    // 0x80024874: beq         $at, $zero, L_80024890
    if (ctx->r1 == 0) {
        // 0x80024878: nop
    
            goto L_80024890;
    }
    // 0x80024878: nop

    // 0x8002487C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80024880: jal         0x80069D88
    // 0x80024884: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_80069D88(rdram, ctx);
        goto after_4;
    // 0x80024884: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
    // 0x80024888: b           L_8002489C
    // 0x8002488C: nop

        goto L_8002489C;
    // 0x8002488C: nop

L_80024890:
    // 0x80024890: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80024894: jal         0x80069E00
    // 0x80024898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069E00(rdram, ctx);
        goto after_5;
    // 0x80024898: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_5:
L_8002489C:
    // 0x8002489C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800248A0: lb          $t7, -0x1C34($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C34);
    // 0x800248A4: nop

    // 0x800248A8: bne         $t7, $zero, L_800248C8
    if (ctx->r15 != 0) {
        // 0x800248AC: nop
    
            goto L_800248C8;
    }
    // 0x800248AC: nop

    // 0x800248B0: jal         0x800242F0
    // 0x800248B4: nop

    func_800242F0(rdram, ctx);
        goto after_6;
    // 0x800248B4: nop

    after_6:
    // 0x800248B8: beq         $v0, $zero, L_800248C8
    if (ctx->r2 == 0) {
        // 0x800248BC: nop
    
            goto L_800248C8;
    }
    // 0x800248BC: nop

    // 0x800248C0: b           L_80024A50
    // 0x800248C4: nop

        goto L_80024A50;
    // 0x800248C4: nop

L_800248C8:
    // 0x800248C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800248CC: lb          $t8, -0x1C34($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C34);
    // 0x800248D0: nop

    // 0x800248D4: beq         $t8, $zero, L_800248E4
    if (ctx->r24 == 0) {
        // 0x800248D8: nop
    
            goto L_800248E4;
    }
    // 0x800248D8: nop

    // 0x800248DC: b           L_80024A50
    // 0x800248E0: nop

        goto L_80024A50;
    // 0x800248E0: nop

L_800248E4:
    // 0x800248E4: jal         0x8006C1DC
    // 0x800248E8: nop

    func_8006C1DC(rdram, ctx);
        goto after_7;
    // 0x800248E8: nop

    after_7:
    // 0x800248EC: jal         0x80026548
    // 0x800248F0: nop

    func_80026548(rdram, ctx);
        goto after_8;
    // 0x800248F0: nop

    after_8:
    // 0x800248F4: jal         0x80088ECC
    // 0x800248F8: nop

    func_80088ECC(rdram, ctx);
        goto after_9;
    // 0x800248F8: nop

    after_9:
    // 0x800248FC: jal         0x80089C18
    // 0x80024900: nop

    func_80089C18(rdram, ctx);
        goto after_10;
    // 0x80024900: nop

    after_10:
    // 0x80024904: jal         0x80021B74
    // 0x80024908: nop

    func_80021B74(rdram, ctx);
        goto after_11;
    // 0x80024908: nop

    after_11:
    // 0x8002490C: jal         0x80021BCC
    // 0x80024910: nop

    func_80021BCC(rdram, ctx);
        goto after_12;
    // 0x80024910: nop

    after_12:
    // 0x80024914: jal         0x80023E78
    // 0x80024918: nop

    func_80023E78(rdram, ctx);
        goto after_13;
    // 0x80024918: nop

    after_13:
    // 0x8002491C: jal         0x800241CC
    // 0x80024920: nop

    func_800241CC(rdram, ctx);
        goto after_14;
    // 0x80024920: nop

    after_14:
    // 0x80024924: jal         0x800239E4
    // 0x80024928: nop

    func_800239E4(rdram, ctx);
        goto after_15;
    // 0x80024928: nop

    after_15:
    // 0x8002492C: jal         0x80076720
    // 0x80024930: nop

    func_80076720(rdram, ctx);
        goto after_16;
    // 0x80024930: nop

    after_16:
    // 0x80024934: jal         0x80076680
    // 0x80024938: nop

    func_80076680(rdram, ctx);
        goto after_17;
    // 0x80024938: nop

    after_17:
    // 0x8002493C: beq         $v0, $zero, L_8002494C
    if (ctx->r2 == 0) {
        // 0x80024940: nop
    
            goto L_8002494C;
    }
    // 0x80024940: nop

    // 0x80024944: b           L_80024A50
    // 0x80024948: nop

        goto L_80024A50;
    // 0x80024948: nop

L_8002494C:
    // 0x8002494C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80024950: lbu         $t9, 0x660A($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X660A);
    // 0x80024954: nop

    // 0x80024958: bne         $t9, $zero, L_80024970
    if (ctx->r25 != 0) {
        // 0x8002495C: nop
    
            goto L_80024970;
    }
    // 0x8002495C: nop

    // 0x80024960: jal         0x8002B154
    // 0x80024964: nop

    func_8002B154(rdram, ctx);
        goto after_18;
    // 0x80024964: nop

    after_18:
    // 0x80024968: b           L_80024978
    // 0x8002496C: nop

        goto L_80024978;
    // 0x8002496C: nop

L_80024970:
    // 0x80024970: jal         0x8008C128
    // 0x80024974: nop

    func_8008C128(rdram, ctx);
        goto after_19;
    // 0x80024974: nop

    after_19:
L_80024978:
    // 0x80024978: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8002497C: lbu         $t0, 0x6606($t0)
    ctx->r8 = MEM_BU(ctx->r8, 0X6606);
    // 0x80024980: nop

    // 0x80024984: bne         $t0, $zero, L_800249B0
    if (ctx->r8 != 0) {
        // 0x80024988: nop
    
            goto L_800249B0;
    }
    // 0x80024988: nop

    // 0x8002498C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80024990: lb          $t1, -0x1C34($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1C34);
    // 0x80024994: nop

    // 0x80024998: bne         $t1, $zero, L_800249A8
    if (ctx->r9 != 0) {
        // 0x8002499C: nop
    
            goto L_800249A8;
    }
    // 0x8002499C: nop

    // 0x800249A0: jal         0x80087994
    // 0x800249A4: nop

    func_80087994(rdram, ctx);
        goto after_20;
    // 0x800249A4: nop

    after_20:
L_800249A8:
    // 0x800249A8: b           L_800249B8
    // 0x800249AC: nop

        goto L_800249B8;
    // 0x800249AC: nop

L_800249B0:
    // 0x800249B0: jal         0x8008BCC0
    // 0x800249B4: nop

    func_8008BCC0(rdram, ctx);
        goto after_21;
    // 0x800249B4: nop

    after_21:
L_800249B8:
    // 0x800249B8: jal         0x80069E88
    // 0x800249BC: nop

    func_80069E88(rdram, ctx);
        goto after_22;
    // 0x800249BC: nop

    after_22:
    // 0x800249C0: jal         0x8006A95C
    // 0x800249C4: nop

    func_8006A95C(rdram, ctx);
        goto after_23;
    // 0x800249C4: nop

    after_23:
    // 0x800249C8: jal         0x8007E454
    // 0x800249CC: nop

    func_8007E454(rdram, ctx);
        goto after_24;
    // 0x800249CC: nop

    after_24:
    // 0x800249D0: jal         0x8007F24C
    // 0x800249D4: nop

    func_8007F24C(rdram, ctx);
        goto after_25;
    // 0x800249D4: nop

    after_25:
    // 0x800249D8: jal         0x800816FC
    // 0x800249DC: nop

    func_800816FC(rdram, ctx);
        goto after_26;
    // 0x800249DC: nop

    after_26:
    // 0x800249E0: jal         0x8008B0F4
    // 0x800249E4: nop

    func_8008B0F4(rdram, ctx);
        goto after_27;
    // 0x800249E4: nop

    after_27:
    // 0x800249E8: jal         0x80076374
    // 0x800249EC: nop

    func_80076374(rdram, ctx);
        goto after_28;
    // 0x800249EC: nop

    after_28:
    // 0x800249F0: jal         0x8006DDF4
    // 0x800249F4: nop

    Skybox_ProcessMove(rdram, ctx);
        goto after_29;
    // 0x800249F4: nop

    after_29:
    // 0x800249F8: jal         0x800663EC
    // 0x800249FC: nop

    func_800663EC(rdram, ctx);
        goto after_30;
    // 0x800249FC: nop

    after_30:
    // 0x80024A00: jal         0x800654AC
    // 0x80024A04: nop

    func_800654AC(rdram, ctx);
        goto after_31;
    // 0x80024A04: nop

    after_31:
    // 0x80024A08: jal         0x8006AD28
    // 0x80024A0C: nop

    func_8006AD28(rdram, ctx);
        goto after_32;
    // 0x80024A0C: nop

    after_32:
    // 0x80024A10: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80024A14: lw          $t2, 0x75F0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X75F0);
    // 0x80024A18: lui         $at, 0x27
    ctx->r1 = S32(0X27 << 16);
    // 0x80024A1C: ori         $at, $at, 0x8D00
    ctx->r1 = ctx->r1 | 0X8D00;
    // 0x80024A20: sltu        $at, $t2, $at
    ctx->r1 = ctx->r10 < ctx->r1 ? 1 : 0;
    // 0x80024A24: beq         $at, $zero, L_80024A40
    if (ctx->r1 == 0) {
        // 0x80024A28: nop
    
            goto L_80024A40;
    }
    // 0x80024A28: nop

    // 0x80024A2C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80024A30: lw          $t3, 0x75F0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X75F0);
    // 0x80024A34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80024A38: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80024A3C: sw          $t4, 0x75F0($at)
    MEM_W(0X75F0, ctx->r1) = ctx->r12;
L_80024A40:
    // 0x80024A40: jal         0x800842C0
    // 0x80024A44: nop

    func_800842C0(rdram, ctx);
        goto after_33;
    // 0x80024A44: nop

    after_33:
    // 0x80024A48: jal         0x80070AC8
    // 0x80024A4C: nop

    func_80070AC8(rdram, ctx);
        goto after_34;
    // 0x80024A4C: nop

    after_34:
L_80024A50:
    // 0x80024A50: jal         0x800713D0
    // 0x80024A54: nop

    func_800713D0(rdram, ctx);
        goto after_35;
    // 0x80024A54: nop

    after_35:
    // 0x80024A58: jal         0x80070934
    // 0x80024A5C: nop

    func_80070934(rdram, ctx);
        goto after_36;
    // 0x80024A5C: nop

    after_36:
    // 0x80024A60: jal         0x80064000
    // 0x80024A64: nop

    func_80064000(rdram, ctx);
        goto after_37;
    // 0x80024A64: nop

    after_37:
    // 0x80024A68: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80024A6C: lb          $t5, 0x7A20($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X7A20);
    // 0x80024A70: nop

    // 0x80024A74: slti        $at, $t5, 0x2
    ctx->r1 = SIGNED(ctx->r13) < 0X2 ? 1 : 0;
    // 0x80024A78: bne         $at, $zero, L_80024A88
    if (ctx->r1 != 0) {
        // 0x80024A7C: nop
    
            goto L_80024A88;
    }
    // 0x80024A7C: nop

    // 0x80024A80: jal         0x80087B1C
    // 0x80024A84: nop

    func_80087B1C(rdram, ctx);
        goto after_38;
    // 0x80024A84: nop

    after_38:
L_80024A88:
    // 0x80024A88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80024A8C: lw          $t6, 0x65EC($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X65EC);
    // 0x80024A90: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80024A94: bne         $t6, $at, L_80024AA4
    if (ctx->r14 != ctx->r1) {
        // 0x80024A98: nop
    
            goto L_80024AA4;
    }
    // 0x80024A98: nop

    // 0x80024A9C: jal         0x80071E28
    // 0x80024AA0: nop

    func_80071E28(rdram, ctx);
        goto after_39;
    // 0x80024AA0: nop

    after_39:
L_80024AA4:
    // 0x80024AA4: jal         0x8001994C
    // 0x80024AA8: nop

    func_8001994C(rdram, ctx);
        goto after_40;
    // 0x80024AA8: nop

    after_40:
    // 0x80024AAC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80024AB0: lb          $t7, -0x1C34($t7)
    ctx->r15 = MEM_B(ctx->r15, -0X1C34);
    // 0x80024AB4: nop

    // 0x80024AB8: beq         $t7, $zero, L_80024BF0
    if (ctx->r15 == 0) {
        // 0x80024ABC: nop
    
            goto L_80024BF0;
    }
    // 0x80024ABC: nop

    // 0x80024AC0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80024AC4: lb          $t8, -0x1C33($t8)
    ctx->r24 = MEM_B(ctx->r24, -0X1C33);
    // 0x80024AC8: nop

    // 0x80024ACC: bne         $t8, $zero, L_80024BF0
    if (ctx->r24 != 0) {
        // 0x80024AD0: nop
    
            goto L_80024BF0;
    }
    // 0x80024AD0: nop

    // 0x80024AD4: jal         0x8001D1D4
    // 0x80024AD8: nop

    func_8001D1D4(rdram, ctx);
        goto after_41;
    // 0x80024AD8: nop

    after_41:
    // 0x80024ADC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80024AE0: beq         $v0, $at, L_80024BB8
    if (ctx->r2 == ctx->r1) {
        // 0x80024AE4: nop
    
            goto L_80024BB8;
    }
    // 0x80024AE4: nop

    // 0x80024AE8: jal         0x8001D1D4
    // 0x80024AEC: nop

    func_8001D1D4(rdram, ctx);
        goto after_42;
    // 0x80024AEC: nop

    after_42:
    // 0x80024AF0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80024AF4: beq         $v0, $at, L_80024BB8
    if (ctx->r2 == ctx->r1) {
        // 0x80024AF8: nop
    
            goto L_80024BB8;
    }
    // 0x80024AF8: nop

    // 0x80024AFC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80024B00: lw          $t9, -0x1BD8($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X1BD8);
    // 0x80024B04: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80024B08: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80024B0C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80024B10: lw          $t1, -0x4C04($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X4C04);
    // 0x80024B14: nop

    // 0x80024B18: lb          $t2, 0x33($t1)
    ctx->r10 = MEM_B(ctx->r9, 0X33);
    // 0x80024B1C: nop

    // 0x80024B20: bne         $t2, $zero, L_80024B4C
    if (ctx->r10 != 0) {
        // 0x80024B24: nop
    
            goto L_80024B4C;
    }
    // 0x80024B24: nop

    // 0x80024B28: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80024B2C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80024B30: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80024B34: jal         0x8001D244
    // 0x80024B38: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    Set_BgColor(rdram, ctx);
        goto after_43;
    // 0x80024B38: addiu       $a3, $zero, 0x10
    ctx->r7 = ADD32(0, 0X10);
    after_43:
    // 0x80024B3C: jal         0x80016FC8
    // 0x80024B40: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    func_80016FC8(rdram, ctx);
        goto after_44;
    // 0x80024B40: addiu       $a0, $zero, 0x20
    ctx->r4 = ADD32(0, 0X20);
    after_44:
    // 0x80024B44: b           L_80024BB0
    // 0x80024B48: nop

        goto L_80024BB0;
    // 0x80024B48: nop

L_80024B4C:
    // 0x80024B4C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80024B50: lw          $t3, -0x1BD8($t3)
    ctx->r11 = MEM_W(ctx->r11, -0X1BD8);
    // 0x80024B54: lui         $t5, 0x8011
    ctx->r13 = S32(0X8011 << 16);
    // 0x80024B58: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80024B5C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80024B60: lw          $t5, -0x4C04($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X4C04);
    // 0x80024B64: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80024B68: lb          $t6, 0x33($t5)
    ctx->r14 = MEM_B(ctx->r13, 0X33);
    // 0x80024B6C: nop

    // 0x80024B70: bne         $t6, $at, L_80024B9C
    if (ctx->r14 != ctx->r1) {
        // 0x80024B74: nop
    
            goto L_80024B9C;
    }
    // 0x80024B74: nop

    // 0x80024B78: addiu       $a0, $zero, 0xFF
    ctx->r4 = ADD32(0, 0XFF);
    // 0x80024B7C: addiu       $a1, $zero, 0xFF
    ctx->r5 = ADD32(0, 0XFF);
    // 0x80024B80: addiu       $a2, $zero, 0xFF
    ctx->r6 = ADD32(0, 0XFF);
    // 0x80024B84: jal         0x8001D244
    // 0x80024B88: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    Set_BgColor(rdram, ctx);
        goto after_45;
    // 0x80024B88: addiu       $a3, $zero, 0x4
    ctx->r7 = ADD32(0, 0X4);
    after_45:
    // 0x80024B8C: jal         0x80016FC8
    // 0x80024B90: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    func_80016FC8(rdram, ctx);
        goto after_46;
    // 0x80024B90: addiu       $a0, $zero, 0x80
    ctx->r4 = ADD32(0, 0X80);
    after_46:
    // 0x80024B94: b           L_80024BB0
    // 0x80024B98: nop

        goto L_80024BB0;
    // 0x80024B98: nop

L_80024B9C:
    // 0x80024B9C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80024BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80024BA4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80024BA8: jal         0x8001D244
    // 0x80024BAC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    Set_BgColor(rdram, ctx);
        goto after_47;
    // 0x80024BAC: addiu       $a3, $zero, 0xFF
    ctx->r7 = ADD32(0, 0XFF);
    after_47:
L_80024BB0:
    // 0x80024BB0: jal         0x8001D2C0
    // 0x80024BB4: nop

    func_8001D2C0(rdram, ctx);
        goto after_48;
    // 0x80024BB4: nop

    after_48:
L_80024BB8:
    // 0x80024BB8: jal         0x8001D1D4
    // 0x80024BBC: nop

    func_8001D1D4(rdram, ctx);
        goto after_49;
    // 0x80024BBC: nop

    after_49:
    // 0x80024BC0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80024BC4: bne         $v0, $at, L_80024BF0
    if (ctx->r2 != ctx->r1) {
        // 0x80024BC8: nop
    
            goto L_80024BF0;
    }
    // 0x80024BC8: nop

    // 0x80024BCC: addiu       $a0, $zero, -0x1
    ctx->r4 = ADD32(0, -0X1);
    // 0x80024BD0: addiu       $a1, $zero, -0x1
    ctx->r5 = ADD32(0, -0X1);
    // 0x80024BD4: jal         0x80016F38
    // 0x80024BD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    PlayTrack_WithVolLoop(rdram, ctx);
        goto after_50;
    // 0x80024BD8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_50:
    // 0x80024BDC: jal         0x80017EB8
    // 0x80024BE0: nop

    func_80017EB8(rdram, ctx);
        goto after_51;
    // 0x80024BE0: nop

    after_51:
    // 0x80024BE4: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80024BE8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80024BEC: sw          $t7, 0x5264($at)
    MEM_W(0X5264, ctx->r1) = ctx->r15;
L_80024BF0:
    // 0x80024BF0: b           L_80024BF8
    // 0x80024BF4: nop

        goto L_80024BF8;
    // 0x80024BF4: nop

L_80024BF8:
    // 0x80024BF8: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80024BFC: addiu       $sp, $sp, 0x70
    ctx->r29 = ADD32(ctx->r29, 0X70);
    // 0x80024C00: jr          $ra
    // 0x80024C04: nop

    return;
    // 0x80024C04: nop

;}
RECOMP_FUNC void func_80002130(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80002130: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80002134: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80002138: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000213C: sw          $zero, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = 0;
    // 0x80002140: sw          $zero, 0x18($sp)
    MEM_W(0X18, ctx->r29) = 0;
    // 0x80002144: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x80002148: nop

    // 0x8000214C: lw          $t7, 0x27C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X27C);
    // 0x80002150: nop

    // 0x80002154: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80002158: sw          $t8, 0x27C($t6)
    MEM_W(0X27C, ctx->r14) = ctx->r24;
    // 0x8000215C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80002160: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80002164: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80002168: jal         0x80031880
    // 0x8000216C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8000216C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_0:
    // 0x80002170: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80002174: beq         $v0, $at, L_800021AC
    if (ctx->r2 == ctx->r1) {
        // 0x80002178: nop
    
            goto L_800021AC;
    }
    // 0x80002178: nop

L_8000217C:
    // 0x8000217C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80002180: lw          $a1, 0x2C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X2C);
    // 0x80002184: jal         0x8000265C
    // 0x80002188: nop

    func_8000265C(rdram, ctx);
        goto after_1;
    // 0x80002188: nop

    after_1:
    // 0x8000218C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80002190: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x80002194: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80002198: jal         0x80031880
    // 0x8000219C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8000219C: addiu       $a0, $a0, 0x78
    ctx->r4 = ADD32(ctx->r4, 0X78);
    after_2:
    // 0x800021A0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800021A4: bne         $v0, $at, L_8000217C
    if (ctx->r2 != ctx->r1) {
        // 0x800021A8: nop
    
            goto L_8000217C;
    }
    // 0x800021A8: nop

L_800021AC:
    // 0x800021AC: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x800021B0: nop

    // 0x800021B4: lw          $t0, 0x280($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X280);
    // 0x800021B8: nop

    // 0x800021BC: beq         $t0, $zero, L_800021E8
    if (ctx->r8 == 0) {
        // 0x800021C0: nop
    
            goto L_800021E8;
    }
    // 0x800021C0: nop

    // 0x800021C4: lw          $t1, 0x274($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X274);
    // 0x800021C8: nop

    // 0x800021CC: beq         $t1, $zero, L_800021E8
    if (ctx->r9 == 0) {
        // 0x800021D0: nop
    
            goto L_800021E8;
    }
    // 0x800021D0: nop

    // 0x800021D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800021D8: jal         0x8000281C
    // 0x800021DC: nop

    func_8000281C(rdram, ctx);
        goto after_3;
    // 0x800021DC: nop

    after_3:
    // 0x800021E0: b           L_80002244
    // 0x800021E4: nop

        goto L_80002244;
    // 0x800021E4: nop

L_800021E8:
    // 0x800021E8: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800021EC: nop

    // 0x800021F0: lw          $t3, 0x274($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X274);
    // 0x800021F4: lw          $t7, 0x278($t2)
    ctx->r15 = MEM_W(ctx->r10, 0X278);
    // 0x800021F8: sltiu       $t4, $t3, 0x1
    ctx->r12 = ctx->r11 < 0X1 ? 1 : 0;
    // 0x800021FC: sll         $t5, $t4, 1
    ctx->r13 = S32(ctx->r12 << 1);
    // 0x80002200: sltiu       $t8, $t7, 0x1
    ctx->r24 = ctx->r15 < 0X1 ? 1 : 0;
    // 0x80002204: or          $t6, $t5, $t8
    ctx->r14 = ctx->r13 | ctx->r24;
    // 0x80002208: sw          $t6, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r14;
    // 0x8000220C: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80002210: lw          $a3, 0x20($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X20);
    // 0x80002214: addiu       $a1, $sp, 0x1C
    ctx->r5 = ADD32(ctx->r29, 0X1C);
    // 0x80002218: jal         0x80002890
    // 0x8000221C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    func_80002890(rdram, ctx);
        goto after_4;
    // 0x8000221C: addiu       $a2, $sp, 0x18
    ctx->r6 = ADD32(ctx->r29, 0X18);
    after_4:
    // 0x80002220: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80002224: nop

    // 0x80002228: beq         $v0, $t0, L_80002244
    if (ctx->r2 == ctx->r8) {
        // 0x8000222C: nop
    
            goto L_80002244;
    }
    // 0x8000222C: nop

    // 0x80002230: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x80002234: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x80002238: lw          $a2, 0x18($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X18);
    // 0x8000223C: jal         0x800026F4
    // 0x80002240: nop

    func_800026F4(rdram, ctx);
        goto after_5;
    // 0x80002240: nop

    after_5:
L_80002244:
    // 0x80002244: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80002248: nop

    // 0x8000224C: lw          $t1, 0x260($t9)
    ctx->r9 = MEM_W(ctx->r25, 0X260);
    // 0x80002250: nop

    // 0x80002254: beq         $t1, $zero, L_80002288
    if (ctx->r9 == 0) {
        // 0x80002258: sw          $t1, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r9;
            goto L_80002288;
    }
    // 0x80002258: sw          $t1, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r9;
L_8000225C:
    // 0x8000225C: lw          $t3, 0x28($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X28);
    // 0x80002260: lw          $a1, 0x30($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X30);
    // 0x80002264: lw          $a0, 0x4($t3)
    ctx->r4 = MEM_W(ctx->r11, 0X4);
    // 0x80002268: jal         0x80032010
    // 0x8000226C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    osSendMesg_recomp(rdram, ctx);
        goto after_6;
    // 0x8000226C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x80002270: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x80002274: nop

    // 0x80002278: lw          $t2, 0x0($t4)
    ctx->r10 = MEM_W(ctx->r12, 0X0);
    // 0x8000227C: nop

    // 0x80002280: bne         $t2, $zero, L_8000225C
    if (ctx->r10 != 0) {
        // 0x80002284: sw          $t2, 0x28($sp)
        MEM_W(0X28, ctx->r29) = ctx->r10;
            goto L_8000225C;
    }
    // 0x80002284: sw          $t2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r10;
L_80002288:
    // 0x80002288: b           L_80002290
    // 0x8000228C: nop

        goto L_80002290;
    // 0x8000228C: nop

L_80002290:
    // 0x80002290: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80002294: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80002298: jr          $ra
    // 0x8000229C: nop

    return;
    // 0x8000229C: nop

;}
RECOMP_FUNC void func_80018CF0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80018CF0: addiu       $sp, $sp, -0x160
    ctx->r29 = ADD32(ctx->r29, -0X160);
    // 0x80018CF4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80018CF8: sw          $a0, 0x160($sp)
    MEM_W(0X160, ctx->r29) = ctx->r4;
    // 0x80018CFC: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x80018D00: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80018D04: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80018D08: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80018D0C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80018D10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80018D14: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80018D18: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80018D1C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80018D20: lw          $a1, 0x0($t9)
    ctx->r5 = MEM_W(ctx->r25, 0X0);
    // 0x80018D24: lw          $a2, 0x4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0X4);
    // 0x80018D28: lw          $a3, 0x8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0X8);
    // 0x80018D2C: jal         0x80037200
    // 0x80018D30: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    guTranslateF(rdram, ctx);
        goto after_0;
    // 0x80018D30: addiu       $a0, $sp, 0x120
    ctx->r4 = ADD32(ctx->r29, 0X120);
    after_0:
    // 0x80018D34: lw          $t0, 0x160($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X160);
    // 0x80018D38: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80018D3C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80018D40: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80018D44: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80018D48: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80018D4C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80018D50: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x80018D54: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x80018D58: lw          $a1, 0xC($t3)
    ctx->r5 = MEM_W(ctx->r11, 0XC);
    // 0x80018D5C: lw          $a2, 0x10($t3)
    ctx->r6 = MEM_W(ctx->r11, 0X10);
    // 0x80018D60: lw          $a3, 0x14($t3)
    ctx->r7 = MEM_W(ctx->r11, 0X14);
    // 0x80018D64: jal         0x80037490
    // 0x80018D68: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    guScaleF(rdram, ctx);
        goto after_1;
    // 0x80018D68: addiu       $a0, $sp, 0xE0
    ctx->r4 = ADD32(ctx->r29, 0XE0);
    after_1:
    // 0x80018D6C: lw          $t4, 0x160($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X160);
    // 0x80018D70: lui         $a1, 0x8015
    ctx->r5 = S32(0X8015 << 16);
    // 0x80018D74: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80018D78: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80018D7C: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80018D80: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80018D84: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80018D88: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80018D8C: addu        $a1, $a1, $t5
    ctx->r5 = ADD32(ctx->r5, ctx->r13);
    // 0x80018D90: lw          $a1, 0x4168($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4168);
    // 0x80018D94: addiu       $a0, $sp, 0xA0
    ctx->r4 = ADD32(ctx->r29, 0XA0);
    // 0x80018D98: lui         $a2, 0x3F80
    ctx->r6 = S32(0X3F80 << 16);
    // 0x80018D9C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80018DA0: jal         0x800372A0
    // 0x80018DA4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_2;
    // 0x80018DA4: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x80018DA8: lw          $t6, 0x160($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X160);
    // 0x80018DAC: lui         $a1, 0x8015
    ctx->r5 = S32(0X8015 << 16);
    // 0x80018DB0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80018DB4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80018DB8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80018DBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80018DC0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80018DC4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80018DC8: addu        $a1, $a1, $t7
    ctx->r5 = ADD32(ctx->r5, ctx->r15);
    // 0x80018DCC: lw          $a1, 0x416C($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X416C);
    // 0x80018DD0: addiu       $a0, $sp, 0x60
    ctx->r4 = ADD32(ctx->r29, 0X60);
    // 0x80018DD4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80018DD8: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x80018DDC: jal         0x800372A0
    // 0x80018DE0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    guRotateF(rdram, ctx);
        goto after_3;
    // 0x80018DE0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    after_3:
    // 0x80018DE4: lw          $t8, 0x160($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X160);
    // 0x80018DE8: lui         $a1, 0x8015
    ctx->r5 = S32(0X8015 << 16);
    // 0x80018DEC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80018DF0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80018DF4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80018DF8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80018DFC: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80018E00: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80018E04: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80018E08: addu        $a1, $a1, $t9
    ctx->r5 = ADD32(ctx->r5, ctx->r25);
    // 0x80018E0C: lw          $a1, 0x4170($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X4170);
    // 0x80018E10: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80018E14: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x80018E18: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80018E1C: jal         0x800372A0
    // 0x80018E20: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    guRotateF(rdram, ctx);
        goto after_4;
    // 0x80018E20: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x80018E24: addiu       $t0, $sp, 0x20
    ctx->r8 = ADD32(ctx->r29, 0X20);
    // 0x80018E28: or          $a0, $t0, $zero
    ctx->r4 = ctx->r8 | 0;
    // 0x80018E2C: or          $a2, $t0, $zero
    ctx->r6 = ctx->r8 | 0;
    // 0x80018E30: jal         0x80036400
    // 0x80018E34: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    guMtxCatF(rdram, ctx);
        goto after_5;
    // 0x80018E34: addiu       $a1, $sp, 0x60
    ctx->r5 = ADD32(ctx->r29, 0X60);
    after_5:
    // 0x80018E38: addiu       $t1, $sp, 0x20
    ctx->r9 = ADD32(ctx->r29, 0X20);
    // 0x80018E3C: or          $a0, $t1, $zero
    ctx->r4 = ctx->r9 | 0;
    // 0x80018E40: or          $a2, $t1, $zero
    ctx->r6 = ctx->r9 | 0;
    // 0x80018E44: jal         0x80036400
    // 0x80018E48: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    guMtxCatF(rdram, ctx);
        goto after_6;
    // 0x80018E48: addiu       $a1, $sp, 0xA0
    ctx->r5 = ADD32(ctx->r29, 0XA0);
    after_6:
    // 0x80018E4C: addiu       $t2, $sp, 0x20
    ctx->r10 = ADD32(ctx->r29, 0X20);
    // 0x80018E50: or          $a0, $t2, $zero
    ctx->r4 = ctx->r10 | 0;
    // 0x80018E54: or          $a2, $t2, $zero
    ctx->r6 = ctx->r10 | 0;
    // 0x80018E58: jal         0x80036400
    // 0x80018E5C: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    guMtxCatF(rdram, ctx);
        goto after_7;
    // 0x80018E5C: addiu       $a1, $sp, 0xE0
    ctx->r5 = ADD32(ctx->r29, 0XE0);
    after_7:
    // 0x80018E60: lw          $t3, 0x160($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X160);
    // 0x80018E64: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x80018E68: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80018E6C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80018E70: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80018E74: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80018E78: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80018E7C: addiu       $t5, $t4, 0x64
    ctx->r13 = ADD32(ctx->r12, 0X64);
    // 0x80018E80: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x80018E84: addu        $a2, $t5, $t6
    ctx->r6 = ADD32(ctx->r13, ctx->r14);
    // 0x80018E88: addiu       $a0, $sp, 0x20
    ctx->r4 = ADD32(ctx->r29, 0X20);
    // 0x80018E8C: jal         0x80036400
    // 0x80018E90: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    guMtxCatF(rdram, ctx);
        goto after_8;
    // 0x80018E90: addiu       $a1, $sp, 0x120
    ctx->r5 = ADD32(ctx->r29, 0X120);
    after_8:
    // 0x80018E94: lw          $t7, 0x160($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X160);
    // 0x80018E98: lui         $t0, 0x8015
    ctx->r8 = S32(0X8015 << 16);
    // 0x80018E9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80018EA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80018EA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80018EA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80018EAC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80018EB0: lui         $a1, 0x8017
    ctx->r5 = S32(0X8017 << 16);
    // 0x80018EB4: addiu       $a1, $a1, -0x1EC0
    ctx->r5 = ADD32(ctx->r5, -0X1EC0);
    // 0x80018EB8: addiu       $t9, $t8, 0x64
    ctx->r25 = ADD32(ctx->r24, 0X64);
    // 0x80018EBC: addiu       $t1, $t8, 0x64
    ctx->r9 = ADD32(ctx->r24, 0X64);
    // 0x80018EC0: addiu       $t0, $t0, 0x4150
    ctx->r8 = ADD32(ctx->r8, 0X4150);
    // 0x80018EC4: addu        $a0, $t9, $t0
    ctx->r4 = ADD32(ctx->r25, ctx->r8);
    // 0x80018EC8: addu        $a2, $t1, $t0
    ctx->r6 = ADD32(ctx->r9, ctx->r8);
    // 0x80018ECC: jal         0x80036400
    // 0x80018ED0: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    guMtxCatF(rdram, ctx);
        goto after_9;
    // 0x80018ED0: addiu       $a1, $a1, 0x34
    ctx->r5 = ADD32(ctx->r5, 0X34);
    after_9:
    // 0x80018ED4: b           L_80018EDC
    // 0x80018ED8: nop

        goto L_80018EDC;
    // 0x80018ED8: nop

L_80018EDC:
    // 0x80018EDC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80018EE0: addiu       $sp, $sp, 0x160
    ctx->r29 = ADD32(ctx->r29, 0X160);
    // 0x80018EE4: jr          $ra
    // 0x80018EE8: nop

    return;
    // 0x80018EE8: nop

;}
RECOMP_FUNC void func_8002AE84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002AE84: addiu       $sp, $sp, -0xC8
    ctx->r29 = ADD32(ctx->r29, -0XC8);
    // 0x8002AE88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002AE8C: sw          $a0, 0xC8($sp)
    MEM_W(0XC8, ctx->r29) = ctx->r4;
    // 0x8002AE90: sw          $a1, 0xCC($sp)
    MEM_W(0XCC, ctx->r29) = ctx->r5;
    // 0x8002AE94: lw          $t6, 0xC8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0XC8);
    // 0x8002AE98: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8002AE9C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002AEA0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002AEA4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002AEA8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002AEAC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002AEB0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8002AEB4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8002AEB8: sw          $t9, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r25;
    // 0x8002AEBC: sw          $zero, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = 0;
L_8002AEC0:
    // 0x8002AEC0: lw          $t1, 0xC0($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC0);
    // 0x8002AEC4: lw          $t0, 0xC4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC4);
    // 0x8002AEC8: sll         $t2, $t1, 1
    ctx->r10 = S32(ctx->r9 << 1);
    // 0x8002AECC: addu        $t3, $t0, $t2
    ctx->r11 = ADD32(ctx->r8, ctx->r10);
    // 0x8002AED0: lh          $t4, 0xE8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XE8);
    // 0x8002AED4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002AED8: beq         $t4, $at, L_8002AEE0
    if (ctx->r12 == ctx->r1) {
        // 0x8002AEDC: nop
    
            goto L_8002AEE0;
    }
    // 0x8002AEDC: nop

L_8002AEE0:
    // 0x8002AEE0: lw          $t5, 0xC0($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC0);
    // 0x8002AEE4: nop

    // 0x8002AEE8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8002AEEC: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8002AEF0: bne         $at, $zero, L_8002AEC0
    if (ctx->r1 != 0) {
        // 0x8002AEF4: sw          $t6, 0xC0($sp)
        MEM_W(0XC0, ctx->r29) = ctx->r14;
            goto L_8002AEC0;
    }
    // 0x8002AEF4: sw          $t6, 0xC0($sp)
    MEM_W(0XC0, ctx->r29) = ctx->r14;
    // 0x8002AEF8: lw          $t7, 0xC4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0XC4);
    // 0x8002AEFC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002AF00: lh          $t8, 0xFC($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XFC);
    // 0x8002AF04: nop

    // 0x8002AF08: beq         $t8, $at, L_8002AF24
    if (ctx->r24 == ctx->r1) {
        // 0x8002AF0C: nop
    
            goto L_8002AF24;
    }
    // 0x8002AF0C: nop

    // 0x8002AF10: lw          $t9, 0xC4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0XC4);
    // 0x8002AF14: nop

    // 0x8002AF18: lh          $a0, 0xFC($t9)
    ctx->r4 = MEM_H(ctx->r25, 0XFC);
    // 0x8002AF1C: jal         0x800260E0
    // 0x8002AF20: nop

    func_800260E0(rdram, ctx);
        goto after_0;
    // 0x8002AF20: nop

    after_0:
L_8002AF24:
    // 0x8002AF24: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8002AF28: jal         0x800272E8
    // 0x8002AF2C: nop

    func_800272E8(rdram, ctx);
        goto after_1;
    // 0x8002AF2C: nop

    after_1:
    // 0x8002AF30: lw          $t1, 0xCC($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XCC);
    // 0x8002AF34: nop

    // 0x8002AF38: beq         $t1, $zero, L_8002B084
    if (ctx->r9 == 0) {
        // 0x8002AF3C: nop
    
            goto L_8002B084;
    }
    // 0x8002AF3C: nop

    // 0x8002AF40: lw          $t0, 0xC4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0XC4);
    // 0x8002AF44: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8002AF48: lw          $a1, 0x1C($t0)
    ctx->r5 = MEM_W(ctx->r8, 0X1C);
    // 0x8002AF4C: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    // 0x8002AF50: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x8002AF54: lui         $a3, 0x3F80
    ctx->r7 = S32(0X3F80 << 16);
    // 0x8002AF58: jal         0x800372A0
    // 0x8002AF5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    guRotateF(rdram, ctx);
        goto after_2;
    // 0x8002AF5C: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    after_2:
    // 0x8002AF60: lw          $t2, 0xC4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC4);
    // 0x8002AF64: addiu       $a0, $sp, 0x2C
    ctx->r4 = ADD32(ctx->r29, 0X2C);
    // 0x8002AF68: lw          $a1, 0x0($t2)
    ctx->r5 = MEM_W(ctx->r10, 0X0);
    // 0x8002AF6C: lw          $a2, 0x4($t2)
    ctx->r6 = MEM_W(ctx->r10, 0X4);
    // 0x8002AF70: lw          $a3, 0x8($t2)
    ctx->r7 = MEM_W(ctx->r10, 0X8);
    // 0x8002AF74: jal         0x80037200
    // 0x8002AF78: nop

    guTranslateF(rdram, ctx);
        goto after_3;
    // 0x8002AF78: nop

    after_3:
    // 0x8002AF7C: addiu       $t3, $sp, 0x6C
    ctx->r11 = ADD32(ctx->r29, 0X6C);
    // 0x8002AF80: or          $a0, $t3, $zero
    ctx->r4 = ctx->r11 | 0;
    // 0x8002AF84: or          $a2, $t3, $zero
    ctx->r6 = ctx->r11 | 0;
    // 0x8002AF88: jal         0x80036400
    // 0x8002AF8C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    guMtxCatF(rdram, ctx);
        goto after_4;
    // 0x8002AF8C: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    after_4:
    // 0x8002AF90: lw          $t4, 0xC4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XC4);
    // 0x8002AF94: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x8002AF98: lh          $t5, 0xE4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XE4);
    // 0x8002AF9C: addiu       $t7, $t7, 0x4D90
    ctx->r15 = ADD32(ctx->r15, 0X4D90);
    // 0x8002AFA0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002AFA4: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8002AFA8: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x8002AFAC: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002AFB0: lh          $t9, 0x8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X8);
    // 0x8002AFB4: lh          $t1, 0xA($t8)
    ctx->r9 = MEM_H(ctx->r24, 0XA);
    // 0x8002AFB8: lh          $t0, 0xC($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XC);
    // 0x8002AFBC: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x8002AFC0: mtc1        $t1, $f8
    ctx->f8.u32l = ctx->r9;
    // 0x8002AFC4: mtc1        $t0, $f10
    ctx->f10.u32l = ctx->r8;
    // 0x8002AFC8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8002AFCC: addiu       $t4, $sp, 0xB4
    ctx->r12 = ADD32(ctx->r29, 0XB4);
    // 0x8002AFD0: addiu       $t2, $sp, 0xBC
    ctx->r10 = ADD32(ctx->r29, 0XBC);
    // 0x8002AFD4: cvt.s.w     $f8, $f8
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 8);
    ctx->f8.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8002AFD8: mfc1        $a1, $f6
    ctx->r5 = (int32_t)ctx->f6.u32l;
    // 0x8002AFDC: addiu       $t3, $sp, 0xB8
    ctx->r11 = ADD32(ctx->r29, 0XB8);
    // 0x8002AFE0: cvt.s.w     $f10, $f10
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 10);
    ctx->f10.fl = CVT_S_W(ctx->f10.u32l);
    // 0x8002AFE4: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x8002AFE8: sw          $t3, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r11;
    // 0x8002AFEC: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x8002AFF0: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x8002AFF4: sw          $t4, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r12;
    // 0x8002AFF8: jal         0x80036360
    // 0x8002AFFC: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    guMtxXFMF(rdram, ctx);
        goto after_5;
    // 0x8002AFFC: addiu       $a0, $sp, 0x6C
    ctx->r4 = ADD32(ctx->r29, 0X6C);
    after_5:
    // 0x8002B000: lw          $t5, 0xC4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XC4);
    // 0x8002B004: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8002B008: lh          $t6, 0xE4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XE4);
    // 0x8002B00C: nop

    // 0x8002B010: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002B014: subu        $t7, $t7, $t6
    ctx->r15 = SUB32(ctx->r15, ctx->r14);
    // 0x8002B018: sll         $t7, $t7, 5
    ctx->r15 = S32(ctx->r15 << 5);
    // 0x8002B01C: addu        $t9, $t9, $t7
    ctx->r25 = ADD32(ctx->r25, ctx->r15);
    // 0x8002B020: lbu         $t9, 0x4D9E($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4D9E);
    // 0x8002B024: nop

    // 0x8002B028: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8002B02C: bgez        $t9, L_8002B044
    if (SIGNED(ctx->r25) >= 0) {
        // 0x8002B030: cvt.s.w     $f18, $f16
        CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
            goto L_8002B044;
    }
    // 0x8002B030: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8002B034: lui         $at, 0x4F80
    ctx->r1 = S32(0X4F80 << 16);
    // 0x8002B038: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8002B03C: nop

    // 0x8002B040: add.s       $f18, $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f18.fl = ctx->f18.fl + ctx->f4.fl;
L_8002B044:
    // 0x8002B044: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8002B048: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8002B04C: nop

    // 0x8002B050: div.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = DIV_S(ctx->f18.fl, ctx->f6.fl);
    // 0x8002B054: swc1        $f8, 0xB0($sp)
    MEM_W(0XB0, ctx->r29) = ctx->f8.u32l;
    // 0x8002B058: lw          $t1, 0xC4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0XC4);
    // 0x8002B05C: lui         $t2, 0x8012
    ctx->r10 = S32(0X8012 << 16);
    // 0x8002B060: lh          $t8, 0xE4($t1)
    ctx->r24 = MEM_H(ctx->r9, 0XE4);
    // 0x8002B064: nop

    // 0x8002B068: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x8002B06C: subu        $t0, $t0, $t8
    ctx->r8 = SUB32(ctx->r8, ctx->r24);
    // 0x8002B070: sll         $t0, $t0, 5
    ctx->r8 = S32(ctx->r8 << 5);
    // 0x8002B074: addu        $t2, $t2, $t0
    ctx->r10 = ADD32(ctx->r10, ctx->r8);
    // 0x8002B078: lb          $t2, 0x4D9F($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X4D9F);
    // 0x8002B07C: nop

    // 0x8002B080: sw          $t2, 0xAC($sp)
    MEM_W(0XAC, ctx->r29) = ctx->r10;
L_8002B084:
    // 0x8002B084: lw          $a0, 0xC8($sp)
    ctx->r4 = MEM_W(ctx->r29, 0XC8);
    // 0x8002B088: jal         0x8001A928
    // 0x8002B08C: nop

    func_8001A928(rdram, ctx);
        goto after_6;
    // 0x8002B08C: nop

    after_6:
    // 0x8002B090: lw          $t3, 0xCC($sp)
    ctx->r11 = MEM_W(ctx->r29, 0XCC);
    // 0x8002B094: nop

    // 0x8002B098: beq         $t3, $zero, L_8002B0CC
    if (ctx->r11 == 0) {
        // 0x8002B09C: nop
    
            goto L_8002B0CC;
    }
    // 0x8002B09C: nop

    // 0x8002B0A0: lw          $t4, 0xAC($sp)
    ctx->r12 = MEM_W(ctx->r29, 0XAC);
    // 0x8002B0A4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002B0A8: beq         $t4, $at, L_8002B0CC
    if (ctx->r12 == ctx->r1) {
        // 0x8002B0AC: nop
    
            goto L_8002B0CC;
    }
    // 0x8002B0AC: nop

    // 0x8002B0B0: lw          $t5, 0xAC($sp)
    ctx->r13 = MEM_W(ctx->r29, 0XAC);
    // 0x8002B0B4: lwc1        $f12, 0xBC($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0XBC);
    // 0x8002B0B8: lwc1        $f14, 0xB8($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0XB8);
    // 0x8002B0BC: lw          $a2, 0xB4($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XB4);
    // 0x8002B0C0: lw          $a3, 0xB0($sp)
    ctx->r7 = MEM_W(ctx->r29, 0XB0);
    // 0x8002B0C4: jal         0x8002AB40
    // 0x8002B0C8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    func_8002AB40(rdram, ctx);
        goto after_7;
    // 0x8002B0C8: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_7:
L_8002B0CC:
    // 0x8002B0CC: b           L_8002B0D4
    // 0x8002B0D0: nop

        goto L_8002B0D4;
    // 0x8002B0D0: nop

L_8002B0D4:
    // 0x8002B0D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002B0D8: addiu       $sp, $sp, 0xC8
    ctx->r29 = ADD32(ctx->r29, 0XC8);
    // 0x8002B0DC: jr          $ra
    // 0x8002B0E0: nop

    return;
    // 0x8002B0E0: nop

;}
RECOMP_FUNC void func_8002A640(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002A640: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8002A644: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002A648: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8002A64C: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8002A650: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x8002A654: jal         0x8002A46C
    // 0x8002A658: nop

    Get_AngleToPlayer(rdram, ctx);
        goto after_0;
    // 0x8002A658: nop

    after_0:
    // 0x8002A65C: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x8002A660: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8002A664: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8002A668: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8002A66C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A670: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8002A674: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8002A678: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8002A67C: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8002A680: lwc1        $f14, 0x416C($at)
    ctx->f14.u32l = MEM_W(ctx->r1, 0X416C);
    // 0x8002A684: lwc1        $f12, 0x1C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8002A688: jal         0x80015538
    // 0x8002A68C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8002A68C: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_1:
    // 0x8002A690: swc1        $f0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f0.u32l;
    // 0x8002A694: lwc1        $f4, 0x18($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002A698: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8002A69C: nop

    // 0x8002A6A0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8002A6A4: nop

    // 0x8002A6A8: bc1t        L_8002A6D0
    if (c1cs) {
        // 0x8002A6AC: nop
    
            goto L_8002A6D0;
    }
    // 0x8002A6AC: nop

    // 0x8002A6B0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8002A6B4: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8002A6B8: nop

    // 0x8002A6BC: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x8002A6C0: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x8002A6C4: nop

    // 0x8002A6C8: bc1f        L_8002A6D8
    if (!c1cs) {
        // 0x8002A6CC: nop
    
            goto L_8002A6D8;
    }
    // 0x8002A6CC: nop

L_8002A6D0:
    // 0x8002A6D0: b           L_8002A710
    // 0x8002A6D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8002A710;
    // 0x8002A6D4: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8002A6D8:
    // 0x8002A6D8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8002A6DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8002A6E0: lwc1        $f16, 0x18($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X18);
    // 0x8002A6E4: nop

    // 0x8002A6E8: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8002A6EC: nop

    // 0x8002A6F0: bc1f        L_8002A700
    if (!c1cs) {
        // 0x8002A6F4: nop
    
            goto L_8002A700;
    }
    // 0x8002A6F4: nop

    // 0x8002A6F8: b           L_8002A710
    // 0x8002A6FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_8002A710;
    // 0x8002A6FC: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_8002A700:
    // 0x8002A700: b           L_8002A710
    // 0x8002A704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8002A710;
    // 0x8002A704: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8002A708: b           L_8002A710
    // 0x8002A70C: nop

        goto L_8002A710;
    // 0x8002A70C: nop

L_8002A710:
    // 0x8002A710: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002A714: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8002A718: jr          $ra
    // 0x8002A71C: nop

    return;
    // 0x8002A71C: nop

;}
RECOMP_FUNC void alSynSetPan(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EF10: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EF14: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EF18: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003EF1C: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8003EF20: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8003EF24: beql        $t6, $zero, L_8003EF88
    if (ctx->r14 == 0) {
        // 0x8003EF28: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003EF88;
    }
    goto skip_0;
    // 0x8003EF28: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003EF2C: jal         0x80035B20
    // 0x8003EF30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8003EF30: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003EF34: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EF38: beq         $v0, $zero, L_8003EF84
    if (ctx->r2 == 0) {
        // 0x8003EF3C: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8003EF84;
    }
    // 0x8003EF3C: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003EF40: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003EF44: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8003EF48: addiu       $t2, $zero, 0xC
    ctx->r10 = ADD32(0, 0XC);
    // 0x8003EF4C: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8003EF50: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8003EF54: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8003EF58: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003EF5C: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8003EF60: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8003EF64: lbu         $t3, 0x23($sp)
    ctx->r11 = MEM_BU(ctx->r29, 0X23);
    // 0x8003EF68: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8003EF6C: sw          $t3, 0xC($v0)
    MEM_W(0XC, ctx->r2) = ctx->r11;
    // 0x8003EF70: lw          $t4, 0x8($a3)
    ctx->r12 = MEM_W(ctx->r7, 0X8);
    // 0x8003EF74: lw          $a0, 0xC($t4)
    ctx->r4 = MEM_W(ctx->r12, 0XC);
    // 0x8003EF78: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003EF7C: jalr        $t9
    // 0x8003EF80: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003EF80: nop

    after_1:
L_8003EF84:
    // 0x8003EF84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EF88:
    // 0x8003EF88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EF8C: jr          $ra
    // 0x8003EF90: nop

    return;
    // 0x8003EF90: nop

;}
RECOMP_FUNC void func_8001C158(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001C158: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001C15C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001C160: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001C164: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001C168: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8001C16C: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x8001C170: lui         $a3, 0x8017
    ctx->r7 = S32(0X8017 << 16);
    // 0x8001C174: sll         $t7, $t6, 3
    ctx->r15 = S32(ctx->r14 << 3);
    // 0x8001C178: addu        $a3, $a3, $t7
    ctx->r7 = ADD32(ctx->r7, ctx->r15);
    // 0x8001C17C: lw          $a3, -0x3560($a3)
    ctx->r7 = MEM_W(ctx->r7, -0X3560);
    // 0x8001C180: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001C184: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001C188: jal         0x8001BE6C
    // 0x8001C18C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001BE6C(rdram, ctx);
        goto after_0;
    // 0x8001C18C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x8001C190: b           L_8001C198
    // 0x8001C194: nop

        goto L_8001C198;
    // 0x8001C194: nop

L_8001C198:
    // 0x8001C198: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001C19C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001C1A0: jr          $ra
    // 0x8001C1A4: nop

    return;
    // 0x8001C1A4: nop

;}
RECOMP_FUNC void func_8000CFC0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000CFC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000CFC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000CFC8: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8000CFCC: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8000CFD0: sw          $a2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r6;
    // 0x8000CFD4: sw          $a3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r7;
    // 0x8000CFD8: jal         0x80008360
    // 0x8000CFDC: nop

    func_80008360(rdram, ctx);
        goto after_0;
    // 0x8000CFDC: nop

    after_0:
    // 0x8000CFE0: lb          $t6, 0x1B($sp)
    ctx->r14 = MEM_B(ctx->r29, 0X1B);
    // 0x8000CFE4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CFE8: sb          $t6, 0x2DB4($at)
    MEM_B(0X2DB4, ctx->r1) = ctx->r14;
    // 0x8000CFEC: lb          $t7, 0x1F($sp)
    ctx->r15 = MEM_B(ctx->r29, 0X1F);
    // 0x8000CFF0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000CFF4: sb          $t7, 0x2DB5($at)
    MEM_B(0X2DB5, ctx->r1) = ctx->r15;
    // 0x8000CFF8: lb          $t8, 0x23($sp)
    ctx->r24 = MEM_B(ctx->r29, 0X23);
    // 0x8000CFFC: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8000D000: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x8000D004: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8000D008: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8000D00C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D010: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x8000D014: swc1        $f10, 0x2DAC($at)
    MEM_W(0X2DAC, ctx->r1) = ctx->f10.u32l;
    // 0x8000D018: lb          $t9, 0x27($sp)
    ctx->r25 = MEM_B(ctx->r29, 0X27);
    // 0x8000D01C: lui         $at, 0x42FE
    ctx->r1 = S32(0X42FE << 16);
    // 0x8000D020: mtc1        $t9, $f16
    ctx->f16.u32l = ctx->r25;
    // 0x8000D024: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000D028: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x8000D02C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D030: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x8000D034: swc1        $f6, 0x2DB0($at)
    MEM_W(0X2DB0, ctx->r1) = ctx->f6.u32l;
    // 0x8000D038: b           L_8000D040
    // 0x8000D03C: nop

        goto L_8000D040;
    // 0x8000D03C: nop

L_8000D040:
    // 0x8000D040: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000D044: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8000D048: jr          $ra
    // 0x8000D04C: nop

    return;
    // 0x8000D04C: nop

;}
RECOMP_FUNC void alCSeqGetLoc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80033B60: lw          $t6, 0x4($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X4);
    // 0x80033B64: or          $a2, $a0, $zero
    ctx->r6 = ctx->r4 | 0;
    // 0x80033B68: or          $t0, $a0, $zero
    ctx->r8 = ctx->r4 | 0;
    // 0x80033B6C: sw          $t6, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r14;
    // 0x80033B70: lw          $t7, 0xC($a0)
    ctx->r15 = MEM_W(ctx->r4, 0XC);
    // 0x80033B74: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80033B78: or          $v1, $a1, $zero
    ctx->r3 = ctx->r5 | 0;
    // 0x80033B7C: sw          $t7, 0x4($a1)
    MEM_W(0X4, ctx->r5) = ctx->r15;
    // 0x80033B80: lw          $t8, 0x10($a0)
    ctx->r24 = MEM_W(ctx->r4, 0X10);
    // 0x80033B84: addiu       $a0, $zero, 0x10
    ctx->r4 = ADD32(0, 0X10);
    // 0x80033B88: or          $a3, $a1, $zero
    ctx->r7 = ctx->r5 | 0;
    // 0x80033B8C: sw          $t8, 0x8($a1)
    MEM_W(0X8, ctx->r5) = ctx->r24;
L_80033B90:
    // 0x80033B90: lw          $t9, 0x18($a2)
    ctx->r25 = MEM_W(ctx->r6, 0X18);
    // 0x80033B94: addiu       $v0, $v0, 0x2
    ctx->r2 = ADD32(ctx->r2, 0X2);
    // 0x80033B98: addiu       $v1, $v1, 0x8
    ctx->r3 = ADD32(ctx->r3, 0X8);
    // 0x80033B9C: sw          $t9, 0x4($v1)
    MEM_W(0X4, ctx->r3) = ctx->r25;
    // 0x80033BA0: lw          $t1, 0x58($a2)
    ctx->r9 = MEM_W(ctx->r6, 0X58);
    // 0x80033BA4: addiu       $a2, $a2, 0x8
    ctx->r6 = ADD32(ctx->r6, 0X8);
    // 0x80033BA8: addiu       $a3, $a3, 0x2
    ctx->r7 = ADD32(ctx->r7, 0X2);
    // 0x80033BAC: sw          $t1, 0x44($v1)
    MEM_W(0X44, ctx->r3) = ctx->r9;
    // 0x80033BB0: lbu         $t2, 0x98($t0)
    ctx->r10 = MEM_BU(ctx->r8, 0X98);
    // 0x80033BB4: addiu       $t0, $t0, 0x2
    ctx->r8 = ADD32(ctx->r8, 0X2);
    // 0x80033BB8: sb          $t2, 0x8A($a3)
    MEM_B(0X8A, ctx->r7) = ctx->r10;
    // 0x80033BBC: lbu         $t3, 0xA6($t0)
    ctx->r11 = MEM_BU(ctx->r8, 0XA6);
    // 0x80033BC0: sb          $t3, 0x9A($a3)
    MEM_B(0X9A, ctx->r7) = ctx->r11;
    // 0x80033BC4: lw          $t4, 0xB0($a2)
    ctx->r12 = MEM_W(ctx->r6, 0XB0);
    // 0x80033BC8: sw          $t4, 0xA4($v1)
    MEM_W(0XA4, ctx->r3) = ctx->r12;
    // 0x80033BCC: lw          $t5, 0x14($a2)
    ctx->r13 = MEM_W(ctx->r6, 0X14);
    // 0x80033BD0: sw          $t5, 0x8($v1)
    MEM_W(0X8, ctx->r3) = ctx->r13;
    // 0x80033BD4: lw          $t6, 0x54($a2)
    ctx->r14 = MEM_W(ctx->r6, 0X54);
    // 0x80033BD8: sw          $t6, 0x48($v1)
    MEM_W(0X48, ctx->r3) = ctx->r14;
    // 0x80033BDC: lbu         $t7, 0x97($t0)
    ctx->r15 = MEM_BU(ctx->r8, 0X97);
    // 0x80033BE0: sb          $t7, 0x8B($a3)
    MEM_B(0X8B, ctx->r7) = ctx->r15;
    // 0x80033BE4: lbu         $t8, 0xA7($t0)
    ctx->r24 = MEM_BU(ctx->r8, 0XA7);
    // 0x80033BE8: sb          $t8, 0x9B($a3)
    MEM_B(0X9B, ctx->r7) = ctx->r24;
    // 0x80033BEC: lw          $t9, 0xB4($a2)
    ctx->r25 = MEM_W(ctx->r6, 0XB4);
    // 0x80033BF0: bne         $v0, $a0, L_80033B90
    if (ctx->r2 != ctx->r4) {
        // 0x80033BF4: sw          $t9, 0xA8($v1)
        MEM_W(0XA8, ctx->r3) = ctx->r25;
            goto L_80033B90;
    }
    // 0x80033BF4: sw          $t9, 0xA8($v1)
    MEM_W(0XA8, ctx->r3) = ctx->r25;
    // 0x80033BF8: jr          $ra
    // 0x80033BFC: nop

    return;
    // 0x80033BFC: nop

;}
RECOMP_FUNC void func_8001D1D4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001D1D4: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001D1D8: lb          $v0, -0x1EE4($v0)
    ctx->r2 = MEM_B(ctx->r2, -0X1EE4);
    // 0x8001D1DC: jr          $ra
    // 0x8001D1E0: nop

    return;
    // 0x8001D1E0: nop

    // 0x8001D1E4: jr          $ra
    // 0x8001D1E8: nop

    return;
    // 0x8001D1E8: nop

    // 0x8001D1EC: jr          $ra
    // 0x8001D1F0: nop

    return;
    // 0x8001D1F0: nop

;}
RECOMP_FUNC void func_80003304(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80003304: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80003308: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000330C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80003310: jal         0x8000D84C
    // 0x80003314: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x80003314: addiu       $a0, $zero, 0x7C
    ctx->r4 = ADD32(0, 0X7C);
    after_0:
    // 0x80003318: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000331C: sw          $v0, 0x2EA4($at)
    MEM_W(0X2EA4, ctx->r1) = ctx->r2;
    // 0x80003320: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80003324: lw          $t6, 0x2EA4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X2EA4);
    // 0x80003328: nop

    // 0x8000332C: bne         $t6, $zero, L_8000333C
    if (ctx->r14 != 0) {
        // 0x80003330: nop
    
            goto L_8000333C;
    }
    // 0x80003330: nop

    // 0x80003334: b           L_80003894
    // 0x80003338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80003894;
    // 0x80003338: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000333C:
    // 0x8000333C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003340: lw          $a0, 0x2EA4($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EA4);
    // 0x80003344: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80003348: jal         0x800337A0
    // 0x8000334C: addiu       $a1, $a1, -0x5D18
    ctx->r5 = ADD32(ctx->r5, -0X5D18);
    alCSPNew(rdram, ctx);
        goto after_1;
    // 0x8000334C: addiu       $a1, $a1, -0x5D18
    ctx->r5 = ADD32(ctx->r5, -0X5D18);
    after_1:
    // 0x80003350: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003354: sw          $zero, 0x2EC0($at)
    MEM_W(0X2EC0, ctx->r1) = 0;
    // 0x80003358: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000335C: sw          $zero, 0x2EBC($at)
    MEM_W(0X2EBC, ctx->r1) = 0;
    // 0x80003360: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80003364: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003368: swc1        $f4, 0x2EC4($at)
    MEM_W(0X2EC4, ctx->r1) = ctx->f4.u32l;
    // 0x8000336C: addiu       $t7, $zero, 0x7FFF
    ctx->r15 = ADD32(0, 0X7FFF);
    // 0x80003370: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003374: sh          $t7, 0x2ED2($at)
    MEM_H(0X2ED2, ctx->r1) = ctx->r15;
    // 0x80003378: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000337C: sw          $zero, 0x2EB8($at)
    MEM_W(0X2EB8, ctx->r1) = 0;
    // 0x80003380: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80003384: lw          $t8, -0x5CC0($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CC0);
    // 0x80003388: nop

    // 0x8000338C: bne         $t8, $zero, L_8000339C
    if (ctx->r24 != 0) {
        // 0x80003390: nop
    
            goto L_8000339C;
    }
    // 0x80003390: nop

    // 0x80003394: b           L_80003894
    // 0x80003398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80003894;
    // 0x80003398: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000339C:
    // 0x8000339C: jal         0x800038A4
    // 0x800033A0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    func_800038A4(rdram, ctx);
        goto after_2;
    // 0x800033A0: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    after_2:
    // 0x800033A4: beq         $v0, $zero, L_800033B4
    if (ctx->r2 == 0) {
        // 0x800033A8: nop
    
            goto L_800033B4;
    }
    // 0x800033A8: nop

    // 0x800033AC: b           L_80003894
    // 0x800033B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80003894;
    // 0x800033B0: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800033B4:
    // 0x800033B4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x800033B8: lw          $t9, 0x2EB0($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2EB0);
    // 0x800033BC: nop

    // 0x800033C0: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x800033C4: nop

    // 0x800033C8: sh          $t0, 0x2A($sp)
    MEM_H(0X2A, ctx->r29) = ctx->r8;
    // 0x800033CC: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800033D0: lw          $t1, 0x2EB0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2EB0);
    // 0x800033D4: addiu       $at, $zero, 0x5331
    ctx->r1 = ADD32(0, 0X5331);
    // 0x800033D8: lh          $s0, 0x0($t1)
    ctx->r16 = MEM_H(ctx->r9, 0X0);
    // 0x800033DC: nop

    // 0x800033E0: beq         $s0, $at, L_800033FC
    if (ctx->r16 == ctx->r1) {
        // 0x800033E4: nop
    
            goto L_800033FC;
    }
    // 0x800033E4: nop

    // 0x800033E8: addiu       $at, $zero, 0x5332
    ctx->r1 = ADD32(0, 0X5332);
    // 0x800033EC: beq         $s0, $at, L_800034E0
    if (ctx->r16 == ctx->r1) {
        // 0x800033F0: nop
    
            goto L_800034E0;
    }
    // 0x800033F0: nop

    // 0x800033F4: b           L_800036B8
    // 0x800033F8: nop

        goto L_800036B8;
    // 0x800033F8: nop

L_800033FC:
    // 0x800033FC: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x80003400: nop

    // 0x80003404: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x80003408: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x8000340C: sw          $t4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r12;
    // 0x80003410: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80003414: jal         0x800038A4
    // 0x80003418: nop

    func_800038A4(rdram, ctx);
        goto after_3;
    // 0x80003418: nop

    after_3:
    // 0x8000341C: beq         $v0, $zero, L_8000342C
    if (ctx->r2 == 0) {
        // 0x80003420: nop
    
            goto L_8000342C;
    }
    // 0x80003420: nop

    // 0x80003424: b           L_80003894
    // 0x80003428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80003894;
    // 0x80003428: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000342C:
    // 0x8000342C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x80003430: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80003434: lw          $a1, -0x5CC0($a1)
    ctx->r5 = MEM_W(ctx->r5, -0X5CC0);
    // 0x80003438: lw          $a0, 0x2EB0($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X2EB0);
    // 0x8000343C: jal         0x80033B18
    // 0x80003440: nop

    alSeqFileNew(rdram, ctx);
        goto after_4;
    // 0x80003440: nop

    after_4:
    // 0x80003444: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x80003448: lh          $t5, 0x2A($sp)
    ctx->r13 = MEM_H(ctx->r29, 0X2A);
    // 0x8000344C: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80003450: beq         $t5, $zero, L_800034BC
    if (ctx->r13 == 0) {
        // 0x80003454: nop
    
            goto L_800034BC;
    }
    // 0x80003454: nop

L_80003458:
    // 0x80003458: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8000345C: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80003460: lw          $t7, 0x2EB0($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X2EB0);
    // 0x80003464: sll         $t9, $t8, 3
    ctx->r25 = S32(ctx->r24 << 3);
    // 0x80003468: addu        $t0, $t7, $t9
    ctx->r8 = ADD32(ctx->r15, ctx->r25);
    // 0x8000346C: lw          $t1, 0x8($t0)
    ctx->r9 = MEM_W(ctx->r8, 0X8);
    // 0x80003470: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80003474: nop

    // 0x80003478: sltu        $at, $t6, $t1
    ctx->r1 = ctx->r14 < ctx->r9 ? 1 : 0;
    // 0x8000347C: beq         $at, $zero, L_800034A4
    if (ctx->r1 == 0) {
        // 0x80003480: nop
    
            goto L_800034A4;
    }
    // 0x80003480: nop

    // 0x80003484: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x80003488: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000348C: lw          $t2, 0x2EB0($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2EB0);
    // 0x80003490: sll         $t4, $t3, 3
    ctx->r12 = S32(ctx->r11 << 3);
    // 0x80003494: addu        $t5, $t2, $t4
    ctx->r13 = ADD32(ctx->r10, ctx->r12);
    // 0x80003498: lw          $t8, 0x8($t5)
    ctx->r24 = MEM_W(ctx->r13, 0X8);
    // 0x8000349C: nop

    // 0x800034A0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
L_800034A4:
    // 0x800034A4: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x800034A8: lh          $t0, 0x2A($sp)
    ctx->r8 = MEM_H(ctx->r29, 0X2A);
    // 0x800034AC: addiu       $t9, $t7, 0x1
    ctx->r25 = ADD32(ctx->r15, 0X1);
    // 0x800034B0: sltu        $at, $t9, $t0
    ctx->r1 = ctx->r25 < ctx->r8 ? 1 : 0;
    // 0x800034B4: bne         $at, $zero, L_80003458
    if (ctx->r1 != 0) {
        // 0x800034B8: sw          $t9, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r25;
            goto L_80003458;
    }
    // 0x800034B8: sw          $t9, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r25;
L_800034BC:
    // 0x800034BC: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800034C0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800034C4: lw          $t1, -0x5CB8($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5CB8);
    // 0x800034C8: lw          $t6, -0x5CB4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CB4);
    // 0x800034CC: nop

    // 0x800034D0: subu        $t3, $t6, $t1
    ctx->r11 = SUB32(ctx->r14, ctx->r9);
    // 0x800034D4: sw          $t3, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r11;
    // 0x800034D8: b           L_80003700
    // 0x800034DC: nop

        goto L_80003700;
    // 0x800034DC: nop

L_800034E0:
    // 0x800034E0: lh          $t2, 0x2A($sp)
    ctx->r10 = MEM_H(ctx->r29, 0X2A);
    // 0x800034E4: nop

    // 0x800034E8: sll         $t4, $t2, 2
    ctx->r12 = S32(ctx->r10 << 2);
    // 0x800034EC: subu        $t4, $t4, $t2
    ctx->r12 = SUB32(ctx->r12, ctx->r10);
    // 0x800034F0: sll         $t4, $t4, 3
    ctx->r12 = S32(ctx->r12 << 3);
    // 0x800034F4: addiu       $t5, $t4, 0x4
    ctx->r13 = ADD32(ctx->r12, 0X4);
    // 0x800034F8: sw          $t5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r13;
    // 0x800034FC: lw          $a0, 0x34($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X34);
    // 0x80003500: jal         0x800038A4
    // 0x80003504: nop

    func_800038A4(rdram, ctx);
        goto after_5;
    // 0x80003504: nop

    after_5:
    // 0x80003508: beq         $v0, $zero, L_80003518
    if (ctx->r2 == 0) {
        // 0x8000350C: nop
    
            goto L_80003518;
    }
    // 0x8000350C: nop

    // 0x80003510: b           L_80003894
    // 0x80003514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80003894;
    // 0x80003514: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80003518:
    // 0x80003518: lh          $t7, 0x2A($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X2A);
    // 0x8000351C: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80003520: lw          $t8, 0x2EB0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2EB0);
    // 0x80003524: sll         $t9, $t7, 3
    ctx->r25 = S32(ctx->r15 << 3);
    // 0x80003528: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8000352C: addiu       $t6, $t0, 0x4
    ctx->r14 = ADD32(ctx->r8, 0X4);
    // 0x80003530: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003534: sw          $t6, 0x2EB4($at)
    MEM_W(0X2EB4, ctx->r1) = ctx->r14;
    // 0x80003538: sw          $zero, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = 0;
    // 0x8000353C: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x80003540: lh          $t1, 0x2A($sp)
    ctx->r9 = MEM_H(ctx->r29, 0X2A);
    // 0x80003544: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80003548: beq         $t1, $zero, L_800036B0
    if (ctx->r9 == 0) {
        // 0x8000354C: nop
    
            goto L_800036B0;
    }
    // 0x8000354C: nop

L_80003550:
    // 0x80003550: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80003554: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80003558: lw          $t3, 0x2EB0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2EB0);
    // 0x8000355C: sll         $t4, $t2, 3
    ctx->r12 = S32(ctx->r10 << 3);
    // 0x80003560: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x80003564: lw          $t7, 0x8($t5)
    ctx->r15 = MEM_W(ctx->r13, 0X8);
    // 0x80003568: nop

    // 0x8000356C: bgez        $t7, L_8000357C
    if (SIGNED(ctx->r15) >= 0) {
        // 0x80003570: nop
    
            goto L_8000357C;
    }
    // 0x80003570: nop

    // 0x80003574: b           L_80003698
    // 0x80003578: nop

        goto L_80003698;
    // 0x80003578: nop

L_8000357C:
    // 0x8000357C: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80003580: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80003584: lw          $t8, 0x2EB0($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2EB0);
    // 0x80003588: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x8000358C: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x80003590: addu        $t6, $t8, $t0
    ctx->r14 = ADD32(ctx->r24, ctx->r8);
    // 0x80003594: lw          $t1, 0x4($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X4);
    // 0x80003598: lw          $t2, -0x5CC0($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X5CC0);
    // 0x8000359C: nop

    // 0x800035A0: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x800035A4: sw          $t3, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->r11;
    // 0x800035A8: lw          $t5, 0x38($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X38);
    // 0x800035AC: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800035B0: lw          $t4, 0x2EB4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2EB4);
    // 0x800035B4: sll         $t7, $t5, 4
    ctx->r15 = S32(ctx->r13 << 4);
    // 0x800035B8: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x800035BC: addu        $t9, $t4, $t7
    ctx->r25 = ADD32(ctx->r12, ctx->r15);
    // 0x800035C0: lw          $t8, 0x4($t9)
    ctx->r24 = MEM_W(ctx->r25, 0X4);
    // 0x800035C4: lw          $t0, -0x5CC0($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X5CC0);
    // 0x800035C8: nop

    // 0x800035CC: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x800035D0: sw          $t1, 0x4($t9)
    MEM_W(0X4, ctx->r25) = ctx->r9;
    // 0x800035D4: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x800035D8: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x800035DC: lw          $t2, 0x2EB4($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X2EB4);
    // 0x800035E0: sll         $t6, $t3, 4
    ctx->r14 = S32(ctx->r11 << 4);
    // 0x800035E4: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800035E8: addu        $t5, $t2, $t6
    ctx->r13 = ADD32(ctx->r10, ctx->r14);
    // 0x800035EC: lw          $t4, 0xC($t5)
    ctx->r12 = MEM_W(ctx->r13, 0XC);
    // 0x800035F0: lw          $t7, -0x5CC0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5CC0);
    // 0x800035F4: nop

    // 0x800035F8: addu        $t8, $t4, $t7
    ctx->r24 = ADD32(ctx->r12, ctx->r15);
    // 0x800035FC: sw          $t8, 0xC($t5)
    MEM_W(0XC, ctx->r13) = ctx->r24;
    // 0x80003600: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80003604: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80003608: lw          $t1, 0x2EB4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2EB4);
    // 0x8000360C: sll         $t3, $t9, 4
    ctx->r11 = S32(ctx->r25 << 4);
    // 0x80003610: addu        $t2, $t1, $t3
    ctx->r10 = ADD32(ctx->r9, ctx->r11);
    // 0x80003614: lw          $t6, 0x8($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X8);
    // 0x80003618: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x8000361C: nop

    // 0x80003620: sltu        $at, $t0, $t6
    ctx->r1 = ctx->r8 < ctx->r14 ? 1 : 0;
    // 0x80003624: beq         $at, $zero, L_8000364C
    if (ctx->r1 == 0) {
        // 0x80003628: nop
    
            goto L_8000364C;
    }
    // 0x80003628: nop

    // 0x8000362C: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80003630: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80003634: lw          $t4, 0x2EB4($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2EB4);
    // 0x80003638: sll         $t8, $t7, 4
    ctx->r24 = S32(ctx->r15 << 4);
    // 0x8000363C: addu        $t5, $t4, $t8
    ctx->r13 = ADD32(ctx->r12, ctx->r24);
    // 0x80003640: lw          $t9, 0x8($t5)
    ctx->r25 = MEM_W(ctx->r13, 0X8);
    // 0x80003644: nop

    // 0x80003648: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
L_8000364C:
    // 0x8000364C: lw          $t2, 0x38($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X38);
    // 0x80003650: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x80003654: lw          $t3, 0x2EB0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2EB0);
    // 0x80003658: sll         $t0, $t2, 3
    ctx->r8 = S32(ctx->r10 << 3);
    // 0x8000365C: addu        $t6, $t3, $t0
    ctx->r14 = ADD32(ctx->r11, ctx->r8);
    // 0x80003660: lw          $t7, 0x8($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X8);
    // 0x80003664: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80003668: nop

    // 0x8000366C: sltu        $at, $t1, $t7
    ctx->r1 = ctx->r9 < ctx->r15 ? 1 : 0;
    // 0x80003670: beq         $at, $zero, L_80003698
    if (ctx->r1 == 0) {
        // 0x80003674: nop
    
            goto L_80003698;
    }
    // 0x80003674: nop

    // 0x80003678: lw          $t8, 0x38($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X38);
    // 0x8000367C: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x80003680: lw          $t4, 0x2EB0($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X2EB0);
    // 0x80003684: sll         $t5, $t8, 3
    ctx->r13 = S32(ctx->r24 << 3);
    // 0x80003688: addu        $t9, $t4, $t5
    ctx->r25 = ADD32(ctx->r12, ctx->r13);
    // 0x8000368C: lw          $t2, 0x8($t9)
    ctx->r10 = MEM_W(ctx->r25, 0X8);
    // 0x80003690: nop

    // 0x80003694: sw          $t2, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r10;
L_80003698:
    // 0x80003698: lw          $t3, 0x38($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X38);
    // 0x8000369C: lh          $t6, 0x2A($sp)
    ctx->r14 = MEM_H(ctx->r29, 0X2A);
    // 0x800036A0: addiu       $t0, $t3, 0x1
    ctx->r8 = ADD32(ctx->r11, 0X1);
    // 0x800036A4: sltu        $at, $t0, $t6
    ctx->r1 = ctx->r8 < ctx->r14 ? 1 : 0;
    // 0x800036A8: bne         $at, $zero, L_80003550
    if (ctx->r1 != 0) {
        // 0x800036AC: sw          $t0, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r8;
            goto L_80003550;
    }
    // 0x800036AC: sw          $t0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r8;
L_800036B0:
    // 0x800036B0: b           L_80003700
    // 0x800036B4: nop

        goto L_80003700;
    // 0x800036B4: nop

L_800036B8:
    // 0x800036B8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800036BC: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x800036C0: lw          $t7, -0x5CC0($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X5CC0);
    // 0x800036C4: lw          $t1, -0x5CBC($t1)
    ctx->r9 = MEM_W(ctx->r9, -0X5CBC);
    // 0x800036C8: nop

    // 0x800036CC: subu        $t8, $t1, $t7
    ctx->r24 = SUB32(ctx->r9, ctx->r15);
    // 0x800036D0: sw          $t8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r24;
    // 0x800036D4: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x800036D8: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800036DC: lw          $t5, -0x5CB8($t5)
    ctx->r13 = MEM_W(ctx->r13, -0X5CB8);
    // 0x800036E0: lw          $t4, -0x5CB4($t4)
    ctx->r12 = MEM_W(ctx->r12, -0X5CB4);
    // 0x800036E4: nop

    // 0x800036E8: subu        $t9, $t4, $t5
    ctx->r25 = SUB32(ctx->r12, ctx->r13);
    // 0x800036EC: sw          $t9, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r25;
    // 0x800036F0: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x800036F4: lw          $t3, 0x2EB0($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X2EB0);
    // 0x800036F8: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800036FC: sh          $t2, 0x2($t3)
    MEM_H(0X2, ctx->r11) = ctx->r10;
L_80003700:
    // 0x80003700: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x80003704: nop

    // 0x80003708: beq         $t0, $zero, L_80003720
    if (ctx->r8 == 0) {
        // 0x8000370C: nop
    
            goto L_80003720;
    }
    // 0x8000370C: nop

    // 0x80003710: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80003714: nop

    // 0x80003718: bne         $t6, $zero, L_80003730
    if (ctx->r14 != 0) {
        // 0x8000371C: nop
    
            goto L_80003730;
    }
    // 0x8000371C: nop

L_80003720:
    // 0x80003720: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003724: sw          $zero, -0x5CC0($at)
    MEM_W(-0X5CC0, ctx->r1) = 0;
    // 0x80003728: b           L_80003894
    // 0x8000372C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80003894;
    // 0x8000372C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80003730:
    // 0x80003730: jal         0x8000D84C
    // 0x80003734: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    h_alHeapAlloc(rdram, ctx);
        goto after_6;
    // 0x80003734: addiu       $a0, $zero, 0xF8
    ctx->r4 = ADD32(0, 0XF8);
    after_6:
    // 0x80003738: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000373C: sw          $v0, 0x2EAC($at)
    MEM_W(0X2EAC, ctx->r1) = ctx->r2;
    // 0x80003740: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80003744: lw          $t1, 0x2EAC($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2EAC);
    // 0x80003748: nop

    // 0x8000374C: bne         $t1, $zero, L_8000375C
    if (ctx->r9 != 0) {
        // 0x80003750: nop
    
            goto L_8000375C;
    }
    // 0x80003750: nop

    // 0x80003754: b           L_80003894
    // 0x80003758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80003894;
    // 0x80003758: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_8000375C:
    // 0x8000375C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80003760: nop

    // 0x80003764: andi        $t8, $t7, 0x1
    ctx->r24 = ctx->r15 & 0X1;
    // 0x80003768: beq         $t8, $zero, L_80003780
    if (ctx->r24 == 0) {
        // 0x8000376C: nop
    
            goto L_80003780;
    }
    // 0x8000376C: nop

    // 0x80003770: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80003774: nop

    // 0x80003778: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8000377C: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
L_80003780:
    // 0x80003780: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x80003784: jal         0x8000D84C
    // 0x80003788: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_7;
    // 0x80003788: nop

    after_7:
    // 0x8000378C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003790: sw          $v0, 0x2EA8($at)
    MEM_W(0X2EA8, ctx->r1) = ctx->r2;
    // 0x80003794: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x80003798: lw          $t9, 0x2EA8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2EA8);
    // 0x8000379C: nop

    // 0x800037A0: bne         $t9, $zero, L_800037B0
    if (ctx->r25 != 0) {
        // 0x800037A4: nop
    
            goto L_800037B0;
    }
    // 0x800037A4: nop

    // 0x800037A8: b           L_80003894
    // 0x800037AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80003894;
    // 0x800037AC: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800037B0:
    // 0x800037B0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x800037B4: nop

    // 0x800037B8: andi        $t3, $t2, 0x1
    ctx->r11 = ctx->r10 & 0X1;
    // 0x800037BC: beq         $t3, $zero, L_800037D4
    if (ctx->r11 == 0) {
        // 0x800037C0: nop
    
            goto L_800037D4;
    }
    // 0x800037C0: nop

    // 0x800037C4: lw          $t0, 0x30($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X30);
    // 0x800037C8: nop

    // 0x800037CC: addiu       $t6, $t0, 0x1
    ctx->r14 = ADD32(ctx->r8, 0X1);
    // 0x800037D0: sw          $t6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r14;
L_800037D4:
    // 0x800037D4: lw          $a0, 0x30($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X30);
    // 0x800037D8: jal         0x8000D84C
    // 0x800037DC: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_8;
    // 0x800037DC: nop

    after_8:
    // 0x800037E0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800037E4: sw          $v0, 0x2EA0($at)
    MEM_W(0X2EA0, ctx->r1) = ctx->r2;
    // 0x800037E8: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x800037EC: lw          $t1, 0x2EA0($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X2EA0);
    // 0x800037F0: nop

    // 0x800037F4: bne         $t1, $zero, L_80003804
    if (ctx->r9 != 0) {
        // 0x800037F8: nop
    
            goto L_80003804;
    }
    // 0x800037F8: nop

    // 0x800037FC: b           L_80003894
    // 0x80003800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80003894;
    // 0x80003800: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80003804:
    // 0x80003804: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80003808: addiu       $t7, $t7, 0x2ED8
    ctx->r15 = ADD32(ctx->r15, 0X2ED8);
    // 0x8000380C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80003810: sw          $t7, 0x2ED4($at)
    MEM_W(0X2ED4, ctx->r1) = ctx->r15;
    // 0x80003814: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80003818: addiu       $t8, $t8, 0x2ED8
    ctx->r24 = ADD32(ctx->r24, 0X2ED8);
    // 0x8000381C: sw          $t8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r24;
    // 0x80003820: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
L_80003824:
    // 0x80003824: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x80003828: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000382C: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80003830: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80003834: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80003838: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8000383C: addiu       $t9, $t5, 0x14
    ctx->r25 = ADD32(ctx->r13, 0X14);
    // 0x80003840: addiu       $t2, $t2, 0x2ED8
    ctx->r10 = ADD32(ctx->r10, 0X2ED8);
    // 0x80003844: addu        $t3, $t9, $t2
    ctx->r11 = ADD32(ctx->r25, ctx->r10);
    // 0x80003848: sw          $t3, 0x0($t0)
    MEM_W(0X0, ctx->r8) = ctx->r11;
    // 0x8000384C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80003850: nop

    // 0x80003854: lw          $t1, 0x0($t6)
    ctx->r9 = MEM_W(ctx->r14, 0X0);
    // 0x80003858: nop

    // 0x8000385C: sw          $t1, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r9;
    // 0x80003860: lw          $t7, 0x38($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X38);
    // 0x80003864: nop

    // 0x80003868: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8000386C: sltiu       $at, $t8, 0x1F
    ctx->r1 = ctx->r24 < 0X1F ? 1 : 0;
    // 0x80003870: bne         $at, $zero, L_80003824
    if (ctx->r1 != 0) {
        // 0x80003874: sw          $t8, 0x38($sp)
        MEM_W(0X38, ctx->r29) = ctx->r24;
            goto L_80003824;
    }
    // 0x80003874: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
    // 0x80003878: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8000387C: nop

    // 0x80003880: sw          $zero, 0x0($t4)
    MEM_W(0X0, ctx->r12) = 0;
    // 0x80003884: b           L_80003894
    // 0x80003888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80003894;
    // 0x80003888: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x8000388C: b           L_80003894
    // 0x80003890: nop

        goto L_80003894;
    // 0x80003890: nop

L_80003894:
    // 0x80003894: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80003898: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000389C: jr          $ra
    // 0x800038A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x800038A0: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80008360(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80008360: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80008364: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x80008368: lh          $t6, -0x5C9C($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X5C9C);
    // 0x8000836C: nop

    // 0x80008370: bne         $t6, $zero, L_80008380
    if (ctx->r14 != 0) {
        // 0x80008374: nop
    
            goto L_80008380;
    }
    // 0x80008374: nop

    // 0x80008378: b           L_800083E4
    // 0x8000837C: nop

        goto L_800083E4;
    // 0x8000837C: nop

L_80008380:
    // 0x80008380: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x80008384: lh          $t7, -0x5C9C($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X5C9C);
    // 0x80008388: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
    // 0x8000838C: blez        $t7, L_800083D4
    if (SIGNED(ctx->r15) <= 0) {
        // 0x80008390: nop
    
            goto L_800083D4;
    }
    // 0x80008390: nop

L_80008394:
    // 0x80008394: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80008398: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000839C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800083A0: lw          $t9, 0x2DA8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X2DA8);
    // 0x800083A4: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x800083A8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800083AC: addiu       $t8, $zero, -0x1
    ctx->r24 = ADD32(0, -0X1);
    // 0x800083B0: addu        $t2, $t9, $t1
    ctx->r10 = ADD32(ctx->r25, ctx->r9);
    // 0x800083B4: sh          $t8, 0x0($t2)
    MEM_H(0X0, ctx->r10) = ctx->r24;
    // 0x800083B8: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800083BC: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x800083C0: lh          $t5, -0x5C9C($t5)
    ctx->r13 = MEM_H(ctx->r13, -0X5C9C);
    // 0x800083C4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800083C8: slt         $at, $t4, $t5
    ctx->r1 = SIGNED(ctx->r12) < SIGNED(ctx->r13) ? 1 : 0;
    // 0x800083CC: bne         $at, $zero, L_80008394
    if (ctx->r1 != 0) {
        // 0x800083D0: sw          $t4, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r12;
            goto L_80008394;
    }
    // 0x800083D0: sw          $t4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r12;
L_800083D4:
    // 0x800083D4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800083D8: sb          $zero, 0x2DB6($at)
    MEM_B(0X2DB6, ctx->r1) = 0;
    // 0x800083DC: b           L_800083E4
    // 0x800083E0: nop

        goto L_800083E4;
    // 0x800083E0: nop

L_800083E4:
    // 0x800083E4: jr          $ra
    // 0x800083E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800083E8: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001A2A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001A2A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001A2A4: sw          $zero, -0x1C54($at)
    MEM_W(-0X1C54, ctx->r1) = 0;
    // 0x8001A2A8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2AC: sw          $zero, 0x5D50($at)
    MEM_W(0X5D50, ctx->r1) = 0;
    // 0x8001A2B0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2B4: sw          $zero, 0x5D54($at)
    MEM_W(0X5D54, ctx->r1) = 0;
    // 0x8001A2B8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2BC: sw          $zero, 0x5D58($at)
    MEM_W(0X5D58, ctx->r1) = 0;
    // 0x8001A2C0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2C4: sw          $zero, 0x5D5C($at)
    MEM_W(0X5D5C, ctx->r1) = 0;
    // 0x8001A2C8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2CC: sw          $zero, 0x5D60($at)
    MEM_W(0X5D60, ctx->r1) = 0;
    // 0x8001A2D0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2D4: sw          $zero, -0x5C30($at)
    MEM_W(-0X5C30, ctx->r1) = 0;
    // 0x8001A2D8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2DC: sw          $zero, 0x5D64($at)
    MEM_W(0X5D64, ctx->r1) = 0;
    // 0x8001A2E0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2E4: sw          $zero, -0x5C2C($at)
    MEM_W(-0X5C2C, ctx->r1) = 0;
    // 0x8001A2E8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8001A2EC: sw          $zero, 0x5D68($at)
    MEM_W(0X5D68, ctx->r1) = 0;
    // 0x8001A2F0: jr          $ra
    // 0x8001A2F4: nop

    return;
    // 0x8001A2F4: nop

    // 0x8001A2F8: jr          $ra
    // 0x8001A2FC: nop

    return;
    // 0x8001A2FC: nop

;}
RECOMP_FUNC void func_80024E1C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80024E1C: addiu       $sp, $sp, -0x10
    ctx->r29 = ADD32(ctx->r29, -0X10);
    // 0x80024E20: slti        $at, $a0, 0x4
    ctx->r1 = SIGNED(ctx->r4) < 0X4 ? 1 : 0;
    // 0x80024E24: beq         $at, $zero, L_80024E44
    if (ctx->r1 == 0) {
        // 0x80024E28: nop
    
            goto L_80024E44;
    }
    // 0x80024E28: nop

    // 0x80024E2C: sll         $t6, $a0, 4
    ctx->r14 = S32(ctx->r4 << 4);
    // 0x80024E30: subu        $t6, $t6, $a0
    ctx->r14 = SUB32(ctx->r14, ctx->r4);
    // 0x80024E34: sll         $t6, $t6, 3
    ctx->r14 = S32(ctx->r14 << 3);
    // 0x80024E38: addiu       $t7, $t6, 0x68
    ctx->r15 = ADD32(ctx->r14, 0X68);
    // 0x80024E3C: b           L_80024E58
    // 0x80024E40: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
        goto L_80024E58;
    // 0x80024E40: sw          $t7, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r15;
L_80024E44:
    // 0x80024E44: sll         $t8, $a0, 4
    ctx->r24 = S32(ctx->r4 << 4);
    // 0x80024E48: subu        $t8, $t8, $a0
    ctx->r24 = SUB32(ctx->r24, ctx->r4);
    // 0x80024E4C: sll         $t8, $t8, 3
    ctx->r24 = S32(ctx->r24 << 3);
    // 0x80024E50: addiu       $t9, $t8, 0x10
    ctx->r25 = ADD32(ctx->r24, 0X10);
    // 0x80024E54: sw          $t9, 0xC($sp)
    MEM_W(0XC, ctx->r29) = ctx->r25;
L_80024E58:
    // 0x80024E58: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_80024E5C:
    // 0x80024E5C: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80024E60: lw          $t2, 0xC($sp)
    ctx->r10 = MEM_W(ctx->r29, 0XC);
    // 0x80024E64: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x80024E68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80024E6C: lbu         $t1, -0x59C0($t1)
    ctx->r9 = MEM_BU(ctx->r9, -0X59C0);
    // 0x80024E70: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80024E74: addu        $t3, $t2, $t0
    ctx->r11 = ADD32(ctx->r10, ctx->r8);
    // 0x80024E78: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x80024E7C: sb          $t1, 0x7450($at)
    MEM_B(0X7450, ctx->r1) = ctx->r9;
    // 0x80024E80: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80024E84: nop

    // 0x80024E88: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80024E8C: slti        $at, $t5, 0x7
    ctx->r1 = SIGNED(ctx->r13) < 0X7 ? 1 : 0;
    // 0x80024E90: bne         $at, $zero, L_80024E5C
    if (ctx->r1 != 0) {
        // 0x80024E94: sw          $t5, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r13;
            goto L_80024E5C;
    }
    // 0x80024E94: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x80024E98: b           L_80024EA0
    // 0x80024E9C: nop

        goto L_80024EA0;
    // 0x80024E9C: nop

L_80024EA0:
    // 0x80024EA0: jr          $ra
    // 0x80024EA4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
    return;
    // 0x80024EA4: addiu       $sp, $sp, 0x10
    ctx->r29 = ADD32(ctx->r29, 0X10);
;}
RECOMP_FUNC void alSynStopVoice(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003EA80: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8003EA84: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8003EA88: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8003EA8C: lw          $t6, 0x8($a1)
    ctx->r14 = MEM_W(ctx->r5, 0X8);
    // 0x8003EA90: beql        $t6, $zero, L_8003EAEC
    if (ctx->r14 == 0) {
        // 0x8003EA94: lw          $ra, 0x14($sp)
        ctx->r31 = MEM_W(ctx->r29, 0X14);
            goto L_8003EAEC;
    }
    goto skip_0;
    // 0x8003EA94: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    skip_0:
    // 0x8003EA98: jal         0x80035B20
    // 0x8003EA9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    __allocParam(rdram, ctx);
        goto after_0;
    // 0x8003EA9C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    after_0:
    // 0x8003EAA0: lw          $a3, 0x1C($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X1C);
    // 0x8003EAA4: beq         $v0, $zero, L_8003EAE8
    if (ctx->r2 == 0) {
        // 0x8003EAA8: or          $a2, $v0, $zero
        ctx->r6 = ctx->r2 | 0;
            goto L_8003EAE8;
    }
    // 0x8003EAA8: or          $a2, $v0, $zero
    ctx->r6 = ctx->r2 | 0;
    // 0x8003EAAC: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8003EAB0: lw          $t9, 0x8($a3)
    ctx->r25 = MEM_W(ctx->r7, 0X8);
    // 0x8003EAB4: addiu       $t2, $zero, 0xF
    ctx->r10 = ADD32(0, 0XF);
    // 0x8003EAB8: lw          $t8, 0x1C($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X1C);
    // 0x8003EABC: lw          $t0, 0xD8($t9)
    ctx->r8 = MEM_W(ctx->r25, 0XD8);
    // 0x8003EAC0: sh          $t2, 0x8($v0)
    MEM_H(0X8, ctx->r2) = ctx->r10;
    // 0x8003EAC4: sw          $zero, 0x0($v0)
    MEM_W(0X0, ctx->r2) = 0;
    // 0x8003EAC8: addu        $t1, $t8, $t0
    ctx->r9 = ADD32(ctx->r24, ctx->r8);
    // 0x8003EACC: sw          $t1, 0x4($v0)
    MEM_W(0X4, ctx->r2) = ctx->r9;
    // 0x8003EAD0: lw          $t3, 0x8($a3)
    ctx->r11 = MEM_W(ctx->r7, 0X8);
    // 0x8003EAD4: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8003EAD8: lw          $a0, 0xC($t3)
    ctx->r4 = MEM_W(ctx->r11, 0XC);
    // 0x8003EADC: lw          $t9, 0x8($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X8);
    // 0x8003EAE0: jalr        $t9
    // 0x8003EAE4: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_1;
    // 0x8003EAE4: nop

    after_1:
L_8003EAE8:
    // 0x8003EAE8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
L_8003EAEC:
    // 0x8003EAEC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8003EAF0: jr          $ra
    // 0x8003EAF4: nop

    return;
    // 0x8003EAF4: nop

;}
RECOMP_FUNC void func_80001710(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001710: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80001714: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001718: lui         $t6, 0x1E
    ctx->r14 = S32(0X1E << 16);
    // 0x8000171C: lui         $t7, 0x1E
    ctx->r15 = S32(0X1E << 16);
    // 0x80001720: addiu       $t7, $t7, 0x7490
    ctx->r15 = ADD32(ctx->r15, 0X7490);
    // 0x80001724: addiu       $t6, $t6, 0x3FF0
    ctx->r14 = ADD32(ctx->r14, 0X3FF0);
    // 0x80001728: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000172C: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    // 0x80001730: jal         0x8000068C
    // 0x80001734: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001734: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    after_0:
    // 0x80001738: b           L_80001740
    // 0x8000173C: nop

        goto L_80001740;
    // 0x8000173C: nop

L_80001740:
    // 0x80001740: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001744: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001748: jr          $ra
    // 0x8000174C: nop

    return;
    // 0x8000174C: nop

;}
RECOMP_FUNC void func_800064BC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800064BC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800064C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800064C4: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x800064C8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x800064CC: nop

    // 0x800064D0: lw          $t7, 0x1C($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X1C);
    // 0x800064D4: nop

    // 0x800064D8: beq         $t7, $zero, L_800064F0
    if (ctx->r15 == 0) {
        // 0x800064DC: nop
    
            goto L_800064F0;
    }
    // 0x800064DC: nop

    // 0x800064E0: lw          $t8, 0x20($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X20);
    // 0x800064E4: nop

    // 0x800064E8: bne         $t8, $zero, L_800064F8
    if (ctx->r24 != 0) {
        // 0x800064EC: nop
    
            goto L_800064F8;
    }
    // 0x800064EC: nop

L_800064F0:
    // 0x800064F0: b           L_800065A8
    // 0x800064F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800065A8;
    // 0x800064F4: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_800064F8:
    // 0x800064F8: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x800064FC: nop

    // 0x80006500: lw          $t0, 0x20($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X20);
    // 0x80006504: nop

    // 0x80006508: sw          $t0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r8;
    // 0x8000650C: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x80006510: nop

    // 0x80006514: andi        $t2, $t1, 0x1
    ctx->r10 = ctx->r9 & 0X1;
    // 0x80006518: beq         $t2, $zero, L_80006530
    if (ctx->r10 == 0) {
        // 0x8000651C: nop
    
            goto L_80006530;
    }
    // 0x8000651C: nop

    // 0x80006520: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80006524: nop

    // 0x80006528: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8000652C: sw          $t4, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r12;
L_80006530:
    // 0x80006530: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x80006534: jal         0x8000D84C
    // 0x80006538: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x80006538: nop

    after_0:
    // 0x8000653C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80006540: sw          $v0, 0x2D60($at)
    MEM_W(0X2D60, ctx->r1) = ctx->r2;
    // 0x80006544: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x80006548: lw          $t5, 0x2D60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X2D60);
    // 0x8000654C: nop

    // 0x80006550: bne         $t5, $zero, L_80006560
    if (ctx->r13 != 0) {
        // 0x80006554: nop
    
            goto L_80006560;
    }
    // 0x80006554: nop

    // 0x80006558: b           L_800065A8
    // 0x8000655C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
        goto L_800065A8;
    // 0x8000655C: addiu       $v0, $zero, 0x2
    ctx->r2 = ADD32(0, 0X2);
L_80006560:
    // 0x80006560: lw          $t7, 0x20($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X20);
    // 0x80006564: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x80006568: lw          $t8, -0x5CAC($t8)
    ctx->r24 = MEM_W(ctx->r24, -0X5CAC);
    // 0x8000656C: lw          $t6, 0x1C($t7)
    ctx->r14 = MEM_W(ctx->r15, 0X1C);
    // 0x80006570: nop

    // 0x80006574: addu        $t9, $t6, $t8
    ctx->r25 = ADD32(ctx->r14, ctx->r24);
    // 0x80006578: sw          $t9, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r25;
    // 0x8000657C: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x80006580: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x80006584: lw          $a1, 0x2D60($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X2D60);
    // 0x80006588: lw          $a2, 0x1C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X1C);
    // 0x8000658C: lw          $a0, 0x1C($t0)
    ctx->r4 = MEM_W(ctx->r8, 0X1C);
    // 0x80006590: jal         0x80002CD0
    // 0x80006594: nop

    func_80002CD0(rdram, ctx);
        goto after_1;
    // 0x80006594: nop

    after_1:
    // 0x80006598: b           L_800065A8
    // 0x8000659C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800065A8;
    // 0x8000659C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x800065A0: b           L_800065A8
    // 0x800065A4: nop

        goto L_800065A8;
    // 0x800065A4: nop

L_800065A8:
    // 0x800065A8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800065AC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800065B0: jr          $ra
    // 0x800065B4: nop

    return;
    // 0x800065B4: nop

;}
RECOMP_FUNC void func_8001ECB8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001ECB8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001ECBC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001ECC0: jal         0x8001F9DC
    // 0x8001ECC4: nop

    Check_PakState(rdram, ctx);
        goto after_0;
    // 0x8001ECC4: nop

    after_0:
    // 0x8001ECC8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ECCC: sw          $zero, -0x1DBC($at)
    MEM_W(-0X1DBC, ctx->r1) = 0;
    // 0x8001ECD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ECD4: sw          $zero, -0x1F7C($at)
    MEM_W(-0X1F7C, ctx->r1) = 0;
    // 0x8001ECD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ECDC: sw          $zero, -0x1F74($at)
    MEM_W(-0X1F74, ctx->r1) = 0;
    // 0x8001ECE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ECE4: sw          $zero, 0x65F4($at)
    MEM_W(0X65F4, ctx->r1) = 0;
    // 0x8001ECE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ECEC: sb          $zero, 0x6602($at)
    MEM_B(0X6602, ctx->r1) = 0;
    // 0x8001ECF0: jal         0x8001EBE8
    // 0x8001ECF4: nop

    func_8001EBE8(rdram, ctx);
        goto after_1;
    // 0x8001ECF4: nop

    after_1:
    // 0x8001ECF8: jal         0x8001EC1C
    // 0x8001ECFC: nop

    func_8001EC1C(rdram, ctx);
        goto after_2;
    // 0x8001ECFC: nop

    after_2:
    // 0x8001ED00: jal         0x8001EC50
    // 0x8001ED04: nop

    func_8001EC50(rdram, ctx);
        goto after_3;
    // 0x8001ED04: nop

    after_3:
    // 0x8001ED08: jal         0x8001EC84
    // 0x8001ED0C: nop

    func_8001EC84(rdram, ctx);
        goto after_4;
    // 0x8001ED0C: nop

    after_4:
    // 0x8001ED10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001ED14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED18: swc1        $f4, -0x1EC0($at)
    MEM_W(-0X1EC0, ctx->r1) = ctx->f4.u32l;
    // 0x8001ED1C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001ED20: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED24: swc1        $f6, -0x1EBC($at)
    MEM_W(-0X1EBC, ctx->r1) = ctx->f6.u32l;
    // 0x8001ED28: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001ED2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED30: swc1        $f8, -0x1EB8($at)
    MEM_W(-0X1EB8, ctx->r1) = ctx->f8.u32l;
    // 0x8001ED34: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001ED38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED3C: swc1        $f10, -0x1EB4($at)
    MEM_W(-0X1EB4, ctx->r1) = ctx->f10.u32l;
    // 0x8001ED40: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8001ED44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED48: swc1        $f16, -0x1EB0($at)
    MEM_W(-0X1EB0, ctx->r1) = ctx->f16.u32l;
    // 0x8001ED4C: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8001ED50: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8001ED54: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED58: swc1        $f18, -0x1EAC($at)
    MEM_W(-0X1EAC, ctx->r1) = ctx->f18.u32l;
    // 0x8001ED5C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8001ED60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED64: swc1        $f4, -0x1EA8($at)
    MEM_W(-0X1EA8, ctx->r1) = ctx->f4.u32l;
    // 0x8001ED68: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8001ED6C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED70: swc1        $f6, -0x1EA4($at)
    MEM_W(-0X1EA4, ctx->r1) = ctx->f6.u32l;
    // 0x8001ED74: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8001ED78: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED7C: swc1        $f8, -0x1EA0($at)
    MEM_W(-0X1EA0, ctx->r1) = ctx->f8.u32l;
    // 0x8001ED80: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8001ED84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED88: swc1        $f10, -0x1E9C($at)
    MEM_W(-0X1E9C, ctx->r1) = ctx->f10.u32l;
    // 0x8001ED8C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x8001ED90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8001ED94: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001ED98: swc1        $f16, -0x1E98($at)
    MEM_W(-0X1E98, ctx->r1) = ctx->f16.u32l;
    // 0x8001ED9C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8001EDA0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EDA4: swc1        $f18, -0x1E94($at)
    MEM_W(-0X1E94, ctx->r1) = ctx->f18.u32l;
    // 0x8001EDA8: lui         $at, 0x447A
    ctx->r1 = S32(0X447A << 16);
    // 0x8001EDAC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8001EDB0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EDB4: swc1        $f4, -0x1E90($at)
    MEM_W(-0X1E90, ctx->r1) = ctx->f4.u32l;
    // 0x8001EDB8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8001EDBC: addiu       $t7, $t7, -0x5A70
    ctx->r15 = ADD32(ctx->r15, -0X5A70);
    // 0x8001EDC0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8001EDC4: addiu       $t6, $t6, -0x5A48
    ctx->r14 = ADD32(ctx->r14, -0X5A48);
    // 0x8001EDC8: addiu       $t0, $t7, 0x24
    ctx->r8 = ADD32(ctx->r15, 0X24);
L_8001EDCC:
    // 0x8001EDCC: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8001EDD0: addiu       $t7, $t7, 0xC
    ctx->r15 = ADD32(ctx->r15, 0XC);
    // 0x8001EDD4: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8001EDD8: lw          $at, -0x8($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X8);
    // 0x8001EDDC: addiu       $t6, $t6, 0xC
    ctx->r14 = ADD32(ctx->r14, 0XC);
    // 0x8001EDE0: sw          $at, -0x8($t6)
    MEM_W(-0X8, ctx->r14) = ctx->r1;
    // 0x8001EDE4: lw          $at, -0x4($t7)
    ctx->r1 = MEM_W(ctx->r15, -0X4);
    // 0x8001EDE8: bne         $t7, $t0, L_8001EDCC
    if (ctx->r15 != ctx->r8) {
        // 0x8001EDEC: sw          $at, -0x4($t6)
        MEM_W(-0X4, ctx->r14) = ctx->r1;
            goto L_8001EDCC;
    }
    // 0x8001EDEC: sw          $at, -0x4($t6)
    MEM_W(-0X4, ctx->r14) = ctx->r1;
    // 0x8001EDF0: lw          $at, 0x0($t7)
    ctx->r1 = MEM_W(ctx->r15, 0X0);
    // 0x8001EDF4: nop

    // 0x8001EDF8: sw          $at, 0x0($t6)
    MEM_W(0X0, ctx->r14) = ctx->r1;
    // 0x8001EDFC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE00: sb          $zero, 0x75BC($at)
    MEM_B(0X75BC, ctx->r1) = 0;
    // 0x8001EE04: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE08: sb          $zero, 0x75C4($at)
    MEM_B(0X75C4, ctx->r1) = 0;
    // 0x8001EE0C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE10: sb          $zero, 0x75CC($at)
    MEM_B(0X75CC, ctx->r1) = 0;
    // 0x8001EE14: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE18: sb          $zero, 0x75D4($at)
    MEM_B(0X75D4, ctx->r1) = 0;
    // 0x8001EE1C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE20: sb          $zero, 0x75DC($at)
    MEM_B(0X75DC, ctx->r1) = 0;
    // 0x8001EE24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE28: sb          $zero, 0x75E4($at)
    MEM_B(0X75E4, ctx->r1) = 0;
    // 0x8001EE2C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE30: sb          $zero, 0x75EC($at)
    MEM_B(0X75EC, ctx->r1) = 0;
    // 0x8001EE34: addiu       $t1, $zero, 0x20
    ctx->r9 = ADD32(0, 0X20);
    // 0x8001EE38: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE3C: sw          $t1, -0x1D94($at)
    MEM_W(-0X1D94, ctx->r1) = ctx->r9;
    // 0x8001EE40: addiu       $t2, $zero, 0x20
    ctx->r10 = ADD32(0, 0X20);
    // 0x8001EE44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001EE48: sw          $t2, -0x1D8C($at)
    MEM_W(-0X1D8C, ctx->r1) = ctx->r10;
    // 0x8001EE4C: b           L_8001EE54
    // 0x8001EE50: nop

        goto L_8001EE54;
    // 0x8001EE50: nop

L_8001EE54:
    // 0x8001EE54: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001EE58: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001EE5C: jr          $ra
    // 0x8001EE60: nop

    return;
    // 0x8001EE60: nop

;}
RECOMP_FUNC void alAuxBusParam(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800416B0: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800416B4: bne         $a1, $at, L_800416D8
    if (ctx->r5 != ctx->r1) {
        // 0x800416B8: lw          $v0, 0x1C($a0)
        ctx->r2 = MEM_W(ctx->r4, 0X1C);
            goto L_800416D8;
    }
    // 0x800416B8: lw          $v0, 0x1C($a0)
    ctx->r2 = MEM_W(ctx->r4, 0X1C);
    // 0x800416BC: lw          $t6, 0x14($a0)
    ctx->r14 = MEM_W(ctx->r4, 0X14);
    // 0x800416C0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800416C4: addu        $t8, $v0, $t7
    ctx->r24 = ADD32(ctx->r2, ctx->r15);
    // 0x800416C8: sw          $a2, 0x0($t8)
    MEM_W(0X0, ctx->r24) = ctx->r6;
    // 0x800416CC: lw          $t9, 0x14($a0)
    ctx->r25 = MEM_W(ctx->r4, 0X14);
    // 0x800416D0: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x800416D4: sw          $t0, 0x14($a0)
    MEM_W(0X14, ctx->r4) = ctx->r8;
L_800416D8:
    // 0x800416D8: jr          $ra
    // 0x800416DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    return;
    // 0x800416DC: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
;}
RECOMP_FUNC void func_800180C4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800180C4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800180C8: sw          $a0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r4;
    // 0x800180CC: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x800180D0: nop

    // 0x800180D4: sltu        $at, $t6, $a1
    ctx->r1 = ctx->r14 < ctx->r5 ? 1 : 0;
    // 0x800180D8: beq         $at, $zero, L_8001818C
    if (ctx->r1 == 0) {
        // 0x800180DC: nop
    
            goto L_8001818C;
    }
    // 0x800180DC: nop

L_800180E0:
    // 0x800180E0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800180E4: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x800180E8: lw          $t8, 0x0($t7)
    ctx->r24 = MEM_W(ctx->r15, 0X0);
    // 0x800180EC: ori         $at, $at, 0x200A
    ctx->r1 = ctx->r1 | 0X200A;
    // 0x800180F0: bne         $t8, $at, L_80018174
    if (ctx->r24 != ctx->r1) {
        // 0x800180F4: nop
    
            goto L_80018174;
    }
    // 0x800180F4: nop

    // 0x800180F8: lw          $t9, 0x8($t7)
    ctx->r25 = MEM_W(ctx->r15, 0X8);
    // 0x800180FC: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x80018100: ori         $at, $at, 0x240A
    ctx->r1 = ctx->r1 | 0X240A;
    // 0x80018104: bne         $t9, $at, L_80018174
    if (ctx->r25 != ctx->r1) {
        // 0x80018108: nop
    
            goto L_80018174;
    }
    // 0x80018108: nop

    // 0x8001810C: lw          $t0, 0x10($t7)
    ctx->r8 = MEM_W(ctx->r15, 0X10);
    // 0x80018110: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x80018114: ori         $at, $at, 0x400A
    ctx->r1 = ctx->r1 | 0X400A;
    // 0x80018118: bne         $t0, $at, L_80018174
    if (ctx->r8 != ctx->r1) {
        // 0x8001811C: nop
    
            goto L_80018174;
    }
    // 0x8001811C: nop

    // 0x80018120: lw          $t1, 0x18($t7)
    ctx->r9 = MEM_W(ctx->r15, 0X18);
    // 0x80018124: lui         $at, 0xBC00
    ctx->r1 = S32(0XBC00 << 16);
    // 0x80018128: ori         $at, $at, 0x440A
    ctx->r1 = ctx->r1 | 0X440A;
    // 0x8001812C: bne         $t1, $at, L_80018174
    if (ctx->r9 != ctx->r1) {
        // 0x80018130: nop
    
            goto L_80018174;
    }
    // 0x80018130: nop

    // 0x80018134: lw          $t2, 0x4($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X4);
    // 0x80018138: nop

    // 0x8001813C: sw          $zero, 0x10($t2)
    MEM_W(0X10, ctx->r10) = 0;
    // 0x80018140: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80018144: nop

    // 0x80018148: sw          $zero, 0x14($t3)
    MEM_W(0X14, ctx->r11) = 0;
    // 0x8001814C: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80018150: nop

    // 0x80018154: sw          $zero, 0x18($t4)
    MEM_W(0X18, ctx->r12) = 0;
    // 0x80018158: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x8001815C: nop

    // 0x80018160: sw          $zero, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = 0;
    // 0x80018164: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80018168: nop

    // 0x8001816C: addiu       $t8, $t6, 0x1C
    ctx->r24 = ADD32(ctx->r14, 0X1C);
    // 0x80018170: sw          $t8, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r24;
L_80018174:
    // 0x80018174: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80018178: nop

    // 0x8001817C: addiu       $t0, $t9, 0x4
    ctx->r8 = ADD32(ctx->r25, 0X4);
    // 0x80018180: sltu        $at, $t0, $a1
    ctx->r1 = ctx->r8 < ctx->r5 ? 1 : 0;
    // 0x80018184: bne         $at, $zero, L_800180E0
    if (ctx->r1 != 0) {
        // 0x80018188: sw          $t0, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r8;
            goto L_800180E0;
    }
    // 0x80018188: sw          $t0, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r8;
L_8001818C:
    // 0x8001818C: b           L_80018194
    // 0x80018190: nop

        goto L_80018194;
    // 0x80018190: nop

L_80018194:
    // 0x80018194: jr          $ra
    // 0x80018198: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80018198: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8001AA60(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001AA60: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x8001AA64: sw          $zero, 0x4($sp)
    MEM_W(0X4, ctx->r29) = 0;
L_8001AA68:
    // 0x8001AA68: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8001AA6C: lw          $t6, -0x1F74($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1F74);
    // 0x8001AA70: nop

    // 0x8001AA74: slti        $at, $t6, 0x100
    ctx->r1 = SIGNED(ctx->r14) < 0X100 ? 1 : 0;
    // 0x8001AA78: bne         $at, $zero, L_8001AA88
    if (ctx->r1 != 0) {
        // 0x8001AA7C: nop
    
            goto L_8001AA88;
    }
    // 0x8001AA7C: nop

    // 0x8001AA80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AA84: sw          $zero, -0x1F74($at)
    MEM_W(-0X1F74, ctx->r1) = 0;
L_8001AA88:
    // 0x8001AA88: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8001AA8C: lw          $t7, -0x1F74($t7)
    ctx->r15 = MEM_W(ctx->r15, -0X1F74);
    // 0x8001AA90: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8001AA94: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8001AA98: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8001AA9C: lw          $t9, -0x3D68($t9)
    ctx->r25 = MEM_W(ctx->r25, -0X3D68);
    // 0x8001AAA0: nop

    // 0x8001AAA4: bne         $t9, $zero, L_8001AAD8
    if (ctx->r25 != 0) {
        // 0x8001AAA8: nop
    
            goto L_8001AAD8;
    }
    // 0x8001AAA8: nop

    // 0x8001AAAC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8001AAB0: lw          $t0, -0x1F74($t0)
    ctx->r8 = MEM_W(ctx->r8, -0X1F74);
    // 0x8001AAB4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AAB8: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x8001AABC: sw          $t1, -0x1F74($at)
    MEM_W(-0X1F74, ctx->r1) = ctx->r9;
    // 0x8001AAC0: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001AAC4: lw          $v0, -0x1F74($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1F74);
    // 0x8001AAC8: b           L_8001AB28
    // 0x8001AACC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8001AB28;
    // 0x8001AACC: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8001AAD0: b           L_8001AAEC
    // 0x8001AAD4: nop

        goto L_8001AAEC;
    // 0x8001AAD4: nop

L_8001AAD8:
    // 0x8001AAD8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8001AADC: lw          $t2, -0x1F74($t2)
    ctx->r10 = MEM_W(ctx->r10, -0X1F74);
    // 0x8001AAE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AAE4: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8001AAE8: sw          $t3, -0x1F74($at)
    MEM_W(-0X1F74, ctx->r1) = ctx->r11;
L_8001AAEC:
    // 0x8001AAEC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x8001AAF0: nop

    // 0x8001AAF4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8001AAF8: slti        $at, $t5, 0x100
    ctx->r1 = SIGNED(ctx->r13) < 0X100 ? 1 : 0;
    // 0x8001AAFC: bne         $at, $zero, L_8001AA68
    if (ctx->r1 != 0) {
        // 0x8001AB00: sw          $t5, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r13;
            goto L_8001AA68;
    }
    // 0x8001AB00: sw          $t5, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r13;
    // 0x8001AB04: addiu       $t6, $zero, 0x100
    ctx->r14 = ADD32(0, 0X100);
    // 0x8001AB08: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8001AB0C: sw          $t6, -0x1F74($at)
    MEM_W(-0X1F74, ctx->r1) = ctx->r14;
    // 0x8001AB10: lui         $v0, 0x8017
    ctx->r2 = S32(0X8017 << 16);
    // 0x8001AB14: lw          $v0, -0x1F74($v0)
    ctx->r2 = MEM_W(ctx->r2, -0X1F74);
    // 0x8001AB18: b           L_8001AB28
    // 0x8001AB1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
        goto L_8001AB28;
    // 0x8001AB1C: addiu       $v0, $v0, -0x1
    ctx->r2 = ADD32(ctx->r2, -0X1);
    // 0x8001AB20: b           L_8001AB28
    // 0x8001AB24: nop

        goto L_8001AB28;
    // 0x8001AB24: nop

L_8001AB28:
    // 0x8001AB28: jr          $ra
    // 0x8001AB2C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8001AB2C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800080D8(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800080D8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800080DC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800080E0: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x800080E4: lw          $t6, -0x5CF4($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X5CF4);
    // 0x800080E8: nop

    // 0x800080EC: sll         $t7, $t6, 4
    ctx->r15 = S32(ctx->r14 << 4);
    // 0x800080F0: sw          $t7, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r15;
    // 0x800080F4: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x800080F8: jal         0x8000D84C
    // 0x800080FC: nop

    h_alHeapAlloc(rdram, ctx);
        goto after_0;
    // 0x800080FC: nop

    after_0:
    // 0x80008100: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008104: sw          $v0, 0x2D88($at)
    MEM_W(0X2D88, ctx->r1) = ctx->r2;
    // 0x80008108: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000810C: lw          $t8, 0x2D88($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X2D88);
    // 0x80008110: nop

    // 0x80008114: bne         $t8, $zero, L_80008124
    if (ctx->r24 != 0) {
        // 0x80008118: nop
    
            goto L_80008124;
    }
    // 0x80008118: nop

    // 0x8000811C: b           L_800081A0
    // 0x80008120: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_800081A0;
    // 0x80008120: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80008124:
    // 0x80008124: lui         $at, 0x4248
    ctx->r1 = S32(0X4248 << 16);
    // 0x80008128: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8000812C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008130: swc1        $f4, 0x2D8C($at)
    MEM_W(0X2D8C, ctx->r1) = ctx->f4.u32l;
    // 0x80008134: lui         $at, 0x43FA
    ctx->r1 = S32(0X43FA << 16);
    // 0x80008138: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8000813C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008140: swc1        $f6, 0x2D90($at)
    MEM_W(0X2D90, ctx->r1) = ctx->f6.u32l;
    // 0x80008144: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80008148: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000814C: swc1        $f8, 0x2D94($at)
    MEM_W(0X2D94, ctx->r1) = ctx->f8.u32l;
    // 0x80008150: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80008154: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008158: swc1        $f10, 0x2D98($at)
    MEM_W(0X2D98, ctx->r1) = ctx->f10.u32l;
    // 0x8000815C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80008160: sh          $zero, 0x2D9C($at)
    MEM_H(0X2D9C, ctx->r1) = 0;
    // 0x80008164: addiu       $t9, $zero, 0xA
    ctx->r25 = ADD32(0, 0XA);
    // 0x80008168: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000816C: sh          $t9, 0x2D9E($at)
    MEM_H(0X2D9E, ctx->r1) = ctx->r25;
    // 0x80008170: lui         $at, 0x4499
    ctx->r1 = S32(0X4499 << 16);
    // 0x80008174: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80008178: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000817C: swc1        $f16, 0x2DA0($at)
    MEM_W(0X2DA0, ctx->r1) = ctx->f16.u32l;
    // 0x80008180: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80008184: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80008188: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000818C: swc1        $f18, 0x2DA4($at)
    MEM_W(0X2DA4, ctx->r1) = ctx->f18.u32l;
    // 0x80008190: b           L_800081A0
    // 0x80008194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_800081A0;
    // 0x80008194: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80008198: b           L_800081A0
    // 0x8000819C: nop

        goto L_800081A0;
    // 0x8000819C: nop

L_800081A0:
    // 0x800081A0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800081A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800081A8: jr          $ra
    // 0x800081AC: nop

    return;
    // 0x800081AC: nop

;}
RECOMP_FUNC void h_alHeapAlloc(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D84C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8000D850: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000D854: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8000D858: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000D85C: lw          $t6, 0x5408($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5408);
    // 0x8000D860: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8000D864: lw          $t7, 0x4($t6)
    ctx->r15 = MEM_W(ctx->r14, 0X4);
    // 0x8000D868: lw          $t8, 0x0($t6)
    ctx->r24 = MEM_W(ctx->r14, 0X0);
    // 0x8000D86C: lw          $t0, 0x8($t6)
    ctx->r8 = MEM_W(ctx->r14, 0X8);
    // 0x8000D870: subu        $t9, $t7, $t8
    ctx->r25 = SUB32(ctx->r15, ctx->r24);
    // 0x8000D874: subu        $t1, $t0, $t9
    ctx->r9 = SUB32(ctx->r8, ctx->r25);
    // 0x8000D878: slt         $at, $t1, $t2
    ctx->r1 = SIGNED(ctx->r9) < SIGNED(ctx->r10) ? 1 : 0;
    // 0x8000D87C: beq         $at, $zero, L_8000D8A0
    if (ctx->r1 == 0) {
        // 0x8000D880: nop
    
            goto L_8000D8A0;
    }
    // 0x8000D880: nop

    // 0x8000D884: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000D888: lw          $t3, 0x3160($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X3160);
    // 0x8000D88C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D890: ori         $t4, $t3, 0x1
    ctx->r12 = ctx->r11 | 0X1;
    // 0x8000D894: sw          $t4, 0x3160($at)
    MEM_W(0X3160, ctx->r1) = ctx->r12;
    // 0x8000D898: b           L_8000D8D0
    // 0x8000D89C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000D8D0;
    // 0x8000D89C: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000D8A0:
    // 0x8000D8A0: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x8000D8A4: lui         $a2, 0x8005
    ctx->r6 = S32(0X8005 << 16);
    // 0x8000D8A8: lw          $a2, 0x5408($a2)
    ctx->r6 = MEM_W(ctx->r6, 0X5408);
    // 0x8000D8AC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8000D8B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000D8B4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    // 0x8000D8B8: jal         0x80035870
    // 0x8000D8BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    alHeapDBAlloc(rdram, ctx);
        goto after_0;
    // 0x8000D8BC: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    after_0:
    // 0x8000D8C0: b           L_8000D8D0
    // 0x8000D8C4: nop

        goto L_8000D8D0;
    // 0x8000D8C4: nop

    // 0x8000D8C8: b           L_8000D8D0
    // 0x8000D8CC: nop

        goto L_8000D8D0;
    // 0x8000D8CC: nop

L_8000D8D0:
    // 0x8000D8D0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000D8D4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8000D8D8: jr          $ra
    // 0x8000D8DC: nop

    return;
    // 0x8000D8DC: nop

;}
RECOMP_FUNC void __amDmaNew(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000E070: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000E074: addiu       $t6, $t6, 0x5410
    ctx->r14 = ADD32(ctx->r14, 0X5410);
    // 0x8000E078: sw          $t6, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r14;
    // 0x8000E07C: lui         $v0, 0x8001
    ctx->r2 = S32(0X8001 << 16);
    // 0x8000E080: jr          $ra
    // 0x8000E084: addiu       $v0, $v0, -0x22C0
    ctx->r2 = ADD32(ctx->r2, -0X22C0);
    return;
    // 0x8000E084: addiu       $v0, $v0, -0x22C0
    ctx->r2 = ADD32(ctx->r2, -0X22C0);
    // 0x8000E088: jr          $ra
    // 0x8000E08C: nop

    return;
    // 0x8000E08C: nop

    // 0x8000E090: jr          $ra
    // 0x8000E094: nop

    return;
    // 0x8000E094: nop

;}
RECOMP_FUNC void __amMain(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000D8E0: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8000D8E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8000D8E8: sw          $a0, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r4;
    // 0x8000D8EC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8000D8F0: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
    // 0x8000D8F4: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8000D8F8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8000D8FC: nop

    // 0x8000D900: bne         $t6, $zero, L_8000DA48
    if (ctx->r14 != 0) {
        // 0x8000D904: nop
    
            goto L_8000DA48;
    }
    // 0x8000D904: nop

L_8000D908:
    // 0x8000D908: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D90C: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    // 0x8000D910: addiu       $a0, $a0, 0x1C8
    ctx->r4 = ADD32(ctx->r4, 0X1C8);
    // 0x8000D914: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8000D918: jal         0x80031880
    // 0x8000D91C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_0;
    // 0x8000D91C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_0:
    // 0x8000D920: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8000D924: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8000D928: lh          $s0, 0x0($t7)
    ctx->r16 = MEM_H(ctx->r15, 0X0);
    // 0x8000D92C: nop

    // 0x8000D930: beq         $s0, $at, L_8000D958
    if (ctx->r16 == ctx->r1) {
        // 0x8000D934: nop
    
            goto L_8000D958;
    }
    // 0x8000D934: nop

    // 0x8000D938: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x8000D93C: beq         $s0, $at, L_8000DA08
    if (ctx->r16 == ctx->r1) {
        // 0x8000D940: nop
    
            goto L_8000DA08;
    }
    // 0x8000D940: nop

    // 0x8000D944: addiu       $at, $zero, 0xA
    ctx->r1 = ADD32(0, 0XA);
    // 0x8000D948: beq         $s0, $at, L_8000DA28
    if (ctx->r16 == ctx->r1) {
        // 0x8000D94C: nop
    
            goto L_8000DA28;
    }
    // 0x8000D94C: nop

    // 0x8000D950: b           L_8000DA38
    // 0x8000D954: nop

        goto L_8000DA38;
    // 0x8000D954: nop

L_8000D958:
    // 0x8000D958: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000D95C: lw          $t8, 0x5418($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5418);
    // 0x8000D960: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8000D964: divu        $zero, $t8, $at
    lo = S32(U32(ctx->r24) / U32(ctx->r1)); hi = S32(U32(ctx->r24) % U32(ctx->r1));
    // 0x8000D968: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D96C: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8000D970: mfhi        $t9
    ctx->r25 = hi;
    // 0x8000D974: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8000D978: addu        $a0, $a0, $t0
    ctx->r4 = ADD32(ctx->r4, ctx->r8);
    // 0x8000D97C: lw          $a0, 0x3188($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3188);
    // 0x8000D980: jal         0x8000DA70
    // 0x8000D984: nop

    __amHandleFrameMsg(rdram, ctx);
        goto after_1;
    // 0x8000D984: nop

    after_1:
    // 0x8000D988: sw          $v0, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r2;
    // 0x8000D98C: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8000D990: nop

    // 0x8000D994: beq         $t1, $zero, L_8000D9EC
    if (ctx->r9 == 0) {
        // 0x8000D998: nop
    
            goto L_8000D9EC;
    }
    // 0x8000D998: nop

    // 0x8000D99C: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000D9A0: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    // 0x8000D9A4: addiu       $a0, $a0, 0x200
    ctx->r4 = ADD32(ctx->r4, 0X200);
    // 0x8000D9A8: addiu       $a1, $sp, 0x2C
    ctx->r5 = ADD32(ctx->r29, 0X2C);
    // 0x8000D9AC: jal         0x80031880
    // 0x8000D9B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osRecvMesg_recomp(rdram, ctx);
        goto after_2;
    // 0x8000D9B0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_2:
    // 0x8000D9B4: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8000D9B8: nop

    // 0x8000D9BC: lw          $a0, 0x4($t2)
    ctx->r4 = MEM_W(ctx->r10, 0X4);
    // 0x8000D9C0: jal         0x8000DD24
    // 0x8000D9C4: nop

    static_0_8000DD24(rdram, ctx);
        goto after_3;
    // 0x8000D9C4: nop

    after_3:
    // 0x8000D9C8: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8000D9CC: nop

    // 0x8000D9D0: lw          $t4, 0x4($t3)
    ctx->r12 = MEM_W(ctx->r11, 0X4);
    // 0x8000D9D4: nop

    // 0x8000D9D8: sw          $t4, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r12;
    // 0x8000D9DC: jal         0x80003C94
    // 0x8000D9E0: nop

    func_80003C94(rdram, ctx);
        goto after_4;
    // 0x8000D9E0: nop

    after_4:
    // 0x8000D9E4: jal         0x80007BC4
    // 0x8000D9E8: nop

    func_80007BC4(rdram, ctx);
        goto after_5;
    // 0x8000D9E8: nop

    after_5:
L_8000D9EC:
    // 0x8000D9EC: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8000D9F0: lw          $t5, 0x543C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X543C);
    // 0x8000D9F4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000D9F8: addiu       $t6, $t5, 0x1
    ctx->r14 = ADD32(ctx->r13, 0X1);
    // 0x8000D9FC: sw          $t6, 0x543C($at)
    MEM_W(0X543C, ctx->r1) = ctx->r14;
    // 0x8000DA00: b           L_8000DA38
    // 0x8000DA04: nop

        goto L_8000DA38;
    // 0x8000DA04: nop

L_8000DA08:
    // 0x8000DA08: jal         0x80003FA0
    // 0x8000DA0C: nop

    func_80003FA0(rdram, ctx);
        goto after_6;
    // 0x8000DA0C: nop

    after_6:
    // 0x8000DA10: jal         0x8000ABB4
    // 0x8000DA14: nop

    func_8000ABB4(rdram, ctx);
        goto after_7;
    // 0x8000DA14: nop

    after_7:
    // 0x8000DA18: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x8000DA1C: sw          $t7, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r15;
    // 0x8000DA20: b           L_8000DA38
    // 0x8000DA24: nop

        goto L_8000DA38;
    // 0x8000DA24: nop

L_8000DA28:
    // 0x8000DA28: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x8000DA2C: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
    // 0x8000DA30: b           L_8000DA38
    // 0x8000DA34: nop

        goto L_8000DA38;
    // 0x8000DA34: nop

L_8000DA38:
    // 0x8000DA38: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8000DA3C: nop

    // 0x8000DA40: beq         $t9, $zero, L_8000D908
    if (ctx->r25 == 0) {
        // 0x8000DA44: nop
    
            goto L_8000D908;
    }
    // 0x8000DA44: nop

L_8000DA48:
    // 0x8000DA48: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000DA4C: addiu       $a0, $a0, 0x3180
    ctx->r4 = ADD32(ctx->r4, 0X3180);
    // 0x8000DA50: jal         0x80035804
    // 0x8000DA54: addiu       $a0, $a0, 0x238
    ctx->r4 = ADD32(ctx->r4, 0X238);
    alClose(rdram, ctx);
        goto after_8;
    // 0x8000DA54: addiu       $a0, $a0, 0x238
    ctx->r4 = ADD32(ctx->r4, 0X238);
    after_8:
    // 0x8000DA58: b           L_8000DA60
    // 0x8000DA5C: nop

        goto L_8000DA60;
    // 0x8000DA5C: nop

L_8000DA60:
    // 0x8000DA60: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DA64: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8000DA68: jr          $ra
    // 0x8000DA6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8000DA6C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void __seqpVoiceHandler(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80034BBC: addiu       $sp, $sp, -0x108
    ctx->r29 = ADD32(ctx->r29, -0X108);
    // 0x80034BC0: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x80034BC4: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x80034BC8: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x80034BCC: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x80034BD0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x80034BD4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034BD8: or          $s6, $a0, $zero
    ctx->r22 = ctx->r4 | 0;
    // 0x80034BDC: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x80034BE0: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80034BE4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x80034BE8: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80034BEC: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x80034BF0: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80034BF4: ldc1        $f20, -0x3CC0($at)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r1, -0X3CC0);
    // 0x80034BF8: addiu       $s4, $a0, 0x28
    ctx->r20 = ADD32(ctx->r4, 0X28);
    // 0x80034BFC: addiu       $s7, $a0, 0x14
    ctx->r23 = ADD32(ctx->r4, 0X14);
    // 0x80034C00: addiu       $fp, $zero, 0x1
    ctx->r30 = ADD32(0, 0X1);
L_80034C04:
    // 0x80034C04: lh          $v0, 0x28($s6)
    ctx->r2 = MEM_H(ctx->r22, 0X28);
    // 0x80034C08: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80034C0C: addiu       $t6, $zero, 0x5
    ctx->r14 = ADD32(0, 0X5);
    // 0x80034C10: bne         $v0, $at, L_80034C30
    if (ctx->r2 != ctx->r1) {
        // 0x80034C14: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_80034C30;
    }
    // 0x80034C14: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80034C18: sh          $t6, 0xF4($sp)
    MEM_H(0XF4, ctx->r29) = ctx->r14;
    // 0x80034C1C: lw          $a2, 0x48($s6)
    ctx->r6 = MEM_W(ctx->r22, 0X48);
    // 0x80034C20: jal         0x8003E80C
    // 0x80034C24: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    alEvtqPostEvent(rdram, ctx);
        goto after_0;
    // 0x80034C24: addiu       $a1, $sp, 0xF4
    ctx->r5 = ADD32(ctx->r29, 0XF4);
    after_0:
    // 0x80034C28: b           L_800350B4
    // 0x80034C2C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_800350B4;
    // 0x80034C2C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80034C30:
    // 0x80034C30: lw          $s5, 0x2C($s6)
    ctx->r21 = MEM_W(ctx->r22, 0X2C);
    // 0x80034C34: sltiu       $at, $v0, 0x9
    ctx->r1 = ctx->r2 < 0X9 ? 1 : 0;
    // 0x80034C38: beq         $at, $zero, L_800350B0
    if (ctx->r1 == 0) {
        // 0x80034C3C: lw          $s1, 0x1C($s5)
        ctx->r17 = MEM_W(ctx->r21, 0X1C);
            goto L_800350B0;
    }
    // 0x80034C3C: lw          $s1, 0x1C($s5)
    ctx->r17 = MEM_W(ctx->r21, 0X1C);
    // 0x80034C40: sll         $t7, $v0, 2
    ctx->r15 = S32(ctx->r2 << 2);
    // 0x80034C44: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034C48: addu        $at, $at, $t7
    gpr jr_addend_80034C50 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80034C4C: lw          $t7, -0x3CB8($at)
    ctx->r15 = ADD32(ctx->r1, -0X3CB8);
    // 0x80034C50: jr          $t7
    // 0x80034C54: nop

    switch (jr_addend_80034C50 >> 2) {
        case 0: goto L_80034C58; break;
        case 1: goto L_80034DC0; break;
        case 2: goto L_80034E8C; break;
        case 3: goto L_80034F70; break;
        case 4: goto L_80034EF4; break;
        case 5: goto L_800350B0; break;
        case 6: goto L_80034FD4; break;
        case 7: goto L_80035080; break;
        case 8: goto L_80034F48; break;
        default: switch_error(__func__, 0x80034C50, 0x8004C348);
    }
    // 0x80034C54: nop

L_80034C58:
    // 0x80034C58: lw          $t8, 0x28($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X28);
    // 0x80034C5C: bnel        $t8, $zero, L_800350B4
    if (ctx->r24 != 0) {
        // 0x80034C60: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_800350B4;
    }
    goto skip_0;
    // 0x80034C60: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_0:
    // 0x80034C64: beq         $s1, $zero, L_800350B0
    if (ctx->r17 == 0) {
        // 0x80034C68: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800350B0;
    }
    // 0x80034C68: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034C6C: sh          $zero, 0xE2($sp)
    MEM_H(0XE2, ctx->r29) = 0;
    // 0x80034C70: lh          $t9, 0x20($s5)
    ctx->r25 = MEM_H(ctx->r21, 0X20);
    // 0x80034C74: sb          $zero, 0xE4($sp)
    MEM_B(0XE4, ctx->r29) = 0;
    // 0x80034C78: addiu       $a2, $sp, 0xE0
    ctx->r6 = ADD32(ctx->r29, 0XE0);
    // 0x80034C7C: sh          $t9, 0xE0($sp)
    MEM_H(0XE0, ctx->r29) = ctx->r25;
    // 0x80034C80: jal         0x8003EDC8
    // 0x80034C84: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    alSynAllocVoice(rdram, ctx);
        goto after_1;
    // 0x80034C84: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    after_1:
    // 0x80034C88: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80034C8C: lh          $t7, 0x2C($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X2C);
    // 0x80034C90: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80034C94: lbu         $t6, 0xC($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XC);
    // 0x80034C98: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x80034C9C: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034CA0: mflo        $t8
    ctx->r24 = lo;
    // 0x80034CA4: nop

    // 0x80034CA8: nop

    // 0x80034CAC: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x80034CB0: mflo        $t9
    ctx->r25 = lo;
    // 0x80034CB4: sh          $t9, 0xBA($sp)
    MEM_H(0XBA, ctx->r29) = ctx->r25;
    // 0x80034CB8: lbu         $t7, 0xC($s1)
    ctx->r15 = MEM_BU(ctx->r17, 0XC);
    // 0x80034CBC: lbu         $t6, 0x2E($s5)
    ctx->r14 = MEM_BU(ctx->r21, 0X2E);
    // 0x80034CC0: addu        $v1, $t6, $t7
    ctx->r3 = ADD32(ctx->r14, ctx->r15);
    // 0x80034CC4: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80034CC8: sll         $t8, $v1, 16
    ctx->r24 = S32(ctx->r3 << 16);
    // 0x80034CCC: sra         $v1, $t8, 16
    ctx->r3 = S32(SIGNED(ctx->r24) >> 16);
    // 0x80034CD0: bgtzl       $v1, L_80034CE0
    if (SIGNED(ctx->r3) > 0) {
        // 0x80034CD4: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_80034CE0;
    }
    goto skip_1;
    // 0x80034CD4: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_1:
    // 0x80034CD8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80034CDC: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_80034CE0:
    // 0x80034CE0: beq         $at, $zero, L_80034CF0
    if (ctx->r1 == 0) {
        // 0x80034CE4: nop
    
            goto L_80034CF0;
    }
    // 0x80034CE4: nop

    // 0x80034CE8: b           L_80034CF0
    // 0x80034CEC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
        goto L_80034CF0;
    // 0x80034CEC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
L_80034CF0:
    // 0x80034CF0: lwc1        $f4, 0x24($s5)
    ctx->f4.u32l = MEM_W(ctx->r21, 0X24);
    // 0x80034CF4: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034CF8: swc1        $f4, 0xD0($sp)
    MEM_W(0XD0, ctx->r29) = ctx->f4.u32l;
    // 0x80034CFC: lw          $s0, 0x0($a3)
    ctx->r16 = MEM_W(ctx->r7, 0X0);
    // 0x80034D00: lw          $a2, 0x8($s1)
    ctx->r6 = MEM_W(ctx->r17, 0X8);
    // 0x80034D04: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034D08: jal         0x8003F0E0
    // 0x80034D0C: sb          $t0, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r8;
    alSynStartVoice(rdram, ctx);
        goto after_2;
    // 0x80034D0C: sb          $t0, 0xD7($sp)
    MEM_B(0XD7, ctx->r29) = ctx->r8;
    after_2:
    // 0x80034D10: lbu         $a2, 0xD7($sp)
    ctx->r6 = MEM_BU(ctx->r29, 0XD7);
    // 0x80034D14: sw          $fp, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r30;
    // 0x80034D18: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034D1C: jal         0x8003EF10
    // 0x80034D20: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    alSynSetPan(rdram, ctx);
        goto after_3;
    // 0x80034D20: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_3:
    // 0x80034D24: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034D28: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034D2C: lh          $a2, 0xBA($sp)
    ctx->r6 = MEM_H(ctx->r29, 0XBA);
    // 0x80034D30: jal         0x8003EBB0
    // 0x80034D34: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    alSynSetVol(rdram, ctx);
        goto after_4;
    // 0x80034D34: or          $a3, $s0, $zero
    ctx->r7 = ctx->r16 | 0;
    after_4:
    // 0x80034D38: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034D3C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034D40: jal         0x8003EC50
    // 0x80034D44: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    alSynSetPitch(rdram, ctx);
        goto after_5;
    // 0x80034D44: lw          $a2, 0xD0($sp)
    ctx->r6 = MEM_W(ctx->r29, 0XD0);
    after_5:
    // 0x80034D48: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034D4C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034D50: jal         0x8003EFA0
    // 0x80034D54: lbu         $a2, 0x2F($s5)
    ctx->r6 = MEM_BU(ctx->r21, 0X2F);
    alSynSetFXMix(rdram, ctx);
        goto after_6;
    // 0x80034D54: lbu         $a2, 0x2F($s5)
    ctx->r6 = MEM_BU(ctx->r21, 0X2F);
    after_6:
    // 0x80034D58: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80034D5C: sh          $t6, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r14;
    // 0x80034D60: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x80034D64: lw          $t7, 0x0($s1)
    ctx->r15 = MEM_W(ctx->r17, 0X0);
    // 0x80034D68: lwc1        $f2, 0x24($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X24);
    // 0x80034D6C: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80034D70: lw          $v0, 0x0($t7)
    ctx->r2 = MEM_W(ctx->r15, 0X0);
    // 0x80034D74: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80034D78: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80034D7C: nop

    // 0x80034D80: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80034D84: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80034D88: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x80034D8C: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x80034D90: nop

    // 0x80034D94: bc1fl       L_80034DA8
    if (!c1cs) {
        // 0x80034D98: trunc.w.d   $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
            goto L_80034DA8;
    }
    goto skip_2;
    // 0x80034D98: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    skip_2:
    // 0x80034D9C: b           L_80034DB0
    // 0x80034DA0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
        goto L_80034DB0;
    // 0x80034DA0: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80034DA4: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
L_80034DA8:
    // 0x80034DA8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80034DAC: nop

L_80034DB0:
    // 0x80034DB0: jal         0x8003E80C
    // 0x80034DB4: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    alEvtqPostEvent(rdram, ctx);
        goto after_7;
    // 0x80034DB4: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    after_7:
    // 0x80034DB8: b           L_800350B4
    // 0x80034DBC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_800350B4;
    // 0x80034DBC: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80034DC0:
    // 0x80034DC0: lw          $t9, 0x28($s5)
    ctx->r25 = MEM_W(ctx->r21, 0X28);
    // 0x80034DC4: bnel        $fp, $t9, L_800350B4
    if (ctx->r30 != ctx->r25) {
        // 0x80034DC8: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_800350B4;
    }
    goto skip_3;
    // 0x80034DC8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_3:
    // 0x80034DCC: beq         $s1, $zero, L_800350B0
    if (ctx->r17 == 0) {
        // 0x80034DD0: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800350B0;
    }
    // 0x80034DD0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034DD4: lw          $t6, 0x0($s1)
    ctx->r14 = MEM_W(ctx->r17, 0X0);
    // 0x80034DD8: lwc1        $f2, 0x24($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X24);
    // 0x80034DDC: lui         $a3, 0x7FFF
    ctx->r7 = S32(0X7FFF << 16);
    // 0x80034DE0: lw          $v0, 0x8($t6)
    ctx->r2 = MEM_W(ctx->r14, 0X8);
    // 0x80034DE4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80034DE8: mtc1        $v0, $f6
    ctx->f6.u32l = ctx->r2;
    // 0x80034DEC: nop

    // 0x80034DF0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80034DF4: div.s       $f10, $f8, $f2
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f10.fl = DIV_S(ctx->f8.fl, ctx->f2.fl);
    // 0x80034DF8: cvt.d.s     $f0, $f10
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f0.d = CVT_D_S(ctx->f10.fl);
    // 0x80034DFC: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x80034E00: nop

    // 0x80034E04: bc1fl       L_80034E18
    if (!c1cs) {
        // 0x80034E08: trunc.w.d   $f4, $f0
        CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
            goto L_80034E18;
    }
    goto skip_4;
    // 0x80034E08: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
    skip_4:
    // 0x80034E0C: b           L_80034E20
    // 0x80034E10: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
        goto L_80034E20;
    // 0x80034E10: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80034E14: trunc.w.d   $f4, $f0
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 0);
    ctx->f4.u32l = TRUNC_W_D(ctx->f0.d);
L_80034E18:
    // 0x80034E18: mfc1        $a3, $f4
    ctx->r7 = (int32_t)ctx->f4.u32l;
    // 0x80034E1C: nop

L_80034E20:
    // 0x80034E20: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80034E24: jal         0x8003EBB0
    // 0x80034E28: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    alSynSetVol(rdram, ctx);
        goto after_8;
    // 0x80034E28: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    after_8:
    // 0x80034E2C: beq         $s0, $zero, L_80034E5C
    if (ctx->r16 == 0) {
        // 0x80034E30: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_80034E5C;
    }
    // 0x80034E30: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034E34: addiu       $t8, $zero, 0x7
    ctx->r24 = ADD32(0, 0X7);
    // 0x80034E38: sh          $t8, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r24;
    // 0x80034E3C: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x80034E40: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x80034E44: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x80034E48: jal         0x8003E80C
    // 0x80034E4C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_9;
    // 0x80034E4C: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_9:
    // 0x80034E50: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80034E54: b           L_800350B0
    // 0x80034E58: sw          $t9, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r25;
        goto L_800350B0;
    // 0x80034E58: sw          $t9, 0x28($s5)
    MEM_W(0X28, ctx->r21) = ctx->r25;
L_80034E5C:
    // 0x80034E5C: jal         0x8003EA80
    // 0x80034E60: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    alSynStopVoice(rdram, ctx);
        goto after_10;
    // 0x80034E60: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    after_10:
    // 0x80034E64: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034E68: jal         0x8003EB00
    // 0x80034E6C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_11;
    // 0x80034E6C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_11:
    // 0x80034E70: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x80034E74: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x80034E78: jal         0x80034B30
    // 0x80034E7C: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    static_0_80034B30(rdram, ctx);
        goto after_12;
    // 0x80034E7C: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    after_12:
    // 0x80034E80: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x80034E84: b           L_800350B0
    // 0x80034E88: sw          $zero, 0x28($s5)
    MEM_W(0X28, ctx->r21) = 0;
        goto L_800350B0;
    // 0x80034E88: sw          $zero, 0x28($s5)
    MEM_W(0X28, ctx->r21) = 0;
L_80034E8C:
    // 0x80034E8C: lw          $t7, 0x28($s5)
    ctx->r15 = MEM_W(ctx->r21, 0X28);
    // 0x80034E90: lbu         $t6, 0x8($s4)
    ctx->r14 = MEM_BU(ctx->r20, 0X8);
    // 0x80034E94: bne         $fp, $t7, L_800350B0
    if (ctx->r30 != ctx->r15) {
        // 0x80034E98: sb          $t6, 0x2E($s5)
        MEM_B(0X2E, ctx->r21) = ctx->r14;
            goto L_800350B0;
    }
    // 0x80034E98: sb          $t6, 0x2E($s5)
    MEM_B(0X2E, ctx->r21) = ctx->r14;
    // 0x80034E9C: beq         $s1, $zero, L_800350B0
    if (ctx->r17 == 0) {
        // 0x80034EA0: or          $a1, $s5, $zero
        ctx->r5 = ctx->r21 | 0;
            goto L_800350B0;
    }
    // 0x80034EA0: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034EA4: lbu         $t9, 0xC($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0XC);
    // 0x80034EA8: andi        $t8, $t6, 0xFF
    ctx->r24 = ctx->r14 & 0XFF;
    // 0x80034EAC: addiu       $t0, $zero, 0x7F
    ctx->r8 = ADD32(0, 0X7F);
    // 0x80034EB0: addu        $v1, $t8, $t9
    ctx->r3 = ADD32(ctx->r24, ctx->r25);
    // 0x80034EB4: addiu       $v1, $v1, -0x40
    ctx->r3 = ADD32(ctx->r3, -0X40);
    // 0x80034EB8: sll         $t6, $v1, 16
    ctx->r14 = S32(ctx->r3 << 16);
    // 0x80034EBC: sra         $v1, $t6, 16
    ctx->r3 = S32(SIGNED(ctx->r14) >> 16);
    // 0x80034EC0: bgtzl       $v1, L_80034ED0
    if (SIGNED(ctx->r3) > 0) {
        // 0x80034EC4: slti        $at, $v1, 0x7F
        ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
            goto L_80034ED0;
    }
    goto skip_5;
    // 0x80034EC4: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
    skip_5:
    // 0x80034EC8: or          $v1, $zero, $zero
    ctx->r3 = 0 | 0;
    // 0x80034ECC: slti        $at, $v1, 0x7F
    ctx->r1 = SIGNED(ctx->r3) < 0X7F ? 1 : 0;
L_80034ED0:
    // 0x80034ED0: beq         $at, $zero, L_80034EE0
    if (ctx->r1 == 0) {
        // 0x80034ED4: nop
    
            goto L_80034EE0;
    }
    // 0x80034ED4: nop

    // 0x80034ED8: b           L_80034EE0
    // 0x80034EDC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
        goto L_80034EE0;
    // 0x80034EDC: andi        $t0, $v1, 0xFF
    ctx->r8 = ctx->r3 & 0XFF;
L_80034EE0:
    // 0x80034EE0: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034EE4: jal         0x8003EF10
    // 0x80034EE8: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    alSynSetPan(rdram, ctx);
        goto after_13;
    // 0x80034EE8: andi        $a2, $t0, 0xFF
    ctx->r6 = ctx->r8 & 0XFF;
    after_13:
    // 0x80034EEC: b           L_800350B4
    // 0x80034EF0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_800350B4;
    // 0x80034EF0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80034EF4:
    // 0x80034EF4: lwc1        $f0, 0x8($s4)
    ctx->f0.u32l = MEM_W(ctx->r20, 0X8);
    // 0x80034EF8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034EFC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034F00: swc1        $f0, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->f0.u32l;
    // 0x80034F04: ldc1        $f8, -0x3C90($at)
    CHECK_FR(ctx, 8);
    ctx->f8.u64 = LD(ctx->r1, -0X3C90);
    // 0x80034F08: cvt.d.s     $f6, $f0
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 0);
    NAN_CHECK(ctx->f0.fl); 
    ctx->f6.d = CVT_D_S(ctx->f0.fl);
    // 0x80034F0C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80034F10: c.lt.d      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.d < ctx->f8.d;
    // 0x80034F14: nop

    // 0x80034F18: bc1fl       L_80034F2C
    if (!c1cs) {
        // 0x80034F1C: lw          $t8, 0x28($s5)
        ctx->r24 = MEM_W(ctx->r21, 0X28);
            goto L_80034F2C;
    }
    goto skip_6;
    // 0x80034F1C: lw          $t8, 0x28($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X28);
    skip_6:
    // 0x80034F20: lwc1        $f10, -0x3C88($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X3C88);
    // 0x80034F24: swc1        $f10, 0x24($s5)
    MEM_W(0X24, ctx->r21) = ctx->f10.u32l;
    // 0x80034F28: lw          $t8, 0x28($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X28);
L_80034F2C:
    // 0x80034F2C: bnel        $fp, $t8, L_800350B4
    if (ctx->r30 != ctx->r24) {
        // 0x80034F30: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_800350B4;
    }
    goto skip_7;
    // 0x80034F30: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_7:
    // 0x80034F34: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034F38: jal         0x8003EC50
    // 0x80034F3C: lw          $a2, 0x24($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X24);
    alSynSetPitch(rdram, ctx);
        goto after_14;
    // 0x80034F3C: lw          $a2, 0x24($s5)
    ctx->r6 = MEM_W(ctx->r21, 0X24);
    after_14:
    // 0x80034F40: b           L_800350B4
    // 0x80034F44: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_800350B4;
    // 0x80034F44: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80034F48:
    // 0x80034F48: lw          $t6, 0x28($s5)
    ctx->r14 = MEM_W(ctx->r21, 0X28);
    // 0x80034F4C: lbu         $t9, 0x8($s4)
    ctx->r25 = MEM_BU(ctx->r20, 0X8);
    // 0x80034F50: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034F54: bne         $fp, $t6, L_800350B0
    if (ctx->r30 != ctx->r14) {
        // 0x80034F58: sb          $t9, 0x2F($s5)
        MEM_B(0X2F, ctx->r21) = ctx->r25;
            goto L_800350B0;
    }
    // 0x80034F58: sb          $t9, 0x2F($s5)
    MEM_B(0X2F, ctx->r21) = ctx->r25;
    // 0x80034F5C: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034F60: jal         0x8003EFA0
    // 0x80034F64: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    alSynSetFXMix(rdram, ctx);
        goto after_15;
    // 0x80034F64: andi        $a2, $t9, 0xFF
    ctx->r6 = ctx->r25 & 0XFF;
    after_15:
    // 0x80034F68: b           L_800350B4
    // 0x80034F6C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_800350B4;
    // 0x80034F6C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80034F70:
    // 0x80034F70: lw          $t8, 0x28($s5)
    ctx->r24 = MEM_W(ctx->r21, 0X28);
    // 0x80034F74: lh          $t7, 0x8($s4)
    ctx->r15 = MEM_H(ctx->r20, 0X8);
    // 0x80034F78: bne         $fp, $t8, L_800350B0
    if (ctx->r30 != ctx->r24) {
        // 0x80034F7C: sh          $t7, 0x2C($s5)
        MEM_H(0X2C, ctx->r21) = ctx->r15;
            goto L_800350B0;
    }
    // 0x80034F7C: sh          $t7, 0x2C($s5)
    MEM_H(0X2C, ctx->r21) = ctx->r15;
    // 0x80034F80: beql        $s1, $zero, L_800350B4
    if (ctx->r17 == 0) {
        // 0x80034F84: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_800350B4;
    }
    goto skip_8;
    // 0x80034F84: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_8:
    // 0x80034F88: lw          $t9, 0x0($s1)
    ctx->r25 = MEM_W(ctx->r17, 0X0);
    // 0x80034F8C: lh          $t7, 0x2C($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X2C);
    // 0x80034F90: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80034F94: lbu         $t6, 0xD($t9)
    ctx->r14 = MEM_BU(ctx->r25, 0XD);
    // 0x80034F98: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80034F9C: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034FA0: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80034FA4: addiu       $a3, $zero, 0x3E8
    ctx->r7 = ADD32(0, 0X3E8);
    // 0x80034FA8: mflo        $t0
    ctx->r8 = lo;
    // 0x80034FAC: nop

    // 0x80034FB0: nop

    // 0x80034FB4: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80034FB8: mflo        $t8
    ctx->r24 = lo;
    // 0x80034FBC: sll         $a2, $t8, 16
    ctx->r6 = S32(ctx->r24 << 16);
    // 0x80034FC0: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80034FC4: jal         0x8003EBB0
    // 0x80034FC8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    alSynSetVol(rdram, ctx);
        goto after_16;
    // 0x80034FC8: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    after_16:
    // 0x80034FCC: b           L_800350B4
    // 0x80034FD0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_800350B4;
    // 0x80034FD0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80034FD4:
    // 0x80034FD4: lw          $a3, 0x0($s1)
    ctx->r7 = MEM_W(ctx->r17, 0X0);
    // 0x80034FD8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80034FDC: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    // 0x80034FE0: lw          $v1, 0x4($a3)
    ctx->r3 = MEM_W(ctx->r7, 0X4);
    // 0x80034FE4: beql        $v1, $at, L_800350B4
    if (ctx->r3 == ctx->r1) {
        // 0x80034FE8: or          $a0, $s7, $zero
        ctx->r4 = ctx->r23 | 0;
            goto L_800350B4;
    }
    goto skip_9;
    // 0x80034FE8: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    skip_9:
    // 0x80034FEC: lbu         $t6, 0xD($a3)
    ctx->r14 = MEM_BU(ctx->r7, 0XD);
    // 0x80034FF0: lh          $t7, 0x2C($s5)
    ctx->r15 = MEM_H(ctx->r21, 0X2C);
    // 0x80034FF4: addiu       $at, $zero, 0x7F
    ctx->r1 = ADD32(0, 0X7F);
    // 0x80034FF8: mtc1        $v1, $f4
    ctx->f4.u32l = ctx->r3;
    // 0x80034FFC: multu       $t6, $t7
    result = U64(U32(ctx->r14)) * U64(U32(ctx->r15)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80035000: lwc1        $f2, 0x24($s5)
    ctx->f2.u32l = MEM_W(ctx->r21, 0X24);
    // 0x80035004: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80035008: lui         $a3, 0x7FFF
    ctx->r7 = S32(0X7FFF << 16);
    // 0x8003500C: div.s       $f8, $f6, $f2
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 2);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f2.fl); 
    ctx->f8.fl = DIV_S(ctx->f6.fl, ctx->f2.fl);
    // 0x80035010: mflo        $t0
    ctx->r8 = lo;
    // 0x80035014: nop

    // 0x80035018: nop

    // 0x8003501C: div         $zero, $t0, $at
    lo = S32(S64(S32(ctx->r8)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r8)) % S64(S32(ctx->r1)));
    // 0x80035020: cvt.d.s     $f0, $f8
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f0.d = CVT_D_S(ctx->f8.fl);
    // 0x80035024: mflo        $t0
    ctx->r8 = lo;
    // 0x80035028: c.lt.d      $f20, $f0
    CHECK_FR(ctx, 20);
    CHECK_FR(ctx, 0);
    c1cs = ctx->f20.d < ctx->f0.d;
    // 0x8003502C: sll         $a2, $t0, 16
    ctx->r6 = S32(ctx->r8 << 16);
    // 0x80035030: sra         $t6, $a2, 16
    ctx->r14 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80035034: or          $a2, $t6, $zero
    ctx->r6 = ctx->r14 | 0;
    // 0x80035038: bc1fl       L_8003504C
    if (!c1cs) {
        // 0x8003503C: trunc.w.d   $f10, $f0
        CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
            goto L_8003504C;
    }
    goto skip_10;
    // 0x8003503C: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
    skip_10:
    // 0x80035040: b           L_80035054
    // 0x80035044: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
        goto L_80035054;
    // 0x80035044: ori         $a3, $a3, 0xFFFF
    ctx->r7 = ctx->r7 | 0XFFFF;
    // 0x80035048: trunc.w.d   $f10, $f0
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 0);
    ctx->f10.u32l = TRUNC_W_D(ctx->f0.d);
L_8003504C:
    // 0x8003504C: mfc1        $a3, $f10
    ctx->r7 = (int32_t)ctx->f10.u32l;
    // 0x80035050: nop

L_80035054:
    // 0x80035054: or          $s0, $a3, $zero
    ctx->r16 = ctx->r7 | 0;
    // 0x80035058: jal         0x8003EBB0
    // 0x8003505C: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    alSynSetVol(rdram, ctx);
        goto after_17;
    // 0x8003505C: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    after_17:
    // 0x80035060: sh          $fp, 0xC0($sp)
    MEM_H(0XC0, ctx->r29) = ctx->r30;
    // 0x80035064: sw          $s5, 0xC4($sp)
    MEM_W(0XC4, ctx->r29) = ctx->r21;
    // 0x80035068: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
    // 0x8003506C: addiu       $a1, $sp, 0xC0
    ctx->r5 = ADD32(ctx->r29, 0XC0);
    // 0x80035070: jal         0x8003E80C
    // 0x80035074: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_18;
    // 0x80035074: or          $a2, $s0, $zero
    ctx->r6 = ctx->r16 | 0;
    after_18:
    // 0x80035078: b           L_800350B4
    // 0x8003507C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
        goto L_800350B4;
    // 0x8003507C: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_80035080:
    // 0x80035080: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80035084: jal         0x8003EA80
    // 0x80035088: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    alSynStopVoice(rdram, ctx);
        goto after_19;
    // 0x80035088: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_19:
    // 0x8003508C: lw          $a0, 0x38($s6)
    ctx->r4 = MEM_W(ctx->r22, 0X38);
    // 0x80035090: jal         0x8003EB00
    // 0x80035094: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_20;
    // 0x80035094: or          $a1, $s5, $zero
    ctx->r5 = ctx->r21 | 0;
    after_20:
    // 0x80035098: or          $s2, $s7, $zero
    ctx->r18 = ctx->r23 | 0;
    // 0x8003509C: or          $s3, $s5, $zero
    ctx->r19 = ctx->r21 | 0;
    // 0x800350A0: jal         0x80034B30
    // 0x800350A4: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    static_0_80034B30(rdram, ctx);
        goto after_21;
    // 0x800350A4: sw          $s4, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r20;
    after_21:
    // 0x800350A8: lw          $s4, 0x4C($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X4C);
    // 0x800350AC: sw          $zero, 0x28($s5)
    MEM_W(0X28, ctx->r21) = 0;
L_800350B0:
    // 0x800350B0: or          $a0, $s7, $zero
    ctx->r4 = ctx->r23 | 0;
L_800350B4:
    // 0x800350B4: jal         0x8003E930
    // 0x800350B8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    alEvtqNextEvent(rdram, ctx);
        goto after_22;
    // 0x800350B8: or          $a1, $s4, $zero
    ctx->r5 = ctx->r20 | 0;
    after_22:
    // 0x800350BC: beq         $v0, $zero, L_80034C04
    if (ctx->r2 == 0) {
        // 0x800350C0: sw          $v0, 0x4C($s6)
        MEM_W(0X4C, ctx->r22) = ctx->r2;
            goto L_80034C04;
    }
    // 0x800350C0: sw          $v0, 0x4C($s6)
    MEM_W(0X4C, ctx->r22) = ctx->r2;
    // 0x800350C4: lw          $t7, 0x50($s6)
    ctx->r15 = MEM_W(ctx->r22, 0X50);
    // 0x800350C8: addu        $t8, $t7, $v0
    ctx->r24 = ADD32(ctx->r15, ctx->r2);
    // 0x800350CC: sw          $t8, 0x50($s6)
    MEM_W(0X50, ctx->r22) = ctx->r24;
    // 0x800350D0: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x800350D4: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x800350D8: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x800350DC: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x800350E0: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x800350E4: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x800350E8: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x800350EC: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x800350F0: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x800350F4: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x800350F8: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x800350FC: jr          $ra
    // 0x80035100: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
    return;
    // 0x80035100: addiu       $sp, $sp, 0x108
    ctx->r29 = ADD32(ctx->r29, 0X108);
;}
RECOMP_FUNC void __CSPVoiceHandler(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8003318C: addiu       $sp, $sp, -0xA0
    ctx->r29 = ADD32(ctx->r29, -0XA0);
    // 0x80033190: sw          $s5, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r21;
    // 0x80033194: sw          $s2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r18;
    // 0x80033198: addiu       $t6, $a0, 0x38
    ctx->r14 = ADD32(ctx->r4, 0X38);
    // 0x8003319C: or          $s2, $a0, $zero
    ctx->r18 = ctx->r4 | 0;
    // 0x800331A0: sw          $ra, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r31;
    // 0x800331A4: sw          $fp, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r30;
    // 0x800331A8: sw          $s7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r23;
    // 0x800331AC: sw          $s6, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r22;
    // 0x800331B0: sw          $s4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r20;
    // 0x800331B4: sw          $s3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r19;
    // 0x800331B8: sw          $s1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r17;
    // 0x800331BC: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x800331C0: sdc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    SD(ctx->f20.u64, 0X18, ctx->r29);
    // 0x800331C4: sw          $t6, 0x50($sp)
    MEM_W(0X50, ctx->r29) = ctx->r14;
    // 0x800331C8: addiu       $s5, $a0, 0x48
    ctx->r21 = ADD32(ctx->r4, 0X48);
L_800331CC:
    // 0x800331CC: lhu         $t7, 0x38($s2)
    ctx->r15 = MEM_HU(ctx->r18, 0X38);
    // 0x800331D0: sltiu       $at, $t7, 0x18
    ctx->r1 = ctx->r15 < 0X18 ? 1 : 0;
    // 0x800331D4: beq         $at, $zero, L_8003374C
    if (ctx->r1 == 0) {
        // 0x800331D8: sll         $t7, $t7, 2
        ctx->r15 = S32(ctx->r15 << 2);
            goto L_8003374C;
    }
    // 0x800331D8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800331DC: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x800331E0: addu        $at, $at, $t7
    gpr jr_addend_800331E8 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800331E4: lw          $t7, -0x3DEC($at)
    ctx->r15 = ADD32(ctx->r1, -0X3DEC);
    // 0x800331E8: jr          $t7
    // 0x800331EC: nop

    switch (jr_addend_800331E8 >> 2) {
        case 0: goto L_800331F0; break;
        case 1: goto L_8003374C; break;
        case 2: goto L_80033520; break;
        case 3: goto L_8003374C; break;
        case 4: goto L_8003374C; break;
        case 5: goto L_800332DC; break;
        case 6: goto L_80033328; break;
        case 7: goto L_8003353C; break;
        case 8: goto L_8003374C; break;
        case 9: goto L_800332BC; break;
        case 10: goto L_8003355C; break;
        case 11: goto L_8003374C; break;
        case 12: goto L_800336EC; break;
        case 13: goto L_80033708; break;
        case 14: goto L_8003373C; break;
        case 15: goto L_800335C0; break;
        case 16: goto L_800335E4; break;
        case 17: goto L_80033650; break;
        case 18: goto L_8003374C; break;
        case 19: goto L_8003374C; break;
        case 20: goto L_8003374C; break;
        case 21: goto L_80033520; break;
        case 22: goto L_8003338C; break;
        case 23: goto L_80033498; break;
        default: switch_error(__func__, 0x800331E8, 0x8004C214);
    }
    // 0x800331EC: nop

L_800331F0:
    // 0x800331F0: lw          $a0, 0x18($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X18);
    // 0x800331F4: beql        $a0, $zero, L_80033750
    if (ctx->r4 == 0) {
        // 0x800331F8: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80033750;
    }
    goto skip_0;
    // 0x800331F8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_0:
    // 0x800331FC: jal         0x80033DC4
    // 0x80033200: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    alCSeqNextEvent(rdram, ctx);
        goto after_0;
    // 0x80033200: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_0:
    // 0x80033204: lh          $t8, 0x58($sp)
    ctx->r24 = MEM_H(ctx->r29, 0X58);
    // 0x80033208: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x8003320C: sltiu       $at, $t9, 0x14
    ctx->r1 = ctx->r25 < 0X14 ? 1 : 0;
    // 0x80033210: beq         $at, $zero, L_8003374C
    if (ctx->r1 == 0) {
        // 0x80033214: sll         $t9, $t9, 2
        ctx->r25 = S32(ctx->r25 << 2);
            goto L_8003374C;
    }
    // 0x80033214: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80033218: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8003321C: addu        $at, $at, $t9
    gpr jr_addend_80033224 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80033220: lw          $t9, -0x3D8C($at)
    ctx->r25 = ADD32(ctx->r1, -0X3D8C);
    // 0x80033224: jr          $t9
    // 0x80033228: nop

    switch (jr_addend_80033224 >> 2) {
        case 0: goto L_8003322C; break;
        case 1: goto L_8003374C; break;
        case 2: goto L_80033254; break;
        case 3: goto L_80033280; break;
        case 4: goto L_8003374C; break;
        case 5: goto L_8003374C; break;
        case 6: goto L_8003374C; break;
        case 7: goto L_8003374C; break;
        case 8: goto L_8003374C; break;
        case 9: goto L_8003374C; break;
        case 10: goto L_8003374C; break;
        case 11: goto L_8003374C; break;
        case 12: goto L_8003374C; break;
        case 13: goto L_8003374C; break;
        case 14: goto L_8003374C; break;
        case 15: goto L_8003374C; break;
        case 16: goto L_8003374C; break;
        case 17: goto L_800332AC; break;
        case 18: goto L_800332AC; break;
        case 19: goto L_800332AC; break;
        default: switch_error(__func__, 0x80033224, 0x8004C274);
    }
    // 0x80033228: nop

L_8003322C:
    // 0x8003322C: addiu       $t0, $sp, 0x58
    ctx->r8 = ADD32(ctx->r29, 0X58);
    // 0x80033230: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x80033234: jal         0x8003295C
    // 0x80033238: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    static_0_8003295C(rdram, ctx);
        goto after_1;
    // 0x80033238: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_1:
    // 0x8003323C: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x80033240: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80033244: jal         0x800326E0
    // 0x80033248: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    __CSPPostNextSeqEvent(rdram, ctx);
        goto after_2;
    // 0x80033248: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_2:
    // 0x8003324C: b           L_80033750
    // 0x80033250: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x80033250: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80033254:
    // 0x80033254: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x80033258: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    // 0x8003325C: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x80033260: jal         0x8003278C
    // 0x80033264: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    static_0_8003278C(rdram, ctx);
        goto after_3;
    // 0x80033264: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_3:
    // 0x80033268: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x8003326C: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
    // 0x80033270: jal         0x800326E0
    // 0x80033274: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    __CSPPostNextSeqEvent(rdram, ctx);
        goto after_4;
    // 0x80033274: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_4:
    // 0x80033278: b           L_80033750
    // 0x8003327C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x8003327C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80033280:
    // 0x80033280: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80033284: sw          $t6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r14;
    // 0x80033288: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x8003328C: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x80033290: sh          $t7, 0x58($sp)
    MEM_H(0X58, ctx->r29) = ctx->r15;
    // 0x80033294: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x80033298: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8003329C: jal         0x8003E80C
    // 0x800332A0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    alEvtqPostEvent(rdram, ctx);
        goto after_5;
    // 0x800332A0: addiu       $a1, $sp, 0x58
    ctx->r5 = ADD32(ctx->r29, 0X58);
    after_5:
    // 0x800332A4: b           L_80033750
    // 0x800332A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x800332A8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800332AC:
    // 0x800332AC: jal         0x800326E0
    // 0x800332B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    __CSPPostNextSeqEvent(rdram, ctx);
        goto after_6;
    // 0x800332B0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_6:
    // 0x800332B4: b           L_80033750
    // 0x800332B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x800332B8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800332BC:
    // 0x800332BC: addiu       $t8, $zero, 0x9
    ctx->r24 = ADD32(0, 0X9);
    // 0x800332C0: sh          $t8, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r24;
    // 0x800332C4: lw          $a2, 0x5C($s2)
    ctx->r6 = MEM_W(ctx->r18, 0X5C);
    // 0x800332C8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800332CC: jal         0x8003E80C
    // 0x800332D0: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    alEvtqPostEvent(rdram, ctx);
        goto after_7;
    // 0x800332D0: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_7:
    // 0x800332D4: b           L_80033750
    // 0x800332D8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x800332D8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800332DC:
    // 0x800332DC: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x800332E0: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x800332E4: jal         0x8003EA80
    // 0x800332E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynStopVoice(rdram, ctx);
        goto after_8;
    // 0x800332E8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_8:
    // 0x800332EC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x800332F0: jal         0x8003EB00
    // 0x800332F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_9;
    // 0x800332F4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x800332F8: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x800332FC: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80033300: lbu         $t9, 0x37($s1)
    ctx->r25 = MEM_BU(ctx->r17, 0X37);
    // 0x80033304: beql        $t9, $zero, L_80033318
    if (ctx->r25 == 0) {
        // 0x80033308: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80033318;
    }
    goto skip_1;
    // 0x80033308: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_1:
    // 0x8003330C: jal         0x8003E3F0
    // 0x80033310: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __seqpStopOsc(rdram, ctx);
        goto after_10;
    // 0x80033310: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_10:
    // 0x80033314: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80033318:
    // 0x80033318: jal         0x8003D1C0
    // 0x8003331C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __unmapVoice(rdram, ctx);
        goto after_11;
    // 0x8003331C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_11:
    // 0x80033320: b           L_80033750
    // 0x80033324: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x80033324: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80033328:
    // 0x80033328: lw          $s0, 0x3C($s2)
    ctx->r16 = MEM_W(ctx->r18, 0X3C);
    // 0x8003332C: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80033330: lw          $s1, 0x10($s0)
    ctx->r17 = MEM_W(ctx->r16, 0X10);
    // 0x80033334: lbu         $t6, 0x34($s1)
    ctx->r14 = MEM_BU(ctx->r17, 0X34);
    // 0x80033338: bnel        $t6, $zero, L_80033348
    if (ctx->r14 != 0) {
        // 0x8003333C: lw          $s3, 0x40($s2)
        ctx->r19 = MEM_W(ctx->r18, 0X40);
            goto L_80033348;
    }
    goto skip_2;
    // 0x8003333C: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
    skip_2:
    // 0x80033340: sb          $t7, 0x34($s1)
    MEM_B(0X34, ctx->r17) = ctx->r15;
    // 0x80033344: lw          $s3, 0x40($s2)
    ctx->r19 = MEM_W(ctx->r18, 0X40);
L_80033348:
    // 0x80033348: lw          $t8, 0x1C($s2)
    ctx->r24 = MEM_W(ctx->r18, 0X1C);
    // 0x8003334C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80033350: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x80033354: addu        $t9, $t8, $s3
    ctx->r25 = ADD32(ctx->r24, ctx->r19);
    // 0x80033358: sw          $t9, 0x24($s1)
    MEM_W(0X24, ctx->r17) = ctx->r25;
    // 0x8003335C: lbu         $t6, 0x44($s2)
    ctx->r14 = MEM_BU(ctx->r18, 0X44);
    // 0x80033360: jal         0x8003CF64
    // 0x80033364: sb          $t6, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r14;
    __vsVol(rdram, ctx);
        goto after_12;
    // 0x80033364: sb          $t6, 0x30($s1)
    MEM_B(0X30, ctx->r17) = ctx->r14;
    after_12:
    // 0x80033368: sll         $a2, $v0, 16
    ctx->r6 = S32(ctx->r2 << 16);
    // 0x8003336C: sra         $t7, $a2, 16
    ctx->r15 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80033370: or          $a2, $t7, $zero
    ctx->r6 = ctx->r15 | 0;
    // 0x80033374: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80033378: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x8003337C: jal         0x8003EBB0
    // 0x80033380: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    alSynSetVol(rdram, ctx);
        goto after_13;
    // 0x80033380: or          $a3, $s3, $zero
    ctx->r7 = ctx->r19 | 0;
    after_13:
    // 0x80033384: b           L_80033750
    // 0x80033388: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x80033388: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8003338C:
    // 0x8003338C: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x80033390: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x80033394: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x80033398: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x8003339C: jalr        $t9
    // 0x800333A0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_14;
    // 0x800333A0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_14:
    // 0x800333A4: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x800333A8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800333AC: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800333B0: lwc1        $f4, 0x78($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800333B4: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800333B8: lui         $at, 0x4F00
    ctx->r1 = S32(0X4F00 << 16);
    // 0x800333BC: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x800333C0: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x800333C4: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    // 0x800333C8: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800333CC: nop

    // 0x800333D0: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x800333D4: beql        $t6, $zero, L_80033424
    if (ctx->r14 == 0) {
        // 0x800333D8: mfc1        $t6, $f6
        ctx->r14 = (int32_t)ctx->f6.u32l;
            goto L_80033424;
    }
    goto skip_3;
    // 0x800333D8: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    skip_3:
    // 0x800333DC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x800333E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800333E4: sub.s       $f6, $f4, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f6.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800333E8: ctc1        $t6, $FpcCsr
    set_cop1_cs(ctx->r14);
    // 0x800333EC: nop

    // 0x800333F0: cvt.w.s     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.u32l = CVT_W_S(ctx->f6.fl);
    // 0x800333F4: cfc1        $t6, $FpcCsr
    ctx->r14 = get_cop1_cs();
    // 0x800333F8: nop

    // 0x800333FC: andi        $t6, $t6, 0x78
    ctx->r14 = ctx->r14 & 0X78;
    // 0x80033400: bne         $t6, $zero, L_80033418
    if (ctx->r14 != 0) {
        // 0x80033404: nop
    
            goto L_80033418;
    }
    // 0x80033404: nop

    // 0x80033408: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
    // 0x8003340C: lui         $at, 0x8000
    ctx->r1 = S32(0X8000 << 16);
    // 0x80033410: b           L_80033430
    // 0x80033414: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
        goto L_80033430;
    // 0x80033414: or          $t6, $t6, $at
    ctx->r14 = ctx->r14 | ctx->r1;
L_80033418:
    // 0x80033418: b           L_80033430
    // 0x8003341C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
        goto L_80033430;
    // 0x8003341C: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x80033420: mfc1        $t6, $f6
    ctx->r14 = (int32_t)ctx->f6.u32l;
L_80033424:
    // 0x80033424: nop

    // 0x80033428: bltz        $t6, L_80033418
    if (SIGNED(ctx->r14) < 0) {
        // 0x8003342C: nop
    
            goto L_80033418;
    }
    // 0x8003342C: nop

L_80033430:
    // 0x80033430: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80033434: jal         0x8003CF64
    // 0x80033438: sb          $t6, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r14;
    __vsVol(rdram, ctx);
        goto after_15;
    // 0x80033438: sb          $t6, 0x36($s1)
    MEM_B(0X36, ctx->r17) = ctx->r14;
    after_15:
    // 0x8003343C: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x80033440: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80033444: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80033448: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x8003344C: jal         0x8003CF40
    // 0x80033450: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_16;
    // 0x80033450: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_16:
    // 0x80033454: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x80033458: sra         $t9, $a2, 16
    ctx->r25 = S32(SIGNED(ctx->r6) >> 16);
    // 0x8003345C: or          $a2, $t9, $zero
    ctx->r6 = ctx->r25 | 0;
    // 0x80033460: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80033464: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x80033468: jal         0x8003EBB0
    // 0x8003346C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_17;
    // 0x8003346C: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_17:
    // 0x80033470: addiu       $t8, $zero, 0x16
    ctx->r24 = ADD32(0, 0X16);
    // 0x80033474: sh          $t8, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r24;
    // 0x80033478: sw          $s1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r17;
    // 0x8003347C: sw          $s4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r20;
    // 0x80033480: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80033484: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80033488: jal         0x8003E80C
    // 0x8003348C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_18;
    // 0x8003348C: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_18:
    // 0x80033490: b           L_80033750
    // 0x80033494: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x80033494: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80033498:
    // 0x80033498: lw          $t9, 0x74($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X74);
    // 0x8003349C: lw          $s4, 0x40($s2)
    ctx->r20 = MEM_W(ctx->r18, 0X40);
    // 0x800334A0: lw          $s1, 0x3C($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X3C);
    // 0x800334A4: lbu         $s0, 0x44($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X44);
    // 0x800334A8: addiu       $a1, $sp, 0x78
    ctx->r5 = ADD32(ctx->r29, 0X78);
    // 0x800334AC: jalr        $t9
    // 0x800334B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_19;
    // 0x800334B0: or          $a0, $s4, $zero
    ctx->r4 = ctx->r20 | 0;
    after_19:
    // 0x800334B4: lwc1        $f8, 0x78($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X78);
    // 0x800334B8: lwc1        $f4, 0x28($s1)
    ctx->f4.u32l = MEM_W(ctx->r17, 0X28);
    // 0x800334BC: sll         $t7, $s0, 4
    ctx->r15 = S32(ctx->r16 << 4);
    // 0x800334C0: swc1        $f8, 0x2C($s1)
    MEM_W(0X2C, ctx->r17) = ctx->f8.u32l;
    // 0x800334C4: lwc1        $f6, 0x2C($s1)
    ctx->f6.u32l = MEM_W(ctx->r17, 0X2C);
    // 0x800334C8: lw          $t6, 0x60($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X60);
    // 0x800334CC: or          $s3, $v0, $zero
    ctx->r19 = ctx->r2 | 0;
    // 0x800334D0: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x800334D4: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x800334D8: lwc1        $f10, 0xC($t8)
    ctx->f10.u32l = MEM_W(ctx->r24, 0XC);
    // 0x800334DC: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x800334E0: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x800334E4: mul.s       $f4, $f10, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f4.fl = MUL_S(ctx->f10.fl, ctx->f8.fl);
    // 0x800334E8: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800334EC: jal         0x8003EC50
    // 0x800334F0: nop

    alSynSetPitch(rdram, ctx);
        goto after_20;
    // 0x800334F0: nop

    after_20:
    // 0x800334F4: addiu       $t9, $zero, 0x17
    ctx->r25 = ADD32(0, 0X17);
    // 0x800334F8: sh          $t9, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r25;
    // 0x800334FC: sw          $s1, 0x90($sp)
    MEM_W(0X90, ctx->r29) = ctx->r17;
    // 0x80033500: sw          $s4, 0x94($sp)
    MEM_W(0X94, ctx->r29) = ctx->r20;
    // 0x80033504: sb          $s0, 0x98($sp)
    MEM_B(0X98, ctx->r29) = ctx->r16;
    // 0x80033508: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8003350C: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    // 0x80033510: jal         0x8003E80C
    // 0x80033514: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    alEvtqPostEvent(rdram, ctx);
        goto after_21;
    // 0x80033514: or          $a2, $s3, $zero
    ctx->r6 = ctx->r19 | 0;
    after_21:
    // 0x80033518: b           L_80033750
    // 0x8003351C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x8003351C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80033520:
    // 0x80033520: lw          $t0, 0x50($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X50);
    // 0x80033524: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x80033528: jal         0x8003295C
    // 0x8003352C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    static_0_8003295C(rdram, ctx);
        goto after_22;
    // 0x8003352C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_22:
    // 0x80033530: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x80033534: b           L_8003374C
    // 0x80033538: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
        goto L_8003374C;
    // 0x80033538: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
L_8003353C:
    // 0x8003353C: or          $s7, $s2, $zero
    ctx->r23 = ctx->r18 | 0;
    // 0x80033540: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    // 0x80033544: sw          $s2, 0xA0($sp)
    MEM_W(0XA0, ctx->r29) = ctx->r18;
    // 0x80033548: jal         0x8003278C
    // 0x8003354C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    static_0_8003278C(rdram, ctx);
        goto after_23;
    // 0x8003354C: sw          $s5, 0x4C($sp)
    MEM_W(0X4C, ctx->r29) = ctx->r21;
    after_23:
    // 0x80033550: lw          $s2, 0xA0($sp)
    ctx->r18 = MEM_W(ctx->r29, 0XA0);
    // 0x80033554: b           L_8003374C
    // 0x80033558: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
        goto L_8003374C;
    // 0x80033558: lw          $s5, 0x4C($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X4C);
L_8003355C:
    // 0x8003355C: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80033560: lh          $t6, 0x3C($s2)
    ctx->r14 = MEM_H(ctx->r18, 0X3C);
    // 0x80033564: beq         $s1, $zero, L_8003374C
    if (ctx->r17 == 0) {
        // 0x80033568: sh          $t6, 0x32($s2)
        MEM_H(0X32, ctx->r18) = ctx->r14;
            goto L_8003374C;
    }
    // 0x80033568: sh          $t6, 0x32($s2)
    MEM_H(0X32, ctx->r18) = ctx->r14;
    // 0x8003356C: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
L_80033570:
    // 0x80033570: jal         0x8003CF64
    // 0x80033574: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    __vsVol(rdram, ctx);
        goto after_24;
    // 0x80033574: or          $a1, $s2, $zero
    ctx->r5 = ctx->r18 | 0;
    after_24:
    // 0x80033578: sll         $s0, $v0, 16
    ctx->r16 = S32(ctx->r2 << 16);
    // 0x8003357C: sra         $t7, $s0, 16
    ctx->r15 = S32(SIGNED(ctx->r16) >> 16);
    // 0x80033580: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x80033584: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    // 0x80033588: jal         0x8003CF40
    // 0x8003358C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    __vsDelta(rdram, ctx);
        goto after_25;
    // 0x8003358C: lw          $a1, 0x1C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X1C);
    after_25:
    // 0x80033590: sll         $a2, $s0, 16
    ctx->r6 = S32(ctx->r16 << 16);
    // 0x80033594: sra         $t8, $a2, 16
    ctx->r24 = S32(SIGNED(ctx->r6) >> 16);
    // 0x80033598: or          $a2, $t8, $zero
    ctx->r6 = ctx->r24 | 0;
    // 0x8003359C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x800335A0: addiu       $a1, $s1, 0x4
    ctx->r5 = ADD32(ctx->r17, 0X4);
    // 0x800335A4: jal         0x8003EBB0
    // 0x800335A8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    alSynSetVol(rdram, ctx);
        goto after_26;
    // 0x800335A8: or          $a3, $v0, $zero
    ctx->r7 = ctx->r2 | 0;
    after_26:
    // 0x800335AC: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x800335B0: bnel        $s1, $zero, L_80033570
    if (ctx->r17 != 0) {
        // 0x800335B4: or          $a0, $s1, $zero
        ctx->r4 = ctx->r17 | 0;
            goto L_80033570;
    }
    goto skip_4;
    // 0x800335B4: or          $a0, $s1, $zero
    ctx->r4 = ctx->r17 | 0;
    skip_4:
    // 0x800335B8: b           L_80033750
    // 0x800335BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x800335BC: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800335C0:
    // 0x800335C0: lw          $t9, 0x2C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X2C);
    // 0x800335C4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800335C8: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800335CC: beq         $t9, $at, L_8003374C
    if (ctx->r25 == ctx->r1) {
        // 0x800335D0: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_8003374C;
    }
    // 0x800335D0: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800335D4: jal         0x800326E0
    // 0x800335D8: sw          $t6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r14;
    __CSPPostNextSeqEvent(rdram, ctx);
        goto after_27;
    // 0x800335D8: sw          $t6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r14;
    after_27:
    // 0x800335DC: b           L_80033750
    // 0x800335E0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x800335E0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800335E4:
    // 0x800335E4: lw          $t7, 0x2C($s2)
    ctx->r15 = MEM_W(ctx->r18, 0X2C);
    // 0x800335E8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800335EC: bnel        $t7, $at, L_80033750
    if (ctx->r15 != ctx->r1) {
        // 0x800335F0: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80033750;
    }
    goto skip_5;
    // 0x800335F0: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_5:
    // 0x800335F4: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x800335F8: beq         $s1, $zero, L_80033648
    if (ctx->r17 == 0) {
        // 0x800335FC: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80033648;
    }
    // 0x800335FC: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_80033600:
    // 0x80033600: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033604: jal         0x8003EA80
    // 0x80033608: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    alSynStopVoice(rdram, ctx);
        goto after_28;
    // 0x80033608: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    after_28:
    // 0x8003360C: lw          $a0, 0x14($s2)
    ctx->r4 = MEM_W(ctx->r18, 0X14);
    // 0x80033610: jal         0x8003EB00
    // 0x80033614: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    alSynFreeVoice(rdram, ctx);
        goto after_29;
    // 0x80033614: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_29:
    // 0x80033618: lbu         $t8, 0x37($s1)
    ctx->r24 = MEM_BU(ctx->r17, 0X37);
    // 0x8003361C: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80033620: beql        $t8, $zero, L_80033634
    if (ctx->r24 == 0) {
        // 0x80033624: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_80033634;
    }
    goto skip_6;
    // 0x80033624: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    skip_6:
    // 0x80033628: jal         0x8003E3F0
    // 0x8003362C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    __seqpStopOsc(rdram, ctx);
        goto after_30;
    // 0x8003362C: or          $a1, $s1, $zero
    ctx->r5 = ctx->r17 | 0;
    after_30:
    // 0x80033630: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
L_80033634:
    // 0x80033634: jal         0x8003D1C0
    // 0x80033638: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    __unmapVoice(rdram, ctx);
        goto after_31;
    // 0x80033638: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_31:
    // 0x8003363C: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80033640: bnel        $s1, $zero, L_80033600
    if (ctx->r17 != 0) {
        // 0x80033644: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80033600;
    }
    goto skip_7;
    // 0x80033644: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_7:
L_80033648:
    // 0x80033648: b           L_8003374C
    // 0x8003364C: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
        goto L_8003374C;
    // 0x8003364C: sw          $zero, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = 0;
L_80033650:
    // 0x80033650: lw          $t9, 0x2C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X2C);
    // 0x80033654: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80033658: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8003365C: bnel        $t9, $at, L_80033750
    if (ctx->r25 != ctx->r1) {
        // 0x80033660: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80033750;
    }
    goto skip_8;
    // 0x80033660: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_8:
    // 0x80033664: jal         0x8003E6F0
    // 0x80033668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    alEvtqFlushType(rdram, ctx);
        goto after_32;
    // 0x80033668: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_32:
    // 0x8003366C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x80033670: jal         0x8003E6F0
    // 0x80033674: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    alEvtqFlushType(rdram, ctx);
        goto after_33;
    // 0x80033674: addiu       $a1, $zero, 0x15
    ctx->r5 = ADD32(0, 0X15);
    after_33:
    // 0x80033678: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x8003367C: jal         0x8003E6F0
    // 0x80033680: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    alEvtqFlushType(rdram, ctx);
        goto after_34;
    // 0x80033680: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    after_34:
    // 0x80033684: lw          $s1, 0x64($s2)
    ctx->r17 = MEM_W(ctx->r18, 0X64);
    // 0x80033688: beq         $s1, $zero, L_800336C0
    if (ctx->r17 == 0) {
        // 0x8003368C: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_800336C0;
    }
    // 0x8003368C: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
L_80033690:
    // 0x80033690: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x80033694: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80033698: jal         0x8003D118
    // 0x8003369C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    __voiceNeedsNoteKill(rdram, ctx);
        goto after_35;
    // 0x8003369C: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_35:
    // 0x800336A0: beq         $v0, $zero, L_800336B4
    if (ctx->r2 == 0) {
        // 0x800336A4: or          $a0, $s2, $zero
        ctx->r4 = ctx->r18 | 0;
            goto L_800336B4;
    }
    // 0x800336A4: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x800336A8: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    // 0x800336AC: jal         0x8003CFEC
    // 0x800336B0: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    __seqpReleaseVoice(rdram, ctx);
        goto after_36;
    // 0x800336B0: ori         $a2, $zero, 0xC350
    ctx->r6 = 0 | 0XC350;
    after_36:
L_800336B4:
    // 0x800336B4: lw          $s1, 0x0($s1)
    ctx->r17 = MEM_W(ctx->r17, 0X0);
    // 0x800336B8: bnel        $s1, $zero, L_80033690
    if (ctx->r17 != 0) {
        // 0x800336BC: addiu       $s0, $s1, 0x4
        ctx->r16 = ADD32(ctx->r17, 0X4);
            goto L_80033690;
    }
    goto skip_9;
    // 0x800336BC: addiu       $s0, $s1, 0x4
    ctx->r16 = ADD32(ctx->r17, 0X4);
    skip_9:
L_800336C0:
    // 0x800336C0: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800336C4: sw          $t6, 0x2C($s2)
    MEM_W(0X2C, ctx->r18) = ctx->r14;
    // 0x800336C8: addiu       $t7, $zero, 0x10
    ctx->r15 = ADD32(0, 0X10);
    // 0x800336CC: lui         $a2, 0x7FFF
    ctx->r6 = S32(0X7FFF << 16);
    // 0x800336D0: sh          $t7, 0x8C($sp)
    MEM_H(0X8C, ctx->r29) = ctx->r15;
    // 0x800336D4: ori         $a2, $a2, 0xFFFF
    ctx->r6 = ctx->r6 | 0XFFFF;
    // 0x800336D8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    // 0x800336DC: jal         0x8003E80C
    // 0x800336E0: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    alEvtqPostEvent(rdram, ctx);
        goto after_37;
    // 0x800336E0: addiu       $a1, $sp, 0x8C
    ctx->r5 = ADD32(ctx->r29, 0X8C);
    after_37:
    // 0x800336E4: b           L_80033750
    // 0x800336E8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x800336E8: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_800336EC:
    // 0x800336EC: lbu         $s0, 0x3C($s2)
    ctx->r16 = MEM_BU(ctx->r18, 0X3C);
    // 0x800336F0: lw          $t9, 0x60($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X60);
    // 0x800336F4: lbu         $t8, 0x3D($s2)
    ctx->r24 = MEM_BU(ctx->r18, 0X3D);
    // 0x800336F8: sll         $t6, $s0, 4
    ctx->r14 = S32(ctx->r16 << 4);
    // 0x800336FC: addu        $t7, $t9, $t6
    ctx->r15 = ADD32(ctx->r25, ctx->r14);
    // 0x80033700: b           L_8003374C
    // 0x80033704: sb          $t8, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r24;
        goto L_8003374C;
    // 0x80033704: sb          $t8, 0x8($t7)
    MEM_B(0X8, ctx->r15) = ctx->r24;
L_80033708:
    // 0x80033708: lw          $t9, 0x3C($s2)
    ctx->r25 = MEM_W(ctx->r18, 0X3C);
    // 0x8003370C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x80033710: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80033714: sw          $t9, 0x18($s2)
    MEM_W(0X18, ctx->r18) = ctx->r25;
    // 0x80033718: jal         0x80032750
    // 0x8003371C: lwc1        $f12, -0x3D3C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3D3C);
    static_0_80032750(rdram, ctx);
        goto after_38;
    // 0x8003371C: lwc1        $f12, -0x3D3C($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X3D3C);
    after_38:
    // 0x80033720: lw          $a1, 0x20($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X20);
    // 0x80033724: beql        $a1, $zero, L_80033750
    if (ctx->r5 == 0) {
        // 0x80033728: or          $a0, $s5, $zero
        ctx->r4 = ctx->r21 | 0;
            goto L_80033750;
    }
    goto skip_10;
    // 0x80033728: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
    skip_10:
    // 0x8003372C: jal         0x8003CE84
    // 0x80033730: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    __initFromBank(rdram, ctx);
        goto after_39;
    // 0x80033730: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    after_39:
    // 0x80033734: b           L_80033750
    // 0x80033738: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
        goto L_80033750;
    // 0x80033738: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_8003373C:
    // 0x8003373C: lw          $a1, 0x3C($s2)
    ctx->r5 = MEM_W(ctx->r18, 0X3C);
    // 0x80033740: or          $a0, $s2, $zero
    ctx->r4 = ctx->r18 | 0;
    // 0x80033744: jal         0x8003CE84
    // 0x80033748: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    __initFromBank(rdram, ctx);
        goto after_40;
    // 0x80033748: sw          $a1, 0x20($s2)
    MEM_W(0X20, ctx->r18) = ctx->r5;
    after_40:
L_8003374C:
    // 0x8003374C: or          $a0, $s5, $zero
    ctx->r4 = ctx->r21 | 0;
L_80033750:
    // 0x80033750: jal         0x8003E930
    // 0x80033754: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    alEvtqNextEvent(rdram, ctx);
        goto after_41;
    // 0x80033754: lw          $a1, 0x50($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X50);
    after_41:
    // 0x80033758: beq         $v0, $zero, L_800331CC
    if (ctx->r2 == 0) {
        // 0x8003375C: sw          $v0, 0x28($s2)
        MEM_W(0X28, ctx->r18) = ctx->r2;
            goto L_800331CC;
    }
    // 0x8003375C: sw          $v0, 0x28($s2)
    MEM_W(0X28, ctx->r18) = ctx->r2;
    // 0x80033760: lw          $t6, 0x1C($s2)
    ctx->r14 = MEM_W(ctx->r18, 0X1C);
    // 0x80033764: addu        $t8, $t6, $v0
    ctx->r24 = ADD32(ctx->r14, ctx->r2);
    // 0x80033768: sw          $t8, 0x1C($s2)
    MEM_W(0X1C, ctx->r18) = ctx->r24;
    // 0x8003376C: lw          $ra, 0x44($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X44);
    // 0x80033770: lw          $fp, 0x40($sp)
    ctx->r30 = MEM_W(ctx->r29, 0X40);
    // 0x80033774: lw          $s7, 0x3C($sp)
    ctx->r23 = MEM_W(ctx->r29, 0X3C);
    // 0x80033778: lw          $s6, 0x38($sp)
    ctx->r22 = MEM_W(ctx->r29, 0X38);
    // 0x8003377C: lw          $s5, 0x34($sp)
    ctx->r21 = MEM_W(ctx->r29, 0X34);
    // 0x80033780: lw          $s4, 0x30($sp)
    ctx->r20 = MEM_W(ctx->r29, 0X30);
    // 0x80033784: lw          $s3, 0x2C($sp)
    ctx->r19 = MEM_W(ctx->r29, 0X2C);
    // 0x80033788: lw          $s2, 0x28($sp)
    ctx->r18 = MEM_W(ctx->r29, 0X28);
    // 0x8003378C: lw          $s1, 0x24($sp)
    ctx->r17 = MEM_W(ctx->r29, 0X24);
    // 0x80033790: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x80033794: ldc1        $f20, 0x18($sp)
    CHECK_FR(ctx, 20);
    ctx->f20.u64 = LD(ctx->r29, 0X18);
    // 0x80033798: jr          $ra
    // 0x8003379C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
    return;
    // 0x8003379C: addiu       $sp, $sp, 0xA0
    ctx->r29 = ADD32(ctx->r29, 0XA0);
;}
RECOMP_FUNC void __amDMA(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DD40: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8000DD44: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8000DD48: sw          $a0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r4;
    // 0x8000DD4C: sw          $a1, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r5;
    // 0x8000DD50: sw          $a2, 0x48($sp)
    MEM_W(0X48, ctx->r29) = ctx->r6;
    // 0x8000DD54: sw          $zero, 0x28($sp)
    MEM_W(0X28, ctx->r29) = 0;
    // 0x8000DD58: lui         $t6, 0x8005
    ctx->r14 = S32(0X8005 << 16);
    // 0x8000DD5C: lw          $t6, 0x5410($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5410);
    // 0x8000DD60: nop

    // 0x8000DD64: sw          $t6, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r14;
    // 0x8000DD68: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8000DD6C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x8000DD70: nop

    // 0x8000DD74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8000DD78: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8000DD7C: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DD80: nop

    // 0x8000DD84: beq         $t0, $zero, L_8000DE60
    if (ctx->r8 == 0) {
        // 0x8000DD88: nop
    
            goto L_8000DE60;
    }
    // 0x8000DD88: nop

L_8000DD8C:
    // 0x8000DD8C: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DD90: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000DD94: lw          $t3, 0x5424($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5424);
    // 0x8000DD98: lw          $t2, 0x8($t1)
    ctx->r10 = MEM_W(ctx->r9, 0X8);
    // 0x8000DD9C: nop

    // 0x8000DDA0: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8000DDA4: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
    // 0x8000DDA8: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DDAC: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x8000DDB0: lw          $t6, 0x8($t5)
    ctx->r14 = MEM_W(ctx->r13, 0X8);
    // 0x8000DDB4: nop

    // 0x8000DDB8: sltu        $at, $t7, $t6
    ctx->r1 = ctx->r15 < ctx->r14 ? 1 : 0;
    // 0x8000DDBC: beq         $at, $zero, L_8000DDD4
    if (ctx->r1 == 0) {
        // 0x8000DDC0: nop
    
            goto L_8000DDD4;
    }
    // 0x8000DDC0: nop

    // 0x8000DDC4: b           L_8000DE60
    // 0x8000DDC8: nop

        goto L_8000DE60;
    // 0x8000DDC8: nop

    // 0x8000DDCC: b           L_8000DE30
    // 0x8000DDD0: nop

        goto L_8000DE30;
    // 0x8000DDD0: nop

L_8000DDD4:
    // 0x8000DDD4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8000DDD8: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x8000DDDC: nop

    // 0x8000DDE0: slt         $at, $t9, $t8
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x8000DDE4: bne         $at, $zero, L_8000DE30
    if (ctx->r1 != 0) {
        // 0x8000DDE8: nop
    
            goto L_8000DE30;
    }
    // 0x8000DDE8: nop

    // 0x8000DDEC: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000DDF0: lw          $t0, 0x5418($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X5418);
    // 0x8000DDF4: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DDF8: nop

    // 0x8000DDFC: sw          $t0, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->r8;
    // 0x8000DE00: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DE04: lw          $t4, 0x40($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X40);
    // 0x8000DE08: lw          $t3, 0x10($t2)
    ctx->r11 = MEM_W(ctx->r10, 0X10);
    // 0x8000DE0C: lw          $t6, 0x8($t2)
    ctx->r14 = MEM_W(ctx->r10, 0X8);
    // 0x8000DE10: addu        $t5, $t3, $t4
    ctx->r13 = ADD32(ctx->r11, ctx->r12);
    // 0x8000DE14: subu        $t7, $t5, $t6
    ctx->r15 = SUB32(ctx->r13, ctx->r14);
    // 0x8000DE18: sw          $t7, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r15;
    // 0x8000DE1C: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8000DE20: jal         0x800358D0
    // 0x8000DE24: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_0;
    // 0x8000DE24: nop

    after_0:
    // 0x8000DE28: b           L_8000E060
    // 0x8000DE2C: nop

        goto L_8000E060;
    // 0x8000DE2C: nop

L_8000DE30:
    // 0x8000DE30: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DE34: nop

    // 0x8000DE38: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8000DE3C: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DE40: nop

    // 0x8000DE44: lw          $t0, 0x0($t9)
    ctx->r8 = MEM_W(ctx->r25, 0X0);
    // 0x8000DE48: nop

    // 0x8000DE4C: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8000DE50: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DE54: nop

    // 0x8000DE58: bne         $t1, $zero, L_8000DD8C
    if (ctx->r9 != 0) {
        // 0x8000DE5C: nop
    
            goto L_8000DD8C;
    }
    // 0x8000DE5C: nop

L_8000DE60:
    // 0x8000DE60: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000DE64: lw          $t3, 0x5414($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5414);
    // 0x8000DE68: nop

    // 0x8000DE6C: sw          $t3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r11;
    // 0x8000DE70: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DE74: nop

    // 0x8000DE78: bne         $t4, $zero, L_8000DE98
    if (ctx->r12 != 0) {
        // 0x8000DE7C: nop
    
            goto L_8000DE98;
    }
    // 0x8000DE7C: nop

    // 0x8000DE80: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000DE84: lw          $a0, 0x5410($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X5410);
    // 0x8000DE88: jal         0x800358D0
    // 0x8000DE8C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8000DE8C: nop

    after_1:
    // 0x8000DE90: b           L_8000E060
    // 0x8000DE94: nop

        goto L_8000E060;
    // 0x8000DE94: nop

L_8000DE98:
    // 0x8000DE98: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DE9C: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000DEA0: lw          $t5, 0x0($t2)
    ctx->r13 = MEM_W(ctx->r10, 0X0);
    // 0x8000DEA4: nop

    // 0x8000DEA8: sw          $t5, 0x5414($at)
    MEM_W(0X5414, ctx->r1) = ctx->r13;
    // 0x8000DEAC: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DEB0: jal         0x800357B0
    // 0x8000DEB4: nop

    alUnlink(rdram, ctx);
        goto after_2;
    // 0x8000DEB4: nop

    after_2:
    // 0x8000DEB8: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8000DEBC: nop

    // 0x8000DEC0: beq         $t6, $zero, L_8000DEE0
    if (ctx->r14 == 0) {
        // 0x8000DEC4: nop
    
            goto L_8000DEE0;
    }
    // 0x8000DEC4: nop

    // 0x8000DEC8: lw          $a0, 0x2C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DECC: lw          $a1, 0x28($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X28);
    // 0x8000DED0: jal         0x800357E0
    // 0x8000DED4: nop

    alLink(rdram, ctx);
        goto after_3;
    // 0x8000DED4: nop

    after_3:
    // 0x8000DED8: b           L_8000DF60
    // 0x8000DEDC: nop

        goto L_8000DF60;
    // 0x8000DEDC: nop

L_8000DEE0:
    // 0x8000DEE0: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000DEE4: lw          $t7, 0x5410($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5410);
    // 0x8000DEE8: nop

    // 0x8000DEEC: beq         $t7, $zero, L_8000DF3C
    if (ctx->r15 == 0) {
        // 0x8000DEF0: nop
    
            goto L_8000DF3C;
    }
    // 0x8000DEF0: nop

    // 0x8000DEF4: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000DEF8: lw          $t8, 0x5410($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5410);
    // 0x8000DEFC: nop

    // 0x8000DF00: sw          $t8, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r24;
    // 0x8000DF04: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DF08: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000DF0C: sw          $t9, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = ctx->r25;
    // 0x8000DF10: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x8000DF14: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DF18: nop

    // 0x8000DF1C: sw          $t0, 0x0($t1)
    MEM_W(0X0, ctx->r9) = ctx->r8;
    // 0x8000DF20: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DF24: nop

    // 0x8000DF28: sw          $zero, 0x4($t3)
    MEM_W(0X4, ctx->r11) = 0;
    // 0x8000DF2C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DF30: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8000DF34: b           L_8000DF60
    // 0x8000DF38: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
        goto L_8000DF60;
    // 0x8000DF38: sw          $t4, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->r12;
L_8000DF3C:
    // 0x8000DF3C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DF40: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000DF44: sw          $t5, 0x5410($at)
    MEM_W(0X5410, ctx->r1) = ctx->r13;
    // 0x8000DF48: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DF4C: nop

    // 0x8000DF50: sw          $zero, 0x0($t6)
    MEM_W(0X0, ctx->r14) = 0;
    // 0x8000DF54: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DF58: nop

    // 0x8000DF5C: sw          $zero, 0x4($t7)
    MEM_W(0X4, ctx->r15) = 0;
L_8000DF60:
    // 0x8000DF60: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DF64: nop

    // 0x8000DF68: lw          $t9, 0x10($t8)
    ctx->r25 = MEM_W(ctx->r24, 0X10);
    // 0x8000DF6C: nop

    // 0x8000DF70: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x8000DF74: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x8000DF78: nop

    // 0x8000DF7C: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8000DF80: sw          $t1, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r9;
    // 0x8000DF84: lw          $t3, 0x40($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X40);
    // 0x8000DF88: lw          $t4, 0x38($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X38);
    // 0x8000DF8C: nop

    // 0x8000DF90: subu        $t2, $t3, $t4
    ctx->r10 = SUB32(ctx->r11, ctx->r12);
    // 0x8000DF94: sw          $t2, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r10;
    // 0x8000DF98: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x8000DF9C: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DFA0: nop

    // 0x8000DFA4: sw          $t5, 0x8($t6)
    MEM_W(0X8, ctx->r14) = ctx->r13;
    // 0x8000DFA8: lui         $t7, 0x8005
    ctx->r15 = S32(0X8005 << 16);
    // 0x8000DFAC: lw          $t7, 0x5418($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X5418);
    // 0x8000DFB0: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DFB4: nop

    // 0x8000DFB8: sw          $t7, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->r15;
    // 0x8000DFBC: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8000DFC0: lw          $a1, 0x5424($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5424);
    // 0x8000DFC4: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8000DFC8: jal         0x800315C0
    // 0x8000DFCC: nop

    osWritebackDCache_recomp(rdram, ctx);
        goto after_4;
    // 0x8000DFCC: nop

    after_4:
    // 0x8000DFD0: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8000DFD4: lw          $a1, 0x5424($a1)
    ctx->r5 = MEM_W(ctx->r5, 0X5424);
    // 0x8000DFD8: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8000DFDC: jal         0x800316C0
    // 0x8000DFE0: nop

    osInvalDCache_recomp(rdram, ctx);
        goto after_5;
    // 0x8000DFE0: nop

    after_5:
    // 0x8000DFE4: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000DFE8: lw          $t9, 0x541C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X541C);
    // 0x8000DFEC: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8000DFF0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8000DFF4: lw          $t4, 0x5424($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X5424);
    // 0x8000DFF8: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8000DFFC: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000E000: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000E004: subu        $t0, $t0, $t9
    ctx->r8 = SUB32(ctx->r8, ctx->r25);
    // 0x8000E008: sll         $t0, $t0, 3
    ctx->r8 = S32(ctx->r8 << 3);
    // 0x8000E00C: addiu       $t2, $t2, 0x5740
    ctx->r10 = ADD32(ctx->r10, 0X5740);
    // 0x8000E010: addiu       $t1, $t1, 0x5440
    ctx->r9 = ADD32(ctx->r9, 0X5440);
    // 0x8000E014: lw          $a3, 0x40($sp)
    ctx->r7 = MEM_W(ctx->r29, 0X40);
    // 0x8000E018: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000E01C: addiu       $t5, $t9, 0x1
    ctx->r13 = ADD32(ctx->r25, 0X1);
    // 0x8000E020: sw          $t5, 0x541C($at)
    MEM_W(0X541C, ctx->r1) = ctx->r13;
    // 0x8000E024: addu        $a0, $t0, $t1
    ctx->r4 = ADD32(ctx->r8, ctx->r9);
    // 0x8000E028: sw          $t2, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r10;
    // 0x8000E02C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8000E030: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x8000E034: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8000E038: jal         0x80031770
    // 0x8000E03C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    osPiStartDma_recomp(rdram, ctx);
        goto after_6;
    // 0x8000E03C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    after_6:
    // 0x8000E040: lw          $a0, 0x3C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X3C);
    // 0x8000E044: jal         0x800358D0
    // 0x8000E048: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_7;
    // 0x8000E048: nop

    after_7:
    // 0x8000E04C: lw          $t6, 0x38($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X38);
    // 0x8000E050: b           L_8000E060
    // 0x8000E054: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
        goto L_8000E060;
    // 0x8000E054: addu        $v0, $v0, $t6
    ctx->r2 = ADD32(ctx->r2, ctx->r14);
    // 0x8000E058: b           L_8000E060
    // 0x8000E05C: nop

        goto L_8000E060;
    // 0x8000E05C: nop

L_8000E060:
    // 0x8000E060: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8000E064: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    // 0x8000E068: jr          $ra
    // 0x8000E06C: nop

    return;
    // 0x8000E06C: nop

;}
RECOMP_FUNC void __amHandleFrameMsg(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8000DA70: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x8000DA74: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8000DA78: sw          $a0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r4;
    // 0x8000DA7C: sw          $a1, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r5;
    // 0x8000DA80: sw          $zero, 0x20($sp)
    MEM_W(0X20, ctx->r29) = 0;
    // 0x8000DA84: jal         0x8000E098
    // 0x8000DA88: nop

    static_0_8000E098(rdram, ctx);
        goto after_0;
    // 0x8000DA88: nop

    after_0:
    // 0x8000DA8C: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8000DA90: nop

    // 0x8000DA94: lw          $a0, 0x0($t6)
    ctx->r4 = MEM_W(ctx->r14, 0X0);
    // 0x8000DA98: jal         0x800358D0
    // 0x8000DA9C: nop

    osVirtualToPhysical_recomp(rdram, ctx);
        goto after_1;
    // 0x8000DA9C: nop

    after_1:
    // 0x8000DAA0: sw          $v0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r2;
    // 0x8000DAA4: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8000DAA8: nop

    // 0x8000DAAC: beq         $t7, $zero, L_8000DAD0
    if (ctx->r15 == 0) {
        // 0x8000DAB0: nop
    
            goto L_8000DAD0;
    }
    // 0x8000DAB0: nop

    // 0x8000DAB4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8000DAB8: nop

    // 0x8000DABC: lh          $a1, 0x4($t8)
    ctx->r5 = MEM_H(ctx->r24, 0X4);
    // 0x8000DAC0: lw          $a0, 0x0($t8)
    ctx->r4 = MEM_W(ctx->r24, 0X0);
    // 0x8000DAC4: sll         $t9, $a1, 2
    ctx->r25 = S32(ctx->r5 << 2);
    // 0x8000DAC8: jal         0x80035950
    // 0x8000DACC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    osAiSetNextBuffer_recomp(rdram, ctx);
        goto after_2;
    // 0x8000DACC: or          $a1, $t9, $zero
    ctx->r5 = ctx->r25 | 0;
    after_2:
L_8000DAD0:
    // 0x8000DAD0: jal         0x80035A00
    // 0x8000DAD4: nop

    osAiGetLength_recomp(rdram, ctx);
        goto after_3;
    // 0x8000DAD4: nop

    after_3:
    // 0x8000DAD8: srl         $t0, $v0, 2
    ctx->r8 = S32(U32(ctx->r2) >> 2);
    // 0x8000DADC: sw          $t0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r8;
    // 0x8000DAE0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000DAE4: lw          $t1, 0x5434($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5434);
    // 0x8000DAE8: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x8000DAEC: addiu       $at, $zero, -0x10
    ctx->r1 = ADD32(0, -0X10);
    // 0x8000DAF0: subu        $t3, $t1, $t2
    ctx->r11 = SUB32(ctx->r9, ctx->r10);
    // 0x8000DAF4: addiu       $t4, $t3, 0x50
    ctx->r12 = ADD32(ctx->r11, 0X50);
    // 0x8000DAF8: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8000DAFC: and         $t5, $t4, $at
    ctx->r13 = ctx->r12 & ctx->r1;
    // 0x8000DB00: addiu       $t6, $t5, 0x10
    ctx->r14 = ADD32(ctx->r13, 0X10);
    // 0x8000DB04: sh          $t6, 0x4($t7)
    MEM_H(0X4, ctx->r15) = ctx->r14;
    // 0x8000DB08: lw          $t8, 0x30($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X30);
    // 0x8000DB0C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000DB10: lw          $t0, 0x542C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X542C);
    // 0x8000DB14: lh          $t9, 0x4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X4);
    // 0x8000DB18: nop

    // 0x8000DB1C: slt         $at, $t9, $t0
    ctx->r1 = SIGNED(ctx->r25) < SIGNED(ctx->r8) ? 1 : 0;
    // 0x8000DB20: beq         $at, $zero, L_8000DB3C
    if (ctx->r1 == 0) {
        // 0x8000DB24: nop
    
            goto L_8000DB3C;
    }
    // 0x8000DB24: nop

    // 0x8000DB28: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000DB2C: lw          $t1, 0x542C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X542C);
    // 0x8000DB30: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8000DB34: nop

    // 0x8000DB38: sh          $t1, 0x4($t2)
    MEM_H(0X4, ctx->r10) = ctx->r9;
L_8000DB3C:
    // 0x8000DB3C: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000DB40: lw          $t3, 0x5428($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5428);
    // 0x8000DB44: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8000DB48: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000DB4C: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000DB50: addu        $a0, $a0, $t4
    ctx->r4 = ADD32(ctx->r4, ctx->r12);
    // 0x8000DB54: lw          $a0, 0x3180($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3180);
    // 0x8000DB58: lw          $a2, 0x2C($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X2C);
    // 0x8000DB5C: lh          $a3, 0x4($t5)
    ctx->r7 = MEM_H(ctx->r13, 0X4);
    // 0x8000DB60: jal         0x80035B58
    // 0x8000DB64: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    alAudioFrame(rdram, ctx);
        goto after_4;
    // 0x8000DB64: addiu       $a1, $sp, 0x24
    ctx->r5 = ADD32(ctx->r29, 0X24);
    after_4:
    // 0x8000DB68: sw          $v0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r2;
    // 0x8000DB6C: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8000DB70: nop

    // 0x8000DB74: bne         $t6, $zero, L_8000DB84
    if (ctx->r14 != 0) {
        // 0x8000DB78: nop
    
            goto L_8000DB84;
    }
    // 0x8000DB78: nop

    // 0x8000DB7C: b           L_8000DD14
    // 0x8000DB80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_8000DD14;
    // 0x8000DB80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_8000DB84:
    // 0x8000DB84: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8000DB88: nop

    // 0x8000DB8C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x8000DB90: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x8000DB94: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DB98: nop

    // 0x8000DB9C: sw          $zero, 0x0($t9)
    MEM_W(0X0, ctx->r25) = 0;
    // 0x8000DBA0: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DBA4: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8000DBA8: sw          $t0, 0x8($t1)
    MEM_W(0X8, ctx->r9) = ctx->r8;
    // 0x8000DBAC: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000DBB0: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DBB4: addiu       $t2, $t2, 0x3180
    ctx->r10 = ADD32(ctx->r10, 0X3180);
    // 0x8000DBB8: addiu       $t3, $t2, 0x200
    ctx->r11 = ADD32(ctx->r10, 0X200);
    // 0x8000DBBC: sw          $t3, 0x50($t4)
    MEM_W(0X50, ctx->r12) = ctx->r11;
    // 0x8000DBC0: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x8000DBC4: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DBC8: addiu       $t6, $t5, 0x70
    ctx->r14 = ADD32(ctx->r13, 0X70);
    // 0x8000DBCC: sw          $t6, 0x54($t7)
    MEM_W(0X54, ctx->r15) = ctx->r14;
    // 0x8000DBD0: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8000DBD4: lw          $t8, 0x5428($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X5428);
    // 0x8000DBD8: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8000DBDC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8000DBE0: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8000DBE4: lw          $t0, 0x3180($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X3180);
    // 0x8000DBE8: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DBEC: nop

    // 0x8000DBF0: sw          $t0, 0x40($t1)
    MEM_W(0X40, ctx->r9) = ctx->r8;
    // 0x8000DBF4: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8000DBF8: lw          $t3, 0x5428($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X5428);
    // 0x8000DBFC: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8000DC00: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8000DC04: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x8000DC08: lw          $t5, 0x3180($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X3180);
    // 0x8000DC0C: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x8000DC10: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC14: subu        $t6, $t2, $t5
    ctx->r14 = SUB32(ctx->r10, ctx->r13);
    // 0x8000DC18: sra         $t7, $t6, 3
    ctx->r15 = S32(SIGNED(ctx->r14) >> 3);
    // 0x8000DC1C: sll         $t8, $t7, 3
    ctx->r24 = S32(ctx->r15 << 3);
    // 0x8000DC20: sw          $t8, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->r24;
    // 0x8000DC24: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC28: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8000DC2C: sw          $t0, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->r8;
    // 0x8000DC30: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC34: lui         $t3, 0x8004
    ctx->r11 = S32(0X8004 << 16);
    // 0x8000DC38: addiu       $t3, $t3, 0x7F60
    ctx->r11 = ADD32(ctx->r11, 0X7F60);
    // 0x8000DC3C: sw          $t3, 0x18($t4)
    MEM_W(0X18, ctx->r12) = ctx->r11;
    // 0x8000DC40: lui         $t2, 0x8005
    ctx->r10 = S32(0X8005 << 16);
    // 0x8000DC44: lui         $t5, 0x8004
    ctx->r13 = S32(0X8004 << 16);
    // 0x8000DC48: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC4C: addiu       $t5, $t5, 0x7F60
    ctx->r13 = ADD32(ctx->r13, 0X7F60);
    // 0x8000DC50: addiu       $t2, $t2, -0x7FD0
    ctx->r10 = ADD32(ctx->r10, -0X7FD0);
    // 0x8000DC54: subu        $t6, $t2, $t5
    ctx->r14 = SUB32(ctx->r10, ctx->r13);
    // 0x8000DC58: sw          $t6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->r14;
    // 0x8000DC5C: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC60: nop

    // 0x8000DC64: sw          $zero, 0x14($t8)
    MEM_W(0X14, ctx->r24) = 0;
    // 0x8000DC68: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC6C: lui         $t9, 0x8005
    ctx->r25 = S32(0X8005 << 16);
    // 0x8000DC70: addiu       $t9, $t9, -0x6BA0
    ctx->r25 = ADD32(ctx->r25, -0X6BA0);
    // 0x8000DC74: sw          $t9, 0x20($t0)
    MEM_W(0X20, ctx->r8) = ctx->r25;
    // 0x8000DC78: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC7C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000DC80: addiu       $t1, $t1, -0x2ED0
    ctx->r9 = ADD32(ctx->r9, -0X2ED0);
    // 0x8000DC84: sw          $t1, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->r9;
    // 0x8000DC88: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC8C: addiu       $t4, $zero, 0x800
    ctx->r12 = ADD32(0, 0X800);
    // 0x8000DC90: sw          $t4, 0x2C($t2)
    MEM_W(0X2C, ctx->r10) = ctx->r12;
    // 0x8000DC94: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DC98: nop

    // 0x8000DC9C: sw          $zero, 0x30($t5)
    MEM_W(0X30, ctx->r13) = 0;
    // 0x8000DCA0: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DCA4: nop

    // 0x8000DCA8: sw          $zero, 0x34($t6)
    MEM_W(0X34, ctx->r14) = 0;
    // 0x8000DCAC: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DCB0: nop

    // 0x8000DCB4: sw          $zero, 0x38($t7)
    MEM_W(0X38, ctx->r15) = 0;
    // 0x8000DCB8: lw          $t8, 0x1C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DCBC: nop

    // 0x8000DCC0: sw          $zero, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = 0;
    // 0x8000DCC4: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DCC8: nop

    // 0x8000DCCC: sw          $zero, 0x48($t9)
    MEM_W(0X48, ctx->r25) = 0;
    // 0x8000DCD0: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DCD4: nop

    // 0x8000DCD8: sw          $zero, 0x4C($t0)
    MEM_W(0X4C, ctx->r8) = 0;
    // 0x8000DCDC: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8000DCE0: lw          $a0, 0x3170($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X3170);
    // 0x8000DCE4: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8000DCE8: jal         0x80032010
    // 0x8000DCEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    osSendMesg_recomp(rdram, ctx);
        goto after_5;
    // 0x8000DCEC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
    // 0x8000DCF0: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8000DCF4: lw          $t1, 0x5428($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X5428);
    // 0x8000DCF8: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8000DCFC: xori        $t3, $t1, 0x1
    ctx->r11 = ctx->r9 ^ 0X1;
    // 0x8000DD00: sw          $t3, 0x5428($at)
    MEM_W(0X5428, ctx->r1) = ctx->r11;
    // 0x8000DD04: b           L_8000DD14
    // 0x8000DD08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_8000DD14;
    // 0x8000DD08: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x8000DD0C: b           L_8000DD14
    // 0x8000DD10: nop

        goto L_8000DD14;
    // 0x8000DD10: nop

L_8000DD14:
    // 0x8000DD14: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8000DD18: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x8000DD1C: jr          $ra
    // 0x8000DD20: nop

    return;
    // 0x8000DD20: nop

;}
RECOMP_FUNC void __default_morecore(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80030A60: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80030A64: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80030A68: jal         0x8000E34C
    // 0x80030A6C: nop

    sbrk(rdram, ctx);
        goto after_0;
    // 0x80030A6C: nop

    after_0:
    // 0x80030A70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80030A74: bne         $v0, $at, L_80030A84
    if (ctx->r2 != ctx->r1) {
        // 0x80030A78: or          $v1, $v0, $zero
        ctx->r3 = ctx->r2 | 0;
            goto L_80030A84;
    }
    // 0x80030A78: or          $v1, $v0, $zero
    ctx->r3 = ctx->r2 | 0;
    // 0x80030A7C: b           L_80030A88
    // 0x80030A80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80030A88;
    // 0x80030A80: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80030A84:
    // 0x80030A84: or          $v0, $v1, $zero
    ctx->r2 = ctx->r3 | 0;
L_80030A88:
    // 0x80030A88: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80030A8C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80030A90: jr          $ra
    // 0x80030A94: nop

    return;
    // 0x80030A94: nop

;}
RECOMP_FUNC void Debug_SaveMode(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E6E8: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8002E6EC: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8002E6F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002E6F4: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x8002E6F8: nop

    // 0x8002E6FC: andi        $t7, $t6, 0x1000
    ctx->r15 = ctx->r14 & 0X1000;
    // 0x8002E700: beq         $t7, $zero, L_8002E89C
    if (ctx->r15 == 0) {
        // 0x8002E704: nop
    
            goto L_8002E89C;
    }
    // 0x8002E704: nop

    // 0x8002E708: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E70C: jal         0x80017FD8
    // 0x8002E710: addiu       $a0, $a0, -0x4190
    ctx->r4 = ADD32(ctx->r4, -0X4190);
    printf_stub(rdram, ctx);
        goto after_0;
    // 0x8002E710: addiu       $a0, $a0, -0x4190
    ctx->r4 = ADD32(ctx->r4, -0X4190);
    after_0:
    // 0x8002E714: sw          $zero, 0x34($sp)
    MEM_W(0X34, ctx->r29) = 0;
L_8002E718:
    // 0x8002E718: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8002E71C: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002E720: sll         $t9, $t8, 4
    ctx->r25 = S32(ctx->r24 << 4);
    // 0x8002E724: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8002E728: lh          $t0, 0x76A8($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X76A8);
    // 0x8002E72C: nop

    // 0x8002E730: sw          $t0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r8;
    // 0x8002E734: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E738: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E73C: beq         $t1, $at, L_8002E884
    if (ctx->r9 == ctx->r1) {
        // 0x8002E740: nop
    
            goto L_8002E884;
    }
    // 0x8002E740: nop

    // 0x8002E744: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8002E748: lui         $t4, 0x8005
    ctx->r12 = S32(0X8005 << 16);
    // 0x8002E74C: sll         $t3, $t2, 4
    ctx->r11 = S32(ctx->r10 << 4);
    // 0x8002E750: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x8002E754: lh          $t4, 0x76AA($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X76AA);
    // 0x8002E758: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002E75C: beq         $t4, $at, L_8002E884
    if (ctx->r12 == ctx->r1) {
        // 0x8002E760: nop
    
            goto L_8002E884;
    }
    // 0x8002E760: nop

    // 0x8002E764: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E768: jal         0x80017FD8
    // 0x8002E76C: addiu       $a0, $a0, -0x4188
    ctx->r4 = ADD32(ctx->r4, -0X4188);
    printf_stub(rdram, ctx);
        goto after_1;
    // 0x8002E76C: addiu       $a0, $a0, -0x4188
    ctx->r4 = ADD32(ctx->r4, -0X4188);
    after_1:
    // 0x8002E770: sw          $zero, 0x30($sp)
    MEM_W(0X30, ctx->r29) = 0;
L_8002E774:
    // 0x8002E774: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E778: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8002E77C: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x8002E780: subu        $t6, $t6, $t5
    ctx->r14 = SUB32(ctx->r14, ctx->r13);
    // 0x8002E784: sll         $t6, $t6, 5
    ctx->r14 = S32(ctx->r14 << 5);
    // 0x8002E788: lui         $t9, 0x8012
    ctx->r25 = S32(0X8012 << 16);
    // 0x8002E78C: addu        $t8, $t6, $t7
    ctx->r24 = ADD32(ctx->r14, ctx->r15);
    // 0x8002E790: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8002E794: lbu         $t9, 0x4DD8($t9)
    ctx->r25 = MEM_BU(ctx->r25, 0X4DD8);
    // 0x8002E798: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x8002E79C: bne         $t9, $at, L_8002E7AC
    if (ctx->r25 != ctx->r1) {
        // 0x8002E7A0: nop
    
            goto L_8002E7AC;
    }
    // 0x8002E7A0: nop

    // 0x8002E7A4: b           L_8002E7F4
    // 0x8002E7A8: nop

        goto L_8002E7F4;
    // 0x8002E7A8: nop

L_8002E7AC:
    // 0x8002E7AC: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x8002E7B0: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x8002E7B4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8002E7B8: subu        $t1, $t1, $t0
    ctx->r9 = SUB32(ctx->r9, ctx->r8);
    // 0x8002E7BC: sll         $t1, $t1, 5
    ctx->r9 = S32(ctx->r9 << 5);
    // 0x8002E7C0: lui         $a1, 0x8012
    ctx->r5 = S32(0X8012 << 16);
    // 0x8002E7C4: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x8002E7C8: addu        $a1, $a1, $t3
    ctx->r5 = ADD32(ctx->r5, ctx->r11);
    // 0x8002E7CC: lbu         $a1, 0x4DD8($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X4DD8);
    // 0x8002E7D0: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E7D4: jal         0x80017FD8
    // 0x8002E7D8: addiu       $a0, $a0, -0x4184
    ctx->r4 = ADD32(ctx->r4, -0X4184);
    printf_stub(rdram, ctx);
        goto after_2;
    // 0x8002E7D8: addiu       $a0, $a0, -0x4184
    ctx->r4 = ADD32(ctx->r4, -0X4184);
    after_2:
    // 0x8002E7DC: lw          $t4, 0x30($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X30);
    // 0x8002E7E0: nop

    // 0x8002E7E4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x8002E7E8: slti        $at, $t5, 0x14
    ctx->r1 = SIGNED(ctx->r13) < 0X14 ? 1 : 0;
    // 0x8002E7EC: bne         $at, $zero, L_8002E774
    if (ctx->r1 != 0) {
        // 0x8002E7F0: sw          $t5, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r13;
            goto L_8002E774;
    }
    // 0x8002E7F0: sw          $t5, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r13;
L_8002E7F4:
    // 0x8002E7F4: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E7F8: jal         0x80017FD8
    // 0x8002E7FC: addiu       $a0, $a0, -0x4180
    ctx->r4 = ADD32(ctx->r4, -0X4180);
    printf_stub(rdram, ctx);
        goto after_3;
    // 0x8002E7FC: addiu       $a0, $a0, -0x4180
    ctx->r4 = ADD32(ctx->r4, -0X4180);
    after_3:
    // 0x8002E800: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x8002E804: nop

    // 0x8002E808: slti        $at, $t6, 0x14
    ctx->r1 = SIGNED(ctx->r14) < 0X14 ? 1 : 0;
    // 0x8002E80C: beq         $at, $zero, L_8002E838
    if (ctx->r1 == 0) {
        // 0x8002E810: nop
    
            goto L_8002E838;
    }
    // 0x8002E810: nop

L_8002E814:
    // 0x8002E814: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E818: jal         0x80017FD8
    // 0x8002E81C: addiu       $a0, $a0, -0x417C
    ctx->r4 = ADD32(ctx->r4, -0X417C);
    printf_stub(rdram, ctx);
        goto after_4;
    // 0x8002E81C: addiu       $a0, $a0, -0x417C
    ctx->r4 = ADD32(ctx->r4, -0X417C);
    after_4:
    // 0x8002E820: lw          $t7, 0x30($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X30);
    // 0x8002E824: nop

    // 0x8002E828: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8002E82C: slti        $at, $t8, 0x14
    ctx->r1 = SIGNED(ctx->r24) < 0X14 ? 1 : 0;
    // 0x8002E830: bne         $at, $zero, L_8002E814
    if (ctx->r1 != 0) {
        // 0x8002E834: sw          $t8, 0x30($sp)
        MEM_W(0X30, ctx->r29) = ctx->r24;
            goto L_8002E814;
    }
    // 0x8002E834: sw          $t8, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r24;
L_8002E838:
    // 0x8002E838: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8002E83C: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002E840: addiu       $t1, $t1, 0x76A8
    ctx->r9 = ADD32(ctx->r9, 0X76A8);
    // 0x8002E844: sll         $t0, $t9, 4
    ctx->r8 = S32(ctx->r25 << 4);
    // 0x8002E848: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x8002E84C: lh          $t3, 0x8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0X8);
    // 0x8002E850: lh          $a1, 0x2($t2)
    ctx->r5 = MEM_H(ctx->r10, 0X2);
    // 0x8002E854: lh          $a2, 0x4($t2)
    ctx->r6 = MEM_H(ctx->r10, 0X4);
    // 0x8002E858: lh          $a3, 0x6($t2)
    ctx->r7 = MEM_H(ctx->r10, 0X6);
    // 0x8002E85C: sw          $t3, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r11;
    // 0x8002E860: lh          $t4, 0xA($t2)
    ctx->r12 = MEM_H(ctx->r10, 0XA);
    // 0x8002E864: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E868: sw          $t4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r12;
    // 0x8002E86C: lh          $t5, 0xC($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XC);
    // 0x8002E870: addiu       $a0, $a0, -0x4178
    ctx->r4 = ADD32(ctx->r4, -0X4178);
    // 0x8002E874: sw          $t5, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r13;
    // 0x8002E878: lh          $t6, 0xE($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XE);
    // 0x8002E87C: jal         0x80017FD8
    // 0x8002E880: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    printf_stub(rdram, ctx);
        goto after_5;
    // 0x8002E880: sw          $t6, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r14;
    after_5:
L_8002E884:
    // 0x8002E884: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8002E888: nop

    // 0x8002E88C: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x8002E890: slti        $at, $t8, 0x80
    ctx->r1 = SIGNED(ctx->r24) < 0X80 ? 1 : 0;
    // 0x8002E894: bne         $at, $zero, L_8002E718
    if (ctx->r1 != 0) {
        // 0x8002E898: sw          $t8, 0x34($sp)
        MEM_W(0X34, ctx->r29) = ctx->r24;
            goto L_8002E718;
    }
    // 0x8002E898: sw          $t8, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r24;
L_8002E89C:
    // 0x8002E89C: b           L_8002E8A4
    // 0x8002E8A0: nop

        goto L_8002E8A4;
    // 0x8002E8A0: nop

L_8002E8A4:
    // 0x8002E8A4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8002E8A8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    // 0x8002E8AC: jr          $ra
    // 0x8002E8B0: nop

    return;
    // 0x8002E8B0: nop

;}
RECOMP_FUNC void func_8002E524(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8002E524: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8002E528: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8002E52C: jal         0x8002BA34
    // 0x8002E530: nop

    func_8002BA34(rdram, ctx);
        goto after_0;
    // 0x8002E530: nop

    after_0:
    // 0x8002E534: beq         $v0, $zero, L_8002E544
    if (ctx->r2 == 0) {
        // 0x8002E538: nop
    
            goto L_8002E544;
    }
    // 0x8002E538: nop

    // 0x8002E53C: b           L_8002E6D8
    // 0x8002E540: nop

        goto L_8002E6D8;
    // 0x8002E540: nop

L_8002E544:
    // 0x8002E544: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x8002E548: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8002E54C: lhu         $t6, -0x1C82($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C82);
    // 0x8002E550: nop

    // 0x8002E554: andi        $t7, $t6, 0x2000
    ctx->r15 = ctx->r14 & 0X2000;
    // 0x8002E558: beq         $t7, $zero, L_8002E5A4
    if (ctx->r15 == 0) {
        // 0x8002E55C: nop
    
            goto L_8002E5A4;
    }
    // 0x8002E55C: nop

    // 0x8002E560: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8002E564: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x8002E568: nop

    // 0x8002E56C: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8002E570: beq         $t9, $zero, L_8002E584
    if (ctx->r25 == 0) {
        // 0x8002E574: nop
    
            goto L_8002E584;
    }
    // 0x8002E574: nop

    // 0x8002E578: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x8002E57C: b           L_8002E5A4
    // 0x8002E580: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
        goto L_8002E5A4;
    // 0x8002E580: sw          $t0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r8;
L_8002E584:
    // 0x8002E584: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8002E588: lhu         $t1, -0x1C7C($t1)
    ctx->r9 = MEM_HU(ctx->r9, -0X1C7C);
    // 0x8002E58C: nop

    // 0x8002E590: andi        $t2, $t1, 0x4000
    ctx->r10 = ctx->r9 & 0X4000;
    // 0x8002E594: beq         $t2, $zero, L_8002E5A4
    if (ctx->r10 == 0) {
        // 0x8002E598: nop
    
            goto L_8002E5A4;
    }
    // 0x8002E598: nop

    // 0x8002E59C: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x8002E5A0: sw          $t3, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r11;
L_8002E5A4:
    // 0x8002E5A4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x8002E5A8: nop

    // 0x8002E5AC: beq         $t4, $zero, L_8002E678
    if (ctx->r12 == 0) {
        // 0x8002E5B0: nop
    
            goto L_8002E678;
    }
    // 0x8002E5B0: nop

L_8002E5B4:
    // 0x8002E5B4: lui         $t5, 0x8005
    ctx->r13 = S32(0X8005 << 16);
    // 0x8002E5B8: lh          $t5, 0x7692($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X7692);
    // 0x8002E5BC: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x8002E5C0: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E5C4: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x8002E5C8: sh          $t7, 0x7692($at)
    MEM_H(0X7692, ctx->r1) = ctx->r15;
    // 0x8002E5CC: lui         $t8, 0x8005
    ctx->r24 = S32(0X8005 << 16);
    // 0x8002E5D0: lh          $t8, 0x7692($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7692);
    // 0x8002E5D4: nop

    // 0x8002E5D8: bgez        $t8, L_8002E5F0
    if (SIGNED(ctx->r24) >= 0) {
        // 0x8002E5DC: nop
    
            goto L_8002E5F0;
    }
    // 0x8002E5DC: nop

    // 0x8002E5E0: addiu       $t9, $zero, 0x7F
    ctx->r25 = ADD32(0, 0X7F);
    // 0x8002E5E4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E5E8: b           L_8002E610
    // 0x8002E5EC: sh          $t9, 0x7692($at)
    MEM_H(0X7692, ctx->r1) = ctx->r25;
        goto L_8002E610;
    // 0x8002E5EC: sh          $t9, 0x7692($at)
    MEM_H(0X7692, ctx->r1) = ctx->r25;
L_8002E5F0:
    // 0x8002E5F0: lui         $t0, 0x8005
    ctx->r8 = S32(0X8005 << 16);
    // 0x8002E5F4: lh          $t0, 0x7692($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7692);
    // 0x8002E5F8: nop

    // 0x8002E5FC: slti        $at, $t0, 0x80
    ctx->r1 = SIGNED(ctx->r8) < 0X80 ? 1 : 0;
    // 0x8002E600: bne         $at, $zero, L_8002E610
    if (ctx->r1 != 0) {
        // 0x8002E604: nop
    
            goto L_8002E610;
    }
    // 0x8002E604: nop

    // 0x8002E608: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E60C: sh          $zero, 0x7692($at)
    MEM_H(0X7692, ctx->r1) = 0;
L_8002E610:
    // 0x8002E610: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002E614: lh          $t1, 0x7692($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7692);
    // 0x8002E618: lui         $t3, 0x8005
    ctx->r11 = S32(0X8005 << 16);
    // 0x8002E61C: addiu       $t3, $t3, 0x76A8
    ctx->r11 = ADD32(ctx->r11, 0X76A8);
    // 0x8002E620: sll         $t2, $t1, 4
    ctx->r10 = S32(ctx->r9 << 4);
    // 0x8002E624: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8002E628: lh          $t5, 0x0($t4)
    ctx->r13 = MEM_H(ctx->r12, 0X0);
    // 0x8002E62C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E630: beq         $t5, $at, L_8002E670
    if (ctx->r13 == ctx->r1) {
        // 0x8002E634: nop
    
            goto L_8002E670;
    }
    // 0x8002E634: nop

    // 0x8002E638: lh          $t6, 0x2($t4)
    ctx->r14 = MEM_H(ctx->r12, 0X2);
    // 0x8002E63C: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002E640: beq         $t6, $at, L_8002E670
    if (ctx->r14 == ctx->r1) {
        // 0x8002E644: nop
    
            goto L_8002E670;
    }
    // 0x8002E644: nop

    // 0x8002E648: lh          $t7, 0x4($t4)
    ctx->r15 = MEM_H(ctx->r12, 0X4);
    // 0x8002E64C: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002E650: beq         $t7, $at, L_8002E670
    if (ctx->r15 == ctx->r1) {
        // 0x8002E654: nop
    
            goto L_8002E670;
    }
    // 0x8002E654: nop

    // 0x8002E658: lh          $t8, 0x6($t4)
    ctx->r24 = MEM_H(ctx->r12, 0X6);
    // 0x8002E65C: addiu       $at, $zero, 0x7530
    ctx->r1 = ADD32(0, 0X7530);
    // 0x8002E660: beq         $t8, $at, L_8002E670
    if (ctx->r24 == ctx->r1) {
        // 0x8002E664: nop
    
            goto L_8002E670;
    }
    // 0x8002E664: nop

    // 0x8002E668: b           L_8002E678
    // 0x8002E66C: nop

        goto L_8002E678;
    // 0x8002E66C: nop

L_8002E670:
    // 0x8002E670: b           L_8002E5B4
    // 0x8002E674: nop

        goto L_8002E5B4;
    // 0x8002E674: nop

L_8002E678:
    // 0x8002E678: jal         0x8002B9B8
    // 0x8002E67C: nop

    func_8002B9B8(rdram, ctx);
        goto after_1;
    // 0x8002E67C: nop

    after_1:
    // 0x8002E680: lui         $a0, 0x8005
    ctx->r4 = S32(0X8005 << 16);
    // 0x8002E684: lh          $a0, 0x7692($a0)
    ctx->r4 = MEM_H(ctx->r4, 0X7692);
    // 0x8002E688: jal         0x8002B894
    // 0x8002E68C: nop

    func_8002B894(rdram, ctx);
        goto after_2;
    // 0x8002E68C: nop

    after_2:
    // 0x8002E690: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8002E694: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E698: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8002E69C: beq         $t9, $at, L_8002E6D0
    if (ctx->r25 == ctx->r1) {
        // 0x8002E6A0: nop
    
            goto L_8002E6D0;
    }
    // 0x8002E6A0: nop

    // 0x8002E6A4: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x8002E6A8: lbu         $a1, 0x769E($a1)
    ctx->r5 = MEM_BU(ctx->r5, 0X769E);
    // 0x8002E6AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8002E6B0: andi        $t0, $a1, 0x1
    ctx->r8 = ctx->r5 & 0X1;
    // 0x8002E6B4: jal         0x8001BB34
    // 0x8002E6B8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x8002E6B8: or          $a1, $t0, $zero
    ctx->r5 = ctx->r8 | 0;
    after_3:
    // 0x8002E6BC: lui         $t1, 0x8005
    ctx->r9 = S32(0X8005 << 16);
    // 0x8002E6C0: lbu         $t1, 0x769E($t1)
    ctx->r9 = MEM_BU(ctx->r9, 0X769E);
    // 0x8002E6C4: lui         $at, 0x8005
    ctx->r1 = S32(0X8005 << 16);
    // 0x8002E6C8: addiu       $t2, $t1, 0x1
    ctx->r10 = ADD32(ctx->r9, 0X1);
    // 0x8002E6CC: sb          $t2, 0x769E($at)
    MEM_B(0X769E, ctx->r1) = ctx->r10;
L_8002E6D0:
    // 0x8002E6D0: b           L_8002E6D8
    // 0x8002E6D4: nop

        goto L_8002E6D8;
    // 0x8002E6D4: nop

L_8002E6D8:
    // 0x8002E6D8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8002E6DC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8002E6E0: jr          $ra
    // 0x8002E6E4: nop

    return;
    // 0x8002E6E4: nop

;}
RECOMP_FUNC void ReadEeprom(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800203C0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800203C4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800203C8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800203CC: addiu       $t6, $t6, -0x1D50
    ctx->r14 = ADD32(ctx->r14, -0X1D50);
    // 0x800203D0: lhu         $t7, 0x0($t6)
    ctx->r15 = MEM_HU(ctx->r14, 0X0);
    // 0x800203D4: nop

    // 0x800203D8: andi        $t8, $t7, 0x8000
    ctx->r24 = ctx->r15 & 0X8000;
    // 0x800203DC: beq         $t8, $zero, L_80020408
    if (ctx->r24 == 0) {
        // 0x800203E0: nop
    
            goto L_80020408;
    }
    // 0x800203E0: nop

    // 0x800203E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800203E8: lui         $a1, 0x8005
    ctx->r5 = S32(0X8005 << 16);
    // 0x800203EC: addiu       $a1, $a1, 0x7240
    ctx->r5 = ADD32(ctx->r5, 0X7240);
    // 0x800203F0: addiu       $a0, $a0, 0x76B0
    ctx->r4 = ADD32(ctx->r4, 0X76B0);
    // 0x800203F4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800203F8: jal         0x8001F814
    // 0x800203FC: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    Eeprom_Read(rdram, ctx);
        goto after_0;
    // 0x800203FC: addiu       $a3, $zero, 0x200
    ctx->r7 = ADD32(0, 0X200);
    after_0:
    // 0x80020400: beq         $v0, $zero, L_80020408
    if (ctx->r2 == 0) {
        // 0x80020404: nop
    
            goto L_80020408;
    }
    // 0x80020404: nop

L_80020408:
    // 0x80020408: b           L_80020410
    // 0x8002040C: nop

        goto L_80020410;
    // 0x8002040C: nop

L_80020410:
    // 0x80020410: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80020414: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80020418: jr          $ra
    // 0x8002041C: nop

    return;
    // 0x8002041C: nop

;}
RECOMP_FUNC void func_80001918(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80001918: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8000191C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80001920: lui         $t6, 0x20
    ctx->r14 = S32(0X20 << 16);
    // 0x80001924: lui         $t7, 0x20
    ctx->r15 = S32(0X20 << 16);
    // 0x80001928: addiu       $t7, $t7, -0x1860
    ctx->r15 = ADD32(ctx->r15, -0X1860);
    // 0x8000192C: addiu       $t6, $t6, -0x5330
    ctx->r14 = ADD32(ctx->r14, -0X5330);
    // 0x80001930: lui         $a1, 0x8033
    ctx->r5 = S32(0X8033 << 16);
    // 0x80001934: ori         $a1, $a1, 0xA000
    ctx->r5 = ctx->r5 | 0XA000;
    // 0x80001938: or          $a0, $t6, $zero
    ctx->r4 = ctx->r14 | 0;
    // 0x8000193C: jal         0x8000068C
    // 0x80001940: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    load_from_rom_to_addr(rdram, ctx);
        goto after_0;
    // 0x80001940: subu        $a2, $t7, $t6
    ctx->r6 = SUB32(ctx->r15, ctx->r14);
    after_0:
    // 0x80001944: b           L_8000194C
    // 0x80001948: nop

        goto L_8000194C;
    // 0x80001948: nop

L_8000194C:
    // 0x8000194C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80001950: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80001954: jr          $ra
    // 0x80001958: nop

    return;
    // 0x80001958: nop

;}
RECOMP_FUNC void func_8001CD50(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8001CD50: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8001CD54: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8001CD58: sw          $a0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r4;
    // 0x8001CD5C: sw          $a1, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r5;
    // 0x8001CD60: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8001CD64: lw          $a1, 0x1C($sp)
    ctx->r5 = MEM_W(ctx->r29, 0X1C);
    // 0x8001CD68: jal         0x8001CAAC
    // 0x8001CD6C: nop

    func_8001CAAC(rdram, ctx);
        goto after_0;
    // 0x8001CD6C: nop

    after_0:
    // 0x8001CD70: b           L_8001CD78
    // 0x8001CD74: nop

        goto L_8001CD78;
    // 0x8001CD74: nop

L_8001CD78:
    // 0x8001CD78: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8001CD7C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8001CD80: jr          $ra
    // 0x8001CD84: nop

    return;
    // 0x8001CD84: nop

;}
