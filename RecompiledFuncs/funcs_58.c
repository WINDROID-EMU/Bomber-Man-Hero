#include "recomp.h"
#include "funcs.h"

RECOMP_FUNC void func_80283520_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283520: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80283524: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283528: addiu       $t6, $zero, 0x16
    ctx->r14 = ADD32(0, 0X16);
    // 0x8028352C: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80283530: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283534: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283538: addiu       $t7, $zero, 0x20B
    ctx->r15 = ADD32(0, 0X20B);
    // 0x8028353C: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283540: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80283544: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80283548: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8028354C: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80283550: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283554: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283558: jal         0x8001C0EC
    // 0x8028355C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028355C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80283560: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80283564: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80283568: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028356C: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80283570: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80283574: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283578: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028357C: addiu       $a2, $zero, 0x74
    ctx->r6 = ADD32(0, 0X74);
    // 0x80283580: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283584: jal         0x800178D4
    // 0x80283588: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80283588: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x8028358C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283590: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283594: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    // 0x80283598: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x8028359C: jal         0x800178D4
    // 0x802835A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802835A0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802835A4: addiu       $a0, $zero, 0xA
    ctx->r4 = ADD32(0, 0XA);
    // 0x802835A8: addiu       $a1, $zero, 0x3
    ctx->r5 = ADD32(0, 0X3);
    // 0x802835AC: jal         0x8001FB3C
    // 0x802835B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x802835B0: addiu       $a2, $zero, 0x2
    ctx->r6 = ADD32(0, 0X2);
    after_3:
    // 0x802835B4: b           L_802835BC
    // 0x802835B8: nop

        goto L_802835BC;
    // 0x802835B8: nop

L_802835BC:
    // 0x802835BC: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802835C0: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802835C4: jr          $ra
    // 0x802835C8: nop

    return;
    // 0x802835C8: nop

;}
RECOMP_FUNC void func_8028460C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028460C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284610: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284614: jal         0x80283A2C
    // 0x80284618: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284618: nop

    after_0:
    // 0x8028461C: beq         $v0, $zero, L_8028462C
    if (ctx->r2 == 0) {
        // 0x80284620: nop
    
            goto L_8028462C;
    }
    // 0x80284620: nop

    // 0x80284624: b           L_802846B8
    // 0x80284628: nop

        goto L_802846B8;
    // 0x80284628: nop

L_8028462C:
    // 0x8028462C: jal         0x80085D54
    // 0x80284630: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284630: nop

    after_1:
    // 0x80284634: beq         $v0, $zero, L_80284644
    if (ctx->r2 == 0) {
        // 0x80284638: nop
    
            goto L_80284644;
    }
    // 0x80284638: nop

    // 0x8028463C: b           L_802846B8
    // 0x80284640: nop

        goto L_802846B8;
    // 0x80284640: nop

L_80284644:
    // 0x80284644: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284648: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x8028464C: nop

    // 0x80284650: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80284654: bne         $t7, $zero, L_8028466C
    if (ctx->r15 != 0) {
        // 0x80284658: nop
    
            goto L_8028466C;
    }
    // 0x80284658: nop

    // 0x8028465C: jal         0x80282B2C
    // 0x80284660: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284660: nop

    after_2:
    // 0x80284664: b           L_802846B8
    // 0x80284668: nop

        goto L_802846B8;
    // 0x80284668: nop

L_8028466C:
    // 0x8028466C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284670: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80284674: nop

    // 0x80284678: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x8028467C: beq         $t9, $zero, L_80284694
    if (ctx->r25 == 0) {
        // 0x80284680: nop
    
            goto L_80284694;
    }
    // 0x80284680: nop

    // 0x80284684: jal         0x80282A98
    // 0x80284688: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284688: nop

    after_3:
    // 0x8028468C: b           L_802846B8
    // 0x80284690: nop

        goto L_802846B8;
    // 0x80284690: nop

L_80284694:
    // 0x80284694: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284698: jal         0x8001B44C
    // 0x8028469C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x8028469C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802846A0: beq         $v0, $zero, L_802846B0
    if (ctx->r2 == 0) {
        // 0x802846A4: nop
    
            goto L_802846B0;
    }
    // 0x802846A4: nop

    // 0x802846A8: jal         0x80282854
    // 0x802846AC: nop

    func_80282854_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x802846AC: nop

    after_5:
L_802846B0:
    // 0x802846B0: b           L_802846B8
    // 0x802846B4: nop

        goto L_802846B8;
    // 0x802846B4: nop

L_802846B8:
    // 0x802846B8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802846BC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802846C0: jr          $ra
    // 0x802846C4: nop

    return;
    // 0x802846C4: nop

;}
RECOMP_FUNC void func_80282BA4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282BA4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282BA8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282BAC: addiu       $t6, $zero, 0x8
    ctx->r14 = ADD32(0, 0X8);
    // 0x80282BB0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282BB4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282BB8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282BBC: addiu       $t7, $zero, 0x1FB
    ctx->r15 = ADD32(0, 0X1FB);
    // 0x80282BC0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282BC4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282BC8: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282BCC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282BD0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282BD4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282BD8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282BDC: jal         0x8001C0EC
    // 0x80282BE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282BE0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282BE4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282BE8: jal         0x8001B754
    // 0x80282BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80282BEC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282BF0: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282BF4: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282BF8: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282BFC: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282C00: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282C04: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282C08: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282C0C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282C10: addiu       $a2, $zero, 0x4A
    ctx->r6 = ADD32(0, 0X4A);
    // 0x80282C14: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282C18: jal         0x800178D4
    // 0x80282C1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80282C1C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80282C20: addiu       $a0, $zero, 0x4
    ctx->r4 = ADD32(0, 0X4);
    // 0x80282C24: addiu       $a1, $zero, 0x4
    ctx->r5 = ADD32(0, 0X4);
    // 0x80282C28: jal         0x8001FB3C
    // 0x80282C2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    func_8001FB3C(rdram, ctx);
        goto after_3;
    // 0x80282C2C: addiu       $a2, $zero, 0x1
    ctx->r6 = ADD32(0, 0X1);
    after_3:
    // 0x80282C30: b           L_80282C38
    // 0x80282C34: nop

        goto L_80282C38;
    // 0x80282C34: nop

L_80282C38:
    // 0x80282C38: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282C3C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282C40: jr          $ra
    // 0x80282C44: nop

    return;
    // 0x80282C44: nop

;}
RECOMP_FUNC void func_802844BC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802844BC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802844C0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802844C4: jal         0x80283A2C
    // 0x802844C8: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802844C8: nop

    after_0:
    // 0x802844CC: beq         $v0, $zero, L_802844DC
    if (ctx->r2 == 0) {
        // 0x802844D0: nop
    
            goto L_802844DC;
    }
    // 0x802844D0: nop

    // 0x802844D4: b           L_80284540
    // 0x802844D8: nop

        goto L_80284540;
    // 0x802844D8: nop

L_802844DC:
    // 0x802844DC: jal         0x80085D54
    // 0x802844E0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802844E0: nop

    after_1:
    // 0x802844E4: beq         $v0, $zero, L_802844F4
    if (ctx->r2 == 0) {
        // 0x802844E8: nop
    
            goto L_802844F4;
    }
    // 0x802844E8: nop

    // 0x802844EC: b           L_80284540
    // 0x802844F0: nop

        goto L_80284540;
    // 0x802844F0: nop

L_802844F4:
    // 0x802844F4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802844F8: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x802844FC: nop

    // 0x80284500: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80284504: bne         $t7, $zero, L_8028451C
    if (ctx->r15 != 0) {
        // 0x80284508: nop
    
            goto L_8028451C;
    }
    // 0x80284508: nop

    // 0x8028450C: jal         0x80282B2C
    // 0x80284510: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284510: nop

    after_2:
    // 0x80284514: b           L_80284540
    // 0x80284518: nop

        goto L_80284540;
    // 0x80284518: nop

L_8028451C:
    // 0x8028451C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284520: jal         0x8001B44C
    // 0x80284524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_3;
    // 0x80284524: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x80284528: beq         $v0, $zero, L_80284538
    if (ctx->r2 == 0) {
        // 0x8028452C: nop
    
            goto L_80284538;
    }
    // 0x8028452C: nop

    // 0x80284530: jal         0x80282E08
    // 0x80284534: nop

    func_80282E08_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80284534: nop

    after_4:
L_80284538:
    // 0x80284538: b           L_80284540
    // 0x8028453C: nop

        goto L_80284540;
    // 0x8028453C: nop

L_80284540:
    // 0x80284540: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284544: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284548: jr          $ra
    // 0x8028454C: nop

    return;
    // 0x8028454C: nop

;}
RECOMP_FUNC void func_80285920_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285920: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285924: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285928: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8028592C: jal         0x802804B8
    // 0x80285930: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285930: nop

    after_0:
    // 0x80285934: jal         0x80280B88
    // 0x80285938: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285938: nop

    after_1:
    // 0x8028593C: b           L_80285944
    // 0x80285940: nop

        goto L_80285944;
    // 0x80285940: nop

L_80285944:
    // 0x80285944: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285948: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028594C: jr          $ra
    // 0x80285950: nop

    return;
    // 0x80285950: nop

;}
RECOMP_FUNC void func_80284934_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284934: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284938: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x8028493C: jal         0x80283A2C
    // 0x80284940: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284940: nop

    after_0:
    // 0x80284944: beq         $v0, $zero, L_80284954
    if (ctx->r2 == 0) {
        // 0x80284948: nop
    
            goto L_80284954;
    }
    // 0x80284948: nop

    // 0x8028494C: b           L_802849E8
    // 0x80284950: nop

        goto L_802849E8;
    // 0x80284950: nop

L_80284954:
    // 0x80284954: jal         0x80085D54
    // 0x80284958: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284958: nop

    after_1:
    // 0x8028495C: beq         $v0, $zero, L_8028496C
    if (ctx->r2 == 0) {
        // 0x80284960: nop
    
            goto L_8028496C;
    }
    // 0x80284960: nop

    // 0x80284964: b           L_802849E8
    // 0x80284968: nop

        goto L_802849E8;
    // 0x80284968: nop

L_8028496C:
    // 0x8028496C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284970: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80284974: nop

    // 0x80284978: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x8028497C: bne         $t7, $zero, L_80284994
    if (ctx->r15 != 0) {
        // 0x80284980: nop
    
            goto L_80284994;
    }
    // 0x80284980: nop

    // 0x80284984: jal         0x80282F00
    // 0x80284988: nop

    func_80282F00_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284988: nop

    after_2:
    // 0x8028498C: b           L_802849E8
    // 0x80284990: nop

        goto L_802849E8;
    // 0x80284990: nop

L_80284994:
    // 0x80284994: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284998: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x8028499C: nop

    // 0x802849A0: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802849A4: beq         $t9, $zero, L_802849BC
    if (ctx->r25 == 0) {
        // 0x802849A8: nop
    
            goto L_802849BC;
    }
    // 0x802849A8: nop

    // 0x802849AC: jal         0x80282E78
    // 0x802849B0: nop

    func_80282E78_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x802849B0: nop

    after_3:
    // 0x802849B4: b           L_802849E8
    // 0x802849B8: nop

        goto L_802849E8;
    // 0x802849B8: nop

L_802849BC:
    // 0x802849BC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802849C0: jal         0x8001B44C
    // 0x802849C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x802849C4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802849C8: beq         $v0, $zero, L_802849E0
    if (ctx->r2 == 0) {
        // 0x802849CC: nop
    
            goto L_802849E0;
    }
    // 0x802849CC: nop

    // 0x802849D0: jal         0x80282E08
    // 0x802849D4: nop

    func_80282E08_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x802849D4: nop

    after_5:
    // 0x802849D8: b           L_802849E8
    // 0x802849DC: nop

        goto L_802849E8;
    // 0x802849DC: nop

L_802849E0:
    // 0x802849E0: b           L_802849E8
    // 0x802849E4: nop

        goto L_802849E8;
    // 0x802849E4: nop

L_802849E8:
    // 0x802849E8: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802849EC: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802849F0: jr          $ra
    // 0x802849F4: nop

    return;
    // 0x802849F4: nop

;}
RECOMP_FUNC void func_80282948_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282948: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x8028294C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282950: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80282954: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282958: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028295C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282960: addiu       $t7, $zero, 0x1F7
    ctx->r15 = ADD32(0, 0X1F7);
    // 0x80282964: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282968: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x8028296C: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282970: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282974: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282978: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028297C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282980: jal         0x8001C0EC
    // 0x80282984: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282984: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282988: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8028298C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282990: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282994: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282998: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028299C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x802829A0: b           L_802829A8
    // 0x802829A4: nop

        goto L_802829A8;
    // 0x802829A4: nop

L_802829A8:
    // 0x802829A8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802829AC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802829B0: jr          $ra
    // 0x802829B4: nop

    return;
    // 0x802829B4: nop

;}
RECOMP_FUNC void func_80280438_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280438: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028043C: lwc1        $f4, -0x1C6C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80280440: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80280444: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280448: nop

    // 0x8028044C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80280450: nop

    // 0x80280454: bc1f        L_8028046C
    if (!c1cs) {
        // 0x80280458: nop
    
            goto L_8028046C;
    }
    // 0x80280458: nop

    // 0x8028045C: addiu       $t6, $zero, 0x2
    ctx->r14 = ADD32(0, 0X2);
    // 0x80280460: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280464: b           L_802804A8
    // 0x80280468: sb          $t6, 0x65E8($at)
    MEM_B(0X65E8, ctx->r1) = ctx->r14;
        goto L_802804A8;
    // 0x80280468: sb          $t6, 0x65E8($at)
    MEM_B(0X65E8, ctx->r1) = ctx->r14;
L_8028046C:
    // 0x8028046C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280470: lwc1        $f8, -0x1C6C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C6C);
    // 0x80280474: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80280478: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028047C: nop

    // 0x80280480: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80280484: nop

    // 0x80280488: bc1f        L_802804A0
    if (!c1cs) {
        // 0x8028048C: nop
    
            goto L_802804A0;
    }
    // 0x8028048C: nop

    // 0x80280490: addiu       $t7, $zero, 0x1
    ctx->r15 = ADD32(0, 0X1);
    // 0x80280494: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280498: b           L_802804A8
    // 0x8028049C: sb          $t7, 0x65E8($at)
    MEM_B(0X65E8, ctx->r1) = ctx->r15;
        goto L_802804A8;
    // 0x8028049C: sb          $t7, 0x65E8($at)
    MEM_B(0X65E8, ctx->r1) = ctx->r15;
L_802804A0:
    // 0x802804A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802804A4: sb          $zero, 0x65E8($at)
    MEM_B(0X65E8, ctx->r1) = 0;
L_802804A8:
    // 0x802804A8: jr          $ra
    // 0x802804AC: nop

    return;
    // 0x802804AC: nop

    // 0x802804B0: jr          $ra
    // 0x802804B4: nop

    return;
    // 0x802804B4: nop

;}
RECOMP_FUNC void func_80282854_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282854: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282858: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x8028285C: sw          $zero, 0x24($sp)
    MEM_W(0X24, ctx->r29) = 0;
    // 0x80282860: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282864: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282868: addiu       $t6, $zero, 0x1F5
    ctx->r14 = ADD32(0, 0X1F5);
    // 0x8028286C: sh          $t6, 0xA4($t7)
    MEM_H(0XA4, ctx->r15) = ctx->r14;
    // 0x80282870: lui         $t8, 0x8011
    ctx->r24 = S32(0X8011 << 16);
    // 0x80282874: addiu       $t8, $t8, 0x6058
    ctx->r24 = ADD32(ctx->r24, 0X6058);
    // 0x80282878: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x8028287C: sw          $t8, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r24;
    // 0x80282880: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282884: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282888: jal         0x8001C0EC
    // 0x8028288C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x8028288C: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282890: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x80282894: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80282898: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x8028289C: and         $t0, $t9, $at
    ctx->r8 = ctx->r25 & ctx->r1;
    // 0x802828A0: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x802828A4: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x802828A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802828AC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802828B0: addiu       $a2, $zero, 0xB
    ctx->r6 = ADD32(0, 0XB);
    // 0x802828B4: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802828B8: jal         0x800178D4
    // 0x802828BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x802828BC: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x802828C0: b           L_802828C8
    // 0x802828C4: nop

        goto L_802828C8;
    // 0x802828C4: nop

L_802828C8:
    // 0x802828C8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x802828CC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x802828D0: jr          $ra
    // 0x802828D4: nop

    return;
    // 0x802828D4: nop

;}
RECOMP_FUNC void func_80285AF4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285AF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285AFC: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80285B00: jal         0x802804B8
    // 0x80285B04: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285B04: nop

    after_0:
    // 0x80285B08: b           L_80285B10
    // 0x80285B0C: nop

        goto L_80285B10;
    // 0x80285B0C: nop

L_80285B10:
    // 0x80285B10: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285B14: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285B18: jr          $ra
    // 0x80285B1C: nop

    return;
    // 0x80285B1C: nop

;}
RECOMP_FUNC void func_80282A98_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282A98: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282A9C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282AA0: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80282AA4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282AA8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282AAC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282AB0: addiu       $t7, $zero, 0x1F9
    ctx->r15 = ADD32(0, 0X1F9);
    // 0x80282AB4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282AB8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282ABC: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282AC0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282AC4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282AC8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282ACC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282AD0: jal         0x8001C0EC
    // 0x80282AD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282AD4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282AD8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282ADC: jal         0x8001B754
    // 0x80282AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80282AE0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282AE4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282AE8: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282AEC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282AF0: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282AF4: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282AF8: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282AFC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282B00: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282B04: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80282B08: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282B0C: jal         0x800178D4
    // 0x80282B10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80282B10: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80282B14: b           L_80282B1C
    // 0x80282B18: nop

        goto L_80282B1C;
    // 0x80282B18: nop

L_80282B1C:
    // 0x80282B1C: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282B20: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282B24: jr          $ra
    // 0x80282B28: nop

    return;
    // 0x80282B28: nop

;}
RECOMP_FUNC void func_80284F28_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284F28: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284F2C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284F30: jal         0x80283A2C
    // 0x80284F34: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284F34: nop

    after_0:
    // 0x80284F38: beq         $v0, $zero, L_80284F48
    if (ctx->r2 == 0) {
        // 0x80284F3C: nop
    
            goto L_80284F48;
    }
    // 0x80284F3C: nop

    // 0x80284F40: b           L_80284FCC
    // 0x80284F44: nop

        goto L_80284FCC;
    // 0x80284F44: nop

L_80284F48:
    // 0x80284F48: jal         0x80085D54
    // 0x80284F4C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284F4C: nop

    after_1:
    // 0x80284F50: beq         $v0, $zero, L_80284F60
    if (ctx->r2 == 0) {
        // 0x80284F54: nop
    
            goto L_80284F60;
    }
    // 0x80284F54: nop

    // 0x80284F58: b           L_80284FCC
    // 0x80284F5C: nop

        goto L_80284FCC;
    // 0x80284F5C: nop

L_80284F60:
    // 0x80284F60: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80284F64: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80284F68: nop

    // 0x80284F6C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80284F70: beq         $t7, $zero, L_80284FC4
    if (ctx->r15 == 0) {
        // 0x80284F74: nop
    
            goto L_80284FC4;
    }
    // 0x80284F74: nop

    // 0x80284F78: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284F7C: lb          $t8, 0x65F0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X65F0);
    // 0x80284F80: nop

    // 0x80284F84: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80284F88: bne         $t9, $zero, L_80284FB4
    if (ctx->r25 != 0) {
        // 0x80284F8C: nop
    
            goto L_80284FB4;
    }
    // 0x80284F8C: nop

    // 0x80284F90: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284F94: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80284F98: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80284F9C: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80284FA0: nop

    // 0x80284FA4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80284FA8: nop

    // 0x80284FAC: bc1f        L_80284FC4
    if (!c1cs) {
        // 0x80284FB0: nop
    
            goto L_80284FC4;
    }
    // 0x80284FB0: nop

L_80284FB4:
    // 0x80284FB4: jal         0x802836B8
    // 0x80284FB8: nop

    func_802836B8_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284FB8: nop

    after_2:
    // 0x80284FBC: b           L_80284FCC
    // 0x80284FC0: nop

        goto L_80284FCC;
    // 0x80284FC0: nop

L_80284FC4:
    // 0x80284FC4: b           L_80284FCC
    // 0x80284FC8: nop

        goto L_80284FCC;
    // 0x80284FC8: nop

L_80284FCC:
    // 0x80284FCC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284FD0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284FD4: jr          $ra
    // 0x80284FD8: nop

    return;
    // 0x80284FD8: nop

;}
RECOMP_FUNC void func_80285240_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285240: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285244: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285248: jal         0x80283A2C
    // 0x8028524C: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x8028524C: nop

    after_0:
    // 0x80285250: beq         $v0, $zero, L_80285260
    if (ctx->r2 == 0) {
        // 0x80285254: nop
    
            goto L_80285260;
    }
    // 0x80285254: nop

    // 0x80285258: b           L_802852F4
    // 0x8028525C: nop

        goto L_802852F4;
    // 0x8028525C: nop

L_80285260:
    // 0x80285260: jal         0x80085D54
    // 0x80285264: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80285264: nop

    after_1:
    // 0x80285268: beq         $v0, $zero, L_80285278
    if (ctx->r2 == 0) {
        // 0x8028526C: nop
    
            goto L_80285278;
    }
    // 0x8028526C: nop

    // 0x80285270: b           L_802852F4
    // 0x80285274: nop

        goto L_802852F4;
    // 0x80285274: nop

L_80285278:
    // 0x80285278: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028527C: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80285280: nop

    // 0x80285284: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80285288: bne         $t7, $zero, L_802852A0
    if (ctx->r15 != 0) {
        // 0x8028528C: nop
    
            goto L_802852A0;
    }
    // 0x8028528C: nop

    // 0x80285290: jal         0x80282F00
    // 0x80285294: nop

    func_80282F00_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80285294: nop

    after_2:
    // 0x80285298: b           L_802852F4
    // 0x8028529C: nop

        goto L_802852F4;
    // 0x8028529C: nop

L_802852A0:
    // 0x802852A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802852A4: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x802852A8: nop

    // 0x802852AC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802852B0: beq         $t9, $zero, L_802852C8
    if (ctx->r25 == 0) {
        // 0x802852B4: nop
    
            goto L_802852C8;
    }
    // 0x802852B4: nop

    // 0x802852B8: jal         0x80282E78
    // 0x802852BC: nop

    func_80282E78_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x802852BC: nop

    after_3:
    // 0x802852C0: b           L_802852F4
    // 0x802852C4: nop

        goto L_802852F4;
    // 0x802852C4: nop

L_802852C8:
    // 0x802852C8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802852CC: jal         0x8001B44C
    // 0x802852D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x802852D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802852D4: beq         $v0, $zero, L_802852EC
    if (ctx->r2 == 0) {
        // 0x802852D8: nop
    
            goto L_802852EC;
    }
    // 0x802852D8: nop

    // 0x802852DC: jal         0x80282E08
    // 0x802852E0: nop

    func_80282E08_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x802852E0: nop

    after_5:
    // 0x802852E4: b           L_802852F4
    // 0x802852E8: nop

        goto L_802852F4;
    // 0x802852E8: nop

L_802852EC:
    // 0x802852EC: b           L_802852F4
    // 0x802852F0: nop

        goto L_802852F4;
    // 0x802852F0: nop

L_802852F4:
    // 0x802852F4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802852F8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802852FC: jr          $ra
    // 0x80285300: nop

    return;
    // 0x80285300: nop

;}
RECOMP_FUNC void func_802828D8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802828D8: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802828DC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802828E0: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x802828E4: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802828E8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802828EC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802828F0: addiu       $t7, $zero, 0x1F6
    ctx->r15 = ADD32(0, 0X1F6);
    // 0x802828F4: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802828F8: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802828FC: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282900: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282904: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282908: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028290C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282910: jal         0x8001C0EC
    // 0x80282914: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282914: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282918: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x8028291C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282920: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282924: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282928: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x8028292C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282930: b           L_80282938
    // 0x80282934: nop

        goto L_80282938;
    // 0x80282934: nop

L_80282938:
    // 0x80282938: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028293C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282940: jr          $ra
    // 0x80282944: nop

    return;
    // 0x80282944: nop

;}
RECOMP_FUNC void func_8028547C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028547C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285480: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285484: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285488: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028548C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80285490: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285494: nop

    // 0x80285498: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8028549C: nop

    // 0x802854A0: bc1f        L_802854DC
    if (!c1cs) {
        // 0x802854A4: nop
    
            goto L_802854DC;
    }
    // 0x802854A4: nop

    // 0x802854A8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802854AC: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802854B0: nop

    // 0x802854B4: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802854B8: nop

    // 0x802854BC: bc1f        L_802854DC
    if (!c1cs) {
        // 0x802854C0: nop
    
            goto L_802854DC;
    }
    // 0x802854C0: nop

    // 0x802854C4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802854C8: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802854CC: jal         0x802804B8
    // 0x802854D0: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802854D0: nop

    after_0:
    // 0x802854D4: b           L_802854EC
    // 0x802854D8: nop

        goto L_802854EC;
    // 0x802854D8: nop

L_802854DC:
    // 0x802854DC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802854E0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802854E4: jal         0x802807D8
    // 0x802854E8: nop

    func_802807D8_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802854E8: nop

    after_1:
L_802854EC:
    // 0x802854EC: jal         0x80280B88
    // 0x802854F0: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x802854F0: nop

    after_2:
    // 0x802854F4: b           L_802854FC
    // 0x802854F8: nop

        goto L_802854FC;
    // 0x802854F8: nop

L_802854FC:
    // 0x802854FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285500: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285504: jr          $ra
    // 0x80285508: nop

    return;
    // 0x80285508: nop

