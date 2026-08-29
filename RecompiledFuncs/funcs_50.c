#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80088EAC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088EAC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088EB0: sh          $a0, 0x4BF2($at)
    MEM_H(0X4BF2, ctx->r1) = ctx->r4;
    // 0x80088EB4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088EB8: sh          $zero, 0x4C0C($at)
    MEM_H(0X4C0C, ctx->r1) = 0;
    // 0x80088EBC: jr          $ra
    // 0x80088EC0: nop

    return;
    // 0x80088EC0: nop

    // 0x80088EC4: jr          $ra
    // 0x80088EC8: nop

    return;
    // 0x80088EC8: nop

;}
RECOMP_FUNC void func_80095C30(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095C30: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80095C34: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80095C38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80095C3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80095C40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80095C44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80095C48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095C4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80095C50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095C54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80095C58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095C5C: lbu         $t8, 0x4282($t8)
    ctx->r24 = MEM_BU(ctx->r24, 0X4282);
    // 0x80095C60: nop

    // 0x80095C64: bne         $t8, $zero, L_80095D1C
    if (ctx->r24 != 0) {
        // 0x80095C68: nop
    
            goto L_80095D1C;
    }
    // 0x80095C68: nop

    // 0x80095C6C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80095C70: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80095C74: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095C78: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80095C7C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80095C80: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80095C84: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80095C88: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80095C8C: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80095C90: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80095C94: sb          $t9, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = ctx->r25;
    // 0x80095C98: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80095C9C: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80095CA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095CA4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80095CA8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80095CAC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80095CB0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80095CB4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80095CB8: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80095CBC: addiu       $t2, $zero, 0x1E
    ctx->r10 = ADD32(0, 0X1E);
    // 0x80095CC0: sh          $t2, 0x41F6($at)
    MEM_H(0X41F6, ctx->r1) = ctx->r10;
    // 0x80095CC4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80095CC8: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80095CCC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80095CD0: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80095CD4: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80095CD8: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80095CDC: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80095CE0: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80095CE4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095CE8: addu        $at, $at, $t6
    ctx->r1 = ADD32(ctx->r1, ctx->r14);
    // 0x80095CEC: swc1        $f4, 0x4194($at)
    MEM_W(0X4194, ctx->r1) = ctx->f4.u32l;
    // 0x80095CF0: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80095CF4: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80095CF8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80095CFC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80095D00: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095D04: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80095D08: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80095D0C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80095D10: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095D14: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80095D18: swc1        $f6, 0x4198($at)
    MEM_W(0X4198, ctx->r1) = ctx->f6.u32l;
L_80095D1C:
    // 0x80095D1C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095D20: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095D24: jal         0x80029C40
    // 0x80095D28: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80095D28: nop

    after_0:
    // 0x80095D2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80095D30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80095D34: jal         0x80029D04
    // 0x80095D38: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80095D38: nop

    after_1:
    // 0x80095D3C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80095D40: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80095D44: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80095D48: sll         $t9, $t0, 2
    ctx->r25 = S32(ctx->r8 << 2);
    // 0x80095D4C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80095D50: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80095D54: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80095D58: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80095D5C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80095D60: addu        $t3, $t9, $t1
    ctx->r11 = ADD32(ctx->r25, ctx->r9);
    // 0x80095D64: lh          $t2, 0xA6($t3)
    ctx->r10 = MEM_H(ctx->r11, 0XA6);
    // 0x80095D68: nop

    // 0x80095D6C: addiu       $t4, $t2, -0x1
    ctx->r12 = ADD32(ctx->r10, -0X1);
    // 0x80095D70: sh          $t4, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r12;
    // 0x80095D74: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80095D78: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x80095D7C: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80095D80: sll         $t6, $t5, 2
    ctx->r14 = S32(ctx->r13 << 2);
    // 0x80095D84: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80095D88: sll         $t6, $t6, 2
    ctx->r14 = S32(ctx->r14 << 2);
    // 0x80095D8C: addu        $t6, $t6, $t5
    ctx->r14 = ADD32(ctx->r14, ctx->r13);
    // 0x80095D90: sll         $t6, $t6, 4
    ctx->r14 = S32(ctx->r14 << 4);
    // 0x80095D94: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80095D98: lh          $t7, 0x41F6($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X41F6);
    // 0x80095D9C: nop

    // 0x80095DA0: bne         $t7, $zero, L_80095DFC
    if (ctx->r15 != 0) {
        // 0x80095DA4: nop
    
            goto L_80095DFC;
    }
    // 0x80095DA4: nop

    // 0x80095DA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80095DAC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80095DB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095DB4: sll         $t0, $t8, 2
    ctx->r8 = S32(ctx->r24 << 2);
    // 0x80095DB8: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80095DBC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80095DC0: addu        $t0, $t0, $t8
    ctx->r8 = ADD32(ctx->r8, ctx->r24);
    // 0x80095DC4: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80095DC8: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80095DCC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x80095DD0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80095DD4: lw          $t1, 0x7A60($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X7A60);
    // 0x80095DD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80095DDC: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80095DE0: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80095DE4: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80095DE8: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80095DEC: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80095DF0: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80095DF4: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80095DF8: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_80095DFC:
    // 0x80095DFC: b           L_80095E04
    // 0x80095E00: nop

        goto L_80095E04;
    // 0x80095E00: nop

L_80095E04:
    // 0x80095E04: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80095E08: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80095E0C: jr          $ra
    // 0x80095E10: nop

    return;
    // 0x80095E10: nop

;}
RECOMP_FUNC void func_800E624C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E624C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800E6250: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800E6254: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E6258: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E625C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E6260: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E6264: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6268: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E626C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6270: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6274: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E6278: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E627C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800E6280: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800E6284: nop

    // 0x800E6288: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800E628C: nop

    // 0x800E6290: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800E6294: sltiu       $at, $t2, 0x5
    ctx->r1 = ctx->r10 < 0X5 ? 1 : 0;
    // 0x800E6298: beq         $at, $zero, L_800E630C
    if (ctx->r1 == 0) {
        // 0x800E629C: nop
    
            goto L_800E630C;
    }
    // 0x800E629C: nop

    // 0x800E62A0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800E62A4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E62A8: addu        $at, $at, $t2
    gpr jr_addend_800E62B4 = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800E62AC: lw          $t2, 0x54BC($at)
    ctx->r10 = ADD32(ctx->r1, 0X54BC);
    // 0x800E62B0: nop

    // 0x800E62B4: jr          $t2
    // 0x800E62B8: nop

    switch (jr_addend_800E62B4 >> 2) {
        case 0: goto L_800E62BC; break;
        case 1: goto L_800E62CC; break;
        case 2: goto L_800E62DC; break;
        case 3: goto L_800E62EC; break;
        case 4: goto L_800E62FC; break;
        default: switch_error(__func__, 0x800E62B4, 0x801154BC);
    }
    // 0x800E62B8: nop

L_800E62BC:
    // 0x800E62BC: jal         0x800E594C
    // 0x800E62C0: nop

    func_800E594C(rdram, ctx);
        goto after_0;
    // 0x800E62C0: nop

    after_0:
    // 0x800E62C4: b           L_800E6314
    // 0x800E62C8: nop

        goto L_800E6314;
    // 0x800E62C8: nop

L_800E62CC:
    // 0x800E62CC: jal         0x800E5C14
    // 0x800E62D0: nop

    func_800E5C14(rdram, ctx);
        goto after_1;
    // 0x800E62D0: nop

    after_1:
    // 0x800E62D4: b           L_800E6314
    // 0x800E62D8: nop

        goto L_800E6314;
    // 0x800E62D8: nop

L_800E62DC:
    // 0x800E62DC: jal         0x800E5DF0
    // 0x800E62E0: nop

    func_800E5DF0(rdram, ctx);
        goto after_2;
    // 0x800E62E0: nop

    after_2:
    // 0x800E62E4: b           L_800E6314
    // 0x800E62E8: nop

        goto L_800E6314;
    // 0x800E62E8: nop

L_800E62EC:
    // 0x800E62EC: jal         0x800E5F18
    // 0x800E62F0: nop

    func_800E5F18(rdram, ctx);
        goto after_3;
    // 0x800E62F0: nop

    after_3:
    // 0x800E62F4: b           L_800E6314
    // 0x800E62F8: nop

        goto L_800E6314;
    // 0x800E62F8: nop

L_800E62FC:
    // 0x800E62FC: jal         0x800E60D8
    // 0x800E6300: nop

    func_800E60D8(rdram, ctx);
        goto after_4;
    // 0x800E6300: nop

    after_4:
    // 0x800E6304: b           L_800E6314
    // 0x800E6308: nop

        goto L_800E6314;
    // 0x800E6308: nop

L_800E630C:
    // 0x800E630C: b           L_800E6314
    // 0x800E6310: nop

        goto L_800E6314;
    // 0x800E6310: nop

L_800E6314:
    // 0x800E6314: b           L_800E631C
    // 0x800E6318: nop

        goto L_800E631C;
    // 0x800E6318: nop

L_800E631C:
    // 0x800E631C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800E6320: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800E6324: jr          $ra
    // 0x800E6328: nop

    return;
    // 0x800E6328: nop

;}
RECOMP_FUNC void func_8009E2FC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8009E2FC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8009E300: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8009E304: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8009E308: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8009E30C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8009E310: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8009E314: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E318: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8009E31C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8009E320: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8009E324: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8009E328: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8009E32C: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x8009E330: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E334: nop

    // 0x8009E338: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8009E33C: nop

    // 0x8009E340: bne         $t1, $zero, L_8009E360
    if (ctx->r9 != 0) {
        // 0x8009E344: nop
    
            goto L_8009E360;
    }
    // 0x8009E344: nop

    // 0x8009E348: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E34C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x8009E350: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x8009E354: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E358: nop

    // 0x8009E35C: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
L_8009E360:
    // 0x8009E360: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E364: nop

    // 0x8009E368: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x8009E36C: nop

    // 0x8009E370: slti        $at, $t6, 0xA
    ctx->r1 = SIGNED(ctx->r14) < 0XA ? 1 : 0;
    // 0x8009E374: beq         $at, $zero, L_8009E3B4
    if (ctx->r1 == 0) {
        // 0x8009E378: nop
    
            goto L_8009E3B4;
    }
    // 0x8009E378: nop

    // 0x8009E37C: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E380: nop

    // 0x8009E384: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8009E388: nop

    // 0x8009E38C: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x8009E390: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x8009E394: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E398: lui         $at, 0x422C
    ctx->r1 = S32(0X422C << 16);
    // 0x8009E39C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8009E3A0: lwc1        $f4, 0x4($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X4);
    // 0x8009E3A4: nop

    // 0x8009E3A8: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x8009E3AC: b           L_8009E3F4
    // 0x8009E3B0: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
        goto L_8009E3F4;
    // 0x8009E3B0: swc1        $f8, 0x4($t0)
    MEM_W(0X4, ctx->r8) = ctx->f8.u32l;
L_8009E3B4:
    // 0x8009E3B4: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E3B8: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x8009E3BC: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8009E3C0: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x8009E3C4: nop

    // 0x8009E3C8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x8009E3CC: jal         0x80026DBC
    // 0x8009E3D0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    Get_ObjIdx_ById(rdram, ctx);
        goto after_0;
    // 0x8009E3D0: addiu       $a0, $zero, 0x28
    ctx->r4 = ADD32(0, 0X28);
    after_0:
    // 0x8009E3D4: sw          $v0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r2;
    // 0x8009E3D8: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8009E3DC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8009E3E0: beq         $t4, $at, L_8009E3F4
    if (ctx->r12 == ctx->r1) {
        // 0x8009E3E4: nop
    
            goto L_8009E3F4;
    }
    // 0x8009E3E4: nop

    // 0x8009E3E8: lw          $a0, 0x18($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X18);
    // 0x8009E3EC: jal         0x8002B0E4
    // 0x8009E3F0: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x8009E3F0: nop

    after_1:
L_8009E3F4:
    // 0x8009E3F4: b           L_8009E3FC
    // 0x8009E3F8: nop

        goto L_8009E3FC;
    // 0x8009E3F8: nop

L_8009E3FC:
    // 0x8009E3FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8009E400: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009E404: jr          $ra
    // 0x8009E408: nop

    return;
    // 0x8009E408: nop

;}
RECOMP_FUNC void func_80092A6C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092A6C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092A70: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80092A74: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092A78: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092A7C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092A80: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80092A84: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092A88: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092A8C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092A90: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80092A94: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092A98: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092A9C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092AA0: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80092AA4: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092AA8: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092AAC: addiu       $a1, $a1, 0x1738
    ctx->r5 = ADD32(ctx->r5, 0X1738);
    // 0x80092AB0: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80092AB4: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80092AB8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80092ABC: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80092AC0: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80092AC4: jal         0x80027464
    // 0x80092AC8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80092AC8: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80092ACC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80092AD0: b           L_80092AD8
    // 0x80092AD4: nop

        goto L_80092AD8;
    // 0x80092AD4: nop

L_80092AD8:
    // 0x80092AD8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80092ADC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80092AE0: jr          $ra
    // 0x80092AE4: nop

    return;
    // 0x80092AE4: nop

;}
RECOMP_FUNC void func_80080AFC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80080AFC: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80080B00: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80080B04: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80080B08: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x80080B0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80080B10: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80080B14: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80080B18: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80080B1C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080B20: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80080B24: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80080B28: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80080B2C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80080B30: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80080B34: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80080B38: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80080B3C: addiu       $t0, $zero, 0x2C8
    ctx->r8 = ADD32(0, 0X2C8);
    // 0x80080B40: sh          $t0, 0xE4($t1)
    MEM_H(0XE4, ctx->r9) = ctx->r8;
    // 0x80080B44: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80080B48: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x80080B4C: sh          $t2, 0xBE($t3)
    MEM_H(0XBE, ctx->r11) = ctx->r10;
    // 0x80080B50: jal         0x80014E80
    // 0x80080B54: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80080B54: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_0:
    // 0x80080B58: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x80080B5C: nop

    // 0x80080B60: sh          $v0, 0xC0($t4)
    MEM_H(0XC0, ctx->r12) = ctx->r2;
    // 0x80080B64: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80080B68: addiu       $t5, $zero, 0x27
    ctx->r13 = ADD32(0, 0X27);
    // 0x80080B6C: sh          $t5, 0xC2($t6)
    MEM_H(0XC2, ctx->r14) = ctx->r13;
    // 0x80080B70: jal         0x80014E80
    // 0x80080B74: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    Math_Random(rdram, ctx);
        goto after_1;
    // 0x80080B74: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    after_1:
    // 0x80080B78: mtc1        $v0, $f4
    ctx->f4.u32l = ctx->r2;
    // 0x80080B7C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80080B80: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80080B84: swc1        $f6, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f6.u32l;
    // 0x80080B88: jal         0x80014E80
    // 0x80080B8C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    Math_Random(rdram, ctx);
        goto after_2;
    // 0x80080B8C: addiu       $a0, $zero, 0x8
    ctx->r4 = ADD32(0, 0X8);
    after_2:
    // 0x80080B90: addiu       $t8, $v0, 0x8
    ctx->r24 = ADD32(ctx->r2, 0X8);
    // 0x80080B94: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80080B98: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x80080B9C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80080BA0: swc1        $f10, 0x28($t9)
    MEM_W(0X28, ctx->r25) = ctx->f10.u32l;
    // 0x80080BA4: jal         0x80014E80
    // 0x80080BA8: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80080BA8: addiu       $a0, $zero, -0xC
    ctx->r4 = ADD32(0, -0XC);
    after_3:
    // 0x80080BAC: mtc1        $v0, $f16
    ctx->f16.u32l = ctx->r2;
    // 0x80080BB0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80080BB4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80080BB8: swc1        $f18, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f18.u32l;
    // 0x80080BBC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80080BC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80080BC4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80080BC8: nop

    // 0x80080BCC: swc1        $f4, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f4.u32l;
    // 0x80080BD0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80080BD4: nop

    // 0x80080BD8: lwc1        $f20, 0x14($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X14);
    // 0x80080BDC: nop

    // 0x80080BE0: swc1        $f20, 0x10($t2)
    MEM_W(0X10, ctx->r10) = ctx->f20.u32l;
    // 0x80080BE4: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x80080BE8: nop

    // 0x80080BEC: swc1        $f20, 0xC($t3)
    MEM_W(0XC, ctx->r11) = ctx->f20.u32l;
    // 0x80080BF0: b           L_80080BF8
    // 0x80080BF4: nop

        goto L_80080BF8;
    // 0x80080BF4: nop

L_80080BF8:
    // 0x80080BF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80080BFC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80080C00: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80080C04: jr          $ra
    // 0x80080C08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80080C08: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800CF788(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF788: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF78C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800CF790: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800CF794: bne         $t6, $at, L_800CF7F0
    if (ctx->r14 != ctx->r1) {
        // 0x800CF798: nop
    
            goto L_800CF7F0;
    }
    // 0x800CF798: nop

    // 0x800CF79C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800CF7A0: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800CF7A4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CF7A8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800CF7AC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CF7B0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800CF7B4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800CF7B8: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800CF7BC: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800CF7C0: addiu       $t7, $zero, 0x3
    ctx->r15 = ADD32(0, 0X3);
    // 0x800CF7C4: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800CF7C8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CF7CC: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800CF7D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800CF7D4: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800CF7D8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CF7DC: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800CF7E0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800CF7E4: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800CF7E8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800CF7EC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800CF7F0:
    // 0x800CF7F0: jr          $ra
    // 0x800CF7F4: nop

    return;
    // 0x800CF7F4: nop

    // 0x800CF7F8: jr          $ra
    // 0x800CF7FC: nop

    return;
    // 0x800CF7FC: nop

;}
RECOMP_FUNC void func_800C90F4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C90F4: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800C90F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C90FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C9100: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C9104: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9108: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C910C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C9110: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9114: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9118: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C911C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C9120: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800C9124: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800C9128: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800C912C: nop

    // 0x800C9130: bne         $t0, $zero, L_800C9150
    if (ctx->r8 != 0) {
        // 0x800C9134: nop
    
            goto L_800C9150;
    }
    // 0x800C9134: nop

    // 0x800C9138: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800C913C: nop

    // 0x800C9140: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800C9144: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800C9148: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800C914C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800C9150:
    // 0x800C9150: b           L_800C9158
    // 0x800C9154: nop

        goto L_800C9158;
    // 0x800C9154: nop

L_800C9158:
    // 0x800C9158: jr          $ra
    // 0x800C915C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800C915C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800C980C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C980C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800C9810: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C9814: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800C9818: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800C981C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800C9820: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800C9824: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9828: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800C982C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800C9830: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800C9834: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800C9838: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800C983C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800C9840: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C9844: nop

    // 0x800C9848: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800C984C: nop

    // 0x800C9850: bne         $t1, $zero, L_800C988C
    if (ctx->r9 != 0) {
        // 0x800C9854: nop
    
            goto L_800C988C;
    }
    // 0x800C9854: nop

    // 0x800C9858: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800C985C: nop

    // 0x800C9860: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800C9864: nop

    // 0x800C9868: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800C986C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800C9870: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C9874: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C9878: jal         0x8001BBDC
    // 0x800C987C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x800C987C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
    // 0x800C9880: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800C9884: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x800C9888: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
L_800C988C:
    // 0x800C988C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C9890: nop

    // 0x800C9894: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800C9898: nop

    // 0x800C989C: beq         $t8, $zero, L_800C9958
    if (ctx->r24 == 0) {
        // 0x800C98A0: nop
    
            goto L_800C9958;
    }
    // 0x800C98A0: nop

    // 0x800C98A4: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C98A8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C98AC: lwc1        $f4, 0xC($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0XC);
    // 0x800C98B0: lwc1        $f9, 0x4F50($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4F50);
    // 0x800C98B4: lwc1        $f8, 0x4F54($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F54);
    // 0x800C98B8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x800C98BC: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x800C98C0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x800C98C4: swc1        $f16, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f16.u32l;
    // 0x800C98C8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800C98CC: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C98D0: lwc1        $f18, 0x10($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X10);
    // 0x800C98D4: lwc1        $f7, 0x4F58($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X4F58);
    // 0x800C98D8: lwc1        $f6, 0x4F5C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X4F5C);
    // 0x800C98DC: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x800C98E0: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x800C98E4: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x800C98E8: swc1        $f10, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f10.u32l;
    // 0x800C98EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800C98F0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800C98F4: lwc1        $f16, 0x14($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X14);
    // 0x800C98F8: lwc1        $f5, 0x4F60($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X4F60);
    // 0x800C98FC: lwc1        $f4, 0x4F64($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X4F64);
    // 0x800C9900: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x800C9904: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x800C9908: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x800C990C: swc1        $f8, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f8.u32l;
    // 0x800C9910: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800C9914: nop

    // 0x800C9918: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800C991C: nop

    // 0x800C9920: addiu       $t2, $t4, -0x1
    ctx->r10 = ADD32(ctx->r12, -0X1);
    // 0x800C9924: sh          $t2, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r10;
    // 0x800C9928: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800C992C: nop

    // 0x800C9930: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x800C9934: nop

    // 0x800C9938: bne         $t6, $zero, L_800C9958
    if (ctx->r14 != 0) {
        // 0x800C993C: nop
    
            goto L_800C9958;
    }
    // 0x800C993C: nop

    // 0x800C9940: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800C9944: nop

    // 0x800C9948: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800C994C: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800C9950: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800C9954: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
L_800C9958:
    // 0x800C9958: b           L_800C9960
    // 0x800C995C: nop

        goto L_800C9960;
    // 0x800C995C: nop

L_800C9960:
    // 0x800C9960: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C9964: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800C9968: jr          $ra
    // 0x800C996C: nop

    return;
    // 0x800C996C: nop

;}
RECOMP_FUNC void func_800BE14C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800BE14C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800BE150: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800BE154: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800BE158: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800BE15C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800BE160: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800BE164: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BE168: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800BE16C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800BE170: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800BE174: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800BE178: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800BE17C: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800BE180: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BE184: nop

    // 0x800BE188: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800BE18C: nop

    // 0x800BE190: bne         $t1, $zero, L_800BE214
    if (ctx->r9 != 0) {
        // 0x800BE194: nop
    
            goto L_800BE214;
    }
    // 0x800BE194: nop

    // 0x800BE198: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BE19C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800BE1A0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800BE1A4: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800BE1A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800BE1AC: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BE1B0: nop

    // 0x800BE1B4: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800BE1B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800BE1BC: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE1C0: nop

    // 0x800BE1C4: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800BE1C8: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE1CC: addiu       $t6, $zero, 0x1A4
    ctx->r14 = ADD32(0, 0X1A4);
    // 0x800BE1D0: sh          $t6, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r14;
    // 0x800BE1D4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BE1D8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800BE1DC: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x800BE1E0: nop

    // 0x800BE1E4: bne         $t9, $at, L_800BE1F8
    if (ctx->r25 != ctx->r1) {
        // 0x800BE1E8: nop
    
            goto L_800BE1F8;
    }
    // 0x800BE1E8: nop

    // 0x800BE1EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BE1F0: addiu       $t0, $zero, 0x1E0
    ctx->r8 = ADD32(0, 0X1E0);
    // 0x800BE1F4: sh          $t0, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r8;
L_800BE1F8:
    // 0x800BE1F8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE1FC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE200: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800BE204: addiu       $a3, $a3, 0x7EA8
    ctx->r7 = ADD32(ctx->r7, 0X7EA8);
    // 0x800BE208: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800BE20C: jal         0x8001ABF4
    // 0x800BE210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800BE210: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
L_800BE214:
    // 0x800BE214: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800BE218: nop

    // 0x800BE21C: lh          $t3, 0xA6($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA6);
    // 0x800BE220: lwc1        $f16, 0x44($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X44);
    // 0x800BE224: mtc1        $t3, $f8
    ctx->f8.u32l = ctx->r11;
    // 0x800BE228: nop

    // 0x800BE22C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800BE230: sub.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x800BE234: cfc1        $t4, $FpcCsr
    ctx->r12 = get_cop1_cs();
    // 0x800BE238: nop

    // 0x800BE23C: ori         $at, $t4, 0x3
    ctx->r1 = ctx->r12 | 0X3;
    // 0x800BE240: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x800BE244: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x800BE248: nop

    // 0x800BE24C: cvt.w.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.u32l = CVT_W_S(ctx->f18.fl);
    // 0x800BE250: mfc1        $t5, $f4
    ctx->r13 = (int32_t)ctx->f4.u32l;
    // 0x800BE254: ctc1        $t4, $FpcCsr
    set_cop1_cs(ctx->r12);
    // 0x800BE258: sh          $t5, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r13;
    // 0x800BE25C: nop

    // 0x800BE260: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE264: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE268: jal         0x80028FA0
    // 0x800BE26C: nop

    func_80028FA0(rdram, ctx);
        goto after_1;
    // 0x800BE26C: nop

    after_1:
    // 0x800BE270: beq         $v0, $zero, L_800BE2AC
    if (ctx->r2 == 0) {
        // 0x800BE274: nop
    
            goto L_800BE2AC;
    }
    // 0x800BE274: nop

    // 0x800BE278: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE27C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x800BE280: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800BE284: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800BE288: nop

    // 0x800BE28C: sb          $zero, 0x132($t8)
    MEM_B(0X132, ctx->r24) = 0;
    // 0x800BE290: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800BE294: nop

    // 0x800BE298: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800BE29C: nop

    // 0x800BE2A0: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x800BE2A4: b           L_800BE3A4
    // 0x800BE2A8: nop

        goto L_800BE3A4;
    // 0x800BE2A8: nop

L_800BE2AC:
    // 0x800BE2AC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE2B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE2B4: jal         0x80029C40
    // 0x800BE2B8: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800BE2B8: nop

    after_2:
    // 0x800BE2BC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800BE2C0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800BE2C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800BE2C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800BE2CC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800BE2D0: lui         $a2, 0x4370
    ctx->r6 = S32(0X4370 << 16);
    // 0x800BE2D4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800BE2D8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800BE2DC: jal         0x80029018
    // 0x800BE2E0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x800BE2E0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x800BE2E4: beq         $v0, $zero, L_800BE318
    if (ctx->r2 == 0) {
        // 0x800BE2E8: nop
    
            goto L_800BE318;
    }
    // 0x800BE2E8: nop

    // 0x800BE2EC: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BE2F0: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x800BE2F4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800BE2F8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BE2FC: nop

    // 0x800BE300: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
    // 0x800BE304: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800BE308: nop

    // 0x800BE30C: lwc1        $f16, 0x3C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x800BE310: b           L_800BE324
    // 0x800BE314: swc1        $f16, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f16.u32l;
        goto L_800BE324;
    // 0x800BE314: swc1        $f16, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f16.u32l;
