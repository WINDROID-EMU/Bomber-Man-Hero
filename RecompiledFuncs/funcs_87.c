#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80330D64_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330D64: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330D68: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330D6C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80330D70: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330D74: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330D78: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80330D7C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330D80: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D84: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330D88: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330D8C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330D90: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80330D94: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80330D98: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330D9C: beq         $s0, $at, L_80330DD0
    if (ctx->r16 == ctx->r1) {
        // 0x80330DA0: nop
    
            goto L_80330DD0;
    }
    // 0x80330DA0: nop

    // 0x80330DA4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330DA8: beq         $s0, $at, L_80330DE0
    if (ctx->r16 == ctx->r1) {
        // 0x80330DAC: nop
    
            goto L_80330DE0;
    }
    // 0x80330DAC: nop

    // 0x80330DB0: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80330DB4: beq         $s0, $at, L_80330DF0
    if (ctx->r16 == ctx->r1) {
        // 0x80330DB8: nop
    
            goto L_80330DF0;
    }
    // 0x80330DB8: nop

    // 0x80330DBC: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80330DC0: beq         $s0, $at, L_80330E00
    if (ctx->r16 == ctx->r1) {
        // 0x80330DC4: nop
    
            goto L_80330E00;
    }
    // 0x80330DC4: nop

    // 0x80330DC8: b           L_80330E10
    // 0x80330DCC: nop

        goto L_80330E10;
    // 0x80330DCC: nop

L_80330DD0:
    // 0x80330DD0: jal         0x803302C8
    // 0x80330DD4: nop

    func_803302C8_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80330DD4: nop

    after_0:
    // 0x80330DD8: b           L_80330E18
    // 0x80330DDC: nop

        goto L_80330E18;
    // 0x80330DDC: nop

L_80330DE0:
    // 0x80330DE0: jal         0x803307B0
    // 0x80330DE4: nop

    func_803307B0_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x80330DE4: nop

    after_1:
    // 0x80330DE8: b           L_80330E18
    // 0x80330DEC: nop

        goto L_80330E18;
    // 0x80330DEC: nop

L_80330DF0:
    // 0x80330DF0: jal         0x80330C34
    // 0x80330DF4: nop

    func_80330C34_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x80330DF4: nop

    after_2:
    // 0x80330DF8: b           L_80330E18
    // 0x80330DFC: nop

        goto L_80330E18;
    // 0x80330DFC: nop

L_80330E00:
    // 0x80330E00: jal         0x80330C44
    // 0x80330E04: nop

    func_80330C44_unk_bin_38(rdram, ctx);
        goto after_3;
    // 0x80330E04: nop

    after_3:
    // 0x80330E08: b           L_80330E18
    // 0x80330E0C: nop

        goto L_80330E18;
    // 0x80330E0C: nop

L_80330E10:
    // 0x80330E10: b           L_80330E18
    // 0x80330E14: nop

        goto L_80330E18;
    // 0x80330E14: nop

L_80330E18:
    // 0x80330E18: b           L_80330E20
    // 0x80330E1C: nop

        goto L_80330E20;
    // 0x80330E1C: nop

L_80330E20:
    // 0x80330E20: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330E24: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80330E28: jr          $ra
    // 0x80330E2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80330E2C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033180C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033180C: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80331810: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331814: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331818: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033181C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331820: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331824: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331828: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033182C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331830: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331834: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331838: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033183C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331840: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331844: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80331848: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033184C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331850: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331854: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331858: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033185C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331860: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331864: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331868: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033186C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80331870: nop

    // 0x80331874: sw          $t2, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r10;
    // 0x80331878: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x8033187C: nop

    // 0x80331880: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80331884: nop

    // 0x80331888: bne         $t4, $zero, L_803319B4
    if (ctx->r12 != 0) {
        // 0x8033188C: nop
    
            goto L_803319B4;
    }
    // 0x8033188C: nop

    // 0x80331890: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80331894: nop

    // 0x80331898: lbu         $t6, 0x132($t5)
    ctx->r14 = MEM_BU(ctx->r13, 0X132);
    // 0x8033189C: nop

    // 0x803318A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803318A4: sb          $t7, 0x132($t5)
    MEM_B(0X132, ctx->r13) = ctx->r15;
    // 0x803318A8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803318AC: addiu       $t8, $zero, 0x14
    ctx->r24 = ADD32(0, 0X14);
    // 0x803318B0: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x803318B4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803318B8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803318BC: nop

    // 0x803318C0: swc1        $f4, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f4.u32l;
    // 0x803318C4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803318C8: nop

    // 0x803318CC: lwc1        $f20, 0x2C($t1)
    ctx->f20.u32l = MEM_W(ctx->r9, 0X2C);
    // 0x803318D0: nop

    // 0x803318D4: swc1        $f20, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f20.u32l;
    // 0x803318D8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803318DC: nop

    // 0x803318E0: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x803318E4: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x803318E8: lw          $t6, 0x30($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X30);
    // 0x803318EC: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x803318F0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803318F4: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803318F8: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803318FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331900: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331904: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331908: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033190C: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331910: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331914: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331918: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033191C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331920: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x80331924: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331928: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x8033192C: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80331930: lwc1        $f20, 0x2C($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X2C);
    // 0x80331934: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331938: swc1        $f20, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f20.u32l;
    // 0x8033193C: lw          $t9, 0x30($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X30);
    // 0x80331940: nop

    // 0x80331944: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331948: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033194C: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331950: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331954: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331958: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x8033195C: swc1        $f20, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f20.u32l;
    // 0x80331960: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331964: lui         $t1, 0x8012
    ctx->r9 = S32(0X8012 << 16);
    // 0x80331968: addiu       $t1, $t1, -0x7594
    ctx->r9 = ADD32(ctx->r9, -0X7594);
    // 0x8033196C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331970: sw          $t1, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r9;
    // 0x80331974: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331978: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033197C: jal         0x8001C0EC
    // 0x80331980: addiu       $a3, $zero, 0x61
    ctx->r7 = ADD32(0, 0X61);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331980: addiu       $a3, $zero, 0x61
    ctx->r7 = ADD32(0, 0X61);
    after_0:
    // 0x80331984: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331988: nop

    // 0x8033198C: sh          $zero, 0x108($t2)
    MEM_H(0X108, ctx->r10) = 0;
    // 0x80331990: lw          $t3, 0x30($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X30);
    // 0x80331994: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331998: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x8033199C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803319A0: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x803319A4: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x803319A8: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x803319AC: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x803319B0: sh          $zero, 0x4258($at)
    MEM_H(0X4258, ctx->r1) = 0;
L_803319B4:
    // 0x803319B4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803319B8: nop

    // 0x803319BC: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x803319C0: nop

    // 0x803319C4: bne         $t7, $zero, L_803319E4
    if (ctx->r15 != 0) {
        // 0x803319C8: nop
    
            goto L_803319E4;
    }
    // 0x803319C8: nop

    // 0x803319CC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803319D0: addiu       $t5, $zero, 0x5
    ctx->r13 = ADD32(0, 0X5);
    // 0x803319D4: sh          $t5, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r13;
    // 0x803319D8: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803319DC: b           L_803319FC
    // 0x803319E0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
        goto L_803319FC;
    // 0x803319E0: sb          $zero, 0x132($t9)
    MEM_B(0X132, ctx->r25) = 0;
L_803319E4:
    // 0x803319E4: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803319E8: nop

    // 0x803319EC: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803319F0: nop

    // 0x803319F4: addiu       $t2, $t1, -0x1
    ctx->r10 = ADD32(ctx->r9, -0X1);
    // 0x803319F8: sh          $t2, 0xA6($t0)
    MEM_H(0XA6, ctx->r8) = ctx->r10;
L_803319FC:
    // 0x803319FC: b           L_80331A04
    // 0x80331A00: nop

        goto L_80331A04;
    // 0x80331A00: nop

L_80331A04:
    // 0x80331A04: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331A08: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331A0C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331A10: jr          $ra
    // 0x80331A14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80331A14: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80333544_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333544: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80333548: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033354C: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80333550: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333554: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333558: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033355C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80333560: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333564: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333568: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033356C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80333570: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80333574: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80333578: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033357C: beq         $s0, $at, L_803335B0
    if (ctx->r16 == ctx->r1) {
        // 0x80333580: nop
    
            goto L_803335B0;
    }
    // 0x80333580: nop

    // 0x80333584: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80333588: beq         $s0, $at, L_803335C0
    if (ctx->r16 == ctx->r1) {
        // 0x8033358C: nop
    
            goto L_803335C0;
    }
    // 0x8033358C: nop

    // 0x80333590: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80333594: beq         $s0, $at, L_803335D0
    if (ctx->r16 == ctx->r1) {
        // 0x80333598: nop
    
            goto L_803335D0;
    }
    // 0x80333598: nop

    // 0x8033359C: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x803335A0: beq         $s0, $at, L_803335E0
    if (ctx->r16 == ctx->r1) {
        // 0x803335A4: nop
    
            goto L_803335E0;
    }
    // 0x803335A4: nop

    // 0x803335A8: b           L_803335F0
    // 0x803335AC: nop

        goto L_803335F0;
    // 0x803335AC: nop

L_803335B0:
    // 0x803335B0: jal         0x80332990
    // 0x803335B4: nop

    func_80332990_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x803335B4: nop

    after_0:
    // 0x803335B8: b           L_803335F8
    // 0x803335BC: nop

        goto L_803335F8;
    // 0x803335BC: nop

L_803335C0:
    // 0x803335C0: jal         0x80333020
    // 0x803335C4: nop

    func_80333020_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x803335C4: nop

    after_1:
    // 0x803335C8: b           L_803335F8
    // 0x803335CC: nop

        goto L_803335F8;
    // 0x803335CC: nop

L_803335D0:
    // 0x803335D0: jal         0x803334E4
    // 0x803335D4: nop

    func_803334E4_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x803335D4: nop

    after_2:
    // 0x803335D8: b           L_803335F8
    // 0x803335DC: nop

        goto L_803335F8;
    // 0x803335DC: nop

L_803335E0:
    // 0x803335E0: jal         0x80333514
    // 0x803335E4: nop

    func_80333514_unk_bin_38(rdram, ctx);
        goto after_3;
    // 0x803335E4: nop

    after_3:
    // 0x803335E8: b           L_803335F8
    // 0x803335EC: nop

        goto L_803335F8;
    // 0x803335EC: nop

L_803335F0:
    // 0x803335F0: b           L_803335F8
    // 0x803335F4: nop

        goto L_803335F8;
    // 0x803335F4: nop

L_803335F8:
    // 0x803335F8: b           L_80333600
    // 0x803335FC: nop

        goto L_80333600;
    // 0x803335FC: nop

L_80333600:
    // 0x80333600: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80333604: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80333608: jr          $ra
    // 0x8033360C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033360C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_803310D8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803310D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803310DC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803310E0: nop

    // 0x803310E4: bne         $t6, $zero, L_80331140
    if (ctx->r14 != 0) {
        // 0x803310E8: nop
    
            goto L_80331140;
    }
    // 0x803310E8: nop

    // 0x803310EC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x803310F0: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x803310F4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310F8: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x803310FC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331100: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331104: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331108: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033110C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331110: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80331114: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80331118: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033111C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331120: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331124: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331128: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033112C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331130: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331134: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331138: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033113C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331140:
    // 0x80331140: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80331144: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x80331148: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033114C: bne         $t2, $at, L_803311A8
    if (ctx->r10 != ctx->r1) {
        // 0x80331150: nop
    
            goto L_803311A8;
    }
    // 0x80331150: nop

    // 0x80331154: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80331158: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x8033115C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331160: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80331164: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331168: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033116C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331170: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80331174: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80331178: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8033117C: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80331180: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331184: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331188: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033118C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x80331190: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x80331194: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331198: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x8033119C: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803311A0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803311A4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803311A8:
    // 0x803311A8: jr          $ra
    // 0x803311AC: nop

    return;
    // 0x803311AC: nop

    // 0x803311B0: jr          $ra
    // 0x803311B4: nop

    return;
    // 0x803311B4: nop

;}
RECOMP_FUNC void func_80334CC4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334CC4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80334CC8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80334CCC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334CD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334CD4: jal         0x8002B0E4
    // 0x80334CD8: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x80334CD8: nop

    after_0:
    // 0x80334CDC: b           L_80334CE4
    // 0x80334CE0: nop

        goto L_80334CE4;
    // 0x80334CE0: nop

L_80334CE4:
    // 0x80334CE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80334CE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80334CEC: jr          $ra
    // 0x80334CF0: nop

    return;
    // 0x80334CF0: nop

;}
RECOMP_FUNC void func_8033A100_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A100: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033A104: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8033A108: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x8033A10C: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x8033A110: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A114: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A118: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A11C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A120: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A124: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A128: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A12C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A130: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033A134: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033A138: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x8033A13C: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A140: nop

    // 0x8033A144: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033A148: nop

    // 0x8033A14C: bne         $t1, $zero, L_8033A1A8
    if (ctx->r9 != 0) {
        // 0x8033A150: nop
    
            goto L_8033A1A8;
    }
    // 0x8033A150: nop

    // 0x8033A154: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033A158: nop

    // 0x8033A15C: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033A160: nop

    // 0x8033A164: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033A168: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x8033A16C: lui         $at, 0x4160
    ctx->r1 = S32(0X4160 << 16);
    // 0x8033A170: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033A174: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033A178: nop

    // 0x8033A17C: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
    // 0x8033A180: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x8033A184: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x8033A188: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033A18C: nop

    // 0x8033A190: swc1        $f6, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f6.u32l;
    // 0x8033A194: jal         0x80014E80
    // 0x8033A198: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x8033A198: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x8033A19C: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A1A0: addiu       $t7, $v0, 0x28
    ctx->r15 = ADD32(ctx->r2, 0X28);
    // 0x8033A1A4: sh          $t7, 0xB6($t8)
    MEM_H(0XB6, ctx->r24) = ctx->r15;
L_8033A1A8:
    // 0x8033A1A8: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033A1AC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A1B0: lwc1        $f8, 0xC($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0XC);
    // 0x8033A1B4: lwc1        $f17, -0x5138($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X5138);
    // 0x8033A1B8: lwc1        $f16, -0x5134($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5134);
    // 0x8033A1BC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x8033A1C0: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x8033A1C4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8033A1C8: swc1        $f4, 0xC($t9)
    MEM_W(0XC, ctx->r25) = ctx->f4.u32l;
    // 0x8033A1CC: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033A1D0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A1D4: lwc1        $f6, 0x10($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X10);
    // 0x8033A1D8: lwc1        $f11, -0x5130($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5130);
    // 0x8033A1DC: lwc1        $f10, -0x512C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X512C);
    // 0x8033A1E0: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033A1E4: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8033A1E8: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x8033A1EC: swc1        $f18, 0x10($t0)
    MEM_W(0X10, ctx->r8) = ctx->f18.u32l;
    // 0x8033A1F0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033A1F4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033A1F8: lwc1        $f4, 0x14($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X14);
    // 0x8033A1FC: lwc1        $f9, -0x5128($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5128);
    // 0x8033A200: lwc1        $f8, -0x5124($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5124);
    // 0x8033A204: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x8033A208: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x8033A20C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x8033A210: swc1        $f16, 0x14($t1)
    MEM_W(0X14, ctx->r9) = ctx->f16.u32l;
    // 0x8033A214: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A218: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A21C: jal         0x80029C40
    // 0x8033A220: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x8033A220: nop

    after_1:
    // 0x8033A224: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A228: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A22C: jal         0x80029D04
    // 0x8033A230: nop

    func_80029D04(rdram, ctx);
        goto after_2;
    // 0x8033A230: nop

    after_2:
    // 0x8033A234: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x8033A238: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033A23C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A240: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A244: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x8033A248: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x8033A24C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033A250: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x8033A254: jal         0x80029018
    // 0x8033A258: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_80029018(rdram, ctx);
        goto after_3;
    // 0x8033A258: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x8033A25C: beq         $v0, $zero, L_8033A2AC
    if (ctx->r2 == 0) {
        // 0x8033A260: nop
    
            goto L_8033A2AC;
    }
    // 0x8033A260: nop

    // 0x8033A264: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033A268: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A26C: nop

    // 0x8033A270: swc1        $f6, 0x2C($t3)
    MEM_W(0X2C, ctx->r11) = ctx->f6.u32l;
    // 0x8033A274: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033A278: nop

    // 0x8033A27C: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x8033A280: nop

    // 0x8033A284: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x8033A288: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033A28C: nop

    // 0x8033A290: swc1        $f20, 0x24($t2)
    MEM_W(0X24, ctx->r10) = ctx->f20.u32l;
    // 0x8033A294: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033A298: addiu       $t5, $zero, 0x2
    ctx->r13 = ADD32(0, 0X2);
    // 0x8033A29C: sh          $t5, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r13;
    // 0x8033A2A0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x8033A2A4: b           L_8033A2F4
    // 0x8033A2A8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
        goto L_8033A2F4;
    // 0x8033A2A8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_8033A2AC:
    // 0x8033A2AC: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033A2B0: nop

    // 0x8033A2B4: lh          $t9, 0xB6($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB6);
    // 0x8033A2B8: nop

    // 0x8033A2BC: bne         $t9, $zero, L_8033A2DC
    if (ctx->r25 != 0) {
        // 0x8033A2C0: nop
    
            goto L_8033A2DC;
    }
    // 0x8033A2C0: nop

    // 0x8033A2C4: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033A2C8: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x8033A2CC: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x8033A2D0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033A2D4: b           L_8033A2F4
    // 0x8033A2D8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
        goto L_8033A2F4;
    // 0x8033A2D8: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_8033A2DC:
    // 0x8033A2DC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033A2E0: nop

    // 0x8033A2E4: lh          $t2, 0xB6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB6);
    // 0x8033A2E8: nop

    // 0x8033A2EC: addiu       $t5, $t2, -0x1
    ctx->r13 = ADD32(ctx->r10, -0X1);
    // 0x8033A2F0: sh          $t5, 0xB6($t4)
    MEM_H(0XB6, ctx->r12) = ctx->r13;
L_8033A2F4:
    // 0x8033A2F4: b           L_8033A2FC
    // 0x8033A2F8: nop

        goto L_8033A2FC;
    // 0x8033A2F8: nop

L_8033A2FC:
    // 0x8033A2FC: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033A300: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x8033A304: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x8033A308: jr          $ra
    // 0x8033A30C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x8033A30C: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80331E0C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331E0C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80331E10: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331E14: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331E18: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331E1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331E20: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331E24: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331E28: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331E2C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E30: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331E34: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331E38: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331E3C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331E40: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331E44: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80331E48: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331E4C: nop

    // 0x80331E50: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331E54: nop

    // 0x80331E58: bne         $t1, $zero, L_80331EDC
    if (ctx->r9 != 0) {
        // 0x80331E5C: nop
    
            goto L_80331EDC;
    }
    // 0x80331E5C: nop

    // 0x80331E60: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80331E64: nop

    // 0x80331E68: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331E6C: nop

    // 0x80331E70: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331E74: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331E78: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80331E7C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80331E80: nop

    // 0x80331E84: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80331E88: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80331E8C: nop

    // 0x80331E90: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80331E94: nop

    // 0x80331E98: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80331E9C: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80331EA0: nop

    // 0x80331EA4: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80331EA8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EAC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80331EB0: addiu       $t8, $t8, -0x7798
    ctx->r24 = ADD32(ctx->r24, -0X7798);
    // 0x80331EB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EB8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80331EBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331EC0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80331EC4: jal         0x8001C0EC
    // 0x80331EC8: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80331EC8: addiu       $a3, $zero, 0xA8
    ctx->r7 = ADD32(0, 0XA8);
    after_0:
    // 0x80331ECC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331ED0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331ED4: jal         0x8001BB34
    // 0x80331ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80331ED8: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_1:
L_80331EDC:
    // 0x80331EDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331EE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331EE4: jal         0x8002A2EC
    // 0x80331EE8: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x80331EE8: lui         $a1, 0x4496
    ctx->r5 = S32(0X4496 << 16);
    after_2:
    // 0x80331EEC: beq         $v0, $zero, L_80331F0C
    if (ctx->r2 == 0) {
        // 0x80331EF0: nop
    
            goto L_80331F0C;
    }
    // 0x80331EF0: nop

    // 0x80331EF4: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80331EF8: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x80331EFC: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80331F00: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80331F04: nop

    // 0x80331F08: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_80331F0C:
    // 0x80331F0C: b           L_80331F14
    // 0x80331F10: nop

        goto L_80331F14;
    // 0x80331F10: nop

L_80331F14:
    // 0x80331F14: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80331F18: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80331F1C: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80331F20: jr          $ra
    // 0x80331F24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80331F24: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_8033759C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033759C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803375A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803375A4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803375A8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803375AC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803375B0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803375B4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803375B8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803375BC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803375C0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803375C4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803375C8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803375CC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x803375D0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x803375D4: nop

    // 0x803375D8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803375DC: nop

    // 0x803375E0: bne         $t1, $zero, L_80337654
    if (ctx->r9 != 0) {
        // 0x803375E4: nop
    
            goto L_80337654;
    }
    // 0x803375E4: nop

    // 0x803375E8: lw          $t3, 0x24($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X24);
    // 0x803375EC: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x803375F0: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x803375F4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803375F8: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803375FC: nop

    // 0x80337600: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80337604: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80337608: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x8033760C: nop

    // 0x80337610: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80337614: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x80337618: addiu       $t6, $zero, -0x1
    ctx->r14 = ADD32(0, -0X1);
    // 0x8033761C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80337620: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337624: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80337628: addiu       $t8, $t8, 0x73D8
    ctx->r24 = ADD32(ctx->r24, 0X73D8);
    // 0x8033762C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80337630: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80337634: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80337638: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x8033763C: jal         0x8001C0EC
    // 0x80337640: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80337640: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    after_0:
    // 0x80337644: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337648: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033764C: jal         0x8001BBDC
    // 0x80337650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80337650: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80337654:
    // 0x80337654: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337658: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033765C: jal         0x80029C40
    // 0x80337660: nop

    func_80029C40(rdram, ctx);
        goto after_2;
    // 0x80337660: nop

    after_2:
    // 0x80337664: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337668: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033766C: jal         0x80029D04
    // 0x80337670: nop

    func_80029D04(rdram, ctx);
        goto after_3;
    // 0x80337670: nop

    after_3:
    // 0x80337674: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337678: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033767C: jal         0x8001B44C
    // 0x80337680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x80337680: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x80337684: beq         $v0, $zero, L_803376D8
    if (ctx->r2 == 0) {
        // 0x80337688: nop
    
            goto L_803376D8;
    }
    // 0x80337688: nop

    // 0x8033768C: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x80337690: addiu       $t9, $zero, 0x3
    ctx->r25 = ADD32(0, 0X3);
    // 0x80337694: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80337698: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x8033769C: nop

    // 0x803376A0: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x803376A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376A8: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x803376AC: addiu       $t2, $t2, 0x73D8
    ctx->r10 = ADD32(ctx->r10, 0X73D8);
    // 0x803376B0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376B4: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x803376B8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803376BC: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x803376C0: jal         0x8001C0EC
    // 0x803376C4: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    func_8001C0EC(rdram, ctx);
        goto after_5;
    // 0x803376C4: addiu       $a3, $zero, 0x120
    ctx->r7 = ADD32(0, 0X120);
    after_5:
    // 0x803376C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803376CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803376D0: jal         0x8001BBDC
    // 0x803376D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_6;
    // 0x803376D4: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_6:
L_803376D8:
    // 0x803376D8: b           L_803376E0
    // 0x803376DC: nop

        goto L_803376E0;
    // 0x803376DC: nop

L_803376E0:
    // 0x803376E0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803376E4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803376E8: jr          $ra
    // 0x803376EC: nop

    return;
    // 0x803376EC: nop

;}
RECOMP_FUNC void func_80331C04_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331C04: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80331C08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331C0C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80331C10: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80331C14: bne         $t6, $at, L_80331CFC
    if (ctx->r14 != ctx->r1) {
        // 0x80331C18: nop
    
            goto L_80331CFC;
    }
    // 0x80331C18: nop

    // 0x80331C1C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80331C20: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80331C24: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80331C28: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331C2C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331C30: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331C34: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331C38: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331C3C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331C40: lh          $t9, 0x4236($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4236);
    // 0x80331C44: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331C48: beq         $t9, $at, L_80331CFC
    if (ctx->r25 == ctx->r1) {
        // 0x80331C4C: nop
    
            goto L_80331CFC;
    }
    // 0x80331C4C: nop

    // 0x80331C50: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80331C54: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331C58: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331C5C: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331C60: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331C64: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331C68: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331C6C: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331C70: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331C74: lh          $t2, 0x4236($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4236);
    // 0x80331C78: nop

    // 0x80331C7C: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80331C80: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80331C84: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331C88: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331C8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C90: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331C94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331C98: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331C9C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331CA0: lh          $t5, 0x41F4($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X41F4);
    // 0x80331CA4: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80331CA8: bne         $t5, $at, L_80331CFC
    if (ctx->r13 != ctx->r1) {
        // 0x80331CAC: nop
    
            goto L_80331CFC;
    }
    // 0x80331CAC: nop

    // 0x80331CB0: lw          $t7, 0x4($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X4);
    // 0x80331CB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331CB8: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80331CBC: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331CC0: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80331CC4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80331CC8: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80331CCC: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80331CD0: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80331CD4: sh          $t6, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r14;
    // 0x80331CD8: lw          $t9, 0x4($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X4);
    // 0x80331CDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331CE0: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x80331CE4: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331CE8: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331CEC: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331CF0: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331CF4: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331CF8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331CFC:
    // 0x80331CFC: b           L_80331D04
    // 0x80331D00: nop

        goto L_80331D04;
    // 0x80331D00: nop

L_80331D04:
    // 0x80331D04: jr          $ra
    // 0x80331D08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80331D08: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_803301E8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803301E8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803301EC: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x803301F0: nop

    // 0x803301F4: bne         $t6, $zero, L_80330250
    if (ctx->r14 != 0) {
        // 0x803301F8: nop
    
            goto L_80330250;
    }
    // 0x803301F8: nop

    // 0x803301FC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80330200: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80330204: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330208: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033020C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330210: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330214: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330218: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033021C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330220: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80330224: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80330228: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033022C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80330230: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330234: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330238: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033023C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330240: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330244: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330248: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033024C: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330250:
    // 0x80330250: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80330254: lw          $t2, 0x7A64($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A64);
    // 0x80330258: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033025C: bne         $t2, $at, L_803302B8
    if (ctx->r10 != ctx->r1) {
        // 0x80330260: nop
    
            goto L_803302B8;
    }
    // 0x80330260: nop

    // 0x80330264: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80330268: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x8033026C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330270: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330274: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330278: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033027C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330280: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330284: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330288: addiu       $t3, $zero, 0x4
    ctx->r11 = ADD32(0, 0X4);
    // 0x8033028C: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80330290: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330294: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330298: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033029C: sll         $t8, $t6, 2
    ctx->r24 = S32(ctx->r14 << 2);
    // 0x803302A0: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803302A4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803302A8: addu        $t8, $t8, $t6
    ctx->r24 = ADD32(ctx->r24, ctx->r14);
    // 0x803302AC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x803302B0: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x803302B4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_803302B8:
    // 0x803302B8: jr          $ra
    // 0x803302BC: nop

    return;
    // 0x803302BC: nop

    // 0x803302C0: jr          $ra
    // 0x803302C4: nop

    return;
    // 0x803302C4: nop

;}
RECOMP_FUNC void func_80331D94_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331D98: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80331D9C: nop

    // 0x80331DA0: bne         $t6, $zero, L_80331DFC
    if (ctx->r14 != 0) {
        // 0x80331DA4: nop
    
            goto L_80331DFC;
    }
    // 0x80331DA4: nop

    // 0x80331DA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80331DAC: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80331DB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DB4: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80331DB8: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331DBC: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331DC0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331DC4: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331DC8: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331DCC: addiu       $t7, $zero, 0x4
    ctx->r15 = ADD32(0, 0X4);
    // 0x80331DD0: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x80331DD4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80331DD8: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331DDC: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331DE0: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331DE4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331DE8: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331DEC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331DF0: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331DF4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80331DF8: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80331DFC:
    // 0x80331DFC: jr          $ra
    // 0x80331E00: nop

    return;
    // 0x80331E00: nop

    // 0x80331E04: jr          $ra
    // 0x80331E08: nop

    return;
    // 0x80331E08: nop

;}
RECOMP_FUNC void func_80334CF4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334CF4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80334CF8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80334CFC: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80334D00: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334D04: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334D08: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80334D0C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334D10: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334D14: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334D18: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334D1C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334D20: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80334D24: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80334D28: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334D2C: beq         $s0, $at, L_80334D54
    if (ctx->r16 == ctx->r1) {
        // 0x80334D30: nop
    
            goto L_80334D54;
    }
    // 0x80334D30: nop

    // 0x80334D34: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80334D38: beq         $s0, $at, L_80334D64
    if (ctx->r16 == ctx->r1) {
        // 0x80334D3C: nop
    
            goto L_80334D64;
    }
    // 0x80334D3C: nop

    // 0x80334D40: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80334D44: beq         $s0, $at, L_80334D74
    if (ctx->r16 == ctx->r1) {
        // 0x80334D48: nop
    
            goto L_80334D74;
    }
    // 0x80334D48: nop

    // 0x80334D4C: b           L_80334D84
    // 0x80334D50: nop

        goto L_80334D84;
    // 0x80334D50: nop

L_80334D54:
    // 0x80334D54: jal         0x8033452C
    // 0x80334D58: nop

    func_8033452C_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80334D58: nop

    after_0:
    // 0x80334D5C: b           L_80334D8C
    // 0x80334D60: nop

        goto L_80334D8C;
    // 0x80334D60: nop

L_80334D64:
    // 0x80334D64: jal         0x803349B0
    // 0x80334D68: nop

    func_803349B0_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x80334D68: nop

    after_1:
    // 0x80334D6C: b           L_80334D8C
    // 0x80334D70: nop

        goto L_80334D8C;
    // 0x80334D70: nop

L_80334D74:
    // 0x80334D74: jal         0x80334CC4
    // 0x80334D78: nop

    func_80334CC4_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x80334D78: nop

    after_2:
    // 0x80334D7C: b           L_80334D8C
    // 0x80334D80: nop

        goto L_80334D8C;
    // 0x80334D80: nop

L_80334D84:
    // 0x80334D84: b           L_80334D8C
    // 0x80334D88: nop

        goto L_80334D8C;
    // 0x80334D88: nop

L_80334D8C:
    // 0x80334D8C: b           L_80334D94
    // 0x80334D90: nop

        goto L_80334D94;
    // 0x80334D90: nop

L_80334D94:
    // 0x80334D94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80334D98: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80334D9C: jr          $ra
    // 0x80334DA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80334DA0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330C44_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330C44: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330C48: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330C4C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330C50: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80330C54: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80330C58: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330C5C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C60: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330C68: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330C6C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80330C70: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80330C74: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80330C78: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330C7C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80330C80: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330C84: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330C88: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330C8C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330C90: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330C94: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330C98: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330C9C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80330CA0: nop

    // 0x80330CA4: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80330CA8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80330CAC: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80330CB0: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80330CB4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330CB8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330CBC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330CC0: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330CC4: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330CC8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330CCC: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x80330CD0: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330CD4: beq         $t5, $at, L_80330CF8
    if (ctx->r13 == ctx->r1) {
        // 0x80330CD8: nop
    
            goto L_80330CF8;
    }
    // 0x80330CD8: nop

    // 0x80330CDC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CE0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330CE4: jal         0x800281A4
    // 0x80330CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x80330CE8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80330CEC: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80330CF0: jal         0x8002B114
    // 0x80330CF4: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80330CF4: nop

    after_1:
L_80330CF8:
    // 0x80330CF8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330CFC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80330D04: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x80330D08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80330D0C: jal         0x800175F0
    // 0x80330D10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x80330D10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80330D14: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80330D18: lui         $at, 0x42F0
    ctx->r1 = S32(0X42F0 << 16);
    // 0x80330D1C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330D20: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80330D24: lui         $a3, 0x3FE6
    ctx->r7 = S32(0X3FE6 << 16);
    // 0x80330D28: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80330D2C: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x80330D30: ori         $a3, $a3, 0x6666
    ctx->r7 = ctx->r7 | 0X6666;
    // 0x80330D34: jal         0x8007EDF4
    // 0x80330D38: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007EDF4(rdram, ctx);
        goto after_3;
    // 0x80330D38: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_3:
    // 0x80330D3C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330D40: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330D44: jal         0x8002B114
    // 0x80330D48: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80330D48: nop

    after_4:
    // 0x80330D4C: b           L_80330D54
    // 0x80330D50: nop

        goto L_80330D54;
    // 0x80330D50: nop

L_80330D54:
    // 0x80330D54: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330D58: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80330D5C: jr          $ra
    // 0x80330D60: nop

    return;
    // 0x80330D60: nop

;}
RECOMP_FUNC void func_80338508_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338508: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x8033850C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80338510: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x80338514: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338518: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033851C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338520: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338524: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338528: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033852C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338530: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338534: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338538: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033853C: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80338540: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80338544: nop

    // 0x80338548: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033854C: nop

    // 0x80338550: bne         $t1, $zero, L_803385D0
    if (ctx->r9 != 0) {
        // 0x80338554: nop
    
            goto L_803385D0;
    }
    // 0x80338554: nop

    // 0x80338558: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x8033855C: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80338560: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80338564: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80338568: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033856C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80338570: nop

    // 0x80338574: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80338578: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033857C: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80338580: nop

    // 0x80338584: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80338588: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x8033858C: nop

    // 0x80338590: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
    // 0x80338594: jal         0x80014E80
    // 0x80338598: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80338598: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_0:
    // 0x8033859C: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803385A0: mtc1        $s0, $f8
    ctx->f8.u32l = ctx->r16;
    // 0x803385A4: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x803385A8: jal         0x80015538
    // 0x803385AC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x803385AC: cvt.s.w     $f12, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 8);
    ctx->f12.fl = CVT_S_W(ctx->f8.u32l);
    after_1:
    // 0x803385B0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803385B4: nop

    // 0x803385B8: swc1        $f0, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f0.u32l;
    // 0x803385BC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x803385C0: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x803385C4: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803385C8: nop

    // 0x803385CC: swc1        $f10, 0xD8($t8)
    MEM_W(0XD8, ctx->r24) = ctx->f10.u32l;
L_803385D0:
    // 0x803385D0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803385D4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x803385D8: lw          $a2, 0xD4($t9)
    ctx->r6 = MEM_W(ctx->r25, 0XD4);
    // 0x803385DC: lw          $a3, 0xD8($t9)
    ctx->r7 = MEM_W(ctx->r25, 0XD8);
    // 0x803385E0: jal         0x800BFFCC
    // 0x803385E4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    func_800BFFCC(rdram, ctx);
        goto after_2;
    // 0x803385E4: or          $a0, $t9, $zero
    ctx->r4 = ctx->r25 | 0;
    after_2:
    // 0x803385E8: sb          $v0, 0x2F($sp)
    MEM_B(0X2F, ctx->r29) = ctx->r2;
    // 0x803385EC: lb          $t0, 0x2F($sp)
    ctx->r8 = MEM_B(ctx->r29, 0X2F);
    // 0x803385F0: nop

    // 0x803385F4: bne         $t0, $zero, L_80338624
    if (ctx->r8 != 0) {
        // 0x803385F8: nop
    
            goto L_80338624;
    }
    // 0x803385F8: nop

    // 0x803385FC: jal         0x80014E80
    // 0x80338600: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    Math_Random(rdram, ctx);
        goto after_3;
    // 0x80338600: addiu       $a0, $zero, 0x168
    ctx->r4 = ADD32(0, 0X168);
    after_3:
    // 0x80338604: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80338608: mtc1        $s0, $f16
    ctx->f16.u32l = ctx->r16;
    // 0x8033860C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80338610: jal         0x80015538
    // 0x80338614: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80338614: cvt.s.w     $f12, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 16);
    ctx->f12.fl = CVT_S_W(ctx->f16.u32l);
    after_4:
    // 0x80338618: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033861C: nop

    // 0x80338620: swc1        $f0, 0xD4($t1)
    MEM_W(0XD4, ctx->r9) = ctx->f0.u32l;
L_80338624:
    // 0x80338624: lb          $t2, 0x2F($sp)
    ctx->r10 = MEM_B(ctx->r29, 0X2F);
    // 0x80338628: nop

    // 0x8033862C: beq         $t2, $zero, L_80338654
    if (ctx->r10 == 0) {
        // 0x80338630: nop
    
            goto L_80338654;
    }
    // 0x80338630: nop

    // 0x80338634: lb          $t3, 0x2F($sp)
    ctx->r11 = MEM_B(ctx->r29, 0X2F);
    // 0x80338638: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x8033863C: mtc1        $t3, $f18
    ctx->f18.u32l = ctx->r11;
    // 0x80338640: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80338644: cvt.s.w     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    ctx->f4.fl = CVT_S_W(ctx->f18.u32l);
    // 0x80338648: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033864C: mul.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80338650: swc1        $f8, 0xD8($t4)
    MEM_W(0XD8, ctx->r12) = ctx->f8.u32l;
L_80338654:
    // 0x80338654: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80338658: nop

    // 0x8033865C: lwc1        $f10, 0x3C($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80338660: nop

    // 0x80338664: swc1        $f10, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f10.u32l;
    // 0x80338668: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033866C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338670: jal         0x80029C40
    // 0x80338674: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80338674: nop

    after_5:
    // 0x80338678: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033867C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338680: jal         0x80029D04
    // 0x80338684: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x80338684: nop

    after_6:
    // 0x80338688: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8033868C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80338690: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338694: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338698: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x8033869C: lui         $a2, 0x42A0
    ctx->r6 = S32(0X42A0 << 16);
    // 0x803386A0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803386A4: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x803386A8: jal         0x80029018
    // 0x803386AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x803386AC: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_7:
    // 0x803386B0: beq         $v0, $zero, L_8033870C
    if (ctx->r2 == 0) {
        // 0x803386B4: nop
    
            goto L_8033870C;
    }
    // 0x803386B4: nop

    // 0x803386B8: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803386BC: nop

    // 0x803386C0: lwc1        $f4, 0x3C($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x803386C4: nop

    // 0x803386C8: swc1        $f4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->f4.u32l;
    // 0x803386CC: jal         0x800297DC
    // 0x803386D0: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x803386D0: nop

    after_8:
    // 0x803386D4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803386D8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803386DC: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x803386E0: jal         0x80029824
    // 0x803386E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029824(rdram, ctx);
        goto after_9;
    // 0x803386E4: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
    // 0x803386E8: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803386EC: nop

    // 0x803386F0: lwc1        $f6, 0x3C($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x803386F4: nop

    // 0x803386F8: swc1        $f6, 0xD4($t7)
    MEM_W(0XD4, ctx->r15) = ctx->f6.u32l;
    // 0x803386FC: lwc1        $f8, 0x30($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X30);
    // 0x80338700: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80338704: nop

    // 0x80338708: swc1        $f8, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f8.u32l;
L_8033870C:
    // 0x8033870C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338710: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338714: jal         0x8002A1FC
    // 0x80338718: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    func_8002A1FC(rdram, ctx);
        goto after_10;
    // 0x80338718: lui         $a1, 0x4434
    ctx->r5 = S32(0X4434 << 16);
    after_10:
    // 0x8033871C: beq         $v0, $zero, L_8033873C
    if (ctx->r2 == 0) {
        // 0x80338720: nop
    
            goto L_8033873C;
    }
    // 0x80338720: nop

    // 0x80338724: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80338728: addiu       $t9, $zero, 0x2
    ctx->r25 = ADD32(0, 0X2);
    // 0x8033872C: sh          $t9, 0xA4($t0)
    MEM_H(0XA4, ctx->r8) = ctx->r25;
    // 0x80338730: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x80338734: nop

    // 0x80338738: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
L_8033873C:
    // 0x8033873C: b           L_80338744
    // 0x80338740: nop

        goto L_80338744;
    // 0x80338740: nop

L_80338744:
    // 0x80338744: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80338748: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x8033874C: jr          $ra
    // 0x80338750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x80338750: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_8033ACA8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033ACA8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033ACAC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033ACB0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033ACB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033ACB8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033ACBC: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033ACC0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033ACC4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ACC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033ACCC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033ACD0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033ACD4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033ACD8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033ACDC: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x8033ACE0: lw          $t0, 0x24($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X24);
    // 0x8033ACE4: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033ACE8: lh          $s0, 0xA4($t0)
    ctx->r16 = MEM_H(ctx->r8, 0XA4);
    // 0x8033ACEC: nop

    // 0x8033ACF0: beq         $s0, $at, L_8033AD18
    if (ctx->r16 == ctx->r1) {
        // 0x8033ACF4: nop
    
            goto L_8033AD18;
    }
    // 0x8033ACF4: nop

    // 0x8033ACF8: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033ACFC: beq         $s0, $at, L_8033AD2C
    if (ctx->r16 == ctx->r1) {
        // 0x8033AD00: nop
    
            goto L_8033AD2C;
    }
    // 0x8033AD00: nop

    // 0x8033AD04: addiu       $at, $zero, 0x64
    ctx->r1 = ADD32(0, 0X64);
    // 0x8033AD08: beq         $s0, $at, L_8033AD40
    if (ctx->r16 == ctx->r1) {
        // 0x8033AD0C: nop
    
            goto L_8033AD40;
    }
    // 0x8033AD0C: nop

    // 0x8033AD10: b           L_8033AD54
    // 0x8033AD14: nop

        goto L_8033AD54;
    // 0x8033AD14: nop

L_8033AD18:
    // 0x8033AD18: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033AD1C: jal         0x8033A9AC
    // 0x8033AD20: nop

    func_8033A9AC_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x8033AD20: nop

    after_0:
    // 0x8033AD24: b           L_8033AD54
    // 0x8033AD28: nop

        goto L_8033AD54;
    // 0x8033AD28: nop

L_8033AD2C:
    // 0x8033AD2C: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033AD30: jal         0x8033AB54
    // 0x8033AD34: nop

    func_8033AB54_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x8033AD34: nop

    after_1:
    // 0x8033AD38: b           L_8033AD54
    // 0x8033AD3C: nop

        goto L_8033AD54;
    // 0x8033AD3C: nop

L_8033AD40:
    // 0x8033AD40: lw          $a0, 0x24($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X24);
    // 0x8033AD44: jal         0x8033AC74
    // 0x8033AD48: nop

    func_8033AC74_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x8033AD48: nop

    after_2:
    // 0x8033AD4C: b           L_8033AD54
    // 0x8033AD50: nop

        goto L_8033AD54;
    // 0x8033AD50: nop

L_8033AD54:
    // 0x8033AD54: b           L_8033AD5C
    // 0x8033AD58: nop

        goto L_8033AD5C;
    // 0x8033AD58: nop

L_8033AD5C:
    // 0x8033AD5C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033AD60: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033AD64: jr          $ra
    // 0x8033AD68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033AD68: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void stub_80337B5C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337B50: jr          $ra
    // 0x80337B54: nop

    return;
    // 0x80337B54: nop

    // 0x80337B58: jr          $ra
    // 0x80337B5C: nop

    return;
    // 0x80337B5C: nop