;}
RECOMP_FUNC void func_80282B2C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282B2C: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282B30: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282B34: addiu       $t6, $zero, 0x7
    ctx->r14 = ADD32(0, 0X7);
    // 0x80282B38: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282B3C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282B40: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282B44: addiu       $t7, $zero, 0x1FA
    ctx->r15 = ADD32(0, 0X1FA);
    // 0x80282B48: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282B4C: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282B50: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282B54: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282B58: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282B5C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282B60: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282B64: jal         0x8001C0EC
    // 0x80282B68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282B68: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282B6C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282B70: jal         0x8001B754
    // 0x80282B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_1;
    // 0x80282B74: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80282B78: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282B7C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282B80: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282B84: ori         $t1, $t0, 0x1
    ctx->r9 = ctx->r8 | 0X1;
    // 0x80282B88: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282B8C: b           L_80282B94
    // 0x80282B90: nop

        goto L_80282B94;
    // 0x80282B90: nop

L_80282B94:
    // 0x80282B94: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282B98: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282B9C: jr          $ra
    // 0x80282BA0: nop

    return;
    // 0x80282BA0: nop

;}
RECOMP_FUNC void func_802855D4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802855D4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802855D8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802855DC: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x802855E0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x802855E4: jal         0x802804B8
    // 0x802855E8: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802855E8: nop

    after_0:
    // 0x802855EC: jal         0x80280B88
    // 0x802855F0: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x802855F0: nop

    after_1:
    // 0x802855F4: b           L_802855FC
    // 0x802855F8: nop

        goto L_802855FC;
    // 0x802855F8: nop

L_802855FC:
    // 0x802855FC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285600: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285604: jr          $ra
    // 0x80285608: nop

    return;
    // 0x80285608: nop

;}
RECOMP_FUNC void func_80282E78_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E78: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282E7C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282E80: addiu       $t6, $zero, 0x12
    ctx->r14 = ADD32(0, 0X12);
    // 0x80282E84: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282E88: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282E8C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282E90: addiu       $t7, $zero, 0x201
    ctx->r15 = ADD32(0, 0X201);
    // 0x80282E94: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282E98: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282E9C: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282EA0: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282EA4: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282EA8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282EAC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282EB0: jal         0x8001C0EC
    // 0x80282EB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282EB4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282EB8: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282EBC: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282EC0: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282EC4: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282EC8: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282ECC: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282ED0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282ED4: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282ED8: addiu       $a2, $zero, 0x4
    ctx->r6 = ADD32(0, 0X4);
    // 0x80282EDC: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80282EE0: jal         0x800178D4
    // 0x80282EE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_1;
    // 0x80282EE4: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_1:
    // 0x80282EE8: b           L_80282EF0
    // 0x80282EEC: nop

        goto L_80282EF0;
    // 0x80282EEC: nop

L_80282EF0:
    // 0x80282EF0: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282EF4: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282EF8: jr          $ra
    // 0x80282EFC: nop

    return;
    // 0x80282EFC: nop

;}
RECOMP_FUNC void func_802803C4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802803C4: sw          $a2, 0x8($sp)
    MEM_W(0X8, ctx->r29) = ctx->r6;
    // 0x802803C8: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x802803CC: nop

    // 0x802803D0: bc1f        L_80280400
    if (!c1cs) {
        // 0x802803D4: nop
    
            goto L_80280400;
    }
    // 0x802803D4: nop

    // 0x802803D8: lwc1        $f4, 0x8($sp)
    ctx->f4.u32l = MEM_W(ctx->r29, 0X8);
    // 0x802803DC: nop

    // 0x802803E0: add.s       $f12, $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f12.fl = ctx->f12.fl + ctx->f4.fl;
    // 0x802803E4: c.lt.s      $f14, $f12
    CHECK_FR(ctx, 14);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f14.fl < ctx->f12.fl;
    // 0x802803E8: nop

    // 0x802803EC: bc1f        L_802803F8
    if (!c1cs) {
        // 0x802803F0: nop
    
            goto L_802803F8;
    }
    // 0x802803F0: nop

    // 0x802803F4: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_802803F8:
    // 0x802803F8: b           L_80280420
    // 0x802803FC: nop

        goto L_80280420;
    // 0x802803FC: nop

L_80280400:
    // 0x80280400: lwc1        $f6, 0x8($sp)
    ctx->f6.u32l = MEM_W(ctx->r29, 0X8);
    // 0x80280404: nop

    // 0x80280408: sub.s       $f12, $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f12.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f12.fl = ctx->f12.fl - ctx->f6.fl;
    // 0x8028040C: c.lt.s      $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    c1cs = ctx->f12.fl < ctx->f14.fl;
    // 0x80280410: nop

    // 0x80280414: bc1f        L_80280420
    if (!c1cs) {
        // 0x80280418: nop
    
            goto L_80280420;
    }
    // 0x80280418: nop

    // 0x8028041C: mov.s       $f12, $f14
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 14);
    ctx->f12.fl = ctx->f14.fl;
L_80280420:
    // 0x80280420: b           L_80280430
    // 0x80280424: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
        goto L_80280430;
    // 0x80280424: mov.s       $f0, $f12
    CHECK_FR(ctx, 0);
    CHECK_FR(ctx, 12);
    ctx->f0.fl = ctx->f12.fl;
    // 0x80280428: b           L_80280430
    // 0x8028042C: nop

        goto L_80280430;
    // 0x8028042C: nop

L_80280430:
    // 0x80280430: jr          $ra
    // 0x80280434: nop

    return;
    // 0x80280434: nop

;}
RECOMP_FUNC void func_802860F8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802860F8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802860FC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80286100: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286104: lb          $t6, 0x7630($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X7630);
    // 0x80286108: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x8028610C: bne         $t6, $at, L_80286130
    if (ctx->r14 != ctx->r1) {
        // 0x80286110: nop
    
            goto L_80286130;
    }
    // 0x80286110: nop

    // 0x80286114: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80286118: lh          $t7, 0x7618($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X7618);
    // 0x8028611C: nop

    // 0x80286120: beq         $t7, $zero, L_80286130
    if (ctx->r15 == 0) {
        // 0x80286124: nop
    
            goto L_80286130;
    }
    // 0x80286124: nop

    // 0x80286128: b           L_80286364
    // 0x8028612C: nop

        goto L_80286364;
    // 0x8028612C: nop

L_80286130:
    // 0x80286130: jal         0x80280438
    // 0x80286134: nop

    func_80280438_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80286134: nop

    after_0:
    // 0x80286138: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x8028613C: lui         $a1, 0x4270
    ctx->r5 = S32(0X4270 << 16);
    // 0x80286140: jal         0x800682E0
    // 0x80286144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_800682E0(rdram, ctx);
        goto after_1;
    // 0x80286144: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_1:
    // 0x80286148: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x8028614C: mtc1        $zero, $f14
    ctx->f14.u32l = 0;
    // 0x80286150: jal         0x80085B34
    // 0x80286154: nop

    func_80085B34(rdram, ctx);
        goto after_2;
    // 0x80286154: nop

    after_2:
    // 0x80286158: jal         0x802802B8
    // 0x8028615C: nop

    func_802802B8_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x8028615C: nop

    after_3:
    // 0x80286160: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80286164: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80286168: nop

    // 0x8028616C: lh          $t9, 0xA4($t8)
    ctx->r25 = MEM_H(ctx->r24, 0XA4);
    // 0x80286170: nop

    // 0x80286174: sll         $t0, $t9, 3
    ctx->r8 = S32(ctx->r25 << 3);
    // 0x80286178: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8028617C: addu        $t9, $t9, $t0
    ctx->r25 = ADD32(ctx->r25, ctx->r8);
    // 0x80286180: lw          $t9, 0x56E8($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X56E8);
    // 0x80286184: nop

    // 0x80286188: jalr        $t9
    // 0x8028618C: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_4;
    // 0x8028618C: nop

    after_4:
    // 0x80286190: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80286194: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80286198: lui         $t9, 0x8028
    ctx->r25 = S32(0X8028 << 16);
    // 0x8028619C: lh          $t2, 0xA4($t1)
    ctx->r10 = MEM_H(ctx->r9, 0XA4);
    // 0x802861A0: nop

    // 0x802861A4: sll         $t3, $t2, 3
    ctx->r11 = S32(ctx->r10 << 3);
    // 0x802861A8: addu        $t9, $t9, $t3
    ctx->r25 = ADD32(ctx->r25, ctx->r11);
    // 0x802861AC: lw          $t9, 0x56EC($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X56EC);
    // 0x802861B0: nop

    // 0x802861B4: jalr        $t9
    // 0x802861B8: nop

    LOOKUP_FUNC(ctx->r25)(rdram, ctx);
        goto after_5;
    // 0x802861B8: nop

    after_5:
    // 0x802861BC: jal         0x80280150
    // 0x802861C0: nop

    func_80280150_code_extra_5(rdram, ctx);
        goto after_6;
    // 0x802861C0: nop

    after_6:
    // 0x802861C4: jal         0x802801F8
    // 0x802861C8: nop

    func_802801F8_code_extra_5(rdram, ctx);
        goto after_7;
    // 0x802861C8: nop

    after_7:
    // 0x802861CC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802861D0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802861D4: addiu       $at, $zero, 0x217
    ctx->r1 = ADD32(0, 0X217);
    // 0x802861D8: lh          $t5, 0xA4($t4)
    ctx->r13 = MEM_H(ctx->r12, 0XA4);
    // 0x802861DC: nop

    // 0x802861E0: bne         $t5, $at, L_80286208
    if (ctx->r13 != ctx->r1) {
        // 0x802861E4: nop
    
            goto L_80286208;
    }
    // 0x802861E4: nop

    // 0x802861E8: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x802861EC: addiu       $a0, $a0, 0x6630
    ctx->r4 = ADD32(ctx->r4, 0X6630);
    // 0x802861F0: addiu       $a1, $zero, 0x1
    ctx->r5 = ADD32(0, 0X1);
    // 0x802861F4: lui         $a2, 0x4315
    ctx->r6 = S32(0X4315 << 16);
    // 0x802861F8: jal         0x80084BD8
    // 0x802861FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80084BD8(rdram, ctx);
        goto after_8;
    // 0x802861FC: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_8:
    // 0x80286200: b           L_80286220
    // 0x80286204: nop

        goto L_80286220;
    // 0x80286204: nop

L_80286208:
    // 0x80286208: lui         $a0, 0x8028
    ctx->r4 = S32(0X8028 << 16);
    // 0x8028620C: addiu       $a0, $a0, 0x6630
    ctx->r4 = ADD32(ctx->r4, 0X6630);
    // 0x80286210: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80286214: lui         $a2, 0x4315
    ctx->r6 = S32(0X4315 << 16);
    // 0x80286218: jal         0x80084BD8
    // 0x8028621C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    func_80084BD8(rdram, ctx);
        goto after_9;
    // 0x8028621C: addiu       $a3, $zero, 0x0
    ctx->r7 = ADD32(0, 0X0);
    after_9:
L_80286220:
    // 0x80286220: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80286224: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80286228: nop

    // 0x8028622C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80286230: bne         $t7, $zero, L_80286290
    if (ctx->r15 != 0) {
        // 0x80286234: nop
    
            goto L_80286290;
    }
    // 0x80286234: nop

    // 0x80286238: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028623C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80286240: nop

    // 0x80286244: lh          $t0, 0xA4($t8)
    ctx->r8 = MEM_H(ctx->r24, 0XA4);
    // 0x80286248: nop

    // 0x8028624C: addiu       $t1, $t0, -0x208
    ctx->r9 = ADD32(ctx->r8, -0X208);
    // 0x80286250: sltiu       $at, $t1, 0x10
    ctx->r1 = ctx->r9 < 0X10 ? 1 : 0;
    // 0x80286254: beq         $at, $zero, L_80286280
    if (ctx->r1 == 0) {
        // 0x80286258: nop
    
            goto L_80286280;
    }
    // 0x80286258: nop

    // 0x8028625C: sll         $t1, $t1, 2
    ctx->r9 = S32(ctx->r9 << 2);
    // 0x80286260: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80286264: addu        $at, $at, $t1
    gpr jr_addend_80286270 = ctx->r9;
    ctx->r1 = ADD32(ctx->r1, ctx->r9);
    // 0x80286268: lw          $t1, 0x68E0($at)
    ctx->r9 = ADD32(ctx->r1, 0X68E0);
    // 0x8028626C: nop

    // 0x80286270: jr          $t1
    // 0x80286274: nop

    switch (jr_addend_80286270 >> 2) {
        case 0: goto L_80286278; break;
        case 1: goto L_80286278; break;
        case 2: goto L_80286278; break;
        case 3: goto L_80286280; break;
        case 4: goto L_80286278; break;
        case 5: goto L_80286280; break;
        case 6: goto L_80286280; break;
        case 7: goto L_80286280; break;
        case 8: goto L_80286280; break;
        case 9: goto L_80286280; break;
        case 10: goto L_80286280; break;
        case 11: goto L_80286280; break;
        case 12: goto L_80286278; break;
        case 13: goto L_80286278; break;
        case 14: goto L_80286280; break;
        case 15: goto L_80286278; break;
        default: switch_error(__func__, 0x80286270, 0x802868E0);
    }
    // 0x80286274: nop

L_80286278:
    // 0x80286278: b           L_80286290
    // 0x8028627C: nop

        goto L_80286290;
    // 0x8028627C: nop

L_80286280:
    // 0x80286280: jal         0x80280000
    // 0x80286284: nop

    func_80280000_code_extra_5(rdram, ctx);
        goto after_10;
    // 0x80286284: nop

    after_10:
    // 0x80286288: b           L_80286290
    // 0x8028628C: nop

        goto L_80286290;
    // 0x8028628C: nop

L_80286290:
    // 0x80286290: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80286294: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80286298: nop

    // 0x8028629C: lh          $t3, 0xA4($t2)
    ctx->r11 = MEM_H(ctx->r10, 0XA4);
    // 0x802862A0: nop

    // 0x802862A4: addiu       $t9, $t3, -0x20D
    ctx->r25 = ADD32(ctx->r11, -0X20D);
    // 0x802862A8: sltiu       $at, $t9, 0xA
    ctx->r1 = ctx->r25 < 0XA ? 1 : 0;
    // 0x802862AC: beq         $at, $zero, L_8028633C
    if (ctx->r1 == 0) {
        // 0x802862B0: nop
    
            goto L_8028633C;
    }
    // 0x802862B0: nop

    // 0x802862B4: sll         $t9, $t9, 2
    ctx->r25 = S32(ctx->r25 << 2);
    // 0x802862B8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802862BC: addu        $at, $at, $t9
    gpr jr_addend_802862C8 = ctx->r25;
    ctx->r1 = ADD32(ctx->r1, ctx->r25);
    // 0x802862C0: lw          $t9, 0x6920($at)
    ctx->r25 = ADD32(ctx->r1, 0X6920);
    // 0x802862C4: nop

    // 0x802862C8: jr          $t9
    // 0x802862CC: nop

    switch (jr_addend_802862C8 >> 2) {
        case 0: goto L_802862D0; break;
        case 1: goto L_802862D0; break;
        case 2: goto L_8028633C; break;
        case 3: goto L_802862D0; break;
        case 4: goto L_802862D0; break;
        case 5: goto L_8028633C; break;
        case 6: goto L_8028633C; break;
        case 7: goto L_8028633C; break;
        case 8: goto L_8028633C; break;
        case 9: goto L_802862D0; break;
        default: switch_error(__func__, 0x802862C8, 0x80286920);
    }
    // 0x802862CC: nop

L_802862D0:
    // 0x802862D0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802862D4: lh          $t4, 0x6604($t4)
    ctx->r12 = MEM_H(ctx->r12, 0X6604);
    // 0x802862D8: nop

    // 0x802862DC: bne         $t4, $zero, L_80286320
    if (ctx->r12 != 0) {
        // 0x802862E0: nop
    
            goto L_80286320;
    }
    // 0x802862E0: nop

    // 0x802862E4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802862E8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802862EC: lui         $at, 0x4270
    ctx->r1 = S32(0X4270 << 16);
    // 0x802862F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802862F4: lwc1        $f4, 0x4($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X4);
    // 0x802862F8: lw          $a1, 0x0($t5)
    ctx->r5 = MEM_W(ctx->r13, 0X0);
    // 0x802862FC: add.s       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f4.fl + ctx->f6.fl;
    // 0x80286300: lw          $a3, 0x8($t5)
    ctx->r7 = MEM_W(ctx->r13, 0X8);
    // 0x80286304: mfc1        $a2, $f8
    ctx->r6 = (int32_t)ctx->f8.u32l;
    // 0x80286308: jal         0x80081468
    // 0x8028630C: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    func_80081468(rdram, ctx);
        goto after_11;
    // 0x8028630C: addiu       $a0, $zero, 0x2C9
    ctx->r4 = ADD32(0, 0X2C9);
    after_11:
    // 0x80286310: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80286314: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286318: b           L_80286334
    // 0x8028631C: sh          $t6, 0x6604($at)
    MEM_H(0X6604, ctx->r1) = ctx->r14;
        goto L_80286334;
    // 0x8028631C: sh          $t6, 0x6604($at)
    MEM_H(0X6604, ctx->r1) = ctx->r14;
L_80286320:
    // 0x80286320: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80286324: lh          $t7, 0x6604($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X6604);
    // 0x80286328: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028632C: addiu       $t8, $t7, -0x1
    ctx->r24 = ADD32(ctx->r15, -0X1);
    // 0x80286330: sh          $t8, 0x6604($at)
    MEM_H(0X6604, ctx->r1) = ctx->r24;
L_80286334:
    // 0x80286334: b           L_8028634C
    // 0x80286338: nop

        goto L_8028634C;
    // 0x80286338: nop

L_8028633C:
    // 0x8028633C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80286340: sh          $zero, 0x6604($at)
    MEM_H(0X6604, ctx->r1) = 0;
    // 0x80286344: b           L_8028634C
    // 0x80286348: nop

        goto L_8028634C;
    // 0x80286348: nop

L_8028634C:
    // 0x8028634C: jal         0x8001CD20
    // 0x80286350: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_12;
    // 0x80286350: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_12:
    // 0x80286354: jal         0x8001AD6C
    // 0x80286358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_13;
    // 0x80286358: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_13:
    // 0x8028635C: b           L_80286364
    // 0x80286360: nop

        goto L_80286364;
    // 0x80286360: nop

L_80286364:
    // 0x80286364: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80286368: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028636C: jr          $ra
    // 0x80286370: nop

    return;
    // 0x80286370: nop

;}
RECOMP_FUNC void func_802830B4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802830B4: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802830B8: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802830BC: addiu       $t6, $zero, 0x9
    ctx->r14 = ADD32(0, 0X9);
    // 0x802830C0: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802830C4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802830C8: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802830CC: addiu       $t7, $zero, 0x214
    ctx->r15 = ADD32(0, 0X214);
    // 0x802830D0: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802830D4: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x802830D8: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x802830DC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802830E0: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x802830E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802830E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802830EC: jal         0x8001C0EC
    // 0x802830F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802830F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802830F4: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x802830F8: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x802830FC: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80283100: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80283104: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283108: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x8028310C: b           L_80283114
    // 0x80283110: nop

        goto L_80283114;
    // 0x80283110: nop

L_80283114:
    // 0x80283114: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283118: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x8028311C: jr          $ra
    // 0x80283120: nop

    return;
    // 0x80283120: nop

;}
RECOMP_FUNC void func_80284E74_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284E74: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284E78: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284E7C: jal         0x80283A2C
    // 0x80284E80: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284E80: nop

    after_0:
    // 0x80284E84: beq         $v0, $zero, L_80284E94
    if (ctx->r2 == 0) {
        // 0x80284E88: nop
    
            goto L_80284E94;
    }
    // 0x80284E88: nop

    // 0x80284E8C: b           L_80284F18
    // 0x80284E90: nop

        goto L_80284F18;
    // 0x80284E90: nop

L_80284E94:
    // 0x80284E94: jal         0x80085D54
    // 0x80284E98: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284E98: nop

    after_1:
    // 0x80284E9C: beq         $v0, $zero, L_80284EAC
    if (ctx->r2 == 0) {
        // 0x80284EA0: nop
    
            goto L_80284EAC;
    }
    // 0x80284EA0: nop

    // 0x80284EA4: b           L_80284F18
    // 0x80284EA8: nop

        goto L_80284F18;
    // 0x80284EA8: nop

L_80284EAC:
    // 0x80284EAC: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80284EB0: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80284EB4: nop

    // 0x80284EB8: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80284EBC: beq         $t7, $zero, L_80284F10
    if (ctx->r15 == 0) {
        // 0x80284EC0: nop
    
            goto L_80284F10;
    }
    // 0x80284EC0: nop

    // 0x80284EC4: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284EC8: lb          $t8, 0x65F0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X65F0);
    // 0x80284ECC: nop

    // 0x80284ED0: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80284ED4: bne         $t9, $zero, L_80284F00
    if (ctx->r25 != 0) {
        // 0x80284ED8: nop
    
            goto L_80284F00;
    }
    // 0x80284ED8: nop

    // 0x80284EDC: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284EE0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80284EE4: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80284EE8: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80284EEC: nop

    // 0x80284EF0: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80284EF4: nop

    // 0x80284EF8: bc1f        L_80284F10
    if (!c1cs) {
        // 0x80284EFC: nop
    
            goto L_80284F10;
    }
    // 0x80284EFC: nop

L_80284F00:
    // 0x80284F00: jal         0x802836B8
    // 0x80284F04: nop

    func_802836B8_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284F04: nop

    after_2:
    // 0x80284F08: b           L_80284F18
    // 0x80284F0C: nop

        goto L_80284F18;
    // 0x80284F0C: nop

L_80284F10:
    // 0x80284F10: b           L_80284F18
    // 0x80284F14: nop

        goto L_80284F18;
    // 0x80284F14: nop

L_80284F18:
    // 0x80284F18: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284F1C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284F20: jr          $ra
    // 0x80284F24: nop

    return;
    // 0x80284F24: nop

;}
RECOMP_FUNC void func_80284D1C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284D1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284D20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284D24: jal         0x80283B18
    // 0x80284D28: nop

    func_80283B18_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284D28: nop

    after_0:
    // 0x80284D2C: beq         $v0, $zero, L_80284D3C
    if (ctx->r2 == 0) {
        // 0x80284D30: nop
    
            goto L_80284D3C;
    }
    // 0x80284D30: nop

    // 0x80284D34: b           L_80284D90
    // 0x80284D38: nop

        goto L_80284D90;
    // 0x80284D38: nop

L_80284D3C:
    // 0x80284D3C: jal         0x80085D54
    // 0x80284D40: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284D40: nop

    after_1:
    // 0x80284D44: beq         $v0, $zero, L_80284D54
    if (ctx->r2 == 0) {
        // 0x80284D48: nop
    
            goto L_80284D54;
    }
    // 0x80284D48: nop

    // 0x80284D4C: b           L_80284D90
    // 0x80284D50: nop

        goto L_80284D90;
    // 0x80284D50: nop

L_80284D54:
    // 0x80284D54: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284D58: jal         0x8001B44C
    // 0x80284D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80284D5C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80284D60: beq         $v0, $zero, L_80284D88
    if (ctx->r2 == 0) {
        // 0x80284D64: nop
    
            goto L_80284D88;
    }
    // 0x80284D64: nop

    // 0x80284D68: jal         0x80282854
    // 0x80284D6C: nop

    func_80282854_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284D6C: nop

    after_3:
    // 0x80284D70: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284D74: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80284D78: addiu       $t6, $zero, 0x3C
    ctx->r14 = ADD32(0, 0X3C);
    // 0x80284D7C: sh          $t6, 0x108($t7)
    MEM_H(0X108, ctx->r15) = ctx->r14;
    // 0x80284D80: b           L_80284D90
    // 0x80284D84: nop

        goto L_80284D90;
    // 0x80284D84: nop

L_80284D88:
    // 0x80284D88: b           L_80284D90
    // 0x80284D8C: nop

        goto L_80284D90;
    // 0x80284D8C: nop

L_80284D90:
    // 0x80284D90: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284D94: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284D98: jr          $ra
    // 0x80284D9C: nop

    return;
    // 0x80284D9C: nop

;}
RECOMP_FUNC void func_8028478C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028478C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80284790: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80284794: jal         0x80283A2C
    // 0x80284798: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284798: nop

    after_0:
    // 0x8028479C: beq         $v0, $zero, L_802847AC
    if (ctx->r2 == 0) {
        // 0x802847A0: nop
    
            goto L_802847AC;
    }
    // 0x802847A0: nop

    // 0x802847A4: b           L_80284870
    // 0x802847A8: nop

        goto L_80284870;
    // 0x802847A8: nop

L_802847AC:
    // 0x802847AC: jal         0x80085D54
    // 0x802847B0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802847B0: nop

    after_1:
    // 0x802847B4: beq         $v0, $zero, L_802847C4
    if (ctx->r2 == 0) {
        // 0x802847B8: nop
    
            goto L_802847C4;
    }
    // 0x802847B8: nop

    // 0x802847BC: b           L_80284870
    // 0x802847C0: nop

        goto L_80284870;
    // 0x802847C0: nop

L_802847C4:
    // 0x802847C4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802847C8: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x802847CC: nop

    // 0x802847D0: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x802847D4: beq         $t7, $zero, L_80284804
    if (ctx->r15 == 0) {
        // 0x802847D8: nop
    
            goto L_80284804;
    }
    // 0x802847D8: nop

    // 0x802847DC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802847E0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802847E4: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x802847E8: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x802847EC: jal         0x800178D4
    // 0x802847F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x802847F0: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x802847F4: jal         0x80283854
    // 0x802847F8: nop

    func_80283854_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x802847F8: nop

    after_3:
    // 0x802847FC: b           L_80284870
    // 0x80284800: nop

        goto L_80284870;
    // 0x80284800: nop