L_800BE318:
    // 0x800BE318: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x800BE31C: jal         0x800C00F4
    // 0x800BE320: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    func_800C00F4(rdram, ctx);
        goto after_4;
    // 0x800BE320: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    after_4:
L_800BE324:
    // 0x800BE324: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE328: nop

    // 0x800BE32C: lh          $t2, 0xB6($t5)
    ctx->r10 = MEM_H(ctx->r13, 0XB6);
    // 0x800BE330: nop

    // 0x800BE334: addiu       $t6, $t2, -0x1
    ctx->r14 = ADD32(ctx->r10, -0X1);
    // 0x800BE338: sh          $t6, 0xB6($t5)
    MEM_H(0XB6, ctx->r13) = ctx->r14;
    // 0x800BE33C: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800BE340: nop

    // 0x800BE344: lh          $t8, 0xB6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XB6);
    // 0x800BE348: nop

    // 0x800BE34C: bgtz        $t8, L_800BE36C
    if (SIGNED(ctx->r24) > 0) {
        // 0x800BE350: nop
    
            goto L_800BE36C;
    }
    // 0x800BE350: nop

    // 0x800BE354: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800BE358: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800BE35C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x800BE360: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800BE364: nop

    // 0x800BE368: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800BE36C:
    // 0x800BE36C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800BE370: nop

    // 0x800BE374: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800BE378: nop

    // 0x800BE37C: bgtz        $t4, L_800BE39C
    if (SIGNED(ctx->r12) > 0) {
        // 0x800BE380: nop
    
            goto L_800BE39C;
    }
    // 0x800BE380: nop

    // 0x800BE384: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800BE388: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800BE38C: sh          $t2, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r10;
    // 0x800BE390: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800BE394: nop

    // 0x800BE398: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_800BE39C:
    // 0x800BE39C: b           L_800BE3A4
    // 0x800BE3A0: nop

        goto L_800BE3A4;
    // 0x800BE3A0: nop

L_800BE3A4:
    // 0x800BE3A4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800BE3A8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800BE3AC: jr          $ra
    // 0x800BE3B0: nop

    return;
    // 0x800BE3B0: nop

;}
RECOMP_FUNC void func_8007CF98(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007CF98: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8007CF9C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8007CFA0: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x8007CFA4: sw          $a1, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r5;
    // 0x8007CFA8: sw          $a2, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r6;
    // 0x8007CFAC: sw          $a3, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r7;
    // 0x8007CFB0: jal         0x8007944C
    // 0x8007CFB4: nop

    Get_InactiveObject(rdram, ctx);
        goto after_0;
    // 0x8007CFB4: nop

    after_0:
    // 0x8007CFB8: sw          $v0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r2;
    // 0x8007CFBC: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CFC0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8007CFC4: beq         $t6, $at, L_8007D0C4
    if (ctx->r14 == ctx->r1) {
        // 0x8007CFC8: nop
    
            goto L_8007D0C4;
    }
    // 0x8007CFC8: nop

    // 0x8007CFCC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CFD0: jal         0x8007CCE8
    // 0x8007CFD4: nop

    func_8007CCE8(rdram, ctx);
        goto after_1;
    // 0x8007CFD4: nop

    after_1:
    // 0x8007CFD8: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x8007CFDC: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8007CFE0: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007CFE4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007CFE8: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007CFEC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007CFF0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007CFF4: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x8007CFF8: addu        $t0, $t8, $t9
    ctx->r8 = ADD32(ctx->r24, ctx->r25);
    // 0x8007CFFC: sw          $t0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r8;
    // 0x8007D000: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007D004: addiu       $t1, $zero, 0x1B
    ctx->r9 = ADD32(0, 0X1B);
    // 0x8007D008: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x8007D00C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007D010: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8007D014: lw          $t4, 0x18($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X18);
    // 0x8007D018: lwc1        $f4, 0x4($t3)
    ctx->f4.u32l = MEM_W(ctx->r11, 0X4);
    // 0x8007D01C: nop

    // 0x8007D020: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
    // 0x8007D024: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8007D028: lw          $t5, 0x18($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X18);
    // 0x8007D02C: nop

    // 0x8007D030: swc1        $f6, 0x0($t5)
    MEM_W(0X0, ctx->r13) = ctx->f6.u32l;
    // 0x8007D034: lwc1        $f8, 0x28($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8007D038: lw          $t6, 0x18($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X18);
    // 0x8007D03C: nop

    // 0x8007D040: swc1        $f8, 0x4($t6)
    MEM_W(0X4, ctx->r14) = ctx->f8.u32l;
    // 0x8007D044: lwc1        $f10, 0x2C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x8007D048: lw          $t7, 0x18($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X18);
    // 0x8007D04C: nop

    // 0x8007D050: swc1        $f10, 0x8($t7)
    MEM_W(0X8, ctx->r15) = ctx->f10.u32l;
    // 0x8007D054: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8007D058: lw          $t8, 0x18($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X18);
    // 0x8007D05C: nop

    // 0x8007D060: swc1        $f16, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f16.u32l;
    // 0x8007D064: lw          $t0, 0x20($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X20);
    // 0x8007D068: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8007D06C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8007D070: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x8007D074: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007D078: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007D07C: lwc1        $f14, -0x36DC($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X36DC);
    // 0x8007D080: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x8007D084: jal         0x80015538
    // 0x8007D088: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x8007D088: nop

    after_2:
    // 0x8007D08C: lw          $t2, 0x18($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X18);
    // 0x8007D090: nop

    // 0x8007D094: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x8007D098: lui         $at, 0x4220
    ctx->r1 = S32(0X4220 << 16);
    // 0x8007D09C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8007D0A0: lw          $t3, 0x18($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X18);
    // 0x8007D0A4: nop

    // 0x8007D0A8: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
    // 0x8007D0AC: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D0B0: jal         0x800799A8
    // 0x8007D0B4: nop

    func_800799A8(rdram, ctx);
        goto after_3;
    // 0x8007D0B4: nop

    after_3:
    // 0x8007D0B8: lw          $a0, 0x1C($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X1C);
    // 0x8007D0BC: jal         0x80079AD8
    // 0x8007D0C0: nop

    func_80079AD8(rdram, ctx);
        goto after_4;
    // 0x8007D0C0: nop

    after_4:
L_8007D0C4:
    // 0x8007D0C4: b           L_8007D0CC
    // 0x8007D0C8: nop

        goto L_8007D0CC;
    // 0x8007D0C8: nop

L_8007D0CC:
    // 0x8007D0CC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8007D0D0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8007D0D4: jr          $ra
    // 0x8007D0D8: nop

    return;
    // 0x8007D0D8: nop

;}
RECOMP_FUNC void func_80095E94(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80095E94: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80095E98: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80095E9C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80095EA0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80095EA4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80095EA8: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80095EAC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80095EB0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80095EB4: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80095EB8: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80095EBC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80095EC0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80095EC4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80095EC8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80095ECC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80095ED0: addiu       $a1, $a1, 0x3400
    ctx->r5 = ADD32(ctx->r5, 0X3400);
    // 0x80095ED4: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80095ED8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80095EDC: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80095EE0: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80095EE4: jal         0x80027464
    // 0x80095EE8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80095EE8: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_0:
    // 0x80095EEC: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80095EF0: b           L_80095EF8
    // 0x80095EF4: nop

        goto L_80095EF8;
    // 0x80095EF4: nop

L_80095EF8:
    // 0x80095EF8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80095EFC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80095F00: jr          $ra
    // 0x80095F04: nop

    return;
    // 0x80095F04: nop

;}
RECOMP_FUNC void func_800ED2B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800ED2B4: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800ED2B8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800ED2BC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800ED2C0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800ED2C4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800ED2C8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800ED2CC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED2D0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800ED2D4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800ED2D8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800ED2DC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800ED2E0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800ED2E4: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800ED2E8: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800ED2EC: nop

    // 0x800ED2F0: lh          $t1, 0xA4($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA4);
    // 0x800ED2F4: nop

    // 0x800ED2F8: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800ED2FC: sltiu       $at, $t2, 0x6
    ctx->r1 = ctx->r10 < 0X6 ? 1 : 0;
    // 0x800ED300: beq         $at, $zero, L_800ED384
    if (ctx->r1 == 0) {
        // 0x800ED304: nop
    
            goto L_800ED384;
    }
    // 0x800ED304: nop

    // 0x800ED308: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800ED30C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800ED310: addu        $at, $at, $t2
    gpr jr_addend_800ED31C = ctx->r10;
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800ED314: lw          $t2, 0x5588($at)
    ctx->r10 = ADD32(ctx->r1, 0X5588);
    // 0x800ED318: nop

    // 0x800ED31C: jr          $t2
    // 0x800ED320: nop

    switch (jr_addend_800ED31C >> 2) {
        case 0: goto L_800ED324; break;
        case 1: goto L_800ED334; break;
        case 2: goto L_800ED344; break;
        case 3: goto L_800ED354; break;
        case 4: goto L_800ED364; break;
        case 5: goto L_800ED374; break;
        default: switch_error(__func__, 0x800ED31C, 0x80115588);
    }
    // 0x800ED320: nop

L_800ED324:
    // 0x800ED324: jal         0x800EC91C
    // 0x800ED328: nop

    func_800EC91C(rdram, ctx);
        goto after_0;
    // 0x800ED328: nop

    after_0:
    // 0x800ED32C: b           L_800ED38C
    // 0x800ED330: nop

        goto L_800ED38C;
    // 0x800ED330: nop

L_800ED334:
    // 0x800ED334: jal         0x800ECA50
    // 0x800ED338: nop

    func_800ECA50(rdram, ctx);
        goto after_1;
    // 0x800ED338: nop

    after_1:
    // 0x800ED33C: b           L_800ED38C
    // 0x800ED340: nop

        goto L_800ED38C;
    // 0x800ED340: nop

L_800ED344:
    // 0x800ED344: jal         0x800ECC54
    // 0x800ED348: nop

    func_800ECC54(rdram, ctx);
        goto after_2;
    // 0x800ED348: nop

    after_2:
    // 0x800ED34C: b           L_800ED38C
    // 0x800ED350: nop

        goto L_800ED38C;
    // 0x800ED350: nop

L_800ED354:
    // 0x800ED354: jal         0x800ECEB0
    // 0x800ED358: nop

    func_800ECEB0(rdram, ctx);
        goto after_3;
    // 0x800ED358: nop

    after_3:
    // 0x800ED35C: b           L_800ED38C
    // 0x800ED360: nop

        goto L_800ED38C;
    // 0x800ED360: nop

L_800ED364:
    // 0x800ED364: jal         0x800ED038
    // 0x800ED368: nop

    func_800ED038(rdram, ctx);
        goto after_4;
    // 0x800ED368: nop

    after_4:
    // 0x800ED36C: b           L_800ED38C
    // 0x800ED370: nop

        goto L_800ED38C;
    // 0x800ED370: nop

L_800ED374:
    // 0x800ED374: jal         0x800ED170
    // 0x800ED378: nop

    func_800ED170(rdram, ctx);
        goto after_5;
    // 0x800ED378: nop

    after_5:
    // 0x800ED37C: b           L_800ED38C
    // 0x800ED380: nop

        goto L_800ED38C;
    // 0x800ED380: nop

L_800ED384:
    // 0x800ED384: b           L_800ED38C
    // 0x800ED388: nop

        goto L_800ED38C;
    // 0x800ED388: nop

L_800ED38C:
    // 0x800ED38C: b           L_800ED394
    // 0x800ED390: nop

        goto L_800ED394;
    // 0x800ED390: nop

L_800ED394:
    // 0x800ED394: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800ED398: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800ED39C: jr          $ra
    // 0x800ED3A0: nop

    return;
    // 0x800ED3A0: nop

;}
RECOMP_FUNC void func_80092954(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80092954: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80092958: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8009295C: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80092960: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80092964: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80092968: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x8009296C: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80092970: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80092974: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80092978: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x8009297C: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80092980: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80092984: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80092988: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x8009298C: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80092990: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80092994: addiu       $a1, $a1, 0x1720
    ctx->r5 = ADD32(ctx->r5, 0X1720);
    // 0x80092998: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8009299C: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800929A0: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800929A4: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800929A8: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800929AC: jal         0x80027464
    // 0x800929B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800929B0: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800929B4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x800929B8: b           L_800929C0
    // 0x800929BC: nop

        goto L_800929C0;
    // 0x800929BC: nop

L_800929C0:
    // 0x800929C0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800929C4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800929C8: jr          $ra
    // 0x800929CC: nop

    return;
    // 0x800929CC: nop

;}
RECOMP_FUNC void func_800D2208(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D2208: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D220C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800D2210: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D2214: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D2218: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D221C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D2220: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D2224: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D2228: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D222C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D2230: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D2234: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D2238: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800D223C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2240: nop

    // 0x800D2244: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D2248: nop

    // 0x800D224C: bne         $t1, $zero, L_800D22C8
    if (ctx->r9 != 0) {
        // 0x800D2250: nop
    
            goto L_800D22C8;
    }
    // 0x800D2250: nop

    // 0x800D2254: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2258: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D225C: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D2260: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2264: addiu       $t4, $zero, 0x28
    ctx->r12 = ADD32(0, 0X28);
    // 0x800D2268: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800D226C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D2270: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2274: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D2278: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D227C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D2280: jal         0x8001ABF4
    // 0x800D2284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800D2284: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800D2288: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D228C: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D2290: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D2294: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D2298: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x800D229C: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800D22A0: jal         0x8001ABF4
    // 0x800D22A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800D22A4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x800D22A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D22AC: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D22B0: addiu       $a3, $a3, -0x7A00
    ctx->r7 = ADD32(ctx->r7, -0X7A00);
    // 0x800D22B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D22B8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x800D22BC: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x800D22C0: jal         0x8001ABF4
    // 0x800D22C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_2;
    // 0x800D22C4: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_2:
L_800D22C8:
    // 0x800D22C8: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x800D22CC: nop

    // 0x800D22D0: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x800D22D4: nop

    // 0x800D22D8: bne         $t7, $zero, L_800D2304
    if (ctx->r15 != 0) {
        // 0x800D22DC: nop
    
            goto L_800D2304;
    }
    // 0x800D22DC: nop

    // 0x800D22E0: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800D22E4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x800D22E8: sh          $t8, 0x108($t9)
    MEM_H(0X108, ctx->r25) = ctx->r24;
    // 0x800D22EC: lw          $t1, 0x1C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X1C);
    // 0x800D22F0: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800D22F4: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800D22F8: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800D22FC: b           L_800D231C
    // 0x800D2300: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
        goto L_800D231C;
    // 0x800D2300: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_800D2304:
    // 0x800D2304: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x800D2308: nop

    // 0x800D230C: lh          $t4, 0xA6($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA6);
    // 0x800D2310: nop

    // 0x800D2314: addiu       $t5, $t4, -0x1
    ctx->r13 = ADD32(ctx->r12, -0X1);
    // 0x800D2318: sh          $t5, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r13;
L_800D231C:
    // 0x800D231C: b           L_800D2324
    // 0x800D2320: nop

        goto L_800D2324;
    // 0x800D2320: nop

L_800D2324:
    // 0x800D2324: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800D2328: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D232C: jr          $ra
    // 0x800D2330: nop

    return;
    // 0x800D2330: nop

;}
RECOMP_FUNC void func_800780A0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800780A0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800780A4: sw          $a2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r6;
    // 0x800780A8: sub.s       $f4, $f14, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    NAN_CHECK(ctx->f14.fl); NAN_CHECK(ctx->f12.fl); 
    ctx->f4.fl = ctx->f14.fl - ctx->f12.fl;
    // 0x800780AC: swc1        $f4, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f4.u32l;
    // 0x800780B0: lwc1        $f6, 0x4($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800780B4: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800780B8: nop

    // 0x800780BC: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x800780C0: nop

    // 0x800780C4: bc1f        L_800780E4
    if (!c1cs) {
        // 0x800780C8: nop
    
            goto L_800780E4;
    }
    // 0x800780C8: nop

    // 0x800780CC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800780D0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800780D4: lwc1        $f10, 0x4($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800780D8: nop

    // 0x800780DC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x800780E0: swc1        $f18, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->f18.u32l;
L_800780E4:
    // 0x800780E4: lwc1        $f4, 0x4($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X4);
    // 0x800780E8: lwc1        $f6, 0x10($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X10);
    // 0x800780EC: nop

    // 0x800780F0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x800780F4: nop

    // 0x800780F8: bc1t        L_80078120
    if (c1cs) {
        // 0x800780FC: nop
    
            goto L_80078120;
    }
    // 0x800780FC: nop

    // 0x80078100: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80078104: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80078108: nop

    // 0x8007810C: sub.s       $f10, $f8, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f10.fl = ctx->f8.fl - ctx->f6.fl;
    // 0x80078110: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80078114: nop

    // 0x80078118: bc1f        L_80078128
    if (!c1cs) {
        // 0x8007811C: nop
    
            goto L_80078128;
    }
    // 0x8007811C: nop

L_80078120:
    // 0x80078120: b           L_80078160
    // 0x80078124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80078160;
    // 0x80078124: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
L_80078128:
    // 0x80078128: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8007812C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80078130: lwc1        $f16, 0x4($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X4);
    // 0x80078134: nop

    // 0x80078138: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8007813C: nop

    // 0x80078140: bc1f        L_80078150
    if (!c1cs) {
        // 0x80078144: nop
    
            goto L_80078150;
    }
    // 0x80078144: nop

    // 0x80078148: b           L_80078160
    // 0x8007814C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80078160;
    // 0x8007814C: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
L_80078150:
    // 0x80078150: b           L_80078160
    // 0x80078154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80078160;
    // 0x80078154: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
    // 0x80078158: b           L_80078160
    // 0x8007815C: nop

        goto L_80078160;
    // 0x8007815C: nop

L_80078160:
    // 0x80078160: jr          $ra
    // 0x80078164: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80078164: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80088ECC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80088ECC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80088ED0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80088ED4: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80088ED8: lh          $t6, 0x4BF2($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X4BF2);
    // 0x80088EDC: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80088EE0: bne         $t6, $at, L_80088EF0
    if (ctx->r14 != ctx->r1) {
        // 0x80088EE4: nop
    
            goto L_80088EF0;
    }
    // 0x80088EE4: nop

    // 0x80088EE8: b           L_80089C08
    // 0x80088EEC: nop

        goto L_80089C08;
    // 0x80088EEC: nop

L_80088EF0:
    // 0x80088EF0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80088EF4: lh          $t7, 0x4C0C($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X4C0C);
    // 0x80088EF8: nop

    // 0x80088EFC: bne         $t7, $zero, L_80088F7C
    if (ctx->r15 != 0) {
        // 0x80088F00: nop
    
            goto L_80088F7C;
    }
    // 0x80088F00: nop

    // 0x80088F04: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80088F08: lh          $t8, 0x4BF8($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4BF8);
    // 0x80088F0C: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80088F10: bne         $t8, $at, L_80088F7C
    if (ctx->r24 != ctx->r1) {
        // 0x80088F14: nop
    
            goto L_80088F7C;
    }
    // 0x80088F14: nop

    // 0x80088F18: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80088F1C: lh          $t9, 0x4C0C($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4C0C);
    // 0x80088F20: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F24: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80088F28: sh          $t0, 0x4C0C($at)
    MEM_H(0X4C0C, ctx->r1) = ctx->r8;
    // 0x80088F2C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F30: sh          $zero, 0x4C12($at)
    MEM_H(0X4C12, ctx->r1) = 0;
    // 0x80088F34: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F38: sh          $zero, 0x4C10($at)
    MEM_H(0X4C10, ctx->r1) = 0;
    // 0x80088F3C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F40: sh          $zero, 0x4C0E($at)
    MEM_H(0X4C0E, ctx->r1) = 0;
    // 0x80088F44: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F48: sh          $zero, 0x4C16($at)
    MEM_H(0X4C16, ctx->r1) = 0;
    // 0x80088F4C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F50: sh          $zero, 0x4C14($at)
    MEM_H(0X4C14, ctx->r1) = 0;
    // 0x80088F54: addiu       $t1, $zero, -0x1
    ctx->r9 = ADD32(0, -0X1);
    // 0x80088F58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F5C: sh          $t1, 0x4BF8($at)
    MEM_H(0X4BF8, ctx->r1) = ctx->r9;
    // 0x80088F60: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F64: addiu       $t2, $zero, -0x1
    ctx->r10 = ADD32(0, -0X1);
    // 0x80088F68: sh          $t2, 0x4BF4($at)
    MEM_H(0X4BF4, ctx->r1) = ctx->r10;
    // 0x80088F6C: lui         $t3, 0x8033
    ctx->r11 = S32(0X8033 << 16);
    // 0x80088F70: ori         $t3, $t3, 0xA000
    ctx->r11 = ctx->r11 | 0XA000;
    // 0x80088F74: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F78: sw          $t3, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r11;
L_80088F7C:
    // 0x80088F7C: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x80088F80: lh          $t4, 0x4C14($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4C14);
    // 0x80088F84: nop

    // 0x80088F88: beq         $t4, $zero, L_80088FAC
    if (ctx->r12 == 0) {
        // 0x80088F8C: nop
    
            goto L_80088FAC;
    }
    // 0x80088F8C: nop

    // 0x80088F90: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80088F94: lh          $t5, 0x4C14($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4C14);
    // 0x80088F98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80088F9C: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x80088FA0: sh          $t6, 0x4C14($at)
    MEM_H(0X4C14, ctx->r1) = ctx->r14;
    // 0x80088FA4: b           L_80089C08
    // 0x80088FA8: nop

        goto L_80089C08;
    // 0x80088FA8: nop

L_80088FAC:
    // 0x80088FAC: sh          $zero, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = 0;
    // 0x80088FB0: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x80088FB4: nop

    // 0x80088FB8: bne         $t7, $zero, L_80089C00
    if (ctx->r15 != 0) {
        // 0x80088FBC: nop
    
            goto L_80089C00;
    }
    // 0x80088FBC: nop

L_80088FC0:
    // 0x80088FC0: lui         $t8, 0x8013
    ctx->r24 = S32(0X8013 << 16);
    // 0x80088FC4: lw          $t8, 0x4C00($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X4C00);
    // 0x80088FC8: nop

    // 0x80088FCC: lhu         $t9, 0x0($t8)
    ctx->r25 = MEM_HU(ctx->r24, 0X0);
    // 0x80088FD0: nop

    // 0x80088FD4: sltiu       $at, $t9, 0x4D
    ctx->r1 = ctx->r25 < 0X4D ? 1 : 0;
    // 0x80088FD8: beq         $at, $zero, L_80089BCC
    if (ctx->r1 == 0) {
        // 0x80088FDC: nop
    
            goto L_80089BCC;
    }
    // 0x80088FDC: nop

    // 0x80088FE0: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80088FE4: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x80088FE8: addu        $at, $at, $t9
    gpr jr_addend_80088FF4 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80088FEC: lw          $t9, -0x3270($at)
    ctx->r25 = ADD32(ctx->r1, -0X3270);
    // 0x80088FF0: nop

    // 0x80088FF4: jr          $t9
    // 0x80088FF8: nop

    switch (jr_addend_80088FF4 >> 2) {
        case 0: goto L_80088FFC; break;
        case 1: goto L_80089020; break;
        case 2: goto L_80089030; break;
        case 3: goto L_80089BCC; break;
        case 4: goto L_80089BCC; break;
        case 5: goto L_80089094; break;
        case 6: goto L_800890D4; break;
        case 7: goto L_8008912C; break;
        case 8: goto L_80089158; break;
        case 9: goto L_800891D0; break;
        case 10: goto L_80089218; break;
        case 11: goto L_80089260; break;
        case 12: goto L_800892A8; break;
        case 13: goto L_800892F0; break;
        case 14: goto L_80089338; break;
        case 15: goto L_80089380; break;
        case 16: goto L_800893AC; break;
        case 17: goto L_800893D8; break;
        case 18: goto L_80089404; break;
        case 19: goto L_80089414; break;
        case 20: goto L_80089424; break;
        case 21: goto L_80089434; break;
        case 22: goto L_80089444; break;
        case 23: goto L_80089454; break;
        case 24: goto L_80089480; break;
        case 25: goto L_800894AC; break;
        case 26: goto L_800894D8; break;
        case 27: goto L_80089504; break;
        case 28: goto L_80089BCC; break;
        case 29: goto L_80089BCC; break;
        case 30: goto L_80089BCC; break;
        case 31: goto L_80089530; break;
        case 32: goto L_8008955C; break;
        case 33: goto L_800895E0; break;
        case 34: goto L_8008960C; break;
        case 35: goto L_80089638; break;
        case 36: goto L_800896BC; break;
        case 37: goto L_80089178; break;
        case 38: goto L_800891A4; break;
        case 39: goto L_80089168; break;
        case 40: goto L_800896E8; break;
        case 41: goto L_80089730; break;
        case 42: goto L_80089778; break;
        case 43: goto L_800897C0; break;
        case 44: goto L_800897EC; break;
        case 45: goto L_80089818; break;
        case 46: goto L_80089844; break;
        case 47: goto L_80089870; break;
        case 48: goto L_8008989C; break;
        case 49: goto L_800898C8; break;
        case 50: goto L_80089588; break;
        case 51: goto L_800895B4; break;
        case 52: goto L_80089664; break;
        case 53: goto L_80089920; break;
        case 54: goto L_800898F4; break;
        case 55: goto L_8008994C; break;
        case 56: goto L_80089978; break;
        case 57: goto L_80089690; break;
        case 58: goto L_800899A4; break;
        case 59: goto L_800899D0; break;
        case 60: goto L_80089100; break;
        case 61: goto L_800899FC; break;
        case 62: goto L_80089A28; break;
        case 63: goto L_80089A54; break;
        case 64: goto L_80089AAC; break;
        case 65: goto L_80089AC0; break;
        case 66: goto L_80089AD0; break;
        case 67: goto L_80089B08; break;
        case 68: goto L_80089AEC; break;
        case 69: goto L_80089B08; break;
        case 70: goto L_80089B18; break;
        case 71: goto L_80089B54; break;
        case 72: goto L_80089B68; break;
        case 73: goto L_80089B78; break;
        case 74: goto L_80089B88; break;
        case 75: goto L_80089B98; break;
        case 76: goto L_80089A80; break;
        default: switch_error(__func__, 0x80088FF4, 0x8010CD90);
    }
    // 0x80088FF8: nop

L_80088FFC:
    // 0x80088FFC: addiu       $t0, $zero, -0x1
    ctx->r8 = ADD32(0, -0X1);
    // 0x80089000: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089004: sh          $t0, 0x4BF2($at)
    MEM_H(0X4BF2, ctx->r1) = ctx->r8;
    // 0x80089008: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008900C: sh          $zero, 0x4C0C($at)
    MEM_H(0X4C0C, ctx->r1) = 0;
    // 0x80089010: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80089014: sh          $t1, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r9;
    // 0x80089018: b           L_80089BDC
    // 0x8008901C: nop

        goto L_80089BDC;
    // 0x8008901C: nop