;}
RECOMP_FUNC void func_80333020_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333020: addiu       $sp, $sp, -0x38
    ctx->r29 = ADD32(ctx->r29, -0X38);
    // 0x80333024: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80333028: sw          $s0, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r16;
    // 0x8033302C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80333030: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80333034: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80333038: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033303C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333040: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80333044: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80333048: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033304C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80333050: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80333054: sw          $t9, 0x34($sp)
    MEM_W(0X34, ctx->r29) = ctx->r25;
    // 0x80333058: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x8033305C: nop

    // 0x80333060: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80333064: nop

    // 0x80333068: bne         $t1, $zero, L_8033310C
    if (ctx->r9 != 0) {
        // 0x8033306C: nop
    
            goto L_8033310C;
    }
    // 0x8033306C: nop

    // 0x80333070: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80333074: nop

    // 0x80333078: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x8033307C: nop

    // 0x80333080: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80333084: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80333088: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x8033308C: nop

    // 0x80333090: sh          $zero, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = 0;
    // 0x80333094: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333098: nop

    // 0x8033309C: sh          $zero, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = 0;
    // 0x803330A0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803330A4: nop

    // 0x803330A8: sh          $zero, 0xAE($t7)
    MEM_H(0XAE, ctx->r15) = 0;
    // 0x803330AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803330B0: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x803330B4: nop

    // 0x803330B8: swc1        $f4, 0xD4($t8)
    MEM_W(0XD4, ctx->r24) = ctx->f4.u32l;
    // 0x803330BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803330C0: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803330C4: nop

    // 0x803330C8: swc1        $f6, 0xD8($t9)
    MEM_W(0XD8, ctx->r25) = ctx->f6.u32l;
    // 0x803330CC: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803330D0: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x803330D4: nop

    // 0x803330D8: swc1        $f8, 0x40($t0)
    MEM_W(0X40, ctx->r8) = ctx->f8.u32l;
    // 0x803330DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803330E0: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x803330E4: nop

    // 0x803330E8: swc1        $f10, 0x48($t1)
    MEM_W(0X48, ctx->r9) = ctx->f10.u32l;
    // 0x803330EC: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803330F0: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803330F4: nop

    // 0x803330F8: swc1        $f16, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f16.u32l;
    // 0x803330FC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333100: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333104: jal         0x8001BBDC
    // 0x80333108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_0;
    // 0x80333108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_8033310C:
    // 0x8033310C: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x80333110: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80333114: lh          $t2, 0x108($t4)
    ctx->r10 = MEM_H(ctx->r12, 0X108);
    // 0x80333118: nop

    // 0x8033311C: bne         $t2, $at, L_80333230
    if (ctx->r10 != ctx->r1) {
        // 0x80333120: nop
    
            goto L_80333230;
    }
    // 0x80333120: nop

    // 0x80333124: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333128: nop

    // 0x8033312C: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x80333130: nop

    // 0x80333134: beq         $t6, $zero, L_803331F4
    if (ctx->r14 == 0) {
        // 0x80333138: nop
    
            goto L_803331F4;
    }
    // 0x80333138: nop

    // 0x8033313C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80333140: nop

    // 0x80333144: lh          $t8, 0xA8($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA8);
    // 0x80333148: nop

    // 0x8033314C: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x80333150: sh          $t9, 0xA8($t7)
    MEM_H(0XA8, ctx->r15) = ctx->r25;
    // 0x80333154: lw          $t0, 0x34($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X34);
    // 0x80333158: nop

    // 0x8033315C: lh          $t1, 0xA8($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA8);
    // 0x80333160: nop

    // 0x80333164: slti        $at, $t1, 0xA
    ctx->r1 = SIGNED(ctx->r9) < 0XA ? 1 : 0;
    // 0x80333168: beq         $at, $zero, L_80333198
    if (ctx->r1 == 0) {
        // 0x8033316C: nop
    
            goto L_80333198;
    }
    // 0x8033316C: nop

    // 0x80333170: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333174: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x80333178: lwc1        $f18, 0xD4($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XD4);
    // 0x8033317C: mtc1        $at, $f7
    ctx->f_odd[(7 - 1) * 2] = ctx->r1;
    // 0x80333180: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333184: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80333188: sub.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d - ctx->f6.d;
    // 0x8033318C: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80333190: b           L_803331D8
    // 0x80333194: swc1        $f10, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f10.u32l;
        goto L_803331D8;
    // 0x80333194: swc1        $f10, 0xD4($t3)
    MEM_W(0XD4, ctx->r11) = ctx->f10.u32l;
L_80333198:
    // 0x80333198: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x8033319C: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x803331A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803331A4: lwc1        $f16, 0xD4($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0XD4);
    // 0x803331A8: nop

    // 0x803331AC: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x803331B0: nop

    // 0x803331B4: bc1f        L_803331D8
    if (!c1cs) {
        // 0x803331B8: nop
    
            goto L_803331D8;
    }
    // 0x803331B8: nop

    // 0x803331BC: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803331C0: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803331C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803331C8: lwc1        $f4, 0xD4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0XD4);
    // 0x803331CC: nop

    // 0x803331D0: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803331D4: swc1        $f8, 0xD4($t2)
    MEM_W(0XD4, ctx->r10) = ctx->f8.u32l;
L_803331D8:
    // 0x803331D8: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803331DC: nop

    // 0x803331E0: lwc1        $f10, 0x18($t5)
    ctx->f10.u32l = MEM_W(ctx->r13, 0X18);
    // 0x803331E4: lwc1        $f16, 0xD8($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0XD8);
    // 0x803331E8: nop

    // 0x803331EC: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x803331F0: swc1        $f18, 0x18($t5)
    MEM_W(0X18, ctx->r13) = ctx->f18.u32l;
L_803331F4:
    // 0x803331F4: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x803331F8: nop

    // 0x803331FC: lwc1        $f4, 0xD4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0XD4);
    // 0x80333200: nop

    // 0x80333204: swc1        $f4, 0x48($t6)
    MEM_W(0X48, ctx->r14) = ctx->f4.u32l;
    // 0x80333208: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033320C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333210: jal         0x8001BBDC
    // 0x80333214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_1;
    // 0x80333214: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80333218: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033321C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333220: jal         0x8001BB34
    // 0x80333224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_2;
    // 0x80333224: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80333228: b           L_8033327C
    // 0x8033322C: nop

        goto L_8033327C;
    // 0x8033322C: nop

L_80333230:
    // 0x80333230: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80333234: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333238: nop

    // 0x8033323C: swc1        $f6, 0x48($t8)
    MEM_W(0X48, ctx->r24) = ctx->f6.u32l;
    // 0x80333240: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x80333244: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333248: lh          $s0, 0x108($t9)
    ctx->r16 = MEM_H(ctx->r25, 0X108);
    // 0x8033324C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333250: addiu       $s0, $s0, 0x1
    ctx->r16 = ADD32(ctx->r16, 0X1);
    // 0x80333254: andi        $t7, $s0, 0x1
    ctx->r15 = ctx->r16 & 0X1;
    // 0x80333258: or          $s0, $t7, $zero
    ctx->r16 = ctx->r15 | 0;
    // 0x8033325C: sltiu       $t0, $s0, 0x1
    ctx->r8 = ctx->r16 < 0X1 ? 1 : 0;
    // 0x80333260: or          $s0, $t0, $zero
    ctx->r16 = ctx->r8 | 0;
    // 0x80333264: jal         0x8001BB34
    // 0x80333268: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_8001BB34(rdram, ctx);
        goto after_3;
    // 0x80333268: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_3:
    // 0x8033326C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333270: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333274: jal         0x8001BBDC
    // 0x80333278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    func_8001BBDC(rdram, ctx);
        goto after_4;
    // 0x80333278: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    after_4:
L_8033327C:
    // 0x8033327C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333280: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333284: jal         0x80029C40
    // 0x80333288: nop

    func_80029C40(rdram, ctx);
        goto after_5;
    // 0x80333288: nop

    after_5:
    // 0x8033328C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333290: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333294: jal         0x80029D04
    // 0x80333298: nop

    func_80029D04(rdram, ctx);
        goto after_6;
    // 0x80333298: nop

    after_6:
    // 0x8033329C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803332A0: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803332A4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803332A8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803332AC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803332B0: lui         $a2, 0x4270
    ctx->r6 = S32(0X4270 << 16);
    // 0x803332B4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803332B8: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803332BC: jal         0x80029018
    // 0x803332C0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_7;
    // 0x803332C0: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_7:
    // 0x803332C4: beq         $v0, $zero, L_80333330
    if (ctx->r2 == 0) {
        // 0x803332C8: nop
    
            goto L_80333330;
    }
    // 0x803332C8: nop

    // 0x803332CC: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x803332D0: lh          $t1, 0x51A0($t1)
    ctx->r9 = MEM_H(ctx->r9, 0X51A0);
    // 0x803332D4: nop

    // 0x803332D8: andi        $t3, $t1, 0x80
    ctx->r11 = ctx->r9 & 0X80;
    // 0x803332DC: beq         $t3, $zero, L_80333314
    if (ctx->r11 == 0) {
        // 0x803332E0: nop
    
            goto L_80333314;
    }
    // 0x803332E0: nop

    // 0x803332E4: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x803332E8: addiu       $t4, $zero, 0x2
    ctx->r12 = ADD32(0, 0X2);
    // 0x803332EC: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
    // 0x803332F0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803332F4: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x803332F8: nop

    // 0x803332FC: swc1        $f16, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f16.u32l;
    // 0x80333300: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333304: nop

    // 0x80333308: lwc1        $f18, 0x2C($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033330C: b           L_80333330
    // 0x80333310: swc1        $f18, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f18.u32l;
        goto L_80333330;
    // 0x80333310: swc1        $f18, 0x24($t6)
    MEM_W(0X24, ctx->r14) = ctx->f18.u32l;
L_80333314:
    // 0x80333314: jal         0x800297DC
    // 0x80333318: nop

    func_800297DC(rdram, ctx);
        goto after_8;
    // 0x80333318: nop

    after_8:
    // 0x8033331C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333320: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333324: or          $s0, $v0, $zero
    ctx->r16 = ctx->r2 | 0;
    // 0x80333328: jal         0x80029A9C
    // 0x8033332C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    func_80029A9C(rdram, ctx);
        goto after_9;
    // 0x8033332C: or          $a1, $s0, $zero
    ctx->r5 = ctx->r16 | 0;
    after_9:
L_80333330:
    // 0x80333330: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80333334: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80333338: jal         0x8001B62C
    // 0x8033333C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_10;
    // 0x8033333C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_10:
    // 0x80333340: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80333344: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80333348: nop

    // 0x8033334C: c.eq.s      $f0, $f4
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f0.fl == ctx->f4.fl;
    // 0x80333350: nop

    // 0x80333354: bc1f        L_803333A8
    if (!c1cs) {
        // 0x80333358: nop
    
            goto L_803333A8;
    }
    // 0x80333358: nop

    // 0x8033335C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80333360: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333364: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x80333368: nop

    // 0x8033336C: swc1        $f6, 0x40($t8)
    MEM_W(0X40, ctx->r24) = ctx->f6.u32l;
    // 0x80333370: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80333374: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80333378: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x8033337C: nop

    // 0x80333380: swc1        $f8, 0xD4($t9)
    MEM_W(0XD4, ctx->r25) = ctx->f8.u32l;
    // 0x80333384: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80333388: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8033338C: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80333390: nop

    // 0x80333394: swc1        $f10, 0xD8($t7)
    MEM_W(0XD8, ctx->r15) = ctx->f10.u32l;
    // 0x80333398: lw          $t1, 0x34($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X34);
    // 0x8033339C: addiu       $t0, $zero, 0x3C
    ctx->r8 = ADD32(0, 0X3C);
    // 0x803333A0: b           L_80333418
    // 0x803333A4: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
        goto L_80333418;
    // 0x803333A4: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_803333A8:
    // 0x803333A8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803333AC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803333B0: jal         0x8001B62C
    // 0x803333B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B62C(rdram, ctx);
        goto after_11;
    // 0x803333B4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_11:
    // 0x803333B8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803333BC: nop

    // 0x803333C0: c.eq.s      $f0, $f16
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f0.fl == ctx->f16.fl;
    // 0x803333C4: nop

    // 0x803333C8: bc1f        L_80333418
    if (!c1cs) {
        // 0x803333CC: nop
    
            goto L_80333418;
    }
    // 0x803333CC: nop

    // 0x803333D0: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x803333D4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803333D8: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x803333DC: nop

    // 0x803333E0: swc1        $f18, 0x40($t3)
    MEM_W(0X40, ctx->r11) = ctx->f18.u32l;
    // 0x803333E4: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x803333E8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803333EC: lw          $t4, 0x34($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X34);
    // 0x803333F0: nop

    // 0x803333F4: swc1        $f4, 0xD4($t4)
    MEM_W(0XD4, ctx->r12) = ctx->f4.u32l;
    // 0x803333F8: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x803333FC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80333400: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x80333404: nop

    // 0x80333408: swc1        $f6, 0xD8($t2)
    MEM_W(0XD8, ctx->r10) = ctx->f6.u32l;
    // 0x8033340C: lw          $t6, 0x34($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X34);
    // 0x80333410: addiu       $t5, $zero, 0x3C
    ctx->r13 = ADD32(0, 0X3C);
    // 0x80333414: sh          $t5, 0xA8($t6)
    MEM_H(0XA8, ctx->r14) = ctx->r13;
L_80333418:
    // 0x80333418: lw          $t8, 0x34($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X34);
    // 0x8033341C: nop

    // 0x80333420: lh          $t9, 0xB0($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XB0);
    // 0x80333424: nop

    // 0x80333428: bne         $t9, $zero, L_803334CC
    if (ctx->r25 != 0) {
        // 0x8033342C: nop
    
            goto L_803334CC;
    }
    // 0x8033342C: nop

    // 0x80333430: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x80333434: nop

    // 0x80333438: lh          $t0, 0xA6($t7)
    ctx->r8 = MEM_H(ctx->r15, 0XA6);
    // 0x8033343C: nop

    // 0x80333440: bne         $t0, $zero, L_80333484
    if (ctx->r8 != 0) {
        // 0x80333444: nop
    
            goto L_80333484;
    }
    // 0x80333444: nop

    // 0x80333448: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8033344C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80333450: lw          $t3, 0x34($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X34);
    // 0x80333454: lwc1        $f8, 0x8($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X8);
    // 0x80333458: lwc1        $f10, 0x8($t3)
    ctx->f10.u32l = MEM_W(ctx->r11, 0X8);
    // 0x8033345C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80333460: lwc1        $f18, -0x5200($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X5200);
    // 0x80333464: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80333468: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x8033346C: nop

    // 0x80333470: bc1f        L_80333484
    if (!c1cs) {
        // 0x80333474: nop
    
            goto L_80333484;
    }
    // 0x80333474: nop

    // 0x80333478: lw          $t2, 0x34($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X34);
    // 0x8033347C: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80333480: sh          $t4, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r12;
L_80333484:
    // 0x80333484: lw          $t5, 0x34($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X34);
    // 0x80333488: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033348C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80333490: nop

    // 0x80333494: bne         $t6, $at, L_803334CC
    if (ctx->r14 != ctx->r1) {
        // 0x80333498: nop
    
            goto L_803334CC;
    }
    // 0x80333498: nop

    // 0x8033349C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803334A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803334A4: jal         0x8001B44C
    // 0x803334A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_12;
    // 0x803334A8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_12:
    // 0x803334AC: beq         $v0, $zero, L_803334CC
    if (ctx->r2 == 0) {
        // 0x803334B0: nop
    
            goto L_803334CC;
    }
    // 0x803334B0: nop

    // 0x803334B4: lw          $t9, 0x34($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X34);
    // 0x803334B8: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803334BC: sh          $t8, 0xA4($t9)
    MEM_H(0XA4, ctx->r25) = ctx->r24;
    // 0x803334C0: lw          $t7, 0x34($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X34);
    // 0x803334C4: nop

    // 0x803334C8: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_803334CC:
    // 0x803334CC: b           L_803334D4
    // 0x803334D0: nop

        goto L_803334D4;
    // 0x803334D0: nop

L_803334D4:
    // 0x803334D4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803334D8: lw          $s0, 0x20($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X20);
    // 0x803334DC: jr          $ra
    // 0x803334E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
    return;
    // 0x803334E0: addiu       $sp, $sp, 0x38
    ctx->r29 = ADD32(ctx->r29, 0X38);
;}
RECOMP_FUNC void func_80331A18_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331A18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80331A1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331A20: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331A24: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331A28: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331A2C: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331A30: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A34: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331A38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331A3C: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331A40: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331A44: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331A48: sw          $t9, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r25;
    // 0x80331A4C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80331A50: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331A54: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331A58: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331A5C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331A60: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331A64: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331A68: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331A6C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331A70: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80331A74: nop

    // 0x80331A78: sw          $t2, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r10;
    // 0x80331A7C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80331A80: lw          $t3, 0x7A60($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X7A60);
    // 0x80331A84: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331A88: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331A8C: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331A90: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80331A94: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331A98: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331A9C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80331AA0: lh          $t5, 0x4238($t5)
    ctx->r13 = MEM_H(ctx->r13, 0X4238);
    // 0x80331AA4: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80331AA8: beq         $t5, $at, L_80331ACC
    if (ctx->r13 == ctx->r1) {
        // 0x80331AAC: nop
    
            goto L_80331ACC;
    }
    // 0x80331AAC: nop

    // 0x80331AB0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AB4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AB8: jal         0x800281A4
    // 0x80331ABC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_800281A4(rdram, ctx);
        goto after_0;
    // 0x80331ABC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80331AC0: lw          $a0, 0x20($sp)
    ctx->r4 = MEM_W(ctx->r29, 0X20);
    // 0x80331AC4: jal         0x8002B114
    // 0x80331AC8: nop

    func_8002B114(rdram, ctx);
        goto after_1;
    // 0x80331AC8: nop

    after_1:
L_80331ACC:
    // 0x80331ACC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331AD0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331AD4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80331AD8: addiu       $a2, $zero, 0x29
    ctx->r6 = ADD32(0, 0X29);
    // 0x80331ADC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80331AE0: jal         0x800175F0
    // 0x80331AE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_2;
    // 0x80331AE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80331AE8: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331AEC: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80331AF0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80331AF4: lwc1        $f4, 0x4($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X4);
    // 0x80331AF8: lwc1        $f12, 0x0($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X0);
    // 0x80331AFC: lw          $a2, 0x8($t6)
    ctx->r6 = MEM_W(ctx->r14, 0X8);
    // 0x80331B00: lui         $a3, 0x4020
    ctx->r7 = S32(0X4020 << 16);
    // 0x80331B04: jal         0x8007EDF4
    // 0x80331B08: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    func_8007EDF4(rdram, ctx);
        goto after_3;
    // 0x80331B08: add.s       $f14, $f4, $f6
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f14.fl = ctx->f4.fl + ctx->f6.fl;
    after_3:
    // 0x80331B0C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80331B10: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80331B14: jal         0x8002B114
    // 0x80331B18: nop

    func_8002B114(rdram, ctx);
        goto after_4;
    // 0x80331B18: nop

    after_4:
    // 0x80331B1C: b           L_80331B24
    // 0x80331B20: nop

        goto L_80331B24;
    // 0x80331B20: nop

L_80331B24:
    // 0x80331B24: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331B28: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80331B2C: jr          $ra
    // 0x80331B30: nop

    return;
    // 0x80331B30: nop

;}
RECOMP_FUNC void func_80335470_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335470: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80335474: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80335478: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033547C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335480: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335484: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335488: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033548C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335490: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335494: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335498: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033549C: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x803354A0: nop

    // 0x803354A4: addiu       $t9, $t8, -0x1
    ctx->r25 = ADD32(ctx->r24, -0X1);
    // 0x803354A8: sltiu       $at, $t9, 0x5
    ctx->r1 = ctx->r25 < 0X5 ? 1 : 0;
    // 0x803354AC: beq         $at, $zero, L_80335520
    if (ctx->r1 == 0) {
        // 0x803354B0: nop
    
            goto L_80335520;
    }
    // 0x803354B0: nop

    // 0x803354B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x803354B8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803354BC: addu        $at, $at, $t9
    gpr jr_addend_803354C8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x803354C0: lw          $t9, -0x51B0($at)
    ctx->r25 = ADD32(ctx->r1, -0X51B0);
    // 0x803354C4: nop

    // 0x803354C8: jr          $t9
    // 0x803354CC: nop

    switch (jr_addend_803354C8 >> 2) {
        case 0: goto L_803354D0; break;
        case 1: goto L_803354E0; break;
        case 2: goto L_803354F0; break;
        case 3: goto L_80335500; break;
        case 4: goto L_80335510; break;
        default: switch_error(__func__, 0x803354C8, 0x8033AE50);
    }
    // 0x803354CC: nop

L_803354D0:
    // 0x803354D0: jal         0x80334E2C
    // 0x803354D4: nop

    func_80334E2C_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x803354D4: nop

    after_0:
    // 0x803354D8: b           L_80335528
    // 0x803354DC: nop

        goto L_80335528;
    // 0x803354DC: nop

L_803354E0:
    // 0x803354E0: jal         0x80334F84
    // 0x803354E4: nop

    func_80334F84_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x803354E4: nop

    after_1:
    // 0x803354E8: b           L_80335528
    // 0x803354EC: nop

        goto L_80335528;
    // 0x803354EC: nop

L_803354F0:
    // 0x803354F0: jal         0x803350D4
    // 0x803354F4: nop

    func_803350D4_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x803354F4: nop

    after_2:
    // 0x803354F8: b           L_80335528
    // 0x803354FC: nop

        goto L_80335528;
    // 0x803354FC: nop

L_80335500:
    // 0x80335500: jal         0x803352D8
    // 0x80335504: nop

    func_803352D8_unk_bin_38(rdram, ctx);
        goto after_3;
    // 0x80335504: nop

    after_3:
    // 0x80335508: b           L_80335528
    // 0x8033550C: nop

        goto L_80335528;
    // 0x8033550C: nop

L_80335510:
    // 0x80335510: jal         0x803353C0
    // 0x80335514: nop

    func_803353C0_unk_bin_38(rdram, ctx);
        goto after_4;
    // 0x80335514: nop

    after_4:
    // 0x80335518: b           L_80335528
    // 0x8033551C: nop

        goto L_80335528;
    // 0x8033551C: nop

L_80335520:
    // 0x80335520: b           L_80335528
    // 0x80335524: nop

        goto L_80335528;
    // 0x80335524: nop

L_80335528:
    // 0x80335528: b           L_80335530
    // 0x8033552C: nop

        goto L_80335530;
    // 0x8033552C: nop

L_80335530:
    // 0x80335530: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80335534: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80335538: jr          $ra
    // 0x8033553C: nop

    return;
    // 0x8033553C: nop

;}
RECOMP_FUNC void func_80333880_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333880: jr          $ra
    // 0x80333884: nop

    return;
    // 0x80333884: nop

    // 0x80333888: jr          $ra
    // 0x8033388C: nop

    return;
    // 0x8033388C: nop

;}
RECOMP_FUNC void func_80334354_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334354: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80334358: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033435C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334360: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334364: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334368: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033436C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334370: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334374: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334378: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033437C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80334380: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x80334384: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80334388: bne         $t8, $at, L_803343A8
    if (ctx->r24 != ctx->r1) {
        // 0x8033438C: nop
    
            goto L_803343A8;
    }
    // 0x8033438C: nop

    // 0x80334390: b           L_80334398
    // 0x80334394: nop

        goto L_80334398;
    // 0x80334394: nop

L_80334398:
    // 0x80334398: jal         0x80333ED4
    // 0x8033439C: nop

    func_80333ED4_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x8033439C: nop

    after_0:
    // 0x803343A0: b           L_803343B0
    // 0x803343A4: nop

        goto L_803343B0;
    // 0x803343A4: nop

L_803343A8:
    // 0x803343A8: b           L_803343B0
    // 0x803343AC: nop

        goto L_803343B0;
    // 0x803343AC: nop

L_803343B0:
    // 0x803343B0: b           L_803343B8
    // 0x803343B4: nop

        goto L_803343B8;
    // 0x803343B4: nop

L_803343B8:
    // 0x803343B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803343BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803343C0: jr          $ra
    // 0x803343C4: nop

    return;
    // 0x803343C4: nop