L_80284804:
    // 0x80284804: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x80284808: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x8028480C: nop

    // 0x80284810: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x80284814: beq         $t9, $zero, L_80284868
    if (ctx->r25 == 0) {
        // 0x80284818: nop
    
            goto L_80284868;
    }
    // 0x80284818: nop

    // 0x8028481C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284820: lb          $t0, 0x65F0($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X65F0);
    // 0x80284824: nop

    // 0x80284828: andi        $t1, $t0, 0x3
    ctx->r9 = ctx->r8 & 0X3;
    // 0x8028482C: bne         $t1, $zero, L_80284858
    if (ctx->r9 != 0) {
        // 0x80284830: nop
    
            goto L_80284858;
    }
    // 0x80284830: nop

    // 0x80284834: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80284838: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028483C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80284840: lwc1        $f4, 0x28($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X28);
    // 0x80284844: nop

    // 0x80284848: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x8028484C: nop

    // 0x80284850: bc1f        L_80284868
    if (!c1cs) {
        // 0x80284854: nop
    
            goto L_80284868;
    }
    // 0x80284854: nop

L_80284858:
    // 0x80284858: jal         0x80282F00
    // 0x8028485C: nop

    func_80282F00_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x8028485C: nop

    after_4:
    // 0x80284860: b           L_80284870
    // 0x80284864: nop

        goto L_80284870;
    // 0x80284864: nop

L_80284868:
    // 0x80284868: b           L_80284870
    // 0x8028486C: nop

        goto L_80284870;
    // 0x8028486C: nop

L_80284870:
    // 0x80284870: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284874: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284878: jr          $ra
    // 0x8028487C: nop

    return;
    // 0x8028487C: nop

;}
RECOMP_FUNC void func_80282E08_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282E08: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282E0C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282E10: addiu       $t6, $zero, 0xF
    ctx->r14 = ADD32(0, 0XF);
    // 0x80282E14: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282E18: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282E1C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282E20: addiu       $t7, $zero, 0x200
    ctx->r15 = ADD32(0, 0X200);
    // 0x80282E24: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282E28: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282E2C: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282E30: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282E34: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282E38: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282E3C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282E40: jal         0x8001C0EC
    // 0x80282E44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282E44: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282E48: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282E4C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282E50: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282E54: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282E58: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282E5C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282E60: b           L_80282E68
    // 0x80282E64: nop

        goto L_80282E68;
    // 0x80282E64: nop

L_80282E68:
    // 0x80282E68: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282E6C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282E70: jr          $ra
    // 0x80282E74: nop

    return;
    // 0x80282E74: nop

;}
RECOMP_FUNC void func_802807D8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802807D8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802807DC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802807E0: nop

    // 0x802807E4: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x802807E8: nop

    // 0x802807EC: c.lt.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl < ctx->f4.fl;
    // 0x802807F0: nop

    // 0x802807F4: bc1f        L_80280AF8
    if (!c1cs) {
        // 0x802807F8: nop
    
            goto L_80280AF8;
    }
    // 0x802807F8: nop

    // 0x802807FC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280800: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280804: lui         $at, 0xC1F0
    ctx->r1 = S32(0XC1F0 << 16);
    // 0x80280808: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028080C: nop

    // 0x80280810: c.lt.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl < ctx->f8.fl;
    // 0x80280814: nop

    // 0x80280818: bc1f        L_802808A4
    if (!c1cs) {
        // 0x8028081C: nop
    
            goto L_802808A4;
    }
    // 0x8028081C: nop

    // 0x80280820: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280824: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280828: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8028082C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280830: lwc1        $f10, 0x3C($t7)
    ctx->f10.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80280834: nop

    // 0x80280838: c.le.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl <= ctx->f16.fl;
    // 0x8028083C: nop

    // 0x80280840: bc1f        L_80280874
    if (!c1cs) {
        // 0x80280844: nop
    
            goto L_80280874;
    }
    // 0x80280844: nop

    // 0x80280848: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028084C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280850: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280854: lwc1        $f18, 0x44($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80280858: lwc1        $f7, 0x6800($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6800);
    // 0x8028085C: lwc1        $f6, 0x6804($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6804);
    // 0x80280860: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80280864: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80280868: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x8028086C: b           L_8028089C
    // 0x80280870: swc1        $f10, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f10.u32l;
        goto L_8028089C;
    // 0x80280870: swc1        $f10, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f10.u32l;
L_80280874:
    // 0x80280874: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280878: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028087C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280880: lwc1        $f16, 0x44($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80280884: lwc1        $f5, 0x6808($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6808);
    // 0x80280888: lwc1        $f4, 0x680C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X680C);
    // 0x8028088C: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80280890: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80280894: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80280898: swc1        $f8, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f8.u32l;
L_8028089C:
    // 0x8028089C: b           L_80280AC4
    // 0x802808A0: nop

        goto L_80280AC4;
    // 0x802808A0: nop

L_802808A4:
    // 0x802808A4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802808A8: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802808AC: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802808B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802808B4: nop

    // 0x802808B8: c.lt.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl < ctx->f10.fl;
    // 0x802808BC: nop

    // 0x802808C0: bc1f        L_8028094C
    if (!c1cs) {
        // 0x802808C4: nop
    
            goto L_8028094C;
    }
    // 0x802808C4: nop

    // 0x802808C8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802808CC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802808D0: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x802808D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802808D8: lwc1        $f18, 0x3C($t0)
    ctx->f18.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x802808DC: nop

    // 0x802808E0: c.le.s      $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f4.fl <= ctx->f18.fl;
    // 0x802808E4: nop

    // 0x802808E8: bc1f        L_8028091C
    if (!c1cs) {
        // 0x802808EC: nop
    
            goto L_8028091C;
    }
    // 0x802808EC: nop

    // 0x802808F0: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802808F4: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802808F8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802808FC: lwc1        $f6, 0x44($t1)
    ctx->f6.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80280900: lwc1        $f11, 0x6810($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X6810);
    // 0x80280904: lwc1        $f10, 0x6814($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X6814);
    // 0x80280908: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x8028090C: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x80280910: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80280914: b           L_80280944
    // 0x80280918: swc1        $f18, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f18.u32l;
        goto L_80280944;
    // 0x80280918: swc1        $f18, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f18.u32l;
L_8028091C:
    // 0x8028091C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280920: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280924: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280928: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8028092C: lwc1        $f9, 0x6818($at)
    ctx->f_odd[(9 - 1) * 2] = MEM_W(ctx->r1, 0X6818);
    // 0x80280930: lwc1        $f8, 0x681C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X681C);
    // 0x80280934: cvt.d.s     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.fl); 
    ctx->f6.d = CVT_D_S(ctx->f4.fl);
    // 0x80280938: sub.d       $f10, $f6, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f6.d); NAN_CHECK(ctx->f8.d); 
    ctx->f10.d = ctx->f6.d - ctx->f8.d;
    // 0x8028093C: cvt.s.d     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.d); 
    ctx->f16.fl = CVT_S_D(ctx->f10.d);
    // 0x80280940: swc1        $f16, 0x44($t2)
    MEM_W(0X44, ctx->r10) = ctx->f16.u32l;
L_80280944:
    // 0x80280944: b           L_80280AC4
    // 0x80280948: nop

        goto L_80280AC4;
    // 0x80280948: nop

L_8028094C:
    // 0x8028094C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280950: lwc1        $f18, -0x1C74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280954: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80280958: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028095C: nop

    // 0x80280960: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80280964: nop

    // 0x80280968: bc1f        L_802809F4
    if (!c1cs) {
        // 0x8028096C: nop
    
            goto L_802809F4;
    }
    // 0x8028096C: nop

    // 0x80280970: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280974: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280978: lui         $at, 0x4348
    ctx->r1 = S32(0X4348 << 16);
    // 0x8028097C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280980: lwc1        $f6, 0x3C($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80280984: nop

    // 0x80280988: c.le.s      $f6, $f8
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f6.fl <= ctx->f8.fl;
    // 0x8028098C: nop

    // 0x80280990: bc1f        L_802809C4
    if (!c1cs) {
        // 0x80280994: nop
    
            goto L_802809C4;
    }
    // 0x80280994: nop

    // 0x80280998: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028099C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802809A0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802809A4: lwc1        $f10, 0x44($t4)
    ctx->f10.u32l = MEM_W(ctx->r12, 0X44);
    // 0x802809A8: lwc1        $f19, 0x6820($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6820);
    // 0x802809AC: lwc1        $f18, 0x6824($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6824);
    // 0x802809B0: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x802809B4: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x802809B8: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x802809BC: b           L_802809EC
    // 0x802809C0: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
        goto L_802809EC;
    // 0x802809C0: swc1        $f6, 0x44($t4)
    MEM_W(0X44, ctx->r12) = ctx->f6.u32l;
L_802809C4:
    // 0x802809C4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802809C8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802809CC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802809D0: lwc1        $f8, 0x44($t5)
    ctx->f8.u32l = MEM_W(ctx->r13, 0X44);
    // 0x802809D4: lwc1        $f17, 0x6828($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X6828);
    // 0x802809D8: lwc1        $f16, 0x682C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X682C);
    // 0x802809DC: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x802809E0: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x802809E4: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x802809E8: swc1        $f4, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f4.u32l;
L_802809EC:
    // 0x802809EC: b           L_80280AC4
    // 0x802809F0: nop

        goto L_80280AC4;
    // 0x802809F0: nop

L_802809F4:
    // 0x802809F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802809F8: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802809FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280A00: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280A04: nop

    // 0x80280A08: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80280A0C: nop

    // 0x80280A10: bc1f        L_80280A9C
    if (!c1cs) {
        // 0x80280A14: nop
    
            goto L_80280A9C;
    }
    // 0x80280A14: nop

    // 0x80280A18: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280A1C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280A20: lui         $at, 0x4320
    ctx->r1 = S32(0X4320 << 16);
    // 0x80280A24: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280A28: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80280A2C: nop

    // 0x80280A30: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80280A34: nop

    // 0x80280A38: bc1f        L_80280A6C
    if (!c1cs) {
        // 0x80280A3C: nop
    
            goto L_80280A6C;
    }
    // 0x80280A3C: nop

    // 0x80280A40: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280A44: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280A48: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280A4C: lwc1        $f18, 0x44($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X44);
    // 0x80280A50: lwc1        $f7, 0x6830($at)
    ctx->f_odd[(7 - 1) * 2] = MEM_W(ctx->r1, 0X6830);
    // 0x80280A54: lwc1        $f6, 0x6834($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6834);
    // 0x80280A58: cvt.d.s     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f4.d = CVT_D_S(ctx->f18.fl);
    // 0x80280A5C: add.d       $f8, $f4, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.d); NAN_CHECK(ctx->f6.d); 
    ctx->f8.d = ctx->f4.d + ctx->f6.d;
    // 0x80280A60: cvt.s.d     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.d); 
    ctx->f10.fl = CVT_S_D(ctx->f8.d);
    // 0x80280A64: b           L_80280A94
    // 0x80280A68: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
        goto L_80280A94;
    // 0x80280A68: swc1        $f10, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f10.u32l;
L_80280A6C:
    // 0x80280A6C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280A70: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280A74: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280A78: lwc1        $f16, 0x44($t8)
    ctx->f16.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80280A7C: lwc1        $f5, 0x6838($at)
    ctx->f_odd[(5 - 1) * 2] = MEM_W(ctx->r1, 0X6838);
    // 0x80280A80: lwc1        $f4, 0x683C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X683C);
    // 0x80280A84: cvt.d.s     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f18.d = CVT_D_S(ctx->f16.fl);
    // 0x80280A88: sub.d       $f6, $f18, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f18.d); NAN_CHECK(ctx->f4.d); 
    ctx->f6.d = ctx->f18.d - ctx->f4.d;
    // 0x80280A8C: cvt.s.d     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.d); 
    ctx->f8.fl = CVT_S_D(ctx->f6.d);
    // 0x80280A90: swc1        $f8, 0x44($t8)
    MEM_W(0X44, ctx->r24) = ctx->f8.u32l;
L_80280A94:
    // 0x80280A94: b           L_80280AC4
    // 0x80280A98: nop

        goto L_80280AC4;
    // 0x80280A98: nop

L_80280A9C:
    // 0x80280A9C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280AA0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280AA4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280AA8: lwc1        $f10, 0x44($t9)
    ctx->f10.u32l = MEM_W(ctx->r25, 0X44);
    // 0x80280AAC: lwc1        $f19, 0x6840($at)
    ctx->f_odd[(19 - 1) * 2] = MEM_W(ctx->r1, 0X6840);
    // 0x80280AB0: lwc1        $f18, 0x6844($at)
    ctx->f18.u32l = MEM_W(ctx->r1, 0X6844);
    // 0x80280AB4: cvt.d.s     $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f10.fl); 
    ctx->f16.d = CVT_D_S(ctx->f10.fl);
    // 0x80280AB8: add.d       $f4, $f16, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f16.d); NAN_CHECK(ctx->f18.d); 
    ctx->f4.d = ctx->f16.d + ctx->f18.d;
    // 0x80280ABC: cvt.s.d     $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f4.d); 
    ctx->f6.fl = CVT_S_D(ctx->f4.d);
    // 0x80280AC0: swc1        $f6, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f6.u32l;
L_80280AC4:
    // 0x80280AC4: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280AC8: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280ACC: nop

    // 0x80280AD0: lwc1        $f8, 0x44($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80280AD4: nop

    // 0x80280AD8: c.le.s      $f8, $f12
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f8.fl <= ctx->f12.fl;
    // 0x80280ADC: nop

    // 0x80280AE0: bc1f        L_80280AF8
    if (!c1cs) {
        // 0x80280AE4: nop
    
            goto L_80280AF8;
    }
    // 0x80280AE4: nop

    // 0x80280AE8: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280AEC: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280AF0: nop

    // 0x80280AF4: swc1        $f12, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f12.u32l;
L_80280AF8:
    // 0x80280AF8: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280AFC: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280B00: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80280B04: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280B08: lwc1        $f10, 0x44($t2)
    ctx->f10.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80280B0C: nop

    // 0x80280B10: c.le.s      $f16, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f16.fl <= ctx->f10.fl;
    // 0x80280B14: nop

    // 0x80280B18: bc1f        L_80280B38
    if (!c1cs) {
        // 0x80280B1C: nop
    
            goto L_80280B38;
    }
    // 0x80280B1C: nop

    // 0x80280B20: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80280B24: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280B28: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280B2C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280B30: b           L_80280B78
    // 0x80280B34: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
        goto L_80280B78;
    // 0x80280B34: swc1        $f18, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f18.u32l;
L_80280B38:
    // 0x80280B38: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280B3C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280B40: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280B44: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280B48: lwc1        $f4, 0x44($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X44);
    // 0x80280B4C: nop

    // 0x80280B50: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80280B54: nop

    // 0x80280B58: bc1f        L_80280B78
    if (!c1cs) {
        // 0x80280B5C: nop
    
            goto L_80280B78;
    }
    // 0x80280B5C: nop

    // 0x80280B60: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280B64: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280B68: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280B6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280B70: nop

    // 0x80280B74: swc1        $f8, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f8.u32l;
L_80280B78:
    // 0x80280B78: jr          $ra
    // 0x80280B7C: nop

    return;
    // 0x80280B7C: nop

    // 0x80280B80: jr          $ra
    // 0x80280B84: nop

    return;
    // 0x80280B84: nop

;}
RECOMP_FUNC void func_802838A0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802838A0: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x802838A4: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802838A8: addiu       $t6, $zero, 0x13
    ctx->r14 = ADD32(0, 0X13);
    // 0x802838AC: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x802838B0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802838B4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802838B8: addiu       $t7, $zero, 0x211
    ctx->r15 = ADD32(0, 0X211);
    // 0x802838BC: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x802838C0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802838C4: lh          $t9, 0x6600($t9)
    ctx->r25 = MEM_H(ctx->r25, 0X6600);
    // 0x802838C8: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x802838CC: bne         $t9, $at, L_802838FC
    if (ctx->r25 != ctx->r1) {
        // 0x802838D0: nop
    
            goto L_802838FC;
    }
    // 0x802838D0: nop

    // 0x802838D4: lui         $t0, 0x8011
    ctx->r8 = S32(0X8011 << 16);
    // 0x802838D8: addiu       $t0, $t0, 0x6058
    ctx->r8 = ADD32(ctx->r8, 0X6058);
    // 0x802838DC: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x802838E0: sw          $t0, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r8;
    // 0x802838E4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802838E8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802838EC: jal         0x8001C0EC
    // 0x802838F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x802838F0: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x802838F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802838F8: sh          $zero, 0x6600($at)
    MEM_H(0X6600, ctx->r1) = 0;
L_802838FC:
    // 0x802838FC: lui         $t1, 0x8016
    ctx->r9 = S32(0X8016 << 16);
    // 0x80283900: lw          $t1, 0x51A4($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X51A4);
    // 0x80283904: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283908: ori         $t2, $t1, 0x1
    ctx->r10 = ctx->r9 | 0X1;
    // 0x8028390C: sw          $t2, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r10;
    // 0x80283910: b           L_80283918
    // 0x80283914: nop

        goto L_80283918;
    // 0x80283914: nop

L_80283918:
    // 0x80283918: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028391C: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80283920: jr          $ra
    // 0x80283924: nop

    return;
    // 0x80283924: nop

;}
RECOMP_FUNC void func_802853EC_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802853EC: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802853F0: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802853F4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802853F8: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802853FC: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80285400: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285404: nop

    // 0x80285408: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8028540C: nop

    // 0x80285410: bc1f        L_8028544C
    if (!c1cs) {
        // 0x80285414: nop
    
            goto L_8028544C;
    }
    // 0x80285414: nop

    // 0x80285418: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028541C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80285420: nop

    // 0x80285424: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80285428: nop

    // 0x8028542C: bc1f        L_8028544C
    if (!c1cs) {
        // 0x80285430: nop
    
            goto L_8028544C;
    }
    // 0x80285430: nop

    // 0x80285434: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80285438: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028543C: jal         0x802804B8
    // 0x80285440: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285440: nop

    after_0:
    // 0x80285444: b           L_8028545C
    // 0x80285448: nop

        goto L_8028545C;
    // 0x80285448: nop

L_8028544C:
    // 0x8028544C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285450: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285454: jal         0x802807D8
    // 0x80285458: nop

    func_802807D8_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285458: nop

    after_1:
L_8028545C:
    // 0x8028545C: jal         0x80280B88
    // 0x80285460: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80285460: nop

    after_2:
    // 0x80285464: b           L_8028546C
    // 0x80285468: nop

        goto L_8028546C;
    // 0x80285468: nop

L_8028546C:
    // 0x8028546C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285470: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285474: jr          $ra
    // 0x80285478: nop

    return;
    // 0x80285478: nop

;}
RECOMP_FUNC void func_80284AF4_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284AF4: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284AF8: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284AFC: jal         0x80283B18
    // 0x80284B00: nop

    func_80283B18_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80284B00: nop

    after_0:
    // 0x80284B04: beq         $v0, $zero, L_80284B14
    if (ctx->r2 == 0) {
        // 0x80284B08: nop
    
            goto L_80284B14;
    }
    // 0x80284B08: nop

    // 0x80284B0C: b           L_80284B84
    // 0x80284B10: nop

        goto L_80284B84;
    // 0x80284B10: nop

L_80284B14:
    // 0x80284B14: jal         0x80085D54
    // 0x80284B18: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284B18: nop

    after_1:
    // 0x80284B1C: beq         $v0, $zero, L_80284B2C
    if (ctx->r2 == 0) {
        // 0x80284B20: nop
    
            goto L_80284B2C;
    }
    // 0x80284B20: nop

    // 0x80284B24: b           L_80284B84
    // 0x80284B28: nop

        goto L_80284B84;
    // 0x80284B28: nop

L_80284B2C:
    // 0x80284B2C: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284B30: jal         0x8001B44C
    // 0x80284B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_2;
    // 0x80284B34: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x80284B38: beq         $v0, $zero, L_80284B7C
    if (ctx->r2 == 0) {
        // 0x80284B3C: nop
    
            goto L_80284B7C;
    }
    // 0x80284B3C: nop

    // 0x80284B40: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284B44: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80284B48: nop

    // 0x80284B4C: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80284B50: nop

    // 0x80284B54: bne         $t7, $zero, L_80284B6C
    if (ctx->r15 != 0) {
        // 0x80284B58: nop
    
            goto L_80284B6C;
    }
    // 0x80284B58: nop

    // 0x80284B5C: jal         0x802835CC
    // 0x80284B60: nop

    func_802835CC_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284B60: nop

    after_3:
    // 0x80284B64: b           L_80284B74
    // 0x80284B68: nop

        goto L_80284B74;
    // 0x80284B68: nop

L_80284B6C:
    // 0x80284B6C: jal         0x80283390
    // 0x80284B70: nop

    func_80283390_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80284B70: nop

    after_4:
L_80284B74:
    // 0x80284B74: b           L_80284B84
    // 0x80284B78: nop

        goto L_80284B84;
    // 0x80284B78: nop

L_80284B7C:
    // 0x80284B7C: b           L_80284B84
    // 0x80284B80: nop

        goto L_80284B84;
    // 0x80284B80: nop

L_80284B84:
    // 0x80284B84: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284B88: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284B8C: jr          $ra
    // 0x80284B90: nop

    return;
    // 0x80284B90: nop

;}
RECOMP_FUNC void func_80285D3C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285D3C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285D40: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285D44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285D48: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80285D4C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80285D50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285D54: nop

    // 0x80285D58: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80285D5C: nop

    // 0x80285D60: bc1f        L_80285D9C
    if (!c1cs) {
        // 0x80285D64: nop
    
            goto L_80285D9C;
    }
    // 0x80285D64: nop

    // 0x80285D68: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285D6C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80285D70: nop

    // 0x80285D74: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80285D78: nop

    // 0x80285D7C: bc1f        L_80285D9C
    if (!c1cs) {
        // 0x80285D80: nop
    
            goto L_80285D9C;
    }
    // 0x80285D80: nop

    // 0x80285D84: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80285D88: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285D8C: jal         0x802804B8
    // 0x80285D90: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285D90: nop

    after_0:
    // 0x80285D94: b           L_80285DAC
    // 0x80285D98: nop

        goto L_80285DAC;
    // 0x80285D98: nop

L_80285D9C:
    // 0x80285D9C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285DA0: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285DA4: jal         0x802807D8
    // 0x80285DA8: nop

    func_802807D8_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285DA8: nop

    after_1:
L_80285DAC:
    // 0x80285DAC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285DB0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80285DB4: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80285DB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80285DBC: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80285DC0: jal         0x80015538
    // 0x80285DC4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80285DC4: nop

    after_2:
    // 0x80285DC8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285DCC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80285DD0: nop

    // 0x80285DD4: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x80285DD8: b           L_80285DE0
    // 0x80285DDC: nop

        goto L_80285DE0;
    // 0x80285DDC: nop

L_80285DE0:
    // 0x80285DE0: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285DE4: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285DE8: jr          $ra
    // 0x80285DEC: nop

    return;
    // 0x80285DEC: nop

;}
RECOMP_FUNC void func_80280648_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280648: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028064C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280650: nop

    // 0x80280654: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80280658: nop

    // 0x8028065C: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x80280660: nop

    // 0x80280664: bc1f        L_802806D0
    if (!c1cs) {
        // 0x80280668: nop
    
            goto L_802806D0;
    }
    // 0x80280668: nop

    // 0x8028066C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280670: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280674: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280678: lwc1        $f6, 0x44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X44);
    // 0x8028067C: lwc1        $f11, 0x67F0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X67F0);
    // 0x80280680: lwc1        $f10, 0x67F4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X67F4);
    // 0x80280684: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x80280688: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x8028068C: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80280690: swc1        $f18, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f18.u32l;
    // 0x80280694: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280698: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028069C: nop

    // 0x802806A0: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x802806A4: nop

    // 0x802806A8: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x802806AC: nop

    // 0x802806B0: bc1f        L_802806C8
    if (!c1cs) {
        // 0x802806B4: nop
    
            goto L_802806C8;
    }
    // 0x802806B4: nop

    // 0x802806B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802806BC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802806C0: nop

    // 0x802806C4: swc1        $f12, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f12.u32l;
L_802806C8:
    // 0x802806C8: b           L_80280750
    // 0x802806CC: nop

        goto L_80280750;
    // 0x802806CC: nop

L_802806D0:
    // 0x802806D0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802806D4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802806D8: nop

    // 0x802806DC: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x802806E0: nop

    // 0x802806E4: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x802806E8: nop

    // 0x802806EC: bc1f        L_80280750
    if (!c1cs) {
        // 0x802806F0: nop
    
            goto L_80280750;
    }
    // 0x802806F0: nop

    // 0x802806F4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802806F8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802806FC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280700: lwc1        $f8, 0x44($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80280704: lwc1        $f17, 0x67F8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X67F8);
    // 0x80280708: lwc1        $f16, 0x67FC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X67FC);
    // 0x8028070C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80280710: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80280714: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80280718: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x8028071C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280720: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280724: nop

    // 0x80280728: lwc1        $f6, 0x44($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8028072C: nop

    // 0x80280730: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x80280734: nop

    // 0x80280738: bc1f        L_80280750
    if (!c1cs) {
        // 0x8028073C: nop
    
            goto L_80280750;
    }
    // 0x8028073C: nop

    // 0x80280740: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280744: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280748: nop

    // 0x8028074C: swc1        $f12, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f12.u32l;
L_80280750:
    // 0x80280750: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280754: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280758: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028075C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280760: lwc1        $f8, 0x44($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X44);
    // 0x80280764: nop

    // 0x80280768: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x8028076C: nop

    // 0x80280770: bc1f        L_80280790
    if (!c1cs) {
        // 0x80280774: nop
    
            goto L_80280790;
    }
    // 0x80280774: nop

    // 0x80280778: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x8028077C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280780: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280784: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280788: b           L_802807C8
    // 0x8028078C: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
        goto L_802807C8;
    // 0x8028078C: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
L_80280790:
    // 0x80280790: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280794: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280798: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028079C: lwc1        $f18, 0x44($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X44);
    // 0x802807A0: nop

    // 0x802807A4: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x802807A8: nop

    // 0x802807AC: bc1f        L_802807C8
    if (!c1cs) {
        // 0x802807B0: nop
    
            goto L_802807C8;
    }
    // 0x802807B0: nop

    // 0x802807B4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802807B8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802807BC: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802807C0: nop

    // 0x802807C4: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
L_802807C8:
    // 0x802807C8: jr          $ra
    // 0x802807CC: nop

    return;
    // 0x802807CC: nop

    // 0x802807D0: jr          $ra
    // 0x802807D4: nop

    return;
    // 0x802807D4: nop