L_80089020:
    // 0x80089020: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80089024: sh          $t2, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r10;
    // 0x80089028: b           L_80089BDC
    // 0x8008902C: nop

        goto L_80089BDC;
    // 0x8008902C: nop

L_80089030:
    // 0x80089030: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80089034: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x80089038: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008903C: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x80089040: nop

    // 0x80089044: sh          $t4, 0x4BF8($at)
    MEM_H(0X4BF8, ctx->r1) = ctx->r12;
    // 0x80089048: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008904C: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x80089050: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089054: lh          $t6, 0x4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X4);
    // 0x80089058: nop

    // 0x8008905C: sh          $t6, 0x4BFA($at)
    MEM_H(0X4BFA, ctx->r1) = ctx->r14;
    // 0x80089060: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089064: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089068: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008906C: lh          $t8, 0x6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X6);
    // 0x80089070: nop

    // 0x80089074: sh          $t8, 0x4BFC($at)
    MEM_H(0X4BFC, ctx->r1) = ctx->r24;
    // 0x80089078: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008907C: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x80089080: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089084: addiu       $t0, $t9, 0x6
    ctx->r8 = ADD32(ctx->r25, 0X6);
    // 0x80089088: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x8008908C: b           L_80089BDC
    // 0x80089090: nop

        goto L_80089BDC;
    // 0x80089090: nop

L_80089094:
    // 0x80089094: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80089098: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x8008909C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800890A0: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x800890A4: nop

    // 0x800890A8: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x800890AC: sh          $t3, 0x4C14($at)
    MEM_H(0X4C14, ctx->r1) = ctx->r11;
    // 0x800890B0: lui         $t4, 0x8013
    ctx->r12 = S32(0X8013 << 16);
    // 0x800890B4: lw          $t4, 0x4C00($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X4C00);
    // 0x800890B8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800890BC: addiu       $t5, $t4, 0x2
    ctx->r13 = ADD32(ctx->r12, 0X2);
    // 0x800890C0: sw          $t5, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r13;
    // 0x800890C4: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x800890C8: sh          $t6, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r14;
    // 0x800890CC: b           L_80089BDC
    // 0x800890D0: nop

        goto L_80089BDC;
    // 0x800890D0: nop

L_800890D4:
    // 0x800890D4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800890D8: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800890DC: jal         0x8008ABC4
    // 0x800890E0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008ABC4(rdram, ctx);
        goto after_0;
    // 0x800890E0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_0:
    // 0x800890E4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800890E8: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x800890EC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800890F0: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x800890F4: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x800890F8: b           L_80089BDC
    // 0x800890FC: nop

        goto L_80089BDC;
    // 0x800890FC: nop

L_80089100:
    // 0x80089100: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089104: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089108: jal         0x8008ABF4
    // 0x8008910C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008ABF4(rdram, ctx);
        goto after_1;
    // 0x8008910C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_1:
    // 0x80089110: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80089114: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x80089118: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008911C: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x80089120: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x80089124: b           L_80089BDC
    // 0x80089128: nop

        goto L_80089BDC;
    // 0x80089128: nop

L_8008912C:
    // 0x8008912C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089130: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089134: jal         0x8008AC08
    // 0x80089138: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008AC08(rdram, ctx);
        goto after_2;
    // 0x80089138: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_2:
    // 0x8008913C: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80089140: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x80089144: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089148: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x8008914C: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x80089150: b           L_80089BDC
    // 0x80089154: nop

        goto L_80089BDC;
    // 0x80089154: nop

L_80089158:
    // 0x80089158: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8008915C: sw          $zero, 0x65EC($at)
    MEM_W(0X65EC, ctx->r1) = 0;
    // 0x80089160: b           L_80089BDC
    // 0x80089164: nop

        goto L_80089BDC;
    // 0x80089164: nop

L_80089168:
    // 0x80089168: jal         0x8008BB0C
    // 0x8008916C: nop

    func_8008BB0C(rdram, ctx);
        goto after_3;
    // 0x8008916C: nop

    after_3:
    // 0x80089170: b           L_80089BDC
    // 0x80089174: nop

        goto L_80089BDC;
    // 0x80089174: nop

L_80089178:
    // 0x80089178: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008917C: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089180: jal         0x8008AD58
    // 0x80089184: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008AD58(rdram, ctx);
        goto after_4;
    // 0x80089184: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_4:
    // 0x80089188: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008918C: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x80089190: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089194: addiu       $t4, $t3, 0xE
    ctx->r12 = ADD32(ctx->r11, 0XE);
    // 0x80089198: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x8008919C: b           L_80089BDC
    // 0x800891A0: nop

        goto L_80089BDC;
    // 0x800891A0: nop

L_800891A4:
    // 0x800891A4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800891A8: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800891AC: jal         0x8008AE64
    // 0x800891B0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008AE64(rdram, ctx);
        goto after_5;
    // 0x800891B0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_5:
    // 0x800891B4: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800891B8: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x800891BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800891C0: addiu       $t6, $t5, 0xC
    ctx->r14 = ADD32(ctx->r13, 0XC);
    // 0x800891C4: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x800891C8: b           L_80089BDC
    // 0x800891CC: nop

        goto L_80089BDC;
    // 0x800891CC: nop

L_800891D0:
    // 0x800891D0: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800891D4: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x800891D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800891DC: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x800891E0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800891E4: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x800891E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800891EC: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800891F0: nop

    // 0x800891F4: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800891F8: swc1        $f10, 0x4F74($at)
    MEM_W(0X4F74, ctx->r1) = ctx->f10.u32l;
    // 0x800891FC: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80089200: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x80089204: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089208: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x8008920C: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x80089210: b           L_80089BDC
    // 0x80089214: nop

        goto L_80089BDC;
    // 0x80089214: nop

L_80089218:
    // 0x80089218: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008921C: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x80089220: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80089224: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x80089228: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8008922C: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80089230: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089234: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80089238: nop

    // 0x8008923C: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80089240: swc1        $f6, 0x4F50($at)
    MEM_W(0X4F50, ctx->r1) = ctx->f6.u32l;
    // 0x80089244: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80089248: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x8008924C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089250: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x80089254: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x80089258: b           L_80089BDC
    // 0x8008925C: nop

        goto L_80089BDC;
    // 0x8008925C: nop

L_80089260:
    // 0x80089260: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80089264: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x80089268: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008926C: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x80089270: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80089274: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80089278: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008927C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80089280: nop

    // 0x80089284: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80089288: swc1        $f18, 0x4F54($at)
    MEM_W(0X4F54, ctx->r1) = ctx->f18.u32l;
    // 0x8008928C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089290: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089294: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089298: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8008929C: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x800892A0: b           L_80089BDC
    // 0x800892A4: nop

        goto L_80089BDC;
    // 0x800892A4: nop

L_800892A8:
    // 0x800892A8: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800892AC: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x800892B0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800892B4: lh          $t0, 0x2($t9)
    ctx->r8 = MEM_H(ctx->r25, 0X2);
    // 0x800892B8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800892BC: mtc1        $t0, $f4
    ctx->f4.u32l = ctx->r8;
    // 0x800892C0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800892C4: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800892C8: nop

    // 0x800892CC: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x800892D0: swc1        $f10, 0x4F58($at)
    MEM_W(0X4F58, ctx->r1) = ctx->f10.u32l;
    // 0x800892D4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800892D8: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x800892DC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800892E0: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x800892E4: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x800892E8: b           L_80089BDC
    // 0x800892EC: nop

        goto L_80089BDC;
    // 0x800892EC: nop

L_800892F0:
    // 0x800892F0: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800892F4: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x800892F8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800892FC: lh          $t4, 0x2($t3)
    ctx->r12 = MEM_H(ctx->r11, 0X2);
    // 0x80089300: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80089304: mtc1        $t4, $f16
    ctx->f16.u32l = ctx->r12;
    // 0x80089308: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008930C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80089310: nop

    // 0x80089314: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80089318: swc1        $f6, 0x4F5C($at)
    MEM_W(0X4F5C, ctx->r1) = ctx->f6.u32l;
    // 0x8008931C: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80089320: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x80089324: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089328: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x8008932C: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x80089330: b           L_80089BDC
    // 0x80089334: nop

        goto L_80089BDC;
    // 0x80089334: nop

L_80089338:
    // 0x80089338: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x8008933C: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089340: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80089344: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x80089348: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008934C: mtc1        $t8, $f8
    ctx->f8.u32l = ctx->r24;
    // 0x80089350: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089354: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80089358: nop

    // 0x8008935C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80089360: swc1        $f18, 0x4F60($at)
    MEM_W(0X4F60, ctx->r1) = ctx->f18.u32l;
    // 0x80089364: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80089368: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x8008936C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089370: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x80089374: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x80089378: b           L_80089BDC
    // 0x8008937C: nop

        goto L_80089BDC;
    // 0x8008937C: nop

L_80089380:
    // 0x80089380: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089384: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089388: jal         0x8008B5D4
    // 0x8008938C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008B5D4(rdram, ctx);
        goto after_6;
    // 0x8008938C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_6:
    // 0x80089390: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80089394: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x80089398: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008939C: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x800893A0: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x800893A4: b           L_80089BDC
    // 0x800893A8: nop

        goto L_80089BDC;
    // 0x800893A8: nop

L_800893AC:
    // 0x800893AC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800893B0: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800893B4: jal         0x8008B624
    // 0x800893B8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008B624(rdram, ctx);
        goto after_7;
    // 0x800893B8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_7:
    // 0x800893BC: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800893C0: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x800893C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800893C8: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800893CC: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x800893D0: b           L_80089BDC
    // 0x800893D4: nop

        goto L_80089BDC;
    // 0x800893D4: nop

L_800893D8:
    // 0x800893D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800893DC: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800893E0: jal         0x8008B6E0
    // 0x800893E4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008B6E0(rdram, ctx);
        goto after_8;
    // 0x800893E4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_8:
    // 0x800893E8: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800893EC: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x800893F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800893F4: addiu       $t6, $t5, 0xA
    ctx->r14 = ADD32(ctx->r13, 0XA);
    // 0x800893F8: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x800893FC: b           L_80089BDC
    // 0x80089400: nop

        goto L_80089BDC;
    // 0x80089400: nop

L_80089404:
    // 0x80089404: jal         0x8008BA3C
    // 0x80089408: nop

    func_8008BA3C(rdram, ctx);
        goto after_9;
    // 0x80089408: nop

    after_9:
    // 0x8008940C: b           L_80089BDC
    // 0x80089410: nop

        goto L_80089BDC;
    // 0x80089410: nop

L_80089414:
    // 0x80089414: jal         0x8008C61C
    // 0x80089418: nop

    func_8008C61C(rdram, ctx);
        goto after_10;
    // 0x80089418: nop

    after_10:
    // 0x8008941C: b           L_80089BDC
    // 0x80089420: nop

        goto L_80089BDC;
    // 0x80089420: nop

L_80089424:
    // 0x80089424: jal         0x8008C638
    // 0x80089428: nop

    func_8008C638(rdram, ctx);
        goto after_11;
    // 0x80089428: nop

    after_11:
    // 0x8008942C: b           L_80089BDC
    // 0x80089430: nop

        goto L_80089BDC;
    // 0x80089430: nop

L_80089434:
    // 0x80089434: jal         0x8008C650
    // 0x80089438: nop

    func_8008C650(rdram, ctx);
        goto after_12;
    // 0x80089438: nop

    after_12:
    // 0x8008943C: b           L_80089BDC
    // 0x80089440: nop

        goto L_80089BDC;
    // 0x80089440: nop

L_80089444:
    // 0x80089444: jal         0x8008C66C
    // 0x80089448: nop

    func_8008C66C(rdram, ctx);
        goto after_13;
    // 0x80089448: nop

    after_13:
    // 0x8008944C: b           L_80089BDC
    // 0x80089450: nop

        goto L_80089BDC;
    // 0x80089450: nop

L_80089454:
    // 0x80089454: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089458: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x8008945C: jal         0x8008C684
    // 0x80089460: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008C684(rdram, ctx);
        goto after_14;
    // 0x80089460: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_14:
    // 0x80089464: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089468: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x8008946C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089470: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80089474: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x80089478: b           L_80089BDC
    // 0x8008947C: nop

        goto L_80089BDC;
    // 0x8008947C: nop

L_80089480:
    // 0x80089480: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089484: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089488: jal         0x8008C778
    // 0x8008948C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008C778(rdram, ctx);
        goto after_15;
    // 0x8008948C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_15:
    // 0x80089490: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80089494: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x80089498: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008949C: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x800894A0: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x800894A4: b           L_80089BDC
    // 0x800894A8: nop

        goto L_80089BDC;
    // 0x800894A8: nop

L_800894AC:
    // 0x800894AC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800894B0: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800894B4: jal         0x8008C9B4
    // 0x800894B8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008C9B4(rdram, ctx);
        goto after_16;
    // 0x800894B8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_16:
    // 0x800894BC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800894C0: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x800894C4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800894C8: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x800894CC: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x800894D0: b           L_80089BDC
    // 0x800894D4: nop

        goto L_80089BDC;
    // 0x800894D4: nop

L_800894D8:
    // 0x800894D8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800894DC: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800894E0: jal         0x8008CADC
    // 0x800894E4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008CADC(rdram, ctx);
        goto after_17;
    // 0x800894E4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_17:
    // 0x800894E8: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800894EC: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x800894F0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800894F4: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x800894F8: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x800894FC: b           L_80089BDC
    // 0x80089500: nop

        goto L_80089BDC;
    // 0x80089500: nop

L_80089504:
    // 0x80089504: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089508: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x8008950C: jal         0x8008CC04
    // 0x80089510: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008CC04(rdram, ctx);
        goto after_18;
    // 0x80089510: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_18:
    // 0x80089514: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80089518: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x8008951C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089520: addiu       $t6, $t5, 0x4
    ctx->r14 = ADD32(ctx->r13, 0X4);
    // 0x80089524: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x80089528: b           L_80089BDC
    // 0x8008952C: nop

        goto L_80089BDC;
    // 0x8008952C: nop

L_80089530:
    // 0x80089530: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089534: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089538: jal         0x8008CD2C
    // 0x8008953C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008CD2C(rdram, ctx);
        goto after_19;
    // 0x8008953C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_19:
    // 0x80089540: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089544: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089548: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008954C: addiu       $t8, $t7, 0x8
    ctx->r24 = ADD32(ctx->r15, 0X8);
    // 0x80089550: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x80089554: b           L_80089BDC
    // 0x80089558: nop

        goto L_80089BDC;
    // 0x80089558: nop

L_8008955C:
    // 0x8008955C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089560: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089564: jal         0x8008CE8C
    // 0x80089568: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008CE8C(rdram, ctx);
        goto after_20;
    // 0x80089568: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_20:
    // 0x8008956C: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80089570: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x80089574: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089578: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x8008957C: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x80089580: b           L_80089BDC
    // 0x80089584: nop

        goto L_80089BDC;
    // 0x80089584: nop

L_80089588:
    // 0x80089588: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008958C: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089590: jal         0x8008D074
    // 0x80089594: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008D074(rdram, ctx);
        goto after_21;
    // 0x80089594: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_21:
    // 0x80089598: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x8008959C: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x800895A0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800895A4: addiu       $t2, $t1, 0x6
    ctx->r10 = ADD32(ctx->r9, 0X6);
    // 0x800895A8: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x800895AC: b           L_80089BDC
    // 0x800895B0: nop

        goto L_80089BDC;
    // 0x800895B0: nop

L_800895B4:
    // 0x800895B4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800895B8: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800895BC: jal         0x8008D114
    // 0x800895C0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008D114(rdram, ctx);
        goto after_22;
    // 0x800895C0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_22:
    // 0x800895C4: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800895C8: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x800895CC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800895D0: addiu       $t4, $t3, 0x4
    ctx->r12 = ADD32(ctx->r11, 0X4);
    // 0x800895D4: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x800895D8: b           L_80089BDC
    // 0x800895DC: nop

        goto L_80089BDC;
    // 0x800895DC: nop

L_800895E0:
    // 0x800895E0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800895E4: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800895E8: jal         0x8008D530
    // 0x800895EC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008D530(rdram, ctx);
        goto after_23;
    // 0x800895EC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_23:
    // 0x800895F0: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800895F4: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x800895F8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800895FC: addiu       $t6, $t5, 0xC
    ctx->r14 = ADD32(ctx->r13, 0XC);
    // 0x80089600: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x80089604: b           L_80089BDC
    // 0x80089608: nop

        goto L_80089BDC;
    // 0x80089608: nop

L_8008960C:
    // 0x8008960C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089610: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089614: jal         0x8008DC8C
    // 0x80089618: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008DC8C(rdram, ctx);
        goto after_24;
    // 0x80089618: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_24:
    // 0x8008961C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089620: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089624: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089628: addiu       $t8, $t7, 0x6
    ctx->r24 = ADD32(ctx->r15, 0X6);
    // 0x8008962C: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x80089630: b           L_80089BDC
    // 0x80089634: nop

        goto L_80089BDC;
    // 0x80089634: nop

L_80089638:
    // 0x80089638: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008963C: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089640: jal         0x8008E328
    // 0x80089644: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008E328(rdram, ctx);
        goto after_25;
    // 0x80089644: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_25:
    // 0x80089648: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008964C: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x80089650: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089654: addiu       $t0, $t9, 0x4
    ctx->r8 = ADD32(ctx->r25, 0X4);
    // 0x80089658: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x8008965C: b           L_80089BDC
    // 0x80089660: nop

        goto L_80089BDC;
    // 0x80089660: nop

L_80089664:
    // 0x80089664: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089668: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x8008966C: jal         0x8008E3B0
    // 0x80089670: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008E3B0(rdram, ctx);
        goto after_26;
    // 0x80089670: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_26:
    // 0x80089674: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80089678: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x8008967C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089680: addiu       $t2, $t1, 0x6
    ctx->r10 = ADD32(ctx->r9, 0X6);
    // 0x80089684: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x80089688: b           L_80089BDC
    // 0x8008968C: nop

        goto L_80089BDC;
    // 0x8008968C: nop

L_80089690:
    // 0x80089690: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089694: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089698: jal         0x8008E418
    // 0x8008969C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008E418(rdram, ctx);
        goto after_27;
    // 0x8008969C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_27:
    // 0x800896A0: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800896A4: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x800896A8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800896AC: addiu       $t4, $t3, 0x6
    ctx->r12 = ADD32(ctx->r11, 0X6);
    // 0x800896B0: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x800896B4: b           L_80089BDC
    // 0x800896B8: nop

        goto L_80089BDC;
    // 0x800896B8: nop

L_800896BC:
    // 0x800896BC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800896C0: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800896C4: jal         0x8008E81C
    // 0x800896C8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008E81C(rdram, ctx);
        goto after_28;
    // 0x800896C8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_28:
    // 0x800896CC: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x800896D0: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x800896D4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800896D8: addiu       $t6, $t5, 0x6
    ctx->r14 = ADD32(ctx->r13, 0X6);
    // 0x800896DC: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x800896E0: b           L_80089BDC
    // 0x800896E4: nop

        goto L_80089BDC;
    // 0x800896E4: nop

L_800896E8:
    // 0x800896E8: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800896EC: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x800896F0: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x800896F4: lh          $t8, 0x2($t7)
    ctx->r24 = MEM_H(ctx->r15, 0X2);
    // 0x800896F8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800896FC: mtc1        $t8, $f4
    ctx->f4.u32l = ctx->r24;
    // 0x80089700: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089704: cvt.s.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80089708: nop

    // 0x8008970C: div.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = DIV_S(ctx->f6.fl, ctx->f8.fl);
    // 0x80089710: swc1        $f10, 0x4F68($at)
    MEM_W(0X4F68, ctx->r1) = ctx->f10.u32l;
    // 0x80089714: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80089718: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x8008971C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089720: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x80089724: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x80089728: b           L_80089BDC
    // 0x8008972C: nop

        goto L_80089BDC;
    // 0x8008972C: nop

L_80089730:
    // 0x80089730: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80089734: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x80089738: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8008973C: lh          $t2, 0x2($t1)
    ctx->r10 = MEM_H(ctx->r9, 0X2);
    // 0x80089740: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80089744: mtc1        $t2, $f16
    ctx->f16.u32l = ctx->r10;
    // 0x80089748: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008974C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80089750: nop

    // 0x80089754: div.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = DIV_S(ctx->f18.fl, ctx->f4.fl);
    // 0x80089758: swc1        $f6, 0x4F6C($at)
    MEM_W(0X4F6C, ctx->r1) = ctx->f6.u32l;
    // 0x8008975C: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80089760: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x80089764: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089768: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x8008976C: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x80089770: b           L_80089BDC
    // 0x80089774: nop

        goto L_80089BDC;
    // 0x80089774: nop

L_80089778:
    // 0x80089778: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x8008977C: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x80089780: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80089784: lh          $t6, 0x2($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X2);
    // 0x80089788: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8008978C: mtc1        $t6, $f8
    ctx->f8.u32l = ctx->r14;
    // 0x80089790: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089794: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80089798: nop

    // 0x8008979C: div.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = DIV_S(ctx->f10.fl, ctx->f16.fl);
    // 0x800897A0: swc1        $f18, 0x4F70($at)
    MEM_W(0X4F70, ctx->r1) = ctx->f18.u32l;
    // 0x800897A4: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x800897A8: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x800897AC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800897B0: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x800897B4: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x800897B8: b           L_80089BDC
    // 0x800897BC: nop

        goto L_80089BDC;
    // 0x800897BC: nop

L_800897C0:
    // 0x800897C0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800897C4: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800897C8: jal         0x8008BC04
    // 0x800897CC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008BC04(rdram, ctx);
        goto after_29;
    // 0x800897CC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_29:
    // 0x800897D0: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800897D4: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x800897D8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800897DC: addiu       $t0, $t9, 0x8
    ctx->r8 = ADD32(ctx->r25, 0X8);
    // 0x800897E0: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x800897E4: b           L_80089BDC
    // 0x800897E8: nop

        goto L_80089BDC;
    // 0x800897E8: nop

L_800897EC:
    // 0x800897EC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800897F0: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800897F4: jal         0x8008E8A4
    // 0x800897F8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008E8A4(rdram, ctx);
        goto after_30;
    // 0x800897F8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_30:
    // 0x800897FC: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80089800: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x80089804: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089808: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x8008980C: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x80089810: b           L_80089BDC
    // 0x80089814: nop

        goto L_80089BDC;
    // 0x80089814: nop

L_80089818:
    // 0x80089818: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008981C: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089820: jal         0x8008E918
    // 0x80089824: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008E918(rdram, ctx);
        goto after_31;
    // 0x80089824: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_31:
    // 0x80089828: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x8008982C: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x80089830: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089834: addiu       $t4, $t3, 0x6
    ctx->r12 = ADD32(ctx->r11, 0X6);
    // 0x80089838: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x8008983C: b           L_80089BDC
    // 0x80089840: nop

        goto L_80089BDC;
    // 0x80089840: nop

L_80089844:
    // 0x80089844: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089848: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x8008984C: jal         0x8008EAE4
    // 0x80089850: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008EAE4(rdram, ctx);
        goto after_32;
    // 0x80089850: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_32:
    // 0x80089854: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80089858: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x8008985C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089860: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x80089864: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x80089868: b           L_80089BDC
    // 0x8008986C: nop

        goto L_80089BDC;
    // 0x8008986C: nop

L_80089870:
    // 0x80089870: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089874: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089878: jal         0x8008EB10
    // 0x8008987C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008EB10(rdram, ctx);
        goto after_33;
    // 0x8008987C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_33:
    // 0x80089880: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089884: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089888: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008988C: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80089890: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x80089894: b           L_80089BDC
    // 0x80089898: nop

        goto L_80089BDC;
    // 0x80089898: nop

L_8008989C:
    // 0x8008989C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800898A0: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800898A4: jal         0x8008EB40
    // 0x800898A8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008EB40(rdram, ctx);
        goto after_34;
    // 0x800898A8: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_34:
    // 0x800898AC: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x800898B0: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x800898B4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800898B8: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x800898BC: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x800898C0: b           L_80089BDC
    // 0x800898C4: nop

        goto L_80089BDC;
    // 0x800898C4: nop

L_800898C8:
    // 0x800898C8: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800898CC: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800898D0: jal         0x8008EB6C
    // 0x800898D4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008EB6C(rdram, ctx);
        goto after_35;
    // 0x800898D4: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_35:
    // 0x800898D8: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800898DC: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x800898E0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800898E4: addiu       $t2, $t1, 0x2
    ctx->r10 = ADD32(ctx->r9, 0X2);
    // 0x800898E8: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x800898EC: b           L_80089BDC
    // 0x800898F0: nop

        goto L_80089BDC;
    // 0x800898F0: nop

L_800898F4:
    // 0x800898F4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800898F8: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800898FC: jal         0x8008EB9C
    // 0x80089900: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008EB9C(rdram, ctx);
        goto after_36;
    // 0x80089900: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_36:
    // 0x80089904: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x80089908: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x8008990C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089910: addiu       $t4, $t3, 0x2
    ctx->r12 = ADD32(ctx->r11, 0X2);
    // 0x80089914: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x80089918: b           L_80089BDC
    // 0x8008991C: nop

        goto L_80089BDC;
    // 0x8008991C: nop

L_80089920:
    // 0x80089920: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089924: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089928: jal         0x8008EBEC
    // 0x8008992C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008EBEC(rdram, ctx);
        goto after_37;
    // 0x8008992C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_37:
    // 0x80089930: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80089934: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x80089938: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x8008993C: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x80089940: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x80089944: b           L_80089BDC
    // 0x80089948: nop

        goto L_80089BDC;
    // 0x80089948: nop

L_8008994C:
    // 0x8008994C: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089950: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089954: jal         0x8008EC3C
    // 0x80089958: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008EC3C(rdram, ctx);
        goto after_38;
    // 0x80089958: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_38:
    // 0x8008995C: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089960: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089964: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089968: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x8008996C: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x80089970: b           L_80089BDC
    // 0x80089974: nop

        goto L_80089BDC;
    // 0x80089974: nop

L_80089978:
    // 0x80089978: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x8008997C: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089980: jal         0x8008ECD0
    // 0x80089984: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008ECD0(rdram, ctx);
        goto after_39;
    // 0x80089984: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_39:
    // 0x80089988: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x8008998C: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x80089990: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089994: addiu       $t0, $t9, 0x2
    ctx->r8 = ADD32(ctx->r25, 0X2);
    // 0x80089998: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x8008999C: b           L_80089BDC
    // 0x800899A0: nop

        goto L_80089BDC;
    // 0x800899A0: nop