;}
RECOMP_FUNC void func_8033252C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033252C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80332530: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332534: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80332538: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033253C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80332540: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332544: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332548: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033254C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332550: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332554: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332558: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x8033255C: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80332560: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332564: nop

    // 0x80332568: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x8033256C: nop

    // 0x80332570: bne         $t1, $zero, L_803325B8
    if (ctx->r9 != 0) {
        // 0x80332574: nop
    
            goto L_803325B8;
    }
    // 0x80332574: nop

    // 0x80332578: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033257C: nop

    // 0x80332580: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80332584: nop

    // 0x80332588: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x8033258C: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80332590: jal         0x80014E80
    // 0x80332594: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80332594: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80332598: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x8033259C: andi        $t5, $v0, 0x1
    ctx->r13 = ctx->r2 & 0X1;
    // 0x803325A0: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x803325A4: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x803325A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803325AC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x803325B0: nop

    // 0x803325B4: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
L_803325B8:
    // 0x803325B8: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803325BC: lw          $t8, 0x2C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X2C);
    // 0x803325C0: nop

    // 0x803325C4: swc1        $f6, 0x28($t8)
    MEM_W(0X28, ctx->r24) = ctx->f6.u32l;
    // 0x803325C8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803325CC: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325D0: jal         0x80029C40
    // 0x803325D4: nop

    func_80029C40(rdram, ctx);
        goto after_1;
    // 0x803325D4: nop

    after_1:
    // 0x803325D8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803325DC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803325E0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803325E4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803325E8: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x803325EC: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x803325F0: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803325F4: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x803325F8: jal         0x80029018
    // 0x803325FC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_80029018(rdram, ctx);
        goto after_2;
    // 0x803325FC: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_2:
    // 0x80332600: beq         $v0, $zero, L_80332654
    if (ctx->r2 == 0) {
        // 0x80332604: nop
    
            goto L_80332654;
    }
    // 0x80332604: nop

    // 0x80332608: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x8033260C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80332610: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332614: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80332618: nop

    // 0x8033261C: c.eq.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl == ctx->f18.fl;
    // 0x80332620: nop

    // 0x80332624: bc1f        L_80332640
    if (!c1cs) {
        // 0x80332628: nop
    
            goto L_80332640;
    }
    // 0x80332628: nop

    // 0x8033262C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80332630: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332634: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80332638: b           L_80332654
    // 0x8033263C: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
        goto L_80332654;
    // 0x8033263C: swc1        $f4, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f4.u32l;
L_80332640:
    // 0x80332640: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80332644: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80332648: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x8033264C: nop

    // 0x80332650: swc1        $f6, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f6.u32l;
L_80332654:
    // 0x80332654: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80332658: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8033265C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332660: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332664: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332668: addiu       $a1, $sp, 0x28
    ctx->r5 = ADD32(ctx->r29, 0X28);
    // 0x8033266C: addiu       $a2, $sp, 0x24
    ctx->r6 = ADD32(ctx->r29, 0X24);
    // 0x80332670: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332674: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80332678: jal         0x800295C0
    // 0x8033267C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x8033267C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_3:
    // 0x80332680: beq         $v0, $zero, L_80332698
    if (ctx->r2 == 0) {
        // 0x80332684: nop
    
            goto L_80332698;
    }
    // 0x80332684: nop

    // 0x80332688: lwc1        $f16, 0x24($sp)
    ctx->f16.u32l = MEM_W(ctx->r29, 0X24);
    // 0x8033268C: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80332690: b           L_803326A8
    // 0x80332694: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
        goto L_803326A8;
    // 0x80332694: swc1        $f16, 0x4($t3)
    MEM_W(0X4, ctx->r11) = ctx->f16.u32l;
L_80332698:
    // 0x80332698: lwc1        $f18, 0x28($sp)
    ctx->f18.u32l = MEM_W(ctx->r29, 0X28);
    // 0x8033269C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x803326A0: nop

    // 0x803326A4: swc1        $f18, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f18.u32l;
L_803326A8:
    // 0x803326A8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x803326AC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x803326B0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803326B4: lwc1        $f4, 0x4($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X4);
    // 0x803326B8: nop

    // 0x803326BC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x803326C0: swc1        $f8, 0x4($t2)
    MEM_W(0X4, ctx->r10) = ctx->f8.u32l;
    // 0x803326C4: b           L_803326CC
    // 0x803326C8: nop

        goto L_803326CC;
    // 0x803326C8: nop

L_803326CC:
    // 0x803326CC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803326D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    // 0x803326D4: jr          $ra
    // 0x803326D8: nop

    return;
    // 0x803326D8: nop

;}
RECOMP_FUNC void func_8033A340_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A340: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8033A344: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A348: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x8033A34C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A350: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033A354: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x8033A358: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033A35C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A360: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033A364: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033A368: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033A36C: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x8033A370: lh          $t8, 0x4236($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X4236);
    // 0x8033A374: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x8033A378: bne         $t8, $at, L_8033A3F0
    if (ctx->r24 != ctx->r1) {
        // 0x8033A37C: nop
    
            goto L_8033A3F0;
    }
    // 0x8033A37C: nop

    // 0x8033A380: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8033A384: lw          $t9, 0x7A60($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X7A60);
    // 0x8033A388: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x8033A38C: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033A390: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A394: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x8033A398: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x8033A39C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033A3A0: addu        $s0, $s0, $t0
    ctx->r16 = ADD32(ctx->r16, ctx->r8);
    // 0x8033A3A4: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x8033A3A8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8033A3AC: beq         $s0, $at, L_8033A3C8
    if (ctx->r16 == ctx->r1) {
        // 0x8033A3B0: nop
    
            goto L_8033A3C8;
    }
    // 0x8033A3B0: nop

    // 0x8033A3B4: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033A3B8: beq         $s0, $at, L_8033A3D8
    if (ctx->r16 == ctx->r1) {
        // 0x8033A3BC: nop
    
            goto L_8033A3D8;
    }
    // 0x8033A3BC: nop

    // 0x8033A3C0: b           L_8033A3E8
    // 0x8033A3C4: nop

        goto L_8033A3E8;
    // 0x8033A3C4: nop

L_8033A3C8:
    // 0x8033A3C8: jal         0x8033A100
    // 0x8033A3CC: nop

    func_8033A100_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x8033A3CC: nop

    after_0:
    // 0x8033A3D0: b           L_8033A3F0
    // 0x8033A3D4: nop

        goto L_8033A3F0;
    // 0x8033A3D4: nop

L_8033A3D8:
    // 0x8033A3D8: jal         0x8033A310
    // 0x8033A3DC: nop

    func_8033A310_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x8033A3DC: nop

    after_1:
    // 0x8033A3E0: b           L_8033A3F0
    // 0x8033A3E4: nop

        goto L_8033A3F0;
    // 0x8033A3E4: nop

L_8033A3E8:
    // 0x8033A3E8: b           L_8033A3F0
    // 0x8033A3EC: nop

        goto L_8033A3F0;
    // 0x8033A3EC: nop

L_8033A3F0:
    // 0x8033A3F0: b           L_8033A3F8
    // 0x8033A3F4: nop

        goto L_8033A3F8;
    // 0x8033A3F4: nop

L_8033A3F8:
    // 0x8033A3F8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A3FC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x8033A400: jr          $ra
    // 0x8033A404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x8033A404: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80330F18_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330F18: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80330F1C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80330F20: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80330F24: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80330F28: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80330F2C: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80330F30: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80330F34: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80330F38: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80330F3C: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80330F40: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80330F44: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80330F48: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80330F4C: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80330F50: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80330F54: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80330F58: addiu       $a1, $a1, 0x3FB8
    ctx->r5 = ADD32(ctx->r5, 0X3FB8);
    // 0x80330F5C: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80330F60: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80330F64: addiu       $a0, $zero, 0x2
    ctx->r4 = ADD32(0, 0X2);
    // 0x80330F68: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80330F6C: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80330F70: jal         0x80027464
    // 0x80330F74: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80330F74: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80330F78: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x80330F7C: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x80330F80: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330F84: beq         $t1, $at, L_803310C0
    if (ctx->r9 == ctx->r1) {
        // 0x80330F88: nop
    
            goto L_803310C0;
    }
    // 0x80330F88: nop

    // 0x80330F8C: lw          $t2, 0x24($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X24);
    // 0x80330F90: lui         $t4, 0x8015
    ctx->r12 = S32(0X8015 << 16);
    // 0x80330F94: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x80330F98: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330F9C: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x80330FA0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x80330FA4: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x80330FA8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330FAC: lh          $t4, 0x4238($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X4238);
    // 0x80330FB0: nop

    // 0x80330FB4: sw          $t4, 0x20($sp)
    MEM_W(0X20, ctx->r29) = ctx->r12;
    // 0x80330FB8: lw          $t5, 0x24($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X24);
    // 0x80330FBC: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330FC0: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x80330FC4: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330FC8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330FCC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330FD0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x80330FD4: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330FD8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330FDC: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330FE0: swc1        $f4, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f4.u32l;
    // 0x80330FE4: lw          $t8, 0x24($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X24);
    // 0x80330FE8: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80330FEC: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330FF0: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330FF4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330FF8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80330FFC: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331000: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80331004: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331008: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033100C: swc1        $f6, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f6.u32l;
    // 0x80331010: lw          $t6, 0x24($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X24);
    // 0x80331014: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80331018: sll         $t0, $t6, 2
    ctx->r8 = S32(ctx->r14 << 2);
    // 0x8033101C: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x80331020: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331024: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80331028: addu        $t0, $t0, $t6
    ctx->r8 = ADD32(ctx->r8, ctx->r14);
    // 0x8033102C: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x80331030: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331034: addu        $at, $at, $t0
    ctx->r1 = ADD32(ctx->r1, ctx->r8);
    // 0x80331038: swc1        $f8, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f8.u32l;
    // 0x8033103C: lw          $t1, 0x20($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X20);
    // 0x80331040: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80331044: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80331048: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033104C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80331050: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80331054: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331058: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x8033105C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80331060: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80331064: swc1        $f10, 0x415C($at)
    MEM_W(0X415C, ctx->r1) = ctx->f10.u32l;
    // 0x80331068: lw          $t3, 0x20($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X20);
    // 0x8033106C: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x80331070: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80331074: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331078: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x8033107C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80331080: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80331084: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80331088: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033108C: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80331090: swc1        $f16, 0x4160($at)
    MEM_W(0X4160, ctx->r1) = ctx->f16.u32l;
    // 0x80331094: lw          $t5, 0x20($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X20);
    // 0x80331098: lui         $at, 0x3FC0
    ctx->r1 = S32(0X3FC0 << 16);
    // 0x8033109C: sll         $t7, $t5, 2
    ctx->r15 = S32(ctx->r13 << 2);
    // 0x803310A0: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803310A4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803310A8: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803310AC: addu        $t7, $t7, $t5
    ctx->r15 = ADD32(ctx->r15, ctx->r13);
    // 0x803310B0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803310B4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803310B8: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x803310BC: swc1        $f18, 0x4164($at)
    MEM_W(0X4164, ctx->r1) = ctx->f18.u32l;
L_803310C0:
    // 0x803310C0: b           L_803310C8
    // 0x803310C4: nop

        goto L_803310C8;
    // 0x803310C4: nop

L_803310C8:
    // 0x803310C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803310CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x803310D0: jr          $ra
    // 0x803310D4: nop

    return;
    // 0x803310D4: nop

;}
RECOMP_FUNC void func_80337138_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80337138: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033713C: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80337140: nop

    // 0x80337144: bne         $t6, $zero, L_8033717C
    if (ctx->r14 != 0) {
        // 0x80337148: nop
    
            goto L_8033717C;
    }
    // 0x80337148: nop

    // 0x8033714C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80337150: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x80337154: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80337158: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033715C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80337160: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80337164: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80337168: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033716C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80337170: addiu       $t7, $zero, 0x6
    ctx->r15 = ADD32(0, 0X6);
    // 0x80337174: b           L_803371C8
    // 0x80337178: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
        goto L_803371C8;
    // 0x80337178: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
L_8033717C:
    // 0x8033717C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80337180: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80337184: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80337188: bne         $t0, $at, L_803371C0
    if (ctx->r8 != ctx->r1) {
        // 0x8033718C: nop
    
            goto L_803371C0;
    }
    // 0x8033718C: nop

    // 0x80337190: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80337194: lw          $t2, 0x7A60($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X7A60);
    // 0x80337198: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033719C: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803371A0: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803371A4: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803371A8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803371AC: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803371B0: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803371B4: addiu       $t1, $zero, 0x7
    ctx->r9 = ADD32(0, 0X7);
    // 0x803371B8: b           L_803371C8
    // 0x803371BC: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
        goto L_803371C8;
    // 0x803371BC: sh          $t1, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r9;
L_803371C0:
    // 0x803371C0: jr          $ra
    // 0x803371C4: nop

    return;
    // 0x803371C4: nop

L_803371C8:
    // 0x803371C8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x803371CC: lw          $t4, 0x7A60($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A60);
    // 0x803371D0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803371D4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803371D8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803371DC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803371E0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803371E4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803371E8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803371EC: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
    // 0x803371F0: jr          $ra
    // 0x803371F4: nop

    return;
    // 0x803371F4: nop

    // 0x803371F8: jr          $ra
    // 0x803371FC: nop

    return;
    // 0x803371FC: nop

;}
RECOMP_FUNC void func_8033270C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033270C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80332710: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80332714: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80332718: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033271C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80332720: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80332724: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80332728: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033272C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332730: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332734: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80332738: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x8033273C: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80332740: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332744: beq         $s0, $at, L_80332778
    if (ctx->r16 == ctx->r1) {
        // 0x80332748: nop
    
            goto L_80332778;
    }
    // 0x80332748: nop

    // 0x8033274C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80332750: beq         $s0, $at, L_80332788
    if (ctx->r16 == ctx->r1) {
        // 0x80332754: nop
    
            goto L_80332788;
    }
    // 0x80332754: nop

    // 0x80332758: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x8033275C: beq         $s0, $at, L_80332798
    if (ctx->r16 == ctx->r1) {
        // 0x80332760: nop
    
            goto L_80332798;
    }
    // 0x80332760: nop

    // 0x80332764: addiu       $at, $zero, 0x4
    ctx->r1 = ADD32(0, 0X4);
    // 0x80332768: beq         $s0, $at, L_803327A8
    if (ctx->r16 == ctx->r1) {
        // 0x8033276C: nop
    
            goto L_803327A8;
    }
    // 0x8033276C: nop

    // 0x80332770: b           L_803327B8
    // 0x80332774: nop

        goto L_803327B8;
    // 0x80332774: nop

L_80332778:
    // 0x80332778: jal         0x80331E0C
    // 0x8033277C: nop

    func_80331E0C_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x8033277C: nop

    after_0:
    // 0x80332780: b           L_803327C0
    // 0x80332784: nop

        goto L_803327C0;
    // 0x80332784: nop

L_80332788:
    // 0x80332788: jal         0x80331F28
    // 0x8033278C: nop

    func_80331F28_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x8033278C: nop

    after_1:
    // 0x80332790: b           L_803327C0
    // 0x80332794: nop

        goto L_803327C0;
    // 0x80332794: nop

L_80332798:
    // 0x80332798: jal         0x8033252C
    // 0x8033279C: nop

    func_8033252C_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x8033279C: nop

    after_2:
    // 0x803327A0: b           L_803327C0
    // 0x803327A4: nop

        goto L_803327C0;
    // 0x803327A4: nop

L_803327A8:
    // 0x803327A8: jal         0x803326DC
    // 0x803327AC: nop

    func_803326DC_unk_bin_38(rdram, ctx);
        goto after_3;
    // 0x803327AC: nop

    after_3:
    // 0x803327B0: b           L_803327C0
    // 0x803327B4: nop

        goto L_803327C0;
    // 0x803327B4: nop

L_803327B8:
    // 0x803327B8: b           L_803327C0
    // 0x803327BC: nop

        goto L_803327C0;
    // 0x803327BC: nop

L_803327C0:
    // 0x803327C0: b           L_803327C8
    // 0x803327C4: nop

        goto L_803327C8;
    // 0x803327C4: nop

L_803327C8:
    // 0x803327C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x803327CC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x803327D0: jr          $ra
    // 0x803327D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x803327D4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033A0F0_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A0F0: jr          $ra
    // 0x8033A0F4: nop

    return;
    // 0x8033A0F4: nop

    // 0x8033A0F8: jr          $ra
    // 0x8033A0FC: nop

    return;
    // 0x8033A0FC: nop

;}
RECOMP_FUNC void func_803313F8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803313F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x803313FC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331400: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331404: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331408: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x8033140C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331410: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331414: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331418: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033141C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331420: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331424: sw          $t9, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r25;
    // 0x80331428: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033142C: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80331430: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80331434: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80331438: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033143C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80331440: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80331444: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80331448: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x8033144C: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80331450: nop

    // 0x80331454: sw          $t2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r10;
    // 0x80331458: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x8033145C: nop

    // 0x80331460: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80331464: nop

    // 0x80331468: bne         $t4, $zero, L_80331534
    if (ctx->r12 != 0) {
        // 0x8033146C: nop
    
            goto L_80331534;
    }
    // 0x8033146C: nop

    // 0x80331470: lw          $t6, 0x14($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X14);
    // 0x80331474: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80331478: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x8033147C: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80331480: addiu       $t7, $zero, 0x14
    ctx->r15 = ADD32(0, 0X14);
    // 0x80331484: sh          $t7, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = ctx->r15;
    // 0x80331488: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033148C: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x80331490: nop

    // 0x80331494: swc1        $f4, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f4.u32l;
    // 0x80331498: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x8033149C: nop

    // 0x803314A0: lwc1        $f12, 0x2C($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x803314A4: nop

    // 0x803314A8: swc1        $f12, 0x28($t0)
    MEM_W(0X28, ctx->r8) = ctx->f12.u32l;
    // 0x803314AC: lw          $t1, 0x14($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X14);
    // 0x803314B0: nop

    // 0x803314B4: swc1        $f12, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f12.u32l;
    // 0x803314B8: lw          $t2, 0x8($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X8);
    // 0x803314BC: lw          $t4, 0x8($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X8);
    // 0x803314C0: sll         $t3, $t2, 2
    ctx->r11 = S32(ctx->r10 << 2);
    // 0x803314C4: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803314C8: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803314CC: sll         $t3, $t3, 2
    ctx->r11 = S32(ctx->r11 << 2);
    // 0x803314D0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803314D4: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803314D8: addu        $t3, $t3, $t2
    ctx->r11 = ADD32(ctx->r11, ctx->r10);
    // 0x803314DC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803314E0: sll         $t3, $t3, 4
    ctx->r11 = S32(ctx->r11 << 4);
    // 0x803314E4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803314E8: lui         $t6, 0x8015
    ctx->r14 = S32(0X8015 << 16);
    // 0x803314EC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803314F0: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803314F4: addiu       $t6, $t6, 0x4150
    ctx->r14 = ADD32(ctx->r14, 0X4150);
    // 0x803314F8: addu        $at, $at, $t3
    ctx->r1 = ADD32(ctx->r1, ctx->r11);
    // 0x803314FC: addu        $t7, $t5, $t6
    ctx->r15 = ADD32(ctx->r13, ctx->r14);
    // 0x80331500: swc1        $f6, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f6.u32l;
    // 0x80331504: lwc1        $f12, 0x2C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X2C);
    // 0x80331508: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033150C: swc1        $f12, 0x28($t7)
    MEM_W(0X28, ctx->r15) = ctx->f12.u32l;
    // 0x80331510: lw          $t8, 0x8($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X8);
    // 0x80331514: nop

    // 0x80331518: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033151C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331520: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80331524: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80331528: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033152C: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80331530: swc1        $f12, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f12.u32l;
L_80331534:
    // 0x80331534: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x80331538: nop

    // 0x8033153C: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x80331540: nop

    // 0x80331544: bne         $t1, $zero, L_80331564
    if (ctx->r9 != 0) {
        // 0x80331548: nop
    
            goto L_80331564;
    }
    // 0x80331548: nop

    // 0x8033154C: lw          $t3, 0x14($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X14);
    // 0x80331550: addiu       $t2, $zero, 0x3
    ctx->r10 = ADD32(0, 0X3);
    // 0x80331554: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x80331558: lw          $t4, 0x14($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X14);
    // 0x8033155C: b           L_803316B4
    // 0x80331560: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
        goto L_803316B4;
    // 0x80331560: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80331564:
    // 0x80331564: lw          $t5, 0x14($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X14);
    // 0x80331568: nop

    // 0x8033156C: lh          $t6, 0xA6($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA6);
    // 0x80331570: nop

    // 0x80331574: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80331578: sh          $t7, 0xA6($t5)
    MEM_H(0XA6, ctx->r13) = ctx->r15;
    // 0x8033157C: lw          $t8, 0x14($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X14);
    // 0x80331580: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331584: lwc1        $f8, 0xC($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0XC);
    // 0x80331588: lwc1        $f17, -0x5288($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, -0X5288);
    // 0x8033158C: lwc1        $f16, -0x5284($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5284);
    // 0x80331590: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80331594: add.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d + ctx->f16.d;
    // 0x80331598: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x8033159C: swc1        $f4, 0xC($t8)
    MEM_W(0XC, ctx->r24) = ctx->f4.u32l;
    // 0x803315A0: lw          $t9, 0x14($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X14);
    // 0x803315A4: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803315A8: lwc1        $f6, 0x10($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X10);
    // 0x803315AC: lwc1        $f11, -0x5280($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5280);
    // 0x803315B0: lwc1        $f10, -0x527C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X527C);
    // 0x803315B4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803315B8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x803315BC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x803315C0: swc1        $f18, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f18.u32l;
    // 0x803315C4: lw          $t0, 0x14($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X14);
    // 0x803315C8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803315CC: lwc1        $f4, 0x14($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X14);
    // 0x803315D0: lwc1        $f9, -0x5278($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5278);
    // 0x803315D4: lwc1        $f8, -0x5274($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5274);
    // 0x803315D8: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803315DC: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x803315E0: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803315E4: swc1        $f16, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f16.u32l;
    // 0x803315E8: lw          $t1, 0x8($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X8);
    // 0x803315EC: lui         $t3, 0x8015
    ctx->r11 = S32(0X8015 << 16);
    // 0x803315F0: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x803315F4: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x803315F8: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x803315FC: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80331600: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80331604: addiu       $t3, $t3, 0x4150
    ctx->r11 = ADD32(ctx->r11, 0X4150);
    // 0x80331608: addu        $t4, $t2, $t3
    ctx->r12 = ADD32(ctx->r10, ctx->r11);
    // 0x8033160C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331610: lwc1        $f18, 0xC($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0XC);
    // 0x80331614: lwc1        $f7, -0x5270($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5270);
    // 0x80331618: lwc1        $f6, -0x526C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X526C);
    // 0x8033161C: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80331620: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80331624: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80331628: swc1        $f10, 0xC($t4)
    MEM_W(0XC, ctx->r12) = ctx->f10.u32l;
    // 0x8033162C: lw          $t6, 0x8($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X8);
    // 0x80331630: lui         $t5, 0x8015
    ctx->r13 = S32(0X8015 << 16);
    // 0x80331634: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331638: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033163C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331640: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331644: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331648: addiu       $t5, $t5, 0x4150
    ctx->r13 = ADD32(ctx->r13, 0X4150);
    // 0x8033164C: addu        $t8, $t7, $t5
    ctx->r24 = ADD32(ctx->r15, ctx->r13);
    // 0x80331650: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331654: lwc1        $f16, 0x10($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X10);
    // 0x80331658: lwc1        $f5, -0x5268($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5268);
    // 0x8033165C: lwc1        $f4, -0x5264($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5264);
    // 0x80331660: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80331664: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x80331668: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x8033166C: swc1        $f8, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f8.u32l;
    // 0x80331670: lw          $t9, 0x8($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X8);
    // 0x80331674: lui         $t1, 0x8015
    ctx->r9 = S32(0X8015 << 16);
    // 0x80331678: sll         $t0, $t9, 2
    ctx->r8 = S32(ctx->r25 << 2);
    // 0x8033167C: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331680: sll         $t0, $t0, 2
    ctx->r8 = S32(ctx->r8 << 2);
    // 0x80331684: addu        $t0, $t0, $t9
    ctx->r8 = ADD32(ctx->r8, ctx->r25);
    // 0x80331688: sll         $t0, $t0, 4
    ctx->r8 = S32(ctx->r8 << 4);
    // 0x8033168C: addiu       $t1, $t1, 0x4150
    ctx->r9 = ADD32(ctx->r9, 0X4150);
    // 0x80331690: addu        $t2, $t0, $t1
    ctx->r10 = ADD32(ctx->r8, ctx->r9);
    // 0x80331694: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80331698: lwc1        $f10, 0x14($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X14);
    // 0x8033169C: lwc1        $f19, -0x5260($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X5260);
    // 0x803316A0: lwc1        $f18, -0x525C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X525C);
    // 0x803316A4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803316A8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x803316AC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x803316B0: swc1        $f6, 0x14($t2)
    MEM_W(0X14, ctx->r10) = ctx->f6.u32l;