;}
RECOMP_FUNC void func_80284C94_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284C94: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284C98: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284C9C: jal         0x80085D54
    // 0x80284CA0: nop

    func_80085D54(rdram, ctx);
        goto after_0;
    // 0x80284CA0: nop

    after_0:
    // 0x80284CA4: beq         $v0, $zero, L_80284CB4
    if (ctx->r2 == 0) {
        // 0x80284CA8: nop
    
            goto L_80284CB4;
    }
    // 0x80284CA8: nop

    // 0x80284CAC: b           L_80284D0C
    // 0x80284CB0: nop

        goto L_80284D0C;
    // 0x80284CB0: nop

L_80284CB4:
    // 0x80284CB4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284CB8: jal         0x8001B44C
    // 0x80284CBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_1;
    // 0x80284CBC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_1:
    // 0x80284CC0: beq         $v0, $zero, L_80284D04
    if (ctx->r2 == 0) {
        // 0x80284CC4: nop
    
            goto L_80284D04;
    }
    // 0x80284CC4: nop

    // 0x80284CC8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284CCC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80284CD0: nop

    // 0x80284CD4: lh          $t7, 0x108($t6)
    ctx->r15 = MEM_H(ctx->r14, 0X108);
    // 0x80284CD8: nop

    // 0x80284CDC: bne         $t7, $zero, L_80284CF4
    if (ctx->r15 != 0) {
        // 0x80284CE0: nop
    
            goto L_80284CF4;
    }
    // 0x80284CE0: nop

    // 0x80284CE4: jal         0x802835CC
    // 0x80284CE8: nop

    func_802835CC_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80284CE8: nop

    after_2:
    // 0x80284CEC: b           L_80284CFC
    // 0x80284CF0: nop

        goto L_80284CFC;
    // 0x80284CF0: nop

L_80284CF4:
    // 0x80284CF4: jal         0x80283390
    // 0x80284CF8: nop

    func_80283390_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284CF8: nop

    after_3:
L_80284CFC:
    // 0x80284CFC: b           L_80284D0C
    // 0x80284D00: nop

        goto L_80284D0C;
    // 0x80284D00: nop

L_80284D04:
    // 0x80284D04: b           L_80284D0C
    // 0x80284D08: nop

        goto L_80284D0C;
    // 0x80284D08: nop

L_80284D0C:
    // 0x80284D0C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284D10: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284D14: jr          $ra
    // 0x80284D18: nop

    return;
    // 0x80284D18: nop

;}
RECOMP_FUNC void func_802804B8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802804B8: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802804BC: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802804C0: nop

    // 0x802804C4: lwc1        $f4, 0x44($t6)
    ctx->f4.u32l = MEM_W(ctx->r14, 0X44);
    // 0x802804C8: nop

    // 0x802804CC: c.le.s      $f4, $f12
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f4.fl <= ctx->f12.fl;
    // 0x802804D0: nop

    // 0x802804D4: bc1f        L_80280540
    if (!c1cs) {
        // 0x802804D8: nop
    
            goto L_80280540;
    }
    // 0x802804D8: nop

    // 0x802804DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802804E0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802804E4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802804E8: lwc1        $f6, 0x44($t7)
    ctx->f6.u32l = MEM_W(ctx->r15, 0X44);
    // 0x802804EC: lwc1        $f11, 0x67E0($at)
    ctx->f_odd[(11 - 1) * 2] = MEM_W(ctx->r1, 0X67E0);
    // 0x802804F0: lwc1        $f10, 0x67E4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X67E4);
    // 0x802804F4: cvt.d.s     $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f8.d = CVT_D_S(ctx->f6.fl);
    // 0x802804F8: add.d       $f16, $f8, $f10
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.d); NAN_CHECK(ctx->f10.d); 
    ctx->f16.d = ctx->f8.d + ctx->f10.d;
    // 0x802804FC: cvt.s.d     $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.d); 
    ctx->f18.fl = CVT_S_D(ctx->f16.d);
    // 0x80280500: swc1        $f18, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f18.u32l;
    // 0x80280504: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280508: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028050C: nop

    // 0x80280510: lwc1        $f4, 0x44($t8)
    ctx->f4.u32l = MEM_W(ctx->r24, 0X44);
    // 0x80280514: nop

    // 0x80280518: c.le.s      $f12, $f4
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f12.fl <= ctx->f4.fl;
    // 0x8028051C: nop

    // 0x80280520: bc1f        L_80280538
    if (!c1cs) {
        // 0x80280524: nop
    
            goto L_80280538;
    }
    // 0x80280524: nop

    // 0x80280528: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028052C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280530: nop

    // 0x80280534: swc1        $f12, 0x44($t9)
    MEM_W(0X44, ctx->r25) = ctx->f12.u32l;
L_80280538:
    // 0x80280538: b           L_802805C0
    // 0x8028053C: nop

        goto L_802805C0;
    // 0x8028053C: nop

L_80280540:
    // 0x80280540: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280544: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280548: nop

    // 0x8028054C: lwc1        $f6, 0x44($t0)
    ctx->f6.u32l = MEM_W(ctx->r8, 0X44);
    // 0x80280550: nop

    // 0x80280554: c.lt.s      $f12, $f6
    CHECK_FR(ctx, 12);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f12.fl < ctx->f6.fl;
    // 0x80280558: nop

    // 0x8028055C: bc1f        L_802805C0
    if (!c1cs) {
        // 0x80280560: nop
    
            goto L_802805C0;
    }
    // 0x80280560: nop

    // 0x80280564: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280568: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028056C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280570: lwc1        $f8, 0x44($t1)
    ctx->f8.u32l = MEM_W(ctx->r9, 0X44);
    // 0x80280574: lwc1        $f17, 0x67E8($at)
    ctx->f_odd[(17 - 1) * 2] = MEM_W(ctx->r1, 0X67E8);
    // 0x80280578: lwc1        $f16, 0x67EC($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X67EC);
    // 0x8028057C: cvt.d.s     $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.d = CVT_D_S(ctx->f8.fl);
    // 0x80280580: sub.d       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.d); NAN_CHECK(ctx->f16.d); 
    ctx->f18.d = ctx->f10.d - ctx->f16.d;
    // 0x80280584: cvt.s.d     $f4, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.d); 
    ctx->f4.fl = CVT_S_D(ctx->f18.d);
    // 0x80280588: swc1        $f4, 0x44($t1)
    MEM_W(0X44, ctx->r9) = ctx->f4.u32l;
    // 0x8028058C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280590: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280594: nop

    // 0x80280598: lwc1        $f6, 0x44($t2)
    ctx->f6.u32l = MEM_W(ctx->r10, 0X44);
    // 0x8028059C: nop

    // 0x802805A0: c.le.s      $f6, $f12
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 12);
    c1cs = ctx->f6.fl <= ctx->f12.fl;
    // 0x802805A4: nop

    // 0x802805A8: bc1f        L_802805C0
    if (!c1cs) {
        // 0x802805AC: nop
    
            goto L_802805C0;
    }
    // 0x802805AC: nop

    // 0x802805B0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802805B4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802805B8: nop

    // 0x802805BC: swc1        $f12, 0x44($t3)
    MEM_W(0X44, ctx->r11) = ctx->f12.u32l;
L_802805C0:
    // 0x802805C0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802805C4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802805C8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802805CC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802805D0: lwc1        $f8, 0x44($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X44);
    // 0x802805D4: nop

    // 0x802805D8: c.le.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl <= ctx->f8.fl;
    // 0x802805DC: nop

    // 0x802805E0: bc1f        L_80280600
    if (!c1cs) {
        // 0x802805E4: nop
    
            goto L_80280600;
    }
    // 0x802805E4: nop

    // 0x802805E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802805EC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802805F0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802805F4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802805F8: b           L_80280638
    // 0x802805FC: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
        goto L_80280638;
    // 0x802805FC: swc1        $f16, 0x44($t5)
    MEM_W(0X44, ctx->r13) = ctx->f16.u32l;
L_80280600:
    // 0x80280600: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280604: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280608: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x8028060C: lwc1        $f18, 0x44($t6)
    ctx->f18.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80280610: nop

    // 0x80280614: c.lt.s      $f18, $f4
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f18.fl < ctx->f4.fl;
    // 0x80280618: nop

    // 0x8028061C: bc1f        L_80280638
    if (!c1cs) {
        // 0x80280620: nop
    
            goto L_80280638;
    }
    // 0x80280620: nop

    // 0x80280624: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280628: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028062C: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280630: nop

    // 0x80280634: swc1        $f6, 0x44($t7)
    MEM_W(0X44, ctx->r15) = ctx->f6.u32l;
L_80280638:
    // 0x80280638: jr          $ra
    // 0x8028063C: nop

    return;
    // 0x8028063C: nop

    // 0x80280640: jr          $ra
    // 0x80280644: nop

    return;
    // 0x80280644: nop

;}
RECOMP_FUNC void func_80284E1C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284E1C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284E20: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284E24: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284E28: lbu         $t6, -0x1F70($t6)
    ctx->r14 = MEM_BU(ctx->r14, -0X1F70);
    // 0x80284E2C: nop

    // 0x80284E30: slti        $at, $t6, 0x78
    ctx->r1 = SIGNED(ctx->r14) < 0X78 ? 1 : 0;
    // 0x80284E34: bne         $at, $zero, L_80284E48
    if (ctx->r1 != 0) {
        // 0x80284E38: nop
    
            goto L_80284E48;
    }
    // 0x80284E38: nop

    // 0x80284E3C: addiu       $a0, $zero, 0x1
    ctx->r4 = ADD32(0, 0X1);
    // 0x80284E40: jal         0x80069A54
    // 0x80284E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_80069A54(rdram, ctx);
        goto after_0;
    // 0x80284E44: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_0:
L_80284E48:
    // 0x80284E48: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80284E4C: lbu         $t7, -0x1F70($t7)
    ctx->r15 = MEM_BU(ctx->r15, -0X1F70);
    // 0x80284E50: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80284E54: addiu       $t8, $t7, 0x1
    ctx->r24 = ADD32(ctx->r15, 0X1);
    // 0x80284E58: sb          $t8, -0x1F70($at)
    MEM_B(-0X1F70, ctx->r1) = ctx->r24;
    // 0x80284E5C: b           L_80284E64
    // 0x80284E60: nop

        goto L_80284E64;
    // 0x80284E60: nop

L_80284E64:
    // 0x80284E64: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284E68: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284E6C: jr          $ra
    // 0x80284E70: nop

    return;
    // 0x80284E70: nop

;}
RECOMP_FUNC void func_802846C8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802846C8: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x802846CC: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x802846D0: jal         0x80283A2C
    // 0x802846D4: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802846D4: nop

    after_0:
    // 0x802846D8: beq         $v0, $zero, L_802846E8
    if (ctx->r2 == 0) {
        // 0x802846DC: nop
    
            goto L_802846E8;
    }
    // 0x802846DC: nop

    // 0x802846E0: b           L_8028477C
    // 0x802846E4: nop

        goto L_8028477C;
    // 0x802846E4: nop

L_802846E8:
    // 0x802846E8: jal         0x80085D54
    // 0x802846EC: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802846EC: nop

    after_1:
    // 0x802846F0: beq         $v0, $zero, L_80284700
    if (ctx->r2 == 0) {
        // 0x802846F4: nop
    
            goto L_80284700;
    }
    // 0x802846F4: nop

    // 0x802846F8: b           L_8028477C
    // 0x802846FC: nop

        goto L_8028477C;
    // 0x802846FC: nop

L_80284700:
    // 0x80284700: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80284704: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80284708: nop

    // 0x8028470C: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80284710: bne         $t7, $zero, L_80284728
    if (ctx->r15 != 0) {
        // 0x80284714: nop
    
            goto L_80284728;
    }
    // 0x80284714: nop

    // 0x80284718: jal         0x80282B2C
    // 0x8028471C: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x8028471C: nop

    after_2:
    // 0x80284720: b           L_8028477C
    // 0x80284724: nop

        goto L_8028477C;
    // 0x80284724: nop

L_80284728:
    // 0x80284728: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028472C: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80284730: nop

    // 0x80284734: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x80284738: beq         $t9, $zero, L_80284750
    if (ctx->r25 == 0) {
        // 0x8028473C: nop
    
            goto L_80284750;
    }
    // 0x8028473C: nop

    // 0x80284740: jal         0x80282E78
    // 0x80284744: nop

    func_80282E78_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284744: nop

    after_3:
    // 0x80284748: b           L_8028477C
    // 0x8028474C: nop

        goto L_8028477C;
    // 0x8028474C: nop

L_80284750:
    // 0x80284750: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80284754: lb          $t0, 0x65E8($t0)
    ctx->r8 = MEM_B(ctx->r8, 0X65E8);
    // 0x80284758: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x8028475C: bne         $t0, $at, L_80284774
    if (ctx->r8 != ctx->r1) {
        // 0x80284760: nop
    
            goto L_80284774;
    }
    // 0x80284760: nop

    // 0x80284764: jal         0x80282D98
    // 0x80284768: nop

    func_80282D98_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80284768: nop

    after_4:
    // 0x8028476C: b           L_8028477C
    // 0x80284770: nop

        goto L_8028477C;
    // 0x80284770: nop

L_80284774:
    // 0x80284774: b           L_8028477C
    // 0x80284778: nop

        goto L_8028477C;
    // 0x80284778: nop

L_8028477C:
    // 0x8028477C: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284780: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80284784: jr          $ra
    // 0x80284788: nop

    return;
    // 0x80284788: nop

;}
RECOMP_FUNC void func_8028366C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028366C: addiu       $sp, $sp, -0x8
    ctx->r29 = ADD32(ctx->r29, -0X8);
    // 0x80283670: addiu       $t6, $zero, 0x6
    ctx->r14 = ADD32(0, 0X6);
    // 0x80283674: sw          $t6, 0x4($sp)
    MEM_W(0X4, ctx->r29) = ctx->r14;
    // 0x80283678: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028367C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80283680: addiu       $t7, $zero, 0x20D
    ctx->r15 = ADD32(0, 0X20D);
    // 0x80283684: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80283688: lui         $t9, 0x8016
    ctx->r25 = S32(0X8016 << 16);
    // 0x8028368C: lw          $t9, 0x51A4($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X51A4);
    // 0x80283690: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80283694: ori         $t0, $t9, 0x1
    ctx->r8 = ctx->r25 | 0X1;
    // 0x80283698: sw          $t0, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r8;
    // 0x8028369C: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802836A0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802836A4: sh          $t1, 0x6600($at)
    MEM_H(0X6600, ctx->r1) = ctx->r9;
    // 0x802836A8: b           L_802836B0
    // 0x802836AC: nop

        goto L_802836B0;
    // 0x802836AC: nop

L_802836B0:
    // 0x802836B0: jr          $ra
    // 0x802836B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
    return;
    // 0x802836B4: addiu       $sp, $sp, 0x8
    ctx->r29 = ADD32(ctx->r29, 0X8);
;}
RECOMP_FUNC void func_80282168_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282168: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028216C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80282170: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282174: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282178: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8028217C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282180: nop

    // 0x80282184: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80282188: nop

    // 0x8028218C: bc1f        L_80282308
    if (!c1cs) {
        // 0x80282190: nop
    
            goto L_80282308;
    }
    // 0x80282190: nop

    // 0x80282194: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80282198: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028219C: nop

    // 0x802821A0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x802821A4: nop

    // 0x802821A8: bc1f        L_80282308
    if (!c1cs) {
        // 0x802821AC: nop
    
            goto L_80282308;
    }
    // 0x802821AC: nop

    // 0x802821B0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802821B4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802821B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802821BC: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802821C0: lwc1        $f10, 0x3C($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x802821C4: nop

    // 0x802821C8: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x802821CC: nop

    // 0x802821D0: bc1t        L_802822E8
    if (c1cs) {
        // 0x802821D4: nop
    
            goto L_802822E8;
    }
    // 0x802821D4: nop

    // 0x802821D8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802821DC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802821E0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802821E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802821E8: lwc1        $f18, 0x3C($t7)
    ctx->f18.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x802821EC: nop

    // 0x802821F0: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x802821F4: nop

    // 0x802821F8: bc1f        L_80282274
    if (!c1cs) {
        // 0x802821FC: nop
    
            goto L_80282274;
    }
    // 0x802821FC: nop

    // 0x80282200: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282204: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282208: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028220C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80282210: lwc1        $f12, 0x3C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80282214: jal         0x80015538
    // 0x80282218: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80282218: nop

    after_0:
    // 0x8028221C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282220: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282224: nop

    // 0x80282228: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x8028222C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282230: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282234: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282238: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x8028223C: lwc1        $f4, 0x3C($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X3C);
    // 0x80282240: nop

    // 0x80282244: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80282248: nop

    // 0x8028224C: bc1f        L_8028226C
    if (!c1cs) {
        // 0x80282250: nop
    
            goto L_8028226C;
    }
    // 0x80282250: nop

    // 0x80282254: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282258: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028225C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282260: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282264: nop

    // 0x80282268: swc1        $f10, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f10.u32l;
L_8028226C:
    // 0x8028226C: b           L_802822E0
    // 0x80282270: nop

        goto L_802822E0;
    // 0x80282270: nop

L_80282274:
    // 0x80282274: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282278: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028227C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80282280: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80282284: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80282288: jal         0x80015538
    // 0x8028228C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x8028228C: nop

    after_1:
    // 0x80282290: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282294: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80282298: nop

    // 0x8028229C: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x802822A0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802822A4: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802822A8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802822AC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802822B0: lwc1        $f16, 0x3C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x802822B4: nop

    // 0x802822B8: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x802822BC: nop

    // 0x802822C0: bc1f        L_802822E0
    if (!c1cs) {
        // 0x802822C4: nop
    
            goto L_802822E0;
    }
    // 0x802822C4: nop

    // 0x802822C8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802822CC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802822D0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802822D4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802822D8: nop

    // 0x802822DC: swc1        $f6, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f6.u32l;
L_802822E0:
    // 0x802822E0: b           L_80282300
    // 0x802822E4: nop

        goto L_80282300;
    // 0x802822E4: nop

L_802822E8:
    // 0x802822E8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802822EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802822F0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802822F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802822F8: nop

    // 0x802822FC: swc1        $f4, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f4.u32l;
L_80282300:
    // 0x80282300: b           L_80282488
    // 0x80282304: nop

        goto L_80282488;
    // 0x80282304: nop

L_80282308:
    // 0x80282308: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028230C: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282310: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80282314: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282318: nop

    // 0x8028231C: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80282320: nop

    // 0x80282324: bc1f        L_802823D0
    if (!c1cs) {
        // 0x80282328: nop
    
            goto L_802823D0;
    }
    // 0x80282328: nop

    // 0x8028232C: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282330: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282334: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80282338: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028233C: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80282340: jal         0x80015538
    // 0x80282344: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80282344: nop

    after_2:
    // 0x80282348: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028234C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282350: nop

    // 0x80282354: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x80282358: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028235C: lwc1        $f18, -0x1C74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282360: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80282364: lwc1        $f4, 0x68B8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68B8);
    // 0x80282368: neg.s       $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
    // 0x8028236C: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80282370: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282374: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282378: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028237C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282380: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80282384: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80282388: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x8028238C: nop

    // 0x80282390: bc1f        L_802823C8
    if (!c1cs) {
        // 0x80282394: nop
    
            goto L_802823C8;
    }
    // 0x80282394: nop

    // 0x80282398: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028239C: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802823A0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802823A4: lwc1        $f8, 0x68BC($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X68BC);
    // 0x802823A8: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x802823AC: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802823B0: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802823B4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802823B8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802823BC: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802823C0: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x802823C4: swc1        $f18, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f18.u32l;
L_802823C8:
    // 0x802823C8: b           L_80282488
    // 0x802823CC: nop

        goto L_80282488;
    // 0x802823CC: nop

L_802823D0:
    // 0x802823D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802823D4: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802823D8: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802823DC: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802823E0: nop

    // 0x802823E4: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x802823E8: nop

    // 0x802823EC: bc1f        L_80282488
    if (!c1cs) {
        // 0x802823F0: nop
    
            goto L_80282488;
    }
    // 0x802823F0: nop

    // 0x802823F4: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802823F8: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802823FC: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80282400: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80282404: lwc1        $f12, 0x3C($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80282408: jal         0x80015538
    // 0x8028240C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x8028240C: nop

    after_3:
    // 0x80282410: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282414: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80282418: nop

    // 0x8028241C: swc1        $f0, 0x3C($t2)
    MEM_W(0X3C, ctx->r10) = ctx->f0.u32l;
    // 0x80282420: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282424: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282428: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028242C: lwc1        $f16, 0x68C0($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X68C0);
    // 0x80282430: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282434: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80282438: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028243C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80282440: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282444: lwc1        $f8, 0x3C($t3)
    ctx->f8.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80282448: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x8028244C: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80282450: nop

    // 0x80282454: bc1f        L_80282488
    if (!c1cs) {
        // 0x80282458: nop
    
            goto L_80282488;
    }
    // 0x80282458: nop

    // 0x8028245C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282460: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282464: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80282468: lwc1        $f16, 0x68C4($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X68C4);
    // 0x8028246C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282470: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80282474: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80282478: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x8028247C: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80282480: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80282484: swc1        $f8, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f8.u32l;
L_80282488:
    // 0x80282488: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028248C: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282490: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80282494: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282498: nop

    // 0x8028249C: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x802824A0: nop

    // 0x802824A4: bc1f        L_80282590
    if (!c1cs) {
        // 0x802824A8: nop
    
            goto L_80282590;
    }
    // 0x802824A8: nop

    // 0x802824AC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x802824B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802824B4: nop

    // 0x802824B8: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x802824BC: nop

    // 0x802824C0: bc1f        L_80282590
    if (!c1cs) {
        // 0x802824C4: nop
    
            goto L_80282590;
    }
    // 0x802824C4: nop

    // 0x802824C8: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802824CC: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802824D0: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x802824D4: lwc1        $f18, 0x1C($t5)
    ctx->f18.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x802824D8: nop

    // 0x802824DC: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x802824E0: nop

    // 0x802824E4: bc1t        L_80282574
    if (c1cs) {
        // 0x802824E8: nop
    
            goto L_80282574;
    }
    // 0x802824E8: nop

    // 0x802824EC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802824F0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802824F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802824F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802824FC: lwc1        $f8, 0x1C($t6)
    ctx->f8.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x80282500: nop

    // 0x80282504: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80282508: nop

    // 0x8028250C: bc1f        L_80282540
    if (!c1cs) {
        // 0x80282510: nop
    
            goto L_80282540;
    }
    // 0x80282510: nop

    // 0x80282514: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282518: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028251C: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80282520: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80282524: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80282528: jal         0x80015538
    // 0x8028252C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x8028252C: nop

    after_4:
    // 0x80282530: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282534: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282538: b           L_8028256C
    // 0x8028253C: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
        goto L_8028256C;
    // 0x8028253C: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
L_80282540:
    // 0x80282540: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282544: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282548: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x8028254C: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80282550: lwc1        $f12, 0x1C($t9)
    ctx->f12.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80282554: jal         0x80015538
    // 0x80282558: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80282558: nop

    after_5:
    // 0x8028255C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282560: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282564: nop

    // 0x80282568: swc1        $f0, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f0.u32l;
L_8028256C:
    // 0x8028256C: b           L_80282588
    // 0x80282570: nop

        goto L_80282588;
    // 0x80282570: nop

L_80282574:
    // 0x80282574: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282578: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028257C: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282580: nop

    // 0x80282584: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
L_80282588:
    // 0x80282588: b           L_8028273C
    // 0x8028258C: nop

        goto L_8028273C;
    // 0x8028258C: nop

L_80282590:
    // 0x80282590: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282594: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282598: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8028259C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802825A0: nop

    // 0x802825A4: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802825A8: nop

    // 0x802825AC: bc1f        L_80282668
    if (!c1cs) {
        // 0x802825B0: nop
    
            goto L_80282668;
    }
    // 0x802825B0: nop

    // 0x802825B4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802825B8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802825BC: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x802825C0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802825C4: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x802825C8: jal         0x80015538
    // 0x802825CC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x802825CC: nop

    after_6:
    // 0x802825D0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802825D4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802825D8: nop

    // 0x802825DC: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x802825E0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802825E4: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802825E8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802825EC: lwc1        $f4, 0x68C8($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68C8);
    // 0x802825F0: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802825F4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802825F8: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802825FC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80282600: nop

    // 0x80282604: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80282608: nop

    // 0x8028260C: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x80282610: nop

    // 0x80282614: bc1f        L_80282660
    if (!c1cs) {
        // 0x80282618: nop
    
            goto L_80282660;
    }
    // 0x80282618: nop

    // 0x8028261C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282620: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80282624: nop

    // 0x80282628: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x8028262C: nop

    // 0x80282630: bc1f        L_80282660
    if (!c1cs) {
        // 0x80282634: nop
    
            goto L_80282660;
    }
    // 0x80282634: nop

    // 0x80282638: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028263C: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282640: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80282644: lwc1        $f4, 0x68CC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68CC);
    // 0x80282648: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x8028264C: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80282650: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80282654: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80282658: nop

    // 0x8028265C: swc1        $f16, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f16.u32l;
L_80282660:
    // 0x80282660: b           L_8028273C
    // 0x80282664: nop

        goto L_8028273C;
    // 0x80282664: nop