L_800899A4:
    // 0x800899A4: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800899A8: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800899AC: jal         0x8008ED64
    // 0x800899B0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008ED64(rdram, ctx);
        goto after_40;
    // 0x800899B0: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_40:
    // 0x800899B4: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x800899B8: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x800899BC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800899C0: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x800899C4: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x800899C8: b           L_80089BDC
    // 0x800899CC: nop

        goto L_80089BDC;
    // 0x800899CC: nop

L_800899D0:
    // 0x800899D0: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x800899D4: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x800899D8: jal         0x8008EF8C
    // 0x800899DC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    ByteParser_SetObjectScale(rdram, ctx);
        goto after_41;
    // 0x800899DC: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_41:
    // 0x800899E0: lui         $t3, 0x8013
    ctx->r11 = S32(0X8013 << 16);
    // 0x800899E4: lw          $t3, 0x4C00($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X4C00);
    // 0x800899E8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x800899EC: addiu       $t4, $t3, 0x8
    ctx->r12 = ADD32(ctx->r11, 0X8);
    // 0x800899F0: sw          $t4, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r12;
    // 0x800899F4: b           L_80089BDC
    // 0x800899F8: nop

        goto L_80089BDC;
    // 0x800899F8: nop

L_800899FC:
    // 0x800899FC: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089A00: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089A04: jal         0x8008F078
    // 0x80089A08: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008F078(rdram, ctx);
        goto after_42;
    // 0x80089A08: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_42:
    // 0x80089A0C: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80089A10: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x80089A14: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089A18: addiu       $t6, $t5, 0xA
    ctx->r14 = ADD32(ctx->r13, 0XA);
    // 0x80089A1C: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x80089A20: b           L_80089BDC
    // 0x80089A24: nop

        goto L_80089BDC;
    // 0x80089A24: nop

L_80089A28:
    // 0x80089A28: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089A2C: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089A30: jal         0x8008F3D4
    // 0x80089A34: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008F3D4(rdram, ctx);
        goto after_43;
    // 0x80089A34: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_43:
    // 0x80089A38: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089A3C: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089A40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089A44: addiu       $t8, $t7, 0x2
    ctx->r24 = ADD32(ctx->r15, 0X2);
    // 0x80089A48: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x80089A4C: b           L_80089BDC
    // 0x80089A50: nop

        goto L_80089BDC;
    // 0x80089A50: nop

L_80089A54:
    // 0x80089A54: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089A58: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089A5C: jal         0x8008F63C
    // 0x80089A60: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008F63C(rdram, ctx);
        goto after_44;
    // 0x80089A60: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_44:
    // 0x80089A64: lui         $t9, 0x8013
    ctx->r25 = S32(0X8013 << 16);
    // 0x80089A68: lw          $t9, 0x4C00($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X4C00);
    // 0x80089A6C: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089A70: addiu       $t0, $t9, 0xA
    ctx->r8 = ADD32(ctx->r25, 0XA);
    // 0x80089A74: sw          $t0, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r8;
    // 0x80089A78: b           L_80089BDC
    // 0x80089A7C: nop

        goto L_80089BDC;
    // 0x80089A7C: nop

L_80089A80:
    // 0x80089A80: lui         $a0, 0x8013
    ctx->r4 = S32(0X8013 << 16);
    // 0x80089A84: lw          $a0, 0x4C00($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X4C00);
    // 0x80089A88: jal         0x8008F6AC
    // 0x80089A8C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    func_8008F6AC(rdram, ctx);
        goto after_45;
    // 0x80089A8C: addiu       $a0, $a0, 0x2
    ctx->r4 = ADD32(ctx->r4, 0X2);
    after_45:
    // 0x80089A90: lui         $t1, 0x8013
    ctx->r9 = S32(0X8013 << 16);
    // 0x80089A94: lw          $t1, 0x4C00($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X4C00);
    // 0x80089A98: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089A9C: addiu       $t2, $t1, 0x4
    ctx->r10 = ADD32(ctx->r9, 0X4);
    // 0x80089AA0: sw          $t2, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r10;
    // 0x80089AA4: b           L_80089BDC
    // 0x80089AA8: nop

        goto L_80089BDC;
    // 0x80089AA8: nop

L_80089AAC:
    // 0x80089AAC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x80089AB0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089AB4: sh          $t3, 0x4C22($at)
    MEM_H(0X4C22, ctx->r1) = ctx->r11;
    // 0x80089AB8: b           L_80089BDC
    // 0x80089ABC: nop

        goto L_80089BDC;
    // 0x80089ABC: nop

L_80089AC0:
    // 0x80089AC0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089AC4: sh          $zero, 0x4C22($at)
    MEM_H(0X4C22, ctx->r1) = 0;
    // 0x80089AC8: b           L_80089BDC
    // 0x80089ACC: nop

        goto L_80089BDC;
    // 0x80089ACC: nop

L_80089AD0:
    // 0x80089AD0: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80089AD4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089AD8: sb          $t4, 0x4C24($at)
    MEM_B(0X4C24, ctx->r1) = ctx->r12;
    // 0x80089ADC: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089AE0: sb          $zero, 0x4C25($at)
    MEM_B(0X4C25, ctx->r1) = 0;
    // 0x80089AE4: b           L_80089BDC
    // 0x80089AE8: nop

        goto L_80089BDC;
    // 0x80089AE8: nop

L_80089AEC:
    // 0x80089AEC: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x80089AF0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089AF4: sb          $t5, 0x4C24($at)
    MEM_B(0X4C24, ctx->r1) = ctx->r13;
    // 0x80089AF8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089AFC: sb          $zero, 0x4C25($at)
    MEM_B(0X4C25, ctx->r1) = 0;
    // 0x80089B00: b           L_80089BDC
    // 0x80089B04: nop

        goto L_80089BDC;
    // 0x80089B04: nop

L_80089B08:
    // 0x80089B08: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089B0C: sb          $zero, 0x4C24($at)
    MEM_B(0X4C24, ctx->r1) = 0;
    // 0x80089B10: b           L_80089BDC
    // 0x80089B14: nop

        goto L_80089BDC;
    // 0x80089B14: nop

L_80089B18:
    // 0x80089B18: lui         $t6, 0x8013
    ctx->r14 = S32(0X8013 << 16);
    // 0x80089B1C: lw          $t6, 0x4C00($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X4C00);
    // 0x80089B20: nop

    // 0x80089B24: lh          $a0, 0x2($t6)
    ctx->r4 = MEM_H(ctx->r14, 0X2);
    // 0x80089B28: lh          $a1, 0x4($t6)
    ctx->r5 = MEM_H(ctx->r14, 0X4);
    // 0x80089B2C: lh          $a2, 0x6($t6)
    ctx->r6 = MEM_H(ctx->r14, 0X6);
    // 0x80089B30: jal         0x8001FB3C
    // 0x80089B34: nop

    func_8001FB3C(rdram, ctx);
        goto after_46;
    // 0x80089B34: nop

    after_46:
    // 0x80089B38: lui         $t7, 0x8013
    ctx->r15 = S32(0X8013 << 16);
    // 0x80089B3C: lw          $t7, 0x4C00($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X4C00);
    // 0x80089B40: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089B44: addiu       $t8, $t7, 0x6
    ctx->r24 = ADD32(ctx->r15, 0X6);
    // 0x80089B48: sw          $t8, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r24;
    // 0x80089B4C: b           L_80089BDC
    // 0x80089B50: nop

        goto L_80089BDC;
    // 0x80089B50: nop

L_80089B54:
    // 0x80089B54: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80089B58: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089B5C: sb          $t9, 0x4C26($at)
    MEM_B(0X4C26, ctx->r1) = ctx->r25;
    // 0x80089B60: b           L_80089BDC
    // 0x80089B64: nop

        goto L_80089BDC;
    // 0x80089B64: nop

L_80089B68:
    // 0x80089B68: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089B6C: sb          $zero, 0x4C26($at)
    MEM_B(0X4C26, ctx->r1) = 0;
    // 0x80089B70: b           L_80089BDC
    // 0x80089B74: nop

        goto L_80089BDC;
    // 0x80089B74: nop

L_80089B78:
    // 0x80089B78: jal         0x8008884C
    // 0x80089B7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8008884C(rdram, ctx);
        goto after_47;
    // 0x80089B7C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_47:
    // 0x80089B80: b           L_80089BDC
    // 0x80089B84: nop

        goto L_80089BDC;
    // 0x80089B84: nop

L_80089B88:
    // 0x80089B88: jal         0x8008884C
    // 0x80089B8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8008884C(rdram, ctx);
        goto after_48;
    // 0x80089B8C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_48:
    // 0x80089B90: b           L_80089BDC
    // 0x80089B94: nop

        goto L_80089BDC;
    // 0x80089B94: nop

L_80089B98:
    // 0x80089B98: lui         $t0, 0x8013
    ctx->r8 = S32(0X8013 << 16);
    // 0x80089B9C: lw          $t0, 0x4C00($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X4C00);
    // 0x80089BA0: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089BA4: lh          $t1, 0x2($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X2);
    // 0x80089BA8: nop

    // 0x80089BAC: sb          $t1, 0x4BF0($at)
    MEM_B(0X4BF0, ctx->r1) = ctx->r9;
    // 0x80089BB0: lui         $t2, 0x8013
    ctx->r10 = S32(0X8013 << 16);
    // 0x80089BB4: lw          $t2, 0x4C00($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X4C00);
    // 0x80089BB8: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089BBC: addiu       $t3, $t2, 0x2
    ctx->r11 = ADD32(ctx->r10, 0X2);
    // 0x80089BC0: sw          $t3, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r11;
    // 0x80089BC4: b           L_80089BDC
    // 0x80089BC8: nop

        goto L_80089BDC;
    // 0x80089BC8: nop

L_80089BCC:
    // 0x80089BCC: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80089BD0: sh          $t4, 0x1E($sp)
    MEM_H(0X1E, ctx->r29) = ctx->r12;
    // 0x80089BD4: b           L_80089BDC
    // 0x80089BD8: nop

        goto L_80089BDC;
    // 0x80089BD8: nop

L_80089BDC:
    // 0x80089BDC: lui         $t5, 0x8013
    ctx->r13 = S32(0X8013 << 16);
    // 0x80089BE0: lw          $t5, 0x4C00($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X4C00);
    // 0x80089BE4: lui         $at, 0x8013
    ctx->r1 = S32(0X8013 << 16);
    // 0x80089BE8: addiu       $t6, $t5, 0x2
    ctx->r14 = ADD32(ctx->r13, 0X2);
    // 0x80089BEC: sw          $t6, 0x4C00($at)
    MEM_W(0X4C00, ctx->r1) = ctx->r14;
    // 0x80089BF0: lh          $t7, 0x1E($sp)
    ctx->r15 = MEM_H(ctx->r29, 0X1E);
    // 0x80089BF4: nop

    // 0x80089BF8: beq         $t7, $zero, L_80088FC0
    if (ctx->r15 == 0) {
        // 0x80089BFC: nop
    
            goto L_80088FC0;
    }
    // 0x80089BFC: nop

L_80089C00:
    // 0x80089C00: b           L_80089C08
    // 0x80089C04: nop

        goto L_80089C08;
    // 0x80089C04: nop

L_80089C08:
    // 0x80089C08: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80089C0C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80089C10: jr          $ra
    // 0x80089C14: nop

    return;
    // 0x80089C14: nop

;}
RECOMP_FUNC void func_800D5AA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D5AA4: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x800D5AA8: sw          $ra, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r31;
    // 0x800D5AAC: sw          $s0, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r16;
    // 0x800D5AB0: swc1        $f21, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x800D5AB4: swc1        $f20, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f20.u32l;
    // 0x800D5AB8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D5ABC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D5AC0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D5AC4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D5AC8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D5ACC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D5AD0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D5AD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D5AD8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D5ADC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D5AE0: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x800D5AE4: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D5AE8: nop

    // 0x800D5AEC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D5AF0: nop

    // 0x800D5AF4: bne         $t1, $zero, L_800D5BB0
    if (ctx->r9 != 0) {
        // 0x800D5AF8: nop
    
            goto L_800D5BB0;
    }
    // 0x800D5AF8: nop

    // 0x800D5AFC: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D5B00: nop

    // 0x800D5B04: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800D5B08: nop

    // 0x800D5B0C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800D5B10: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800D5B14: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800D5B18: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D5B1C: nop

    // 0x800D5B20: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x800D5B24: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D5B28: nop

    // 0x800D5B2C: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x800D5B30: nop

    // 0x800D5B34: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x800D5B38: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D5B3C: nop

    // 0x800D5B40: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x800D5B44: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D5B48: nop

    // 0x800D5B4C: sh          $zero, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = 0;
    // 0x800D5B50: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D5B54: nop

    // 0x800D5B58: lh          $s0, 0xAA($t9)
    ctx->r16 = MEM_H(ctx->r25, 0XAA);
    // 0x800D5B5C: nop

    // 0x800D5B60: sh          $s0, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r16;
    // 0x800D5B64: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D5B68: nop

    // 0x800D5B6C: sh          $s0, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r16;
    // 0x800D5B70: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5B74: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x800D5B78: addiu       $t1, $t1, -0x7798
    ctx->r9 = ADD32(ctx->r9, -0X7798);
    // 0x800D5B7C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5B80: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x800D5B84: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D5B88: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D5B8C: jal         0x8001C0EC
    // 0x800D5B90: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D5B90: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_0:
    // 0x800D5B94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5B98: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5B9C: jal         0x8001BBDC
    // 0x800D5BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D5BA0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x800D5BA4: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D5BA8: addiu       $t3, $zero, -0x1
    ctx->r11 = ADD32(0, -0X1);
    // 0x800D5BAC: sh          $t3, 0x108($t4)
    MEM_H(0X108, ctx->r12) = ctx->r11;
L_800D5BB0:
    // 0x800D5BB0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D5BB4: nop

    // 0x800D5BB8: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x800D5BBC: nop

    // 0x800D5BC0: beq         $t5, $zero, L_800D5F80
    if (ctx->r13 == 0) {
        // 0x800D5BC4: nop
    
            goto L_800D5F80;
    }
    // 0x800D5BC4: nop

    // 0x800D5BC8: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D5BCC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D5BD0: lh          $t7, 0xA8($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA8);
    // 0x800D5BD4: nop

    // 0x800D5BD8: beq         $t7, $at, L_800D5BEC
    if (ctx->r15 == ctx->r1) {
        // 0x800D5BDC: nop
    
            goto L_800D5BEC;
    }
    // 0x800D5BDC: nop

    // 0x800D5BE0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D5BE4: bne         $t7, $at, L_800D5C40
    if (ctx->r15 != ctx->r1) {
        // 0x800D5BE8: nop
    
            goto L_800D5C40;
    }
    // 0x800D5BE8: nop

L_800D5BEC:
    // 0x800D5BEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5BF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5BF4: jal         0x8001B44C
    // 0x800D5BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x800D5BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800D5BFC: beq         $v0, $zero, L_800D5C38
    if (ctx->r2 == 0) {
        // 0x800D5C00: nop
    
            goto L_800D5C38;
    }
    // 0x800D5C00: nop

    // 0x800D5C04: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D5C08: nop

    // 0x800D5C0C: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x800D5C10: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D5C14: nop

    // 0x800D5C18: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x800D5C1C: nop

    // 0x800D5C20: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x800D5C24: sh          $t1, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r9;
    // 0x800D5C28: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5C2C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5C30: jal         0x8001BBDC
    // 0x800D5C34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x800D5C34: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_3:
L_800D5C38:
    // 0x800D5C38: b           L_800D5F78
    // 0x800D5C3C: nop

        goto L_800D5F78;
    // 0x800D5C3C: nop

L_800D5C40:
    // 0x800D5C40: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D5C44: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D5C48: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x800D5C4C: nop

    // 0x800D5C50: bne         $t4, $at, L_800D5CD0
    if (ctx->r12 != ctx->r1) {
        // 0x800D5C54: nop
    
            goto L_800D5CD0;
    }
    // 0x800D5C54: nop

    // 0x800D5C58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5C5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5C60: jal         0x8001B44C
    // 0x800D5C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x800D5C64: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x800D5C68: beq         $v0, $zero, L_800D5CC8
    if (ctx->r2 == 0) {
        // 0x800D5C6C: nop
    
            goto L_800D5CC8;
    }
    // 0x800D5C6C: nop

    // 0x800D5C70: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D5C74: nop

    // 0x800D5C78: sh          $zero, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = 0;
    // 0x800D5C7C: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D5C80: nop

    // 0x800D5C84: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x800D5C88: nop

    // 0x800D5C8C: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800D5C90: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
    // 0x800D5C94: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5C98: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x800D5C9C: addiu       $t8, $t8, -0x7798
    ctx->r24 = ADD32(ctx->r24, -0X7798);
    // 0x800D5CA0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5CA4: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x800D5CA8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D5CAC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D5CB0: jal         0x8001C0EC
    // 0x800D5CB4: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x800D5CB4: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_5:
    // 0x800D5CB8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5CBC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5CC0: jal         0x8001BBDC
    // 0x800D5CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x800D5CC4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_800D5CC8:
    // 0x800D5CC8: b           L_800D5F78
    // 0x800D5CCC: nop

        goto L_800D5F78;
    // 0x800D5CCC: nop

L_800D5CD0:
    // 0x800D5CD0: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x800D5CD4: nop

    // 0x800D5CD8: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x800D5CDC: nop

    // 0x800D5CE0: beq         $t1, $zero, L_800D5CF4
    if (ctx->r9 == 0) {
        // 0x800D5CE4: nop
    
            goto L_800D5CF4;
    }
    // 0x800D5CE4: nop

    // 0x800D5CE8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D5CEC: bne         $t1, $at, L_800D5D54
    if (ctx->r9 != ctx->r1) {
        // 0x800D5CF0: nop
    
            goto L_800D5D54;
    }
    // 0x800D5CF0: nop

L_800D5CF4:
    // 0x800D5CF4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D5CF8: nop

    // 0x800D5CFC: lh          $t3, 0xAA($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XAA);
    // 0x800D5D00: nop

    // 0x800D5D04: bne         $t3, $zero, L_800D5D34
    if (ctx->r11 != 0) {
        // 0x800D5D08: nop
    
            goto L_800D5D34;
    }
    // 0x800D5D08: nop

    // 0x800D5D0C: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D5D10: nop

    // 0x800D5D14: sh          $zero, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = 0;
    // 0x800D5D18: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D5D1C: nop

    // 0x800D5D20: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x800D5D24: nop

    // 0x800D5D28: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x800D5D2C: b           L_800D5D4C
    // 0x800D5D30: sh          $t7, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r15;
        goto L_800D5D4C;
    // 0x800D5D30: sh          $t7, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r15;
L_800D5D34:
    // 0x800D5D34: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D5D38: nop

    // 0x800D5D3C: lh          $t8, 0xAA($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XAA);
    // 0x800D5D40: nop

    // 0x800D5D44: addiu       $t0, $t8, -0x1
    ctx->r8 = ADD32(ctx->r24, -0X1);
    // 0x800D5D48: sh          $t0, 0xAA($t5)
    MEM_H(0XAA, ctx->r13) = ctx->r8;
L_800D5D4C:
    // 0x800D5D4C: b           L_800D5F78
    // 0x800D5D50: nop

        goto L_800D5F78;
    // 0x800D5D50: nop

L_800D5D54:
    // 0x800D5D54: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D5D58: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800D5D5C: lh          $t9, 0xA8($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA8);
    // 0x800D5D60: nop

    // 0x800D5D64: bne         $t9, $at, L_800D5F78
    if (ctx->r25 != ctx->r1) {
        // 0x800D5D68: nop
    
            goto L_800D5F78;
    }
    // 0x800D5D68: nop

    // 0x800D5D6C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D5D70: nop

    // 0x800D5D74: lh          $t4, 0xAA($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XAA);
    // 0x800D5D78: nop

    // 0x800D5D7C: slti        $at, $t4, 0x28
    ctx->r1 = SIGNED(ctx->r12) < 0X28 ? 1 : 0;
    // 0x800D5D80: beq         $at, $zero, L_800D5F20
    if (ctx->r1 == 0) {
        // 0x800D5D84: nop
    
            goto L_800D5F20;
    }
    // 0x800D5D84: nop

    // 0x800D5D88: slti        $at, $t4, 0x10
    ctx->r1 = SIGNED(ctx->r12) < 0X10 ? 1 : 0;
    // 0x800D5D8C: bne         $at, $zero, L_800D5F20
    if (ctx->r1 != 0) {
        // 0x800D5D90: nop
    
            goto L_800D5F20;
    }
    // 0x800D5D90: nop

    // 0x800D5D94: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x800D5D98: nop

    // 0x800D5D9C: lh          $t7, 0xAA($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XAA);
    // 0x800D5DA0: nop

    // 0x800D5DA4: andi        $t2, $t7, 0xF
    ctx->r10 = ctx->r15 & 0XF;
    // 0x800D5DA8: mtc1        $t2, $f6
    ctx->f6.u32l = ctx->r10;
    // 0x800D5DAC: nop

    // 0x800D5DB0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D5DB4: swc1        $f8, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->f8.u32l;
    // 0x800D5DB8: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x800D5DBC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D5DC0: lwc1        $f10, 0x3C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X3C);
    // 0x800D5DC4: nop

    // 0x800D5DC8: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x800D5DCC: nop

    // 0x800D5DD0: bc1t        L_800D5E10
    if (c1cs) {
        // 0x800D5DD4: nop
    
            goto L_800D5E10;
    }
    // 0x800D5DD4: nop

    // 0x800D5DD8: lui         $at, 0x40C0
    ctx->r1 = S32(0X40C0 << 16);
    // 0x800D5DDC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x800D5DE0: nop

    // 0x800D5DE4: c.eq.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl == ctx->f18.fl;
    // 0x800D5DE8: nop

    // 0x800D5DEC: bc1t        L_800D5E10
    if (c1cs) {
        // 0x800D5DF0: nop
    
            goto L_800D5E10;
    }
    // 0x800D5DF0: nop

    // 0x800D5DF4: lui         $at, 0x4110
    ctx->r1 = S32(0X4110 << 16);
    // 0x800D5DF8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800D5DFC: nop

    // 0x800D5E00: c.eq.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl == ctx->f4.fl;
    // 0x800D5E04: nop

    // 0x800D5E08: bc1f        L_800D5F20
    if (!c1cs) {
        // 0x800D5E0C: nop
    
            goto L_800D5F20;
    }
    // 0x800D5E0C: nop

L_800D5E10:
    // 0x800D5E10: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x800D5E14: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x800D5E18: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D5E1C: lui         $at, 0x42A0
    ctx->r1 = S32(0X42A0 << 16);
    // 0x800D5E20: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D5E24: lwc1        $f18, 0x8($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X8);
    // 0x800D5E28: lwc1        $f6, 0x4($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X4);
    // 0x800D5E2C: add.s       $f4, $f18, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f4.fl = ctx->f18.fl + ctx->f10.fl;
    // 0x800D5E30: lw          $a2, 0x0($t8)
    ctx->r6 = MEM_W(ctx->r24, 0X0);
    // 0x800D5E34: sub.s       $f16, $f6, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f16.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x800D5E38: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x800D5E3C: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800D5E40: mfc1        $a3, $f16
    ctx->r7 = (int32_t)ctx->f16.u32l;
    // 0x800D5E44: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D5E48: addiu       $a1, $a1, 0x4168
    ctx->r5 = ADD32(ctx->r5, 0X4168);
    // 0x800D5E4C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D5E50: jal         0x80027464
    // 0x800D5E54: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80027464(rdram, ctx);
        goto after_7;
    // 0x800D5E54: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_7:
    // 0x800D5E58: sw          $v0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r2;
    // 0x800D5E5C: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x800D5E60: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x800D5E64: beq         $t0, $at, L_800D5F20
    if (ctx->r8 == ctx->r1) {
        // 0x800D5E68: nop
    
            goto L_800D5F20;
    }
    // 0x800D5E68: nop

    // 0x800D5E6C: lw          $a0, 0x40($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X40);
    // 0x800D5E70: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x800D5E74: addiu       $a3, $a3, -0x7768
    ctx->r7 = ADD32(ctx->r7, -0X7768);
    // 0x800D5E78: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D5E7C: jal         0x8001ABF4
    // 0x800D5E80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    func_8001ABF4(rdram, ctx);
        goto after_8;
    // 0x800D5E80: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    after_8:
    // 0x800D5E84: lw          $t5, 0x40($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X40);
    // 0x800D5E88: lw          $t9, 0x40($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X40);
    // 0x800D5E8C: sll         $t1, $t5, 2
    ctx->r9 = S32(ctx->r13 << 2);
    // 0x800D5E90: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x800D5E94: sll         $t3, $t9, 2
    ctx->r11 = S32(ctx->r25 << 2);
    // 0x800D5E98: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D5E9C: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800D5EA0: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x800D5EA4: lwc1        $f8, 0x50E8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X50E8);
    // 0x800D5EA8: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x800D5EAC: addu        $t1, $t1, $t5
    ctx->r9 = ADD32(ctx->r9, ctx->r13);
    // 0x800D5EB0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D5EB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D5EB8: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x800D5EBC: addu        $t3, $t3, $t9
    ctx->r11 = ADD32(ctx->r11, ctx->r25);
    // 0x800D5EC0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x800D5EC4: addiu       $t4, $t4, 0x4150
    ctx->r12 = ADD32(ctx->r12, 0X4150);
    // 0x800D5EC8: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D5ECC: addu        $t6, $t3, $t4
    ctx->r14 = ADD32(ctx->r11, ctx->r12);
    // 0x800D5ED0: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x800D5ED4: lwc1        $f20, 0x14($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X14);
    // 0x800D5ED8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D5EDC: swc1        $f20, 0x10($t6)
    MEM_W(0X10, ctx->r14) = ctx->f20.u32l;
    // 0x800D5EE0: lw          $t7, 0x40($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X40);
    // 0x800D5EE4: nop

    // 0x800D5EE8: sll         $t2, $t7, 2
    ctx->r10 = S32(ctx->r15 << 2);
    // 0x800D5EEC: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x800D5EF0: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x800D5EF4: addu        $t2, $t2, $t7
    ctx->r10 = ADD32(ctx->r10, ctx->r15);
    // 0x800D5EF8: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x800D5EFC: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x800D5F00: swc1        $f20, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f20.u32l;
    // 0x800D5F04: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5F08: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5F0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D5F10: addiu       $a2, $zero, 0x58
    ctx->r6 = ADD32(0, 0X58);
    // 0x800D5F14: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800D5F18: jal         0x800175F0
    // 0x800D5F1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_9;
    // 0x800D5F1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_9:
L_800D5F20:
    // 0x800D5F20: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D5F24: nop

    // 0x800D5F28: lh          $t0, 0xAA($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XAA);
    // 0x800D5F2C: nop

    // 0x800D5F30: bne         $t0, $zero, L_800D5F60
    if (ctx->r8 != 0) {
        // 0x800D5F34: nop
    
            goto L_800D5F60;
    }
    // 0x800D5F34: nop

    // 0x800D5F38: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D5F3C: nop

    // 0x800D5F40: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x800D5F44: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D5F48: nop

    // 0x800D5F4C: lh          $t9, 0xA8($t1)
    ctx->r25 = MEM_H(ctx->r9, 0XA8);
    // 0x800D5F50: nop

    // 0x800D5F54: addiu       $t3, $t9, 0x1
    ctx->r11 = ADD32(ctx->r25, 0X1);
    // 0x800D5F58: b           L_800D5F78
    // 0x800D5F5C: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
        goto L_800D5F78;
    // 0x800D5F5C: sh          $t3, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r11;
L_800D5F60:
    // 0x800D5F60: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D5F64: nop

    // 0x800D5F68: lh          $t6, 0xAA($t4)
    ctx->r14 = MEM_H(ctx->r12, 0XAA);
    // 0x800D5F6C: nop

    // 0x800D5F70: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800D5F74: sh          $t7, 0xAA($t4)
    MEM_H(0XAA, ctx->r12) = ctx->r15;
L_800D5F78:
    // 0x800D5F78: b           L_800D611C
    // 0x800D5F7C: nop

        goto L_800D611C;
    // 0x800D5F7C: nop

L_800D5F80:
    // 0x800D5F80: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D5F84: nop

    // 0x800D5F88: lh          $t8, 0xA8($t2)
    ctx->r24 = MEM_H(ctx->r10, 0XA8);
    // 0x800D5F8C: nop

    // 0x800D5F90: beq         $t8, $zero, L_800D5FA4
    if (ctx->r24 == 0) {
        // 0x800D5F94: nop
    
            goto L_800D5FA4;
    }
    // 0x800D5F94: nop

    // 0x800D5F98: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D5F9C: bne         $t8, $at, L_800D5FC0
    if (ctx->r24 != ctx->r1) {
        // 0x800D5FA0: nop
    
            goto L_800D5FC0;
    }
    // 0x800D5FA0: nop

L_800D5FA4:
    // 0x800D5FA4: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D5FA8: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800D5FAC: sh          $t0, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r8;
    // 0x800D5FB0: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D5FB4: addiu       $t9, $zero, 0x5
    ctx->r25 = ADD32(0, 0X5);
    // 0x800D5FB8: b           L_800D611C
    // 0x800D5FBC: sh          $t9, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r25;
        goto L_800D611C;
    // 0x800D5FBC: sh          $t9, 0xAA($t3)
    MEM_H(0XAA, ctx->r11) = ctx->r25;
L_800D5FC0:
    // 0x800D5FC0: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D5FC4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D5FC8: lh          $t6, 0xA8($t1)
    ctx->r14 = MEM_H(ctx->r9, 0XA8);
    // 0x800D5FCC: nop

    // 0x800D5FD0: bne         $t6, $at, L_800D601C
    if (ctx->r14 != ctx->r1) {
        // 0x800D5FD4: nop
    
            goto L_800D601C;
    }
    // 0x800D5FD4: nop

    // 0x800D5FD8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D5FDC: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800D5FE0: addiu       $t7, $t7, -0x7798
    ctx->r15 = ADD32(ctx->r15, -0X7798);
    // 0x800D5FE4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D5FE8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800D5FEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D5FF0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x800D5FF4: jal         0x8001C0EC
    // 0x800D5FF8: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_10;
    // 0x800D5FF8: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_10:
    // 0x800D5FFC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6000: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6004: jal         0x8001BBDC
    // 0x800D6008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_11;
    // 0x800D6008: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x800D600C: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x800D6010: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x800D6014: b           L_800D611C
    // 0x800D6018: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
        goto L_800D611C;
    // 0x800D6018: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_800D601C:
    // 0x800D601C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D6020: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x800D6024: lh          $t0, 0xA8($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA8);
    // 0x800D6028: nop

    // 0x800D602C: bne         $t0, $at, L_800D6078
    if (ctx->r8 != ctx->r1) {
        // 0x800D6030: nop
    
            goto L_800D6078;
    }
    // 0x800D6030: nop

    // 0x800D6034: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D6038: lui         $t5, 0x8012
    ctx->r13 = S32(0X8012 << 16);
    // 0x800D603C: addiu       $t5, $t5, -0x7798
    ctx->r13 = ADD32(ctx->r13, -0X7798);
    // 0x800D6040: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6044: sw          $t5, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r13;
    // 0x800D6048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D604C: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800D6050: jal         0x8001C0EC
    // 0x800D6054: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_12;
    // 0x800D6054: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_12:
    // 0x800D6058: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D605C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D6060: jal         0x8001BBDC
    // 0x800D6064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_13;
    // 0x800D6064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_13:
    // 0x800D6068: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x800D606C: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x800D6070: b           L_800D611C
    // 0x800D6074: sh          $t9, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r25;
        goto L_800D611C;
    // 0x800D6074: sh          $t9, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r25;
L_800D6078:
    // 0x800D6078: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D607C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x800D6080: lh          $t6, 0xA8($t1)
    ctx->r14 = MEM_H(ctx->r9, 0XA8);
    // 0x800D6084: nop

    // 0x800D6088: bne         $t6, $at, L_800D60B8
    if (ctx->r14 != ctx->r1) {
        // 0x800D608C: nop
    
            goto L_800D60B8;
    }
    // 0x800D608C: nop

    // 0x800D6090: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D6094: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x800D6098: sh          $t7, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r15;
    // 0x800D609C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x800D60A0: addiu       $t2, $zero, 0x32
    ctx->r10 = ADD32(0, 0X32);
    // 0x800D60A4: sh          $t2, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r10;
    // 0x800D60A8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x800D60AC: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x800D60B0: b           L_800D611C
    // 0x800D60B4: sh          $t0, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r8;
        goto L_800D611C;
    // 0x800D60B4: sh          $t0, 0x108($t5)
    MEM_H(0X108, ctx->r13) = ctx->r8;
L_800D60B8:
    // 0x800D60B8: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x800D60BC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x800D60C0: lh          $t3, 0xA8($t9)
    ctx->r11 = MEM_H(ctx->r25, 0XA8);
    // 0x800D60C4: nop

    // 0x800D60C8: bne         $t3, $at, L_800D611C
    if (ctx->r11 != ctx->r1) {
        // 0x800D60CC: nop
    
            goto L_800D611C;
    }
    // 0x800D60CC: nop

    // 0x800D60D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D60D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D60D8: jal         0x8001BBDC
    // 0x800D60DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_14;
    // 0x800D60DC: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_14:
    // 0x800D60E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D60E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D60E8: jal         0x8002A2EC
    // 0x800D60EC: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_15;
    // 0x800D60EC: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_15:
    // 0x800D60F0: beq         $v0, $zero, L_800D6104
    if (ctx->r2 == 0) {
        // 0x800D60F4: nop
    
            goto L_800D6104;
    }
    // 0x800D60F4: nop

    // 0x800D60F8: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x800D60FC: b           L_800D611C
    // 0x800D6100: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
        goto L_800D611C;
    // 0x800D6100: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_800D6104:
    // 0x800D6104: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x800D6108: addiu       $t6, $zero, 0x3
    ctx->r14 = ADD32(0, 0X3);
    // 0x800D610C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x800D6110: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x800D6114: nop

    // 0x800D6118: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800D611C:
    // 0x800D611C: b           L_800D6124
    // 0x800D6120: nop

        goto L_800D6124;
    // 0x800D6120: nop

L_800D6124:
    // 0x800D6124: lw          $ra, 0x2C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X2C);
    // 0x800D6128: lwc1        $f21, 0x20($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X20);
    // 0x800D612C: lwc1        $f20, 0x24($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X24);
    // 0x800D6130: lw          $s0, 0x28($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X28);
    // 0x800D6134: jr          $ra
    // 0x800D6138: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x800D6138: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_800642E0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800642E0: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800642E4: addiu       $t6, $zero, 0xE
    ctx->r14 = ADD32(0, 0XE);
    // 0x800642E8: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
L_800642EC:
    // 0x800642EC: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800642F0: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x800642F4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800642F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800642FC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80064300: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80064304: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80064308: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8006430C: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x80064310: nop

    // 0x80064314: bne         $t9, $zero, L_80064328
    if (ctx->r25 != 0) {
        // 0x80064318: nop
    
            goto L_80064328;
    }
    // 0x80064318: nop

    // 0x8006431C: lw          $v0, 0x4($sp)
    ctx->r2 = MEM_W(ctx->r29, 0X4);
    // 0x80064320: b           L_80064350
    // 0x80064324: nop

        goto L_80064350;
    // 0x80064324: nop

L_80064328:
    // 0x80064328: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x8006432C: nop

    // 0x80064330: addiu       $t1, $t0, 0x1
    ctx->r9 = ADD32(ctx->r8, 0X1);
    // 0x80064334: slti        $at, $t1, 0x4E
    ctx->r1 = SIGNED(ctx->r9) < 0X4E ? 1 : 0;
    // 0x80064338: bne         $at, $zero, L_800642EC
    if (ctx->r1 != 0) {
        // 0x8006433C: sw          $t1, 0x4($sp)
        MEM_W(0X4, ctx->r29) = ctx->r9;
            goto L_800642EC;
    }
    // 0x8006433C: sw          $t1, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r9;
    // 0x80064340: b           L_80064350
    // 0x80064344: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
        goto L_80064350;
    // 0x80064344: addiu       $v0, $zero, -0x1
    ctx->r2 = ADD32(0, -0X1);
    // 0x80064348: b           L_80064350
    // 0x8006434C: nop

        goto L_80064350;
    // 0x8006434C: nop

L_80064350:
    // 0x80064350: jr          $ra
    // 0x80064354: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80064354: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800963DC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800963DC: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800963E0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800963E4: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800963E8: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800963EC: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800963F0: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800963F4: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800963F8: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800963FC: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80096400: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80096404: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80096408: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x8009640C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80096410: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80096414: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80096418: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x8009641C: addiu       $a1, $a1, 0x3418
    ctx->r5 = ADD32(ctx->r5, 0X3418);
    // 0x80096420: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80096424: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80096428: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x8009642C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80096430: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80096434: jal         0x80027464
    // 0x80096438: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80096438: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x8009643C: b           L_80096444
    // 0x80096440: nop

        goto L_80096444;
    // 0x80096440: nop

L_80096444:
    // 0x80096444: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80096448: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8009644C: jr          $ra
    // 0x80096450: nop

    return;
    // 0x80096450: nop

;}
RECOMP_FUNC void func_800FC8D0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800FC8D0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800FC8D4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800FC8D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800FC8DC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800FC8E0: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800FC8E4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800FC8E8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FC8EC: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800FC8F0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800FC8F4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800FC8F8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800FC8FC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800FC900: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800FC904: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FC908: nop

    // 0x800FC90C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800FC910: nop

    // 0x800FC914: bne         $t1, $zero, L_800FC98C
    if (ctx->r9 != 0) {
        // 0x800FC918: nop
    
            goto L_800FC98C;
    }
    // 0x800FC918: nop

    // 0x800FC91C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FC920: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800FC924: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800FC928: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x800FC92C: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800FC930: nop

    // 0x800FC934: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x800FC938: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x800FC93C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800FC940: nop

    // 0x800FC944: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x800FC948: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FC94C: addiu       $t6, $zero, 0x44
    ctx->r14 = ADD32(0, 0X44);
    // 0x800FC950: sh          $t6, 0xB0($t7)
    MEM_H(0XB0, ctx->r15) = ctx->r14;
    // 0x800FC954: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC958: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC95C: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800FC960: addiu       $a3, $a3, 0x75A8
    ctx->r7 = ADD32(ctx->r7, 0X75A8);
    // 0x800FC964: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FC968: jal         0x8001ABF4
    // 0x800FC96C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_0;
    // 0x800FC96C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_0:
    // 0x800FC970: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC974: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC978: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800FC97C: addiu       $a3, $a3, 0x7570
    ctx->r7 = ADD32(ctx->r7, 0X7570);
    // 0x800FC980: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FC984: jal         0x8001ABF4
    // 0x800FC988: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x800FC988: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_800FC98C:
    // 0x800FC98C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC990: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC994: jal         0x80029C40
    // 0x800FC998: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x800FC998: nop

    after_2:
    // 0x800FC99C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC9A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC9A4: jal         0x80029D04
    // 0x800FC9A8: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x800FC9A8: nop

    after_3:
    // 0x800FC9AC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800FC9B0: addiu       $at, $zero, 0x20
    ctx->r1 = ADD32(0, 0X20);
    // 0x800FC9B4: lh          $t9, 0xB0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB0);
    // 0x800FC9B8: nop

    // 0x800FC9BC: bne         $t9, $at, L_800FC9F4
    if (ctx->r25 != ctx->r1) {
        // 0x800FC9C0: nop
    
            goto L_800FC9F4;
    }
    // 0x800FC9C0: nop

    // 0x800FC9C4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC9C8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC9CC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FC9D0: addiu       $a2, $zero, 0x80
    ctx->r6 = ADD32(0, 0X80);
    // 0x800FC9D4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800FC9D8: jal         0x800175F0
    // 0x800FC9DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_4;
    // 0x800FC9DC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x800FC9E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FC9E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FC9E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FC9EC: jal         0x800FD04C
    // 0x800FC9F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_800FD04C(rdram, ctx);
        goto after_5;
    // 0x800FC9F0: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_5:
L_800FC9F4:
    // 0x800FC9F4: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800FC9F8: nop

    // 0x800FC9FC: lh          $t1, 0xB0($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XB0);
    // 0x800FCA00: nop

    // 0x800FCA04: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x800FCA08: sh          $t2, 0xB0($t0)
    MEM_H(0XB0, ctx->r8) = ctx->r10;
    // 0x800FCA0C: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800FCA10: nop

    // 0x800FCA14: lh          $t4, 0xB0($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XB0);
    // 0x800FCA18: nop

    // 0x800FCA1C: bgtz        $t4, L_800FCA74
    if (SIGNED(ctx->r12) > 0) {
        // 0x800FCA20: nop
    
            goto L_800FCA74;
    }
    // 0x800FCA20: nop

    // 0x800FCA24: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x800FCA28: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x800FCA2C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x800FCA30: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800FCA34: nop

    // 0x800FCA38: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
    // 0x800FCA3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCA40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCA44: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800FCA48: addiu       $a3, $a3, 0x758C
    ctx->r7 = ADD32(ctx->r7, 0X758C);
    // 0x800FCA4C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800FCA50: jal         0x8001ABF4
    // 0x800FCA54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_6;
    // 0x800FCA54: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_6:
    // 0x800FCA58: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800FCA5C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800FCA60: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x800FCA64: addiu       $a3, $a3, 0x7554
    ctx->r7 = ADD32(ctx->r7, 0X7554);
    // 0x800FCA68: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x800FCA6C: jal         0x8001ABF4
    // 0x800FCA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_7;
    // 0x800FCA70: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_7:
L_800FCA74:
    // 0x800FCA74: b           L_800FCA7C
    // 0x800FCA78: nop

        goto L_800FCA7C;
    // 0x800FCA78: nop

L_800FCA7C:
    // 0x800FCA7C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800FCA80: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800FCA84: jr          $ra
    // 0x800FCA88: nop

    return;
    // 0x800FCA88: nop

;}
RECOMP_FUNC void func_800D9B0C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9B0C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800D9B10: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D9B14: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800D9B18: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800D9B1C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800D9B20: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800D9B24: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800D9B28: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800D9B2C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800D9B30: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800D9B34: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800D9B38: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800D9B3C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800D9B40: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800D9B44: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800D9B48: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800D9B4C: addiu       $a1, $a1, 0x4294
    ctx->r5 = ADD32(ctx->r5, 0X4294);
    // 0x800D9B50: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800D9B54: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x800D9B58: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x800D9B5C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x800D9B60: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x800D9B64: jal         0x80027464
    // 0x800D9B68: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x800D9B68: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x800D9B6C: b           L_800D9B74
    // 0x800D9B70: nop

        goto L_800D9B74;
    // 0x800D9B70: nop

L_800D9B74:
    // 0x800D9B74: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D9B78: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800D9B7C: jr          $ra
    // 0x800D9B80: nop

    return;
    // 0x800D9B80: nop

;}
RECOMP_FUNC void func_800CC220(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CC220: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800CC224: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CC228: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CC22C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CC230: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CC234: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC238: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CC23C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CC240: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CC244: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CC248: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CC24C: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800CC250: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800CC254: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800CC258: nop

    // 0x800CC25C: bne         $t0, $zero, L_800CC27C
    if (ctx->r8 != 0) {
        // 0x800CC260: nop
    
            goto L_800CC27C;
    }
    // 0x800CC260: nop

    // 0x800CC264: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800CC268: nop

    // 0x800CC26C: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x800CC270: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800CC274: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x800CC278: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_800CC27C:
    // 0x800CC27C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800CC280: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x800CC284: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CC288: bne         $t4, $at, L_800CC2D0
    if (ctx->r12 != ctx->r1) {
        // 0x800CC28C: nop
    
            goto L_800CC2D0;
    }
    // 0x800CC28C: nop

    // 0x800CC290: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x800CC294: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800CC298: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800CC29C: nop

    // 0x800CC2A0: bne         $t6, $at, L_800CC2D0
    if (ctx->r14 != ctx->r1) {
        // 0x800CC2A4: nop
    
            goto L_800CC2D0;
    }
    // 0x800CC2A4: nop

    // 0x800CC2A8: lh          $t7, 0xA8($t5)
    ctx->r15 = MEM_H(ctx->r13, 0XA8);
    // 0x800CC2AC: nop

    // 0x800CC2B0: bne         $t7, $zero, L_800CC2D0
    if (ctx->r15 != 0) {
        // 0x800CC2B4: nop
    
            goto L_800CC2D0;
    }
    // 0x800CC2B4: nop

    // 0x800CC2B8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x800CC2BC: addiu       $t8, $zero, 0xA
    ctx->r24 = ADD32(0, 0XA);
    // 0x800CC2C0: sh          $t8, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = ctx->r24;
    // 0x800CC2C4: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800CC2C8: addiu       $t0, $zero, 0x32
    ctx->r8 = ADD32(0, 0X32);
    // 0x800CC2CC: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_800CC2D0:
    // 0x800CC2D0: b           L_800CC2D8
    // 0x800CC2D4: nop

        goto L_800CC2D8;
    // 0x800CC2D4: nop

L_800CC2D8:
    // 0x800CC2D8: jr          $ra
    // 0x800CC2DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800CC2DC: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80097B4C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80097B4C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80097B50: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80097B54: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80097B58: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80097B5C: nop

    // 0x80097B60: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80097B64: nop

    // 0x80097B68: bne         $t7, $zero, L_80097BAC
    if (ctx->r15 != 0) {
        // 0x80097B6C: nop
    
            goto L_80097BAC;
    }
    // 0x80097B6C: nop

    // 0x80097B70: lw          $t8, 0x20($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X20);
    // 0x80097B74: nop

    // 0x80097B78: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x80097B7C: nop

    // 0x80097B80: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80097B84: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x80097B88: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097B8C: lui         $t1, 0x8011
    ctx->r9 = S32(0X8011 << 16);
    // 0x80097B90: addiu       $t1, $t1, 0x6ECC
    ctx->r9 = ADD32(ctx->r9, 0X6ECC);
    // 0x80097B94: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097B98: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80097B9C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097BA0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80097BA4: jal         0x8001C0EC
    // 0x80097BA8: addiu       $a3, $zero, 0x1A9
    ctx->r7 = ADD32(0, 0X1A9);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80097BA8: addiu       $a3, $zero, 0x1A9
    ctx->r7 = ADD32(0, 0X1A9);
    after_0:
L_80097BAC:
    // 0x80097BAC: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80097BB0: nop

    // 0x80097BB4: lh          $t3, 0xA8($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA8);
    // 0x80097BB8: nop

    // 0x80097BBC: bne         $t3, $zero, L_80097C08
    if (ctx->r11 != 0) {
        // 0x80097BC0: nop
    
            goto L_80097C08;
    }
    // 0x80097BC0: nop

    // 0x80097BC4: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80097BC8: lb          $t4, 0x5247($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X5247);
    // 0x80097BCC: nop

    // 0x80097BD0: beq         $t4, $zero, L_80097C08
    if (ctx->r12 == 0) {
        // 0x80097BD4: nop
    
            goto L_80097C08;
    }
    // 0x80097BD4: nop

    // 0x80097BD8: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80097BDC: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80097BE0: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
    // 0x80097BE4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097BE8: lui         $t7, 0x8011
    ctx->r15 = S32(0X8011 << 16);
    // 0x80097BEC: addiu       $t7, $t7, 0x6ECC
    ctx->r15 = ADD32(ctx->r15, 0X6ECC);
    // 0x80097BF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097BF4: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x80097BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80097BFC: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80097C00: jal         0x8001C0EC
    // 0x80097C04: addiu       $a3, $zero, 0x1A9
    ctx->r7 = ADD32(0, 0X1A9);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x80097C04: addiu       $a3, $zero, 0x1A9
    ctx->r7 = ADD32(0, 0X1A9);
    after_1:
L_80097C08:
    // 0x80097C08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80097C0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80097C10: jal         0x8002A1FC
    // 0x80097C14: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x80097C14: lui         $a1, 0x43B4
    ctx->r5 = S32(0X43B4 << 16);
    after_2:
    // 0x80097C18: beq         $v0, $zero, L_80097C50
    if (ctx->r2 == 0) {
        // 0x80097C1C: nop
    
            goto L_80097C50;
    }
    // 0x80097C1C: nop

    // 0x80097C20: lw          $t9, 0x20($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X20);
    // 0x80097C24: nop

    // 0x80097C28: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80097C2C: nop

    // 0x80097C30: beq         $t0, $zero, L_80097C50
    if (ctx->r8 == 0) {
        // 0x80097C34: nop
    
            goto L_80097C50;
    }
    // 0x80097C34: nop

    // 0x80097C38: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80097C3C: addiu       $t8, $zero, 0x2
    ctx->r24 = ADD32(0, 0X2);
    // 0x80097C40: sh          $t8, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r24;
    // 0x80097C44: lw          $t2, 0x20($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X20);
    // 0x80097C48: nop

    // 0x80097C4C: sb          $zero, 0x132($t2)
    MEM_B(0X132, ctx->r10) = 0;
L_80097C50:
    // 0x80097C50: b           L_80097C58
    // 0x80097C54: nop

        goto L_80097C58;
    // 0x80097C54: nop

L_80097C58:
    // 0x80097C58: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80097C5C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80097C60: jr          $ra
    // 0x80097C64: nop

    return;
    // 0x80097C64: nop

;}
RECOMP_FUNC void func_800EDFA4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800EDFA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800EDFA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800EDFAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800EDFB0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800EDFB4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800EDFB8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800EDFBC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EDFC0: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800EDFC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800EDFC8: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800EDFCC: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800EDFD0: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800EDFD4: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800EDFD8: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800EDFDC: nop

    // 0x800EDFE0: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800EDFE4: nop

    // 0x800EDFE8: bne         $t1, $zero, L_800EE05C
    if (ctx->r9 != 0) {
        // 0x800EDFEC: nop
    
            goto L_800EE05C;
    }
    // 0x800EDFEC: nop

    // 0x800EDFF0: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800EDFF4: nop

    // 0x800EDFF8: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800EDFFC: nop

    // 0x800EE000: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800EE004: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800EE008: lui         $at, 0x41D0
    ctx->r1 = S32(0X41D0 << 16);
    // 0x800EE00C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x800EE010: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800EE014: nop

    // 0x800EE018: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x800EE01C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE020: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800EE024: addiu       $t6, $t6, -0x7018
    ctx->r14 = ADD32(ctx->r14, -0X7018);
    // 0x800EE028: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE02C: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800EE030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EE034: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    // 0x800EE038: jal         0x8001C0EC
    // 0x800EE03C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800EE03C: addiu       $a3, $zero, 0x60
    ctx->r7 = ADD32(0, 0X60);
    after_0:
    // 0x800EE040: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE044: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE048: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800EE04C: addiu       $a2, $zero, 0x5D
    ctx->r6 = ADD32(0, 0X5D);
    // 0x800EE050: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x800EE054: jal         0x800175F0
    // 0x800EE058: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x800EE058: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
L_800EE05C:
    // 0x800EE05C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE060: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE064: jal         0x80028FA0
    // 0x800EE068: nop

    func_80028FA0(rdram, ctx);
        goto after_2;
    // 0x800EE068: nop

    after_2:
    // 0x800EE06C: beq         $v0, $zero, L_800EE098
    if (ctx->r2 == 0) {
        // 0x800EE070: nop
    
            goto L_800EE098;
    }
    // 0x800EE070: nop

    // 0x800EE074: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE078: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE07C: jal         0x80029B60
    // 0x800EE080: nop

    func_80029B60(rdram, ctx);
        goto after_3;
    // 0x800EE080: nop

    after_3:
    // 0x800EE084: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800EE088: nop

    // 0x800EE08C: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x800EE090: nop

    // 0x800EE094: swc1        $f6, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f6.u32l;
L_800EE098:
    // 0x800EE098: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE09C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE0A0: jal         0x80029D8C
    // 0x800EE0A4: nop

    func_80029D8C(rdram, ctx);
        goto after_4;
    // 0x800EE0A4: nop

    after_4:
    // 0x800EE0A8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x800EE0AC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x800EE0B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE0B4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE0B8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x800EE0BC: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x800EE0C0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x800EE0C4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x800EE0C8: jal         0x80029018
    // 0x800EE0CC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x800EE0CC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_5:
    // 0x800EE0D0: beq         $v0, $zero, L_800EE0E8
    if (ctx->r2 == 0) {
        // 0x800EE0D4: nop
    
            goto L_800EE0E8;
    }
    // 0x800EE0D4: nop

    // 0x800EE0D8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE0DC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE0E0: jal         0x8002B0E4
    // 0x800EE0E4: nop

    func_8002B0E4(rdram, ctx);
        goto after_6;
    // 0x800EE0E4: nop

    after_6:
L_800EE0E8:
    // 0x800EE0E8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE0EC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE0F0: addiu       $a1, $zero, 0x0
    ctx->r5 = ADD32(0, 0X0);
    // 0x800EE0F4: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    // 0x800EE0F8: jal         0x8002A0D0
    // 0x800EE0FC: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    func_8002A0D0(rdram, ctx);
        goto after_7;
    // 0x800EE0FC: lui         $a3, 0xC1A0
    ctx->r7 = S32(0XC1A0 << 16);
    after_7:
    // 0x800EE100: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800EE104: bne         $v0, $at, L_800EE11C
    if (ctx->r2 != ctx->r1) {
        // 0x800EE108: nop
    
            goto L_800EE11C;
    }
    // 0x800EE108: nop

    // 0x800EE10C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800EE110: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800EE114: jal         0x8002B0E4
    // 0x800EE118: nop

    func_8002B0E4(rdram, ctx);
        goto after_8;
    // 0x800EE118: nop

    after_8:
L_800EE11C:
    // 0x800EE11C: b           L_800EE124
    // 0x800EE120: nop

        goto L_800EE124;
    // 0x800EE120: nop

L_800EE124:
    // 0x800EE124: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800EE128: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800EE12C: jr          $ra
    // 0x800EE130: nop

    return;
    // 0x800EE130: nop

;}
RECOMP_FUNC void func_80074C7C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80074C7C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80074C80: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80074C84: sw          $a2, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r6;
    // 0x80074C88: swc1        $f12, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f12.u32l;
    // 0x80074C8C: swc1        $f14, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f14.u32l;
    // 0x80074C90: lwc1        $f12, 0x30($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80074C94: lwc1        $f14, 0x34($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80074C98: jal         0x80015634
    // 0x80074C9C: nop

    Math_CalcAngleRotated(rdram, ctx);
        goto after_0;
    // 0x80074C9C: nop

    after_0:
    // 0x80074CA0: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80074CA4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80074CA8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80074CAC: lwc1        $f12, 0x24($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80074CB0: jal         0x80015538
    // 0x80074CB4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80074CB4: nop

    after_1:
    // 0x80074CB8: swc1        $f0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f0.u32l;
    // 0x80074CBC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80074CC0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074CC4: lwc1        $f6, 0x24($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80074CC8: nop

    // 0x80074CCC: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80074CD0: swc1        $f8, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->f8.u32l;
    // 0x80074CD4: lwc1        $f14, 0x24($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X24);
    // 0x80074CD8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074CDC: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80074CE0: jal         0x80015538
    // 0x80074CE4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80074CE4: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_2:
    // 0x80074CE8: swc1        $f0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->f0.u32l;
    // 0x80074CEC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80074CF0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80074CF4: lwc1        $f12, 0x20($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X20);
    // 0x80074CF8: jal         0x80015538
    // 0x80074CFC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80074CFC: nop

    after_3:
    // 0x80074D00: swc1        $f0, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f0.u32l;
    // 0x80074D04: lwc1        $f10, 0x1C($sp)
    ctx->f10.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80074D08: lwc1        $f16, 0x38($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80074D0C: nop

    // 0x80074D10: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x80074D14: nop

    // 0x80074D18: bc1f        L_80074D3C
    if (!c1cs) {
        // 0x80074D1C: nop
    
            goto L_80074D3C;
    }
    // 0x80074D1C: nop

    // 0x80074D20: lwc1        $f14, 0x1C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80074D24: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074D28: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80074D2C: jal         0x80015538
    // 0x80074D30: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80074D30: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_4:
    // 0x80074D34: b           L_80074DD8
    // 0x80074D38: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80074DD8;
    // 0x80074D38: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80074D3C:
    // 0x80074D3C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80074D40: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80074D44: lwc1        $f6, 0x38($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80074D48: lwc1        $f18, 0x1C($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80074D4C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80074D50: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x80074D54: nop

    // 0x80074D58: bc1f        L_80074D84
    if (!c1cs) {
        // 0x80074D5C: nop
    
            goto L_80074D84;
    }
    // 0x80074D5C: nop

    // 0x80074D60: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074D64: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80074D68: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80074D6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80074D70: lwc1        $f16, 0x1C($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80074D74: jal         0x80015538
    // 0x80074D78: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80074D78: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_5:
    // 0x80074D7C: b           L_80074DD8
    // 0x80074D80: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80074DD8;
    // 0x80074D80: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80074D84:
    // 0x80074D84: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80074D88: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80074D8C: lwc1        $f4, 0x1C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80074D90: nop

    // 0x80074D94: c.le.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl <= ctx->f4.fl;
    // 0x80074D98: nop

    // 0x80074D9C: bc1f        L_80074DC0
    if (!c1cs) {
        // 0x80074DA0: nop
    
            goto L_80074DC0;
    }
    // 0x80074DA0: nop

    // 0x80074DA4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074DA8: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80074DAC: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80074DB0: jal         0x80015538
    // 0x80074DB4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80074DB4: nop

    after_6:
    // 0x80074DB8: b           L_80074DD8
    // 0x80074DBC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
        goto L_80074DD8;
    // 0x80074DBC: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80074DC0:
    // 0x80074DC0: lwc1        $f14, 0x38($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80074DC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80074DC8: lwc1        $f12, -0x1EA4($at)
    ctx->f12.u32l = MEM_W(ctx->r1, -0X1EA4);
    // 0x80074DCC: jal         0x80015538
    // 0x80074DD0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80074DD0: neg.s       $f14, $f14
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 14);
    NAN_CHECK(ctx->f14.fl); 
    ctx->f14.fl = -ctx->f14.fl;
    after_7:
    // 0x80074DD4: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
L_80074DD8:
    // 0x80074DD8: lwc1        $f0, 0x2C($sp)
    ctx->f0.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80074DDC: b           L_80074DEC
    // 0x80074DE0: nop

        goto L_80074DEC;
    // 0x80074DE0: nop

    // 0x80074DE4: b           L_80074DEC
    // 0x80074DE8: nop

        goto L_80074DEC;
    // 0x80074DE8: nop

L_80074DEC:
    // 0x80074DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80074DF0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x80074DF4: jr          $ra
    // 0x80074DF8: nop

    return;
    // 0x80074DF8: nop

;}
RECOMP_FUNC void func_800D8714(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D8714: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D8718: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D871C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800D8720: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D8724: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D8728: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x800D872C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D8730: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D8734: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D8738: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D873C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D8740: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x800D8744: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x800D8748: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800D874C: beq         $s0, $at, L_800D8768
    if (ctx->r16 == ctx->r1) {
        // 0x800D8750: nop
    
            goto L_800D8768;
    }
    // 0x800D8750: nop

    // 0x800D8754: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x800D8758: beq         $s0, $at, L_800D8778
    if (ctx->r16 == ctx->r1) {
        // 0x800D875C: nop
    
            goto L_800D8778;
    }
    // 0x800D875C: nop

    // 0x800D8760: b           L_800D8788
    // 0x800D8764: nop

        goto L_800D8788;
    // 0x800D8764: nop

L_800D8768:
    // 0x800D8768: jal         0x800D808C
    // 0x800D876C: nop

    func_800D808C(rdram, ctx);
        goto after_0;
    // 0x800D876C: nop

    after_0:
    // 0x800D8770: b           L_800D8790
    // 0x800D8774: nop

        goto L_800D8790;
    // 0x800D8774: nop

L_800D8778:
    // 0x800D8778: jal         0x800D86E4
    // 0x800D877C: nop

    func_800D86E4(rdram, ctx);
        goto after_1;
    // 0x800D877C: nop

    after_1:
    // 0x800D8780: b           L_800D8790
    // 0x800D8784: nop

        goto L_800D8790;
    // 0x800D8784: nop

L_800D8788:
    // 0x800D8788: b           L_800D8790
    // 0x800D878C: nop

        goto L_800D8790;
    // 0x800D878C: nop

L_800D8790:
    // 0x800D8790: b           L_800D8798
    // 0x800D8794: nop

        goto L_800D8798;
    // 0x800D8794: nop

L_800D8798:
    // 0x800D8798: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D879C: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800D87A0: jr          $ra
    // 0x800D87A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800D87A4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800B725C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800B725C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800B7260: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800B7264: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800B7268: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800B726C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800B7270: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800B7274: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7278: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800B727C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800B7280: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800B7284: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800B7288: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x800B728C: nop

    // 0x800B7290: sw          $t8, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r24;
    // 0x800B7294: lw          $t9, 0x1C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X1C);
    // 0x800B7298: nop

    // 0x800B729C: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800B72A0: sltiu       $at, $t0, 0xC
    ctx->r1 = ctx->r8 < 0XC ? 1 : 0;
    // 0x800B72A4: beq         $at, $zero, L_800B7368
    if (ctx->r1 == 0) {
        // 0x800B72A8: nop
    
            goto L_800B7368;
    }
    // 0x800B72A8: nop

    // 0x800B72AC: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x800B72B0: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800B72B4: addu        $at, $at, $t0
    gpr jr_addend_800B72C0 = ctx->r8;
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x800B72B8: lw          $t0, 0x4BD0($at)
    ctx->r8 = ADD32(ctx->r1, 0X4BD0);
    // 0x800B72BC: nop

    // 0x800B72C0: jr          $t0
    // 0x800B72C4: nop

    switch (jr_addend_800B72C0 >> 2) {
        case 0: goto L_800B72C8; break;
        case 1: goto L_800B72D8; break;
        case 2: goto L_800B72E8; break;
        case 3: goto L_800B7368; break;
        case 4: goto L_800B72F8; break;
        case 5: goto L_800B7338; break;
        case 6: goto L_800B7348; break;
        case 7: goto L_800B7368; break;
        case 8: goto L_800B7308; break;
        case 9: goto L_800B7328; break;
        case 10: goto L_800B7318; break;
        case 11: goto L_800B7358; break;
        default: switch_error(__func__, 0x800B72C0, 0x80114BD0);
    }
    // 0x800B72C4: nop

L_800B72C8:
    // 0x800B72C8: jal         0x800B5814
    // 0x800B72CC: nop

    func_800B5814(rdram, ctx);
        goto after_0;
    // 0x800B72CC: nop

    after_0:
    // 0x800B72D0: b           L_800B7370
    // 0x800B72D4: nop

        goto L_800B7370;
    // 0x800B72D4: nop

L_800B72D8:
    // 0x800B72D8: jal         0x800B5978
    // 0x800B72DC: nop

    func_800B5978(rdram, ctx);
        goto after_1;
    // 0x800B72DC: nop

    after_1:
    // 0x800B72E0: b           L_800B7370
    // 0x800B72E4: nop

        goto L_800B7370;
    // 0x800B72E4: nop

L_800B72E8:
    // 0x800B72E8: jal         0x800B62C8
    // 0x800B72EC: nop

    func_800B62C8(rdram, ctx);
        goto after_2;
    // 0x800B72EC: nop

    after_2:
    // 0x800B72F0: b           L_800B7370
    // 0x800B72F4: nop

        goto L_800B7370;
    // 0x800B72F4: nop

L_800B72F8:
    // 0x800B72F8: jal         0x800B6A94
    // 0x800B72FC: nop

    func_800B6A94(rdram, ctx);
        goto after_3;
    // 0x800B72FC: nop

    after_3:
    // 0x800B7300: b           L_800B7370
    // 0x800B7304: nop

        goto L_800B7370;
    // 0x800B7304: nop

L_800B7308:
    // 0x800B7308: jal         0x800B6C60
    // 0x800B730C: nop

    func_800B6C60(rdram, ctx);
        goto after_4;
    // 0x800B730C: nop

    after_4:
    // 0x800B7310: b           L_800B7370
    // 0x800B7314: nop

        goto L_800B7370;
    // 0x800B7314: nop

L_800B7318:
    // 0x800B7318: jal         0x800B6D40
    // 0x800B731C: nop

    func_800B6D40(rdram, ctx);
        goto after_5;
    // 0x800B731C: nop

    after_5:
    // 0x800B7320: b           L_800B7370
    // 0x800B7324: nop

        goto L_800B7370;
    // 0x800B7324: nop

L_800B7328:
    // 0x800B7328: jal         0x800B7158
    // 0x800B732C: nop

    func_800B7158(rdram, ctx);
        goto after_6;
    // 0x800B732C: nop

    after_6:
    // 0x800B7330: b           L_800B7370
    // 0x800B7334: nop

        goto L_800B7370;
    // 0x800B7334: nop

L_800B7338:
    // 0x800B7338: jal         0x800B6F6C
    // 0x800B733C: nop

    func_800B6F6C(rdram, ctx);
        goto after_7;
    // 0x800B733C: nop

    after_7:
    // 0x800B7340: b           L_800B7370
    // 0x800B7344: nop

        goto L_800B7370;
    // 0x800B7344: nop

L_800B7348:
    // 0x800B7348: jal         0x800B6F2C
    // 0x800B734C: nop

    func_800B6F2C(rdram, ctx);
        goto after_8;
    // 0x800B734C: nop

    after_8:
    // 0x800B7350: b           L_800B7370
    // 0x800B7354: nop

        goto L_800B7370;
    // 0x800B7354: nop

L_800B7358:
    // 0x800B7358: jal         0x800B5D18
    // 0x800B735C: nop

    func_800B5D18(rdram, ctx);
        goto after_9;
    // 0x800B735C: nop

    after_9:
    // 0x800B7360: b           L_800B7370
    // 0x800B7364: nop

        goto L_800B7370;
    // 0x800B7364: nop

L_800B7368:
    // 0x800B7368: b           L_800B7370
    // 0x800B736C: nop

        goto L_800B7370;
    // 0x800B736C: nop

L_800B7370:
    // 0x800B7370: b           L_800B7378
    // 0x800B7374: nop

        goto L_800B7378;
    // 0x800B7374: nop

L_800B7378:
    // 0x800B7378: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800B737C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800B7380: jr          $ra
    // 0x800B7384: nop

    return;
    // 0x800B7384: nop

;}
RECOMP_FUNC void func_80079D48(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80079D48: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80079D4C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80079D50: sw          $a0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r4;
    // 0x80079D54: lw          $t6, 0x20($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X20);
    // 0x80079D58: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80079D5C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80079D60: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80079D64: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80079D68: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80079D6C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80079D70: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80079D74: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80079D78: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80079D7C: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80079D80: nop

    // 0x80079D84: lh          $t1, 0xAC($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XAC);
    // 0x80079D88: nop

    // 0x80079D8C: beq         $t1, $zero, L_80079DDC
    if (ctx->r9 == 0) {
        // 0x80079D90: nop
    
            goto L_80079DDC;
    }
    // 0x80079D90: nop

    // 0x80079D94: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x80079D98: nop

    // 0x80079D9C: lh          $t3, 0xAC($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XAC);
    // 0x80079DA0: nop

    // 0x80079DA4: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80079DA8: sh          $t4, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = ctx->r12;
    // 0x80079DAC: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80079DB0: nop

    // 0x80079DB4: lh          $t6, 0xAC($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XAC);
    // 0x80079DB8: nop

    // 0x80079DBC: slti        $at, $t6, 0x15
    ctx->r1 = SIGNED(ctx->r14) < 0X15 ? 1 : 0;
    // 0x80079DC0: bne         $at, $zero, L_80079DDC
    if (ctx->r1 != 0) {
        // 0x80079DC4: nop
    
            goto L_80079DDC;
    }
    // 0x80079DC4: nop

    // 0x80079DC8: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80079DCC: jal         0x800795C8
    // 0x80079DD0: nop

    func_800795C8(rdram, ctx);
        goto after_0;
    // 0x80079DD0: nop

    after_0:
    // 0x80079DD4: b           L_80079DEC
    // 0x80079DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
        goto L_80079DEC;
    // 0x80079DD8: addiu       $v0, $zero, 0x1
    ctx->r2 = ADD32(0, 0X1);
L_80079DDC:
    // 0x80079DDC: b           L_80079DEC
    // 0x80079DE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
        goto L_80079DEC;
    // 0x80079DE0: or          $v0, $zero, $zero
    ctx->r2 = 0 | 0;
    // 0x80079DE4: b           L_80079DEC
    // 0x80079DE8: nop

        goto L_80079DEC;
    // 0x80079DE8: nop

L_80079DEC:
    // 0x80079DEC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80079DF0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80079DF4: jr          $ra
    // 0x80079DF8: nop

    return;
    // 0x80079DF8: nop

;}
RECOMP_FUNC void func_800E6720(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E6720: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E6724: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E6728: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E672C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E6730: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E6734: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E6738: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E673C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E6740: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E6744: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E6748: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E674C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E6750: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E6754: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E6758: nop

    // 0x800E675C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800E6760: nop

    // 0x800E6764: bne         $t1, $zero, L_800E67BC
    if (ctx->r9 != 0) {
        // 0x800E6768: nop
    
            goto L_800E67BC;
    }
    // 0x800E6768: nop

    // 0x800E676C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E6770: nop

    // 0x800E6774: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800E6778: nop

    // 0x800E677C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800E6780: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800E6784: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E6788: nop

    // 0x800E678C: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E6790: nop

    // 0x800E6794: sh          $t6, 0xB2($t5)
    MEM_H(0XB2, ctx->r13) = ctx->r14;
    // 0x800E6798: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E679C: lui         $t7, 0x8012
    ctx->r15 = S32(0X8012 << 16);
    // 0x800E67A0: addiu       $t7, $t7, -0x6878
    ctx->r15 = ADD32(ctx->r15, -0X6878);
    // 0x800E67A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E67A8: sw          $t7, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r15;
    // 0x800E67AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800E67B0: addiu       $a2, $zero, 0x3
    ctx->r6 = ADD32(0, 0X3);
    // 0x800E67B4: jal         0x8001C0EC
    // 0x800E67B8: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800E67B8: addiu       $a3, $zero, 0xB4
    ctx->r7 = ADD32(0, 0XB4);
    after_0:
L_800E67BC:
    // 0x800E67BC: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x800E67C0: nop

    // 0x800E67C4: lwc1        $f4, 0x1C($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x800E67C8: nop

    // 0x800E67CC: swc1        $f4, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f4.u32l;
    // 0x800E67D0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E67D4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E67D8: jal         0x8002A8B4
    // 0x800E67DC: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    func_8002A8B4(rdram, ctx);
        goto after_1;
    // 0x800E67DC: lui         $a1, 0x4140
    ctx->r5 = S32(0X4140 << 16);
    after_1:
    // 0x800E67E0: lw          $t9, 0x24($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X24);
    // 0x800E67E4: nop

    // 0x800E67E8: lwc1        $f6, 0x3C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x800E67EC: nop

    // 0x800E67F0: swc1        $f6, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f6.u32l;
    // 0x800E67F4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E67F8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E67FC: jal         0x8001B4AC
    // 0x800E6800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B4AC(rdram, ctx);
        goto after_2;
    // 0x800E6800: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x800E6804: beq         $v0, $zero, L_800E6824
    if (ctx->r2 == 0) {
        // 0x800E6808: nop
    
            goto L_800E6824;
    }
    // 0x800E6808: nop

    // 0x800E680C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x800E6810: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x800E6814: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x800E6818: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800E681C: nop

    // 0x800E6820: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800E6824:
    // 0x800E6824: b           L_800E682C
    // 0x800E6828: nop

        goto L_800E682C;
    // 0x800E6828: nop

L_800E682C:
    // 0x800E682C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E6830: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800E6834: jr          $ra
    // 0x800E6838: nop

    return;
    // 0x800E6838: nop

;}
RECOMP_FUNC void func_800D6D84(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D6D84: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D6D88: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800D6D8C: nop

    // 0x800D6D90: bne         $t6, $zero, L_800D6DEC
    if (ctx->r14 != 0) {
        // 0x800D6D94: nop
    
            goto L_800D6DEC;
    }
    // 0x800D6D94: nop

    // 0x800D6D98: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800D6D9C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x800D6DA0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D6DA4: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x800D6DA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D6DAC: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x800D6DB0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x800D6DB4: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x800D6DB8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x800D6DBC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x800D6DC0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800D6DC4: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800D6DC8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800D6DCC: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800D6DD0: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D6DD4: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800D6DD8: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800D6DDC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800D6DE0: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800D6DE4: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x800D6DE8: sh          $t9, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r25;
L_800D6DEC:
    // 0x800D6DEC: jr          $ra
    // 0x800D6DF0: nop

    return;
    // 0x800D6DF0: nop

    // 0x800D6DF4: jr          $ra
    // 0x800D6DF8: nop

    return;
    // 0x800D6DF8: nop

;}
RECOMP_FUNC void func_800E7344(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E7344: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800E7348: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800E734C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x800E7350: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E7354: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E7358: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E735C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E7360: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E7364: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E7368: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E736C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E7370: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E7374: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E7378: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800E737C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800E7380: nop

    // 0x800E7384: lh          $t1, 0x108($t0)
    ctx->r9 = MEM_H(ctx->r8, 0X108);
    // 0x800E7388: nop

    // 0x800E738C: bne         $t1, $zero, L_800E73AC
    if (ctx->r9 != 0) {
        // 0x800E7390: nop
    
            goto L_800E73AC;
    }
    // 0x800E7390: nop

    // 0x800E7394: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E7398: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E739C: jal         0x8001BB34
    // 0x800E73A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800E73A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x800E73A4: b           L_800E73D4
    // 0x800E73A8: nop

        goto L_800E73D4;
    // 0x800E73A8: nop

L_800E73AC:
    // 0x800E73AC: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800E73B0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800E73B4: lh          $s0, 0x108($t2)
    ctx->r16 = MEM_H(ctx->r10, 0X108);
    // 0x800E73B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800E73BC: andi        $t3, $s0, 0x1
    ctx->r11 = ctx->r16 & 0X1;
    // 0x800E73C0: or          $s0, $t3, $zero
    ctx->r16 = ctx->r11 | 0;
    // 0x800E73C4: sltiu       $t4, $s0, 0x1
    ctx->r12 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x800E73C8: or          $s0, $t4, $zero
    ctx->r16 = ctx->r12 | 0;
    // 0x800E73CC: jal         0x8001BB34
    // 0x800E73D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x800E73D0: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_1:
L_800E73D4:
    // 0x800E73D4: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800E73D8: nop

    // 0x800E73DC: lh          $t6, 0xA4($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA4);
    // 0x800E73E0: nop

    // 0x800E73E4: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x800E73E8: sltiu       $at, $t7, 0x9
    ctx->r1 = ctx->r15 < 0X9 ? 1 : 0;
    // 0x800E73EC: beq         $at, $zero, L_800E74A0
    if (ctx->r1 == 0) {
        // 0x800E73F0: nop
    
            goto L_800E74A0;
    }
    // 0x800E73F0: nop

    // 0x800E73F4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E73F8: lui         $at, 0x8011
    ctx->r1 = S32(0X8011 << 16);
    // 0x800E73FC: addu        $at, $at, $t7
    gpr jr_addend_800E7408 = ctx->r15;
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x800E7400: lw          $t7, 0x54D0($at)
    ctx->r15 = ADD32(ctx->r1, 0X54D0);
    // 0x800E7404: nop

    // 0x800E7408: jr          $t7
    // 0x800E740C: nop

    switch (jr_addend_800E7408 >> 2) {
        case 0: goto L_800E7410; break;
        case 1: goto L_800E7420; break;
        case 2: goto L_800E7430; break;
        case 3: goto L_800E7440; break;
        case 4: goto L_800E7450; break;
        case 5: goto L_800E7460; break;
        case 6: goto L_800E7470; break;
        case 7: goto L_800E7480; break;
        case 8: goto L_800E7490; break;
        default: switch_error(__func__, 0x800E7408, 0x801154D0);
    }
    // 0x800E740C: nop

L_800E7410:
    // 0x800E7410: jal         0x800E660C
    // 0x800E7414: nop

    func_800E660C(rdram, ctx);
        goto after_2;
    // 0x800E7414: nop

    after_2:
    // 0x800E7418: b           L_800E74A8
    // 0x800E741C: nop

        goto L_800E74A8;
    // 0x800E741C: nop

L_800E7420:
    // 0x800E7420: jal         0x800E6720
    // 0x800E7424: nop

    func_800E6720(rdram, ctx);
        goto after_3;
    // 0x800E7424: nop

    after_3:
    // 0x800E7428: b           L_800E74A8
    // 0x800E742C: nop

        goto L_800E74A8;
    // 0x800E742C: nop

L_800E7430:
    // 0x800E7430: jal         0x800E683C
    // 0x800E7434: nop

    func_800E683C(rdram, ctx);
        goto after_4;
    // 0x800E7434: nop

    after_4:
    // 0x800E7438: b           L_800E74A8
    // 0x800E743C: nop

        goto L_800E74A8;
    // 0x800E743C: nop

L_800E7440:
    // 0x800E7440: jal         0x800E6AA0
    // 0x800E7444: nop

    func_800E6AA0(rdram, ctx);
        goto after_5;
    // 0x800E7444: nop

    after_5:
    // 0x800E7448: b           L_800E74A8
    // 0x800E744C: nop

        goto L_800E74A8;
    // 0x800E744C: nop

L_800E7450:
    // 0x800E7450: jal         0x800E6C48
    // 0x800E7454: nop

    func_800E6C48(rdram, ctx);
        goto after_6;
    // 0x800E7454: nop

    after_6:
    // 0x800E7458: b           L_800E74A8
    // 0x800E745C: nop

        goto L_800E74A8;
    // 0x800E745C: nop

L_800E7460:
    // 0x800E7460: jal         0x800E6D2C
    // 0x800E7464: nop

    func_800E6D2C(rdram, ctx);
        goto after_7;
    // 0x800E7464: nop

    after_7:
    // 0x800E7468: b           L_800E74A8
    // 0x800E746C: nop

        goto L_800E74A8;
    // 0x800E746C: nop

L_800E7470:
    // 0x800E7470: jal         0x800E6E80
    // 0x800E7474: nop

    func_800E6E80(rdram, ctx);
        goto after_8;
    // 0x800E7474: nop

    after_8:
    // 0x800E7478: b           L_800E74A8
    // 0x800E747C: nop

        goto L_800E74A8;
    // 0x800E747C: nop

L_800E7480:
    // 0x800E7480: jal         0x800E70D0
    // 0x800E7484: nop

    func_800E70D0(rdram, ctx);
        goto after_9;
    // 0x800E7484: nop

    after_9:
    // 0x800E7488: b           L_800E74A8
    // 0x800E748C: nop

        goto L_800E74A8;
    // 0x800E748C: nop

L_800E7490:
    // 0x800E7490: jal         0x800E71C0
    // 0x800E7494: nop

    func_800E71C0(rdram, ctx);
        goto after_10;
    // 0x800E7494: nop

    after_10:
    // 0x800E7498: b           L_800E74A8
    // 0x800E749C: nop

        goto L_800E74A8;
    // 0x800E749C: nop

L_800E74A0:
    // 0x800E74A0: b           L_800E74A8
    // 0x800E74A4: nop

        goto L_800E74A8;
    // 0x800E74A4: nop

L_800E74A8:
    // 0x800E74A8: b           L_800E74B0
    // 0x800E74AC: nop

        goto L_800E74B0;
    // 0x800E74AC: nop

L_800E74B0:
    // 0x800E74B0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800E74B4: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x800E74B8: jr          $ra
    // 0x800E74BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x800E74BC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_800D9134(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800D9134: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800D9138: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800D913C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800D9140: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800D9144: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800D9148: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800D914C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9150: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800D9154: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800D9158: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800D915C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800D9160: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800D9164: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x800D9168: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D916C: nop

    // 0x800D9170: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800D9174: nop

    // 0x800D9178: bne         $t1, $zero, L_800D91CC
    if (ctx->r9 != 0) {
        // 0x800D917C: nop
    
            goto L_800D91CC;
    }
    // 0x800D917C: nop

    // 0x800D9180: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D9184: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x800D9188: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x800D918C: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x800D9190: addiu       $t4, $zero, 0xA
    ctx->r12 = ADD32(0, 0XA);
    // 0x800D9194: sh          $t4, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r12;
    // 0x800D9198: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D919C: lui         $t6, 0x8012
    ctx->r14 = S32(0X8012 << 16);
    // 0x800D91A0: addiu       $t6, $t6, -0x7424
    ctx->r14 = ADD32(ctx->r14, -0X7424);
    // 0x800D91A4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D91A8: sw          $t6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r14;
    // 0x800D91AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x800D91B0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x800D91B4: jal         0x8001C0EC
    // 0x800D91B8: addiu       $a3, $zero, 0x184
    ctx->r7 = ADD32(0, 0X184);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x800D91B8: addiu       $a3, $zero, 0x184
    ctx->r7 = ADD32(0, 0X184);
    after_0:
    // 0x800D91BC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D91C0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D91C4: jal         0x8001BBDC
    // 0x800D91C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x800D91C8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_800D91CC:
    // 0x800D91CC: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x800D91D0: nop

    // 0x800D91D4: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x800D91D8: nop

    // 0x800D91DC: bne         $t8, $zero, L_800D9268
    if (ctx->r24 != 0) {
        // 0x800D91E0: nop
    
            goto L_800D9268;
    }
    // 0x800D91E0: nop

    // 0x800D91E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800D91E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800D91EC: jal         0x8002A1FC
    // 0x800D91F0: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_2;
    // 0x800D91F0: lui         $a1, 0x4470
    ctx->r5 = S32(0X4470 << 16);
    after_2:
    // 0x800D91F4: beq         $v0, $zero, L_800D9260
    if (ctx->r2 == 0) {
        // 0x800D91F8: nop
    
            goto L_800D9260;
    }
    // 0x800D91F8: nop

    // 0x800D91FC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x800D9200: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x800D9204: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x800D9208: lwc1        $f4, 0x4($t9)
    ctx->f4.u32l = MEM_W(ctx->r25, 0X4);
    // 0x800D920C: lwc1        $f6, 0x4($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X4);
    // 0x800D9210: lui         $at, 0xC3B4
    ctx->r1 = S32(0XC3B4 << 16);
    // 0x800D9214: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x800D9218: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x800D921C: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x800D9220: nop

    // 0x800D9224: bc1f        L_800D9260
    if (!c1cs) {
        // 0x800D9228: nop
    
            goto L_800D9260;
    }
    // 0x800D9228: nop

    // 0x800D922C: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x800D9230: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x800D9234: nop

    // 0x800D9238: c.lt.s      $f8, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f8.fl < ctx->f16.fl;
    // 0x800D923C: nop

    // 0x800D9240: bc1f        L_800D9260
    if (!c1cs) {
        // 0x800D9244: nop
    
            goto L_800D9260;
    }
    // 0x800D9244: nop

    // 0x800D9248: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x800D924C: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x800D9250: sh          $t1, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r9;
    // 0x800D9254: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x800D9258: nop

    // 0x800D925C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_800D9260:
    // 0x800D9260: b           L_800D9280
    // 0x800D9264: nop

        goto L_800D9280;
    // 0x800D9264: nop

L_800D9268:
    // 0x800D9268: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x800D926C: nop

    // 0x800D9270: lh          $t5, 0xA6($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA6);
    // 0x800D9274: nop

    // 0x800D9278: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x800D927C: sh          $t6, 0xA6($t4)
    MEM_H(0XA6, ctx->r12) = ctx->r14;
L_800D9280:
    // 0x800D9280: b           L_800D9288
    // 0x800D9284: nop

        goto L_800D9288;
    // 0x800D9284: nop

L_800D9288:
    // 0x800D9288: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x800D928C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x800D9290: jr          $ra
    // 0x800D9294: nop

    return;
    // 0x800D9294: nop

;}
RECOMP_FUNC void Score_Update(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AF18: sll         $a0, $a0, 16
    ctx->r4 = S32(ctx->r4 << 16);
    // 0x8006AF1C: sra         $a0, $a0, 16
    ctx->r4 = S32(SIGNED(ctx->r4) >> 16);
    // 0x8006AF20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006AF24: lbu         $t6, 0x79E0($t6)
    ctx->r14 = MEM_BU(ctx->r14, 0X79E0);
    // 0x8006AF28: nop

    // 0x8006AF2C: beq         $t6, $zero, L_8006AF3C
    if (ctx->r14 == 0) {
        // 0x8006AF30: nop
    
            goto L_8006AF3C;
    }
    // 0x8006AF30: nop

    // 0x8006AF34: jr          $ra
    // 0x8006AF38: nop

    return;
    // 0x8006AF38: nop

L_8006AF3C:
    // 0x8006AF3C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8006AF40: lh          $t7, 0x7608($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7608);
    // 0x8006AF44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AF48: addu        $t8, $t7, $a0
    ctx->r24 = ADD32(ctx->r15, ctx->r4);
    // 0x8006AF4C: sh          $t8, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r24;
    // 0x8006AF50: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8006AF54: lh          $t9, 0x7608($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X7608);
    // 0x8006AF58: nop

    // 0x8006AF5C: bgtz        $t9, L_8006AF70
    if (SIGNED(ctx->r25) > 0) {
        // 0x8006AF60: nop
    
            goto L_8006AF70;
    }
    // 0x8006AF60: nop

    // 0x8006AF64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AF68: b           L_8006AF94
    // 0x8006AF6C: sh          $zero, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = 0;
        goto L_8006AF94;
    // 0x8006AF6C: sh          $zero, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = 0;
L_8006AF70:
    // 0x8006AF70: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8006AF74: lh          $t0, 0x7608($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X7608);
    // 0x8006AF78: nop

    // 0x8006AF7C: slti        $at, $t0, 0x270F
    ctx->r1 = SIGNED(ctx->r8) < 0X270F ? 1 : 0;
    // 0x8006AF80: bne         $at, $zero, L_8006AF94
    if (ctx->r1 != 0) {
        // 0x8006AF84: nop
    
            goto L_8006AF94;
    }
    // 0x8006AF84: nop

    // 0x8006AF88: addiu       $t1, $zero, 0x270F
    ctx->r9 = ADD32(0, 0X270F);
    // 0x8006AF8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8006AF90: sh          $t1, 0x7608($at)
    MEM_H(0X7608, ctx->r1) = ctx->r9;
L_8006AF94:
    // 0x8006AF94: jr          $ra
    // 0x8006AF98: nop

    return;
    // 0x8006AF98: nop

    // 0x8006AF9C: jr          $ra
    // 0x8006AFA0: nop

    return;
    // 0x8006AFA0: nop

;}
RECOMP_FUNC void func_800F574C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800F574C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800F5750: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x800F5754: nop

    // 0x800F5758: bne         $t6, $zero, L_800F57B4
    if (ctx->r14 != 0) {
        // 0x800F575C: nop
    
            goto L_800F57B4;
    }
    // 0x800F575C: nop

    // 0x800F5760: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800F5764: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x800F5768: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F576C: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x800F5770: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F5774: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x800F5778: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x800F577C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x800F5780: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x800F5784: addiu       $t7, $zero, 0x2
    ctx->r15 = ADD32(0, 0X2);
    // 0x800F5788: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x800F578C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800F5790: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x800F5794: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x800F5798: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x800F579C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F57A0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x800F57A4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x800F57A8: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x800F57AC: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x800F57B0: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_800F57B4:
    // 0x800F57B4: jr          $ra
    // 0x800F57B8: nop

    return;
    // 0x800F57B8: nop

    // 0x800F57BC: jr          $ra
    // 0x800F57C0: nop

    return;
    // 0x800F57C0: nop