L_803316B4:
    // 0x803316B4: b           L_803316BC
    // 0x803316B8: nop

        goto L_803316BC;
    // 0x803316B8: nop

L_803316BC:
    // 0x803316BC: jr          $ra
    // 0x803316C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    return;
    // 0x803316C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
;}
RECOMP_FUNC void func_80334F84_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334F84: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334F88: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334F8C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80334F90: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80334F94: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334F98: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334F9C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334FA0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334FA4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334FA8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334FAC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334FB0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334FB4: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334FB8: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334FBC: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334FC0: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334FC4: nop

    // 0x80334FC8: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334FCC: nop

    // 0x80334FD0: bne         $t1, $zero, L_80335070
    if (ctx->r9 != 0) {
        // 0x80334FD4: nop
    
            goto L_80335070;
    }
    // 0x80334FD4: nop

    // 0x80334FD8: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334FDC: nop

    // 0x80334FE0: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334FE4: nop

    // 0x80334FE8: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334FEC: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334FF0: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334FF4: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334FF8: nop

    // 0x80334FFC: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80335000: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80335004: nop

    // 0x80335008: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x8033500C: nop

    // 0x80335010: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80335014: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80335018: nop

    // 0x8033501C: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80335020: lw          $t9, 0x2C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X2C);
    // 0x80335024: addiu       $t8, $zero, 0x1E
    ctx->r24 = ADD32(0, 0X1E);
    // 0x80335028: sh          $t8, 0xA6($t9)
    MEM_H(0XA6, ctx->r25) = ctx->r24;
    // 0x8033502C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335030: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80335034: addiu       $t0, $t0, -0x7EF8
    ctx->r8 = ADD32(ctx->r8, -0X7EF8);
    // 0x80335038: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033503C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80335040: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335044: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80335048: jal         0x8001C0EC
    // 0x8033504C: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033504C: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x80335050: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335054: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335058: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x8033505C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335060: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80335064: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335068: jal         0x8001ABF4
    // 0x8033506C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033506C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80335070:
    // 0x80335070: lw          $t1, 0x2C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X2C);
    // 0x80335074: nop

    // 0x80335078: lh          $t3, 0xA6($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA6);
    // 0x8033507C: nop

    // 0x80335080: bne         $t3, $zero, L_803350A0
    if (ctx->r11 != 0) {
        // 0x80335084: nop
    
            goto L_803350A0;
    }
    // 0x80335084: nop

    // 0x80335088: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x8033508C: addiu       $t4, $zero, 0x3
    ctx->r12 = ADD32(0, 0X3);
    // 0x80335090: sh          $t4, 0xA4($t2)
    MEM_H(0XA4, ctx->r10) = ctx->r12;
    // 0x80335094: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80335098: b           L_803350B8
    // 0x8033509C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
        goto L_803350B8;
    // 0x8033509C: sb          $zero, 0x132($t5)
    MEM_B(0X132, ctx->r13) = 0;
L_803350A0:
    // 0x803350A0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803350A4: nop

    // 0x803350A8: lh          $t7, 0xA6($t6)
    ctx->r15 = MEM_H(ctx->r14, 0XA6);
    // 0x803350AC: nop

    // 0x803350B0: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x803350B4: sh          $t8, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r24;
L_803350B8:
    // 0x803350B8: b           L_803350C0
    // 0x803350BC: nop

        goto L_803350C0;
    // 0x803350BC: nop

L_803350C0:
    // 0x803350C0: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x803350C4: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x803350C8: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x803350CC: jr          $ra
    // 0x803350D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x803350D0: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80331D1C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331D1C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80331D20: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80331D24: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80331D28: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80331D2C: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80331D30: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80331D34: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x80331D38: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80331D3C: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80331D40: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80331D44: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x80331D48: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80331D4C: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80331D50: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80331D54: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x80331D58: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80331D5C: addiu       $a1, $a1, 0x4174
    ctx->r5 = ADD32(ctx->r5, 0X4174);
    // 0x80331D60: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80331D64: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x80331D68: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80331D6C: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80331D70: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80331D74: jal         0x80027464
    // 0x80331D78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x80331D78: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x80331D7C: b           L_80331D84
    // 0x80331D80: nop

        goto L_80331D84;
    // 0x80331D80: nop

L_80331D84:
    // 0x80331D84: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80331D88: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80331D8C: jr          $ra
    // 0x80331D90: nop

    return;
    // 0x80331D90: nop

;}
RECOMP_FUNC void func_803328E8_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803328E8: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x803328EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803328F0: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803328F4: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803328F8: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803328FC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332900: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80332904: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80332908: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x8033290C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80332910: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80332914: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80332918: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033291C: lw          $t0, 0x7A64($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A64);
    // 0x80332920: nop

    // 0x80332924: bne         $t0, $zero, L_80332948
    if (ctx->r8 != 0) {
        // 0x80332928: nop
    
            goto L_80332948;
    }
    // 0x80332928: nop

    // 0x8033292C: lw          $t1, 0x4($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X4);
    // 0x80332930: nop

    // 0x80332934: sb          $zero, 0x132($t1)
    MEM_B(0X132, ctx->r9) = 0;
    // 0x80332938: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x8033293C: addiu       $t2, $zero, 0x4
    ctx->r10 = ADD32(0, 0X4);
    // 0x80332940: b           L_80332980
    // 0x80332944: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
        goto L_80332980;
    // 0x80332944: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
L_80332948:
    // 0x80332948: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8033294C: lw          $t4, 0x7A64($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X7A64);
    // 0x80332950: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332954: bne         $t4, $at, L_80332980
    if (ctx->r12 != ctx->r1) {
        // 0x80332958: nop
    
            goto L_80332980;
    }
    // 0x80332958: nop

    // 0x8033295C: lw          $t5, 0x4($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X4);
    // 0x80332960: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80332964: lh          $t6, 0x108($t5)
    ctx->r14 = MEM_H(ctx->r13, 0X108);
    // 0x80332968: nop

    // 0x8033296C: bne         $t6, $at, L_80332980
    if (ctx->r14 != ctx->r1) {
        // 0x80332970: nop
    
            goto L_80332980;
    }
    // 0x80332970: nop

    // 0x80332974: lw          $t8, 0x4($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X4);
    // 0x80332978: addiu       $t7, $zero, 0x32
    ctx->r15 = ADD32(0, 0X32);
    // 0x8033297C: sh          $t7, 0x108($t8)
    MEM_H(0X108, ctx->r24) = ctx->r15;
L_80332980:
    // 0x80332980: b           L_80332988
    // 0x80332984: nop

        goto L_80332988;
    // 0x80332984: nop

L_80332988:
    // 0x80332988: jr          $ra
    // 0x8033298C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x8033298C: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80335540_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335540: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335544: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335548: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x8033554C: lw          $t6, 0x5100($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X5100);
    // 0x80335550: lui         $a1, 0x8011
    ctx->r5 = S32(0X8011 << 16);
    // 0x80335554: lh          $t9, 0x6($t6)
    ctx->r25 = MEM_H(ctx->r14, 0X6);
    // 0x80335558: lh          $t7, 0x2($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X2);
    // 0x8033555C: mtc1        $t9, $f8
    ctx->f8.u32l = ctx->r25;
    // 0x80335560: lh          $t8, 0x4($t6)
    ctx->r24 = MEM_H(ctx->r14, 0X4);
    // 0x80335564: cvt.s.w     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.fl = CVT_S_W(ctx->f8.u32l);
    // 0x80335568: mtc1        $t7, $f4
    ctx->f4.u32l = ctx->r15;
    // 0x8033556C: mtc1        $t8, $f6
    ctx->f6.u32l = ctx->r24;
    // 0x80335570: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x80335574: lh          $t0, 0x8($t6)
    ctx->r8 = MEM_H(ctx->r14, 0X8);
    // 0x80335578: cvt.s.w     $f4, $f4
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 4);
    ctx->f4.fl = CVT_S_W(ctx->f4.u32l);
    // 0x8033557C: mtc1        $t0, $f16
    ctx->f16.u32l = ctx->r8;
    // 0x80335580: addiu       $a1, $a1, 0x3F40
    ctx->r5 = ADD32(ctx->r5, 0X3F40);
    // 0x80335584: cvt.s.w     $f6, $f6
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 6);
    ctx->f6.fl = CVT_S_W(ctx->f6.u32l);
    // 0x80335588: mfc1        $a2, $f4
    ctx->r6 = (int32_t)ctx->f4.u32l;
    // 0x8033558C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80335590: cvt.s.w     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    ctx->f18.fl = CVT_S_W(ctx->f16.u32l);
    // 0x80335594: mfc1        $a3, $f6
    ctx->r7 = (int32_t)ctx->f6.u32l;
    // 0x80335598: jal         0x80027464
    // 0x8033559C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_80027464(rdram, ctx);
        goto after_0;
    // 0x8033559C: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_0:
    // 0x803355A0: sw          $v0, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r2;
    // 0x803355A4: lw          $t1, 0x24($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X24);
    // 0x803355A8: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x803355AC: beq         $t1, $at, L_80335608
    if (ctx->r9 == ctx->r1) {
        // 0x803355B0: nop
    
            goto L_80335608;
    }
    // 0x803355B0: nop

    // 0x803355B4: lw          $t4, 0x24($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X24);
    // 0x803355B8: lui         $t2, 0x8016
    ctx->r10 = S32(0X8016 << 16);
    // 0x803355BC: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x803355C0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803355C4: lw          $t2, 0x5100($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X5100);
    // 0x803355C8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x803355CC: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x803355D0: lh          $t3, 0xA($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA);
    // 0x803355D4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x803355D8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803355DC: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x803355E0: sh          $t3, 0x4206($at)
    MEM_H(0X4206, ctx->r1) = ctx->r11;
    // 0x803355E4: lw          $t7, 0x24($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X24);
    // 0x803355E8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x803355EC: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x803355F0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803355F4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x803355F8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803355FC: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80335600: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80335604: sh          $zero, 0x4208($at)
    MEM_H(0X4208, ctx->r1) = 0;
L_80335608:
    // 0x80335608: b           L_80335610
    // 0x8033560C: nop

        goto L_80335610;
    // 0x8033560C: nop

L_80335610:
    // 0x80335610: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335614: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80335618: jr          $ra
    // 0x8033561C: nop

    return;
    // 0x8033561C: nop

;}
RECOMP_FUNC void func_80336A00_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A00: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80336A04: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80336A08: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336A0C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336A10: jal         0x8001BB34
    // 0x80336A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80336A14: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80336A18: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80336A1C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80336A20: jal         0x8002B0E4
    // 0x80336A24: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80336A24: nop

    after_1:
    // 0x80336A28: b           L_80336A30
    // 0x80336A2C: nop

        goto L_80336A30;
    // 0x80336A2C: nop

L_80336A30:
    // 0x80336A30: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80336A34: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80336A38: jr          $ra
    // 0x80336A3C: nop

    return;
    // 0x80336A3C: nop

;}
RECOMP_FUNC void func_8033A010_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A010: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x8033A014: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8033A018: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A01C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A020: jal         0x8002B0E4
    // 0x8033A024: nop

    func_8002B0E4(rdram, ctx);
        goto after_0;
    // 0x8033A024: nop

    after_0:
    // 0x8033A028: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A02C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A030: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8033A034: addiu       $a2, $zero, 0x67
    ctx->r6 = ADD32(0, 0X67);
    // 0x8033A038: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8033A03C: jal         0x800175F0
    // 0x8033A040: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800175F0(rdram, ctx);
        goto after_1;
    // 0x8033A040: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8033A044: b           L_8033A04C
    // 0x8033A048: nop

        goto L_8033A04C;
    // 0x8033A048: nop

L_8033A04C:
    // 0x8033A04C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8033A050: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x8033A054: jr          $ra
    // 0x8033A058: nop

    return;
    // 0x8033A058: nop

;}
RECOMP_FUNC void func_80335C48_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335C48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80335C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80335C50: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x80335C54: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80335C58: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335C5C: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x80335C60: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335C64: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335C68: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335C6C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335C70: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335C74: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x80335C78: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x80335C7C: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335C80: beq         $s0, $at, L_80335CA8
    if (ctx->r16 == ctx->r1) {
        // 0x80335C84: nop
    
            goto L_80335CA8;
    }
    // 0x80335C84: nop

    // 0x80335C88: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80335C8C: beq         $s0, $at, L_80335CB8
    if (ctx->r16 == ctx->r1) {
        // 0x80335C90: nop
    
            goto L_80335CB8;
    }
    // 0x80335C90: nop

    // 0x80335C94: addiu       $at, $zero, 0x3
    ctx->r1 = ADD32(0, 0X3);
    // 0x80335C98: beq         $s0, $at, L_80335CC8
    if (ctx->r16 == ctx->r1) {
        // 0x80335C9C: nop
    
            goto L_80335CC8;
    }
    // 0x80335C9C: nop

    // 0x80335CA0: b           L_80335CD8
    // 0x80335CA4: nop

        goto L_80335CD8;
    // 0x80335CA4: nop

L_80335CA8:
    // 0x80335CA8: jal         0x80335630
    // 0x80335CAC: nop

    func_80335630_unk_bin_38(rdram, ctx);
        goto after_0;
    // 0x80335CAC: nop

    after_0:
    // 0x80335CB0: b           L_80335CE0
    // 0x80335CB4: nop

        goto L_80335CE0;
    // 0x80335CB4: nop

L_80335CB8:
    // 0x80335CB8: jal         0x80335758
    // 0x80335CBC: nop

    func_80335758_unk_bin_38(rdram, ctx);
        goto after_1;
    // 0x80335CBC: nop

    after_1:
    // 0x80335CC0: b           L_80335CE0
    // 0x80335CC4: nop

        goto L_80335CE0;
    // 0x80335CC4: nop

L_80335CC8:
    // 0x80335CC8: jal         0x80335A70
    // 0x80335CCC: nop

    func_80335A70_unk_bin_38(rdram, ctx);
        goto after_2;
    // 0x80335CCC: nop

    after_2:
    // 0x80335CD0: b           L_80335CE0
    // 0x80335CD4: nop

        goto L_80335CE0;
    // 0x80335CD4: nop

L_80335CD8:
    // 0x80335CD8: b           L_80335CE0
    // 0x80335CDC: nop

        goto L_80335CE0;
    // 0x80335CDC: nop

L_80335CE0:
    // 0x80335CE0: b           L_80335CE8
    // 0x80335CE4: nop

        goto L_80335CE8;
    // 0x80335CE4: nop

L_80335CE8:
    // 0x80335CE8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80335CEC: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80335CF0: jr          $ra
    // 0x80335CF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80335CF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_80335758_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335758: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x8033575C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80335760: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80335764: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80335768: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033576C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80335770: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80335774: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80335778: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033577C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80335780: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80335784: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80335788: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033578C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80335790: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80335794: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80335798: nop

    // 0x8033579C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x803357A0: nop

    // 0x803357A4: bne         $t1, $zero, L_80335850
    if (ctx->r9 != 0) {
        // 0x803357A8: nop
    
            goto L_80335850;
    }
    // 0x803357A8: nop

    // 0x803357AC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803357B0: nop

    // 0x803357B4: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x803357B8: nop

    // 0x803357BC: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x803357C0: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x803357C4: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803357C8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803357CC: nop

    // 0x803357D0: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x803357D4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803357D8: nop

    // 0x803357DC: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x803357E0: nop

    // 0x803357E4: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x803357E8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803357EC: nop

    // 0x803357F0: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x803357F4: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803357F8: nop

    // 0x803357FC: sh          $zero, 0xA6($t8)
    MEM_H(0XA6, ctx->r24) = 0;
    // 0x80335800: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80335804: nop

    // 0x80335808: sh          $zero, 0xA8($t9)
    MEM_H(0XA8, ctx->r25) = 0;
    // 0x8033580C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335810: lui         $t0, 0x8012
    ctx->r8 = S32(0X8012 << 16);
    // 0x80335814: addiu       $t0, $t0, -0x7EF8
    ctx->r8 = ADD32(ctx->r8, -0X7EF8);
    // 0x80335818: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033581C: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x80335820: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335824: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    // 0x80335828: jal         0x8001C0EC
    // 0x8033582C: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8033582C: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x80335830: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80335834: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80335838: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x8033583C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335840: addiu       $a3, $a3, 0x1C
    ctx->r7 = ADD32(ctx->r7, 0X1C);
    // 0x80335844: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80335848: jal         0x8001ABF4
    // 0x8033584C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x8033584C: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80335850:
    // 0x80335850: sw          $zero, 0x38($sp)
    MEM_W(0X38, ctx->r29) = 0;
    // 0x80335854: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80335858: lui         $at, 0x4100
    ctx->r1 = S32(0X4100 << 16);
    // 0x8033585C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80335860: lwc1        $f12, 0x1C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80335864: jal         0x80015538
    // 0x80335868: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80335868: nop

    after_2:
    // 0x8033586C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80335870: nop

    // 0x80335874: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x80335878: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033587C: nop

    // 0x80335880: lh          $t2, 0xB6($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XB6);
    // 0x80335884: nop

    // 0x80335888: bne         $t2, $zero, L_803358F4
    if (ctx->r10 != 0) {
        // 0x8033588C: nop
    
            goto L_803358F4;
    }
    // 0x8033588C: nop

    // 0x80335890: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80335894: nop

    // 0x80335898: lh          $t6, 0xA8($t5)
    ctx->r14 = MEM_H(ctx->r13, 0XA8);
    // 0x8033589C: nop

    // 0x803358A0: addiu       $t7, $t6, 0x1
    ctx->r15 = ADD32(ctx->r14, 0X1);
    // 0x803358A4: sh          $t7, 0xA8($t5)
    MEM_H(0XA8, ctx->r13) = ctx->r15;
    // 0x803358A8: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803358AC: nop

    // 0x803358B0: lh          $t9, 0xA8($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA8);
    // 0x803358B4: nop

    // 0x803358B8: slti        $at, $t9, 0xA
    ctx->r1 = SIGNED(ctx->r25) < 0XA ? 1 : 0;
    // 0x803358BC: bne         $at, $zero, L_803358D0
    if (ctx->r1 != 0) {
        // 0x803358C0: nop
    
            goto L_803358D0;
    }
    // 0x803358C0: nop

    // 0x803358C4: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803358C8: addiu       $t0, $zero, 0xA
    ctx->r8 = ADD32(0, 0XA);
    // 0x803358CC: sh          $t0, 0xA8($t1)
    MEM_H(0XA8, ctx->r9) = ctx->r8;
L_803358D0:
    // 0x803358D0: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803358D4: nop

    // 0x803358D8: lh          $t4, 0xA8($t3)
    ctx->r12 = MEM_H(ctx->r11, 0XA8);
    // 0x803358DC: nop

    // 0x803358E0: mtc1        $t4, $f6
    ctx->f6.u32l = ctx->r12;
    // 0x803358E4: nop

    // 0x803358E8: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x803358EC: b           L_80335954
    // 0x803358F0: swc1        $f8, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f8.u32l;
        goto L_80335954;
    // 0x803358F0: swc1        $f8, 0x28($t3)
    MEM_W(0X28, ctx->r11) = ctx->f8.u32l;
L_803358F4:
    // 0x803358F4: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803358F8: nop

    // 0x803358FC: lh          $t6, 0xA8($t2)
    ctx->r14 = MEM_H(ctx->r10, 0XA8);
    // 0x80335900: nop

    // 0x80335904: addiu       $t7, $t6, -0x1
    ctx->r15 = ADD32(ctx->r14, -0X1);
    // 0x80335908: sh          $t7, 0xA8($t2)
    MEM_H(0XA8, ctx->r10) = ctx->r15;
    // 0x8033590C: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x80335910: nop

    // 0x80335914: lh          $t8, 0xA8($t5)
    ctx->r24 = MEM_H(ctx->r13, 0XA8);
    // 0x80335918: nop

    // 0x8033591C: slti        $at, $t8, -0x9
    ctx->r1 = SIGNED(ctx->r24) < -0X9 ? 1 : 0;
    // 0x80335920: beq         $at, $zero, L_80335934
    if (ctx->r1 == 0) {
        // 0x80335924: nop
    
            goto L_80335934;
    }
    // 0x80335924: nop

    // 0x80335928: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x8033592C: addiu       $t9, $zero, -0xA
    ctx->r25 = ADD32(0, -0XA);
    // 0x80335930: sh          $t9, 0xA8($t0)
    MEM_H(0XA8, ctx->r8) = ctx->r25;
L_80335934:
    // 0x80335934: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80335938: nop

    // 0x8033593C: lh          $t4, 0xA8($t1)
    ctx->r12 = MEM_H(ctx->r9, 0XA8);
    // 0x80335940: nop

    // 0x80335944: mtc1        $t4, $f10
    ctx->f10.u32l = ctx->r12;
    // 0x80335948: nop

    // 0x8033594C: cvt.s.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.fl = CVT_S_W(ctx->f10.u32l);
    // 0x80335950: swc1        $f16, 0x28($t1)
    MEM_W(0X28, ctx->r9) = ctx->f16.u32l;