L_80282668:
    // 0x80282668: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028266C: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282670: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80282674: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80282678: nop

    // 0x8028267C: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x80282680: nop

    // 0x80282684: bc1f        L_8028273C
    if (!c1cs) {
        // 0x80282688: nop
    
            goto L_8028273C;
    }
    // 0x80282688: nop

    // 0x8028268C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80282690: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282694: lui         $at, 0xBF80
    ctx->r1 = S32(0XBF80 << 16);
    // 0x80282698: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028269C: lwc1        $f12, 0x1C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X1C);
    // 0x802826A0: jal         0x80015538
    // 0x802826A4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x802826A4: nop

    after_7:
    // 0x802826A8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802826AC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802826B0: nop

    // 0x802826B4: swc1        $f0, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f0.u32l;
    // 0x802826B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802826BC: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802826C0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802826C4: lwc1        $f4, 0x68D0($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68D0);
    // 0x802826C8: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x802826CC: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802826D0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802826D4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802826D8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802826DC: lwc1        $f8, 0x1C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x802826E0: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x802826E4: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x802826E8: nop

    // 0x802826EC: bc1f        L_8028273C
    if (!c1cs) {
        // 0x802826F0: nop
    
            goto L_8028273C;
    }
    // 0x802826F0: nop

    // 0x802826F4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802826F8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802826FC: nop

    // 0x80282700: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80282704: nop

    // 0x80282708: bc1f        L_8028273C
    if (!c1cs) {
        // 0x8028270C: nop
    
            goto L_8028273C;
    }
    // 0x8028270C: nop

    // 0x80282710: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282714: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282718: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028271C: lwc1        $f6, 0x68D4($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X68D4);
    // 0x80282720: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80282724: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80282728: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x8028272C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80282730: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80282734: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80282738: swc1        $f8, 0x1C($t9)
    MEM_W(0X1C, ctx->r25) = ctx->f8.u32l;
L_8028273C:
    // 0x8028273C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80282740: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80282744: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282748: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028274C: lwc1        $f10, 0x20($t0)
    ctx->f10.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80282750: nop

    // 0x80282754: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80282758: nop

    // 0x8028275C: bc1f        L_802827D4
    if (!c1cs) {
        // 0x80282760: nop
    
            goto L_802827D4;
    }
    // 0x80282760: nop

    // 0x80282764: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282768: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028276C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80282770: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80282774: lwc1        $f12, 0x20($t1)
    ctx->f12.u32l = MEM_W(ctx->r9, 0X20);
    // 0x80282778: jal         0x80015538
    // 0x8028277C: nop

    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x8028277C: nop

    after_8:
    // 0x80282780: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80282784: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80282788: nop

    // 0x8028278C: swc1        $f0, 0x20($t2)
    MEM_W(0X20, ctx->r10) = ctx->f0.u32l;
    // 0x80282790: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80282794: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80282798: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x8028279C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802827A0: lwc1        $f6, 0x20($t3)
    ctx->f6.u32l = MEM_W(ctx->r11, 0X20);
    // 0x802827A4: nop

    // 0x802827A8: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x802827AC: nop

    // 0x802827B0: bc1f        L_802827CC
    if (!c1cs) {
        // 0x802827B4: nop
    
            goto L_802827CC;
    }
    // 0x802827B4: nop

    // 0x802827B8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802827BC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802827C0: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x802827C4: nop

    // 0x802827C8: swc1        $f16, 0x20($t4)
    MEM_W(0X20, ctx->r12) = ctx->f16.u32l;
L_802827CC:
    // 0x802827CC: b           L_8028283C
    // 0x802827D0: nop

        goto L_8028283C;
    // 0x802827D0: nop

L_802827D4:
    // 0x802827D4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802827D8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802827DC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802827E0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802827E4: lwc1        $f12, 0x20($t5)
    ctx->f12.u32l = MEM_W(ctx->r13, 0X20);
    // 0x802827E8: jal         0x80015538
    // 0x802827EC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x802827EC: nop

    after_9:
    // 0x802827F0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802827F4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802827F8: nop

    // 0x802827FC: swc1        $f0, 0x20($t6)
    MEM_W(0X20, ctx->r14) = ctx->f0.u32l;
    // 0x80282800: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282804: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80282808: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028280C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282810: lwc1        $f8, 0x20($t7)
    ctx->f8.u32l = MEM_W(ctx->r15, 0X20);
    // 0x80282814: nop

    // 0x80282818: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x8028281C: nop

    // 0x80282820: bc1f        L_8028283C
    if (!c1cs) {
        // 0x80282824: nop
    
            goto L_8028283C;
    }
    // 0x80282824: nop

    // 0x80282828: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028282C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282830: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80282834: nop

    // 0x80282838: swc1        $f4, 0x20($t8)
    MEM_W(0X20, ctx->r24) = ctx->f4.u32l;
L_8028283C:
    // 0x8028283C: b           L_80282844
    // 0x80282840: nop

        goto L_80282844;
    // 0x80282840: nop

L_80282844:
    // 0x80282844: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80282848: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028284C: jr          $ra
    // 0x80282850: nop

    return;
    // 0x80282850: nop

;}
RECOMP_FUNC void func_80284260_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80284260: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80284264: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80284268: jal         0x80283A2C
    // 0x8028426C: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x8028426C: nop

    after_0:
    // 0x80284270: beq         $v0, $zero, L_80284280
    if (ctx->r2 == 0) {
        // 0x80284274: nop
    
            goto L_80284280;
    }
    // 0x80284274: nop

    // 0x80284278: b           L_80284314
    // 0x8028427C: nop

        goto L_80284314;
    // 0x8028427C: nop

L_80284280:
    // 0x80284280: jal         0x80085D54
    // 0x80284284: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80284284: nop

    after_1:
    // 0x80284288: beq         $v0, $zero, L_80284298
    if (ctx->r2 == 0) {
        // 0x8028428C: nop
    
            goto L_80284298;
    }
    // 0x8028428C: nop

    // 0x80284290: b           L_80284314
    // 0x80284294: nop

        goto L_80284314;
    // 0x80284294: nop

L_80284298:
    // 0x80284298: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028429C: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x802842A0: nop

    // 0x802842A4: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x802842A8: bne         $t7, $zero, L_802842C0
    if (ctx->r15 != 0) {
        // 0x802842AC: nop
    
            goto L_802842C0;
    }
    // 0x802842AC: nop

    // 0x802842B0: jal         0x80282B2C
    // 0x802842B4: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x802842B4: nop

    after_2:
    // 0x802842B8: b           L_80284314
    // 0x802842BC: nop

        goto L_80284314;
    // 0x802842BC: nop

L_802842C0:
    // 0x802842C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802842C4: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x802842C8: nop

    // 0x802842CC: andi        $t9, $t8, 0x8000
    ctx->r25 = ctx->r24 & 0X8000;
    // 0x802842D0: beq         $t9, $zero, L_802842E8
    if (ctx->r25 == 0) {
        // 0x802842D4: nop
    
            goto L_802842E8;
    }
    // 0x802842D4: nop

    // 0x802842D8: jal         0x80282A98
    // 0x802842DC: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x802842DC: nop

    after_3:
    // 0x802842E0: b           L_80284314
    // 0x802842E4: nop

        goto L_80284314;
    // 0x802842E4: nop

L_802842E8:
    // 0x802842E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802842EC: jal         0x8001B44C
    // 0x802842F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B44C(rdram, ctx);
        goto after_4;
    // 0x802842F0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_4:
    // 0x802842F4: beq         $v0, $zero, L_8028430C
    if (ctx->r2 == 0) {
        // 0x802842F8: nop
    
            goto L_8028430C;
    }
    // 0x802842F8: nop

    // 0x802842FC: jal         0x80282854
    // 0x80284300: nop

    func_80282854_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x80284300: nop

    after_5:
    // 0x80284304: b           L_80284314
    // 0x80284308: nop

        goto L_80284314;
    // 0x80284308: nop

L_8028430C:
    // 0x8028430C: b           L_80284314
    // 0x80284310: nop

        goto L_80284314;
    // 0x80284310: nop

L_80284314:
    // 0x80284314: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80284318: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x8028431C: jr          $ra
    // 0x80284320: nop

    return;
    // 0x80284320: nop

;}
RECOMP_FUNC void func_80285DF0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285DF0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285DF4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285DF8: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80285DFC: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285E00: jal         0x802804B8
    // 0x80285E04: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285E04: nop

    after_0:
    // 0x80285E08: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285E0C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80285E10: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80285E14: nop

    // 0x80285E18: swc1        $f4, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f4.u32l;
    // 0x80285E1C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80285E20: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80285E24: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80285E28: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285E2C: nop

    // 0x80285E30: swc1        $f6, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f6.u32l;
    // 0x80285E34: jal         0x80280B88
    // 0x80285E38: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285E38: nop

    after_1:
    // 0x80285E3C: b           L_80285E44
    // 0x80285E40: nop

        goto L_80285E44;
    // 0x80285E40: nop

L_80285E44:
    // 0x80285E44: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285E48: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285E4C: jr          $ra
    // 0x80285E50: nop

    return;
    // 0x80285E50: nop

;}
RECOMP_FUNC void func_80286374_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80286374: addiu       $sp, $sp, -0x30
    ctx->r29 = ADD32(ctx->r29, -0X30);
    // 0x80286378: sw          $ra, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r31;
    // 0x8028637C: swc1        $f21, 0x18($sp)
    MEM_W(0X18, ctx->r29) = ctx->f_odd[(21 - 1) * 2];
    // 0x80286380: swc1        $f20, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->f20.u32l;
    // 0x80286384: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286388: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028638C: nop

    // 0x80286390: lbu         $t7, 0x132($t6)
    ctx->r15 = MEM_BU(ctx->r14, 0X132);
    // 0x80286394: nop

    // 0x80286398: bne         $t7, $zero, L_802864DC
    if (ctx->r15 != 0) {
        // 0x8028639C: nop
    
            goto L_802864DC;
    }
    // 0x8028639C: nop

    // 0x802863A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802863A4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802863A8: nop

    // 0x802863AC: lbu         $t9, 0x132($t8)
    ctx->r25 = MEM_BU(ctx->r24, 0X132);
    // 0x802863B0: nop

    // 0x802863B4: addiu       $t0, $t9, 0x1
    ctx->r8 = ADD32(ctx->r25, 0X1);
    // 0x802863B8: sb          $t0, 0x132($t8)
    MEM_B(0X132, ctx->r24) = ctx->r8;
    // 0x802863BC: jal         0x8001819C
    // 0x802863C0: nop

    Reset_LightSettings(rdram, ctx);
        goto after_0;
    // 0x802863C0: nop

    after_0:
    // 0x802863C4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802863C8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802863CC: addiu       $t1, $zero, 0x1
    ctx->r9 = ADD32(0, 0X1);
    // 0x802863D0: sh          $t1, 0x108($t2)
    MEM_H(0X108, ctx->r10) = ctx->r9;
    // 0x802863D4: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802863D8: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802863DC: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x802863E0: nop

    // 0x802863E4: swc1        $f4, 0x0($t3)
    MEM_W(0X0, ctx->r11) = ctx->f4.u32l;
    // 0x802863E8: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x802863EC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802863F0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802863F4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802863F8: nop

    // 0x802863FC: swc1        $f6, 0x4($t4)
    MEM_W(0X4, ctx->r12) = ctx->f6.u32l;
    // 0x80286400: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80286404: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80286408: mtc1        $zero, $f8
    ctx->f8.u32l = 0;
    // 0x8028640C: nop

    // 0x80286410: swc1        $f8, 0x8($t5)
    MEM_W(0X8, ctx->r13) = ctx->f8.u32l;
    // 0x80286414: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80286418: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x8028641C: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80286420: nop

    // 0x80286424: swc1        $f10, 0x18($t6)
    MEM_W(0X18, ctx->r14) = ctx->f10.u32l;
    // 0x80286428: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028642C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80286430: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80286434: nop

    // 0x80286438: swc1        $f16, 0x1C($t7)
    MEM_W(0X1C, ctx->r15) = ctx->f16.u32l;
    // 0x8028643C: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80286440: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80286444: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80286448: nop

    // 0x8028644C: swc1        $f18, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f18.u32l;
    // 0x80286450: lui         $at, 0x3F80
    ctx->r1 = S32(0X3F80 << 16);
    // 0x80286454: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80286458: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028645C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80286460: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80286464: swc1        $f4, 0x14($t0)
    MEM_W(0X14, ctx->r8) = ctx->f4.u32l;
    // 0x80286468: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028646C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80286470: lwc1        $f20, 0x14($t8)
    ctx->f20.u32l = MEM_W(ctx->r24, 0X14);
    // 0x80286474: nop

    // 0x80286478: swc1        $f20, 0x10($t8)
    MEM_W(0X10, ctx->r24) = ctx->f20.u32l;
    // 0x8028647C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80286480: nop

    // 0x80286484: swc1        $f20, 0xC($t1)
    MEM_W(0XC, ctx->r9) = ctx->f20.u32l;
    // 0x80286488: lui         $t2, 0x8011
    ctx->r10 = S32(0X8011 << 16);
    // 0x8028648C: addiu       $t2, $t2, 0x6058
    ctx->r10 = ADD32(ctx->r10, 0X6058);
    // 0x80286490: sw          $t2, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r10;
    // 0x80286494: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80286498: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028649C: addiu       $a2, $zero, 0x19
    ctx->r6 = ADD32(0, 0X19);
    // 0x802864A0: jal         0x8001C0EC
    // 0x802864A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_1;
    // 0x802864A4: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_1:
    // 0x802864A8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802864AC: jal         0x8001B754
    // 0x802864B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001B754(rdram, ctx);
        goto after_2;
    // 0x802864B0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_2:
    // 0x802864B4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802864B8: jal         0x8001BBDC
    // 0x802864BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    func_8001BBDC(rdram, ctx);
        goto after_3;
    // 0x802864BC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    after_3:
    // 0x802864C0: lui         $a3, 0x8011
    ctx->r7 = S32(0X8011 << 16);
    // 0x802864C4: addiu       $a3, $a3, 0x6110
    ctx->r7 = ADD32(ctx->r7, 0X6110);
    // 0x802864C8: addiu       $a3, $a3, 0x38
    ctx->r7 = ADD32(ctx->r7, 0X38);
    // 0x802864CC: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802864D0: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x802864D4: jal         0x8001ABF4
    // 0x802864D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    func_8001ABF4(rdram, ctx);
        goto after_4;
    // 0x802864D8: or          $a2, $zero, $zero
    ctx->r6 = 0 | 0;
    after_4:
L_802864DC:
    // 0x802864DC: jal         0x8001CD20
    // 0x802864E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001CD20(rdram, ctx);
        goto after_5;
    // 0x802864E0: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_5:
    // 0x802864E4: jal         0x8001AD6C
    // 0x802864E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    func_8001AD6C(rdram, ctx);
        goto after_6;
    // 0x802864E8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    after_6:
    // 0x802864EC: b           L_802864F4
    // 0x802864F0: nop

        goto L_802864F4;
    // 0x802864F0: nop

L_802864F4:
    // 0x802864F4: lw          $ra, 0x24($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X24);
    // 0x802864F8: lwc1        $f21, 0x18($sp)
    ctx->f_odd[(21 - 1) * 2] = MEM_W(ctx->r29, 0X18);
    // 0x802864FC: lwc1        $f20, 0x1C($sp)
    ctx->f20.u32l = MEM_W(ctx->r29, 0X1C);
    // 0x80286500: jr          $ra
    // 0x80286504: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
    return;
    // 0x80286504: addiu       $sp, $sp, 0x30
    ctx->r29 = ADD32(ctx->r29, 0X30);
;}
RECOMP_FUNC void func_80285AC0_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285AC0: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285AC4: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285AC8: mtc1        $zero, $f12
    ctx->f12.u32l = 0;
    // 0x80285ACC: jal         0x802804B8
    // 0x80285AD0: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285AD0: nop

    after_0:
    // 0x80285AD4: jal         0x80282168
    // 0x80285AD8: nop

    func_80282168_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285AD8: nop

    after_1:
    // 0x80285ADC: b           L_80285AE4
    // 0x80285AE0: nop

        goto L_80285AE4;
    // 0x80285AE0: nop

L_80285AE4:
    // 0x80285AE4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x80285AE8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285AEC: jr          $ra
    // 0x80285AF0: nop

    return;
    // 0x80285AF0: nop

;}
RECOMP_FUNC void func_80285118_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285118: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028511C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285120: jal         0x80283A2C
    // 0x80285124: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285124: nop

    after_0:
    // 0x80285128: beq         $v0, $zero, L_80285138
    if (ctx->r2 == 0) {
        // 0x8028512C: nop
    
            goto L_80285138;
    }
    // 0x8028512C: nop

    // 0x80285130: b           L_802851BC
    // 0x80285134: nop

        goto L_802851BC;
    // 0x80285134: nop

L_80285138:
    // 0x80285138: jal         0x80085D54
    // 0x8028513C: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x8028513C: nop

    after_1:
    // 0x80285140: beq         $v0, $zero, L_80285150
    if (ctx->r2 == 0) {
        // 0x80285144: nop
    
            goto L_80285150;
    }
    // 0x80285144: nop

    // 0x80285148: b           L_802851BC
    // 0x8028514C: nop

        goto L_802851BC;
    // 0x8028514C: nop

L_80285150:
    // 0x80285150: lui         $t6, 0x8016
    ctx->r14 = S32(0X8016 << 16);
    // 0x80285154: lw          $t6, 0x51A4($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X51A4);
    // 0x80285158: nop

    // 0x8028515C: andi        $t7, $t6, 0x1
    ctx->r15 = ctx->r14 & 0X1;
    // 0x80285160: beq         $t7, $zero, L_802851B4
    if (ctx->r15 == 0) {
        // 0x80285164: nop
    
            goto L_802851B4;
    }
    // 0x80285164: nop

    // 0x80285168: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028516C: lb          $t8, 0x65F0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X65F0);
    // 0x80285170: nop

    // 0x80285174: andi        $t9, $t8, 0x3
    ctx->r25 = ctx->r24 & 0X3;
    // 0x80285178: bne         $t9, $zero, L_802851A4
    if (ctx->r25 != 0) {
        // 0x8028517C: nop
    
            goto L_802851A4;
    }
    // 0x8028517C: nop

    // 0x80285180: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80285184: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80285188: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x8028518C: lwc1        $f4, 0x28($t0)
    ctx->f4.u32l = MEM_W(ctx->r8, 0X28);
    // 0x80285190: nop

    // 0x80285194: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80285198: nop

    // 0x8028519C: bc1f        L_802851B4
    if (!c1cs) {
        // 0x802851A0: nop
    
            goto L_802851B4;
    }
    // 0x802851A0: nop

L_802851A4:
    // 0x802851A4: jal         0x802838A0
    // 0x802851A8: nop

    func_802838A0_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x802851A8: nop

    after_2:
    // 0x802851AC: b           L_802851BC
    // 0x802851B0: nop

        goto L_802851BC;
    // 0x802851B0: nop

L_802851B4:
    // 0x802851B4: b           L_802851BC
    // 0x802851B8: nop

        goto L_802851BC;
    // 0x802851B8: nop

L_802851BC:
    // 0x802851BC: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802851C0: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802851C4: jr          $ra
    // 0x802851C8: nop

    return;
    // 0x802851C8: nop

;}
RECOMP_FUNC void func_80280B88_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80280B88: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80280B8C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80280B90: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280B94: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280B98: lh          $t7, 0x660C($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X660C);
    // 0x80280B9C: lh          $t6, 0x6608($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X6608);
    // 0x80280BA0: nop

    // 0x80280BA4: beq         $t6, $t7, L_80280BE8
    if (ctx->r14 == ctx->r15) {
        // 0x80280BA8: nop
    
            goto L_80280BE8;
    }
    // 0x80280BA8: nop

    // 0x80280BAC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280BB0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280BB4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280BB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80280BBC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x80280BC0: jal         0x80015538
    // 0x80280BC4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x80280BC4: nop

    after_0:
    // 0x80280BC8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280BCC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280BD0: nop

    // 0x80280BD4: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x80280BD8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280BDC: lh          $t0, 0x6608($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X6608);
    // 0x80280BE0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280BE4: sh          $t0, 0x660C($at)
    MEM_H(0X660C, ctx->r1) = ctx->r8;
L_80280BE8:
    // 0x80280BE8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280BEC: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280BF0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80280BF4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280BF8: nop

    // 0x80280BFC: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80280C00: nop

    // 0x80280C04: bc1f        L_80280D80
    if (!c1cs) {
        // 0x80280C08: nop
    
            goto L_80280D80;
    }
    // 0x80280C08: nop

    // 0x80280C0C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280C10: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280C14: nop

    // 0x80280C18: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80280C1C: nop

    // 0x80280C20: bc1f        L_80280D80
    if (!c1cs) {
        // 0x80280C24: nop
    
            goto L_80280D80;
    }
    // 0x80280C24: nop

    // 0x80280C28: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280C2C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280C30: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280C34: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280C38: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x80280C3C: nop

    // 0x80280C40: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80280C44: nop

    // 0x80280C48: bc1t        L_80280D60
    if (c1cs) {
        // 0x80280C4C: nop
    
            goto L_80280D60;
    }
    // 0x80280C4C: nop

    // 0x80280C50: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280C54: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280C58: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280C5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280C60: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80280C64: nop

    // 0x80280C68: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80280C6C: nop

    // 0x80280C70: bc1f        L_80280CEC
    if (!c1cs) {
        // 0x80280C74: nop
    
            goto L_80280CEC;
    }
    // 0x80280C74: nop

    // 0x80280C78: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280C7C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280C80: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80280C84: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80280C88: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x80280C8C: jal         0x80015538
    // 0x80280C90: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80280C90: nop

    after_1:
    // 0x80280C94: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280C98: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280C9C: nop

    // 0x80280CA0: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x80280CA4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280CA8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280CAC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280CB0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80280CB4: lwc1        $f4, 0x3C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x80280CB8: nop

    // 0x80280CBC: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80280CC0: nop

    // 0x80280CC4: bc1f        L_80280CE4
    if (!c1cs) {
        // 0x80280CC8: nop
    
            goto L_80280CE4;
    }
    // 0x80280CC8: nop

    // 0x80280CCC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280CD0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280CD4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280CD8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280CDC: nop

    // 0x80280CE0: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
L_80280CE4:
    // 0x80280CE4: b           L_80280D58
    // 0x80280CE8: nop

        goto L_80280D58;
    // 0x80280CE8: nop

L_80280CEC:
    // 0x80280CEC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280CF0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280CF4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80280CF8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80280CFC: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x80280D00: jal         0x80015538
    // 0x80280D04: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x80280D04: nop

    after_2:
    // 0x80280D08: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280D0C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280D10: nop

    // 0x80280D14: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x80280D18: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280D1C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280D20: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280D24: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280D28: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x80280D2C: nop

    // 0x80280D30: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80280D34: nop

    // 0x80280D38: bc1f        L_80280D58
    if (!c1cs) {
        // 0x80280D3C: nop
    
            goto L_80280D58;
    }
    // 0x80280D3C: nop

    // 0x80280D40: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280D44: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80280D48: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80280D4C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280D50: nop

    // 0x80280D54: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
L_80280D58:
    // 0x80280D58: b           L_80280D78
    // 0x80280D5C: nop

        goto L_80280D78;
    // 0x80280D5C: nop

L_80280D60:
    // 0x80280D60: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280D64: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280D68: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280D6C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280D70: nop

    // 0x80280D74: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
L_80280D78:
    // 0x80280D78: b           L_80280F00
    // 0x80280D7C: nop

        goto L_80280F00;
    // 0x80280D7C: nop

L_80280D80:
    // 0x80280D80: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280D84: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280D88: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80280D8C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280D90: nop

    // 0x80280D94: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80280D98: nop

    // 0x80280D9C: bc1f        L_80280E48
    if (!c1cs) {
        // 0x80280DA0: nop
    
            goto L_80280E48;
    }
    // 0x80280DA0: nop

    // 0x80280DA4: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280DA8: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280DAC: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80280DB0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80280DB4: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80280DB8: jal         0x80015538
    // 0x80280DBC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x80280DBC: nop

    after_3:
    // 0x80280DC0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280DC4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280DC8: nop

    // 0x80280DCC: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x80280DD0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280DD4: lwc1        $f18, -0x1C74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280DD8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280DDC: lwc1        $f4, 0x6848($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6848);
    // 0x80280DE0: neg.s       $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
    // 0x80280DE4: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x80280DE8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280DEC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280DF0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280DF4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280DF8: lwc1        $f16, 0x3C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x80280DFC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x80280E00: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80280E04: nop

    // 0x80280E08: bc1f        L_80280E40
    if (!c1cs) {
        // 0x80280E0C: nop
    
            goto L_80280E40;
    }
    // 0x80280E0C: nop

    // 0x80280E10: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E14: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280E18: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280E1C: lwc1        $f8, 0x684C($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X684C);
    // 0x80280E20: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x80280E24: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80280E28: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280E2C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280E30: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280E34: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280E38: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x80280E3C: swc1        $f18, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f18.u32l;
L_80280E40:
    // 0x80280E40: b           L_80280F00
    // 0x80280E44: nop

        goto L_80280F00;
    // 0x80280E44: nop

L_80280E48:
    // 0x80280E48: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E4C: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280E50: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280E54: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80280E58: nop

    // 0x80280E5C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80280E60: nop

    // 0x80280E64: bc1f        L_80280F00
    if (!c1cs) {
        // 0x80280E68: nop
    
            goto L_80280F00;
    }
    // 0x80280E68: nop

    // 0x80280E6C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280E70: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280E74: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80280E78: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80280E7C: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80280E80: jal         0x80015538
    // 0x80280E84: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80280E84: nop

    after_4:
    // 0x80280E88: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80280E8C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80280E90: nop

    // 0x80280E94: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x80280E98: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280E9C: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280EA0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280EA4: lwc1        $f16, 0x6850($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6850);
    // 0x80280EA8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280EAC: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80280EB0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80280EB4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80280EB8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80280EBC: lwc1        $f8, 0x3C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x80280EC0: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x80280EC4: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80280EC8: nop

    // 0x80280ECC: bc1f        L_80280F00
    if (!c1cs) {
        // 0x80280ED0: nop
    
            goto L_80280F00;
    }
    // 0x80280ED0: nop

    // 0x80280ED4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280ED8: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280EDC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80280EE0: lwc1        $f16, 0x6854($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6854);
    // 0x80280EE4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280EE8: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x80280EEC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80280EF0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80280EF4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80280EF8: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x80280EFC: swc1        $f8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f8.u32l;