;}
RECOMP_FUNC void func_800CF580(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800CF580: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x800CF584: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800CF588: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800CF58C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800CF590: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800CF594: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800CF598: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF59C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800CF5A0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800CF5A4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800CF5A8: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800CF5AC: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800CF5B0: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x800CF5B4: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF5B8: nop

    // 0x800CF5BC: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x800CF5C0: nop

    // 0x800CF5C4: bne         $t1, $zero, L_800CF5F4
    if (ctx->r9 != 0) {
        // 0x800CF5C8: nop
    
            goto L_800CF5F4;
    }
    // 0x800CF5C8: nop

    // 0x800CF5CC: lw          $t2, 0x1C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X1C);
    // 0x800CF5D0: nop

    // 0x800CF5D4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x800CF5D8: nop

    // 0x800CF5DC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x800CF5E0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x800CF5E4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800CF5E8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800CF5EC: jal         0x8001BB34
    // 0x800CF5F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x800CF5F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_0:
L_800CF5F4:
    // 0x800CF5F4: b           L_800CF5FC
    // 0x800CF5F8: nop

        goto L_800CF5FC;
    // 0x800CF5F8: nop

L_800CF5FC:
    // 0x800CF5FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800CF600: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x800CF604: jr          $ra
    // 0x800CF608: nop

    return;
    // 0x800CF608: nop

;}
RECOMP_FUNC void func_800721CC(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800721CC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800721D0: lw          $t6, 0x763C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X763C);
    // 0x800721D4: nop

    // 0x800721D8: bne         $t6, $zero, L_800721E8
    if (ctx->r14 != 0) {
        // 0x800721DC: nop
    
            goto L_800721E8;
    }
    // 0x800721DC: nop

    // 0x800721E0: jr          $ra
    // 0x800721E4: nop

    return;
    // 0x800721E4: nop

L_800721E8:
    // 0x800721E8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x800721EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800721F0: lw          $t8, 0x763C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X763C);
    // 0x800721F4: lw          $t7, 0x764C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X764C);
    // 0x800721F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800721FC: multu       $t7, $t8
    result = U64(U32(ctx->r15)) * U64(U32(ctx->r24)); lo = S32(result >> 0); hi = S32(result >> 32);
    // 0x80072200: lw          $t0, 0x7644($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7644);
    // 0x80072204: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072208: mflo        $t9
    ctx->r25 = lo;
    // 0x8007220C: addu        $t1, $t9, $t0
    ctx->r9 = ADD32(ctx->r25, ctx->r8);
    // 0x80072210: sw          $t1, 0x7644($at)
    MEM_W(0X7644, ctx->r1) = ctx->r9;
    // 0x80072214: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80072218: lw          $t2, 0x763C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X763C);
    // 0x8007221C: nop

    // 0x80072220: blez        $t2, L_80072270
    if (SIGNED(ctx->r10) <= 0) {
        // 0x80072224: nop
    
            goto L_80072270;
    }
    // 0x80072224: nop

    // 0x80072228: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8007222C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80072230: lw          $t4, 0x7660($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7660);
    // 0x80072234: lw          $t3, 0x7644($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7644);
    // 0x80072238: nop

    // 0x8007223C: slt         $at, $t3, $t4
    ctx->r1 = SIGNED(ctx->r11) < SIGNED(ctx->r12) ? 1 : 0;
    // 0x80072240: bne         $at, $zero, L_80072268
    if (ctx->r1 != 0) {
        // 0x80072244: nop
    
            goto L_80072268;
    }
    // 0x80072244: nop

    // 0x80072248: addiu       $t5, $zero, -0x1
    ctx->r13 = ADD32(0, -0X1);
    // 0x8007224C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072250: sw          $t5, 0x763C($at)
    MEM_W(0X763C, ctx->r1) = ctx->r13;
    // 0x80072254: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80072258: lw          $t6, 0x7660($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7660);
    // 0x8007225C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072260: addiu       $t7, $t6, -0x2
    ctx->r15 = ADD32(ctx->r14, -0X2);
    // 0x80072264: sw          $t7, 0x7660($at)
    MEM_W(0X7660, ctx->r1) = ctx->r15;
L_80072268:
    // 0x80072268: b           L_800722B0
    // 0x8007226C: nop

        goto L_800722B0;
    // 0x8007226C: nop

L_80072270:
    // 0x80072270: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80072274: lw          $t9, 0x7660($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7660);
    // 0x80072278: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8007227C: lw          $t8, 0x7644($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7644);
    // 0x80072280: negu        $t0, $t9
    ctx->r8 = SUB32(0, ctx->r25);
    // 0x80072284: slt         $at, $t0, $t8
    ctx->r1 = SIGNED(ctx->r8) < SIGNED(ctx->r24) ? 1 : 0;
    // 0x80072288: bne         $at, $zero, L_800722B0
    if (ctx->r1 != 0) {
        // 0x8007228C: nop
    
            goto L_800722B0;
    }
    // 0x8007228C: nop

    // 0x80072290: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80072294: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80072298: sw          $t1, 0x763C($at)
    MEM_W(0X763C, ctx->r1) = ctx->r9;
    // 0x8007229C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x800722A0: lw          $t2, 0x7660($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7660);
    // 0x800722A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800722A8: addiu       $t3, $t2, -0x2
    ctx->r11 = ADD32(ctx->r10, -0X2);
    // 0x800722AC: sw          $t3, 0x7660($at)
    MEM_W(0X7660, ctx->r1) = ctx->r11;
L_800722B0:
    // 0x800722B0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x800722B4: lw          $t4, 0x7660($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7660);
    // 0x800722B8: nop

    // 0x800722BC: bgtz        $t4, L_800722CC
    if (SIGNED(ctx->r12) > 0) {
        // 0x800722C0: nop
    
            goto L_800722CC;
    }
    // 0x800722C0: nop

    // 0x800722C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800722C8: sw          $zero, 0x763C($at)
    MEM_W(0X763C, ctx->r1) = 0;
L_800722CC:
    // 0x800722CC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800722D0: lw          $t5, 0x7644($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7644);
    // 0x800722D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x800722D8: mtc1        $t5, $f6
    ctx->f6.u32l = ctx->r13;
    // 0x800722DC: lwc1        $f4, 0x75B0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X75B0);
    // 0x800722E0: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800722E4: add.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f4.fl + ctx->f8.fl;
    // 0x800722E8: swc1        $f10, 0x75B0($at)
    MEM_W(0X75B0, ctx->r1) = ctx->f10.u32l;
    // 0x800722EC: jr          $ra
    // 0x800722F0: nop

    return;
    // 0x800722F0: nop

    // 0x800722F4: jr          $ra
    // 0x800722F8: nop

    return;
    // 0x800722F8: nop

;}
RECOMP_FUNC void Score_UpdateTimer(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8006AA60: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8006AA64: lh          $t6, 0x7608($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X7608);
    // 0x8006AA68: addiu       $at, $zero, 0x708
    ctx->r1 = ADD32(0, 0X708);
    // 0x8006AA6C: div         $zero, $t6, $at
    lo = S32(S64(S32(ctx->r14)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r14)) % S64(S32(ctx->r1)));
    // 0x8006AA70: mflo        $t7
    ctx->r15 = lo;
    // 0x8006AA74: sw          $t7, 0x0($a0)
    MEM_W(0X0, ctx->r4) = ctx->r15;
    // 0x8006AA78: nop

    // 0x8006AA7C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8006AA80: lh          $t8, 0x7608($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X7608);
    // 0x8006AA84: addiu       $at, $zero, 0x708
    ctx->r1 = ADD32(0, 0X708);
    // 0x8006AA88: div         $zero, $t8, $at
    lo = S32(S64(S32(ctx->r24)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r24)) % S64(S32(ctx->r1)));
    // 0x8006AA8C: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8006AA90: mfhi        $t9
    ctx->r25 = hi;
    // 0x8006AA94: nop

    // 0x8006AA98: nop

    // 0x8006AA9C: div         $zero, $t9, $at
    lo = S32(S64(S32(ctx->r25)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r25)) % S64(S32(ctx->r1)));
    // 0x8006AAA0: mflo        $t0
    ctx->r8 = lo;
    // 0x8006AAA4: sw          $t0, 0x0($a1)
    MEM_W(0X0, ctx->r5) = ctx->r8;
    // 0x8006AAA8: nop

    // 0x8006AAAC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8006AAB0: lh          $t1, 0x7608($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X7608);
    // 0x8006AAB4: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8006AAB8: div         $zero, $t1, $at
    lo = S32(S64(S32(ctx->r9)) / S64(S32(ctx->r1))); hi = S32(S64(S32(ctx->r9)) % S64(S32(ctx->r1)));
    // 0x8006AABC: lui         $at, 0x8010
    ctx->r1 = S32(0X8010 << 16);
    // 0x8006AAC0: lwc1        $f9, 0x4F90($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X4F90);
    // 0x8006AAC4: lwc1        $f8, 0x4F94($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X4F94);
    // 0x8006AAC8: mfhi        $t2
    ctx->r10 = hi;
    // 0x8006AACC: mtc1        $t2, $f4
    ctx->f4.u32l = ctx->r10;
    // 0x8006AAD0: nop

    // 0x8006AAD4: cvt.d.w     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.d = CVT_D_W(ctx->f4.u32l);
    // 0x8006AAD8: mul.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = MUL_D(ctx->f6.d, ctx->f8.d);
    // 0x8006AADC: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x8006AAE0: nop

    // 0x8006AAE4: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x8006AAE8: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x8006AAEC: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x8006AAF0: nop

    // 0x8006AAF4: cvt.w.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.u32l = CVT_W_D(ctx->f10.d);
    // 0x8006AAF8: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x8006AAFC: swc1        $f16, 0x0($a2)
    MEM_W(0X0, ctx->r6) = ctx->f16.u32l;
    // 0x8006AB00: nop

    // 0x8006AB04: jr          $ra
    // 0x8006AB08: nop

    return;
    // 0x8006AB08: nop

    // 0x8006AB0C: jr          $ra
    // 0x8006AB10: nop

    return;
    // 0x8006AB10: nop

;}
RECOMP_FUNC void func_8007F778(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8007F778: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8007F77C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x8007F780: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F784: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x8007F788: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007F78C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x8007F790: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8007F794: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x8007F798: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x8007F79C: addiu       $t6, $zero, 0x2BD
    ctx->r14 = ADD32(0, 0X2BD);
    // 0x8007F7A0: sh          $t6, 0x4234($at)
    MEM_H(0X4234, ctx->r1) = ctx->r14;
    // 0x8007F7A4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8007F7A8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8007F7AC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F7B0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8007F7B4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007F7B8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8007F7BC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8007F7C0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8007F7C4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8007F7C8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8007F7CC: sh          $t9, 0x420E($at)
    MEM_H(0X420E, ctx->r1) = ctx->r25;
    // 0x8007F7D0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x8007F7D4: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x8007F7D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F7DC: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x8007F7E0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007F7E4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x8007F7E8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x8007F7EC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x8007F7F0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x8007F7F4: sh          $zero, 0x4210($at)
    MEM_H(0X4210, ctx->r1) = 0;
    // 0x8007F7F8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x8007F7FC: lw          $t5, 0x7A60($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A60);
    // 0x8007F800: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8007F804: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x8007F808: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8007F80C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8007F810: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x8007F814: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8007F818: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x8007F81C: addiu       $t4, $zero, 0x1F
    ctx->r12 = ADD32(0, 0X1F);
    // 0x8007F820: sh          $t4, 0x4212($at)
    MEM_H(0X4212, ctx->r1) = ctx->r12;
    // 0x8007F824: jr          $ra
    // 0x8007F828: nop

    return;
    // 0x8007F828: nop

    // 0x8007F82C: jr          $ra
    // 0x8007F830: nop

    return;
    // 0x8007F830: nop

;}
RECOMP_FUNC void func_80087994(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80087994: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80087998: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8008799C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800879A0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x800879A4: nop

    // 0x800879A8: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x800879AC: nop

    // 0x800879B0: slti        $at, $t7, 0x2
    ctx->r1 = SIGNED(ctx->r15) < 0X2 ? 1 : 0;
    // 0x800879B4: bne         $at, $zero, L_800879E4
    if (ctx->r1 != 0) {
        // 0x800879B8: nop
    
            goto L_800879E4;
    }
    // 0x800879B8: nop

    // 0x800879BC: slti        $at, $t7, 0x3D
    ctx->r1 = SIGNED(ctx->r15) < 0X3D ? 1 : 0;
    // 0x800879C0: beq         $at, $zero, L_800879E4
    if (ctx->r1 == 0) {
        // 0x800879C4: nop
    
            goto L_800879E4;
    }
    // 0x800879C4: nop

    // 0x800879C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x800879CC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x800879D0: nop

    // 0x800879D4: lh          $t9, 0x108($t8)
    ctx->r25 = MEM_H(ctx->r24, 0X108);
    // 0x800879D8: nop

    // 0x800879DC: addiu       $t0, $t9, -0x1
    ctx->r8 = ADD32(ctx->r25, -0X1);
    // 0x800879E0: sh          $t0, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r8;
L_800879E4:
    // 0x800879E4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x800879E8: lb          $t1, -0x1F30($t1)
    ctx->r9 = MEM_B(ctx->r9, -0X1F30);
    // 0x800879EC: nop

    // 0x800879F0: beq         $t1, $zero, L_80087A00
    if (ctx->r9 == 0) {
        // 0x800879F4: nop
    
            goto L_80087A00;
    }
    // 0x800879F4: nop

    // 0x800879F8: b           L_80087B0C
    // 0x800879FC: nop

        goto L_80087B0C;
    // 0x800879FC: nop

L_80087A00:
    // 0x80087A00: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x80087A04: lb          $t2, 0x523E($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X523E);
    // 0x80087A08: nop

    // 0x80087A0C: bne         $t2, $zero, L_80087A24
    if (ctx->r10 != 0) {
        // 0x80087A10: nop
    
            goto L_80087A24;
    }
    // 0x80087A10: nop

    // 0x80087A14: jal         0x8028AA70
    // 0x80087A18: nop

    func_8028AA70_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80087A18: nop

    after_0:
    // 0x80087A1C: b           L_80087AF4
    // 0x80087A20: nop

        goto L_80087AF4;
    // 0x80087A20: nop

L_80087A24:
    // 0x80087A24: lui         $t3, 0x8016
    ctx->r11 = S32(0X8016 << 16);
    // 0x80087A28: lb          $t3, 0x523E($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X523E);
    // 0x80087A2C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80087A30: bne         $t3, $at, L_80087A48
    if (ctx->r11 != ctx->r1) {
        // 0x80087A34: nop
    
            goto L_80087A48;
    }
    // 0x80087A34: nop

    // 0x80087A38: jal         0x802838DC
    // 0x80087A3C: nop

    func_802838DC_code_extra_1(rdram, ctx);
        goto after_1;
    // 0x80087A3C: nop

    after_1:
    // 0x80087A40: b           L_80087AF4
    // 0x80087A44: nop

        goto L_80087AF4;
    // 0x80087A44: nop

L_80087A48:
    // 0x80087A48: lui         $t4, 0x8016
    ctx->r12 = S32(0X8016 << 16);
    // 0x80087A4C: lb          $t4, 0x523E($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X523E);
    // 0x80087A50: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80087A54: bne         $t4, $at, L_80087A6C
    if (ctx->r12 != ctx->r1) {
        // 0x80087A58: nop
    
            goto L_80087A6C;
    }
    // 0x80087A58: nop

    // 0x80087A5C: jal         0x802823A4
    // 0x80087A60: nop

    func_802823A4_code_extra_2(rdram, ctx);
        goto after_2;
    // 0x80087A60: nop

    after_2:
    // 0x80087A64: b           L_80087AF4
    // 0x80087A68: nop

        goto L_80087AF4;
    // 0x80087A68: nop

L_80087A6C:
    // 0x80087A6C: lui         $t5, 0x8016
    ctx->r13 = S32(0X8016 << 16);
    // 0x80087A70: lb          $t5, 0x523E($t5)
    ctx->r13 = MEM_B(ctx->r13, 0X523E);
    // 0x80087A74: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80087A78: bne         $t5, $at, L_80087A90
    if (ctx->r13 != ctx->r1) {
        // 0x80087A7C: nop
    
            goto L_80087A90;
    }
    // 0x80087A7C: nop

    // 0x80087A80: jal         0x80281314
    // 0x80087A84: nop

    func_80281314_code_extra_3(rdram, ctx);
        goto after_3;
    // 0x80087A84: nop

    after_3:
    // 0x80087A88: b           L_80087AF4
    // 0x80087A8C: nop

        goto L_80087AF4;
    // 0x80087A8C: nop

L_80087A90:
    // 0x80087A90: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80087A94: lb          $t6, 0x523E($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X523E);
    // 0x80087A98: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80087A9C: bne         $t6, $at, L_80087AB4
    if (ctx->r14 != ctx->r1) {
        // 0x80087AA0: nop
    
            goto L_80087AB4;
    }
    // 0x80087AA0: nop

    // 0x80087AA4: jal         0x8028117C
    // 0x80087AA8: nop

    func_8028117C_code_extra_4(rdram, ctx);
        goto after_4;
    // 0x80087AA8: nop

    after_4:
    // 0x80087AAC: b           L_80087AF4
    // 0x80087AB0: nop

        goto L_80087AF4;
    // 0x80087AB0: nop

L_80087AB4:
    // 0x80087AB4: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80087AB8: lb          $t7, 0x523E($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X523E);
    // 0x80087ABC: addiu       $at, $zero, 0x5
    ctx->r1 = ADD32(0, 0X5);
    // 0x80087AC0: bne         $t7, $at, L_80087AD8
    if (ctx->r15 != ctx->r1) {
        // 0x80087AC4: nop
    
            goto L_80087AD8;
    }
    // 0x80087AC4: nop

    // 0x80087AC8: jal         0x802860F8
    // 0x80087ACC: nop

    func_802860F8_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x80087ACC: nop

    after_5:
    // 0x80087AD0: b           L_80087AF4
    // 0x80087AD4: nop

        goto L_80087AF4;
    // 0x80087AD4: nop

L_80087AD8:
    // 0x80087AD8: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80087ADC: lb          $t9, 0x523E($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X523E);
    // 0x80087AE0: addiu       $at, $zero, 0x6
    ctx->r1 = ADD32(0, 0X6);
    // 0x80087AE4: bne         $t9, $at, L_80087AF4
    if (ctx->r25 != ctx->r1) {
        // 0x80087AE8: nop
    
            goto L_80087AF4;
    }
    // 0x80087AE8: nop

    // 0x80087AEC: jal         0x80282F24
    // 0x80087AF0: nop

    func_80282F24_code_extra_6(rdram, ctx);
        goto after_6;
    // 0x80087AF0: nop

    after_6:
L_80087AF4:
    // 0x80087AF4: jal         0x80086D50
    // 0x80087AF8: nop

    func_80086D50(rdram, ctx);
        goto after_7;
    // 0x80087AF8: nop

    after_7:
    // 0x80087AFC: jal         0x80086ECC
    // 0x80087B00: nop

    func_80086ECC(rdram, ctx);
        goto after_8;
    // 0x80087B00: nop

    after_8:
    // 0x80087B04: b           L_80087B0C
    // 0x80087B08: nop

        goto L_80087B0C;
    // 0x80087B08: nop

L_80087B0C:
    // 0x80087B0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80087B10: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80087B14: jr          $ra
    // 0x80087B18: nop

    return;
    // 0x80087B18: nop

;}
RECOMP_FUNC void func_800C1E54(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800C1E54: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x800C1E58: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x800C1E5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x800C1E60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x800C1E64: jal         0x8002B0E4
    // 0x800C1E68: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x800C1E68: nop

    after_0:
    // 0x800C1E6C: b           L_800C1E74
    // 0x800C1E70: nop

        goto L_800C1E74;
    // 0x800C1E70: nop

L_800C1E74:
    // 0x800C1E74: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x800C1E78: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x800C1E7C: jr          $ra
    // 0x800C1E80: nop

    return;
    // 0x800C1E80: nop

;}
RECOMP_FUNC void func_800E1C04(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800E1C04: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x800E1C08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x800E1C0C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x800E1C10: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x800E1C14: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x800E1C18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1C1C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x800E1C20: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x800E1C24: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x800E1C28: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x800E1C2C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x800E1C30: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x800E1C34: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x800E1C38: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x800E1C3C: nop

    // 0x800E1C40: bne         $t0, $zero, L_800E1C6C
    if (ctx->r8 != 0) {
        // 0x800E1C44: nop
    
            goto L_800E1C6C;
    }
    // 0x800E1C44: nop

    // 0x800E1C48: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x800E1C4C: nop

    // 0x800E1C50: sh          $zero, 0x108($t1)
    MEM_H(0X108, ctx->r9) = 0;
    // 0x800E1C54: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x800E1C58: addiu       $t2, $zero, 0x5
    ctx->r10 = ADD32(0, 0X5);
    // 0x800E1C5C: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x800E1C60: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x800E1C64: b           L_800E1C8C
    // 0x800E1C68: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_800E1C8C;
    // 0x800E1C68: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_800E1C6C:
    // 0x800E1C6C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x800E1C70: lw          $t5, 0x7A64($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X7A64);
    // 0x800E1C74: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x800E1C78: bne         $t5, $at, L_800E1C8C
    if (ctx->r13 != ctx->r1) {
        // 0x800E1C7C: nop
    
            goto L_800E1C8C;
    }
    // 0x800E1C7C: nop

    // 0x800E1C80: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x800E1C84: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x800E1C88: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
L_800E1C8C:
    // 0x800E1C8C: b           L_800E1C94
    // 0x800E1C90: nop

        goto L_800E1C94;
    // 0x800E1C90: nop

L_800E1C94:
    // 0x800E1C94: jr          $ra
    // 0x800E1C98: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x800E1C98: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_800911B4(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x800911B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x800911B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x800911BC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x800911C0: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x800911C4: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x800911C8: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x800911CC: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x800911D0: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x800911D4: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x800911D8: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x800911DC: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x800911E0: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x800911E4: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x800911E8: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x800911EC: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x800911F0: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x800911F4: addiu       $a1, $a1, 0x151C
    ctx->r5 = ADD32(ctx->r5, 0X151C);
    // 0x800911F8: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x800911FC: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80091200: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80091204: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80091208: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x8009120C: jal         0x80027464
    // 0x80091210: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80091210: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80091214: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80091218: b           L_80091220
    // 0x8009121C: nop

        goto L_80091220;
    // 0x8009121C: nop

L_80091220:
    // 0x80091220: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80091224: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80091228: jr          $ra
    // 0x8009122C: nop

    return;
    // 0x8009122C: nop

;}
RECOMP_FUNC void func_80288DD4_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80288DD4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80288DD8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80288DDC: jal         0x802858D8
    // 0x80288DE0: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288DE0: nop

    after_0:
    // 0x80288DE4: beq         $v0, $zero, L_80288DF4
    if (ctx->r2 == 0) {
        // 0x80288DE8: nop
    
            goto L_80288DF4;
    }
    // 0x80288DE8: nop

    // 0x80288DEC: b           L_80288E3C
    // 0x80288DF0: nop

        goto L_80288E3C;
    // 0x80288DF0: nop