L_80335954:
    // 0x80335954: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80335958: nop

    // 0x8033595C: lh          $t6, 0xB6($t3)
    ctx->r14 = MEM_H(ctx->r11, 0XB6);
    // 0x80335960: nop

    // 0x80335964: bne         $t6, $zero, L_803359A8
    if (ctx->r14 != 0) {
        // 0x80335968: nop
    
            goto L_803359A8;
    }
    // 0x80335968: nop

    // 0x8033596C: lui         $at, 0x42C8
    ctx->r1 = S32(0X42C8 << 16);
    // 0x80335970: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80335974: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80335978: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033597C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80335980: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80335984: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x80335988: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x8033598C: swc1        $f18, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f18.u32l;
    // 0x80335990: jal         0x800295C0
    // 0x80335994: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    func_800295C0(rdram, ctx);
        goto after_3;
    // 0x80335994: swc1        $f4, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f4.u32l;
    after_3:
    // 0x80335998: beq         $v0, $zero, L_803359A8
    if (ctx->r2 == 0) {
        // 0x8033599C: nop
    
            goto L_803359A8;
    }
    // 0x8033599C: nop

    // 0x803359A0: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x803359A4: sw          $t7, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r15;
L_803359A8:
    // 0x803359A8: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803359AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803359B0: lh          $t5, 0xB6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XB6);
    // 0x803359B4: nop

    // 0x803359B8: bne         $t5, $at, L_803359FC
    if (ctx->r13 != ctx->r1) {
        // 0x803359BC: nop
    
            goto L_803359FC;
    }
    // 0x803359BC: nop

    // 0x803359C0: lui         $at, 0xC2C8
    ctx->r1 = S32(0XC2C8 << 16);
    // 0x803359C4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803359C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803359CC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803359D0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803359D4: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x803359D8: addiu       $a2, $sp, 0x30
    ctx->r6 = ADD32(ctx->r29, 0X30);
    // 0x803359DC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803359E0: swc1        $f6, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f6.u32l;
    // 0x803359E4: jal         0x800295C0
    // 0x803359E8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    func_800295C0(rdram, ctx);
        goto after_4;
    // 0x803359E8: swc1        $f8, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f8.u32l;
    after_4:
    // 0x803359EC: beq         $v0, $zero, L_803359FC
    if (ctx->r2 == 0) {
        // 0x803359F0: nop
    
            goto L_803359FC;
    }
    // 0x803359F0: nop

    // 0x803359F4: addiu       $t8, $zero, 0x1
    ctx->r24 = ADD32(0, 0X1);
    // 0x803359F8: sw          $t8, 0x38($sp)
    MEM_W(0X38, ctx->r29) = ctx->r24;
L_803359FC:
    // 0x803359FC: lw          $t9, 0x38($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X38);
    // 0x80335A00: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80335A04: bne         $t9, $at, L_80335A54
    if (ctx->r25 != ctx->r1) {
        // 0x80335A08: nop
    
            goto L_80335A54;
    }
    // 0x80335A08: nop

    // 0x80335A0C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80335A10: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80335A14: nop

    // 0x80335A18: swc1        $f10, 0x2C($t0)
    MEM_W(0X2C, ctx->r8) = ctx->f10.u32l;
    // 0x80335A1C: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80335A20: nop

    // 0x80335A24: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x80335A28: nop

    // 0x80335A2C: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x80335A30: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80335A34: nop

    // 0x80335A38: swc1        $f20, 0x24($t1)
    MEM_W(0X24, ctx->r9) = ctx->f20.u32l;
    // 0x80335A3C: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80335A40: addiu       $t3, $zero, 0x3
    ctx->r11 = ADD32(0, 0X3);
    // 0x80335A44: sh          $t3, 0xA4($t6)
    MEM_H(0XA4, ctx->r14) = ctx->r11;
    // 0x80335A48: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80335A4C: nop

    // 0x80335A50: sb          $zero, 0x132($t7)
    MEM_B(0X132, ctx->r15) = 0;
L_80335A54:
    // 0x80335A54: b           L_80335A5C
    // 0x80335A58: nop

        goto L_80335A5C;
    // 0x80335A58: nop

L_80335A5C:
    // 0x80335A5C: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80335A60: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80335A64: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80335A68: jr          $ra
    // 0x80335A6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80335A6C: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_8033A934_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A934: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8033A938: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x8033A93C: nop

    // 0x8033A940: bne         $t6, $zero, L_8033A99C
    if (ctx->r14 != 0) {
        // 0x8033A944: nop
    
            goto L_8033A99C;
    }
    // 0x8033A944: nop

    // 0x8033A948: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8033A94C: lw          $t8, 0x7A60($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X7A60);
    // 0x8033A950: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A954: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x8033A958: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033A95C: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x8033A960: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x8033A964: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x8033A968: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x8033A96C: addiu       $t7, $zero, 0x64
    ctx->r15 = ADD32(0, 0X64);
    // 0x8033A970: sh          $t7, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r15;
    // 0x8033A974: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x8033A978: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x8033A97C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x8033A980: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x8033A984: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A988: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x8033A98C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x8033A990: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033A994: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x8033A998: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_8033A99C:
    // 0x8033A99C: jr          $ra
    // 0x8033A9A0: nop

    return;
    // 0x8033A9A0: nop

    // 0x8033A9A4: jr          $ra
    // 0x8033A9A8: nop

    return;
    // 0x8033A9A8: nop

;}
RECOMP_FUNC void stub_8033562C(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80335620: jr          $ra
    // 0x80335624: nop

    return;
    // 0x80335624: nop

    // 0x80335628: jr          $ra
    // 0x8033562C: nop

    return;
    // 0x8033562C: nop

;}
RECOMP_FUNC void func_803376F0_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803376F0: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x803376F4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x803376F8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803376FC: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80337700: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80337704: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80337708: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x8033770C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80337710: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80337714: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80337718: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x8033771C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80337720: sw          $t9, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r25;
    // 0x80337724: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x80337728: nop

    // 0x8033772C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80337730: nop

    // 0x80337734: bne         $t1, $zero, L_80337774
    if (ctx->r9 != 0) {
        // 0x80337738: nop
    
            goto L_80337774;
    }
    // 0x80337738: nop

    // 0x8033773C: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x80337740: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80337744: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
    // 0x80337748: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8033774C: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x80337750: nop

    // 0x80337754: swc1        $f4, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f4.u32l;
    // 0x80337758: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8033775C: lw          $t5, 0x1C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X1C);
    // 0x80337760: nop

    // 0x80337764: swc1        $f6, 0x48($t5)
    MEM_W(0X48, ctx->r13) = ctx->f6.u32l;
    // 0x80337768: lw          $t6, 0x1C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X1C);
    // 0x8033776C: nop

    // 0x80337770: sh          $zero, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = 0;
L_80337774:
    // 0x80337774: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337778: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033777C: jal         0x80029C40
    // 0x80337780: nop

    func_80029C40(rdram, ctx);
        goto after_0;
    // 0x80337780: nop

    after_0:
    // 0x80337784: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80337788: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033778C: jal         0x80029D04
    // 0x80337790: nop

    func_80029D04(rdram, ctx);
        goto after_1;
    // 0x80337790: nop

    after_1:
    // 0x80337794: lw          $t7, 0x1C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X1C);
    // 0x80337798: nop

    // 0x8033779C: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x803377A0: nop

    // 0x803377A4: addiu       $t9, $t8, 0x1
    ctx->r25 = ADD32(ctx->r24, 0X1);
    // 0x803377A8: sh          $t9, 0xA6($t7)
    MEM_H(0XA6, ctx->r15) = ctx->r25;
    // 0x803377AC: lw          $t0, 0x1C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X1C);
    // 0x803377B0: nop

    // 0x803377B4: lh          $t1, 0xA6($t0)
    ctx->r9 = MEM_H(ctx->r8, 0XA6);
    // 0x803377B8: nop

    // 0x803377BC: slti        $at, $t1, 0x46
    ctx->r1 = SIGNED(ctx->r9) < 0X46 ? 1 : 0;
    // 0x803377C0: bne         $at, $zero, L_803377E0
    if (ctx->r1 != 0) {
        // 0x803377C4: nop
    
            goto L_803377E0;
    }
    // 0x803377C4: nop

    // 0x803377C8: lw          $t3, 0x1C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X1C);
    // 0x803377CC: addiu       $t2, $zero, 0x2
    ctx->r10 = ADD32(0, 0X2);
    // 0x803377D0: sh          $t2, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r10;
    // 0x803377D4: lw          $t4, 0x1C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X1C);
    // 0x803377D8: nop

    // 0x803377DC: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_803377E0:
    // 0x803377E0: b           L_803377E8
    // 0x803377E4: nop

        goto L_803377E8;
    // 0x803377E4: nop

L_803377E8:
    // 0x803377E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803377EC: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x803377F0: jr          $ra
    // 0x803377F4: nop

    return;
    // 0x803377F4: nop

;}
RECOMP_FUNC void func_80330E30_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80330E30: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80330E34: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80330E38: lw          $t6, 0x7A64($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A64);
    // 0x80330E3C: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80330E40: bne         $t6, $at, L_80330EF8
    if (ctx->r14 != ctx->r1) {
        // 0x80330E44: nop
    
            goto L_80330EF8;
    }
    // 0x80330E44: nop

    // 0x80330E48: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80330E4C: lw          $t7, 0x7A60($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X7A60);
    // 0x80330E50: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80330E54: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330E58: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330E5C: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330E60: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330E64: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330E68: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330E6C: lh          $t9, 0x4236($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X4236);
    // 0x80330E70: addiu       $at, $zero, -0x1
    ctx->r1 = ADD32(0, -0X1);
    // 0x80330E74: beq         $t9, $at, L_80330EF8
    if (ctx->r25 == ctx->r1) {
        // 0x80330E78: nop
    
            goto L_80330EF8;
    }
    // 0x80330E78: nop

    // 0x80330E7C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80330E80: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x80330E84: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x80330E88: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330E8C: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330E90: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330E94: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330E98: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330E9C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330EA0: lh          $t2, 0x4236($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4236);
    // 0x80330EA4: nop

    // 0x80330EA8: sw          $t2, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r10;
    // 0x80330EAC: lw          $t4, 0x4($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X4);
    // 0x80330EB0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EB4: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330EB8: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330EBC: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330EC0: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330EC4: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330EC8: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330ECC: addiu       $t3, $zero, 0x2
    ctx->r11 = ADD32(0, 0X2);
    // 0x80330ED0: sh          $t3, 0x41F4($at)
    MEM_H(0X41F4, ctx->r1) = ctx->r11;
    // 0x80330ED4: lw          $t6, 0x4($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X4);
    // 0x80330ED8: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330EDC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80330EE0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EE4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80330EE8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80330EEC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80330EF0: addu        $at, $at, $t7
    ctx->r1 = ADD32(ctx->r1, ctx->r15);
    // 0x80330EF4: sb          $zero, 0x4282($at)
    MEM_B(0X4282, ctx->r1) = 0;
L_80330EF8:
    // 0x80330EF8: b           L_80330F00
    // 0x80330EFC: nop

        goto L_80330F00;
    // 0x80330EFC: nop

L_80330F00:
    // 0x80330F00: jr          $ra
    // 0x80330F04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80330F04: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80334E2C_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80334E2C: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80334E30: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80334E34: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80334E38: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80334E3C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80334E40: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80334E44: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80334E48: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80334E4C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E50: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80334E54: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80334E58: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80334E5C: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80334E60: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80334E64: sw          $t9, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r25;
    // 0x80334E68: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334E6C: nop

    // 0x80334E70: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80334E74: nop

    // 0x80334E78: bne         $t1, $zero, L_80334F08
    if (ctx->r9 != 0) {
        // 0x80334E7C: nop
    
            goto L_80334F08;
    }
    // 0x80334E7C: nop

    // 0x80334E80: lw          $t2, 0x2C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X2C);
    // 0x80334E84: nop

    // 0x80334E88: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80334E8C: nop

    // 0x80334E90: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80334E94: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80334E98: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80334E9C: lw          $t5, 0x2C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X2C);
    // 0x80334EA0: nop

    // 0x80334EA4: swc1        $f4, 0x2C($t5)
    MEM_W(0X2C, ctx->r13) = ctx->f4.u32l;
    // 0x80334EA8: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x80334EAC: nop

    // 0x80334EB0: lwc1        $f20, 0x2C($t6)
    ctx->f20.u32l = MEM_W(ctx->r14, 0X2C);
    // 0x80334EB4: nop

    // 0x80334EB8: swc1        $f20, 0x28($t6)
    MEM_W(0X28, ctx->r14) = ctx->f20.u32l;
    // 0x80334EBC: lw          $t7, 0x2C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X2C);
    // 0x80334EC0: nop

    // 0x80334EC4: swc1        $f20, 0x24($t7)
    MEM_W(0X24, ctx->r15) = ctx->f20.u32l;
    // 0x80334EC8: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334ECC: lui         $t8, 0x8012
    ctx->r24 = S32(0X8012 << 16);
    // 0x80334ED0: addiu       $t8, $t8, -0x7EF8
    ctx->r24 = ADD32(ctx->r24, -0X7EF8);
    // 0x80334ED4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334ED8: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80334EDC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334EE0: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80334EE4: jal         0x8001C0EC
    // 0x80334EE8: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80334EE8: addiu       $a3, $zero, 0x55
    ctx->r7 = ADD32(0, 0X55);
    after_0:
    // 0x80334EEC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334EF0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334EF4: lui         $a3, 0x8012
    ctx->r7 = S32(0X8012 << 16);
    // 0x80334EF8: addiu       $a3, $a3, -0x7EC8
    ctx->r7 = ADD32(ctx->r7, -0X7EC8);
    // 0x80334EFC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80334F00: jal         0x8001ABF4
    // 0x80334F04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_1;
    // 0x80334F04: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
L_80334F08:
    // 0x80334F08: lw          $t0, 0x2C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X2C);
    // 0x80334F0C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80334F10: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80334F14: lwc1        $f8, 0x4($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X4);
    // 0x80334F18: lui         $t9, 0x8015
    ctx->r25 = S32(0X8015 << 16);
    // 0x80334F1C: addiu       $t9, $t9, 0x4150
    ctx->r25 = ADD32(ctx->r25, 0X4150);
    // 0x80334F20: lwc1        $f6, 0x4($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X4);
    // 0x80334F24: sub.s       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f16.fl = ctx->f8.fl - ctx->f10.fl;
    // 0x80334F28: c.lt.s      $f6, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f6.fl < ctx->f16.fl;
    // 0x80334F2C: nop

    // 0x80334F30: bc1f        L_80334F68
    if (!c1cs) {
        // 0x80334F34: nop
    
            goto L_80334F68;
    }
    // 0x80334F34: nop

    // 0x80334F38: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80334F3C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80334F40: jal         0x8002A2EC
    // 0x80334F44: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    func_8002A2EC(rdram, ctx);
        goto after_2;
    // 0x80334F44: lui         $a1, 0x43D2
    ctx->r5 = S32(0X43D2 << 16);
    after_2:
    // 0x80334F48: beq         $v0, $zero, L_80334F68
    if (ctx->r2 == 0) {
        // 0x80334F4C: nop
    
            goto L_80334F68;
    }
    // 0x80334F4C: nop

    // 0x80334F50: lw          $t3, 0x2C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X2C);
    // 0x80334F54: addiu       $t1, $zero, 0x2
    ctx->r9 = ADD32(0, 0X2);
    // 0x80334F58: sh          $t1, 0xA4($t3)
    MEM_H(0XA4, ctx->r11) = ctx->r9;
    // 0x80334F5C: lw          $t4, 0x2C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X2C);
    // 0x80334F60: nop

    // 0x80334F64: sb          $zero, 0x132($t4)
    MEM_B(0X132, ctx->r12) = 0;
L_80334F68:
    // 0x80334F68: b           L_80334F70
    // 0x80334F6C: nop

        goto L_80334F70;
    // 0x80334F6C: nop

L_80334F70:
    // 0x80334F70: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80334F74: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80334F78: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80334F7C: jr          $ra
    // 0x80334F80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80334F80: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_803307B0_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803307B0: addiu       $sp, $sp, -0x48
    ctx->r29 = ADD32(ctx->r29, -0X48);
    // 0x803307B4: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x803307B8: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x803307BC: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x803307C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803307C4: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803307C8: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x803307CC: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803307D0: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307D4: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803307D8: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803307DC: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803307E0: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x803307E4: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x803307E8: sw          $t9, 0x44($sp)
    MEM_W(0X44, ctx->r29) = ctx->r25;
    // 0x803307EC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x803307F0: lw          $t0, 0x7A60($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X7A60);
    // 0x803307F4: lui         $t2, 0x8015
    ctx->r10 = S32(0X8015 << 16);
    // 0x803307F8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x803307FC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330800: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330804: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330808: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x8033080C: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330810: lh          $t2, 0x4238($t2)
    ctx->r10 = MEM_H(ctx->r10, 0X4238);
    // 0x80330814: nop

    // 0x80330818: sw          $t2, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r10;
    // 0x8033081C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80330820: nop

    // 0x80330824: lbu         $t4, 0x132($t3)
    ctx->r12 = MEM_BU(ctx->r11, 0X132);
    // 0x80330828: nop

    // 0x8033082C: bne         $t4, $zero, L_80330878
    if (ctx->r12 != 0) {
        // 0x80330830: nop
    
            goto L_80330878;
    }
    // 0x80330830: nop

    // 0x80330834: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80330838: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x8033083C: sb          $t5, 0x132($t6)
    MEM_B(0X132, ctx->r14) = ctx->r13;
    // 0x80330840: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80330844: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80330848: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x8033084C: nop

    // 0x80330850: swc1        $f4, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f4.u32l;
    // 0x80330854: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80330858: nop

    // 0x8033085C: lwc1        $f6, 0x1C($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80330860: nop

    // 0x80330864: swc1        $f6, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f6.u32l;
    // 0x80330868: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8033086C: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80330870: nop

    // 0x80330874: swc1        $f8, 0x40($t9)
    MEM_W(0X40, ctx->r25) = ctx->f8.u32l;
L_80330878:
    // 0x80330878: sw          $zero, 0x40($sp)
    MEM_W(0X40, ctx->r29) = 0;
    // 0x8033087C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330880: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330884: jal         0x80028FA0
    // 0x80330888: nop

    func_80028FA0(rdram, ctx);
        goto after_0;
    // 0x80330888: nop

    after_0:
    // 0x8033088C: beq         $v0, $zero, L_8033089C
    if (ctx->r2 == 0) {
        // 0x80330890: nop
    
            goto L_8033089C;
    }
    // 0x80330890: nop

    // 0x80330894: addiu       $t0, $zero, 0x1
    ctx->r8 = ADD32(0, 0X1);
    // 0x80330898: sw          $t0, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r8;
L_8033089C:
    // 0x8033089C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x803308A0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x803308A4: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x803308A8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x803308AC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x803308B0: lwc1        $f18, 0x8($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X8);
    // 0x803308B4: lwc1        $f10, 0x0($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X0);
    // 0x803308B8: lwc1        $f16, 0x0($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X0);
    // 0x803308BC: lwc1        $f8, 0x8($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X8);
    // 0x803308C0: sub.s       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f6.fl = ctx->f18.fl - ctx->f4.fl;
    // 0x803308C4: sub.s       $f12, $f10, $f16
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f12.fl = ctx->f10.fl - ctx->f16.fl;
    // 0x803308C8: jal         0x80015634
    // 0x803308CC: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    Math_CalcAngleRotated(rdram, ctx);
        goto after_1;
    // 0x803308CC: sub.s       $f14, $f6, $f8
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f14.fl = ctx->f6.fl - ctx->f8.fl;
    after_1:
    // 0x803308D0: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x803308D4: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x803308D8: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x803308DC: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x803308E0: jal         0x800157EC
    // 0x803308E4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_2;
    // 0x803308E4: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_2:
    // 0x803308E8: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x803308EC: lw          $t5, 0x30($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X30);
    // 0x803308F0: lui         $at, 0x3FE0
    ctx->r1 = S32(0X3FE0 << 16);
    // 0x803308F4: mtc1        $t5, $f10
    ctx->f10.u32l = ctx->r13;
    // 0x803308F8: mtc1        $at, $f19
    ctx->f_odd[(19 - 1) * 2] = ctx->r1;
    // 0x803308FC: cvt.d.w     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    ctx->f16.d = CVT_D_W(ctx->f10.u32l);
    // 0x80330900: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330904: lw          $t4, 0x44($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X44);
    // 0x80330908: mul.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = MUL_D(ctx->f16.d, ctx->f18.d);
    // 0x8033090C: lwc1        $f12, 0x3C($t4)
    ctx->f12.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80330910: jal         0x80015538
    // 0x80330914: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80330914: cvt.s.d     $f14, $f4
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f14.fl = CVT_S_D(ctx->f4.d);
    after_3:
    // 0x80330918: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x8033091C: nop

    // 0x80330920: swc1        $f0, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f0.u32l;
    // 0x80330924: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80330928: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8033092C: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80330930: lwc1        $f6, 0x0($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X0);
    // 0x80330934: lwc1        $f10, 0x4($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X4);
    // 0x80330938: lwc1        $f8, 0x0($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X0);
    // 0x8033093C: lwc1        $f16, 0x4($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X4);
    // 0x80330940: sub.s       $f12, $f6, $f8
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f12.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x80330944: jal         0x800156C4
    // 0x80330948: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    Math_CalcAngleSimple(rdram, ctx);
        goto after_4;
    // 0x80330948: sub.s       $f14, $f10, $f16
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f14.fl = ctx->f10.fl - ctx->f16.fl;
    after_4:
    // 0x8033094C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80330950: lwc1        $f12, 0x2C($sp)
    ctx->f12.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80330954: jal         0x80015744
    // 0x80330958: nop

    Math_NormalizeAngle(rdram, ctx);
        goto after_5;
    // 0x80330958: nop

    after_5:
    // 0x8033095C: swc1        $f0, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->f0.u32l;
    // 0x80330960: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80330964: lwc1        $f14, 0x2C($sp)
    ctx->f14.u32l = MEM_W(ctx->r29, 0X2C);
    // 0x80330968: lwc1        $f12, 0x40($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X40);
    // 0x8033096C: jal         0x800157EC
    // 0x80330970: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    func_800157EC(rdram, ctx);
        goto after_6;
    // 0x80330970: lui         $a2, 0x4000
    ctx->r6 = S32(0X4000 << 16);
    after_6:
    // 0x80330974: sw          $v0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r2;
    // 0x80330978: lw          $t1, 0x30($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X30);
    // 0x8033097C: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330980: mtc1        $t1, $f18
    ctx->f18.u32l = ctx->r9;
    // 0x80330984: lwc1        $f12, 0x40($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X40);
    // 0x80330988: jal         0x80015538
    // 0x8033098C: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x8033098C: cvt.s.w     $f14, $f18
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 18);
    ctx->f14.fl = CVT_S_W(ctx->f18.u32l);
    after_7:
    // 0x80330990: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80330994: nop

    // 0x80330998: swc1        $f0, 0x40($t2)
    MEM_W(0X40, ctx->r10) = ctx->f0.u32l;
    // 0x8033099C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309A0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309A4: jal         0x80029D8C
    // 0x803309A8: nop

    func_80029D8C(rdram, ctx);
        goto after_8;
    // 0x803309A8: nop

    after_8:
    // 0x803309AC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x803309B0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x803309B4: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309B8: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309BC: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x803309C0: lui         $a2, 0x41F0
    ctx->r6 = S32(0X41F0 << 16);
    // 0x803309C4: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x803309C8: swc1        $f4, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f4.u32l;
    // 0x803309CC: jal         0x80029018
    // 0x803309D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    func_80029018(rdram, ctx);
        goto after_9;
    // 0x803309D0: swc1        $f6, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f6.u32l;
    after_9:
    // 0x803309D4: beq         $v0, $zero, L_803309E4
    if (ctx->r2 == 0) {
        // 0x803309D8: nop
    
            goto L_803309E4;
    }
    // 0x803309D8: nop

    // 0x803309DC: addiu       $t3, $zero, 0x1
    ctx->r11 = ADD32(0, 0X1);
    // 0x803309E0: sw          $t3, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r11;