L_80280F00:
    // 0x80280F00: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F04: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80280F08: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80280F0C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280F10: nop

    // 0x80280F14: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80280F18: nop

    // 0x80280F1C: bc1f        L_80281094
    if (!c1cs) {
        // 0x80280F20: nop
    
            goto L_80281094;
    }
    // 0x80280F20: nop

    // 0x80280F24: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80280F28: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280F2C: nop

    // 0x80280F30: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80280F34: nop

    // 0x80280F38: bc1f        L_80281094
    if (!c1cs) {
        // 0x80280F3C: nop
    
            goto L_80281094;
    }
    // 0x80280F3C: nop

    // 0x80280F40: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80280F44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80280F48: sh          $t0, 0x6608($at)
    MEM_H(0X6608, ctx->r1) = ctx->r8;
    // 0x80280F4C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80280F50: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80280F54: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80280F58: lwc1        $f18, 0x1C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80280F5C: nop

    // 0x80280F60: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x80280F64: nop

    // 0x80280F68: bc1t        L_80281078
    if (c1cs) {
        // 0x80280F6C: nop
    
            goto L_80281078;
    }
    // 0x80280F6C: nop

    // 0x80280F70: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80280F74: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80280F78: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280F7C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80280F80: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80280F84: nop

    // 0x80280F88: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80280F8C: nop

    // 0x80280F90: bc1f        L_80281008
    if (!c1cs) {
        // 0x80280F94: nop
    
            goto L_80281008;
    }
    // 0x80280F94: nop

    // 0x80280F98: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80280F9C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80280FA0: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80280FA4: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80280FA8: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80280FAC: jal         0x80015538
    // 0x80280FB0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80280FB0: nop

    after_5:
    // 0x80280FB4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80280FB8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80280FBC: nop

    // 0x80280FC0: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x80280FC4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80280FC8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80280FCC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80280FD0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80280FD4: lwc1        $f4, 0x1C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80280FD8: nop

    // 0x80280FDC: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80280FE0: nop

    // 0x80280FE4: bc1f        L_80281000
    if (!c1cs) {
        // 0x80280FE8: nop
    
            goto L_80281000;
    }
    // 0x80280FE8: nop

    // 0x80280FEC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80280FF0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80280FF4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80280FF8: nop

    // 0x80280FFC: swc1        $f18, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f18.u32l;
L_80281000:
    // 0x80281000: b           L_80281070
    // 0x80281004: nop

        goto L_80281070;
    // 0x80281004: nop

L_80281008:
    // 0x80281008: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028100C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281010: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80281014: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281018: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x8028101C: jal         0x80015538
    // 0x80281020: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80281020: nop

    after_6:
    // 0x80281024: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281028: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028102C: nop

    // 0x80281030: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80281034: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281038: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x8028103C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281040: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281044: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80281048: nop

    // 0x8028104C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80281050: nop

    // 0x80281054: bc1f        L_80281070
    if (!c1cs) {
        // 0x80281058: nop
    
            goto L_80281070;
    }
    // 0x80281058: nop

    // 0x8028105C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281060: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281064: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281068: nop

    // 0x8028106C: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
L_80281070:
    // 0x80281070: b           L_8028108C
    // 0x80281074: nop

        goto L_8028108C;
    // 0x80281074: nop

L_80281078:
    // 0x80281078: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028107C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281080: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80281084: nop

    // 0x80281088: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
L_8028108C:
    // 0x8028108C: b           L_80281254
    // 0x80281090: nop

        goto L_80281254;
    // 0x80281090: nop

L_80281094:
    // 0x80281094: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281098: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028109C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802810A0: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802810A4: nop

    // 0x802810A8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802810AC: nop

    // 0x802810B0: bc1f        L_80281174
    if (!c1cs) {
        // 0x802810B4: nop
    
            goto L_80281174;
    }
    // 0x802810B4: nop

    // 0x802810B8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802810BC: sh          $zero, 0x6608($at)
    MEM_H(0X6608, ctx->r1) = 0;
    // 0x802810C0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802810C4: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802810C8: lui         $at, 0x40A0
    ctx->r1 = S32(0X40A0 << 16);
    // 0x802810CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802810D0: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x802810D4: jal         0x80015538
    // 0x802810D8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x802810D8: nop

    after_7:
    // 0x802810DC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802810E0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802810E4: nop

    // 0x802810E8: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x802810EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802810F0: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802810F4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802810F8: lwc1        $f4, 0x6858($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6858);
    // 0x802810FC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281100: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80281104: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80281108: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028110C: nop

    // 0x80281110: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80281114: nop

    // 0x80281118: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x8028111C: nop

    // 0x80281120: bc1f        L_8028116C
    if (!c1cs) {
        // 0x80281124: nop
    
            goto L_8028116C;
    }
    // 0x80281124: nop

    // 0x80281128: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028112C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281130: nop

    // 0x80281134: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80281138: nop

    // 0x8028113C: bc1f        L_8028116C
    if (!c1cs) {
        // 0x80281140: nop
    
            goto L_8028116C;
    }
    // 0x80281140: nop

    // 0x80281144: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281148: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028114C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281150: lwc1        $f4, 0x685C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X685C);
    // 0x80281154: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80281158: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x8028115C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281160: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281164: nop

    // 0x80281168: swc1        $f16, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f16.u32l;
L_8028116C:
    // 0x8028116C: b           L_80281254
    // 0x80281170: nop

        goto L_80281254;
    // 0x80281170: nop

L_80281174:
    // 0x80281174: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281178: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028117C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281180: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281184: nop

    // 0x80281188: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x8028118C: nop

    // 0x80281190: bc1f        L_80281254
    if (!c1cs) {
        // 0x80281194: nop
    
            goto L_80281254;
    }
    // 0x80281194: nop

    // 0x80281198: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x8028119C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802811A0: sh          $t6, 0x6608($at)
    MEM_H(0X6608, ctx->r1) = ctx->r14;
    // 0x802811A4: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802811A8: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802811AC: lui         $at, 0xC0A0
    ctx->r1 = S32(0XC0A0 << 16);
    // 0x802811B0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802811B4: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x802811B8: jal         0x80015538
    // 0x802811BC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x802811BC: nop

    after_8:
    // 0x802811C0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802811C4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802811C8: nop

    // 0x802811CC: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x802811D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802811D4: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802811D8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802811DC: lwc1        $f4, 0x6860($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6860);
    // 0x802811E0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x802811E4: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x802811E8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802811EC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802811F0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802811F4: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x802811F8: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x802811FC: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x80281200: nop

    // 0x80281204: bc1f        L_80281254
    if (!c1cs) {
        // 0x80281208: nop
    
            goto L_80281254;
    }
    // 0x80281208: nop

    // 0x8028120C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281210: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281214: nop

    // 0x80281218: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x8028121C: nop

    // 0x80281220: bc1f        L_80281254
    if (!c1cs) {
        // 0x80281224: nop
    
            goto L_80281254;
    }
    // 0x80281224: nop

    // 0x80281228: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028122C: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281230: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281234: lwc1        $f6, 0x6864($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6864);
    // 0x80281238: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x8028123C: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80281240: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281244: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281248: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028124C: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80281250: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
L_80281254:
    // 0x80281254: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281258: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028125C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80281260: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281264: nop

    // 0x80281268: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x8028126C: nop

    // 0x80281270: bc1f        L_8028139C
    if (!c1cs) {
        // 0x80281274: nop
    
            goto L_8028139C;
    }
    // 0x80281274: nop

    // 0x80281278: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028127C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281280: nop

    // 0x80281284: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x80281288: nop

    // 0x8028128C: bc1f        L_8028139C
    if (!c1cs) {
        // 0x80281290: nop
    
            goto L_8028139C;
    }
    // 0x80281290: nop

    // 0x80281294: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281298: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028129C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802812A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802812A4: lwc1        $f18, 0x20($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X20);
    // 0x802812A8: nop

    // 0x802812AC: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x802812B0: nop

    // 0x802812B4: bc1f        L_8028132C
    if (!c1cs) {
        // 0x802812B8: nop
    
            goto L_8028132C;
    }
    // 0x802812B8: nop

    // 0x802812BC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x802812C0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x802812C4: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x802812C8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802812CC: lwc1        $f12, 0x20($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X20);
    // 0x802812D0: jal         0x80015538
    // 0x802812D4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x802812D4: nop

    after_9:
    // 0x802812D8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802812DC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802812E0: nop

    // 0x802812E4: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    // 0x802812E8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802812EC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802812F0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x802812F4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802812F8: lwc1        $f8, 0x20($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X20);
    // 0x802812FC: nop

    // 0x80281300: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80281304: nop

    // 0x80281308: bc1f        L_80281324
    if (!c1cs) {
        // 0x8028130C: nop
    
            goto L_80281324;
    }
    // 0x8028130C: nop

    // 0x80281310: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281314: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281318: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x8028131C: nop

    // 0x80281320: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
L_80281324:
    // 0x80281324: b           L_80281394
    // 0x80281328: nop

        goto L_80281394;
    // 0x80281328: nop

L_8028132C:
    // 0x8028132C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281330: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281334: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281338: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028133C: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80281340: jal         0x80015538
    // 0x80281344: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x80281344: nop

    after_10:
    // 0x80281348: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028134C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281350: nop

    // 0x80281354: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
    // 0x80281358: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x8028135C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281360: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281364: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281368: lwc1        $f6, 0x20($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X20);
    // 0x8028136C: nop

    // 0x80281370: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80281374: nop

    // 0x80281378: bc1f        L_80281394
    if (!c1cs) {
        // 0x8028137C: nop
    
            goto L_80281394;
    }
    // 0x8028137C: nop

    // 0x80281380: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281384: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281388: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x8028138C: nop

    // 0x80281390: swc1        $f16, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f16.u32l;
L_80281394:
    // 0x80281394: b           L_80281660
    // 0x80281398: nop

        goto L_80281660;
    // 0x80281398: nop

L_8028139C:
    // 0x8028139C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802813A0: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802813A4: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802813A8: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802813AC: nop

    // 0x802813B0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x802813B4: nop

    // 0x802813B8: bc1f        L_80281504
    if (!c1cs) {
        // 0x802813BC: nop
    
            goto L_80281504;
    }
    // 0x802813BC: nop

    // 0x802813C0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802813C4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802813C8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802813CC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802813D0: lwc1        $f12, 0x20($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X20);
    // 0x802813D4: jal         0x80015538
    // 0x802813D8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x802813D8: nop

    after_11:
    // 0x802813DC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x802813E0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x802813E4: nop

    // 0x802813E8: swc1        $f0, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f0.u32l;
    // 0x802813EC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802813F0: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802813F4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802813F8: lwc1        $f6, 0x6868($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6868);
    // 0x802813FC: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x80281400: mul.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80281404: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281408: nop

    // 0x8028140C: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80281410: nop

    // 0x80281414: bc1f        L_80281480
    if (!c1cs) {
        // 0x80281418: nop
    
            goto L_80281480;
    }
    // 0x80281418: nop

    // 0x8028141C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281420: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281424: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80281428: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x8028142C: lwc1        $f8, 0x20($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80281430: nop

    // 0x80281434: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80281438: nop

    // 0x8028143C: bc1f        L_80281478
    if (!c1cs) {
        // 0x80281440: nop
    
            goto L_80281478;
    }
    // 0x80281440: nop

    // 0x80281444: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281448: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x8028144C: nop

    // 0x80281450: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80281454: nop

    // 0x80281458: bc1f        L_80281478
    if (!c1cs) {
        // 0x8028145C: nop
    
            goto L_80281478;
    }
    // 0x8028145C: nop

    // 0x80281460: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80281464: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281468: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x8028146C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281470: nop

    // 0x80281474: swc1        $f6, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f6.u32l;
L_80281478:
    // 0x80281478: b           L_802814FC
    // 0x8028147C: nop

        goto L_802814FC;
    // 0x8028147C: nop

L_80281480:
    // 0x80281480: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281484: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281488: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028148C: lwc1        $f4, 0x686C($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X686C);
    // 0x80281490: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281494: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80281498: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028149C: nop

    // 0x802814A0: lwc1        $f18, 0x20($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X20);
    // 0x802814A4: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x802814A8: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x802814AC: nop

    // 0x802814B0: bc1f        L_802814FC
    if (!c1cs) {
        // 0x802814B4: nop
    
            goto L_802814FC;
    }
    // 0x802814B4: nop

    // 0x802814B8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802814BC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802814C0: nop

    // 0x802814C4: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x802814C8: nop

    // 0x802814CC: bc1f        L_802814FC
    if (!c1cs) {
        // 0x802814D0: nop
    
            goto L_802814FC;
    }
    // 0x802814D0: nop

    // 0x802814D4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802814D8: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802814DC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802814E0: lwc1        $f8, 0x6870($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6870);
    // 0x802814E4: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x802814E8: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x802814EC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x802814F0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x802814F4: nop

    // 0x802814F8: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
L_802814FC:
    // 0x802814FC: b           L_80281660
    // 0x80281500: nop

        goto L_80281660;
    // 0x80281500: nop

L_80281504:
    // 0x80281504: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281508: lwc1        $f18, -0x1C74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028150C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281510: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281514: nop

    // 0x80281518: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x8028151C: nop

    // 0x80281520: bc1f        L_80281660
    if (!c1cs) {
        // 0x80281524: nop
    
            goto L_80281660;
    }
    // 0x80281524: nop

    // 0x80281528: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028152C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281530: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80281534: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281538: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x8028153C: jal         0x80015538
    // 0x80281540: nop

    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x80281540: nop

    after_12:
    // 0x80281544: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281548: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028154C: nop

    // 0x80281550: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
    // 0x80281554: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281558: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028155C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281560: lwc1        $f4, 0x6874($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6874);
    // 0x80281564: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80281568: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8028156C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281570: nop

    // 0x80281574: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80281578: nop

    // 0x8028157C: bc1f        L_802815E8
    if (!c1cs) {
        // 0x80281580: nop
    
            goto L_802815E8;
    }
    // 0x80281580: nop

    // 0x80281584: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281588: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028158C: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80281590: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281594: lwc1        $f18, 0x20($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X20);
    // 0x80281598: nop

    // 0x8028159C: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x802815A0: nop

    // 0x802815A4: bc1f        L_802815E0
    if (!c1cs) {
        // 0x802815A8: nop
    
            goto L_802815E0;
    }
    // 0x802815A8: nop

    // 0x802815AC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802815B0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802815B4: nop

    // 0x802815B8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802815BC: nop

    // 0x802815C0: bc1f        L_802815E0
    if (!c1cs) {
        // 0x802815C4: nop
    
            goto L_802815E0;
    }
    // 0x802815C4: nop

    // 0x802815C8: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x802815CC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802815D0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802815D4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802815D8: nop

    // 0x802815DC: swc1        $f4, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f4.u32l;
L_802815E0:
    // 0x802815E0: b           L_80281660
    // 0x802815E4: nop

        goto L_80281660;
    // 0x802815E4: nop

L_802815E8:
    // 0x802815E8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802815EC: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802815F0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802815F4: lwc1        $f6, 0x6878($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X6878);
    // 0x802815F8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802815FC: mul.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80281600: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281604: nop

    // 0x80281608: lwc1        $f8, 0x20($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X20);
    // 0x8028160C: nop

    // 0x80281610: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x80281614: nop

    // 0x80281618: bc1f        L_80281660
    if (!c1cs) {
        // 0x8028161C: nop
    
            goto L_80281660;
    }
    // 0x8028161C: nop

    // 0x80281620: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281624: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281628: nop

    // 0x8028162C: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80281630: nop

    // 0x80281634: bc1f        L_80281660
    if (!c1cs) {
        // 0x80281638: nop
    
            goto L_80281660;
    }
    // 0x80281638: nop

    // 0x8028163C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281640: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281644: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281648: lwc1        $f10, 0x687C($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X687C);
    // 0x8028164C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281650: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80281654: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281658: nop

    // 0x8028165C: swc1        $f6, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f6.u32l;
L_80281660:
    // 0x80281660: b           L_80281668
    // 0x80281664: nop

        goto L_80281668;
    // 0x80281664: nop

L_80281668:
    // 0x80281668: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028166C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80281670: jr          $ra
    // 0x80281674: nop

    return;
    // 0x80281674: nop

;}
RECOMP_FUNC void func_80285760_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80285760: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285764: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285768: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028576C: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285770: jal         0x802804B8
    // 0x80285774: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285774: nop

    after_0:
    // 0x80285778: jal         0x80280B88
    // 0x8028577C: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x8028577C: nop

    after_1:
    // 0x80285780: b           L_80285788
    // 0x80285784: nop

        goto L_80285788;
    // 0x80285784: nop

L_80285788:
    // 0x80285788: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028578C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80285790: jr          $ra
    // 0x80285794: nop

    return;
    // 0x80285794: nop

;}
RECOMP_FUNC void func_80283B7C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80283B7C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x80283B80: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80283B84: jal         0x80283A2C
    // 0x80283B88: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80283B88: nop

    after_0:
    // 0x80283B8C: beq         $v0, $zero, L_80283B9C
    if (ctx->r2 == 0) {
        // 0x80283B90: nop
    
            goto L_80283B9C;
    }
    // 0x80283B90: nop

    // 0x80283B94: b           L_80283CD4
    // 0x80283B98: nop

        goto L_80283CD4;
    // 0x80283B98: nop

L_80283B9C:
    // 0x80283B9C: jal         0x80085D54
    // 0x80283BA0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x80283BA0: nop

    after_1:
    // 0x80283BA4: beq         $v0, $zero, L_80283BB4
    if (ctx->r2 == 0) {
        // 0x80283BA8: nop
    
            goto L_80283BB4;
    }
    // 0x80283BA8: nop

    // 0x80283BAC: b           L_80283CD4
    // 0x80283BB0: nop

        goto L_80283CD4;
    // 0x80283BB0: nop

L_80283BB4:
    // 0x80283BB4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80283BB8: lb          $t6, 0x65F0($t6)
    ctx->r14 = MEM_B(ctx->r14, 0X65F0);
    // 0x80283BBC: nop

    // 0x80283BC0: andi        $t7, $t6, 0x2
    ctx->r15 = ctx->r14 & 0X2;
    // 0x80283BC4: bne         $t7, $zero, L_80283BDC
    if (ctx->r15 != 0) {
        // 0x80283BC8: nop
    
            goto L_80283BDC;
    }
    // 0x80283BC8: nop

    // 0x80283BCC: jal         0x80282B2C
    // 0x80283BD0: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x80283BD0: nop

    after_2:
    // 0x80283BD4: b           L_80283CD4
    // 0x80283BD8: nop

        goto L_80283CD4;
    // 0x80283BD8: nop

L_80283BDC:
    // 0x80283BDC: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80283BE0: lhu         $t8, -0x1C7C($t8)
    ctx->r24 = MEM_HU(ctx->r24, -0X1C7C);
    // 0x80283BE4: nop

    // 0x80283BE8: andi        $t9, $t8, 0x4000
    ctx->r25 = ctx->r24 & 0X4000;
    // 0x80283BEC: beq         $t9, $zero, L_80283C1C
    if (ctx->r25 == 0) {
        // 0x80283BF0: nop
    
            goto L_80283C1C;
    }
    // 0x80283BF0: nop

    // 0x80283BF4: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80283BF8: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80283BFC: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80283C00: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80283C04: jal         0x800178D4
    // 0x80283C08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_3;
    // 0x80283C08: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_3:
    // 0x80283C0C: jal         0x802837D8
    // 0x80283C10: nop

    func_802837D8_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80283C10: nop

    after_4:
    // 0x80283C14: b           L_80283CD4
    // 0x80283C18: nop

        goto L_80283CD4;
    // 0x80283C18: nop

L_80283C1C:
    // 0x80283C1C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80283C20: lhu         $t0, -0x1C7C($t0)
    ctx->r8 = MEM_HU(ctx->r8, -0X1C7C);
    // 0x80283C24: nop

    // 0x80283C28: andi        $t1, $t0, 0x8000
    ctx->r9 = ctx->r8 & 0X8000;
    // 0x80283C2C: beq         $t1, $zero, L_80283C44
    if (ctx->r9 == 0) {
        // 0x80283C30: nop
    
            goto L_80283C44;
    }
    // 0x80283C30: nop

    // 0x80283C34: jal         0x80282A98
    // 0x80283C38: nop

    func_80282A98_code_extra_5(rdram, ctx);
        goto after_5;
    // 0x80283C38: nop

    after_5:
    // 0x80283C3C: b           L_80283CD4
    // 0x80283C40: nop

        goto L_80283CD4;
    // 0x80283C40: nop

L_80283C44:
    // 0x80283C44: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80283C48: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80283C4C: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80283C50: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80283C54: lwc1        $f4, 0x44($t2)
    ctx->f4.u32l = MEM_W(ctx->r10, 0X44);
    // 0x80283C58: nop

    // 0x80283C5C: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x80283C60: nop

    // 0x80283C64: bc1f        L_80283C7C
    if (!c1cs) {
        // 0x80283C68: nop
    
            goto L_80283C7C;
    }
    // 0x80283C68: nop

    // 0x80283C6C: jal         0x80282948
    // 0x80283C70: nop

    func_80282948_code_extra_5(rdram, ctx);
        goto after_6;
    // 0x80283C70: nop

    after_6:
    // 0x80283C74: b           L_80283CD4
    // 0x80283C78: nop

        goto L_80283CD4;
    // 0x80283C78: nop

L_80283C7C:
    // 0x80283C7C: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80283C80: lb          $t3, 0x65E8($t3)
    ctx->r11 = MEM_B(ctx->r11, 0X65E8);
    // 0x80283C84: addiu       $at, $zero, 0x2
    ctx->r1 = ADD32(0, 0X2);
    // 0x80283C88: bne         $t3, $at, L_80283CA8
    if (ctx->r11 != ctx->r1) {
        // 0x80283C8C: nop
    
            goto L_80283CA8;
    }
    // 0x80283C8C: nop

    // 0x80283C90: jal         0x80282C48
    // 0x80283C94: nop

    func_80282C48_code_extra_5(rdram, ctx);
        goto after_7;
    // 0x80283C94: nop

    after_7:
    // 0x80283C98: b           L_80283CD4
    // 0x80283C9C: nop

        goto L_80283CD4;
    // 0x80283C9C: nop

    // 0x80283CA0: b           L_80283CCC
    // 0x80283CA4: nop

        goto L_80283CCC;
    // 0x80283CA4: nop

L_80283CA8:
    // 0x80283CA8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80283CAC: lb          $t4, 0x65E8($t4)
    ctx->r12 = MEM_B(ctx->r12, 0X65E8);
    // 0x80283CB0: addiu       $at, $zero, 0x1
    ctx->r1 = ADD32(0, 0X1);
    // 0x80283CB4: bne         $t4, $at, L_80283CCC
    if (ctx->r12 != ctx->r1) {
        // 0x80283CB8: nop
    
            goto L_80283CCC;
    }
    // 0x80283CB8: nop

    // 0x80283CBC: jal         0x802829B8
    // 0x80283CC0: nop

    func_802829B8_code_extra_5(rdram, ctx);
        goto after_8;
    // 0x80283CC0: nop

    after_8:
    // 0x80283CC4: b           L_80283CD4
    // 0x80283CC8: nop

        goto L_80283CD4;
    // 0x80283CC8: nop

L_80283CCC:
    // 0x80283CCC: b           L_80283CD4
    // 0x80283CD0: nop

        goto L_80283CD4;
    // 0x80283CD0: nop

L_80283CD4:
    // 0x80283CD4: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80283CD8: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80283CDC: jr          $ra
    // 0x80283CE0: nop

    return;
    // 0x80283CE0: nop

;}
RECOMP_FUNC void func_80281678_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80281678: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x8028167C: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80281680: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281684: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281688: lh          $t7, 0x660C($t7)
    ctx->r15 = MEM_H(ctx->r15, 0X660C);
    // 0x8028168C: lh          $t6, 0x6608($t6)
    ctx->r14 = MEM_H(ctx->r14, 0X6608);
    // 0x80281690: nop

    // 0x80281694: beq         $t6, $t7, L_802816D8
    if (ctx->r14 == ctx->r15) {
        // 0x80281698: nop
    
            goto L_802816D8;
    }
    // 0x80281698: nop

    // 0x8028169C: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802816A0: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802816A4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802816A8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802816AC: lwc1        $f12, 0x1C($t8)
    ctx->f12.u32l = MEM_W(ctx->r24, 0X1C);
    // 0x802816B0: jal         0x80015538
    // 0x802816B4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_0;
    // 0x802816B4: nop

    after_0:
    // 0x802816B8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802816BC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802816C0: nop

    // 0x802816C4: swc1        $f0, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f0.u32l;
    // 0x802816C8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802816CC: lh          $t0, 0x6608($t0)
    ctx->r8 = MEM_H(ctx->r8, 0X6608);
    // 0x802816D0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802816D4: sh          $t0, 0x660C($at)
    MEM_H(0X660C, ctx->r1) = ctx->r8;