L_80288DF4:
    // 0x80288DF4: jal         0x80085D54
    // 0x80288DF8: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80288DF8: nop

    after_1:
    // 0x80288DFC: beq         $v0, $zero, L_80288E0C
    if (ctx->r2 == 0) {
        // 0x80288E00: nop
    
            goto L_80288E0C;
    }
    // 0x80288E00: nop

    // 0x80288E04: b           L_80288E3C
    // 0x80288E08: nop

        goto L_80288E3C;
    // 0x80288E08: nop

L_80288E0C:
    // 0x80288E0C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288E10: lw          $t6, -0x1DA8($t6)
    ctx->r14 = MEM_W(ctx->r14, -0X1DA8);
    // 0x80288E14: nop

    // 0x80288E18: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80288E1C: beq         $t7, $zero, L_80288E34
    if (ctx->r15 == 0) {
        // 0x80288E20: nop
    
            goto L_80288E34;
    }
    // 0x80288E20: nop

    // 0x80288E24: jal         0x802838FC
    // 0x80288E28: nop

    func_802838FC_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80288E28: nop

    after_2:
    // 0x80288E2C: b           L_80288E3C
    // 0x80288E30: nop

        goto L_80288E3C;
    // 0x80288E30: nop

L_80288E34:
    // 0x80288E34: b           L_80288E3C
    // 0x80288E38: nop

        goto L_80288E3C;
    // 0x80288E38: nop

L_80288E3C:
    // 0x80288E3C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80288E40: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80288E44: jr          $ra
    // 0x80288E48: nop

    return;
    // 0x80288E48: nop

;}
RECOMP_FUNC void func_8028898C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028898C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80288990: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80288994: jal         0x802858D8
    // 0x80288998: nop

    func_802858D8_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x80288998: nop

    after_0:
    // 0x8028899C: beq         $v0, $zero, L_802889AC
    if (ctx->r2 == 0) {
        // 0x802889A0: nop
    
            goto L_802889AC;
    }
    // 0x802889A0: nop

    // 0x802889A4: b           L_80288BE4
    // 0x802889A8: nop

        goto L_80288BE4;
    // 0x802889A8: nop

L_802889AC:
    // 0x802889AC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802889B0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802889B4: nop

    // 0x802889B8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x802889BC: nop

    // 0x802889C0: bne         $t7, $zero, L_80288B88
    if (ctx->r15 != 0) {
        // 0x802889C4: nop
    
            goto L_80288B88;
    }
    // 0x802889C4: nop

    // 0x802889C8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802889CC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802889D0: nop

    // 0x802889D4: lh          $t9, 0xAA($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XAA);
    // 0x802889D8: nop

    // 0x802889DC: bne         $t9, $zero, L_802889F8
    if (ctx->r25 != 0) {
        // 0x802889E0: nop
    
            goto L_802889F8;
    }
    // 0x802889E0: nop

    // 0x802889E4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802889E8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802889EC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802889F0: b           L_80288A14
    // 0x802889F4: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
        goto L_80288A14;
    // 0x802889F4: swc1        $f4, 0x44($t0)
    MEM_W(0X44, ctx->r8) = ctx->f4.u32l;
L_802889F8:
    // 0x802889F8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802889FC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80288A00: nop

    // 0x80288A04: lh          $t2, 0xAA($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XAA);
    // 0x80288A08: nop

    // 0x80288A0C: addiu       $t3, $t2, -0x1
    ctx->r11 = ADD32(ctx->r10, -0X1);
    // 0x80288A10: sh          $t3, 0xAA($t1)
    MEM_H(0XAA, ctx->r9) = ctx->r11;
L_80288A14:
    // 0x80288A14: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80288A18: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80288A1C: nop

    // 0x80288A20: lh          $t5, 0xA8($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA8);
    // 0x80288A24: nop

    // 0x80288A28: slti        $at, $t5, 0xF
    ctx->r1 = SIGNED(ctx->r13) < 0XF ? 1 : 0;
    // 0x80288A2C: bne         $at, $zero, L_80288AB0
    if (ctx->r1 != 0) {
        // 0x80288A30: nop
    
            goto L_80288AB0;
    }
    // 0x80288A30: nop

    // 0x80288A34: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80288A38: lui         $t7, 0x8016
    ctx->r15 = S32(0X8016 << 16);
    // 0x80288A3C: lb          $t7, 0x5245($t7)
    ctx->r15 = MEM_B(ctx->r15, 0X5245);
    // 0x80288A40: lb          $t6, 0x5244($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X5244);
    // 0x80288A44: nop

    // 0x80288A48: slt         $at, $t6, $t7
    ctx->r1 = SIGNED(ctx->r14) < SIGNED(ctx->r15) ? 1 : 0;
    // 0x80288A4C: beq         $at, $zero, L_80288A98
    if (ctx->r1 == 0) {
        // 0x80288A50: nop
    
            goto L_80288A98;
    }
    // 0x80288A50: nop

    // 0x80288A54: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288A58: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80288A5C: nop

    // 0x80288A60: sh          $zero, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = 0;
    // 0x80288A64: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80288A68: lb          $t9, 0x5244($t9)
    ctx->r25 = MEM_B(ctx->r25, 0X5244);
    // 0x80288A6C: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80288A70: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x80288A74: sb          $t0, 0x5244($at)
    MEM_B(0X5244, ctx->r1) = ctx->r8;
    // 0x80288A78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80288A7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80288A80: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80288A84: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80288A88: jal         0x800178D4
    // 0x80288A8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80288A8C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80288A90: b           L_80288AA8
    // 0x80288A94: nop

        goto L_80288AA8;
    // 0x80288A94: nop

L_80288A98:
    // 0x80288A98: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80288A9C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80288AA0: addiu       $t2, $zero, 0x64
    ctx->r10 = ADD32(0, 0X64);
    // 0x80288AA4: sh          $t2, 0xA8($t3)
    MEM_H(0XA8, ctx->r11) = ctx->r10;
L_80288AA8:
    // 0x80288AA8: b           L_80288ACC
    // 0x80288AAC: nop

        goto L_80288ACC;
    // 0x80288AAC: nop

L_80288AB0:
    // 0x80288AB0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80288AB4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80288AB8: nop

    // 0x80288ABC: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x80288AC0: nop

    // 0x80288AC4: addiu       $t5, $t4, 0x1
    ctx->r13 = ADD32(ctx->r12, 0X1);
    // 0x80288AC8: sh          $t5, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r13;
L_80288ACC:
    // 0x80288ACC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288AD0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80288AD4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80288AD8: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80288ADC: jal         0x800157EC
    // 0x80288AE0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    func_800157EC(rdram, ctx);
        goto after_2;
    // 0x80288AE0: lui         $a2, 0x4120
    ctx->r6 = S32(0X4120 << 16);
    after_2:
    // 0x80288AE4: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80288AE8: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80288AEC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80288AF0: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80288AF4: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80288AF8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80288AFC: sll         $t9, $t9, 1
    ctx->r25 = S32(ctx->r25 << 1);
    // 0x80288B00: mtc1        $t9, $f6
    ctx->f6.u32l = ctx->r25;
    // 0x80288B04: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80288B08: jal         0x80015538
    // 0x80288B0C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80288B0C: cvt.s.w     $f14, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    ctx->f14.fl = CVT_S_W(ctx->f6.u32l);
    after_3:
    // 0x80288B10: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80288B14: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80288B18: nop

    // 0x80288B1C: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
    // 0x80288B20: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80288B24: nop

    // 0x80288B28: bne         $t2, $zero, L_80288B80
    if (ctx->r10 != 0) {
        // 0x80288B2C: nop
    
            goto L_80288B80;
    }
    // 0x80288B2C: nop

    // 0x80288B30: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80288B34: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80288B38: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x80288B3C: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x80288B40: nop

    // 0x80288B44: bne         $t4, $at, L_80288B80
    if (ctx->r12 != ctx->r1) {
        // 0x80288B48: nop
    
            goto L_80288B80;
    }
    // 0x80288B48: nop

    // 0x80288B4C: lwc1        $f8, 0x44($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X44);
    // 0x80288B50: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80288B54: nop

    // 0x80288B58: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80288B5C: nop

    // 0x80288B60: bc1f        L_80288B80
    if (!c1cs) {
        // 0x80288B64: nop
    
            goto L_80288B80;
    }
    // 0x80288B64: nop

    // 0x80288B68: jal         0x80280000
    // 0x80288B6C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    func_80280000_code_extra_0(rdram, ctx);
        goto after_4;
    // 0x80288B6C: addiu       $a0, $zero, 0x5
    ctx->r4 = ADD32(0, 0X5);
    after_4:
    // 0x80288B70: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80288B74: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80288B78: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80288B7C: sh          $t5, 0xA6($t1)
    MEM_H(0XA6, ctx->r9) = ctx->r13;
L_80288B80:
    // 0x80288B80: b           L_80288BD4
    // 0x80288B84: nop

        goto L_80288BD4;
    // 0x80288B84: nop

L_80288B88:
    // 0x80288B88: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80288B8C: lh          $t6, -0x1D68($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1D68);
    // 0x80288B90: nop

    // 0x80288B94: beq         $t6, $zero, L_80288BBC
    if (ctx->r14 == 0) {
        // 0x80288B98: nop
    
            goto L_80288BBC;
    }
    // 0x80288B98: nop

    // 0x80288B9C: jal         0x8028236C
    // 0x80288BA0: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_5;
    // 0x80288BA0: nop

    after_5:
    // 0x80288BA4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288BA8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80288BAC: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80288BB0: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
    // 0x80288BB4: b           L_80288BE4
    // 0x80288BB8: nop

        goto L_80288BE4;
    // 0x80288BB8: nop

L_80288BBC:
    // 0x80288BBC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80288BC0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80288BC4: nop

    // 0x80288BC8: lwc1        $f16, 0x1C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80288BCC: nop

    // 0x80288BD0: swc1        $f16, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f16.u32l;
L_80288BD4:
    // 0x80288BD4: jal         0x800841E8
    // 0x80288BD8: nop

    func_800841E8(rdram, ctx);
        goto after_6;
    // 0x80288BD8: nop

    after_6:
    // 0x80288BDC: b           L_80288BE4
    // 0x80288BE0: nop

        goto L_80288BE4;
    // 0x80288BE0: nop

L_80288BE4:
    // 0x80288BE4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80288BE8: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80288BEC: jr          $ra
    // 0x80288BF0: nop

    return;
    // 0x80288BF0: nop

;}
RECOMP_FUNC void func_8028A9D8_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028A9D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028A9DC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028A9E0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028A9E4: nop

    // 0x8028A9E8: swc1        $f4, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f4.u32l;
    // 0x8028A9EC: jr          $ra
    // 0x8028A9F0: nop

    return;
    // 0x8028A9F0: nop

    // 0x8028A9F4: jr          $ra
    // 0x8028A9F8: nop

    return;
    // 0x8028A9F8: nop

;}
RECOMP_FUNC void func_80283808_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283808: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028380C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283810: lui         $t7, 0x8015
    ctx->r15 = S32(0X8015 << 16);
    // 0x80283814: addiu       $t7, $t7, 0x4150
    ctx->r15 = ADD32(ctx->r15, 0X4150);
    // 0x80283818: addiu       $t6, $zero, 0x19
    ctx->r14 = ADD32(0, 0X19);
    // 0x8028381C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80283820: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80283824: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80283828: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028382C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283830: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283834: addiu       $a2, $zero, 0x24
    ctx->r6 = ADD32(0, 0X24);
    // 0x80283838: jal         0x8001C0EC
    // 0x8028383C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028383C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283840: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283844: jal         0x8001B754
    // 0x80283848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80283848: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8028384C: jal         0x80280000
    // 0x80283850: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80283850: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80283854: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80283858: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028385C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80283860: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80283864: lwc1        $f12, 0x3C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80283868: jal         0x80015538
    // 0x8028386C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8028386C: nop

    after_3:
    // 0x80283870: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283874: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80283878: nop

    // 0x8028387C: swc1        $f0, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f0.u32l;
    // 0x80283880: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80283884: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80283888: nop

    // 0x8028388C: lwc1        $f4, 0x44($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80283890: nop

    // 0x80283894: neg.s       $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = -ctx->f4.fl;
    // 0x80283898: swc1        $f6, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f6.u32l;
    // 0x8028389C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802838A0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802838A4: addiu       $a2, $zero, 0xC
    ctx->r6 = ADD32(0, 0XC);
    // 0x802838A8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802838AC: jal         0x800178D4
    // 0x802838B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_4;
    // 0x802838B0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_4:
    // 0x802838B4: jal         0x8001A928
    // 0x802838B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_5;
    // 0x802838B8: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_5:
    // 0x802838BC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802838C0: lh          $t2, -0x1F00($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1F00);
    // 0x802838C4: nop

    // 0x802838C8: beq         $t2, $zero, L_802838E4
    if (ctx->r10 == 0) {
        // 0x802838CC: nop
    
            goto L_802838E4;
    }
    // 0x802838CC: nop

    // 0x802838D0: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802838D4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802838D8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x802838DC: jal         0x8007A7B4
    // 0x802838E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    func_8007A7B4(rdram, ctx);
        goto after_6;
    // 0x802838E0: addiu       $a2, $zero, 0x0
    ctx->r6 = ADD32(0, 0X0);
    after_6:
L_802838E4:
    // 0x802838E4: b           L_802838EC
    // 0x802838E8: nop

        goto L_802838EC;
    // 0x802838E8: nop

L_802838EC:
    // 0x802838EC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802838F0: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802838F4: jr          $ra
    // 0x802838F8: nop

    return;
    // 0x802838F8: nop

;}
RECOMP_FUNC void func_80284228_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284228: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8028422C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284230: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284234: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284238: addiu       $t6, $zero, 0x27
    ctx->r14 = ADD32(0, 0X27);
    // 0x8028423C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80284240: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80284244: addiu       $t8, $t8, 0x5808
    ctx->r24 = ADD32(ctx->r24, 0X5808);
    // 0x80284248: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x8028424C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284250: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284254: addiu       $a2, $zero, 0x26
    ctx->r6 = ADD32(0, 0X26);
    // 0x80284258: jal         0x8001C0EC
    // 0x8028425C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028425C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80284260: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284264: jal         0x8001B754
    // 0x80284268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80284268: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x8028426C: jal         0x80280000
    // 0x80284270: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_80280000_code_extra_0(rdram, ctx);
        goto after_2;
    // 0x80284270: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_2:
    // 0x80284274: jal         0x8001A928
    // 0x80284278: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    func_8001A928(rdram, ctx);
        goto after_3;
    // 0x80284278: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    after_3:
    // 0x8028427C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80284280: lh          $t9, -0x1F00($t9)
    ctx->r25 = MEM_H(ctx->r25, -0X1F00);
    // 0x80284284: nop

    // 0x80284288: beq         $t9, $zero, L_80284298
    if (ctx->r25 == 0) {
        // 0x8028428C: nop
    
            goto L_80284298;
    }
    // 0x8028428C: nop

    // 0x80284290: jal         0x8007A6DC
    // 0x80284294: nop

    func_8007A6DC(rdram, ctx);
        goto after_4;
    // 0x80284294: nop

    after_4:
L_80284298:
    // 0x80284298: b           L_802842A0
    // 0x8028429C: nop

        goto L_802842A0;
    // 0x8028429C: nop

L_802842A0:
    // 0x802842A0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802842A4: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802842A8: jr          $ra
    // 0x802842AC: nop

    return;
    // 0x802842AC: nop

;}
RECOMP_FUNC void func_802888E0_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802888E0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802888E4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802888E8: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x802888EC: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x802888F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802888F4: lh          $t6, -0x1CE8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1CE8);
    // 0x802888F8: nop

    // 0x802888FC: slti        $at, $t6, 0x1F
    ctx->r1 = SIGNED(ctx->r14) < 0X1F ? 1 : 0;
    // 0x80288900: bne         $at, $zero, L_8028895C
    if (ctx->r1 != 0) {
        // 0x80288904: nop
    
            goto L_8028895C;
    }
    // 0x80288904: nop

    // 0x80288908: jal         0x8028236C
    // 0x8028890C: nop

    func_8028236C_code_extra_0(rdram, ctx);
        goto after_0;
    // 0x8028890C: nop

    after_0:
    // 0x80288910: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80288914: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80288918: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028891C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80288920: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80288924: swc1        $f4, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f4.u32l;
    // 0x80288928: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028892C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80288930: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80288934: nop

    // 0x80288938: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x8028893C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80288940: nop

    // 0x80288944: swc1        $f20, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f20.u32l;
    // 0x80288948: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028894C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80288950: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80288954: b           L_80288970
    // 0x80288958: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
        goto L_80288970;
    // 0x80288958: sh          $t0, 0x108($t1)
    MEM_H(0X108, ctx->r9) = ctx->r8;
L_8028895C:
    // 0x8028895C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80288960: lh          $t2, -0x1CE8($t2)
    ctx->r10 = MEM_H(ctx->r10, -0X1CE8);
    // 0x80288964: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80288968: addiu       $t3, $t2, 0x1
    ctx->r11 = ADD32(ctx->r10, 0X1);
    // 0x8028896C: sh          $t3, -0x1CE8($at)
    MEM_H(-0X1CE8, ctx->r1) = ctx->r11;
L_80288970:
    // 0x80288970: b           L_80288978
    // 0x80288974: nop

        goto L_80288978;
    // 0x80288974: nop

L_80288978:
    // 0x80288978: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028897C: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x80288980: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x80288984: jr          $ra
    // 0x80288988: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80288988: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8028035C_code_extra_0(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028035C: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80280360: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80280364: swc1        $f21, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80280368: swc1        $f20, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f20.u32l;
    // 0x8028036C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280370: lh          $t6, -0x1EF8($t6)
    ctx->r14 = MEM_H(ctx->r14, -0X1EF8);
    // 0x80280374: nop

    // 0x80280378: beq         $t6, $zero, L_802804B0
    if (ctx->r14 == 0) {
        // 0x8028037C: nop
    
            goto L_802804B0;
    }
    // 0x8028037C: nop

    // 0x80280380: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280384: lh          $t7, -0x1EF8($t7)
    ctx->r15 = MEM_H(ctx->r15, -0X1EF8);
    // 0x80280388: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x8028038C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80280390: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80280394: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80280398: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8028039C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x802803A0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x802803A4: lh          $t9, 0x41F4($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X41F4);
    // 0x802803A8: nop

    // 0x802803AC: bne         $t9, $zero, L_802803C4
    if (ctx->r25 != 0) {
        // 0x802803B0: nop
    
            goto L_802803C4;
    }
    // 0x802803B0: nop

    // 0x802803B4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802803B8: sh          $zero, -0x1EF8($at)
    MEM_H(-0X1EF8, ctx->r1) = 0;
    // 0x802803BC: b           L_802804B8
    // 0x802803C0: nop

        goto L_802804B8;
    // 0x802803C0: nop

L_802803C4:
    // 0x802803C4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802803C8: lh          $t0, -0x1EF8($t0)
    ctx->r8 = MEM_H(ctx->r8, -0X1EF8);
    // 0x802803CC: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x802803D0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x802803D4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802803D8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x802803DC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x802803E0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x802803E4: addiu       $t2, $t2, 0x4150
    ctx->r10 = ADD32(ctx->r10, 0X4150);
    // 0x802803E8: addu        $t3, $t1, $t2
    ctx->r11 = ADD32(ctx->r9, ctx->r10);
    // 0x802803EC: sw          $t3, 0x28($sp)
    MEM_W(0X28, ctx->r29) = ctx->r11;
    // 0x802803F0: lw          $t4, 0x28($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X28);
    // 0x802803F4: nop

    // 0x802803F8: lwc1        $f4, 0xC($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0XC);
    // 0x802803FC: nop

    // 0x80280400: swc1        $f4, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->f4.u32l;
    // 0x80280404: lw          $t5, 0x28($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X28);
    // 0x80280408: nop

    // 0x8028040C: lwc1        $f6, 0x10($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0X10);
    // 0x80280410: nop

    // 0x80280414: swc1        $f6, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f6.u32l;
    // 0x80280418: lw          $t6, 0x28($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X28);
    // 0x8028041C: nop

    // 0x80280420: lwc1        $f8, 0x14($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X14);
    // 0x80280424: nop

    // 0x80280428: swc1        $f8, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f8.u32l;
    // 0x8028042C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80280430: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280434: lw          $t7, 0x28($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X28);
    // 0x80280438: nop

    // 0x8028043C: swc1        $f10, 0x14($t7)
    MEM_W(0X14, ctx->r15) = ctx->f10.u32l;
    // 0x80280440: lw          $t8, 0x28($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X28);
    // 0x80280444: nop

    // 0x80280448: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x8028044C: nop

    // 0x80280450: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x80280454: lw          $t9, 0x28($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X28);
    // 0x80280458: nop

    // 0x8028045C: swc1        $f20, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f20.u32l;
    // 0x80280460: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80280464: lh          $a0, -0x1EF8($a0)
    ctx->r4 = MEM_H(ctx->r4, -0X1EF8);
    // 0x80280468: jal         0x80022558
    // 0x8028046C: nop

    func_80022558(rdram, ctx);
        goto after_0;
    // 0x8028046C: nop

    after_0:
    // 0x80280470: bne         $v0, $zero, L_80280480
    if (ctx->r2 != 0) {
        // 0x80280474: nop
    
            goto L_80280480;
    }
    // 0x80280474: nop

    // 0x80280478: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028047C: sh          $zero, -0x1EF8($at)
    MEM_H(-0X1EF8, ctx->r1) = 0;
L_80280480:
    // 0x80280480: lwc1        $f16, 0x34($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X34);
    // 0x80280484: lw          $t0, 0x28($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X28);
    // 0x80280488: nop

    // 0x8028048C: swc1        $f16, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f16.u32l;
    // 0x80280490: lwc1        $f18, 0x30($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80280494: lw          $t1, 0x28($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X28);
    // 0x80280498: nop

    // 0x8028049C: swc1        $f18, 0x10($t1)
    MEM_W(0X10, ctx->r9) = ctx->f18.u32l;
    // 0x802804A0: lwc1        $f4, 0x2C($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x802804A4: lw          $t2, 0x28($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X28);
    // 0x802804A8: nop

    // 0x802804AC: swc1        $f4, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f4.u32l;
L_802804B0:
    // 0x802804B0: b           L_802804B8
    // 0x802804B4: nop

        goto L_802804B8;
    // 0x802804B4: nop

L_802804B8:
    // 0x802804B8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802804BC: lwc1        $f21, 0x10($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X10);
    // 0x802804C0: lwc1        $f20, 0x14($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X14);
    // 0x802804C4: jr          $ra
    // 0x802804C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x802804C8: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