L_803309E4:
    // 0x803309E4: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x803309E8: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x803309EC: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x803309F0: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803309F4: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803309F8: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x803309FC: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80330A00: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330A04: swc1        $f8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f8.u32l;
    // 0x80330A08: jal         0x800295C0
    // 0x80330A0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    func_800295C0(rdram, ctx);
        goto after_10;
    // 0x80330A0C: swc1        $f10, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f10.u32l;
    after_10:
    // 0x80330A10: beq         $v0, $zero, L_80330A20
    if (ctx->r2 == 0) {
        // 0x80330A14: nop
    
            goto L_80330A20;
    }
    // 0x80330A14: nop

    // 0x80330A18: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80330A1C: sw          $t4, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r12;
L_80330A20:
    // 0x80330A20: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80330A24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80330A28: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80330A2C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A30: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A34: addiu       $a1, $sp, 0x34
    ctx->r5 = ADD32(ctx->r29, 0X34);
    // 0x80330A38: addiu       $a2, $sp, 0x38
    ctx->r6 = ADD32(ctx->r29, 0X38);
    // 0x80330A3C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80330A40: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80330A44: jal         0x800295C0
    // 0x80330A48: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_11;
    // 0x80330A48: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_11:
    // 0x80330A4C: beq         $v0, $zero, L_80330A5C
    if (ctx->r2 == 0) {
        // 0x80330A50: nop
    
            goto L_80330A5C;
    }
    // 0x80330A50: nop

    // 0x80330A54: addiu       $t5, $zero, 0x1
    ctx->r13 = ADD32(0, 0X1);
    // 0x80330A58: sw          $t5, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r13;
L_80330A5C:
    // 0x80330A5C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80330A60: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80330A64: lui         $a1, 0x44D4
    ctx->r5 = S32(0X44D4 << 16);
    // 0x80330A68: jal         0x8002A1FC
    // 0x80330A6C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    func_8002A1FC(rdram, ctx);
        goto after_12;
    // 0x80330A6C: ori         $a1, $a1, 0x8000
    ctx->r5 = ctx->r5 | 0X8000;
    after_12:
    // 0x80330A70: bne         $v0, $zero, L_80330A80
    if (ctx->r2 != 0) {
        // 0x80330A74: nop
    
            goto L_80330A80;
    }
    // 0x80330A74: nop

    // 0x80330A78: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80330A7C: sw          $t6, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r14;
L_80330A80:
    // 0x80330A80: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80330A84: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80330A88: lw          $t8, 0x44($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X44);
    // 0x80330A8C: lwc1        $f4, 0x8($t7)
    ctx->f4.u32l = MEM_W(ctx->r15, 0X8);
    // 0x80330A90: lwc1        $f6, 0x8($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X8);
    // 0x80330A94: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80330A98: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80330A9C: sub.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl - ctx->f6.fl;
    // 0x80330AA0: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80330AA4: nop

    // 0x80330AA8: bc1f        L_80330AB8
    if (!c1cs) {
        // 0x80330AAC: nop
    
            goto L_80330AB8;
    }
    // 0x80330AAC: nop

    // 0x80330AB0: addiu       $t9, $zero, 0x1
    ctx->r25 = ADD32(0, 0X1);
    // 0x80330AB4: sw          $t9, 0x40($sp)
    MEM_W(0X40, ctx->r29) = ctx->r25;
L_80330AB8:
    // 0x80330AB8: lw          $t0, 0x40($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X40);
    // 0x80330ABC: nop

    // 0x80330AC0: beq         $t0, $zero, L_80330B10
    if (ctx->r8 == 0) {
        // 0x80330AC4: nop
    
            goto L_80330B10;
    }
    // 0x80330AC4: nop

    // 0x80330AC8: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80330ACC: lw          $t1, 0x44($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X44);
    // 0x80330AD0: nop

    // 0x80330AD4: swc1        $f16, 0x2C($t1)
    MEM_W(0X2C, ctx->r9) = ctx->f16.u32l;
    // 0x80330AD8: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80330ADC: nop

    // 0x80330AE0: lwc1        $f20, 0x2C($t2)
    ctx->f20.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80330AE4: nop

    // 0x80330AE8: swc1        $f20, 0x28($t2)
    MEM_W(0X28, ctx->r10) = ctx->f20.u32l;
    // 0x80330AEC: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80330AF0: nop

    // 0x80330AF4: swc1        $f20, 0x24($t3)
    MEM_W(0X24, ctx->r11) = ctx->f20.u32l;
    // 0x80330AF8: lw          $t5, 0x44($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X44);
    // 0x80330AFC: addiu       $t4, $zero, 0x4
    ctx->r12 = ADD32(0, 0X4);
    // 0x80330B00: sh          $t4, 0xA4($t5)
    MEM_H(0XA4, ctx->r13) = ctx->r12;
    // 0x80330B04: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80330B08: nop

    // 0x80330B0C: sb          $zero, 0x132($t6)
    MEM_B(0X132, ctx->r14) = 0;
L_80330B10:
    // 0x80330B10: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B14: lw          $t7, 0x44($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X44);
    // 0x80330B18: sll         $t9, $t8, 2
    ctx->r25 = S32(ctx->r24 << 2);
    // 0x80330B1C: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330B20: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x80330B24: addu        $t9, $t9, $t8
    ctx->r25 = ADD32(ctx->r25, ctx->r24);
    // 0x80330B28: lwc1        $f18, 0x3C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80330B2C: sll         $t9, $t9, 4
    ctx->r25 = S32(ctx->r25 << 4);
    // 0x80330B30: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B34: addu        $at, $at, $t9
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x80330B38: swc1        $f18, 0x418C($at)
    MEM_W(0X418C, ctx->r1) = ctx->f18.u32l;
    // 0x80330B3C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B40: lw          $t0, 0x44($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X44);
    // 0x80330B44: sll         $t2, $t1, 2
    ctx->r10 = S32(ctx->r9 << 2);
    // 0x80330B48: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330B4C: sll         $t2, $t2, 2
    ctx->r10 = S32(ctx->r10 << 2);
    // 0x80330B50: addu        $t2, $t2, $t1
    ctx->r10 = ADD32(ctx->r10, ctx->r9);
    // 0x80330B54: lwc1        $f4, 0x1C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X1C);
    // 0x80330B58: sll         $t2, $t2, 4
    ctx->r10 = S32(ctx->r10 << 4);
    // 0x80330B5C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B60: addu        $at, $at, $t2
    ctx->r1 = ADD32(ctx->r1, ctx->r10);
    // 0x80330B64: swc1        $f4, 0x416C($at)
    MEM_W(0X416C, ctx->r1) = ctx->f4.u32l;
    // 0x80330B68: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B6C: lw          $t3, 0x44($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X44);
    // 0x80330B70: sll         $t5, $t4, 2
    ctx->r13 = S32(ctx->r12 << 2);
    // 0x80330B74: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330B78: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80330B7C: addu        $t5, $t5, $t4
    ctx->r13 = ADD32(ctx->r13, ctx->r12);
    // 0x80330B80: lwc1        $f6, 0x20($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X20);
    // 0x80330B84: sll         $t5, $t5, 4
    ctx->r13 = S32(ctx->r13 << 4);
    // 0x80330B88: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330B8C: addu        $at, $at, $t5
    ctx->r1 = ADD32(ctx->r1, ctx->r13);
    // 0x80330B90: swc1        $f6, 0x4170($at)
    MEM_W(0X4170, ctx->r1) = ctx->f6.u32l;
    // 0x80330B94: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80330B98: lw          $t6, 0x44($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X44);
    // 0x80330B9C: sll         $t8, $t7, 2
    ctx->r24 = S32(ctx->r15 << 2);
    // 0x80330BA0: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330BA4: sll         $t8, $t8, 2
    ctx->r24 = S32(ctx->r24 << 2);
    // 0x80330BA8: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x80330BAC: lwc1        $f8, 0x24($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X24);
    // 0x80330BB0: sll         $t8, $t8, 4
    ctx->r24 = S32(ctx->r24 << 4);
    // 0x80330BB4: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BB8: addu        $at, $at, $t8
    ctx->r1 = ADD32(ctx->r1, ctx->r24);
    // 0x80330BBC: swc1        $f8, 0x4174($at)
    MEM_W(0X4174, ctx->r1) = ctx->f8.u32l;
    // 0x80330BC0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BC4: lw          $t9, 0x44($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X44);
    // 0x80330BC8: sll         $t1, $t0, 2
    ctx->r9 = S32(ctx->r8 << 2);
    // 0x80330BCC: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330BD0: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80330BD4: addu        $t1, $t1, $t0
    ctx->r9 = ADD32(ctx->r9, ctx->r8);
    // 0x80330BD8: lwc1        $f10, 0x28($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X28);
    // 0x80330BDC: sll         $t1, $t1, 4
    ctx->r9 = S32(ctx->r9 << 4);
    // 0x80330BE0: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330BE4: addu        $at, $at, $t1
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80330BE8: swc1        $f10, 0x4178($at)
    MEM_W(0X4178, ctx->r1) = ctx->f10.u32l;
    // 0x80330BEC: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80330BF0: lw          $t2, 0x44($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X44);
    // 0x80330BF4: sll         $t4, $t3, 2
    ctx->r12 = S32(ctx->r11 << 2);
    // 0x80330BF8: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330BFC: sll         $t4, $t4, 2
    ctx->r12 = S32(ctx->r12 << 2);
    // 0x80330C00: addu        $t4, $t4, $t3
    ctx->r12 = ADD32(ctx->r12, ctx->r11);
    // 0x80330C04: lwc1        $f16, 0x2C($t2)
    ctx->f16.u32l = MEM_W(ctx->r10, 0X2C);
    // 0x80330C08: sll         $t4, $t4, 4
    ctx->r12 = S32(ctx->r12 << 4);
    // 0x80330C0C: lui         $at, 0x8015
    ctx->r1 = S32(0X8015 << 16);
    // 0x80330C10: addu        $at, $at, $t4
    ctx->r1 = ADD32(ctx->r1, ctx->r12);
    // 0x80330C14: swc1        $f16, 0x417C($at)
    MEM_W(0X417C, ctx->r1) = ctx->f16.u32l;
    // 0x80330C18: b           L_80330C20
    // 0x80330C1C: nop

        goto L_80330C20;
    // 0x80330C1C: nop

L_80330C20:
    // 0x80330C20: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x80330C24: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80330C28: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80330C2C: jr          $ra
    // 0x80330C30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
    return;
    // 0x80330C30: addiu       $sp, $sp, 0x48
    ctx->r29 = ADD32(ctx->r29, 0X48);
;}
RECOMP_FUNC void func_80336A40_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80336A40: jr          $ra
    // 0x80336A44: nop

    return;
    // 0x80336A44: nop

    // 0x80336A48: jr          $ra
    // 0x80336A4C: nop

    return;
    // 0x80336A4C: nop

;}
RECOMP_FUNC void func_80338B18_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338B18: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80338B1C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80338B20: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B24: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B28: jal         0x8001BB34
    // 0x80338B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_0;
    // 0x80338B2C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
    // 0x80338B30: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80338B34: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80338B38: jal         0x8002B0E4
    // 0x80338B3C: nop

    func_8002B0E4(rdram, ctx);
        goto after_1;
    // 0x80338B3C: nop

    after_1:
    // 0x80338B40: b           L_80338B48
    // 0x80338B44: nop

        goto L_80338B48;
    // 0x80338B44: nop

L_80338B48:
    // 0x80338B48: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80338B4C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80338B50: jr          $ra
    // 0x80338B54: nop

    return;
    // 0x80338B54: nop

;}
RECOMP_FUNC void func_80333EC4_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80333EC4: jr          $ra
    // 0x80333EC8: nop

    return;
    // 0x80333EC8: nop

    // 0x80333ECC: jr          $ra
    // 0x80333ED0: nop

    return;
    // 0x80333ED0: nop

;}
RECOMP_FUNC void func_80331F28_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80331F28: addiu       $sp, $sp, -0x40
    ctx->r29 = ADD32(ctx->r29, -0X40);
    // 0x80331F2C: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x80331F30: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80331F34: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80331F38: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331F3C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80331F40: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331F44: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331F48: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F4C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80331F50: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331F54: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80331F58: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80331F5C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80331F60: sw          $t9, 0x3C($sp)
    MEM_W(0X3C, ctx->r29) = ctx->r25;
    // 0x80331F64: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331F68: nop

    // 0x80331F6C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80331F70: nop

    // 0x80331F74: bne         $t1, $zero, L_80332078
    if (ctx->r9 != 0) {
        // 0x80331F78: nop
    
            goto L_80332078;
    }
    // 0x80331F78: nop

    // 0x80331F7C: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80331F80: nop

    // 0x80331F84: lbu         $t3, 0x132($t2)
    ctx->r11 = MEM_BU(ctx->r10, 0X132);
    // 0x80331F88: nop

    // 0x80331F8C: addiu       $t4, $t3, 0x1
    ctx->r12 = ADD32(ctx->r11, 0X1);
    // 0x80331F90: sb          $t4, 0x132($t2)
    MEM_B(0X132, ctx->r10) = ctx->r12;
    // 0x80331F94: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x80331F98: addiu       $t5, $zero, 0x1E
    ctx->r13 = ADD32(0, 0X1E);
    // 0x80331F9C: sh          $t5, 0xA6($t6)
    MEM_H(0XA6, ctx->r14) = ctx->r13;
    // 0x80331FA0: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80331FA4: addiu       $t7, $zero, 0x3C
    ctx->r15 = ADD32(0, 0X3C);
    // 0x80331FA8: sh          $t7, 0xA8($t8)
    MEM_H(0XA8, ctx->r24) = ctx->r15;
    // 0x80331FAC: lui         $at, 0x4040
    ctx->r1 = S32(0X4040 << 16);
    // 0x80331FB0: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80331FB4: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80331FB8: nop

    // 0x80331FBC: swc1        $f4, 0xE0($t9)
    MEM_W(0XE0, ctx->r25) = ctx->f4.u32l;
    // 0x80331FC0: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80331FC4: nop

    // 0x80331FC8: sh          $zero, 0xAC($t0)
    MEM_H(0XAC, ctx->r8) = 0;
    // 0x80331FCC: jal         0x80014E80
    // 0x80331FD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    Math_Random(rdram, ctx);
        goto after_0;
    // 0x80331FD0: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    after_0:
    // 0x80331FD4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80331FD8: andi        $t1, $v0, 0x1
    ctx->r9 = ctx->r2 & 0X1;
    // 0x80331FDC: sh          $t1, 0xAE($t3)
    MEM_H(0XAE, ctx->r11) = ctx->r9;
    // 0x80331FE0: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80331FE4: nop

    // 0x80331FE8: lh          $t2, 0xAE($t4)
    ctx->r10 = MEM_H(ctx->r12, 0XAE);
    // 0x80331FEC: nop

    // 0x80331FF0: sll         $t5, $t2, 2
    ctx->r13 = S32(ctx->r10 << 2);
    // 0x80331FF4: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x80331FF8: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80331FFC: subu        $t5, $t5, $t2
    ctx->r13 = SUB32(ctx->r13, ctx->r10);
    // 0x80332000: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x80332004: addu        $t5, $t5, $t2
    ctx->r13 = ADD32(ctx->r13, ctx->r10);
    // 0x80332008: sll         $t5, $t5, 2
    ctx->r13 = S32(ctx->r13 << 2);
    // 0x8033200C: addiu       $t6, $t5, 0x5A
    ctx->r14 = ADD32(ctx->r13, 0X5A);
    // 0x80332010: mtc1        $t6, $f6
    ctx->f6.u32l = ctx->r14;
    // 0x80332014: nop

    // 0x80332018: cvt.s.w     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    ctx->f8.fl = CVT_S_W(ctx->f6.u32l);
    // 0x8033201C: swc1        $f8, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f8.u32l;
    // 0x80332020: lui         $at, 0x4140
    ctx->r1 = S32(0X4140 << 16);
    // 0x80332024: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332028: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033202C: nop

    // 0x80332030: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
    // 0x80332034: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332038: lwc1        $f16, -0x5244($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X5244);
    // 0x8033203C: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332040: nop

    // 0x80332044: swc1        $f16, 0x14($t8)
    MEM_W(0X14, ctx->r24) = ctx->f16.u32l;
    // 0x80332048: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x8033204C: nop

    // 0x80332050: lwc1        $f20, 0x14($t9)
    ctx->f20.u32l = MEM_W(ctx->r25, 0X14);
    // 0x80332054: nop

    // 0x80332058: swc1        $f20, 0x10($t9)
    MEM_W(0X10, ctx->r25) = ctx->f20.u32l;
    // 0x8033205C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332060: nop

    // 0x80332064: swc1        $f20, 0xC($t0)
    MEM_W(0XC, ctx->r8) = ctx->f20.u32l;
    // 0x80332068: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033206C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332070: jal         0x8001BB34
    // 0x80332074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BB34(rdram, ctx);
        goto after_1;
    // 0x80332074: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
L_80332078:
    // 0x80332078: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033207C: nop

    // 0x80332080: lh          $t3, 0xA8($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XA8);
    // 0x80332084: nop

    // 0x80332088: beq         $t3, $zero, L_80332138
    if (ctx->r11 == 0) {
        // 0x8033208C: nop
    
            goto L_80332138;
    }
    // 0x8033208C: nop

    // 0x80332090: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332094: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332098: lwc1        $f18, 0xC($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0XC);
    // 0x8033209C: lwc1        $f7, -0x5240($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, -0X5240);
    // 0x803320A0: lwc1        $f6, -0x523C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X523C);
    // 0x803320A4: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x803320A8: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x803320AC: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x803320B0: swc1        $f10, 0xC($t2)
    MEM_W(0XC, ctx->r10) = ctx->f10.u32l;
    // 0x803320B4: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803320B8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803320BC: lwc1        $f16, 0x10($t5)
    ctx->f16.u32l = MEM_W(ctx->r13, 0X10);
    // 0x803320C0: lwc1        $f5, -0x5238($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, -0X5238);
    // 0x803320C4: lwc1        $f4, -0x5234($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X5234);
    // 0x803320C8: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x803320CC: add.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d + ctx->f4.d;
    // 0x803320D0: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x803320D4: swc1        $f8, 0x10($t5)
    MEM_W(0X10, ctx->r13) = ctx->f8.u32l;
    // 0x803320D8: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803320DC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803320E0: lwc1        $f10, 0x14($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X14);
    // 0x803320E4: lwc1        $f19, -0x5230($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, -0X5230);
    // 0x803320E8: lwc1        $f18, -0x522C($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X522C);
    // 0x803320EC: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x803320F0: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x803320F4: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x803320F8: swc1        $f6, 0x14($t6)
    MEM_W(0X14, ctx->r14) = ctx->f6.u32l;
    // 0x803320FC: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332100: nop

    // 0x80332104: lh          $t7, 0xA8($t4)
    ctx->r15 = MEM_H(ctx->r12, 0XA8);
    // 0x80332108: nop

    // 0x8033210C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80332110: sh          $t8, 0xA8($t4)
    MEM_H(0XA8, ctx->r12) = ctx->r24;
    // 0x80332114: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332118: addiu       $at, $zero, 0x1E
    ctx->r1 = ADD32(0, 0X1E);
    // 0x8033211C: lh          $t0, 0xA8($t9)
    ctx->r8 = MEM_H(ctx->r25, 0XA8);
    // 0x80332120: nop

    // 0x80332124: bne         $t0, $at, L_80332138
    if (ctx->r8 != ctx->r1) {
        // 0x80332128: nop
    
            goto L_80332138;
    }
    // 0x80332128: nop

    // 0x8033212C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332130: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x80332134: sh          $t1, 0x108($t3)
    MEM_H(0X108, ctx->r11) = ctx->r9;
L_80332138:
    // 0x80332138: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x8033213C: nop

    // 0x80332140: lh          $t5, 0xA6($t2)
    ctx->r13 = MEM_H(ctx->r10, 0XA6);
    // 0x80332144: nop

    // 0x80332148: addiu       $t6, $t5, -0x1
    ctx->r14 = ADD32(ctx->r13, -0X1);
    // 0x8033214C: sh          $t6, 0xA6($t2)
    MEM_H(0XA6, ctx->r10) = ctx->r14;
    // 0x80332150: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x80332154: nop

    // 0x80332158: lh          $t8, 0xA6($t7)
    ctx->r24 = MEM_H(ctx->r15, 0XA6);
    // 0x8033215C: nop

    // 0x80332160: bne         $t8, $zero, L_803321C0
    if (ctx->r24 != 0) {
        // 0x80332164: nop
    
            goto L_803321C0;
    }
    // 0x80332164: nop

    // 0x80332168: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x8033216C: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x80332170: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80332174: lwc1        $f8, 0x3C($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80332178: nop

    // 0x8033217C: c.eq.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl == ctx->f10.fl;
    // 0x80332180: nop

    // 0x80332184: bc1f        L_803321A0
    if (!c1cs) {
        // 0x80332188: nop
    
            goto L_803321A0;
    }
    // 0x80332188: nop

    // 0x8033218C: lui         $at, 0x4387
    ctx->r1 = S32(0X4387 << 16);
    // 0x80332190: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80332194: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332198: b           L_803321B4
    // 0x8033219C: swc1        $f16, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f16.u32l;
        goto L_803321B4;
    // 0x8033219C: swc1        $f16, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f16.u32l;