L_802816D8:
    // 0x802816D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802816DC: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802816E0: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802816E4: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802816E8: nop

    // 0x802816EC: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x802816F0: nop

    // 0x802816F4: bc1f        L_80281870
    if (!c1cs) {
        // 0x802816F8: nop
    
            goto L_80281870;
    }
    // 0x802816F8: nop

    // 0x802816FC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281700: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281704: nop

    // 0x80281708: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x8028170C: nop

    // 0x80281710: bc1f        L_80281870
    if (!c1cs) {
        // 0x80281714: nop
    
            goto L_80281870;
    }
    // 0x80281714: nop

    // 0x80281718: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x8028171C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281720: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281724: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281728: lwc1        $f10, 0x3C($t1)
    ctx->f10.u32l = MEM_W(ctx->r9, 0X3C);
    // 0x8028172C: nop

    // 0x80281730: c.eq.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl == ctx->f16.fl;
    // 0x80281734: nop

    // 0x80281738: bc1t        L_80281850
    if (c1cs) {
        // 0x8028173C: nop
    
            goto L_80281850;
    }
    // 0x8028173C: nop

    // 0x80281740: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281744: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281748: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028174C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281750: lwc1        $f18, 0x3C($t2)
    ctx->f18.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x80281754: nop

    // 0x80281758: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x8028175C: nop

    // 0x80281760: bc1f        L_802817DC
    if (!c1cs) {
        // 0x80281764: nop
    
            goto L_802817DC;
    }
    // 0x80281764: nop

    // 0x80281768: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x8028176C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281770: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80281774: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281778: lwc1        $f12, 0x3C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X3C);
    // 0x8028177C: jal         0x80015538
    // 0x80281780: nop

    Math_WrapAngle(rdram, ctx);
        goto after_1;
    // 0x80281780: nop

    after_1:
    // 0x80281784: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281788: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x8028178C: nop

    // 0x80281790: swc1        $f0, 0x3C($t4)
    MEM_W(0X3C, ctx->r12) = ctx->f0.u32l;
    // 0x80281794: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281798: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x8028179C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802817A0: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x802817A4: lwc1        $f4, 0x3C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X3C);
    // 0x802817A8: nop

    // 0x802817AC: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x802817B0: nop

    // 0x802817B4: bc1f        L_802817D4
    if (!c1cs) {
        // 0x802817B8: nop
    
            goto L_802817D4;
    }
    // 0x802817B8: nop

    // 0x802817BC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802817C0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802817C4: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x802817C8: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802817CC: nop

    // 0x802817D0: swc1        $f10, 0x3C($t6)
    MEM_W(0X3C, ctx->r14) = ctx->f10.u32l;
L_802817D4:
    // 0x802817D4: b           L_80281848
    // 0x802817D8: nop

        goto L_80281848;
    // 0x802817D8: nop

L_802817DC:
    // 0x802817DC: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x802817E0: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x802817E4: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802817E8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802817EC: lwc1        $f12, 0x3C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X3C);
    // 0x802817F0: jal         0x80015538
    // 0x802817F4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_2;
    // 0x802817F4: nop

    after_2:
    // 0x802817F8: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802817FC: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281800: nop

    // 0x80281804: swc1        $f0, 0x3C($t8)
    MEM_W(0X3C, ctx->r24) = ctx->f0.u32l;
    // 0x80281808: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x8028180C: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281810: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281814: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281818: lwc1        $f16, 0x3C($t9)
    ctx->f16.u32l = MEM_W(ctx->r25, 0X3C);
    // 0x8028181C: nop

    // 0x80281820: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80281824: nop

    // 0x80281828: bc1f        L_80281848
    if (!c1cs) {
        // 0x8028182C: nop
    
            goto L_80281848;
    }
    // 0x8028182C: nop

    // 0x80281830: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281834: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281838: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x8028183C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281840: nop

    // 0x80281844: swc1        $f6, 0x3C($t0)
    MEM_W(0X3C, ctx->r8) = ctx->f6.u32l;
L_80281848:
    // 0x80281848: b           L_80281868
    // 0x8028184C: nop

        goto L_80281868;
    // 0x8028184C: nop

L_80281850:
    // 0x80281850: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281854: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281858: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x8028185C: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281860: nop

    // 0x80281864: swc1        $f4, 0x3C($t1)
    MEM_W(0X3C, ctx->r9) = ctx->f4.u32l;
L_80281868:
    // 0x80281868: b           L_802819F0
    // 0x8028186C: nop

        goto L_802819F0;
    // 0x8028186C: nop

L_80281870:
    // 0x80281870: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281874: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281878: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x8028187C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281880: nop

    // 0x80281884: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80281888: nop

    // 0x8028188C: bc1f        L_80281938
    if (!c1cs) {
        // 0x80281890: nop
    
            goto L_80281938;
    }
    // 0x80281890: nop

    // 0x80281894: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281898: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x8028189C: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x802818A0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x802818A4: lwc1        $f12, 0x3C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X3C);
    // 0x802818A8: jal         0x80015538
    // 0x802818AC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_3;
    // 0x802818AC: nop

    after_3:
    // 0x802818B0: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x802818B4: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x802818B8: nop

    // 0x802818BC: swc1        $f0, 0x3C($t3)
    MEM_W(0X3C, ctx->r11) = ctx->f0.u32l;
    // 0x802818C0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802818C4: lwc1        $f18, -0x1C74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802818C8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802818CC: lwc1        $f4, 0x6880($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6880);
    // 0x802818D0: neg.s       $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f18.fl); 
    ctx->f6.fl = -ctx->f18.fl;
    // 0x802818D4: mul.s       $f8, $f6, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f6.fl, ctx->f4.fl);
    // 0x802818D8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802818DC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x802818E0: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x802818E4: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x802818E8: lwc1        $f16, 0x3C($t4)
    ctx->f16.u32l = MEM_W(ctx->r12, 0X3C);
    // 0x802818EC: add.s       $f18, $f8, $f10
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f8.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f18.fl = ctx->f8.fl + ctx->f10.fl;
    // 0x802818F0: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x802818F4: nop

    // 0x802818F8: bc1f        L_80281930
    if (!c1cs) {
        // 0x802818FC: nop
    
            goto L_80281930;
    }
    // 0x802818FC: nop

    // 0x80281900: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281904: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281908: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x8028190C: lwc1        $f8, 0x6884($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X6884);
    // 0x80281910: neg.s       $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f6.fl); 
    ctx->f4.fl = -ctx->f6.fl;
    // 0x80281914: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80281918: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028191C: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281920: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281924: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281928: add.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f10.fl + ctx->f16.fl;
    // 0x8028192C: swc1        $f18, 0x3C($t5)
    MEM_W(0X3C, ctx->r13) = ctx->f18.u32l;
L_80281930:
    // 0x80281930: b           L_802819F0
    // 0x80281934: nop

        goto L_802819F0;
    // 0x80281934: nop

L_80281938:
    // 0x80281938: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028193C: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281940: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281944: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281948: nop

    // 0x8028194C: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80281950: nop

    // 0x80281954: bc1f        L_802819F0
    if (!c1cs) {
        // 0x80281958: nop
    
            goto L_802819F0;
    }
    // 0x80281958: nop

    // 0x8028195C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281960: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281964: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80281968: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x8028196C: lwc1        $f12, 0x3C($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X3C);
    // 0x80281970: jal         0x80015538
    // 0x80281974: nop

    Math_WrapAngle(rdram, ctx);
        goto after_4;
    // 0x80281974: nop

    after_4:
    // 0x80281978: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x8028197C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281980: nop

    // 0x80281984: swc1        $f0, 0x3C($t7)
    MEM_W(0X3C, ctx->r15) = ctx->f0.u32l;
    // 0x80281988: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x8028198C: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281990: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281994: lwc1        $f16, 0x6888($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X6888);
    // 0x80281998: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x8028199C: mul.s       $f18, $f10, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802819A0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x802819A4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x802819A8: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x802819AC: lwc1        $f8, 0x3C($t8)
    ctx->f8.u32l = MEM_W(ctx->r24, 0X3C);
    // 0x802819B0: sub.s       $f4, $f6, $f18
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f18.fl); 
    ctx->f4.fl = ctx->f6.fl - ctx->f18.fl;
    // 0x802819B4: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x802819B8: nop

    // 0x802819BC: bc1f        L_802819F0
    if (!c1cs) {
        // 0x802819C0: nop
    
            goto L_802819F0;
    }
    // 0x802819C0: nop

    // 0x802819C4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802819C8: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802819CC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802819D0: lwc1        $f16, 0x688C($at)
    ctx->f16.u32l = MEM_W(ctx->r1, 0X688C);
    // 0x802819D4: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802819D8: mul.s       $f6, $f10, $f16
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f6.fl = MUL_S(ctx->f10.fl, ctx->f16.fl);
    // 0x802819DC: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x802819E0: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802819E4: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802819E8: sub.s       $f8, $f18, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f6.fl;
    // 0x802819EC: swc1        $f8, 0x3C($t9)
    MEM_W(0X3C, ctx->r25) = ctx->f8.u32l;
L_802819F0:
    // 0x802819F0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802819F4: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802819F8: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x802819FC: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281A00: nop

    // 0x80281A04: c.lt.s      $f10, $f4
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f10.fl < ctx->f4.fl;
    // 0x80281A08: nop

    // 0x80281A0C: bc1f        L_80281B84
    if (!c1cs) {
        // 0x80281A10: nop
    
            goto L_80281B84;
    }
    // 0x80281A10: nop

    // 0x80281A14: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281A18: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281A1C: nop

    // 0x80281A20: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80281A24: nop

    // 0x80281A28: bc1f        L_80281B84
    if (!c1cs) {
        // 0x80281A2C: nop
    
            goto L_80281B84;
    }
    // 0x80281A2C: nop

    // 0x80281A30: addiu       $t0, $zero, 0x2
    ctx->r8 = ADD32(0, 0X2);
    // 0x80281A34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281A38: sh          $t0, 0x6608($at)
    MEM_H(0X6608, ctx->r1) = ctx->r8;
    // 0x80281A3C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281A40: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281A44: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80281A48: lwc1        $f18, 0x1C($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X1C);
    // 0x80281A4C: nop

    // 0x80281A50: c.eq.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl == ctx->f6.fl;
    // 0x80281A54: nop

    // 0x80281A58: bc1t        L_80281B68
    if (c1cs) {
        // 0x80281A5C: nop
    
            goto L_80281B68;
    }
    // 0x80281A5C: nop

    // 0x80281A60: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281A64: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281A68: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281A6C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281A70: lwc1        $f8, 0x1C($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80281A74: nop

    // 0x80281A78: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80281A7C: nop

    // 0x80281A80: bc1f        L_80281AF8
    if (!c1cs) {
        // 0x80281A84: nop
    
            goto L_80281AF8;
    }
    // 0x80281A84: nop

    // 0x80281A88: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281A8C: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281A90: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281A94: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281A98: lwc1        $f12, 0x1C($t3)
    ctx->f12.u32l = MEM_W(ctx->r11, 0X1C);
    // 0x80281A9C: jal         0x80015538
    // 0x80281AA0: nop

    Math_WrapAngle(rdram, ctx);
        goto after_5;
    // 0x80281AA0: nop

    after_5:
    // 0x80281AA4: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281AA8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281AAC: nop

    // 0x80281AB0: swc1        $f0, 0x1C($t4)
    MEM_W(0X1C, ctx->r12) = ctx->f0.u32l;
    // 0x80281AB4: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281AB8: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281ABC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281AC0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281AC4: lwc1        $f4, 0x1C($t5)
    ctx->f4.u32l = MEM_W(ctx->r13, 0X1C);
    // 0x80281AC8: nop

    // 0x80281ACC: c.lt.s      $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f4.fl < ctx->f16.fl;
    // 0x80281AD0: nop

    // 0x80281AD4: bc1f        L_80281AF0
    if (!c1cs) {
        // 0x80281AD8: nop
    
            goto L_80281AF0;
    }
    // 0x80281AD8: nop

    // 0x80281ADC: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281AE0: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281AE4: mtc1        $zero, $f18
    ctx->f18.u32l = 0;
    // 0x80281AE8: nop

    // 0x80281AEC: swc1        $f18, 0x1C($t6)
    MEM_W(0X1C, ctx->r14) = ctx->f18.u32l;
L_80281AF0:
    // 0x80281AF0: b           L_80281B60
    // 0x80281AF4: nop

        goto L_80281B60;
    // 0x80281AF4: nop

L_80281AF8:
    // 0x80281AF8: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281AFC: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281B00: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80281B04: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281B08: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80281B0C: jal         0x80015538
    // 0x80281B10: nop

    Math_WrapAngle(rdram, ctx);
        goto after_6;
    // 0x80281B10: nop

    after_6:
    // 0x80281B14: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281B18: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281B1C: nop

    // 0x80281B20: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80281B24: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281B28: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281B2C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281B30: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80281B34: lwc1        $f6, 0x1C($t9)
    ctx->f6.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80281B38: nop

    // 0x80281B3C: c.lt.s      $f8, $f6
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f8.fl < ctx->f6.fl;
    // 0x80281B40: nop

    // 0x80281B44: bc1f        L_80281B60
    if (!c1cs) {
        // 0x80281B48: nop
    
            goto L_80281B60;
    }
    // 0x80281B48: nop

    // 0x80281B4C: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281B50: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281B54: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281B58: nop

    // 0x80281B5C: swc1        $f10, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f10.u32l;
L_80281B60:
    // 0x80281B60: b           L_80281B7C
    // 0x80281B64: nop

        goto L_80281B7C;
    // 0x80281B64: nop

L_80281B68:
    // 0x80281B68: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281B6C: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281B70: mtc1        $zero, $f4
    ctx->f4.u32l = 0;
    // 0x80281B74: nop

    // 0x80281B78: swc1        $f4, 0x1C($t1)
    MEM_W(0X1C, ctx->r9) = ctx->f4.u32l;
L_80281B7C:
    // 0x80281B7C: b           L_80281D44
    // 0x80281B80: nop

        goto L_80281D44;
    // 0x80281B80: nop

L_80281B84:
    // 0x80281B84: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281B88: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281B8C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80281B90: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281B94: nop

    // 0x80281B98: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x80281B9C: nop

    // 0x80281BA0: bc1f        L_80281C64
    if (!c1cs) {
        // 0x80281BA4: nop
    
            goto L_80281C64;
    }
    // 0x80281BA4: nop

    // 0x80281BA8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281BAC: sh          $zero, 0x6608($at)
    MEM_H(0X6608, ctx->r1) = 0;
    // 0x80281BB0: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281BB4: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281BB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281BBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281BC0: lwc1        $f12, 0x1C($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X1C);
    // 0x80281BC4: jal         0x80015538
    // 0x80281BC8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_7;
    // 0x80281BC8: nop

    after_7:
    // 0x80281BCC: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281BD0: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281BD4: nop

    // 0x80281BD8: swc1        $f0, 0x1C($t3)
    MEM_W(0X1C, ctx->r11) = ctx->f0.u32l;
    // 0x80281BDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281BE0: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281BE4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281BE8: lwc1        $f4, 0x6890($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6890);
    // 0x80281BEC: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281BF0: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80281BF4: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80281BF8: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281BFC: nop

    // 0x80281C00: lwc1        $f6, 0x1C($t4)
    ctx->f6.u32l = MEM_W(ctx->r12, 0X1C);
    // 0x80281C04: nop

    // 0x80281C08: c.le.s      $f16, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f16.fl <= ctx->f6.fl;
    // 0x80281C0C: nop

    // 0x80281C10: bc1f        L_80281C5C
    if (!c1cs) {
        // 0x80281C14: nop
    
            goto L_80281C5C;
    }
    // 0x80281C14: nop

    // 0x80281C18: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281C1C: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281C20: nop

    // 0x80281C24: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80281C28: nop

    // 0x80281C2C: bc1f        L_80281C5C
    if (!c1cs) {
        // 0x80281C30: nop
    
            goto L_80281C5C;
    }
    // 0x80281C30: nop

    // 0x80281C34: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C38: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281C3C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281C40: lwc1        $f4, 0x6894($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6894);
    // 0x80281C44: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80281C48: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80281C4C: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281C50: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281C54: nop

    // 0x80281C58: swc1        $f16, 0x1C($t5)
    MEM_W(0X1C, ctx->r13) = ctx->f16.u32l;
L_80281C5C:
    // 0x80281C5C: b           L_80281D44
    // 0x80281C60: nop

        goto L_80281D44;
    // 0x80281C60: nop

L_80281C64:
    // 0x80281C64: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C68: lwc1        $f6, -0x1C74($at)
    ctx->f6.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281C6C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281C70: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281C74: nop

    // 0x80281C78: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x80281C7C: nop

    // 0x80281C80: bc1f        L_80281D44
    if (!c1cs) {
        // 0x80281C84: nop
    
            goto L_80281D44;
    }
    // 0x80281C84: nop

    // 0x80281C88: addiu       $t6, $zero, 0x1
    ctx->r14 = ADD32(0, 0X1);
    // 0x80281C8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281C90: sh          $t6, 0x6608($at)
    MEM_H(0X6608, ctx->r1) = ctx->r14;
    // 0x80281C94: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281C98: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281C9C: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80281CA0: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281CA4: lwc1        $f12, 0x1C($t7)
    ctx->f12.u32l = MEM_W(ctx->r15, 0X1C);
    // 0x80281CA8: jal         0x80015538
    // 0x80281CAC: nop

    Math_WrapAngle(rdram, ctx);
        goto after_8;
    // 0x80281CAC: nop

    after_8:
    // 0x80281CB0: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281CB4: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281CB8: nop

    // 0x80281CBC: swc1        $f0, 0x1C($t8)
    MEM_W(0X1C, ctx->r24) = ctx->f0.u32l;
    // 0x80281CC0: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281CC4: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281CC8: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281CCC: lwc1        $f4, 0x6898($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X6898);
    // 0x80281CD0: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80281CD4: mul.s       $f16, $f10, $f4
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f16.fl = MUL_S(ctx->f10.fl, ctx->f4.fl);
    // 0x80281CD8: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281CDC: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281CE0: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281CE4: lwc1        $f8, 0x1C($t9)
    ctx->f8.u32l = MEM_W(ctx->r25, 0X1C);
    // 0x80281CE8: sub.s       $f18, $f6, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f6.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f18.fl = ctx->f6.fl - ctx->f16.fl;
    // 0x80281CEC: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x80281CF0: nop

    // 0x80281CF4: bc1f        L_80281D44
    if (!c1cs) {
        // 0x80281CF8: nop
    
            goto L_80281D44;
    }
    // 0x80281CF8: nop

    // 0x80281CFC: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281D00: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281D04: nop

    // 0x80281D08: c.lt.s      $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f10.fl < ctx->f8.fl;
    // 0x80281D0C: nop

    // 0x80281D10: bc1f        L_80281D44
    if (!c1cs) {
        // 0x80281D14: nop
    
            goto L_80281D44;
    }
    // 0x80281D14: nop

    // 0x80281D18: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281D1C: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281D20: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281D24: lwc1        $f6, 0x689C($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X689C);
    // 0x80281D28: lui         $at, 0x43B4
    ctx->r1 = S32(0X43B4 << 16);
    // 0x80281D2C: mul.s       $f16, $f4, $f6
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f16.fl = MUL_S(ctx->f4.fl, ctx->f6.fl);
    // 0x80281D30: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281D34: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281D38: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281D3C: sub.s       $f8, $f18, $f16
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f18.fl); NAN_CHECK(ctx->f16.fl); 
    ctx->f8.fl = ctx->f18.fl - ctx->f16.fl;
    // 0x80281D40: swc1        $f8, 0x1C($t0)
    MEM_W(0X1C, ctx->r8) = ctx->f8.u32l;
L_80281D44:
    // 0x80281D44: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281D48: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281D4C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80281D50: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281D54: nop

    // 0x80281D58: c.lt.s      $f4, $f10
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f4.fl < ctx->f10.fl;
    // 0x80281D5C: nop

    // 0x80281D60: bc1f        L_80281E8C
    if (!c1cs) {
        // 0x80281D64: nop
    
            goto L_80281E8C;
    }
    // 0x80281D64: nop

    // 0x80281D68: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80281D6C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281D70: nop

    // 0x80281D74: c.lt.s      $f10, $f6
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f10.fl < ctx->f6.fl;
    // 0x80281D78: nop

    // 0x80281D7C: bc1f        L_80281E8C
    if (!c1cs) {
        // 0x80281D80: nop
    
            goto L_80281E8C;
    }
    // 0x80281D80: nop

    // 0x80281D84: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281D88: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281D8C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281D90: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281D94: lwc1        $f18, 0x20($t1)
    ctx->f18.u32l = MEM_W(ctx->r9, 0X20);
    // 0x80281D98: nop

    // 0x80281D9C: c.lt.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl < ctx->f16.fl;
    // 0x80281DA0: nop

    // 0x80281DA4: bc1f        L_80281E1C
    if (!c1cs) {
        // 0x80281DA8: nop
    
            goto L_80281E1C;
    }
    // 0x80281DA8: nop

    // 0x80281DAC: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281DB0: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281DB4: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80281DB8: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281DBC: lwc1        $f12, 0x20($t2)
    ctx->f12.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80281DC0: jal         0x80015538
    // 0x80281DC4: nop

    Math_WrapAngle(rdram, ctx);
        goto after_9;
    // 0x80281DC4: nop

    after_9:
    // 0x80281DC8: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281DCC: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281DD0: nop

    // 0x80281DD4: swc1        $f0, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f0.u32l;
    // 0x80281DD8: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281DDC: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281DE0: lui         $at, 0x4396
    ctx->r1 = S32(0X4396 << 16);
    // 0x80281DE4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281DE8: lwc1        $f8, 0x20($t4)
    ctx->f8.u32l = MEM_W(ctx->r12, 0X20);
    // 0x80281DEC: nop

    // 0x80281DF0: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80281DF4: nop

    // 0x80281DF8: bc1f        L_80281E14
    if (!c1cs) {
        // 0x80281DFC: nop
    
            goto L_80281E14;
    }
    // 0x80281DFC: nop

    // 0x80281E00: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281E04: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281E08: mtc1        $zero, $f10
    ctx->f10.u32l = 0;
    // 0x80281E0C: nop

    // 0x80281E10: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
L_80281E14:
    // 0x80281E14: b           L_80281E84
    // 0x80281E18: nop

        goto L_80281E84;
    // 0x80281E18: nop

L_80281E1C:
    // 0x80281E1C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80281E20: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80281E24: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281E28: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281E2C: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x80281E30: jal         0x80015538
    // 0x80281E34: nop

    Math_WrapAngle(rdram, ctx);
        goto after_10;
    // 0x80281E34: nop

    after_10:
    // 0x80281E38: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80281E3C: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x80281E40: nop

    // 0x80281E44: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
    // 0x80281E48: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80281E4C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80281E50: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281E54: mtc1        $at, $f18
    ctx->f18.u32l = ctx->r1;
    // 0x80281E58: lwc1        $f6, 0x20($t8)
    ctx->f6.u32l = MEM_W(ctx->r24, 0X20);
    // 0x80281E5C: nop

    // 0x80281E60: c.lt.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl < ctx->f18.fl;
    // 0x80281E64: nop

    // 0x80281E68: bc1f        L_80281E84
    if (!c1cs) {
        // 0x80281E6C: nop
    
            goto L_80281E84;
    }
    // 0x80281E6C: nop

    // 0x80281E70: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x80281E74: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x80281E78: mtc1        $zero, $f16
    ctx->f16.u32l = 0;
    // 0x80281E7C: nop

    // 0x80281E80: swc1        $f16, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f16.u32l;
L_80281E84:
    // 0x80281E84: b           L_80282150
    // 0x80281E88: nop

        goto L_80282150;
    // 0x80281E88: nop

L_80281E8C:
    // 0x80281E8C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281E90: lwc1        $f8, -0x1C74($at)
    ctx->f8.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281E94: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80281E98: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281E9C: nop

    // 0x80281EA0: c.le.s      $f8, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f8.fl <= ctx->f4.fl;
    // 0x80281EA4: nop

    // 0x80281EA8: bc1f        L_80281FF4
    if (!c1cs) {
        // 0x80281EAC: nop
    
            goto L_80281FF4;
    }
    // 0x80281EAC: nop

    // 0x80281EB0: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x80281EB4: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x80281EB8: lui         $at, 0x4000
    ctx->r1 = S32(0X4000 << 16);
    // 0x80281EBC: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80281EC0: lwc1        $f12, 0x20($t0)
    ctx->f12.u32l = MEM_W(ctx->r8, 0X20);
    // 0x80281EC4: jal         0x80015538
    // 0x80281EC8: nop

    Math_WrapAngle(rdram, ctx);
        goto after_11;
    // 0x80281EC8: nop

    after_11:
    // 0x80281ECC: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80281ED0: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80281ED4: nop

    // 0x80281ED8: swc1        $f0, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f0.u32l;
    // 0x80281EDC: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281EE0: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281EE4: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281EE8: lwc1        $f6, 0x68A0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X68A0);
    // 0x80281EEC: lui         $at, 0xC1A0
    ctx->r1 = S32(0XC1A0 << 16);
    // 0x80281EF0: mul.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x80281EF4: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80281EF8: nop

    // 0x80281EFC: c.le.s      $f18, $f16
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f18.fl <= ctx->f16.fl;
    // 0x80281F00: nop

    // 0x80281F04: bc1f        L_80281F70
    if (!c1cs) {
        // 0x80281F08: nop
    
            goto L_80281F70;
    }
    // 0x80281F08: nop

    // 0x80281F0C: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80281F10: lw          $t2, 0x753C($t2)
    ctx->r10 = MEM_W(ctx->r10, 0X753C);
    // 0x80281F14: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80281F18: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x80281F1C: lwc1        $f8, 0x20($t2)
    ctx->f8.u32l = MEM_W(ctx->r10, 0X20);
    // 0x80281F20: nop

    // 0x80281F24: c.le.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl <= ctx->f8.fl;
    // 0x80281F28: nop

    // 0x80281F2C: bc1f        L_80281F68
    if (!c1cs) {
        // 0x80281F30: nop
    
            goto L_80281F68;
    }
    // 0x80281F30: nop

    // 0x80281F34: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281F38: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80281F3C: nop

    // 0x80281F40: c.lt.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl < ctx->f10.fl;
    // 0x80281F44: nop

    // 0x80281F48: bc1f        L_80281F68
    if (!c1cs) {
        // 0x80281F4C: nop
    
            goto L_80281F68;
    }
    // 0x80281F4C: nop

    // 0x80281F50: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80281F54: lui         $t3, 0x8017
    ctx->r11 = S32(0X8017 << 16);
    // 0x80281F58: lw          $t3, 0x753C($t3)
    ctx->r11 = MEM_W(ctx->r11, 0X753C);
    // 0x80281F5C: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281F60: nop

    // 0x80281F64: swc1        $f6, 0x20($t3)
    MEM_W(0X20, ctx->r11) = ctx->f6.u32l;
L_80281F68:
    // 0x80281F68: b           L_80281FEC
    // 0x80281F6C: nop

        goto L_80281FEC;
    // 0x80281F6C: nop