L_803321A0:
    // 0x803321A0: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803321A4: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x803321A8: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x803321AC: nop

    // 0x803321B0: swc1        $f18, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f18.u32l;
L_803321B4:
    // 0x803321B4: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x803321B8: addiu       $t1, $zero, 0x3C
    ctx->r9 = ADD32(0, 0X3C);
    // 0x803321BC: sh          $t1, 0xA6($t3)
    MEM_H(0XA6, ctx->r11) = ctx->r9;
L_803321C0:
    // 0x803321C0: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803321C4: lui         $at, 0x42B4
    ctx->r1 = S32(0X42B4 << 16);
    // 0x803321C8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x803321CC: lwc1        $f4, 0x3C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x803321D0: nop

    // 0x803321D4: c.eq.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl == ctx->f6.fl;
    // 0x803321D8: nop

    // 0x803321DC: bc1f        L_80332208
    if (!c1cs) {
        // 0x803321E0: nop
    
            goto L_80332208;
    }
    // 0x803321E0: nop

    // 0x803321E4: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803321E8: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803321EC: lwc1        $f14, -0x5228($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5228);
    // 0x803321F0: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x803321F4: jal         0x80015538
    // 0x803321F8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x803321F8: nop

    after_2:
    // 0x803321FC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332200: b           L_8033222C
    // 0x80332204: swc1        $f0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f0.u32l;
        goto L_8033222C;
    // 0x80332204: swc1        $f0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f0.u32l;
L_80332208:
    // 0x80332208: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x8033220C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332210: lwc1        $f14, -0x5224($at)
    ctx->f14.u32l = MEM_W(ctx->r1, -0X5224);
    // 0x80332214: lwc1        $f12, 0x20($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X20);
    // 0x80332218: jal         0x80015538
    // 0x8033221C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8033221C: nop

    after_3:
    // 0x80332220: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332224: nop

    // 0x80332228: swc1        $f0, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f0.u32l;
L_8033222C:
    // 0x8033222C: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x80332230: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x80332234: nop

    // 0x80332238: swc1        $f8, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f8.u32l;
    // 0x8033223C: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332240: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x80332244: jal         0x80029C40
    // 0x80332248: nop

    func_80029C40(rdram, ctx);
        goto after_4;
    // 0x80332248: nop

    after_4:
    // 0x8033224C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80332250: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80332254: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x80332258: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033225C: addiu       $a1, $zero, 0x2
    ctx->r5 = ADD32(0, 0X2);
    // 0x80332260: lui         $a2, 0x4334
    ctx->r6 = S32(0X4334 << 16);
    // 0x80332264: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332268: swc1        $f10, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f10.u32l;
    // 0x8033226C: jal         0x80029018
    // 0x80332270: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    func_80029018(rdram, ctx);
        goto after_5;
    // 0x80332270: swc1        $f16, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f16.u32l;
    after_5:
    // 0x80332274: beq         $v0, $zero, L_803322A0
    if (ctx->r2 == 0) {
        // 0x80332278: nop
    
            goto L_803322A0;
    }
    // 0x80332278: nop

    // 0x8033227C: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80332280: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332284: nop

    // 0x80332288: swc1        $f18, 0x2C($t9)
    MEM_W(0X2C, ctx->r25) = ctx->f18.u32l;
    // 0x8033228C: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332290: nop

    // 0x80332294: lwc1        $f4, 0x2C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X2C);
    // 0x80332298: nop

    // 0x8033229C: swc1        $f4, 0x24($t0)
    MEM_W(0X24, ctx->r8) = ctx->f4.u32l;
L_803322A0:
    // 0x803322A0: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803322A4: nop

    // 0x803322A8: lh          $t3, 0xAC($t1)
    ctx->r11 = MEM_H(ctx->r9, 0XAC);
    // 0x803322AC: nop

    // 0x803322B0: bne         $t3, $zero, L_80332344
    if (ctx->r11 != 0) {
        // 0x803322B4: nop
    
            goto L_80332344;
    }
    // 0x803322B4: nop

    // 0x803322B8: lw          $t5, 0x3C($sp)
    ctx->r13 = MEM_W(ctx->r29, 0X3C);
    // 0x803322BC: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803322C0: lwc1        $f6, 0xE0($t5)
    ctx->f6.u32l = MEM_W(ctx->r13, 0XE0);
    // 0x803322C4: lwc1        $f11, -0x5220($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5220);
    // 0x803322C8: lwc1        $f10, -0x521C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X521C);
    // 0x803322CC: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x803322D0: sub.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d - ctx->f10.d;
    // 0x803322D4: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x803322D8: swc1        $f18, 0xE0($t5)
    MEM_W(0XE0, ctx->r13) = ctx->f18.u32l;
    // 0x803322DC: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803322E0: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x803322E4: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x803322E8: lwc1        $f9, -0x5218($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5218);
    // 0x803322EC: lwc1        $f8, -0x5214($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5214);
    // 0x803322F0: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x803322F4: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x803322F8: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x803322FC: swc1        $f16, 0x44($t6)
    MEM_W(0X44, ctx->r14) = ctx->f16.u32l;
    // 0x80332300: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x80332304: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80332308: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8033230C: lwc1        $f18, 0xE0($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0XE0);
    // 0x80332310: nop

    // 0x80332314: c.le.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl <= ctx->f4.fl;
    // 0x80332318: nop

    // 0x8033231C: bc1f        L_8033233C
    if (!c1cs) {
        // 0x80332320: nop
    
            goto L_8033233C;
    }
    // 0x80332320: nop

    // 0x80332324: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x80332328: addiu       $t7, $zero, -0x2
    ctx->r15 = ADD32(0, -0X2);
    // 0x8033232C: sh          $t7, 0xAA($t8)
    MEM_H(0XAA, ctx->r24) = ctx->r15;
    // 0x80332330: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x80332334: addiu       $t4, $zero, 0x1
    ctx->r12 = ADD32(0, 0X1);
    // 0x80332338: sh          $t4, 0xAC($t9)
    MEM_H(0XAC, ctx->r25) = ctx->r12;
L_8033233C:
    // 0x8033233C: b           L_803323C8
    // 0x80332340: nop

        goto L_803323C8;
    // 0x80332340: nop

L_80332344:
    // 0x80332344: lw          $t0, 0x3C($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X3C);
    // 0x80332348: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x8033234C: lwc1        $f6, 0xE0($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0XE0);
    // 0x80332350: lwc1        $f11, -0x5210($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, -0X5210);
    // 0x80332354: lwc1        $f10, -0x520C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X520C);
    // 0x80332358: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8033235C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80332360: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80332364: swc1        $f18, 0xE0($t0)
    MEM_W(0XE0, ctx->r8) = ctx->f18.u32l;
    // 0x80332368: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x8033236C: lui         $at, 0x8034
    ctx->r1 = S32(0X8034 << 16);
    // 0x80332370: lwc1        $f4, 0x44($t1)
    ctx->f4.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80332374: lwc1        $f9, -0x5208($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, -0X5208);
    // 0x80332378: lwc1        $f8, -0x5204($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X5204);
    // 0x8033237C: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80332380: add.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d + ctx->f8.d;
    // 0x80332384: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80332388: swc1        $f16, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f16.u32l;
    // 0x8033238C: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332390: lui         $at, 0x4080
    ctx->r1 = S32(0X4080 << 16);
    // 0x80332394: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80332398: lwc1        $f18, 0xE0($t3)
    ctx->f18.u32l = MEM_W(ctx->r11, 0XE0);
    // 0x8033239C: nop

    // 0x803323A0: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x803323A4: nop

    // 0x803323A8: bc1f        L_803323C8
    if (!c1cs) {
        // 0x803323AC: nop
    
            goto L_803323C8;
    }
    // 0x803323AC: nop

    // 0x803323B0: lw          $t6, 0x3C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X3C);
    // 0x803323B4: addiu       $t5, $zero, 0x4
    ctx->r13 = ADD32(0, 0X4);
    // 0x803323B8: sh          $t5, 0xAA($t6)
    MEM_H(0XAA, ctx->r14) = ctx->r13;
    // 0x803323BC: lw          $t2, 0x3C($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X3C);
    // 0x803323C0: nop

    // 0x803323C4: sh          $zero, 0xAC($t2)
    MEM_H(0XAC, ctx->r10) = 0;
L_803323C8:
    // 0x803323C8: lw          $t7, 0x3C($sp)
    ctx->r15 = MEM_W(ctx->r29, 0X3C);
    // 0x803323CC: nop

    // 0x803323D0: lwc1        $f6, 0x4($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X4);
    // 0x803323D4: lwc1        $f8, 0xE0($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0XE0);
    // 0x803323D8: nop

    // 0x803323DC: sub.s       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = ctx->f6.fl - ctx->f8.fl;
    // 0x803323E0: swc1        $f10, 0x4($t7)
    MEM_W(0X4, ctx->r15) = ctx->f10.u32l;
    // 0x803323E4: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x803323E8: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x803323EC: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x803323F0: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x803323F4: addiu       $a1, $sp, 0x38
    ctx->r5 = ADD32(ctx->r29, 0X38);
    // 0x803323F8: addiu       $a2, $sp, 0x34
    ctx->r6 = ADD32(ctx->r29, 0X34);
    // 0x803323FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    // 0x80332400: swc1        $f16, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->f16.u32l;
    // 0x80332404: jal         0x800295C0
    // 0x80332408: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    func_800295C0(rdram, ctx);
        goto after_6;
    // 0x80332408: swc1        $f18, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->f18.u32l;
    after_6:
    // 0x8033240C: beq         $v0, $zero, L_80332440
    if (ctx->r2 == 0) {
        // 0x80332410: nop
    
            goto L_80332440;
    }
    // 0x80332410: nop

    // 0x80332414: cfc1        $t8, $FpcCsr
    ctx->r24 = get_cop1_cs();
    // 0x80332418: lwc1        $f4, 0x34($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X34);
    // 0x8033241C: ori         $at, $t8, 0x3
    ctx->r1 = ctx->r24 | 0X3;
    // 0x80332420: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332424: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332428: nop

    // 0x8033242C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x80332430: mfc1        $t4, $f6
    ctx->r12 = (int32_t)ctx->f6.u32l;
    // 0x80332434: ctc1        $t8, $FpcCsr
    set_cop1_cs(ctx->r24);
    // 0x80332438: b           L_8033246C
    // 0x8033243C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
        goto L_8033246C;
    // 0x8033243C: sw          $t4, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r12;
L_80332440:
    // 0x80332440: cfc1        $t9, $FpcCsr
    ctx->r25 = get_cop1_cs();
    // 0x80332444: lwc1        $f8, 0x38($sp)
    ctx->f8.u32l = MEM_W(ctx->r29, 0X38);
    // 0x80332448: ori         $at, $t9, 0x3
    ctx->r1 = ctx->r25 | 0X3;
    // 0x8033244C: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332450: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332454: nop

    // 0x80332458: cvt.w.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    ctx->f10.u32l = CVT_W_S(ctx->f8.fl);
    // 0x8033245C: mfc1        $t0, $f10
    ctx->r8 = (int32_t)ctx->f10.u32l;
    // 0x80332460: ctc1        $t9, $FpcCsr
    set_cop1_cs(ctx->r25);
    // 0x80332464: sw          $t0, 0x30($sp)
    MEM_W(0X30, ctx->r29) = ctx->r8;
    // 0x80332468: nop

L_8033246C:
    // 0x8033246C: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x80332470: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x80332474: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80332478: lwc1        $f16, 0x4($t1)
    ctx->f16.u32l = MEM_W(ctx->r9, 0X4);
    // 0x8033247C: nop

    // 0x80332480: sub.s       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f16.fl - ctx->f18.fl;
    // 0x80332484: cfc1        $t3, $FpcCsr
    ctx->r11 = get_cop1_cs();
    // 0x80332488: nop

    // 0x8033248C: ori         $at, $t3, 0x3
    ctx->r1 = ctx->r11 | 0X3;
    // 0x80332490: xori        $at, $at, 0x2
    ctx->r1 = ctx->r1 ^ 0X2;
    // 0x80332494: ctc1        $at, $FpcCsr
    set_cop1_cs(ctx->r1);
    // 0x80332498: nop

    // 0x8033249C: cvt.w.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    ctx->f6.u32l = CVT_W_S(ctx->f4.fl);
    // 0x803324A0: mfc1        $t5, $f6
    ctx->r13 = (int32_t)ctx->f6.u32l;
    // 0x803324A4: ctc1        $t3, $FpcCsr
    set_cop1_cs(ctx->r11);
    // 0x803324A8: sw          $t5, 0x2C($sp)
    MEM_W(0X2C, ctx->r29) = ctx->r13;
    // 0x803324AC: nop

    // 0x803324B0: lw          $t6, 0x2C($sp)
    ctx->r14 = MEM_W(ctx->r29, 0X2C);
    // 0x803324B4: lw          $t2, 0x30($sp)
    ctx->r10 = MEM_W(ctx->r29, 0X30);
    // 0x803324B8: nop

    // 0x803324BC: subu        $t7, $t6, $t2
    ctx->r15 = SUB32(ctx->r14, ctx->r10);
    // 0x803324C0: bgtz        $t7, L_80332510
    if (SIGNED(ctx->r15) > 0) {
        // 0x803324C4: nop
    
            goto L_80332510;
    }
    // 0x803324C4: nop

    // 0x803324C8: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x803324CC: lw          $t8, 0x3C($sp)
    ctx->r24 = MEM_W(ctx->r29, 0X3C);
    // 0x803324D0: nop

    // 0x803324D4: swc1        $f8, 0x2C($t8)
    MEM_W(0X2C, ctx->r24) = ctx->f8.u32l;
    // 0x803324D8: lw          $t4, 0x3C($sp)
    ctx->r12 = MEM_W(ctx->r29, 0X3C);
    // 0x803324DC: nop

    // 0x803324E0: lwc1        $f20, 0x2C($t4)
    ctx->f20.u32l = MEM_W(ctx->r12, 0X2C);
    // 0x803324E4: nop

    // 0x803324E8: swc1        $f20, 0x28($t4)
    MEM_W(0X28, ctx->r12) = ctx->f20.u32l;
    // 0x803324EC: lw          $t9, 0x3C($sp)
    ctx->r25 = MEM_W(ctx->r29, 0X3C);
    // 0x803324F0: nop

    // 0x803324F4: swc1        $f20, 0x24($t9)
    MEM_W(0X24, ctx->r25) = ctx->f20.u32l;
    // 0x803324F8: lw          $t1, 0x3C($sp)
    ctx->r9 = MEM_W(ctx->r29, 0X3C);
    // 0x803324FC: addiu       $t0, $zero, 0x3
    ctx->r8 = ADD32(0, 0X3);
    // 0x80332500: sh          $t0, 0xA4($t1)
    MEM_H(0XA4, ctx->r9) = ctx->r8;
    // 0x80332504: lw          $t3, 0x3C($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X3C);
    // 0x80332508: nop

    // 0x8033250C: sb          $zero, 0x132($t3)
    MEM_B(0X132, ctx->r11) = 0;
L_80332510:
    // 0x80332510: b           L_80332518
    // 0x80332514: nop

        goto L_80332518;
    // 0x80332514: nop

L_80332518:
    // 0x80332518: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x8033251C: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x80332520: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80332524: jr          $ra
    // 0x80332528: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
    return;
    // 0x80332528: addiu       $sp, $sp, 0x40
    ctx->r29 = ADD32(ctx->r29, 0X40);
;}
RECOMP_FUNC void func_80338E24_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80338E24: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80338E28: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80338E2C: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x80338E30: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80338E34: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80338E38: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338E3C: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x80338E40: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80338E44: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x80338E48: addiu       $t8, $t8, 0x4150
    ctx->r24 = ADD32(ctx->r24, 0X4150);
    // 0x80338E4C: addu        $t9, $t7, $t8
    ctx->r25 = ADD32(ctx->r15, ctx->r24);
    // 0x80338E50: sw          $t9, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r25;
    // 0x80338E54: lw          $t0, 0x4($sp)
    ctx->r8 = MEM_W(ctx->r29, 0X4);
    // 0x80338E58: nop

    // 0x80338E5C: lbu         $t1, 0x132($t0)
    ctx->r9 = MEM_BU(ctx->r8, 0X132);
    // 0x80338E60: nop

    // 0x80338E64: bne         $t1, $zero, L_80338E78
    if (ctx->r9 != 0) {
        // 0x80338E68: nop
    
            goto L_80338E78;
    }
    // 0x80338E68: nop

    // 0x80338E6C: lw          $t3, 0x4($sp)
    ctx->r11 = MEM_W(ctx->r29, 0X4);
    // 0x80338E70: addiu       $t2, $zero, 0x1
    ctx->r10 = ADD32(0, 0X1);
    // 0x80338E74: sb          $t2, 0x132($t3)
    MEM_B(0X132, ctx->r11) = ctx->r10;
L_80338E78:
    // 0x80338E78: b           L_80338E80
    // 0x80338E7C: nop

        goto L_80338E80;
    // 0x80338E7C: nop

L_80338E80:
    // 0x80338E80: jr          $ra
    // 0x80338E84: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x80338E84: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_8033A310_unk_bin_38(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033A310: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8033A314: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8033A318: lui         $a0, 0x8017
    ctx->r4 = S32(0X8017 << 16);
    // 0x8033A31C: lw          $a0, 0x7A60($a0)
    ctx->r4 = MEM_W(ctx->r4, 0X7A60);
    // 0x8033A320: jal         0x8002B114
    // 0x8033A324: nop

    func_8002B114(rdram, ctx);
        goto after_0;
    // 0x8033A324: nop

    after_0:
    // 0x8033A328: b           L_8033A330
    // 0x8033A32C: nop

        goto L_8033A330;
    // 0x8033A32C: nop

L_8033A330:
    // 0x8033A330: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8033A334: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8033A338: jr          $ra
    // 0x8033A33C: nop

    return;
    // 0x8033A33C: nop

;}
RECOMP_FUNC void func_803302C8_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x803302C8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x803302CC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x803302D0: sw          $s0, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->r16;
    // 0x803302D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x803302D8: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x803302DC: lui         $s0, 0x8015
    ctx->r16 = S32(0X8015 << 16);
    // 0x803302E0: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x803302E4: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302E8: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x803302EC: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803302F0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803302F4: addu        $s0, $s0, $t7
    ctx->r16 = ADD32(ctx->r16, ctx->r15);
    // 0x803302F8: lh          $s0, 0x41F4($s0)
    ctx->r16 = MEM_H(ctx->r16, 0X41F4);
    // 0x803302FC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80330300: beq         $s0, $at, L_8033031C
    if (ctx->r16 == ctx->r1) {
        // 0x80330304: nop
    
            goto L_8033031C;
    }
    // 0x80330304: nop

    // 0x80330308: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8033030C: beq         $s0, $at, L_8033032C
    if (ctx->r16 == ctx->r1) {
        // 0x80330310: nop
    
            goto L_8033032C;
    }
    // 0x80330310: nop

    // 0x80330314: b           L_8033033C
    // 0x80330318: nop

        goto L_8033033C;
    // 0x80330318: nop

L_8033031C:
    // 0x8033031C: jal         0x803300F0
    // 0x80330320: nop

    func_803300F0_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x80330320: nop

    after_0:
    // 0x80330324: b           L_80330344
    // 0x80330328: nop

        goto L_80330344;
    // 0x80330328: nop

L_8033032C:
    // 0x8033032C: jal         0x80330220
    // 0x80330330: nop

    func_80330220_unk_bin_39(rdram, ctx);
        goto after_1;
    // 0x80330330: nop

    after_1:
    // 0x80330334: b           L_80330344
    // 0x80330338: nop

        goto L_80330344;
    // 0x80330338: nop

L_8033033C:
    // 0x8033033C: b           L_80330344
    // 0x80330340: nop

        goto L_80330344;
    // 0x80330340: nop

L_80330344:
    // 0x80330344: b           L_8033034C
    // 0x80330348: nop

        goto L_8033034C;
    // 0x80330348: nop

L_8033034C:
    // 0x8033034C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80330350: lw          $s0, 0x18($sp)
    ctx->r16 = MEM_W(ctx->r29, 0X18);
    // 0x80330354: jr          $ra
    // 0x80330358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    return;
    // 0x80330358: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
;}
RECOMP_FUNC void func_8033127C_unk_bin_39(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8033127C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80331280: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80331284: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80331288: lw          $t6, 0x7A60($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X7A60);
    // 0x8033128C: lui         $t8, 0x8015
    ctx->r24 = S32(0X8015 << 16);
    // 0x80331290: sll         $t7, $t6, 2
    ctx->r15 = S32(ctx->r14 << 2);
    // 0x80331294: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x80331298: sll         $t7, $t7, 2
    ctx->r15 = S32(ctx->r15 << 2);
    // 0x8033129C: addu        $t7, $t7, $t6
    ctx->r15 = ADD32(ctx->r15, ctx->r14);
    // 0x803312A0: sll         $t7, $t7, 4
    ctx->r15 = S32(ctx->r15 << 4);
    // 0x803312A4: addu        $t8, $t8, $t7
    ctx->r24 = ADD32(ctx->r24, ctx->r15);
    // 0x803312A8: lh          $t8, 0x41F4($t8)
    ctx->r24 = MEM_H(ctx->r24, 0X41F4);
    // 0x803312AC: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x803312B0: bne         $t8, $at, L_803312D0
    if (ctx->r24 != ctx->r1) {
        // 0x803312B4: nop
    
            goto L_803312D0;
    }
    // 0x803312B4: nop

    // 0x803312B8: b           L_803312C0
    // 0x803312BC: nop

        goto L_803312C0;
    // 0x803312BC: nop

L_803312C0:
    // 0x803312C0: jal         0x803311C8
    // 0x803312C4: nop

    func_803311C8_unk_bin_39(rdram, ctx);
        goto after_0;
    // 0x803312C4: nop

    after_0:
    // 0x803312C8: b           L_803312D8
    // 0x803312CC: nop

        goto L_803312D8;
    // 0x803312CC: nop

L_803312D0:
    // 0x803312D0: b           L_803312D8
    // 0x803312D4: nop

        goto L_803312D8;
    // 0x803312D4: nop

L_803312D8:
    // 0x803312D8: b           L_803312E0
    // 0x803312DC: nop

        goto L_803312E0;
    // 0x803312DC: nop

L_803312E0:
    // 0x803312E0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x803312E4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x803312E8: jr          $ra
    // 0x803312EC: nop

    return;
    // 0x803312EC: nop

;}