L_80281F70:
    // 0x80281F70: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281F74: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281F78: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281F7C: lwc1        $f4, 0x68A4($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68A4);
    // 0x80281F80: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80281F84: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x80281F88: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80281F8C: nop

    // 0x80281F90: lwc1        $f18, 0x20($t4)
    ctx->f18.u32l = MEM_W(ctx->r12, 0X20);
    // 0x80281F94: neg.s       $f10, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = -ctx->f8.fl;
    // 0x80281F98: c.le.s      $f10, $f18
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f10.fl <= ctx->f18.fl;
    // 0x80281F9C: nop

    // 0x80281FA0: bc1f        L_80281FEC
    if (!c1cs) {
        // 0x80281FA4: nop
    
            goto L_80281FEC;
    }
    // 0x80281FA4: nop

    // 0x80281FA8: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80281FAC: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80281FB0: nop

    // 0x80281FB4: c.lt.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl < ctx->f6.fl;
    // 0x80281FB8: nop

    // 0x80281FBC: bc1f        L_80281FEC
    if (!c1cs) {
        // 0x80281FC0: nop
    
            goto L_80281FEC;
    }
    // 0x80281FC0: nop

    // 0x80281FC4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281FC8: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281FCC: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80281FD0: lwc1        $f8, 0x68A8($at)
    ctx->f8.u32l = MEM_W(ctx->r1, 0X68A8);
    // 0x80281FD4: neg.s       $f4, $f16
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 16);
    NAN_CHECK(ctx->f16.fl); 
    ctx->f4.fl = -ctx->f16.fl;
    // 0x80281FD8: mul.s       $f10, $f4, $f8
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f8.fl); 
    ctx->f10.fl = MUL_S(ctx->f4.fl, ctx->f8.fl);
    // 0x80281FDC: lui         $t5, 0x8017
    ctx->r13 = S32(0X8017 << 16);
    // 0x80281FE0: lw          $t5, 0x753C($t5)
    ctx->r13 = MEM_W(ctx->r13, 0X753C);
    // 0x80281FE4: nop

    // 0x80281FE8: swc1        $f10, 0x20($t5)
    MEM_W(0X20, ctx->r13) = ctx->f10.u32l;
L_80281FEC:
    // 0x80281FEC: b           L_80282150
    // 0x80281FF0: nop

        goto L_80282150;
    // 0x80281FF0: nop

L_80281FF4:
    // 0x80281FF4: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80281FF8: lwc1        $f18, -0x1C74($at)
    ctx->f18.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80281FFC: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80282000: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282004: nop

    // 0x80282008: c.le.s      $f6, $f18
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f6.fl <= ctx->f18.fl;
    // 0x8028200C: nop

    // 0x80282010: bc1f        L_80282150
    if (!c1cs) {
        // 0x80282014: nop
    
            goto L_80282150;
    }
    // 0x80282014: nop

    // 0x80282018: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x8028201C: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80282020: lui         $at, 0xC000
    ctx->r1 = S32(0XC000 << 16);
    // 0x80282024: mtc1        $at, $f14
    ctx->f14.u32l = ctx->r1;
    // 0x80282028: lwc1        $f12, 0x20($t6)
    ctx->f12.u32l = MEM_W(ctx->r14, 0X20);
    // 0x8028202C: jal         0x80015538
    // 0x80282030: nop

    Math_WrapAngle(rdram, ctx);
        goto after_12;
    // 0x80282030: nop

    after_12:
    // 0x80282034: lui         $t7, 0x8017
    ctx->r15 = S32(0X8017 << 16);
    // 0x80282038: lw          $t7, 0x753C($t7)
    ctx->r15 = MEM_W(ctx->r15, 0X753C);
    // 0x8028203C: nop

    // 0x80282040: swc1        $f0, 0x20($t7)
    MEM_W(0X20, ctx->r15) = ctx->f0.u32l;
    // 0x80282044: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282048: lwc1        $f16, -0x1C74($at)
    ctx->f16.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028204C: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80282050: lwc1        $f4, 0x68AC($at)
    ctx->f4.u32l = MEM_W(ctx->r1, 0X68AC);
    // 0x80282054: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80282058: mul.s       $f8, $f16, $f4
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 4);
    NAN_CHECK(ctx->f16.fl); NAN_CHECK(ctx->f4.fl); 
    ctx->f8.fl = MUL_S(ctx->f16.fl, ctx->f4.fl);
    // 0x8028205C: mtc1        $at, $f10
    ctx->f10.u32l = ctx->r1;
    // 0x80282060: nop

    // 0x80282064: c.le.s      $f8, $f10
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 10);
    c1cs = ctx->f8.fl <= ctx->f10.fl;
    // 0x80282068: nop

    // 0x8028206C: bc1f        L_802820D8
    if (!c1cs) {
        // 0x80282070: nop
    
            goto L_802820D8;
    }
    // 0x80282070: nop

    // 0x80282074: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282078: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x8028207C: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x80282080: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80282084: lwc1        $f18, 0x20($t8)
    ctx->f18.u32l = MEM_W(ctx->r24, 0X20);
    // 0x80282088: nop

    // 0x8028208C: c.le.s      $f18, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f18.fl <= ctx->f6.fl;
    // 0x80282090: nop

    // 0x80282094: bc1f        L_802820D0
    if (!c1cs) {
        // 0x80282098: nop
    
            goto L_802820D0;
    }
    // 0x80282098: nop

    // 0x8028209C: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x802820A0: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x802820A4: nop

    // 0x802820A8: c.lt.s      $f16, $f18
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f16.fl < ctx->f18.fl;
    // 0x802820AC: nop

    // 0x802820B0: bc1f        L_802820D0
    if (!c1cs) {
        // 0x802820B4: nop
    
            goto L_802820D0;
    }
    // 0x802820B4: nop

    // 0x802820B8: lui         $at, 0x43AA
    ctx->r1 = S32(0X43AA << 16);
    // 0x802820BC: lui         $t9, 0x8017
    ctx->r25 = S32(0X8017 << 16);
    // 0x802820C0: lw          $t9, 0x753C($t9)
    ctx->r25 = MEM_W(ctx->r25, 0X753C);
    // 0x802820C4: mtc1        $at, $f4
    ctx->f4.u32l = ctx->r1;
    // 0x802820C8: nop

    // 0x802820CC: swc1        $f4, 0x20($t9)
    MEM_W(0X20, ctx->r25) = ctx->f4.u32l;
L_802820D0:
    // 0x802820D0: b           L_80282150
    // 0x802820D4: nop

        goto L_80282150;
    // 0x802820D4: nop

L_802820D8:
    // 0x802820D8: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x802820DC: lwc1        $f10, -0x1C74($at)
    ctx->f10.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x802820E0: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x802820E4: lwc1        $f6, 0x68B0($at)
    ctx->f6.u32l = MEM_W(ctx->r1, 0X68B0);
    // 0x802820E8: lui         $t0, 0x8017
    ctx->r8 = S32(0X8017 << 16);
    // 0x802820EC: mul.s       $f18, $f10, $f6
    CHECK_FR(ctx, 18);
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 6);
    NAN_CHECK(ctx->f10.fl); NAN_CHECK(ctx->f6.fl); 
    ctx->f18.fl = MUL_S(ctx->f10.fl, ctx->f6.fl);
    // 0x802820F0: lw          $t0, 0x753C($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X753C);
    // 0x802820F4: nop

    // 0x802820F8: lwc1        $f8, 0x20($t0)
    ctx->f8.u32l = MEM_W(ctx->r8, 0X20);
    // 0x802820FC: nop

    // 0x80282100: c.le.s      $f8, $f18
    CHECK_FR(ctx, 8);
    CHECK_FR(ctx, 18);
    c1cs = ctx->f8.fl <= ctx->f18.fl;
    // 0x80282104: nop

    // 0x80282108: bc1f        L_80282150
    if (!c1cs) {
        // 0x8028210C: nop
    
            goto L_80282150;
    }
    // 0x8028210C: nop

    // 0x80282110: lui         $at, 0x4334
    ctx->r1 = S32(0X4334 << 16);
    // 0x80282114: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x80282118: nop

    // 0x8028211C: c.lt.s      $f16, $f8
    CHECK_FR(ctx, 16);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f16.fl < ctx->f8.fl;
    // 0x80282120: nop

    // 0x80282124: bc1f        L_80282150
    if (!c1cs) {
        // 0x80282128: nop
    
            goto L_80282150;
    }
    // 0x80282128: nop

    // 0x8028212C: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80282130: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x80282134: lui         $at, 0x8028
    ctx->r1 = S32(0X8028 << 16);
    // 0x80282138: lwc1        $f10, 0x68B4($at)
    ctx->f10.u32l = MEM_W(ctx->r1, 0X68B4);
    // 0x8028213C: lui         $t1, 0x8017
    ctx->r9 = S32(0X8017 << 16);
    // 0x80282140: mul.s       $f6, $f4, $f10
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 10);
    NAN_CHECK(ctx->f4.fl); NAN_CHECK(ctx->f10.fl); 
    ctx->f6.fl = MUL_S(ctx->f4.fl, ctx->f10.fl);
    // 0x80282144: lw          $t1, 0x753C($t1)
    ctx->r9 = MEM_W(ctx->r9, 0X753C);
    // 0x80282148: nop

    // 0x8028214C: swc1        $f6, 0x20($t1)
    MEM_W(0X20, ctx->r9) = ctx->f6.u32l;
L_80282150:
    // 0x80282150: b           L_80282158
    // 0x80282154: nop

        goto L_80282158;
    // 0x80282154: nop

L_80282158:
    // 0x80282158: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x8028215C: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x80282160: jr          $ra
    // 0x80282164: nop

    return;
    // 0x80282164: nop

;}
RECOMP_FUNC void func_80282C48_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x80282C48: addiu       $sp, $sp, -0x28
    ctx->r29 = ADD32(ctx->r29, -0X28);
    // 0x80282C4C: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x80282C50: addiu       $t6, $zero, 0x4
    ctx->r14 = ADD32(0, 0X4);
    // 0x80282C54: sw          $t6, 0x24($sp)
    MEM_W(0X24, ctx->r29) = ctx->r14;
    // 0x80282C58: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80282C5C: lw          $t8, 0x753C($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X753C);
    // 0x80282C60: addiu       $t7, $zero, 0x1FC
    ctx->r15 = ADD32(0, 0X1FC);
    // 0x80282C64: sh          $t7, 0xA4($t8)
    MEM_H(0XA4, ctx->r24) = ctx->r15;
    // 0x80282C68: lui         $t9, 0x8011
    ctx->r25 = S32(0X8011 << 16);
    // 0x80282C6C: addiu       $t9, $t9, 0x6058
    ctx->r25 = ADD32(ctx->r25, 0X6058);
    // 0x80282C70: lw          $a2, 0x24($sp)
    ctx->r6 = MEM_W(ctx->r29, 0X24);
    // 0x80282C74: sw          $t9, 0x10($sp)
    MEM_W(0X10, ctx->r29) = ctx->r25;
    // 0x80282C78: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80282C7C: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80282C80: jal         0x8001C0EC
    // 0x80282C84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    func_8001C0EC(rdram, ctx);
        goto after_0;
    // 0x80282C84: addiu       $a3, $zero, 0x1
    ctx->r7 = ADD32(0, 0X1);
    after_0:
    // 0x80282C88: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80282C8C: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80282C90: addiu       $at, $zero, -0x2
    ctx->r1 = ADD32(0, -0X2);
    // 0x80282C94: and         $t1, $t0, $at
    ctx->r9 = ctx->r8 & ctx->r1;
    // 0x80282C98: lui         $at, 0x8016
    ctx->r1 = S32(0X8016 << 16);
    // 0x80282C9C: sw          $t1, 0x51A4($at)
    MEM_W(0X51A4, ctx->r1) = ctx->r9;
    // 0x80282CA0: b           L_80282CA8
    // 0x80282CA4: nop

        goto L_80282CA8;
    // 0x80282CA4: nop

L_80282CA8:
    // 0x80282CA8: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80282CAC: addiu       $sp, $sp, 0x28
    ctx->r29 = ADD32(ctx->r29, 0X28);
    // 0x80282CB0: jr          $ra
    // 0x80282CB4: nop

    return;
    // 0x80282CB4: nop

;}
RECOMP_FUNC void func_8028409C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028409C: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802840A0: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802840A4: jal         0x80283A2C
    // 0x802840A8: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802840A8: nop

    after_0:
    // 0x802840AC: beq         $v0, $zero, L_802840BC
    if (ctx->r2 == 0) {
        // 0x802840B0: nop
    
            goto L_802840BC;
    }
    // 0x802840B0: nop

    // 0x802840B4: b           L_80284198
    // 0x802840B8: nop

        goto L_80284198;
    // 0x802840B8: nop

L_802840BC:
    // 0x802840BC: jal         0x80085D54
    // 0x802840C0: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802840C0: nop

    after_1:
    // 0x802840C4: beq         $v0, $zero, L_802840D4
    if (ctx->r2 == 0) {
        // 0x802840C8: nop
    
            goto L_802840D4;
    }
    // 0x802840C8: nop

    // 0x802840CC: b           L_80284198
    // 0x802840D0: nop

        goto L_80284198;
    // 0x802840D0: nop

L_802840D4:
    // 0x802840D4: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802840D8: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x802840DC: nop

    // 0x802840E0: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x802840E4: beq         $t7, $zero, L_8028412C
    if (ctx->r15 == 0) {
        // 0x802840E8: nop
    
            goto L_8028412C;
    }
    // 0x802840E8: nop

    // 0x802840EC: lui         $t8, 0x8016
    ctx->r24 = S32(0X8016 << 16);
    // 0x802840F0: lw          $t8, 0x51A4($t8)
    ctx->r24 = MEM_W(ctx->r24, 0X51A4);
    // 0x802840F4: nop

    // 0x802840F8: andi        $t9, $t8, 0x1
    ctx->r25 = ctx->r24 & 0X1;
    // 0x802840FC: beq         $t9, $zero, L_8028412C
    if (ctx->r25 == 0) {
        // 0x80284100: nop
    
            goto L_8028412C;
    }
    // 0x80284100: nop

    // 0x80284104: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x80284108: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x8028410C: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80284110: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80284114: jal         0x800178D4
    // 0x80284118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x80284118: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x8028411C: jal         0x8028366C
    // 0x80284120: nop

    func_8028366C_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284120: nop

    after_3:
    // 0x80284124: b           L_80284198
    // 0x80284128: nop

        goto L_80284198;
    // 0x80284128: nop

L_8028412C:
    // 0x8028412C: lui         $t0, 0x8016
    ctx->r8 = S32(0X8016 << 16);
    // 0x80284130: lw          $t0, 0x51A4($t0)
    ctx->r8 = MEM_W(ctx->r8, 0X51A4);
    // 0x80284134: nop

    // 0x80284138: andi        $t1, $t0, 0x1
    ctx->r9 = ctx->r8 & 0X1;
    // 0x8028413C: beq         $t1, $zero, L_80284190
    if (ctx->r9 == 0) {
        // 0x80284140: nop
    
            goto L_80284190;
    }
    // 0x80284140: nop

    // 0x80284144: lui         $t2, 0x8017
    ctx->r10 = S32(0X8017 << 16);
    // 0x80284148: lb          $t2, 0x65F0($t2)
    ctx->r10 = MEM_B(ctx->r10, 0X65F0);
    // 0x8028414C: nop

    // 0x80284150: andi        $t3, $t2, 0x3
    ctx->r11 = ctx->r10 & 0X3;
    // 0x80284154: bne         $t3, $zero, L_80284180
    if (ctx->r11 != 0) {
        // 0x80284158: nop
    
            goto L_80284180;
    }
    // 0x80284158: nop

    // 0x8028415C: lui         $t4, 0x8017
    ctx->r12 = S32(0X8017 << 16);
    // 0x80284160: lw          $t4, 0x753C($t4)
    ctx->r12 = MEM_W(ctx->r12, 0X753C);
    // 0x80284164: mtc1        $zero, $f6
    ctx->f6.u32l = 0;
    // 0x80284168: lwc1        $f4, 0x28($t4)
    ctx->f4.u32l = MEM_W(ctx->r12, 0X28);
    // 0x8028416C: nop

    // 0x80284170: c.lt.s      $f4, $f6
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 6);
    c1cs = ctx->f4.fl < ctx->f6.fl;
    // 0x80284174: nop

    // 0x80284178: bc1f        L_80284190
    if (!c1cs) {
        // 0x8028417C: nop
    
            goto L_80284190;
    }
    // 0x8028417C: nop

L_80284180:
    // 0x80284180: jal         0x80282B2C
    // 0x80284184: nop

    func_80282B2C_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x80284184: nop

    after_4:
    // 0x80284188: b           L_80284198
    // 0x8028418C: nop

        goto L_80284198;
    // 0x8028418C: nop

L_80284190:
    // 0x80284190: b           L_80284198
    // 0x80284194: nop

        goto L_80284198;
    // 0x80284194: nop

L_80284198:
    // 0x80284198: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x8028419C: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x802841A0: jr          $ra
    // 0x802841A4: nop

    return;
    // 0x802841A4: nop

;}
RECOMP_FUNC void func_8028550C_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x8028550C: addiu       $sp, $sp, -0x18
    ctx->r29 = ADD32(ctx->r29, -0X18);
    // 0x80285510: sw          $ra, 0x14($sp)
    MEM_W(0X14, ctx->r29) = ctx->r31;
    // 0x80285514: lui         $at, 0x8017
    ctx->r1 = S32(0X8017 << 16);
    // 0x80285518: lwc1        $f4, -0x1C74($at)
    ctx->f4.u32l = MEM_W(ctx->r1, -0X1C74);
    // 0x8028551C: lui         $at, 0xC120
    ctx->r1 = S32(0XC120 << 16);
    // 0x80285520: mtc1        $at, $f6
    ctx->f6.u32l = ctx->r1;
    // 0x80285524: nop

    // 0x80285528: c.lt.s      $f6, $f4
    CHECK_FR(ctx, 6);
    CHECK_FR(ctx, 4);
    c1cs = ctx->f6.fl < ctx->f4.fl;
    // 0x8028552C: nop

    // 0x80285530: bc1f        L_8028556C
    if (!c1cs) {
        // 0x80285534: nop
    
            goto L_8028556C;
    }
    // 0x80285534: nop

    // 0x80285538: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x8028553C: mtc1        $at, $f8
    ctx->f8.u32l = ctx->r1;
    // 0x80285540: nop

    // 0x80285544: c.lt.s      $f4, $f8
    CHECK_FR(ctx, 4);
    CHECK_FR(ctx, 8);
    c1cs = ctx->f4.fl < ctx->f8.fl;
    // 0x80285548: nop

    // 0x8028554C: bc1f        L_8028556C
    if (!c1cs) {
        // 0x80285550: nop
    
            goto L_8028556C;
    }
    // 0x80285550: nop

    // 0x80285554: lui         $at, 0x41F0
    ctx->r1 = S32(0X41F0 << 16);
    // 0x80285558: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x8028555C: jal         0x802804B8
    // 0x80285560: nop

    func_802804B8_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x80285560: nop

    after_0:
    // 0x80285564: b           L_8028557C
    // 0x80285568: nop

        goto L_8028557C;
    // 0x80285568: nop

L_8028556C:
    // 0x8028556C: lui         $at, 0x4120
    ctx->r1 = S32(0X4120 << 16);
    // 0x80285570: mtc1        $at, $f12
    ctx->f12.u32l = ctx->r1;
    // 0x80285574: jal         0x802807D8
    // 0x80285578: nop

    func_802807D8_code_extra_5(rdram, ctx);
        goto after_1;
    // 0x80285578: nop

    after_1:
L_8028557C:
    // 0x8028557C: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x80285580: lw          $t6, 0x753C($t6)
    ctx->r14 = MEM_W(ctx->r14, 0X753C);
    // 0x80285584: lui         $at, 0x41A0
    ctx->r1 = S32(0X41A0 << 16);
    // 0x80285588: mtc1        $at, $f16
    ctx->f16.u32l = ctx->r1;
    // 0x8028558C: lwc1        $f10, 0x44($t6)
    ctx->f10.u32l = MEM_W(ctx->r14, 0X44);
    // 0x80285590: nop

    // 0x80285594: c.lt.s      $f10, $f16
    CHECK_FR(ctx, 10);
    CHECK_FR(ctx, 16);
    c1cs = ctx->f10.fl < ctx->f16.fl;
    // 0x80285598: nop

    // 0x8028559C: bc1f        L_802855B4
    if (!c1cs) {
        // 0x802855A0: nop
    
            goto L_802855B4;
    }
    // 0x802855A0: nop

    // 0x802855A4: jal         0x80281678
    // 0x802855A8: nop

    func_80281678_code_extra_5(rdram, ctx);
        goto after_2;
    // 0x802855A8: nop

    after_2:
    // 0x802855AC: b           L_802855BC
    // 0x802855B0: nop

        goto L_802855BC;
    // 0x802855B0: nop

L_802855B4:
    // 0x802855B4: jal         0x80280B88
    // 0x802855B8: nop

    func_80280B88_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x802855B8: nop

    after_3:
L_802855BC:
    // 0x802855BC: b           L_802855C4
    // 0x802855C0: nop

        goto L_802855C4;
    // 0x802855C0: nop

L_802855C4:
    // 0x802855C4: lw          $ra, 0x14($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X14);
    // 0x802855C8: addiu       $sp, $sp, 0x18
    ctx->r29 = ADD32(ctx->r29, 0X18);
    // 0x802855CC: jr          $ra
    // 0x802855D0: nop

    return;
    // 0x802855D0: nop

;}
RECOMP_FUNC void func_802841A8_code_extra_5(uint8_t* rdram, recomp_context* ctx) {
    uint64_t hi = 0, lo = 0, result = 0;
    int c1cs = 0;
    // 0x802841A8: addiu       $sp, $sp, -0x20
    ctx->r29 = ADD32(ctx->r29, -0X20);
    // 0x802841AC: sw          $ra, 0x1C($sp)
    MEM_W(0X1C, ctx->r29) = ctx->r31;
    // 0x802841B0: jal         0x80283A2C
    // 0x802841B4: nop

    func_80283A2C_code_extra_5(rdram, ctx);
        goto after_0;
    // 0x802841B4: nop

    after_0:
    // 0x802841B8: beq         $v0, $zero, L_802841C8
    if (ctx->r2 == 0) {
        // 0x802841BC: nop
    
            goto L_802841C8;
    }
    // 0x802841BC: nop

    // 0x802841C0: b           L_80284250
    // 0x802841C4: nop

        goto L_80284250;
    // 0x802841C4: nop

L_802841C8:
    // 0x802841C8: jal         0x80085D54
    // 0x802841CC: nop

    func_80085D54(rdram, ctx);
        goto after_1;
    // 0x802841CC: nop

    after_1:
    // 0x802841D0: beq         $v0, $zero, L_802841E0
    if (ctx->r2 == 0) {
        // 0x802841D4: nop
    
            goto L_802841E0;
    }
    // 0x802841D4: nop

    // 0x802841D8: b           L_80284250
    // 0x802841DC: nop

        goto L_80284250;
    // 0x802841DC: nop

L_802841E0:
    // 0x802841E0: lui         $t6, 0x8017
    ctx->r14 = S32(0X8017 << 16);
    // 0x802841E4: lhu         $t6, -0x1C7C($t6)
    ctx->r14 = MEM_HU(ctx->r14, -0X1C7C);
    // 0x802841E8: nop

    // 0x802841EC: andi        $t7, $t6, 0x4000
    ctx->r15 = ctx->r14 & 0X4000;
    // 0x802841F0: beq         $t7, $zero, L_80284220
    if (ctx->r15 == 0) {
        // 0x802841F4: nop
    
            goto L_80284220;
    }
    // 0x802841F4: nop

    // 0x802841F8: or          $a0, $zero, $zero
    ctx->r4 = 0 | 0;
    // 0x802841FC: or          $a1, $zero, $zero
    ctx->r5 = 0 | 0;
    // 0x80284200: addiu       $a2, $zero, 0x6
    ctx->r6 = ADD32(0, 0X6);
    // 0x80284204: addiu       $a3, $zero, -0x1
    ctx->r7 = ADD32(0, -0X1);
    // 0x80284208: jal         0x800178D4
    // 0x8028420C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    func_800178D4(rdram, ctx);
        goto after_2;
    // 0x8028420C: sw          $zero, 0x10($sp)
    MEM_W(0X10, ctx->r29) = 0;
    after_2:
    // 0x80284210: jal         0x802836B8
    // 0x80284214: nop

    func_802836B8_code_extra_5(rdram, ctx);
        goto after_3;
    // 0x80284214: nop

    after_3:
    // 0x80284218: b           L_80284250
    // 0x8028421C: nop

        goto L_80284250;
    // 0x8028421C: nop

L_80284220:
    // 0x80284220: lui         $t8, 0x8017
    ctx->r24 = S32(0X8017 << 16);
    // 0x80284224: lb          $t8, 0x65F0($t8)
    ctx->r24 = MEM_B(ctx->r24, 0X65F0);
    // 0x80284228: nop

    // 0x8028422C: andi        $t9, $t8, 0x2
    ctx->r25 = ctx->r24 & 0X2;
    // 0x80284230: beq         $t9, $zero, L_80284248
    if (ctx->r25 == 0) {
        // 0x80284234: nop
    
            goto L_80284248;
    }
    // 0x80284234: nop

    // 0x80284238: jal         0x80282BA4
    // 0x8028423C: nop

    func_80282BA4_code_extra_5(rdram, ctx);
        goto after_4;
    // 0x8028423C: nop

    after_4:
    // 0x80284240: b           L_80284250
    // 0x80284244: nop

        goto L_80284250;
    // 0x80284244: nop

L_80284248:
    // 0x80284248: b           L_80284250
    // 0x8028424C: nop

        goto L_80284250;
    // 0x8028424C: nop

L_80284250:
    // 0x80284250: lw          $ra, 0x1C($sp)
    ctx->r31 = MEM_W(ctx->r29, 0X1C);
    // 0x80284254: addiu       $sp, $sp, 0x20
    ctx->r29 = ADD32(ctx->r29, 0X20);
    // 0x80284258: jr          $ra
    // 0x8028425C: nop

    return;
    // 0x8028425C: nop

;}
