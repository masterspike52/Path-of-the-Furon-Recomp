#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E85FB4"))) PPC_WEAK_FUNC(sub_82E85FB4);
PPC_FUNC_IMPL(__imp__sub_82E85FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E85FB8"))) PPC_WEAK_FUNC(sub_82E85FB8);
PPC_FUNC_IMPL(__imp__sub_82E85FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E85FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82e84d90
	ctx.lr = 0x82E86000;
	sub_82E84D90(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82299698
	ctx.lr = 0x82E8600C;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e8601c
	if (!ctx.cr0.eq) goto loc_82E8601C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e86064
	goto loc_82E86064;
loc_82E8601C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,17409
	ctx.r8.s64 = 17409;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r28,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFF;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// rlwimi r9,r8,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwimi r11,r29,22,4,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 22) & 0xFC00000) | (ctx.r11.u64 & 0xFFFFFFFFF03FFFFF);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82e76d00
	ctx.lr = 0x82E86060;
	sub_82E76D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E86064:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8606C"))) PPC_WEAK_FUNC(sub_82E8606C);
PPC_FUNC_IMPL(__imp__sub_82E8606C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86070"))) PPC_WEAK_FUNC(sub_82E86070);
PPC_FUNC_IMPL(__imp__sub_82E86070) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e85330
	sub_82E85330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8608C"))) PPC_WEAK_FUNC(sub_82E8608C);
PPC_FUNC_IMPL(__imp__sub_82E8608C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86090"))) PPC_WEAK_FUNC(sub_82E86090);
PPC_FUNC_IMPL(__imp__sub_82E86090) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e85330
	sub_82E85330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E86094"))) PPC_WEAK_FUNC(sub_82E86094);
PPC_FUNC_IMPL(__imp__sub_82E86094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86098"))) PPC_WEAK_FUNC(sub_82E86098);
PPC_FUNC_IMPL(__imp__sub_82E86098) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e84c90
	sub_82E84C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8609C"))) PPC_WEAK_FUNC(sub_82E8609C);
PPC_FUNC_IMPL(__imp__sub_82E8609C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E860A0"))) PPC_WEAK_FUNC(sub_82E860A0);
PPC_FUNC_IMPL(__imp__sub_82E860A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E860A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e84d90
	ctx.lr = 0x82E860EC;
	sub_82E84D90(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82299698
	ctx.lr = 0x82E860F8;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e86108
	if (!ctx.cr0.eq) goto loc_82E86108;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e86144
	goto loc_82E86144;
loc_82E86108:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,17409
	ctx.r10.s64 = 17409;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwimi r11,r10,20,11,9
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r11.u64 & 0x200000);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// rlwimi r9,r29,28,0,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r29.u32, 28) & 0xF0000000) | (ctx.r9.u64 & 0xFFFFFFFF0FFFFFFF);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// bl 0x82e76d00
	ctx.lr = 0x82E86140;
	sub_82E76D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E86144:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8614C"))) PPC_WEAK_FUNC(sub_82E8614C);
PPC_FUNC_IMPL(__imp__sub_82E8614C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86150"))) PPC_WEAK_FUNC(sub_82E86150);
PPC_FUNC_IMPL(__imp__sub_82E86150) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e853c0
	sub_82E853C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E86154"))) PPC_WEAK_FUNC(sub_82E86154);
PPC_FUNC_IMPL(__imp__sub_82E86154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86158"))) PPC_WEAK_FUNC(sub_82E86158);
PPC_FUNC_IMPL(__imp__sub_82E86158) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e84b90
	sub_82E84B90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8615C"))) PPC_WEAK_FUNC(sub_82E8615C);
PPC_FUNC_IMPL(__imp__sub_82E8615C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86160"))) PPC_WEAK_FUNC(sub_82E86160);
PPC_FUNC_IMPL(__imp__sub_82E86160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E86168;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,124
	ctx.r10.s64 = ctx.r1.s64 + 124;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82e84d90
	ctx.lr = 0x82E861AC;
	sub_82E84D90(ctx, base);
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82299698
	ctx.lr = 0x82E861B8;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e861c8
	if (!ctx.cr0.eq) goto loc_82E861C8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e86210
	goto loc_82E86210;
loc_82E861C8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r8,17409
	ctx.r8.s64 = 17409;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r29,28,0,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xF0000000;
	// clrlwi r11,r11,10
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFF;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// rlwimi r9,r8,20,11,9
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 20) & 0xFFFFFFFFFFDFFFFF) | (ctx.r9.u64 & 0x200000);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// rlwinm r11,r11,0,10,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFF03FFFFF;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// bl 0x82e76d00
	ctx.lr = 0x82E8620C;
	sub_82E76D00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E86210:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E86218"))) PPC_WEAK_FUNC(sub_82E86218);
PPC_FUNC_IMPL(__imp__sub_82E86218) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e85330
	sub_82E85330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E86234"))) PPC_WEAK_FUNC(sub_82E86234);
PPC_FUNC_IMPL(__imp__sub_82E86234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86238"))) PPC_WEAK_FUNC(sub_82E86238);
PPC_FUNC_IMPL(__imp__sub_82E86238) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82e85330
	sub_82E85330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E86250"))) PPC_WEAK_FUNC(sub_82E86250);
PPC_FUNC_IMPL(__imp__sub_82E86250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d0
	ctx.lr = 0x82E86258;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,52
	ctx.r3.s64 = 52;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x82E8628C;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e8629c
	if (!ctx.cr0.eq) goto loc_82E8629C;
loc_82E86294:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e86368
	goto loc_82E86368;
loc_82E8629C:
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e85470
	ctx.lr = 0x82E862E0;
	sub_82E85470(ctx, base);
	// not r11,r29
	ctx.r11.u64 = ~ctx.r29.u64;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// rlwinm r11,r11,28,0,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF0000000;
	// oris r30,r11,35968
	ctx.r30.u64 = ctx.r11.u64 | 2357198848;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x82E86300;
	sub_82299698(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82e86318
	if (!ctx.cr0.eq) goto loc_82E86318;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E86310:
	// bl 0x822996c0
	ctx.lr = 0x82E86314;
	sub_822996C0(ctx, base);
	// b 0x82e86294
	goto loc_82E86294;
loc_82E86318:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e8634c
	if (ctx.cr6.eq) goto loc_82E8634C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82299698
	ctx.lr = 0x82E8632C;
	sub_82299698(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne 0x82e8634c
	if (!ctx.cr0.eq) goto loc_82E8634C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82E86340;
	sub_822996C0(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x82e86310
	goto loc_82E86310;
loc_82E8634C:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwimi r11,r29,0,0,19
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 0) & 0xFFFFF000) | (ctx.r11.u64 & 0xFFFFFFFF00000FFF);
	// rlwimi r22,r10,0,20,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFFF000);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// stw r22,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r22.u32);
loc_82E86368:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82cb1120
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E86370"))) PPC_WEAK_FUNC(sub_82E86370);
PPC_FUNC_IMPL(__imp__sub_82E86370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E86378;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,48
	ctx.r3.s64 = 48;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82299698
	ctx.lr = 0x82E8639C;
	sub_82299698(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e863ac
	if (!ctx.cr0.eq) goto loc_82E863AC;
loc_82E863A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e864a0
	goto loc_82E864A0;
loc_82E863AC:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e85788
	ctx.lr = 0x82E863D0;
	sub_82E85788(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82e8649c
	if (!ctx.cr6.eq) goto loc_82E8649C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82e86400
	if (ctx.cr6.eq) goto loc_82E86400;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne cr6,0x82e86404
	if (!ctx.cr6.eq) goto loc_82E86404;
loc_82E86400:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82E86404:
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e92ca8
	ctx.lr = 0x82E86414;
	sub_82E92CA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8642c
	if (!ctx.cr0.eq) goto loc_82E8642C;
loc_82E8641C:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822996c0
	ctx.lr = 0x82E86428;
	sub_822996C0(ctx, base);
	// b 0x82e863a4
	goto loc_82E863A4;
loc_82E8642C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// ble cr6,0x82e86448
	if (!ctx.cr6.gt) goto loc_82E86448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e92c58
	ctx.lr = 0x82E86444;
	sub_82E92C58(ctx, base);
	// b 0x82e8641c
	goto loc_82E8641C;
loc_82E86448:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82e86490
	if (ctx.cr6.eq) goto loc_82E86490;
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// rlwimi r3,r10,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lwz r10,-4644(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4644);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e8649c
	if (!ctx.cr6.eq) goto loc_82E8649C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,-4644(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4644, ctx.r10.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// clrlwi r11,r11,15
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFF;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82e8649c
	goto loc_82E8649C;
loc_82E86490:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// rlwimi r3,r11,0,0,19
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r3.u64 & 0xFFFFFFFF00000FFF);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82E8649C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82E864A0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E864A8"))) PPC_WEAK_FUNC(sub_82E864A8);
PPC_FUNC_IMPL(__imp__sub_82E864A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e864e0
	if (ctx.cr0.eq) goto loc_82E864E0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x82e84b90
	ctx.lr = 0x82E864DC;
	sub_82E84B90(ctx, base);
	// b 0x82e86524
	goto loc_82E86524;
loc_82E864E0:
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,29,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82E86524:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86540"))) PPC_WEAK_FUNC(sub_82E86540);
PPC_FUNC_IMPL(__imp__sub_82E86540) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// rlwinm r6,r11,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r5,r11,10,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82e85330
	sub_82E85330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E86564"))) PPC_WEAK_FUNC(sub_82E86564);
PPC_FUNC_IMPL(__imp__sub_82E86564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86568"))) PPC_WEAK_FUNC(sub_82E86568);
PPC_FUNC_IMPL(__imp__sub_82E86568) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// rlwinm r6,r11,4,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// rlwinm r5,r11,10,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x3F;
	// b 0x82e85330
	sub_82E85330(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E86588"))) PPC_WEAK_FUNC(sub_82E86588);
PPC_FUNC_IMPL(__imp__sub_82E86588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// bl 0x82e84c90
	ctx.lr = 0x82E865B0;
	sub_82E84C90(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E865CC"))) PPC_WEAK_FUNC(sub_82E865CC);
PPC_FUNC_IMPL(__imp__sub_82E865CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E865D0"))) PPC_WEAK_FUNC(sub_82E865D0);
PPC_FUNC_IMPL(__imp__sub_82E865D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// rlwinm r4,r11,4,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// b 0x82e853c0
	sub_82E853C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E865EC"))) PPC_WEAK_FUNC(sub_82E865EC);
PPC_FUNC_IMPL(__imp__sub_82E865EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E865F0"))) PPC_WEAK_FUNC(sub_82E865F0);
PPC_FUNC_IMPL(__imp__sub_82E865F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10c8
	ctx.lr = 0x82E865F8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3136
	ctx.r11.s64 = ctx.r4.s64 + 3136;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwzx r28,r29,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// beq cr6,0x82e866f4
	if (ctx.cr6.eq) goto loc_82E866F4;
	// lwz r27,48(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// lwz r7,32(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// rlwinm r9,r27,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 12) & 0xFFF;
	// lwz r26,44(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// lwz r25,28(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lwz r24,36(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	// lwz r23,40(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// rlwinm r10,r7,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFF;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// clrlwi r30,r7,3
	ctx.r30.u64 = ctx.r7.u32 & 0x1FFFFFFF;
	// rlwinm r8,r9,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// rlwinm r3,r10,0,19,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lwz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r31,r4
	ctx.r9.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r27,0,3,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1FFFFE00;
	// lwz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r21,12(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r20,20(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// stw r24,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r24.u32);
	// rlwimi r10,r4,0,30,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFFFFFFFC03) | (ctx.r10.u64 & 0x3FC);
	// lbz r8,11950(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11950);
	// rlwimi r25,r22,0,10,21
	ctx.r25.u64 = (__builtin_rotateleft32(ctx.r22.u32, 0) & 0x3FFC00) | (ctx.r25.u64 & 0xFFFFFFFFFFC003FF);
	// rlwimi r3,r27,0,20,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r27.u32, 0) & 0x800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// rlwimi r23,r21,0,1,12
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r21.u32, 0) & 0x7FF80000) | (ctx.r23.u64 & 0xFFFFFFFF8007FFFF);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// rlwimi r7,r20,0,23,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r20.u32, 0) & 0x1FF) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFE00);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// rlwinm r4,r26,30,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 30) & 0xF;
	// stw r23,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82e866c0
	if (!ctx.cr6.gt) goto loc_82E866C0;
	// rotlwi r8,r26,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// rlwinm r8,r8,30,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0xF;
loc_82E866C0:
	// lwz r7,44(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// rlwimi r10,r8,2,26,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0x3C) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFC3);
	// lbz r9,11976(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 11976);
	// rlwinm r8,r7,26,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0xF;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e866e0
	if (!ctx.cr6.lt) goto loc_82E866E0;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
loc_82E866E0:
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwimi r10,r9,6,22,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 6) & 0x3C0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFC3F);
	// or r9,r8,r6
	ctx.r9.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
loc_82E866F4:
	// stwx r5,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r5.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82e86764
	if (ctx.cr6.eq) goto loc_82E86764;
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e86714
	if (ctx.cr6.eq) goto loc_82E86714;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// b 0x82e86764
	goto loc_82E86764;
loc_82E86714:
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e86764
	if (ctx.cr0.eq) goto loc_82E86764;
	// lwz r11,13528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// lwz r3,13524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8673c
	if (ctx.cr6.lt) goto loc_82E8673C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7dcc8
	ctx.lr = 0x82E8673C;
	sub_82E7DCC8(ctx, base);
loc_82E8673C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13524, ctx.r9.u32);
loc_82E86764:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82cb1118
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8676C"))) PPC_WEAK_FUNC(sub_82E8676C);
PPC_FUNC_IMPL(__imp__sub_82E8676C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86770"))) PPC_WEAK_FUNC(sub_82E86770);
PPC_FUNC_IMPL(__imp__sub_82E86770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3136
	ctx.r11.s64 = ctx.r4.s64 + 3136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e867a0
	if (ctx.cr6.eq) goto loc_82E867A0;
	// bl 0x82e76d00
	ctx.lr = 0x82E867A0;
	sub_82E76D00(ctx, base);
loc_82E867A0:
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E867BC"))) PPC_WEAK_FUNC(sub_82E867BC);
PPC_FUNC_IMPL(__imp__sub_82E867BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E867C0"))) PPC_WEAK_FUNC(sub_82E867C0);
PPC_FUNC_IMPL(__imp__sub_82E867C0) {
	PPC_FUNC_PROLOGUE();
	// add r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E867D4"))) PPC_WEAK_FUNC(sub_82E867D4);
PPC_FUNC_IMPL(__imp__sub_82E867D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E867D8"))) PPC_WEAK_FUNC(sub_82E867D8);
PPC_FUNC_IMPL(__imp__sub_82E867D8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E867F0"))) PPC_WEAK_FUNC(sub_82E867F0);
PPC_FUNC_IMPL(__imp__sub_82E867F0) {
	PPC_FUNC_PROLOGUE();
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E867F8"))) PPC_WEAK_FUNC(sub_82E867F8);
PPC_FUNC_IMPL(__imp__sub_82E867F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srad r10,r9,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r10.s64 = ctx.r9.s64 >> temp.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86820"))) PPC_WEAK_FUNC(sub_82E86820);
PPC_FUNC_IMPL(__imp__sub_82E86820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 8;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrldi r9,r3,56
	ctx.r9.u64 = ctx.r3.u64 & 0xFF;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srad r11,r10,r11
	temp.u64 = ctx.r11.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r10.s64 < 0) & (((ctx.r10.s64 >> temp.u64) << temp.u64) != ctx.r10.s64);
	ctx.r11.s64 = ctx.r10.s64 >> temp.u64;
	// srd r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 >> (ctx.r9.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86848"))) PPC_WEAK_FUNC(sub_82E86848);
PPC_FUNC_IMPL(__imp__sub_82E86848) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8685C"))) PPC_WEAK_FUNC(sub_82E8685C);
PPC_FUNC_IMPL(__imp__sub_82E8685C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86860"))) PPC_WEAK_FUNC(sub_82E86860);
PPC_FUNC_IMPL(__imp__sub_82E86860) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// andc r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86874"))) PPC_WEAK_FUNC(sub_82E86874);
PPC_FUNC_IMPL(__imp__sub_82E86874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86878"))) PPC_WEAK_FUNC(sub_82E86878);
PPC_FUNC_IMPL(__imp__sub_82E86878) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86898"))) PPC_WEAK_FUNC(sub_82E86898);
PPC_FUNC_IMPL(__imp__sub_82E86898) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8689C"))) PPC_WEAK_FUNC(sub_82E8689C);
PPC_FUNC_IMPL(__imp__sub_82E8689C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E868A0"))) PPC_WEAK_FUNC(sub_82E868A0);
PPC_FUNC_IMPL(__imp__sub_82E868A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E868A4"))) PPC_WEAK_FUNC(sub_82E868A4);
PPC_FUNC_IMPL(__imp__sub_82E868A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E868A8"))) PPC_WEAK_FUNC(sub_82E868A8);
PPC_FUNC_IMPL(__imp__sub_82E868A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vpkd3d128 v63,v1,3,1,3
	ctx.fpscr.enableFlushMode();
	__builtin_debugtrap();
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E868BC"))) PPC_WEAK_FUNC(sub_82E868BC);
PPC_FUNC_IMPL(__imp__sub_82E868BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E868C0"))) PPC_WEAK_FUNC(sub_82E868C0);
PPC_FUNC_IMPL(__imp__sub_82E868C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vpkd3d128 v63,v1,1,2,2
	ctx.fpscr.enableFlushMode();
	__builtin_debugtrap();
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E868E0"))) PPC_WEAK_FUNC(sub_82E868E0);
PPC_FUNC_IMPL(__imp__sub_82E868E0) {
	PPC_FUNC_PROLOGUE();
	// vspltw v1,v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E868E8"))) PPC_WEAK_FUNC(sub_82E868E8);
PPC_FUNC_IMPL(__imp__sub_82E868E8) {
	PPC_FUNC_PROLOGUE();
	// vspltw v1,v1,1
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xAA));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E868F0"))) PPC_WEAK_FUNC(sub_82E868F0);
PPC_FUNC_IMPL(__imp__sub_82E868F0) {
	PPC_FUNC_PROLOGUE();
	// vspltw v1,v1,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x55));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E868F8"))) PPC_WEAK_FUNC(sub_82E868F8);
PPC_FUNC_IMPL(__imp__sub_82E868F8) {
	PPC_FUNC_PROLOGUE();
	// vspltw v1,v1,3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x0));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86900"))) PPC_WEAK_FUNC(sub_82E86900);
PPC_FUNC_IMPL(__imp__sub_82E86900) {
	PPC_FUNC_PROLOGUE();
	// vrfin v1,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_round_ps(_mm_load_ps(ctx.v1.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86908"))) PPC_WEAK_FUNC(sub_82E86908);
PPC_FUNC_IMPL(__imp__sub_82E86908) {
	PPC_FUNC_PROLOGUE();
	// vrfiz v1,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_round_ps(_mm_load_ps(ctx.v1.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86910"))) PPC_WEAK_FUNC(sub_82E86910);
PPC_FUNC_IMPL(__imp__sub_82E86910) {
	PPC_FUNC_PROLOGUE();
	// vmaxfp128 v63,v2,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_max_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// vminfp128 v1,v3,v63
	_mm_store_ps(ctx.v1.f32, _mm_min_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v63.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8691C"))) PPC_WEAK_FUNC(sub_82E8691C);
PPC_FUNC_IMPL(__imp__sub_82E8691C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86920"))) PPC_WEAK_FUNC(sub_82E86920);
PPC_FUNC_IMPL(__imp__sub_82E86920) {
	PPC_FUNC_PROLOGUE();
	// vxor v1,v1,v2
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86928"))) PPC_WEAK_FUNC(sub_82E86928);
PPC_FUNC_IMPL(__imp__sub_82E86928) {
	PPC_FUNC_PROLOGUE();
	// vmaddfp v1,v1,v2,v3
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v3.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86930"))) PPC_WEAK_FUNC(sub_82E86930);
PPC_FUNC_IMPL(__imp__sub_82E86930) {
	PPC_FUNC_PROLOGUE();
	// vmulfp128 v1,v1,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86938"))) PPC_WEAK_FUNC(sub_82E86938);
PPC_FUNC_IMPL(__imp__sub_82E86938) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 30, ctx.xer);
	// beq cr6,0x82e8697c
	if (ctx.cr6.eq) goto loc_82E8697C;
	// cmplwi cr6,r3,31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 31, ctx.xer);
	// beq cr6,0x82e8697c
	if (ctx.cr6.eq) goto loc_82E8697C;
	// cmplwi cr6,r3,32
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 32, ctx.xer);
	// beq cr6,0x82e8697c
	if (ctx.cr6.eq) goto loc_82E8697C;
	// cmplwi cr6,r3,36
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 36, ctx.xer);
	// beq cr6,0x82e8697c
	if (ctx.cr6.eq) goto loc_82E8697C;
	// cmplwi cr6,r3,37
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 37, ctx.xer);
	// beq cr6,0x82e8697c
	if (ctx.cr6.eq) goto loc_82E8697C;
	// cmplwi cr6,r3,38
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 38, ctx.xer);
	// beq cr6,0x82e8697c
	if (ctx.cr6.eq) goto loc_82E8697C;
	// cmplwi cr6,r3,57
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 57, ctx.xer);
	// beq cr6,0x82e8697c
	if (ctx.cr6.eq) goto loc_82E8697C;
	// cmplwi cr6,r3,63
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 63, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E8697C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86984"))) PPC_WEAK_FUNC(sub_82E86984);
PPC_FUNC_IMPL(__imp__sub_82E86984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86988"))) PPC_WEAK_FUNC(sub_82E86988);
PPC_FUNC_IMPL(__imp__sub_82E86988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,25560
	ctx.r11.s64 = ctx.r11.s64 + 25560;
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r3,r11,19,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E869A0"))) PPC_WEAK_FUNC(sub_82E869A0);
PPC_FUNC_IMPL(__imp__sub_82E869A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r11,r11,27424
	ctx.r11.s64 = ctx.r11.s64 + 27424;
	// lbzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E869B0"))) PPC_WEAK_FUNC(sub_82E869B0);
PPC_FUNC_IMPL(__imp__sub_82E869B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// vor128 v60,v1,v1
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r11,27472
	ctx.r11.s64 = ctx.r11.s64 + 27472;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,27456
	ctx.r10.s64 = ctx.r10.s64 + 27456;
	// addi r9,r9,27440
	ctx.r9.s64 = ctx.r9.s64 + 27440;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v59,v63,2
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v58,v63,3
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x0));
	// lvx128 v62,r0,r10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v57,v63,1
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v61,r0,r9
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmulfp128 v59,v60,v59
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// vspltw128 v0,v62,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x0));
	// vmulfp128 v58,v60,v58
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v58.f32)));
	// vspltw128 v56,v62,2
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// vmulfp128 v57,v60,v57
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v57.f32)));
	// vspltw128 v13,v61,2
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x55));
	// vmulfp128 v63,v60,v63
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// vspltw128 v12,v61,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x0));
	// vspltw128 v55,v62,1
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// vcmpgtfp128 v11,v56,v60
	_mm_store_ps(ctx.v11.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v60.f32)));
	// vspltw128 v10,v61,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v62,v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vcmpgtfp128 v9,v55,v60
	_mm_store_ps(ctx.v9.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v60.f32)));
	// vcmpgtfp128 v8,v62,v60
	_mm_store_ps(ctx.v8.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	// vrfiz128 v7,v59
	_mm_store_ps(ctx.v7.f32, _mm_round_ps(_mm_load_ps(ctx.v59.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v6,v58
	_mm_store_ps(ctx.v6.f32, _mm_round_ps(_mm_load_ps(ctx.v58.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v5,v57
	_mm_store_ps(ctx.v5.f32, _mm_round_ps(_mm_load_ps(ctx.v57.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_round_ps(_mm_load_ps(ctx.v63.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vmaddfp v13,v7,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v6,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v5,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v63,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v12,v13,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v13,v13,v10,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vsel v1,v13,v0,v8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// vrlimi128 v1,v60,1,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 228), 1));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86A54"))) PPC_WEAK_FUNC(sub_82E86A54);
PPC_FUNC_IMPL(__imp__sub_82E86A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86A58"))) PPC_WEAK_FUNC(sub_82E86A58);
PPC_FUNC_IMPL(__imp__sub_82E86A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,20(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 20, temp.u32);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e86a70
	if (ctx.cr0.eq) goto loc_82E86A70;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e86ab4
	goto loc_82E86AB4;
loc_82E86A70:
	// rlwinm r11,r10,9,23,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0x1FF;
	// cmplwi cr6,r11,113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 113, ctx.xer);
	// blt cr6,0x82e86a90
	if (ctx.cr6.lt) goto loc_82E86A90;
	// rlwinm r11,r10,0,5,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7800000;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// b 0x82e86ab4
	goto loc_82E86AB4;
loc_82E86A90:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r9,r10,9
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFF;
	// subfic r11,r11,113
	ctx.xer.ca = ctx.r11.u32 <= 113;
	ctx.r11.s64 = 113 - ctx.r11.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// oris r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 8388608;
	// srw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r11.u8 & 0x3F));
loc_82E86AB4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwimi r3,r11,8,0,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFFFFFF00) | (ctx.r3.u64 & 0xFFFFFFFF000000FF);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86AC0"))) PPC_WEAK_FUNC(sub_82E86AC0);
PPC_FUNC_IMPL(__imp__sub_82E86AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r9,12716(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12716);
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwimi r10,r11,8,10,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x3FFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFC000FF);
	// or r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stwu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r8.u32 = ea;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86AEC"))) PPC_WEAK_FUNC(sub_82E86AEC);
PPC_FUNC_IMPL(__imp__sub_82E86AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E86AF0"))) PPC_WEAK_FUNC(sub_82E86AF0);
PPC_FUNC_IMPL(__imp__sub_82E86AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e86b58
	if (!ctx.cr6.eq) goto loc_82E86B58;
	// lhz r11,10376(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10376);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e86bb0
	if (!ctx.cr0.eq) goto loc_82E86BB0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,27492(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,27488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82e86ba8
	goto loc_82E86BA8;
loc_82E86B58:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r11,r11,1,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7E;
	// addi r10,r10,25560
	ctx.r10.s64 = ctx.r10.s64 + 25560;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,20,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e86bb0
	if (!ctx.cr0.eq) goto loc_82E86BB0;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,27488(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27488);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f0,27492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r11,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82E86BA8:
	// or r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 | ctx.r31.u64;
	// b 0x82e86bbc
	goto loc_82E86BBC;
loc_82E86BB0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82e86a58
	ctx.lr = 0x82E86BB8;
	sub_82E86A58(ctx, base);
	// rlwinm r11,r3,11,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0x7FF;
loc_82E86BBC:
	// lbz r10,10562(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 10562);
	// lwz r9,10560(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10560);
	// subf r10,r10,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r10.s64;
	// stw r3,10796(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10796, ctx.r3.u32);
	// not r9,r9
	ctx.r9.u64 = ~ctx.r9.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r9,r9,6,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x800;
	// rlwinm r10,r10,6,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x800;
	// xori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 ^ 2048;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,10792(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10792, ctx.r11.u32);
	// ld r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// std r11,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E86C10"))) PPC_WEAK_FUNC(sub_82E86C10);
PPC_FUNC_IMPL(__imp__sub_82E86C10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e4
	ctx.lr = 0x82E86C18;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,32
	ctx.r29.s64 = 32;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e86cd4
	if (ctx.cr6.eq) goto loc_82E86CD4;
	// rlwinm r11,r4,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x4;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r7,-64
	ctx.r7.s64 = -64;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// or r5,r11,r4
	ctx.r5.u64 = ctx.r11.u64 | ctx.r4.u64;
loc_82E86C6C:
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r7,9,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFF;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r9,253
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 253, ctx.xer);
	// bgt cr6,0x82e86cc0
	if (ctx.cr6.gt) goto loc_82E86CC0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x82e86c94
	if (ctx.cr6.gt) goto loc_82E86C94;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82E86C94:
	// cmpwi cr6,r9,254
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 254, ctx.xer);
	// bge cr6,0x82e86cac
	if (!ctx.cr6.lt) goto loc_82E86CAC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x82e86cb0
	if (ctx.cr6.gt) goto loc_82E86CB0;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x82e86cb0
	goto loc_82E86CB0;
loc_82E86CAC:
	// li r11,254
	ctx.r11.s64 = 254;
loc_82E86CB0:
	// rlwinm r9,r7,0,9,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF807FFFFF;
	// rlwinm r11,r11,23,0,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xFF800000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82E86CC0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82e86c6c
	if (!ctx.cr0.eq) goto loc_82E86C6C;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v1,r0,r11
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E86CD4:
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// bgt cr6,0x82e8701c
	if (ctx.cr6.gt) goto loc_82E8701C;
	// lis r12,-32255
	ctx.r12.s64 = -2113863680;
	// addi r12,r12,27408
	ctx.r12.s64 = ctx.r12.s64 + 27408;
	// lbzx r0,r12,r31
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r31.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32024
	ctx.r12.s64 = -2098724864;
	// addi r12,r12,27908
	ctx.r12.s64 = ctx.r12.s64 + 27908;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// nop 
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_82E86D08;
	case 1:
		goto loc_82E86D04;
	case 2:
		goto loc_82E86D08;
	case 3:
		goto loc_82E86EAC;
	case 4:
		goto loc_82E86DE0;
	case 5:
		goto loc_82E86DE0;
	case 6:
		goto loc_82E86F98;
	case 7:
		goto loc_82E86FBC;
	case 8:
		goto loc_82E8701C;
	case 9:
		goto loc_82E8701C;
	case 10:
		goto loc_82E86D08;
	case 11:
		goto loc_82E8701C;
	case 12:
		goto loc_82E86EAC;
	case 13:
		goto loc_82E8701C;
	case 14:
		goto loc_82E87000;
	case 15:
		goto loc_82E8700C;
	default:
		__builtin_unreachable();
	}
loc_82E86D04:
	// bl 0x82e869b0
	ctx.lr = 0x82E86D08;
	sub_82E869B0(ctx, base);
loc_82E86D08:
	// cmplwi cr6,r31,10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 10, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// beq cr6,0x82e86d18
	if (ctx.cr6.eq) goto loc_82E86D18;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82E86D18:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// addi r10,r10,27556
	ctx.r10.s64 = ctx.r10.s64 + 27556;
	// addi r9,r9,27552
	ctx.r9.s64 = ctx.r9.s64 + 27552;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// slw r9,r30,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// slw r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// lfs f0,6140(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mulli r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 * 3;
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f0,104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v63,r0,r7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v61,v1,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v63.f32)));
	// vmaxfp128 v62,v62,v61
	_mm_store_ps(ctx.v62.f32, _mm_max_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// vminfp128 v63,v63,v62
	_mm_store_ps(ctx.v63.f32, _mm_min_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// vrfin128 v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_round_ps(_mm_load_ps(ctx.v63.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vcfpsxws128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 | ctx.r6.u64;
loc_82E86DD8:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82e87020
	goto loc_82E87020;
loc_82E86DE0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32222
	ctx.r10.s64 = -2111700992;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r7,-32222
	ctx.r7.s64 = -2111700992;
	// lfs f0,6140(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6140);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f0,-18324(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -18324);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lvlx128 v62,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r6,r6,27536
	ctx.r6.s64 = ctx.r6.s64 + 27536;
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v63,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// lfs f0,-17352(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -17352);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v62,v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r10,r10,27520
	ctx.r10.s64 = ctx.r10.s64 + 27520;
	// lvx128 v0,r0,r6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// addi r9,r9,27504
	ctx.r9.s64 = ctx.r9.s64 + 27504;
	// lvx128 v13,r0,r10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v63,r0,r9
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v61,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vmulfp128 v61,v1,v61
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v61.f32)));
	// vmaxfp128 v61,v60,v61
	_mm_store_ps(ctx.v61.f32, _mm_max_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vminfp128 v12,v62,v61
	_mm_store_ps(ctx.v12.f32, _mm_min_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// vmaddfp v0,v12,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vrfin128 v62,v0
	_mm_store_ps(ctx.v62.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vcfpsxws128 v62,v62,0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_vctsxs(_mm_load_ps(ctx.v62.f32)));
	// vxor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// bne cr6,0x82e86ea0
	if (!ctx.cr6.eq) goto loc_82E86EA0;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r29,64
	ctx.r29.s64 = 64;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// b 0x82e87020
	goto loc_82E87020;
loc_82E86EA0:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82e86dd8
	goto loc_82E86DD8;
loc_82E86EAC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lfs f31,6048(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6048);
	ctx.f31.f64 = double(temp.f32);
loc_82E86EB8:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r4,-124
	ctx.r4.s64 = -124;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// lfsx f1,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82cb5328
	ctx.lr = 0x82E86ECC;
	sub_82CB5328(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, temp.u32);
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-32768
	ctx.r11.s64 = ctx.r11.s64 + -32768;
	// rlwinm. r10,r11,0,1,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7C000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// beq 0x82e86f04
	if (ctx.cr0.eq) goto loc_82E86F04;
	// lfsx f0,r31,r30
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1023
	ctx.r11.s64 = 1023;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82e86f08
	if (ctx.cr6.lt) goto loc_82E86F08;
	// li r11,511
	ctx.r11.s64 = 511;
	// b 0x82e86f08
	goto loc_82E86F08;
loc_82E86F04:
	// rlwinm r11,r11,16,22,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3FF;
loc_82E86F08:
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 12, ctx.xer);
	// blt cr6,0x82e86eb8
	if (ctx.cr6.lt) goto loc_82E86EB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,7980(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7980);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82e86f38
	if (!ctx.cr6.gt) goto loc_82E86F38;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// b 0x82e86f3c
	goto loc_82E86F3C;
loc_82E86F38:
	// fmr f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f31.f64;
loc_82E86F3C:
	// fcmpu cr6,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82e86f54
	if (!ctx.cr6.lt) goto loc_82E86F54;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82e86f58
	if (ctx.cr6.gt) goto loc_82E86F58;
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// b 0x82e86f58
	goto loc_82E86F58;
loc_82E86F54:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82E86F58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lfs f13,6380(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6380);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// rlwinm r11,r11,10,0,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// b 0x82e86dd8
	goto loc_82E86DD8;
loc_82E86F98:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vpkd3d128 v63,v1,3,1,3
	ctx.fpscr.enableFlushMode();
	__builtin_debugtrap();
	// vspltw128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// stvewx128 v63,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// rlwimi r10,r11,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82e86dd8
	goto loc_82E86DD8;
loc_82E86FBC:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r29,64
	ctx.r29.s64 = 64;
	// vpkd3d128 v63,v1,1,2,2
	ctx.fpscr.enableFlushMode();
	__builtin_debugtrap();
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vspltw128 v63,v63,1
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// stvewx128 v62,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lhz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lhz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lhz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r11,r8,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82e87020
	goto loc_82E87020;
loc_82E87000:
	// lwz r11,208(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// b 0x82e87020
	goto loc_82E87020;
loc_82E8700C:
	// lwz r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// li r29,64
	ctx.r29.s64 = 64;
	// lwz r11,212(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// b 0x82e87020
	goto loc_82E87020;
loc_82E8701C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82E87020:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82cb1134
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E87038"))) PPC_WEAK_FUNC(sub_82E87038);
PPC_FUNC_IMPL(__imp__sub_82E87038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E87040;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82e87058
	if (!ctx.cr6.eq) goto loc_82E87058;
	// addi r11,r30,10372
	ctx.r11.s64 = ctx.r30.s64 + 10372;
	// b 0x82e87064
	goto loc_82E87064;
loc_82E87058:
	// addi r11,r5,2594
	ctx.r11.s64 = ctx.r5.s64 + 2594;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82E87064:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r3,r11,16,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// bne cr6,0x82e87088
	if (!ctx.cr6.eq) goto loc_82E87088;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwinm r4,r11,12,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3F;
	// bl 0x82e86c10
	ctx.lr = 0x82E87084;
	sub_82E86C10(ctx, base);
	// b 0x82e870ec
	goto loc_82E870EC;
loc_82E87088:
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r8,r10,27424
	ctx.r8.s64 = ctx.r10.s64 + 27424;
	// addi r10,r11,25560
	ctx.r10.s64 = ctx.r11.s64 + 25560;
	// clrlwi r11,r9,26
	ctx.r11.u64 = ctx.r9.u32 & 0x3F;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,54
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 54, ctx.xer);
	// lbzx r8,r3,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r31,r8,r9
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// bne cr6,0x82e870bc
	if (!ctx.cr6.eq) goto loc_82E870BC;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82E870BC:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r3,r11,24,28,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82e86c10
	ctx.lr = 0x82E870DC;
	sub_82E86C10(ctx, base);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82e870ec
	if (!ctx.cr6.gt) goto loc_82E870EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82E870EC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,10800(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10800, ctx.r11.u32);
	// stw r10,10804(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10804, ctx.r10.u32);
	// ld r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 32);
	// ori r11,r11,192
	ctx.r11.u64 = ctx.r11.u64 | 192;
	// std r11,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r11.u64);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E87110"))) PPC_WEAK_FUNC(sub_82E87110);
PPC_FUNC_IMPL(__imp__sub_82E87110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10b0
	ctx.lr = 0x82E87118;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// clrlwi r14,r22,29
	ctx.r14.u64 = ctx.r22.u32 & 0x7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// stw r14,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r14.u32);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// rlwinm. r11,r22,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8719c
	if (!ctx.cr0.eq) goto loc_82E8719C;
	// cmplwi cr6,r14,4
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 4, ctx.xer);
	// bne cr6,0x82e87164
	if (!ctx.cr6.eq) goto loc_82E87164;
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// b 0x82e87170
	goto loc_82E87170;
loc_82E87164:
	// addi r11,r14,3110
	ctx.r11.s64 = ctx.r14.s64 + 3110;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
loc_82E87170:
	// lhz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 24);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e87188
	if (!ctx.cr6.eq) goto loc_82E87188;
	// ori r22,r22,16
	ctx.r22.u64 = ctx.r22.u64 | 16;
	// b 0x82e8719c
	goto loc_82E8719C;
loc_82E87188:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82e87198
	if (!ctx.cr6.eq) goto loc_82E87198;
	// ori r22,r22,80
	ctx.r22.u64 = ctx.r22.u64 | 80;
	// b 0x82e8719c
	goto loc_82E8719C;
loc_82E87198:
	// ori r22,r22,112
	ctx.r22.u64 = ctx.r22.u64 | 112;
loc_82E8719C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82e871bc
	if (!ctx.cr6.eq) goto loc_82E871BC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,27328
	ctx.r11.s64 = ctx.r11.s64 + 27328;
	// addi r19,r1,192
	ctx.r19.s64 = ctx.r1.s64 + 192;
	// lvx128 v63,r0,r11
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E871BC:
	// lwz r11,40(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// lwz r10,48(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	// rlwinm r11,r11,2,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x2;
	// lwz r9,36(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,1024
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1024, ctx.xer);
	// beq cr6,0x82e871ec
	if (ctx.cr6.eq) goto loc_82E871EC;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// li r15,1
	ctx.r15.s64 = 1;
	// rlwinm r9,r9,19,19,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 19) & 0x1FFF;
	// b 0x82e871f8
	goto loc_82E871F8;
loc_82E871EC:
	// clrlwi r10,r9,21
	ctx.r10.u64 = ctx.r9.u32 & 0x7FF;
	// li r15,8
	ctx.r15.s64 = 8;
	// rlwinm r9,r9,21,21,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 21) & 0x7FF;
loc_82E871F8:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r15,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r15.u32);
	// add r24,r9,r11
	ctx.r24.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r11,32(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// rlwinm r7,r11,1,25,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x7E;
	// lwz r9,28(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// addi r8,r10,25560
	ctx.r8.s64 = ctx.r10.s64 + 25560;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// rlwinm r10,r11,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// rlwinm r16,r9,15,18,26
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 15) & 0x3FE0;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// lhzx r11,r7,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r8.u32);
	// rlwinm r28,r11,29,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1F;
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// bne cr6,0x82e87248
	if (!ctx.cr6.eq) goto loc_82E87248;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82e87298
	if (ctx.cr6.eq) goto loc_82E87298;
loc_82E87248:
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r11,r15,-1
	ctx.r11.s64 = ctx.r15.s64 + -1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// andc r4,r21,r11
	ctx.r4.u64 = ctx.r21.u64 & ~ctx.r11.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82e84d90
	ctx.lr = 0x82E87284;
	sub_82E84D90(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// twllei r28,0
	// divwu r16,r11,r28
	ctx.r16.u32 = ctx.r11.u32 / ctx.r28.u32;
	// lwz r24,112(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82E87298:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82e872bc
	if (!ctx.cr6.eq) goto loc_82E872BC;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r23,r1,176
	ctx.r23.s64 = ctx.r1.s64 + 176;
	// stw r24,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r24.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
loc_82E872BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e872cc
	if (!ctx.cr6.eq) goto loc_82E872CC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r30,r11,27560
	ctx.r30.s64 = ctx.r11.s64 + 27560;
loc_82E872CC:
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r8,r10,3
	ctx.r8.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r5,r11,512
	ctx.r5.s64 = ctx.r11.s64 + 512;
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r27,r22,6,26,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 6) & 0x3F;
	// subf r10,r6,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r6.s64;
	// lwz r4,40(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r29,32(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 32);
	// mullw r10,r10,r16
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r16.s32);
	// lwz r3,28(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 28);
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r30,r4,0,28,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r5,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// cntlzw r5,r30
	ctx.r5.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// clrlwi r30,r29,26
	ctx.r30.u64 = ctx.r29.u32 & 0x3F;
	// rlwinm r9,r5,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x1;
	// add r20,r11,r8
	ctx.r20.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r26,r10,r24
	ctx.r26.u64 = ctx.r10.u64 + ctx.r24.u64;
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r17,r3,30,30,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 30) & 0x3;
	// xori r25,r9,1
	ctx.r25.u64 = ctx.r9.u64 ^ 1;
	// cmplwi cr6,r30,54
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 54, ctx.xer);
	// bne cr6,0x82e87350
	if (!ctx.cr6.eq) goto loc_82E87350;
	// li r30,7
	ctx.r30.s64 = 7;
	// b 0x82e873b4
	goto loc_82E873B4;
loc_82E87350:
	// cmplwi cr6,r30,55
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 55, ctx.xer);
	// bne cr6,0x82e87360
	if (!ctx.cr6.eq) goto loc_82E87360;
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x82e873b4
	goto loc_82E873B4;
loc_82E87360:
	// cmplwi cr6,r30,56
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 56, ctx.xer);
	// bne cr6,0x82e87370
	if (!ctx.cr6.eq) goto loc_82E87370;
	// li r30,17
	ctx.r30.s64 = 17;
	// b 0x82e873b4
	goto loc_82E873B4;
loc_82E87370:
	// cmplwi cr6,r30,27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 27, ctx.xer);
	// bne cr6,0x82e87380
	if (!ctx.cr6.eq) goto loc_82E87380;
	// li r30,30
	ctx.r30.s64 = 30;
	// b 0x82e873b4
	goto loc_82E873B4;
loc_82E87380:
	// cmplwi cr6,r30,28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 28, ctx.xer);
	// bne cr6,0x82e87390
	if (!ctx.cr6.eq) goto loc_82E87390;
	// li r30,31
	ctx.r30.s64 = 31;
	// b 0x82e873b4
	goto loc_82E873B4;
loc_82E87390:
	// cmplwi cr6,r30,29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 29, ctx.xer);
	// bne cr6,0x82e873a0
	if (!ctx.cr6.eq) goto loc_82E873A0;
	// li r30,32
	ctx.r30.s64 = 32;
	// b 0x82e873b4
	goto loc_82E873B4;
loc_82E873A0:
	// cmplwi cr6,r30,22
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 22, ctx.xer);
	// beq cr6,0x82e873b0
	if (ctx.cr6.eq) goto loc_82E873B0;
	// cmplwi cr6,r30,23
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 23, ctx.xer);
	// bne cr6,0x82e873b4
	if (!ctx.cr6.eq) goto loc_82E873B4;
loc_82E873B0:
	// li r30,6
	ctx.r30.s64 = 6;
loc_82E873B4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r11,r17,-1
	ctx.r11.s64 = ctx.r17.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// bne cr6,0x82e873d0
	if (!ctx.cr6.eq) goto loc_82E873D0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r28,r11,2
	ctx.r28.s64 = ctx.r11.s64 + 2;
	// b 0x82e873d4
	goto loc_82E873D4;
loc_82E873D0:
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82E873D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e86938
	ctx.lr = 0x82E873DC;
	sub_82E86938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e873e8
	if (ctx.cr0.eq) goto loc_82E873E8;
	// li r28,7
	ctx.r28.s64 = 7;
loc_82E873E8:
	// rlwimi r27,r25,8,23,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r25.u32, 8) & 0x100) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// lwz r11,48(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 48);
	// rlwinm r10,r26,16,2,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0x3FFF0000;
	// andi. r9,r27,319
	ctx.r9.u64 = ctx.r27.u64 & 319;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwimi r28,r9,3,0,28
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r9.u32, 3) & 0xFFFFFFF8) | (ctx.r28.u64 & 0xFFFFFFFF00000007);
	// rlwinm r7,r11,0,21,22
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x600;
	// rlwimi r30,r28,6,0,25
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r28.u32, 6) & 0xFFFFFFC0) | (ctx.r30.u64 & 0xFFFFFFFF0000003F);
	// clrlwi r8,r16,18
	ctx.r8.u64 = ctx.r16.u32 & 0x3FFF;
	// rlwinm r9,r29,26,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 26) & 0x3;
	// rlwinm r11,r30,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 7) & 0xFFFFFF80;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// cmplwi cr6,r7,1024
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1024, ctx.xer);
	// bne cr6,0x82e87448
	if (!ctx.cr6.eq) goto loc_82E87448;
	// addi r9,r15,-1
	ctx.r9.s64 = ctx.r15.s64 + -1;
	// mullw r8,r16,r24
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r24.s32);
	// stw r8,10820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10820, ctx.r8.u32);
	// ld r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// and r9,r9,r21
	ctx.r9.u64 = ctx.r9.u64 & ctx.r21.u64;
	// ori r8,r8,4
	ctx.r8.u64 = ctx.r8.u64 | 4;
	// rlwinm r9,r9,4,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x70;
	// std r8,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r8.u64);
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
loc_82E87448:
	// rlwinm. r8,r22,0,18,18
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// beq 0x82e8745c
	if (ctx.cr0.eq) goto loc_82E8745C;
	// li r9,3
	ctx.r9.s64 = 3;
	// b 0x82e87468
	goto loc_82E87468;
loc_82E8745C:
	// cmplwi cr6,r14,4
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 4, ctx.xer);
	// bne cr6,0x82e87468
	if (!ctx.cr6.eq) goto loc_82E87468;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82E87468:
	// stw r11,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r11.u32);
	// rlwinm r9,r9,20,10,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x300000;
	// stw r10,10784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10784, ctx.r10.u32);
	// andi. r10,r22,887
	ctx.r10.u64 = ctx.r22.u64 & 887;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r20,10780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10780, ctx.r20.u32);
	// addi r11,r10,-16
	ctx.r11.s64 = ctx.r10.s64 + -16;
	// lwz r29,468(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// rlwinm. r26,r22,0,22,22
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// or r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r30,10776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10776, ctx.r30.u32);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// beq 0x82e874b4
	if (ctx.cr0.eq) goto loc_82E874B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,460(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e86af0
	ctx.lr = 0x82E874B4;
	sub_82E86AF0(ctx, base);
loc_82E874B4:
	// rlwinm. r11,r22,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e874d0
	if (ctx.cr0.eq) goto loc_82E874D0;
	// clrlwi r5,r30,29
	ctx.r5.u64 = ctx.r30.u32 & 0x7;
	// lvx128 v1,r0,r19
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF))), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e87038
	ctx.lr = 0x82E874D0;
	sub_82E87038(ctx, base);
loc_82E874D0:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,12(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r9,r11,7
	ctx.r9.s64 = ctx.r11.s64 + 7;
	// lwz r11,10436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// lwz r25,0(r23)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r10,r10,7
	ctx.r10.s64 = ctx.r10.s64 + 7;
	// rlwinm r8,r11,17,0,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// lwz r24,4(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// rlwinm r23,r9,0,0,28
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF8;
	// srawi r9,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 17;
	// rlwinm r22,r10,0,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpw cr6,r25,r9
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e8753c
	if (ctx.cr6.lt) goto loc_82E8753C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82e8753c
	if (ctx.cr6.lt) goto loc_82E8753C;
	// lwz r11,10440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// rlwinm r10,r11,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r10,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 17;
	// cmpw cr6,r23,r10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82e8753c
	if (ctx.cr6.gt) goto loc_82E8753C;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r11,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 17;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82e87558
	if (!ctx.cr6.gt) goto loc_82E87558;
loc_82E8753C:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e781f8
	ctx.lr = 0x82E87554;
	sub_82E781F8(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
loc_82E87558:
	// ld r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r4,0
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, 0, ctx.xer);
	// beq cr6,0x82e87678
	if (ctx.cr6.eq) goto loc_82E87678;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// and r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82e87584
	if (ctx.cr6.eq) goto loc_82E87584;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// bl 0x82e743f8
	ctx.lr = 0x82E87580;
	sub_82E743F8(ctx, base);
	// std r3,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r3.u64);
loc_82E87584:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r11,52
	ctx.r10.u64 = ctx.r11.u64 & 0xFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82e875b4
	if (ctx.cr6.eq) goto loc_82E875B4;
	// addi r6,r31,10548
	ctx.r6.s64 = ctx.r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r11,52,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82E875A8;
	sub_82E74790(ctx, base);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rldicr r11,r11,0,51
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFFFFFFF000;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82E875B4:
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// rlwinm r10,r11,0,15,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82e875ec
	if (ctx.cr6.eq) goto loc_82E875EC;
	// addi r6,r31,10528
	ctx.r6.s64 = ctx.r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r11,47,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82E875D8;
	sub_82E74790(ctx, base);
	// lis r12,-2
	ctx.r12.s64 = -131072;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,4095
	ctx.r12.u64 = ctx.r12.u64 | 4095;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82E875EC:
	// lis r12,0
	ctx.r12.s64 = 0;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,42,21
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFC0000000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82e87634
	if (ctx.cr6.eq) goto loc_82E87634;
	// addi r6,r31,10368
	ctx.r6.s64 = ctx.r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r11,6,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82E8761C;
	sub_82E74790(ctx, base);
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,42,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 42) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82E87634:
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r12,r12,22
	ctx.r12.u64 = ctx.r12.u64 & 0x3FFFFFFFFFF;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82e87678
	if (ctx.cr6.eq) goto loc_82E87678;
	// addi r6,r31,10444
	ctx.r6.s64 = ctx.r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r11,22,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82E87660;
	sub_82E74790(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,21,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 21) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
loc_82E87678:
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82e876c8
	if (ctx.cr6.eq) goto loc_82E876C8;
	// lis r12,31
	ctx.r12.s64 = 2031616;
	// ori r12,r12,65535
	ctx.r12.u64 = ctx.r12.u64 | 65535;
	// rldicr r12,r12,34,29
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r10,r11,r12
	ctx.r10.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82e876c8
	if (ctx.cr6.eq) goto loc_82E876C8;
	// addi r6,r31,10596
	ctx.r6.s64 = ctx.r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r11,9,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82E876B0;
	sub_82E74790(ctx, base);
	// lis r12,-32
	ctx.r12.s64 = -2097152;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ori r12,r12,0
	ctx.r12.u64 = ctx.r12.u64 | 0;
	// rldicr r12,r12,34,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 & ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
loc_82E876C8:
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82e87700
	if (ctx.cr6.eq) goto loc_82E87700;
	// clrldi r10,r11,26
	ctx.r10.u64 = ctx.r11.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82e87700
	if (ctx.cr6.eq) goto loc_82E87700;
	// addi r6,r31,10680
	ctx.r6.s64 = ctx.r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r11,26,37
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e74790
	ctx.lr = 0x82E876F4;
	sub_82E74790(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// rldicr r11,r11,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFC000000000;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
loc_82E87700:
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e87714
	if (ctx.cr0.eq) goto loc_82E87714;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e877a4
	goto loc_82E877A4;
loc_82E87714:
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8779c
	if (ctx.cr0.eq) goto loc_82E8779C;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e87734
	if (ctx.cr6.eq) goto loc_82E87734;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8779c
	if (!ctx.cr6.eq) goto loc_82E8779C;
loc_82E87734:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8774c
	if (ctx.cr6.eq) goto loc_82E8774C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8779c
	if (!ctx.cr6.eq) goto loc_82E8779C;
loc_82E8774C:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e87764
	if (ctx.cr6.eq) goto loc_82E87764;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8779c
	if (!ctx.cr6.eq) goto loc_82E8779C;
loc_82E87764:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8777c
	if (ctx.cr6.eq) goto loc_82E8777C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8779c
	if (!ctx.cr6.eq) goto loc_82E8779C;
loc_82E8777C:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e87794
	if (ctx.cr6.eq) goto loc_82E87794;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8779c
	if (!ctx.cr6.eq) goto loc_82E8779C;
loc_82E87794:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e877a0
	goto loc_82E877A0;
loc_82E8779C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E877A0:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E877A4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e878b4
	if (ctx.cr0.eq) goto loc_82E878B4;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e877c4
	if (!ctx.cr6.gt) goto loc_82E877C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E877C4;
	sub_82E898A8(ctx, base);
loc_82E877C4:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,24832
	ctx.r11.u64 = ctx.r11.u64 | 24832;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r10,12748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12748);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82e87888
	if (!ctx.cr6.gt) goto loc_82E87888;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r31,12992
	ctx.r30.s64 = ctx.r31.s64 + 12992;
loc_82E877F4:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// slw r7,r7,r29
	ctx.r7.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r29.u8 & 0x3F));
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// lis r5,4
	ctx.r5.s64 = 262144;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// ori r3,r10,11521
	ctx.r3.u64 = ctx.r10.u64 | 11521;
	// rlwinm r11,r8,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// mullw r10,r9,r16
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r16.s32);
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// ori r8,r5,793
	ctx.r8.u64 = ctx.r5.u64 | 793;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r8,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r4.u32 = ea;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82e87870
	if (!ctx.cr6.gt) goto loc_82E87870;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E8786C;
	sub_82E898A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E87870:
	// lwz r10,12748(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12748);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e877f4
	if (ctx.cr6.lt) goto loc_82E877F4;
loc_82E87888:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r10,r10,24576
	ctx.r10.u64 = ctx.r10.u64 | 24576;
	// ori r9,r9,24832
	ctx.r9.u64 = ctx.r9.u64 | 24832;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12708(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12708);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r10,12712(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12712);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82E878B4:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e878d0
	if (!ctx.cr6.gt) goto loc_82E878D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E878CC;
	sub_82E898A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E878D0:
	// lbz r10,10942(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ori r27,r9,17920
	ctx.r27.u64 = ctx.r9.u64 | 17920;
	// beq 0x82e8791c
	if (ctx.cr0.eq) goto loc_82E8791C;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// li r9,6
	ctx.r9.s64 = 6;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r8,6
	ctx.r8.s64 = 6;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,6
	ctx.r6.s64 = 6;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// lbz r10,10942(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r10,10942(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10942, ctx.r10.u8);
loc_82E8791C:
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// li r9,256
	ctx.r9.s64 = 256;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// lis r8,-16368
	ctx.r8.s64 = -1072693248;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r7,15
	ctx.r7.s64 = 15;
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// li r5,60
	ctx.r5.s64 = 60;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r4,r6,27344
	ctx.r4.s64 = ctx.r6.s64 + 27344;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82cb1160
	ctx.lr = 0x82E87964;
	sub_82CB1160(ctx, base);
	// addi r11,r30,60
	ctx.r11.s64 = ctx.r30.s64 + 60;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 2;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,8712
	ctx.r8.s64 = 8712;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,8704
	ctx.r6.s64 = 8704;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// beq cr6,0x82e879ec
	if (ctx.cr6.eq) goto loc_82E879EC;
	// lbz r10,10942(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// lbz r9,10941(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// lwz r7,10560(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10560);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// rlwimi r8,r10,30,28,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x8) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF7);
	// stb r9,10941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10941, ctx.r9.u8);
	// rlwinm r10,r7,0,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r8,r8,29,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x7;
	// ld r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r9,r9,2
	ctx.r9.u64 = ctx.r9.u64 | 131072;
	// rlwinm r8,r8,0,31,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
loc_82E879EC:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e743f8
	ctx.lr = 0x82E87A0C;
	sub_82E743F8(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e87a24
	if (!ctx.cr6.gt) goto loc_82E87A24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E87A24;
	sub_82E898A8(ctx, base);
loc_82E87A24:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,8448
	ctx.r11.u64 = ctx.r11.u64 | 8448;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,8851
	ctx.r8.s64 = 8851;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r6,2
	ctx.r6.s64 = 131072;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// ori r10,r6,8708
	ctx.r10.u64 = ctx.r6.u64 | 8708;
	// lis r6,1
	ctx.r6.s64 = 65536;
	// li r4,768
	ctx.r4.s64 = 768;
	// li r30,8978
	ctx.r30.s64 = 8978;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r29,0
	ctx.r29.s64 = 0;
	// li r28,8205
	ctx.r28.s64 = 8205;
	// ori r11,r29,65535
	ctx.r11.u64 = ctx.r29.u64 | 65535;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r12,1
	ctx.r12.s64 = 1;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r17,3
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 3, ctx.xer);
	// rldicr r12,r12,41,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r28,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,40,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,39,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// li r12,1
	ctx.r12.s64 = 1;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// rldicr r12,r12,44,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// bne cr6,0x82e87bcc
	if (!ctx.cr6.eq) goto loc_82E87BCC;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82e87bcc
	if (ctx.cr6.eq) goto loc_82E87BCC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e87b50
	if (ctx.cr6.eq) goto loc_82E87B50;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82E87B50:
	// addi r11,r29,2593
	ctx.r11.s64 = ctx.r29.s64 + 2593;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r11,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r11,r28,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e87bcc
	if (!ctx.cr6.eq) goto loc_82E87BCC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e87b84
	if (!ctx.cr6.gt) goto loc_82E87B84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E87B84;
	sub_82E898A8(ctx, base);
loc_82E87B84:
	// addis r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 131072;
	// addi r11,r29,8193
	ctx.r11.s64 = ctx.r29.s64 + 8193;
	// addi r10,r10,263
	ctx.r10.s64 = ctx.r10.s64 + 263;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrlwi r8,r28,6
	ctx.r8.u64 = ctx.r28.u32 & 0x3FFFFFF;
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,0,20,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFF00FFF;
	// clrldi r10,r10,56
	ctx.r10.u64 = ctx.r10.u64 & 0xFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ldx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stdx r10,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u64);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
loc_82E87BCC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e87be4
	if (!ctx.cr6.gt) goto loc_82E87BE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E87BE0;
	sub_82E898A8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82E87BE4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88890
	ctx.lr = 0x82E87BF4;
	sub_82E88890(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e87c04
	if (!ctx.cr0.eq) goto loc_82E87C04;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// b 0x82e87f50
	goto loc_82E87F50;
loc_82E87C04:
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// lwz r9,10688(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10688);
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82e87c30
	if (!ctx.cr0.eq) goto loc_82E87C30;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6380(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6380);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82e87c38
	goto loc_82E87C38;
loc_82E87C30:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,6048(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 6048);
	ctx.f0.f64 = double(temp.f32);
loc_82E87C38:
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// extsw r9,r24
	ctx.r9.s64 = ctx.r24.s32;
	// std r10,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r10.u64);
	// subf r10,r25,r23
	ctx.r10.s64 = ctx.r23.s64 - ctx.r25.s64;
	// std r9,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r9.u64);
	// subf r9,r24,r22
	ctx.r9.s64 = ctx.r22.s64 - ctx.r24.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// extsw r10,r9
	ctx.r10.s64 = ctx.r9.s32;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lis r10,5
	ctx.r10.s64 = 327680;
	// ori r11,r11,3
	ctx.r11.u64 = ctx.r11.u64 | 3;
	// ori r10,r10,18432
	ctx.r10.u64 = ctx.r10.u64 | 18432;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// li r28,0
	ctx.r28.s64 = 0;
	// ori r9,r9,26
	ctx.r9.u64 = ctx.r9.u64 | 26;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lis r4,2
	ctx.r4.s64 = 131072;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// ori r4,r4,20480
	ctx.r4.u64 = ctx.r4.u64 | 20480;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// mr r25,r28
	ctx.r25.u64 = ctx.r28.u64;
	// lis r24,3
	ctx.r24.s64 = 196608;
	// lfd f13,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfd f12,160(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// ori r24,r24,136
	ctx.r24.u64 = ctx.r24.u64 | 136;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 + ctx.f13.f64));
	// stfs f13,8(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fadds f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stwu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r30.u32 = ea;
	// stwu r7,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// stwu r25,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r30.u32 = ea;
	// lwz r11,12716(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12716);
	// oris r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 3221225472;
	// ori r11,r11,13824
	ctx.r11.u64 = ctx.r11.u64 | 13824;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// ble cr6,0x82e87d5c
	if (!ctx.cr6.gt) goto loc_82E87D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E87D5C;
	sub_82E898A8(ctx, base);
loc_82E87D5C:
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// li r11,6
	ctx.r11.s64 = 6;
	// li r10,8199
	ctx.r10.s64 = 8199;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10396);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82e87db4
	if (ctx.cr6.eq) goto loc_82E87DB4;
	// lwz r11,10440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 17;
	// srawi r5,r8,17
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x82e781f8
	ctx.lr = 0x82E87DB4;
	sub_82E781F8(ctx, base);
loc_82E87DB4:
	// lwz r9,10908(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mullw r8,r16,r8
	ctx.r8.s64 = int64_t(ctx.r16.s32) * int64_t(ctx.r8.s32);
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r9.u32);
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// mullw r30,r9,r6
	ctx.r30.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// ld r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r8,r8,8
	ctx.r8.u64 = ctx.r8.u64 | 524288;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// std r8,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r8.u64);
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r9,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r9.u64);
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// oris r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 2147483648;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// ori r11,r11,256
	ctx.r11.u64 = ctx.r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e87e48
	if (!ctx.cr6.gt) goto loc_82E87E48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E87E48;
	sub_82E898A8(ctx, base);
loc_82E87E48:
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// addi r9,r30,8191
	ctx.r9.s64 = ctx.r30.s64 + 8191;
	// ori r11,r11,2607
	ctx.r11.u64 = ctx.r11.u64 | 2607;
	// rlwinm r9,r9,0,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r8,r29,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFF000;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// li r10,3
	ctx.r10.s64 = 3;
	// ori r7,r7,15360
	ctx.r7.u64 = ctx.r7.u64 | 15360;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r30,8
	ctx.r30.s64 = 8;
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r29,2
	ctx.r29.s64 = 131072;
	// li r27,8984
	ctx.r27.s64 = 8984;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// li r25,8987
	ctx.r25.s64 = 8987;
	// mr r24,r28
	ctx.r24.u64 = ctx.r28.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stw r28,10776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10776, ctx.r28.u32);
	// stw r28,10788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10788, ctx.r28.u32);
	// stwu r27,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r3.u32 = ea;
	// stwu r26,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r3.u32 = ea;
	// stwu r25,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r3.u32 = ea;
	// stwu r24,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r3.u32 = ea;
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// beq cr6,0x82e87f00
	if (ctx.cr6.eq) goto loc_82E87F00;
	// stw r11,8(r18)
	PPC_STORE_U32(ctx.r18.u32 + 8, ctx.r11.u32);
	// stw r11,12(r18)
	PPC_STORE_U32(ctx.r18.u32 + 12, ctx.r11.u32);
	// b 0x82e87f50
	goto loc_82E87F50;
loc_82E87F00:
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e87f50
	if (ctx.cr0.eq) goto loc_82E87F50;
	// lwz r11,13528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13528);
	// lwz r3,13524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13524);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e87f28
	if (ctx.cr6.lt) goto loc_82E87F28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7dcc8
	ctx.lr = 0x82E87F28;
	sub_82E7DCC8(ctx, base);
loc_82E87F28:
	// lwz r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r18,30,2,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r18.u32, 30) & 0x3FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// ld r11,176(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// stw r9,13524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13524, ctx.r9.u32);
loc_82E87F50:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82cb1100
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E87F5C"))) PPC_WEAK_FUNC(sub_82E87F5C);
PPC_FUNC_IMPL(__imp__sub_82E87F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E87F60"))) PPC_WEAK_FUNC(sub_82E87F60);
PPC_FUNC_IMPL(__imp__sub_82E87F60) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// oris r10,r4,33024
	ctx.r10.u64 = ctx.r4.u64 | 2164260864;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E87F80"))) PPC_WEAK_FUNC(sub_82E87F80);
PPC_FUNC_IMPL(__imp__sub_82E87F80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r9,14928(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14928);
	// lwz r8,14924(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14924);
	// lwz r7,14916(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14916);
	// lwz r6,14920(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14920);
	// stw r11,13408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13408, ctx.r11.u32);
	// stw r10,13412(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13412, ctx.r10.u32);
	// stw r9,13416(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13416, ctx.r9.u32);
	// stw r8,13420(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13420, ctx.r8.u32);
	// stw r7,13424(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13424, ctx.r7.u32);
	// stw r6,13428(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13428, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E87FB4"))) PPC_WEAK_FUNC(sub_82E87FB4);
PPC_FUNC_IMPL(__imp__sub_82E87FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E87FB8"))) PPC_WEAK_FUNC(sub_82E87FB8);
PPC_FUNC_IMPL(__imp__sub_82E87FB8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,13412(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13412);
	// lwz r10,13408(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13408);
	// lwz r9,13416(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13416);
	// addi r8,r11,-160
	ctx.r8.s64 = ctx.r11.s64 + -160;
	// lwz r7,13420(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13420);
	// lwz r6,13424(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13424);
	// lwz r5,13428(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13428);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r9,14928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14928, ctx.r9.u32);
	// stw r7,14924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14924, ctx.r7.u32);
	// stw r6,14916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14916, ctx.r6.u32);
	// stw r5,14920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14920, ctx.r5.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E87FF4"))) PPC_WEAK_FUNC(sub_82E87FF4);
PPC_FUNC_IMPL(__imp__sub_82E87FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E87FF8"))) PPC_WEAK_FUNC(sub_82E87FF8);
PPC_FUNC_IMPL(__imp__sub_82E87FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,13232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e88030
	if (ctx.cr6.eq) goto loc_82E88030;
	// lwz r11,13236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13236);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e8801c
	if (!ctx.cr6.eq) goto loc_82E8801C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E8801C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e88030
	if (!ctx.cr6.eq) goto loc_82E88030;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82E88030:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88038"))) PPC_WEAK_FUNC(sub_82E88038);
PPC_FUNC_IMPL(__imp__sub_82E88038) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10896);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82e88054
	if (!ctx.cr0.eq) goto loc_82E88054;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E88054:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82e8806c
	if (!ctx.cr6.eq) goto loc_82E8806C;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82E8806C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88074"))) PPC_WEAK_FUNC(sub_82E88074);
PPC_FUNC_IMPL(__imp__sub_82E88074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88078"))) PPC_WEAK_FUNC(sub_82E88078);
PPC_FUNC_IMPL(__imp__sub_82E88078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E88080;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e88108
	if (ctx.cr0.eq) goto loc_82E88108;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82e880b8
	if (!ctx.cr6.eq) goto loc_82E880B8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e88108
	if (!ctx.cr6.gt) goto loc_82E88108;
loc_82E880B8:
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68620
	ctx.lr = 0x82E880C8;
	sub_82E68620(ctx, base);
loc_82E880C8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68ae8
	ctx.lr = 0x82E880D0;
	sub_82E68AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e88100
	if (ctx.cr0.eq) goto loc_82E88100;
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e88100
	if (ctx.cr0.eq) goto loc_82E88100;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82e880c8
	if (!ctx.cr6.eq) goto loc_82E880C8;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82e880c8
	if (ctx.cr6.gt) goto loc_82E880C8;
loc_82E88100:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68650
	ctx.lr = 0x82E88108;
	sub_82E68650(ctx, base);
loc_82E88108:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E88110"))) PPC_WEAK_FUNC(sub_82E88110);
PPC_FUNC_IMPL(__imp__sub_82E88110) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10896);
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bge cr6,0x82e88138
	if (!ctx.cr6.lt) goto loc_82E88138;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e88144
	if (!ctx.cr6.lt) goto loc_82E88144;
loc_82E88128:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82e88144
	if (ctx.cr6.gt) goto loc_82E88144;
loc_82E88130:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E88138:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e88130
	if (ctx.cr6.lt) goto loc_82E88130;
	// b 0x82e88128
	goto loc_82E88128;
loc_82E88144:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8814C"))) PPC_WEAK_FUNC(sub_82E8814C);
PPC_FUNC_IMPL(__imp__sub_82E8814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88150"))) PPC_WEAK_FUNC(sub_82E88150);
PPC_FUNC_IMPL(__imp__sub_82E88150) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E88158;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// lwz r11,14900(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 14900);
	// lwz r9,10896(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10896);
	// and r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,60(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// bge cr6,0x82e88194
	if (!ctx.cr6.lt) goto loc_82E88194;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e881f0
	if (!ctx.cr6.lt) goto loc_82E881F0;
loc_82E88188:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82e8819c
	if (!ctx.cr6.gt) goto loc_82E8819C;
	// b 0x82e881f0
	goto loc_82E881F0;
loc_82E88194:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e88188
	if (!ctx.cr6.lt) goto loc_82E88188;
loc_82E8819C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68620
	ctx.lr = 0x82E881AC;
	sub_82E68620(ctx, base);
loc_82E881AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68ae8
	ctx.lr = 0x82E881B4;
	sub_82E68AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e881e8
	if (ctx.cr0.eq) goto loc_82E881E8;
	// lwz r11,10896(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10896);
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bge cr6,0x82e881d8
	if (!ctx.cr6.lt) goto loc_82E881D8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e881e8
	if (!ctx.cr6.lt) goto loc_82E881E8;
	// b 0x82e881e0
	goto loc_82E881E0;
loc_82E881D8:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e881ac
	if (ctx.cr6.lt) goto loc_82E881AC;
loc_82E881E0:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82e881ac
	if (!ctx.cr6.gt) goto loc_82E881AC;
loc_82E881E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68650
	ctx.lr = 0x82E881F0;
	sub_82E68650(ctx, base);
loc_82E881F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E881FC"))) PPC_WEAK_FUNC(sub_82E881FC);
PPC_FUNC_IMPL(__imp__sub_82E881FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88200"))) PPC_WEAK_FUNC(sub_82E88200);
PPC_FUNC_IMPL(__imp__sub_82E88200) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E88208;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,21532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e88238
	if (ctx.cr6.eq) goto loc_82E88238;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E88238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E88238:
	// lwz r11,23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8825c
	if (ctx.cr6.eq) goto loc_82E8825C;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E8825C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E8825C:
	// lwz r31,10952(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10952);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r27,14900(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14900);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r26,14896(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14896);
	// bl 0x82e88150
	ctx.lr = 0x82E88278;
	sub_82E88150(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82e882a4
	if (ctx.cr6.eq) goto loc_82E882A4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82E88284:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// and r31,r8,r27
	ctx.r31.u64 = ctx.r8.u64 & ctx.r27.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwx r10,r9,r26
	PPC_STORE_U32(ctx.r9.u32 + ctx.r26.u32, ctx.r10.u32);
	// bne 0x82e88284
	if (!ctx.cr0.eq) goto loc_82E88284;
loc_82E882A4:
	// lwz r3,21532(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21532);
	// stw r31,10952(r30)
	PPC_STORE_U32(ctx.r30.u32 + 10952, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e882c4
	if (ctx.cr6.eq) goto loc_82E882C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E882C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E882C4:
	// lwz r11,23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e882e8
	if (ctx.cr6.eq) goto loc_82E882E8;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E882E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E882E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E882F0"))) PPC_WEAK_FUNC(sub_82E882F0);
PPC_FUNC_IMPL(__imp__sub_82E882F0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,10952(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10952, ctx.r4.u32);
	// sync 
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r4,1812(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 1812, ctx.r4.u32);
	// eieio 
	// sync 
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8830C"))) PPC_WEAK_FUNC(sub_82E8830C);
PPC_FUNC_IMPL(__imp__sub_82E8830C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88310"))) PPC_WEAK_FUNC(sub_82E88310);
PPC_FUNC_IMPL(__imp__sub_82E88310) {
	PPC_FUNC_PROLOGUE();
loc_82E88310:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e88324
	if (!ctx.cr6.lt) goto loc_82E88324;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
loc_82E88324:
	// rldicl r9,r11,32,32
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82e88334
	if (!ctx.cr6.gt) goto loc_82E88334;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
loc_82E88334:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldimi r10,r9,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
loc_82E8833C:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r3
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82e88360
	if (!ctx.cr6.eq) goto loc_82E88360;
	// stdcx. r10,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82e8833c
	if (!ctx.cr0.eq) goto loc_82E8833C;
	// b 0x82e88368
	goto loc_82E88368;
loc_82E88360:
	// stdcx. r8,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82E88368:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82e88310
	if (!ctx.cr6.eq) goto loc_82E88310;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88378"))) PPC_WEAK_FUNC(sub_82E88378);
PPC_FUNC_IMPL(__imp__sub_82E88378) {
	PPC_FUNC_PROLOGUE();
loc_82E88378:
	// li r10,-1
	ctx.r10.s64 = -1;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_82E88384:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r9,0,r3
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r9.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r9,r11
	ctx.cr6.compare<int64_t>(ctx.r9.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82e883a8
	if (!ctx.cr6.eq) goto loc_82E883A8;
	// stdcx. r10,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82e88384
	if (!ctx.cr0.eq) goto loc_82E88384;
	// b 0x82e883b0
	goto loc_82E883B0;
loc_82E883A8:
	// stdcx. r9,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r9.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82E883B0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// bne cr6,0x82e88378
	if (!ctx.cr6.eq) goto loc_82E88378;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rldicl r11,r11,32,32
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E883D0"))) PPC_WEAK_FUNC(sub_82E883D0);
PPC_FUNC_IMPL(__imp__sub_82E883D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E883D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82e88460
	if (!ctx.cr6.eq) goto loc_82E88460;
	// lwz r11,10900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// lis r10,2989
	ctx.r10.s64 = 195887104;
	// ori r10,r10,61453
	ctx.r10.u64 = ctx.r10.u64 | 61453;
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82e88410
	if (!ctx.cr6.eq) goto loc_82E88410;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r3,r11,27568
	ctx.r3.s64 = ctx.r11.s64 + 27568;
	// bl 0x82e90f20
	ctx.lr = 0x82E8840C;
	sub_82E90F20(ctx, base);
	// twi 31,r0,22
loc_82E88410:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e88428
	if (ctx.cr6.eq) goto loc_82E88428;
	// lwz r11,10900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82E88428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E88428:
	// addi r30,r31,10904
	ctx.r30.s64 = ctx.r31.s64 + 10904;
	// lbz r11,268(r13)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r13.u32 + 268);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r31,10900(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// slw r29,r10,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// bl 0x833b8394
	ctx.lr = 0x82E88444;
	__imp__KeAcquireSpinLockAtRaisedIrql(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// andc r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r29.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x833b8384
	ctx.lr = 0x82E8845C;
	__imp__KeReleaseSpinLockFromRaisedIrql(ctx, base);
	// b 0x82e88480
	goto loc_82E88480;
loc_82E88460:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e88480
	if (!ctx.cr6.eq) goto loc_82E88480;
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// lwz r11,25924(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25924);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e88480
	if (ctx.cr0.eq) goto loc_82E88480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e82e08
	ctx.lr = 0x82E88480;
	sub_82E82E08(ctx, base);
loc_82E88480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E88488"))) PPC_WEAK_FUNC(sub_82E88488);
PPC_FUNC_IMPL(__imp__sub_82E88488) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E884A0"))) PPC_WEAK_FUNC(sub_82E884A0);
PPC_FUNC_IMPL(__imp__sub_82E884A0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,-16384
	ctx.r3.s64 = ctx.r3.s64 + -1073741824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E884A8"))) PPC_WEAK_FUNC(sub_82E884A8);
PPC_FUNC_IMPL(__imp__sub_82E884A8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E884C4"))) PPC_WEAK_FUNC(sub_82E884C4);
PPC_FUNC_IMPL(__imp__sub_82E884C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E884C8"))) PPC_WEAK_FUNC(sub_82E884C8);
PPC_FUNC_IMPL(__imp__sub_82E884C8) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,-16640
	ctx.r3.s64 = ctx.r3.s64 + -1090519040;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E884D0"))) PPC_WEAK_FUNC(sub_82E884D0);
PPC_FUNC_IMPL(__imp__sub_82E884D0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// andc r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 & ~ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E884DC"))) PPC_WEAK_FUNC(sub_82E884DC);
PPC_FUNC_IMPL(__imp__sub_82E884DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E884E0"))) PPC_WEAK_FUNC(sub_82E884E0);
PPC_FUNC_IMPL(__imp__sub_82E884E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E884F4"))) PPC_WEAK_FUNC(sub_82E884F4);
PPC_FUNC_IMPL(__imp__sub_82E884F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E884F8"))) PPC_WEAK_FUNC(sub_82E884F8);
PPC_FUNC_IMPL(__imp__sub_82E884F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E884FC"))) PPC_WEAK_FUNC(sub_82E884FC);
PPC_FUNC_IMPL(__imp__sub_82E884FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88500"))) PPC_WEAK_FUNC(sub_82E88500);
PPC_FUNC_IMPL(__imp__sub_82E88500) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// addis r10,r3,16384
	ctx.r10.s64 = ctx.r3.s64 + 1073741824;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8851C"))) PPC_WEAK_FUNC(sub_82E8851C);
PPC_FUNC_IMPL(__imp__sub_82E8851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88520"))) PPC_WEAK_FUNC(sub_82E88520);
PPC_FUNC_IMPL(__imp__sub_82E88520) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8852C"))) PPC_WEAK_FUNC(sub_82E8852C);
PPC_FUNC_IMPL(__imp__sub_82E8852C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88530"))) PPC_WEAK_FUNC(sub_82E88530);
PPC_FUNC_IMPL(__imp__sub_82E88530) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,10908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10908);
	// addi r3,r11,-2
	ctx.r3.s64 = ctx.r11.s64 + -2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8853C"))) PPC_WEAK_FUNC(sub_82E8853C);
PPC_FUNC_IMPL(__imp__sub_82E8853C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88540"))) PPC_WEAK_FUNC(sub_82E88540);
PPC_FUNC_IMPL(__imp__sub_82E88540) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88544"))) PPC_WEAK_FUNC(sub_82E88544);
PPC_FUNC_IMPL(__imp__sub_82E88544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88548"))) PPC_WEAK_FUNC(sub_82E88548);
PPC_FUNC_IMPL(__imp__sub_82E88548) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,21532(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8855c
	if (ctx.cr6.eq) goto loc_82E8855C;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E8855C:
	// lbz r11,10941(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10941);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8856C"))) PPC_WEAK_FUNC(sub_82E8856C);
PPC_FUNC_IMPL(__imp__sub_82E8856C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88570"))) PPC_WEAK_FUNC(sub_82E88570);
PPC_FUNC_IMPL(__imp__sub_82E88570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88580"))) PPC_WEAK_FUNC(sub_82E88580);
PPC_FUNC_IMPL(__imp__sub_82E88580) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e885b8
	if (ctx.cr6.eq) goto loc_82E885B8;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r11,r11,-16384
	ctx.r11.s64 = ctx.r11.s64 + -1073741824;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
loc_82E885B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E885C4"))) PPC_WEAK_FUNC(sub_82E885C4);
PPC_FUNC_IMPL(__imp__sub_82E885C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E885C8"))) PPC_WEAK_FUNC(sub_82E885C8);
PPC_FUNC_IMPL(__imp__sub_82E885C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E885D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r30,8(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r9,r4,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// addi r11,r10,512
	ctx.r11.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r30,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// rlwinm r7,r11,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r8,r5,3
	ctx.r8.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r7,r9,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// clrlwi r9,r30,3
	ctx.r9.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r8,r4,3
	ctx.r8.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r9,r5,-4
	ctx.r9.s64 = ctx.r5.s64 + -4;
	// stw r6,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r6.u32);
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// subf r29,r11,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// subf r31,r11,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r11.s64;
	// eieio 
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e928e8
	ctx.lr = 0x82E88648;
	sub_82E928E8(ctx, base);
	// stw r29,0(r30)
	PPC_MM_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// eieio 
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e928e8
	ctx.lr = 0x82E88660;
	sub_82E928E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E88668"))) PPC_WEAK_FUNC(sub_82E88668);
PPC_FUNC_IMPL(__imp__sub_82E88668) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,16728(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16728);
	// lbz r9,10941(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10941);
	// addi r11,r10,4800
	ctx.r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = ctx.r11.s64 + -160;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r8,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r8.u32);
	// stb r9,10941(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10941, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88690"))) PPC_WEAK_FUNC(sub_82E88690);
PPC_FUNC_IMPL(__imp__sub_82E88690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E88698;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r7,r11,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,14916(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14916);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e88790
	if (ctx.cr0.eq) goto loc_82E88790;
	// bne cr6,0x82e886c4
	if (!ctx.cr6.eq) goto loc_82E886C4;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
loc_82E886C4:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r9,14908(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14908);
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// lwz r5,14920(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14920);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// and r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82e8872c
	if (ctx.cr6.gt) goto loc_82E8872C;
	// lwz r10,13232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13232);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e88724
	if (ctx.cr6.eq) goto loc_82E88724;
	// lwz r11,13236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13236);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8871c
	if (ctx.cr6.eq) goto loc_82E8871C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e88724
	if (!ctx.cr6.eq) goto loc_82E88724;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82e88724
	if (!ctx.cr6.lt) goto loc_82E88724;
loc_82E8871C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e88888
	goto loc_82E88888;
loc_82E88724:
	// stw r4,14916(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14916, ctx.r4.u32);
	// b 0x82e88784
	goto loc_82E88784;
loc_82E8872C:
	// lwz r9,14924(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14924);
	// lwz r8,13232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13232);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// and r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 & ctx.r11.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq cr6,0x82e88770
	if (ctx.cr6.eq) goto loc_82E88770;
	// lwz r11,13236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13236);
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82e8871c
	if (ctx.cr6.eq) goto loc_82E8871C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e88770
	if (!ctx.cr6.eq) goto loc_82E88770;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82e8871c
	if (ctx.cr6.lt) goto loc_82E8871C;
loc_82E88770:
	// lwz r11,14928(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14928);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82e8871c
	if (ctx.cr6.gt) goto loc_82E8871C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r4,14924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14924, ctx.r4.u32);
loc_82E88784:
	// bl 0x82e88078
	ctx.lr = 0x82E88788;
	sub_82E88078(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82e88888
	goto loc_82E88888;
loc_82E88790:
	// bne cr6,0x82e8879c
	if (!ctx.cr6.eq) goto loc_82E8879C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82E8879C:
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// bne cr6,0x82e887b0
	if (!ctx.cr6.eq) goto loc_82E887B0;
	// li r7,54
	ctx.r7.s64 = 54;
loc_82E887B0:
	// lwz r11,14912(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14912);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e887c4
	if (!ctx.cr6.gt) goto loc_82E887C4;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82E887C4:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,14908(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14908);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e887dc
	if (!ctx.cr6.gt) goto loc_82E887DC;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82E887DC:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bge cr6,0x82e8881c
	if (!ctx.cr6.lt) goto loc_82E8881C;
	// lwz r11,14920(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14920);
	// lbz r9,10942(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10942);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwz r11,14924(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14924);
	// lwz r6,14904(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14904);
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// stw r8,14920(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14920, ctx.r8.u32);
	// stb r9,10942(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10942, ctx.r9.u8);
	// rlwinm r30,r11,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r6,14924(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14924, ctx.r6.u32);
	// add r31,r10,r30
	ctx.r31.u64 = ctx.r10.u64 + ctx.r30.u64;
loc_82E8881C:
	// lwz r8,13232(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13232);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e88868
	if (ctx.cr6.eq) goto loc_82E88868;
	// lwz r11,13236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13236);
	// lwz r10,14920(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14920);
	// subf r9,r10,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82e8884c
	if (ctx.cr6.eq) goto loc_82E8884C;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82e88868
	if (!ctx.cr6.eq) goto loc_82E88868;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82e88868
	if (!ctx.cr6.lt) goto loc_82E88868;
loc_82E8884C:
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e8871c
	if (!ctx.cr6.eq) goto loc_82E8871C;
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82e8871c
	if (ctx.cr6.lt) goto loc_82E8871C;
loc_82E88868:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,14920(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14920);
	// bl 0x82e88078
	ctx.lr = 0x82E88874;
	sub_82E88078(ctx, base);
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E88888:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E88890"))) PPC_WEAK_FUNC(sub_82E88890);
PPC_FUNC_IMPL(__imp__sub_82E88890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e888bc
	if (ctx.cr0.eq) goto loc_82E888BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e88964
	goto loc_82E88964;
loc_82E888BC:
	// lwz r3,13516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13516);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// bne cr6,0x82e888e4
	if (!ctx.cr6.eq) goto loc_82E888E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88690
	ctx.lr = 0x82E888E0;
	sub_82E88690(ctx, base);
	// b 0x82e88900
	goto loc_82E88900;
loc_82E888E4:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e888fc
	if (ctx.cr6.eq) goto loc_82E888FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d2f0
	ctx.lr = 0x82E888F8;
	sub_82E7D2F0(ctx, base);
	// b 0x82e88900
	goto loc_82E88900;
loc_82E888FC:
	// bl 0x82e7e2e8
	ctx.lr = 0x82E88900;
	sub_82E7E2E8(ctx, base);
loc_82E88900:
	// lwz r11,14932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14932);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,14936(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14936);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,14932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14932, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82e88950
	if (!ctx.cr6.gt) goto loc_82E88950;
	// lwz r11,13232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e88950
	if (!ctx.cr6.eq) goto loc_82E88950;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,14924(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14924);
	// lwz r9,14904(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14904);
	// addi r8,r11,160
	ctx.r8.s64 = ctx.r11.s64 + 160;
	// stw r8,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r8.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq cr6,0x82e88950
	if (ctx.cr6.eq) goto loc_82E88950;
	// lwz r11,14908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14908);
	// stw r11,14916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14916, ctx.r11.u32);
loc_82E88950:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82e88964
	if (!ctx.cr6.eq) goto loc_82E88964;
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stb r11,10941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10941, ctx.r11.u8);
loc_82E88964:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88978"))) PPC_WEAK_FUNC(sub_82E88978);
PPC_FUNC_IMPL(__imp__sub_82E88978) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,14896(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14896);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,10952(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10952);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,14900(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14900);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88994"))) PPC_WEAK_FUNC(sub_82E88994);
PPC_FUNC_IMPL(__imp__sub_82E88994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88998"))) PPC_WEAK_FUNC(sub_82E88998);
PPC_FUNC_IMPL(__imp__sub_82E88998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E889A0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbz r11,10941(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 10941);
	// lwz r25,14900(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14900);
	// lwz r24,14896(r26)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r26.u32 + 14896);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e88a3c
	if (ctx.cr0.eq) goto loc_82E88A3C;
	// lwz r11,21532(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21532);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e88b74
	if (ctx.cr6.eq) goto loc_82E88B74;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e88b74
	if (ctx.cr6.eq) goto loc_82E88B74;
	// lis r21,8192
	ctx.r21.s64 = 536870912;
	// lis r22,16384
	ctx.r22.s64 = 1073741824;
	// lis r23,16640
	ctx.r23.s64 = 1090519040;
loc_82E889E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// clrlwi r5,r10,8
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFFFF;
	// subf r4,r22,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r22.s64;
	// blt cr6,0x82e88a00
	if (ctx.cr6.lt) goto loc_82E88A00;
	// subf r4,r23,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r23.s64;
loc_82E88A00:
	// lwz r3,21532(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21532);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E88A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,21532(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21532);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E88A2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82e889e4
	if (!ctx.cr0.eq) goto loc_82E889E4;
	// b 0x82e88b74
	goto loc_82E88B74;
loc_82E88A3C:
	// lwz r29,10952(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 10952);
	// mulli r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 * 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e88150
	ctx.lr = 0x82E88A50;
	sub_82E88150(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82e88b1c
	if (ctx.cr6.eq) goto loc_82E88B1C;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// lis r21,8192
	ctx.r21.s64 = 536870912;
	// lis r22,16384
	ctx.r22.s64 = 1073741824;
	// lis r23,16640
	ctx.r23.s64 = 1090519040;
loc_82E88A68:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,21532(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21532);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r28,r11,8
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFFFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e88aa8
	if (ctx.cr6.eq) goto loc_82E88AA8;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// subf r4,r22,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r22.s64;
	// blt cr6,0x82e88a90
	if (ctx.cr6.lt) goto loc_82E88A90;
	// subf r4,r23,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r23.s64;
loc_82E88A90:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E88AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E88AA8:
	// lwz r11,23308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e88ad8
	if (ctx.cr6.eq) goto loc_82E88AD8;
	// cmplw cr6,r31,r21
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r21.u32, ctx.xer);
	// subf r4,r22,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r22.s64;
	// blt cr6,0x82e88ac4
	if (ctx.cr6.lt) goto loc_82E88AC4;
	// subf r4,r23,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r23.s64;
loc_82E88AC4:
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E88AD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E88AD8:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// and r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// and r11,r8,r25
	ctx.r11.u64 = ctx.r8.u64 & ctx.r25.u64;
	// ori r9,r9,16128
	ctx.r9.u64 = ctx.r9.u64 | 16128;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwx r9,r10,r24
	PPC_STORE_U32(ctx.r10.u32 + ctx.r24.u32, ctx.r9.u32);
	// stwx r31,r7,r24
	PPC_STORE_U32(ctx.r7.u32 + ctx.r24.u32, ctx.r31.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// and r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 & ctx.r25.u64;
	// stwx r28,r8,r24
	PPC_STORE_U32(ctx.r8.u32 + ctx.r24.u32, ctx.r28.u32);
	// bne 0x82e88a68
	if (!ctx.cr0.eq) goto loc_82E88A68;
loc_82E88B1C:
	// stw r29,10952(r26)
	PPC_STORE_U32(ctx.r26.u32 + 10952, ctx.r29.u32);
	// sync 
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// stw r29,1812(r11)
	PPC_MM_STORE_U32(ctx.r11.u32 + 1812, ctx.r29.u32);
	// eieio 
	// sync 
	// lwz r3,21532(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21532);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e88b50
	if (ctx.cr6.eq) goto loc_82E88B50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E88B50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E88B50:
	// lwz r11,23308(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 23308);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e88b74
	if (ctx.cr6.eq) goto loc_82E88B74;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E88B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E88B74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E88B7C"))) PPC_WEAK_FUNC(sub_82E88B7C);
PPC_FUNC_IMPL(__imp__sub_82E88B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88B80"))) PPC_WEAK_FUNC(sub_82E88B80);
PPC_FUNC_IMPL(__imp__sub_82E88B80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E88B88;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// ld r10,11824(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 11824);
	// addi r28,r31,11824
	ctx.r28.s64 = ctx.r31.s64 + 11824;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne cr6,0x82e88bbc
	if (!ctx.cr6.eq) goto loc_82E88BBC;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_82E88BBC:
	// lbz r11,10942(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10942);
	// rlwinm r27,r11,30,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// add r11,r27,r30
	ctx.r11.u64 = ctx.r27.u64 + ctx.r30.u64;
	// mulli r25,r11,11
	ctx.r25.s64 = ctx.r11.s64 * 11;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82e88bdc
	if (!ctx.cr6.eq) goto loc_82E88BDC;
loc_82E88BD4:
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// b 0x82e88d38
	goto loc_82E88D38;
loc_82E88BDC:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88890
	ctx.lr = 0x82E88BEC;
	sub_82E88890(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82e88bd4
	if (ctx.cr0.eq) goto loc_82E88BD4;
	// addi r7,r29,-4
	ctx.r7.s64 = ctx.r29.s64 + -4;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e88c84
	if (ctx.cr6.eq) goto loc_82E88C84;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e88378
	ctx.lr = 0x82E88C14;
	sub_82E88378(ctx, base);
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// ori r11,r9,2607
	ctx.r11.u64 = ctx.r9.u64 | 2607;
	// ori r9,r8,15360
	ctx.r9.u64 = ctx.r8.u64 | 15360;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// li r5,2609
	ctx.r5.s64 = 2609;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// li r10,8
	ctx.r10.s64 = 8;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r30,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r30,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// stwu r4,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r7.u32 = ea;
	// stwu r3,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r7.u32 = ea;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
loc_82E88C84:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82e88d1c
	if (ctx.cr6.eq) goto loc_82E88D1C;
	// li r11,2609
	ctx.r11.s64 = 2609;
	// lwz r9,14908(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14908);
	// lwz r5,14904(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14904);
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r9,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// addi r4,r10,512
	ctx.r4.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r9,3
	ctx.r11.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// clrlwi r9,r5,3
	ctx.r9.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r8,r4,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x1000;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// ori r5,r3,2607
	ctx.r5.u64 = ctx.r3.u64 | 2607;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r9,-16380
	ctx.r9.s64 = -1073479680;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// ori r9,r9,15360
	ctx.r9.u64 = ctx.r9.u64 | 15360;
	// li r8,2609
	ctx.r8.s64 = 2609;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// stwu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r7.u32 = ea;
	// stwu r8,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r7.u32 = ea;
	// stwu r26,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r7.u32 = ea;
	// stwu r6,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// stwu r5,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r7.u32 = ea;
loc_82E88D1C:
	// rlwinm r11,r29,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r29,3
	ctx.r10.u64 = ctx.r29.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r25,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r25.u32);
loc_82E88D38:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E88D40"))) PPC_WEAK_FUNC(sub_82E88D40);
PPC_FUNC_IMPL(__imp__sub_82E88D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// li r3,32767
	ctx.r3.s64 = 32767;
	// ori r6,r9,15104
	ctx.r6.u64 = ctx.r9.u64 | 15104;
	// lis r31,-16382
	ctx.r31.s64 = -1073610752;
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// li r30,3
	ctx.r30.s64 = 3;
	// lwz r7,14920(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14920);
	// ori r31,r31,22528
	ctx.r31.u64 = ctx.r31.u64 | 22528;
	// lwz r10,10896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10896);
	// lwz r8,10908(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10908);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// stw r5,13240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13240, ctx.r5.u32);
	// stw r7,13244(r11)
	PPC_STORE_U32(ctx.r11.u32 + 13244, ctx.r7.u32);
	// clrlwi r7,r7,30
	ctx.r7.u64 = ctx.r7.u32 & 0x3;
	// stwu r6,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r4.u32 = ea;
	// rlwinm r6,r9,12,20,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r6,r6,512
	ctx.r6.s64 = ctx.r6.s64 + 512;
	// or r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 | ctx.r5.u64;
	// rlwinm r6,r6,0,19,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// lis r5,-16382
	ctx.r5.s64 = -1073610752;
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// ori r5,r5,22528
	ctx.r5.u64 = ctx.r5.u64 | 22528;
	// ori r6,r9,2
	ctx.r6.u64 = ctx.r9.u64 | 2;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r31,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r4.u32 = ea;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r9,r9,512
	ctx.r9.s64 = ctx.r9.s64 + 512;
	// li r3,3
	ctx.r3.s64 = 3;
	// rlwinm r9,r9,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// stwu r30,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r4.u32 = ea;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// stwu r6,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r4.u32 = ea;
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// stwu r5,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r4.u32 = ea;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// stwu r10,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r4.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lwz r10,21532(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21532);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e88e18
	if (!ctx.cr6.eq) goto loc_82E88E18;
	// lbz r10,10941(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 10941);
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e88e18
	if (ctx.cr0.eq) goto loc_82E88E18;
	// lwz r10,10896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10896);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r10,10896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10896);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
loc_82E88E18:
	// addi r10,r8,2
	ctx.r10.s64 = ctx.r8.s64 + 2;
	// stw r10,10908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10908, ctx.r10.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88E2C"))) PPC_WEAK_FUNC(sub_82E88E2C);
PPC_FUNC_IMPL(__imp__sub_82E88E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88E30"))) PPC_WEAK_FUNC(sub_82E88E30);
PPC_FUNC_IMPL(__imp__sub_82E88E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d4
	ctx.lr = 0x82E88E38;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,11008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e88ecc
	if (ctx.cr6.eq) goto loc_82E88ECC;
	// addi r24,r30,11012
	ctx.r24.s64 = ctx.r30.s64 + 11012;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833b7fd4
	ctx.lr = 0x82E88E70;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e88eb8
	if (ctx.cr6.eq) goto loc_82E88EB8;
	// oris r11,r27,33024
	ctx.r11.u64 = ctx.r27.u64 | 2164260864;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82e885c8
	ctx.lr = 0x82E88EA8;
	sub_82E885C8(ctx, base);
	// lwz r11,11008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// li r29,1
	ctx.r29.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// stw r11,11008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11008, ctx.r11.u32);
loc_82E88EB8:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x833b7fc4
	ctx.lr = 0x82E88EC4;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82e88ef8
	if (!ctx.cr6.eq) goto loc_82E88EF8;
loc_82E88ECC:
	// lwz r11,11008(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11008);
	// clrlwi r10,r27,8
	ctx.r10.u64 = ctx.r27.u32 & 0xFFFFFF;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// oris r10,r10,33024
	ctx.r10.u64 = ctx.r10.u64 | 2164260864;
	// stw r11,11008(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11008, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e88998
	ctx.lr = 0x82E88EF8;
	sub_82E88998(ctx, base);
loc_82E88EF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82cb1124
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E88F04"))) PPC_WEAK_FUNC(sub_82E88F04);
PPC_FUNC_IMPL(__imp__sub_82E88F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E88F08"))) PPC_WEAK_FUNC(sub_82E88F08);
PPC_FUNC_IMPL(__imp__sub_82E88F08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10908(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10908);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88F10"))) PPC_WEAK_FUNC(sub_82E88F10);
PPC_FUNC_IMPL(__imp__sub_82E88F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r10,10908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e88f98
	if (!ctx.cr6.lt) goto loc_82E88F98;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68620
	ctx.lr = 0x82E88F60;
	sub_82E68620(ctx, base);
	// b 0x82e88f74
	goto loc_82E88F74;
loc_82E88F64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68ae8
	ctx.lr = 0x82E88F6C;
	sub_82E68AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e88f90
	if (ctx.cr0.eq) goto loc_82E88F90;
loc_82E88F74:
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r10,10908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e88f64
	if (ctx.cr6.lt) goto loc_82E88F64;
loc_82E88F90:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68650
	ctx.lr = 0x82E88F98;
	sub_82E68650(ctx, base);
loc_82E88F98:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88FB0"))) PPC_WEAK_FUNC(sub_82E88FB0);
PPC_FUNC_IMPL(__imp__sub_82E88FB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,10908(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10908);
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e88fe8
	if (ctx.cr6.eq) goto loc_82E88FE8;
	// lwz r10,10896(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10896);
	// lwz r11,10908(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10908);
	// subf r9,r3,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_82E88FE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E88FF0"))) PPC_WEAK_FUNC(sub_82E88FF0);
PPC_FUNC_IMPL(__imp__sub_82E88FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E88FF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e890b4
	if (ctx.cr6.eq) goto loc_82E890B4;
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r10,10908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e890b4
	if (!ctx.cr6.lt) goto loc_82E890B4;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e89050
	if (!ctx.cr0.eq) goto loc_82E89050;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e89050
	if (!ctx.cr6.eq) goto loc_82E89050;
	// lwz r11,13232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e890b4
	if (!ctx.cr6.eq) goto loc_82E890B4;
	// bl 0x82e898a8
	ctx.lr = 0x82E89050;
	sub_82E898A8(ctx, base);
loc_82E89050:
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r10,10908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82e890b4
	if (!ctx.cr6.lt) goto loc_82E890B4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68620
	ctx.lr = 0x82E8907C;
	sub_82E68620(ctx, base);
	// b 0x82e89090
	goto loc_82E89090;
loc_82E89080:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68ae8
	ctx.lr = 0x82E89088;
	sub_82E68AE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e890ac
	if (ctx.cr0.eq) goto loc_82E890AC;
loc_82E89090:
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r10,10908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e89080
	if (ctx.cr6.lt) goto loc_82E89080;
loc_82E890AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e68650
	ctx.lr = 0x82E890B4;
	sub_82E68650(ctx, base);
loc_82E890B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E890BC"))) PPC_WEAK_FUNC(sub_82E890BC);
PPC_FUNC_IMPL(__imp__sub_82E890BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E890C0"))) PPC_WEAK_FUNC(sub_82E890C0);
PPC_FUNC_IMPL(__imp__sub_82E890C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10cc
	ctx.lr = 0x82E890C8;
	__savegprlr_21(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm. r10,r5,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// rlwinm r9,r5,8,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0x3F;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,10900(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10900);
	// bne 0x82e890f0
	if (!ctx.cr0.eq) goto loc_82E890F0;
	// ori r5,r5,6
	ctx.r5.u64 = ctx.r5.u64 | 6;
loc_82E890F0:
	// lis r11,-16380
	ctx.r11.s64 = -1073479680;
	// rlwinm. r30,r5,0,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r31,-1
	ctx.r31.s64 = -1;
	// ori r11,r11,15360
	ctx.r11.u64 = ctx.r11.u64 | 15360;
	// beq 0x82e8924c
	if (ctx.cr0.eq) goto loc_82E8924C;
	// clrlwi. r30,r5,31
	ctx.r30.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82e89120
	if (!ctx.cr0.eq) goto loc_82E89120;
	// li r3,1480
	ctx.r3.s64 = 1480;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// stwu r3,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r4.u32 = ea;
	// stwu r30,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r4.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82E89120:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ori r4,r4,1404
	ctx.r4.u64 = ctx.r4.u64 | 1404;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stwu r7,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r4.u32 = ea;
	// bne cr6,0x82e89144
	if (!ctx.cr6.eq) goto loc_82E89144;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82E89144:
	// li r30,1400
	ctx.r30.s64 = 1400;
	// rlwinm r3,r10,12,20,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r30,4(r4)
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r4.u32 = ea;
	// li r30,19
	ctx.r30.s64 = 19;
	// addi r29,r3,512
	ctx.r29.s64 = ctx.r3.s64 + 512;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// rlwinm r4,r29,0,19,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1000;
	// clrlwi r3,r10,3
	ctx.r3.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// stwu r9,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r28.u32 = ea;
	// li r27,256
	ctx.r27.s64 = 256;
	// lwz r3,12716(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12716);
	// ori r26,r4,2
	ctx.r26.u64 = ctx.r4.u64 | 2;
	// addi r4,r10,20
	ctx.r4.s64 = ctx.r10.s64 + 20;
	// or r25,r3,r11
	ctx.r25.u64 = ctx.r3.u64 | ctx.r11.u64;
	// rlwinm r3,r4,12,20,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// stwu r25,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r28.u32 = ea;
	// clrlwi r4,r4,3
	ctx.r4.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// li r24,19
	ctx.r24.s64 = 19;
	// rlwinm r3,r3,0,19,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	// mr r25,r31
	ctx.r25.u64 = ctx.r31.u64;
	// stwu r30,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r28.u32 = ea;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r23,256
	ctx.r23.s64 = 256;
	// ori r30,r4,2
	ctx.r30.u64 = ctx.r4.u64 | 2;
	// addi r4,r10,16
	ctx.r4.s64 = ctx.r10.s64 + 16;
	// li r22,19
	ctx.r22.s64 = 19;
	// stwu r26,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r28.u32 = ea;
	// rlwinm r3,r4,12,20,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// clrlwi r4,r4,3
	ctx.r4.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r3,r3,512
	ctx.r3.s64 = ctx.r3.s64 + 512;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// rlwinm r3,r3,0,19,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	// stwu r9,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r28.u32 = ea;
	// li r21,1118
	ctx.r21.s64 = 1118;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// li r3,256
	ctx.r3.s64 = 256;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// stwu r29,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r28.u32 = ea;
	// stwu r27,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r28.u32 = ea;
	// lwz r29,12716(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12716);
	// or r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 | ctx.r11.u64;
	// stwu r29,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r28.u32 = ea;
	// stwu r24,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r28.u32 = ea;
	// stwu r30,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r28.u32 = ea;
	// stwu r7,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r28.u32 = ea;
	// stwu r25,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r28.u32 = ea;
	// stwu r23,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r23.u32);
	ctx.r28.u32 = ea;
	// lwz r7,12716(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12716);
	// or r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 | ctx.r11.u64;
	// stwu r7,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r28.u32 = ea;
	// stwu r22,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r28.u32 = ea;
	// stwu r4,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r28.u32 = ea;
	// stwu r6,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r28.u32 = ea;
	// stwu r26,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r28.u32 = ea;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// lwz r7,12716(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12716);
	// oris r7,r7,49152
	ctx.r7.u64 = ctx.r7.u64 | 3221225472;
	// ori r7,r7,21504
	ctx.r7.u64 = ctx.r7.u64 | 21504;
	// stwu r7,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r28.u32 = ea;
	// stwu r9,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r28.u32 = ea;
	// stwu r21,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r28.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
loc_82E8924C:
	// rlwinm. r9,r5,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82e892ac
	if (ctx.cr0.eq) goto loc_82E892AC;
	// lwz r9,12716(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12716);
	// li r8,19
	ctx.r8.s64 = 19;
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// li r9,256
	ctx.r9.s64 = 256;
	// addi r7,r11,512
	ctx.r7.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r10,3
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r10,r7,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// lis r7,2989
	ctx.r7.s64 = 195887104;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// li r8,1404
	ctx.r8.s64 = 1404;
	// ori r7,r7,61453
	ctx.r7.u64 = ctx.r7.u64 | 61453;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r31,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
loc_82E892AC:
	// b 0x82cb111c
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E892B0"))) PPC_WEAK_FUNC(sub_82E892B0);
PPC_FUNC_IMPL(__imp__sub_82E892B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,10908(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10908);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E892C4"))) PPC_WEAK_FUNC(sub_82E892C4);
PPC_FUNC_IMPL(__imp__sub_82E892C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E892C8"))) PPC_WEAK_FUNC(sub_82E892C8);
PPC_FUNC_IMPL(__imp__sub_82E892C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e88ff0
	sub_82E88FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E892E8"))) PPC_WEAK_FUNC(sub_82E892E8);
PPC_FUNC_IMPL(__imp__sub_82E892E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,5
	ctx.r5.s64 = 5;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e88ff0
	sub_82E88FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89308"))) PPC_WEAK_FUNC(sub_82E89308);
PPC_FUNC_IMPL(__imp__sub_82E89308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E89310;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r29,16384
	ctx.r29.s64 = 1073741824;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89348
	if (ctx.cr6.eq) goto loc_82E89348;
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r9,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r9,3
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82E89348:
	// li r5,128
	ctx.r5.s64 = 128;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r4,4224
	ctx.r4.s64 = 4224;
	// bl 0x82e88890
	ctx.lr = 0x82E89358;
	sub_82E88890(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82e89374
	if (!ctx.cr0.eq) goto loc_82E89374;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,16728(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16728);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82e893e8
	goto loc_82E893E8;
loc_82E89374:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	ctx.r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e893c0
	if (ctx.cr6.eq) goto loc_82E893C0;
	// rlwinm r10,r31,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r31,3
	ctx.r9.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82e893c4
	goto loc_82E893C4;
loc_82E893C0:
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
loc_82E893C4:
	// rlwinm r11,r31,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r31,3
	ctx.r10.u64 = ctx.r31.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r3,r29,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r4,r3,4224
	ctx.r4.s64 = ctx.r3.s64 + 4224;
	// bl 0x82e928e8
	ctx.lr = 0x82E893E8;
	sub_82E928E8(ctx, base);
loc_82E893E8:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r31,4220
	ctx.r11.s64 = ctx.r31.s64 + 4220;
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89404"))) PPC_WEAK_FUNC(sub_82E89404);
PPC_FUNC_IMPL(__imp__sub_82E89404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89408"))) PPC_WEAK_FUNC(sub_82E89408);
PPC_FUNC_IMPL(__imp__sub_82E89408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e0
	ctx.lr = 0x82E89410;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mullw r31,r5,r6
	ctx.r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r6.s32);
	// not r26,r11
	ctx.r26.u64 = ~ctx.r11.u64;
loc_82E89428:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// and r28,r11,r26
	ctx.r28.u64 = ctx.r11.u64 & ctx.r26.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82e89448
	if (!ctx.cr6.gt) goto loc_82E89448;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_82E89448:
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82cb1160
	ctx.lr = 0x82E89458;
	sub_82CB1160(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf. r31,r28,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r28.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r27,r29,r27
	ctx.r27.u64 = ctx.r29.u64 + ctx.r27.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq 0x82e8947c
	if (ctx.cr0.eq) goto loc_82E8947C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e89308
	ctx.lr = 0x82E89478;
	sub_82E89308(ctx, base);
	// b 0x82e89428
	goto loc_82E89428;
loc_82E8947C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82cb1130
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89484"))) PPC_WEAK_FUNC(sub_82E89484);
PPC_FUNC_IMPL(__imp__sub_82E89484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89488"))) PPC_WEAK_FUNC(sub_82E89488);
PPC_FUNC_IMPL(__imp__sub_82E89488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E89490;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e894d0
	if (ctx.cr0.eq) goto loc_82E894D0;
	// lwz r10,16728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16728);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r10,4800
	ctx.r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = ctx.r11.s64 + -160;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stb r9,10941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10941, ctx.r9.u8);
	// b 0x82e895ec
	goto loc_82E895EC;
loc_82E894D0:
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82e894e4
	if (!ctx.cr6.eq) goto loc_82E894E4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82e894ec
	goto loc_82E894EC;
loc_82E894E4:
	// addi r11,r4,14
	ctx.r11.s64 = ctx.r4.s64 + 14;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E894EC:
	// lwz r3,13516(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13516);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e89514
	if (ctx.cr6.eq) goto loc_82E89514;
	// lwz r10,172(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 172);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e89514
	if (ctx.cr6.eq) goto loc_82E89514;
	// lwz r10,14912(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14912);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82e89514
	if (ctx.cr6.gt) goto loc_82E89514;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E89514:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bne 0x82e89538
	if (!ctx.cr0.eq) goto loc_82E89538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88690
	ctx.lr = 0x82E89534;
	sub_82E88690(ctx, base);
	// b 0x82e89554
	goto loc_82E89554;
loc_82E89538:
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89550
	if (ctx.cr6.eq) goto loc_82E89550;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7d2f0
	ctx.lr = 0x82E8954C;
	sub_82E7D2F0(ctx, base);
	// b 0x82e89554
	goto loc_82E89554;
loc_82E89550:
	// bl 0x82e7e2e8
	ctx.lr = 0x82E89554;
	sub_82E7E2E8(ctx, base);
loc_82E89554:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e89584
	if (!ctx.cr6.eq) goto loc_82E89584;
	// lwz r10,16728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16728);
	// lbz r9,10941(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// addi r11,r10,4800
	ctx.r11.s64 = ctx.r10.s64 + 4800;
	// ori r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 | 32;
	// addi r8,r11,-160
	ctx.r8.s64 = ctx.r11.s64 + -160;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r8,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r8.u32);
	// stb r9,10941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10941, ctx.r9.u8);
	// b 0x82e895b4
	goto loc_82E895B4;
loc_82E89584:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// stw r30,14928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14928, ctx.r30.u32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r29,14916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14916, ctx.r29.u32);
	// addi r10,r10,-14
	ctx.r10.s64 = ctx.r10.s64 + -14;
	// stw r29,14932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14932, ctx.r29.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,-160
	ctx.r10.s64 = ctx.r11.s64 + -160;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
loc_82E895B4:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,23932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23932);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e895e8
	if (!ctx.cr0.eq) goto loc_82E895E8;
	// lwz r4,14940(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14940);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82e895e8
	if (ctx.cr6.eq) goto loc_82E895E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88ff0
	ctx.lr = 0x82E895E4;
	sub_82E88FF0(ctx, base);
	// stw r29,14940(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14940, ctx.r29.u32);
loc_82E895E8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82E895EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E895F4"))) PPC_WEAK_FUNC(sub_82E895F4);
PPC_FUNC_IMPL(__imp__sub_82E895F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E895F8"))) PPC_WEAK_FUNC(sub_82E895F8);
PPC_FUNC_IMPL(__imp__sub_82E895F8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e88998
	sub_82E88998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E895FC"))) PPC_WEAK_FUNC(sub_82E895FC);
PPC_FUNC_IMPL(__imp__sub_82E895FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89600"))) PPC_WEAK_FUNC(sub_82E89600);
PPC_FUNC_IMPL(__imp__sub_82E89600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E89608;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r11,13232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89634
	if (ctx.cr6.eq) goto loc_82E89634;
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// bl 0x82e89408
	ctx.lr = 0x82E89630;
	sub_82E89408(ctx, base);
	// b 0x82e896d4
	goto loc_82E896D4;
loc_82E89634:
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e896c4
	if (ctx.cr6.eq) goto loc_82E896C4;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88890
	ctx.lr = 0x82E89658;
	sub_82E88890(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r29,r28,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82cb1160
	ctx.lr = 0x82E89670;
	sub_82CB1160(ctx, base);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// addi r27,r31,11012
	ctx.r27.s64 = ctx.r31.s64 + 11012;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x833b7fd4
	ctx.lr = 0x82E8968C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e896b0
	if (ctx.cr6.eq) goto loc_82E896B0;
	// addi r5,r29,4
	ctx.r5.s64 = ctx.r29.s64 + 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// bl 0x82e885c8
	ctx.lr = 0x82E896AC;
	sub_82E885C8(ctx, base);
	// li r24,1
	ctx.r24.s64 = 1;
loc_82E896B0:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x833b7fc4
	ctx.lr = 0x82E896BC;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82e896d4
	if (!ctx.cr6.eq) goto loc_82E896D4;
loc_82E896C4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88998
	ctx.lr = 0x82E896D4;
	sub_82E88998(ctx, base);
loc_82E896D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E896DC"))) PPC_WEAK_FUNC(sub_82E896DC);
PPC_FUNC_IMPL(__imp__sub_82E896DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E896E0"))) PPC_WEAK_FUNC(sub_82E896E0);
PPC_FUNC_IMPL(__imp__sub_82E896E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82e88ff0
	sub_82E88FF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89700"))) PPC_WEAK_FUNC(sub_82E89700);
PPC_FUNC_IMPL(__imp__sub_82E89700) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82e89308
	sub_82E89308(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8971C"))) PPC_WEAK_FUNC(sub_82E8971C);
PPC_FUNC_IMPL(__imp__sub_82E8971C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89720"))) PPC_WEAK_FUNC(sub_82E89720);
PPC_FUNC_IMPL(__imp__sub_82E89720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E89728;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,10941(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,14928(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14928);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// bne 0x82e89860
	if (!ctx.cr0.eq) goto loc_82E89860;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e897bc
	if (ctx.cr0.eq) goto loc_82E897BC;
	// lwz r11,13516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13516);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89860
	if (ctx.cr6.eq) goto loc_82E89860;
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e89860
	if (!ctx.cr6.eq) goto loc_82E89860;
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// srawi. r29,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82e89860
	if (ctx.cr0.eq) goto loc_82E89860;
	// lwz r11,13540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13540);
	// lwz r3,13536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13536);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e89790
	if (ctx.cr6.lt) goto loc_82E89790;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e7dd78
	ctx.lr = 0x82E89790;
	sub_82E7DD78(ctx, base);
loc_82E89790:
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// oris r9,r29,33024
	ctx.r9.u64 = ctx.r29.u64 | 2164260864;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r8,13536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13536, ctx.r8.u32);
	// b 0x82e89860
	goto loc_82E89860;
loc_82E897BC:
	// lwz r11,13232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89820
	if (ctx.cr6.eq) goto loc_82E89820;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r30.s64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// srawi. r30,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r9.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq 0x82e89860
	if (ctx.cr0.eq) goto loc_82E89860;
	// lwz r11,13376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13376);
	// addi r3,r31,13368
	ctx.r3.s64 = ctx.r31.s64 + 13368;
	// lwz r10,13380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13380);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e89808
	if (!ctx.cr6.gt) goto loc_82E89808;
	// bl 0x82e89308
	ctx.lr = 0x82E89804;
	sub_82E89308(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E89808:
	// oris r10,r30,33024
	ctx.r10.u64 = ctx.r30.u64 | 2164260864;
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,13376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 13376, ctx.r9.u32);
	// b 0x82e89860
	goto loc_82E89860;
loc_82E89820:
	// addi r4,r28,-4
	ctx.r4.s64 = ctx.r28.s64 + -4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88d40
	ctx.lr = 0x82E8982C;
	sub_82E88D40(ctx, base);
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// subf r9,r30,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r30.s64;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r30,3
	ctx.r10.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// addi r8,r31,13368
	ctx.r8.s64 = ctx.r31.s64 + 13368;
	// li r7,0
	ctx.r7.s64 = 0;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88e30
	ctx.lr = 0x82E8985C;
	sub_82E88E30(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82E89860:
	// addi r11,r28,31
	ctx.r11.s64 = ctx.r28.s64 + 31;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r9,r11,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e8988c
	if (!ctx.cr6.gt) goto loc_82E8988C;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89488
	ctx.lr = 0x82E89888;
	sub_82E89488(ctx, base);
	// b 0x82e8989c
	goto loc_82E8989C;
loc_82E8988C:
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// stw r11,14928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14928, ctx.r11.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
loc_82E8989C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E898A4"))) PPC_WEAK_FUNC(sub_82E898A4);
PPC_FUNC_IMPL(__imp__sub_82E898A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E898A8"))) PPC_WEAK_FUNC(sub_82E898A8);
PPC_FUNC_IMPL(__imp__sub_82E898A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e898d0
	if (ctx.cr6.eq) goto loc_82E898D0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82E898D0:
	// lwz r11,13232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 13232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e89934
	if (!ctx.cr6.eq) goto loc_82E89934;
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e89934
	if (!ctx.cr0.eq) goto loc_82E89934;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88b80
	ctx.lr = 0x82E898F8;
	sub_82E88B80(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e89934
	if (ctx.cr6.eq) goto loc_82E89934;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88890
	ctx.lr = 0x82E89914;
	sub_82E88890(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82e89934
	if (ctx.cr0.eq) goto loc_82E89934;
	// addi r8,r31,13368
	ctx.r8.s64 = ctx.r31.s64 + 13368;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88e30
	ctx.lr = 0x82E89934;
	sub_82E88E30(ctx, base);
loc_82E89934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89720
	ctx.lr = 0x82E8993C;
	sub_82E89720(ctx, base);
	// lbz r11,10940(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8998c
	if (!ctx.cr0.eq) goto loc_82E8998C;
	// lis r11,-31890
	ctx.r11.s64 = -2089943040;
	// lwz r11,-4640(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e8998c
	if (ctx.cr6.eq) goto loc_82E8998C;
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8998c
	if (!ctx.cr0.eq) goto loc_82E8998C;
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88ff0
	ctx.lr = 0x82E89980;
	sub_82E88FF0(ctx, base);
	// lbz r11,10941(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10941);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,10941(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10941, ctx.r11.u8);
loc_82E8998C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E899A8"))) PPC_WEAK_FUNC(sub_82E899A8);
PPC_FUNC_IMPL(__imp__sub_82E899A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82e898a8
	sub_82E898A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E899AC"))) PPC_WEAK_FUNC(sub_82E899AC);
PPC_FUNC_IMPL(__imp__sub_82E899AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E899B0"))) PPC_WEAK_FUNC(sub_82E899B0);
PPC_FUNC_IMPL(__imp__sub_82E899B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,14928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14928);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e899dc
	if (ctx.cr6.eq) goto loc_82E899DC;
	// bl 0x82e898a8
	ctx.lr = 0x82E899DC;
	sub_82E898A8(ctx, base);
loc_82E899DC:
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,10908(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89A10"))) PPC_WEAK_FUNC(sub_82E89A10);
PPC_FUNC_IMPL(__imp__sub_82E89A10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,10908(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10908);
	// stw r31,10928(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10928, ctx.r31.u32);
	// bl 0x82e898a8
	ctx.lr = 0x82E89A2C;
	sub_82E898A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89A44"))) PPC_WEAK_FUNC(sub_82E89A44);
PPC_FUNC_IMPL(__imp__sub_82E89A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89A48"))) PPC_WEAK_FUNC(sub_82E89A48);
PPC_FUNC_IMPL(__imp__sub_82E89A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e89aa8
	if (ctx.cr6.eq) goto loc_82E89AA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r11,2340(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2340);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82e89a88
	if (!ctx.cr6.eq) goto loc_82E89A88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E89A88;
	sub_82E898A8(ctx, base);
loc_82E89A88:
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r10,10908(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// subf r9,r30,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r30.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfc r11,r11,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
loc_82E89AA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89AC0"))) PPC_WEAK_FUNC(sub_82E89AC0);
PPC_FUNC_IMPL(__imp__sub_82E89AC0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82e89a48
	sub_82E89A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89AC8"))) PPC_WEAK_FUNC(sub_82E89AC8);
PPC_FUNC_IMPL(__imp__sub_82E89AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e89af4
	if (!ctx.cr6.gt) goto loc_82E89AF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E89AF4;
	sub_82E898A8(ctx, base);
loc_82E89AF4:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,3332
	ctx.r11.s64 = 3332;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89B2C"))) PPC_WEAK_FUNC(sub_82E89B2C);
PPC_FUNC_IMPL(__imp__sub_82E89B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89B30"))) PPC_WEAK_FUNC(sub_82E89B30);
PPC_FUNC_IMPL(__imp__sub_82E89B30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E89B38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r30,r29,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e89b8c
	if (!ctx.cr6.gt) goto loc_82E89B8C;
	// bl 0x82e898a8
	ctx.lr = 0x82E89B60;
	sub_82E898A8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e89b8c
	if (!ctx.cr6.gt) goto loc_82E89B8C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e89488
	ctx.lr = 0x82E89B80;
	sub_82E89488(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82e89b90
	if (ctx.cr0.eq) goto loc_82E89B90;
loc_82E89B8C:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82E89B90:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89B98"))) PPC_WEAK_FUNC(sub_82E89B98);
PPC_FUNC_IMPL(__imp__sub_82E89B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e89bc4
	if (!ctx.cr6.gt) goto loc_82E89BC4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E89BC4;
	sub_82E898A8(ctx, base);
loc_82E89BC4:
	// li r11,1480
	ctx.r11.s64 = 1480;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89BEC"))) PPC_WEAK_FUNC(sub_82E89BEC);
PPC_FUNC_IMPL(__imp__sub_82E89BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89BF0"))) PPC_WEAK_FUNC(sub_82E89BF0);
PPC_FUNC_IMPL(__imp__sub_82E89BF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E89BF8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e89c20
	if (!ctx.cr6.gt) goto loc_82E89C20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E89C20;
	sub_82E898A8(ctx, base);
loc_82E89C20:
	// lis r10,-16382
	ctx.r10.s64 = -1073610752;
	// rlwinm r11,r30,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 12) & 0xFFF;
	// ori r10,r10,22529
	ctx.r10.u64 = ctx.r10.u64 | 22529;
	// addi r9,r11,512
	ctx.r9.s64 = ctx.r11.s64 + 512;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r8,3
	ctx.r8.s64 = 3;
	// clrlwi r11,r30,3
	ctx.r11.u64 = ctx.r30.u32 & 0x1FFFFFFF;
	// rlwinm r10,r9,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89C60"))) PPC_WEAK_FUNC(sub_82E89C60);
PPC_FUNC_IMPL(__imp__sub_82E89C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82e89c8c
	if (!ctx.cr6.gt) goto loc_82E89C8C;
	// bl 0x82e898a8
	ctx.lr = 0x82E89C88;
	sub_82E898A8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82E89C8C:
	// li r10,1480
	ctx.r10.s64 = 1480;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lwz r4,10908(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82e88ff0
	ctx.lr = 0x82E89CB8;
	sub_82E88FF0(ctx, base);
loc_82E89CB8:
	// lwz r11,11008(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11008);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e89cb8
	if (!ctx.cr6.eq) goto loc_82E89CB8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89CD8"))) PPC_WEAK_FUNC(sub_82E89CD8);
PPC_FUNC_IMPL(__imp__sub_82E89CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E89CE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e89d0c
	if (!ctx.cr6.gt) goto loc_82E89D0C;
	// bl 0x82e898a8
	ctx.lr = 0x82E89D08;
	sub_82E898A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82E89D0C:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e890c0
	ctx.lr = 0x82E89D20;
	sub_82E890C0(ctx, base);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E89D2C"))) PPC_WEAK_FUNC(sub_82E89D2C);
PPC_FUNC_IMPL(__imp__sub_82E89D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89D30"))) PPC_WEAK_FUNC(sub_82E89D30);
PPC_FUNC_IMPL(__imp__sub_82E89D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e89d5c
	if (!ctx.cr6.gt) goto loc_82E89D5C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E89D5C;
	sub_82E898A8(ctx, base);
loc_82E89D5C:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89D74"))) PPC_WEAK_FUNC(sub_82E89D74);
PPC_FUNC_IMPL(__imp__sub_82E89D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89D78"))) PPC_WEAK_FUNC(sub_82E89D78);
PPC_FUNC_IMPL(__imp__sub_82E89D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e89da4
	if (!ctx.cr6.gt) goto loc_82E89DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E89DA4;
	sub_82E898A8(ctx, base);
loc_82E89DA4:
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89DBC"))) PPC_WEAK_FUNC(sub_82E89DBC);
PPC_FUNC_IMPL(__imp__sub_82E89DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E89DC0"))) PPC_WEAK_FUNC(sub_82E89DC0);
PPC_FUNC_IMPL(__imp__sub_82E89DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e89b30
	ctx.lr = 0x82E89DE0;
	sub_82E89B30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e89e20
	if (ctx.cr0.eq) goto loc_82E89E20;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82e89dfc
	if (!ctx.cr6.eq) goto loc_82E89DFC;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// b 0x82e89e1c
	goto loc_82E89E1C;
loc_82E89DFC:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// addi r10,r31,-2
	ctx.r10.s64 = ctx.r31.s64 + -2;
	// ori r9,r11,4096
	ctx.r9.u64 = ctx.r11.u64 | 4096;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwimi r9,r10,16,2,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3FFF0000) | (ctx.r9.u64 & 0xFFFFFFFFC000FFFF);
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
loc_82E89E1C:
	// stw r3,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r3.u32);
loc_82E89E20:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E89E38"))) PPC_WEAK_FUNC(sub_82E89E38);
PPC_FUNC_IMPL(__imp__sub_82E89E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10d8
	ctx.lr = 0x82E89E40;
	__savegprlr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89e84
	if (ctx.cr6.eq) goto loc_82E89E84;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89e84
	if (ctx.cr6.eq) goto loc_82E89E84;
	// bl 0x82e89c60
	ctx.lr = 0x82E89E68;
	sub_82E89C60(ctx, base);
	// b 0x82e89e74
	goto loc_82E89E74;
loc_82E89E6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82e645c8
	ctx.lr = 0x82E89E74;
	sub_82E645C8(ctx, base);
loc_82E89E74:
	// lwz r10,10984(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10984);
	// lwz r11,10988(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10988);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82e89e6c
	if (!ctx.cr6.eq) goto loc_82E89E6C;
loc_82E89E84:
	// lwz r11,14904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14904);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e89ed0
	if (ctx.cr6.eq) goto loc_82E89ED0;
	// lwz r8,14908(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14908);
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r9,r11,3
	ctx.r9.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// rlwinm r11,r8,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFF;
	// addi r7,r10,512
	ctx.r7.s64 = ctx.r10.s64 + 512;
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
	// clrlwi r11,r8,3
	ctx.r11.u64 = ctx.r8.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// rlwinm r8,r7,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r7,16384
	ctx.r7.s64 = 1073741824;
	// add r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// subf r4,r7,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r3,r7,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r7.s64;
	// bl 0x82e928e8
	ctx.lr = 0x82E89ED0;
	sub_82E928E8(ctx, base);
loc_82E89ED0:
	// lis r30,-20096
	ctx.r30.s64 = -1317011456;
	// lwz r3,14836(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14836);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82E89EE0;
	sub_822996C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,14840(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14840);
	// bl 0x822996c0
	ctx.lr = 0x82E89EEC;
	sub_822996C0(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,14836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14836, ctx.r29.u32);
	// stw r29,14840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14840, ctx.r29.u32);
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// bl 0x833b83e4
	ctx.lr = 0x82E89F08;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,10900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// bl 0x822996c0
	ctx.lr = 0x82E89F14;
	sub_822996C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,10896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// bl 0x822996c0
	ctx.lr = 0x82E89F20;
	sub_822996C0(ctx, base);
	// stw r29,10900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10900, ctx.r29.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r29,10896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10896, ctx.r29.u32);
	// bne cr6,0x82e89f38
	if (!ctx.cr6.eq) goto loc_82E89F38;
loc_82E89F30:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8a26c
	goto loc_82E8A26C;
loc_82E89F38:
	// lwz r25,4(r26)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r27,8(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r28,12(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// lwz r30,16(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// bne cr6,0x82e89f5c
	if (!ctx.cr6.eq) goto loc_82E89F5C;
	// lis r25,0
	ctx.r25.s64 = 0;
	// ori r25,r25,32768
	ctx.r25.u64 = ctx.r25.u64 | 32768;
loc_82E89F5C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82e89f68
	if (!ctx.cr6.eq) goto loc_82E89F68;
	// lis r28,32
	ctx.r28.s64 = 2097152;
loc_82E89F68:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e89f74
	if (!ctx.cr6.eq) goto loc_82E89F74;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82E89F74:
	// divwu r26,r28,r11
	ctx.r26.u32 = ctx.r28.u32 / ctx.r11.u32;
	// twllei r11,0
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82e89f98
	if (!ctx.cr6.eq) goto loc_82E89F98;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82299698
	ctx.lr = 0x82E89F90;
	sub_82299698(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r27,14836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14836, ctx.r27.u32);
loc_82E89F98:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82e89fc4
	if (!ctx.cr6.eq) goto loc_82E89FC4;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r4,-30848
	ctx.r4.s64 = -2021654528;
	// subfc r11,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwimi r4,r11,28,2,3
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r11.u32, 28) & 0x30000000) | (ctx.r4.u64 & 0xFFFFFFFFCFFFFFFF);
	// bl 0x82299698
	ctx.lr = 0x82E89FBC;
	sub_82299698(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r30,14840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14840, ctx.r30.u32);
loc_82E89FC4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82e8a264
	if (ctx.cr6.eq) goto loc_82E8A264;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82e8a264
	if (ctx.cr6.eq) goto loc_82E8A264;
	// lis r4,-23168
	ctx.r4.s64 = -1518338048;
	// li r3,96
	ctx.r3.s64 = 96;
	// bl 0x82299698
	ctx.lr = 0x82E89FE0;
	sub_82299698(ctx, base);
	// stw r3,10896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10896, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8a264
	if (ctx.cr0.eq) goto loc_82E8A264;
	// lis r4,-27264
	ctx.r4.s64 = -1786773504;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82299698
	ctx.lr = 0x82E89FF8;
	sub_82299698(ctx, base);
	// stw r3,10900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10900, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82e8a264
	if (ctx.cr0.eq) goto loc_82E8A264;
	// li r5,96
	ctx.r5.s64 = 96;
	// lwz r3,10896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82cb16f0
	ctx.lr = 0x82E8A014;
	sub_82CB16F0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,10900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// bl 0x82cb16f0
	ctx.lr = 0x82E8A024;
	sub_82CB16F0(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subfic r24,r11,28
	ctx.xer.ca = ctx.r11.u32 <= 28;
	ctx.r24.s64 = 28 - ctx.r11.s64;
	// bl 0x833b83d4
	ctx.lr = 0x82E8A034;
	__imp__MmGetPhysicalAddress(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x833b83c4
	ctx.lr = 0x82E8A03C;
	__imp__VdInitializeRingBuffer(ctx, base);
	// rlwinm r11,r25,23,9,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 23) & 0x7FFFFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r4,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r4.s64 = 31 - ctx.r11.s64;
	// cmplwi cr6,r4,19
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19, ctx.xer);
	// ble cr6,0x82e8a054
	if (!ctx.cr6.gt) goto loc_82E8A054;
	// li r4,19
	ctx.r4.s64 = 19;
loc_82E8A054:
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r11,r11,3
	ctx.r11.u64 = ctx.r11.u32 & 0x1FFFFFFF;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x833b83b4
	ctx.lr = 0x82E8A074;
	__imp__VdEnableRingBufferRPtrWriteBack(ctx, base);
	// rlwinm r11,r28,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFFC;
	// lis r9,2989
	ctx.r9.s64 = 195887104;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// ori r7,r9,61453
	ctx.r7.u64 = ctx.r9.u64 | 61453;
	// rlwinm r8,r25,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r26,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// stw r7,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r7.u32);
	// rlwinm r11,r28,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x3FFFFFFF;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,14908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14908, ctx.r9.u32);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r11,14936(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14936, ctx.r11.u32);
	// stw r27,14896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14896, ctx.r27.u32);
	// addi r9,r30,-4
	ctx.r9.s64 = ctx.r30.s64 + -4;
	// stw r30,14904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14904, ctx.r30.u32);
	// addi r7,r10,-160
	ctx.r7.s64 = ctx.r10.s64 + -160;
	// stw r30,14924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14924, ctx.r30.u32);
	// stw r30,14928(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14928, ctx.r30.u32);
	// stw r26,14912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14912, ctx.r26.u32);
	// stw r8,14900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14900, ctx.r8.u32);
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// stw r29,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r29.u32);
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r29,10952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10952, ctx.r29.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r7,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r7.u32);
	// stw r29,14916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14916, ctx.r29.u32);
	// bne cr6,0x82e8a0f8
	if (!ctx.cr6.eq) goto loc_82E8A0F8;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,10908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10908, ctx.r11.u32);
loc_82E8A0F8:
	// lwz r11,10908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10908);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,10896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// lwz r9,14920(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14920);
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,10896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10896);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x833b83e4
	ctx.lr = 0x82E8A12C;
	__imp__VdSetSystemCommandBufferGpuIdentifierAddress(ctx, base);
	// lis r10,-16367
	ctx.r10.s64 = -1072627712;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// ori r9,r10,18432
	ctx.r9.u64 = ctx.r10.u64 | 18432;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r8,1023
	ctx.r8.s64 = 1023;
	// addi r10,r11,27644
	ctx.r10.s64 = ctx.r11.s64 + 27644;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r11,8
	ctx.r11.s64 = 8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82E8A15C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82e8a15c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E8A15C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// li r11,2048
	ctx.r11.s64 = 2048;
	// stw r29,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r29.u32);
	// li r9,7
	ctx.r9.s64 = 7;
	// sth r10,10924(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10924, ctx.r10.u16);
	// sth r11,10926(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10926, ctx.r11.u16);
	// li r4,19
	ctx.r4.s64 = 19;
	// sth r11,130(r1)
	PPC_STORE_U16(ctx.r1.u32 + 130, ctx.r11.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r10,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r10.u16);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r29,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r29.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x833b83a4
	ctx.lr = 0x82E8A1B0;
	__imp__KiApcNormalRoutineNop(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e88200
	ctx.lr = 0x82E8A1C0;
	sub_82E88200(ctx, base);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e8a1d8
	if (!ctx.cr6.gt) goto loc_82E8A1D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E8A1D8;
	sub_82E898A8(ctx, base);
loc_82E8A1D8:
	// li r11,3330
	ctx.r11.s64 = 3330;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lis r11,3
	ctx.r11.s64 = 196608;
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// ori r11,r11,2562
	ctx.r11.u64 = ctx.r11.u64 | 2562;
	// lis r9,-16368
	ctx.r9.s64 = -1072693248;
	// lis r8,2032
	ctx.r8.s64 = 133169152;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// lis r10,16
	ctx.r10.s64 = 1048576;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,477
	ctx.r6.s64 = 477;
	// li r4,476
	ctx.r4.s64 = 476;
	// lis r30,2
	ctx.r30.s64 = 131072;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// ori r30,r30,55
	ctx.r30.u64 = ctx.r30.u64 | 55;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// lwz r10,10900(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r5.u32 = ea;
	// stw r5,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r5.u32);
	// bl 0x82e89ac8
	ctx.lr = 0x82E8A260;
	sub_82E89AC8(ctx, base);
	// b 0x82e89f30
	goto loc_82E89F30;
loc_82E8A264:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82E8A26C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82cb1128
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A274"))) PPC_WEAK_FUNC(sub_82E8A274);
PPC_FUNC_IMPL(__imp__sub_82E8A274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A278"))) PPC_WEAK_FUNC(sub_82E8A278);
PPC_FUNC_IMPL(__imp__sub_82E8A278) {
	PPC_FUNC_PROLOGUE();
	// addis r11,r3,-6184
	ctx.r11.s64 = ctx.r3.s64 + -405274624;
	// addic. r11,r11,-262
	ctx.xer.ca = ctx.r11.u32 > 261;
	ctx.r11.s64 = ctx.r11.s64 + -262;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a2a4
	if (ctx.cr0.eq) goto loc_82E8A2A4;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82e8a2a4
	if (ctx.cr6.eq) goto loc_82E8A2A4;
	// addis r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -268435456;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8a2a4
	if (ctx.cr0.eq) goto loc_82E8A2A4;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E8A2A4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A2AC"))) PPC_WEAK_FUNC(sub_82E8A2AC);
PPC_FUNC_IMPL(__imp__sub_82E8A2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A2B0"))) PPC_WEAK_FUNC(sub_82E8A2B0);
PPC_FUNC_IMPL(__imp__sub_82E8A2B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82e8a2d4
	if (ctx.cr6.lt) goto loc_82E8A2D4;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// beq cr6,0x82e8a2d4
	if (ctx.cr6.eq) goto loc_82E8A2D4;
	// cmplwi cr6,r3,6
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 6, ctx.xer);
	// beq cr6,0x82e8a2d4
	if (ctx.cr6.eq) goto loc_82E8A2D4;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E8A2D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A2DC"))) PPC_WEAK_FUNC(sub_82E8A2DC);
PPC_FUNC_IMPL(__imp__sub_82E8A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A2E0"))) PPC_WEAK_FUNC(sub_82E8A2E0);
PPC_FUNC_IMPL(__imp__sub_82E8A2E0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bgt cr6,0x82e8a330
	if (ctx.cr6.gt) goto loc_82E8A330;
	// beq cr6,0x82e8a35c
	if (ctx.cr6.eq) goto loc_82E8A35C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e8a328
	if (ctx.cr6.lt) goto loc_82E8A328;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82e8a35c
	if (!ctx.cr6.gt) goto loc_82E8A35C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82e8a328
	if (!ctx.cr6.gt) goto loc_82E8A328;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x82e8a35c
	if (!ctx.cr6.gt) goto loc_82E8A35C;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82e8a35c
	if (ctx.cr6.eq) goto loc_82E8A35C;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// ble cr6,0x82e8a328
	if (!ctx.cr6.gt) goto loc_82E8A328;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x82e8a35c
	if (!ctx.cr6.gt) goto loc_82E8A35C;
loc_82E8A328:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E8A330:
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x82e8a328
	if (ctx.cr6.lt) goto loc_82E8A328;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// ble cr6,0x82e8a35c
	if (!ctx.cr6.gt) goto loc_82E8A35C;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82e8a328
	if (!ctx.cr6.gt) goto loc_82E8A328;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// ble cr6,0x82e8a35c
	if (!ctx.cr6.gt) goto loc_82E8A35C;
	// addi r11,r11,-39
	ctx.r11.s64 = ctx.r11.s64 + -39;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x82e8a328
	if (ctx.cr6.gt) goto loc_82E8A328;
loc_82E8A35C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A364"))) PPC_WEAK_FUNC(sub_82E8A364);
PPC_FUNC_IMPL(__imp__sub_82E8A364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A368"))) PPC_WEAK_FUNC(sub_82E8A368);
PPC_FUNC_IMPL(__imp__sub_82E8A368) {
	PPC_FUNC_PROLOGUE();
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82e8a38c
	if (ctx.cr6.eq) goto loc_82E8A38C;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E8A38C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A394"))) PPC_WEAK_FUNC(sub_82E8A394);
PPC_FUNC_IMPL(__imp__sub_82E8A394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A398"))) PPC_WEAK_FUNC(sub_82E8A398);
PPC_FUNC_IMPL(__imp__sub_82E8A398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,10784
	ctx.r11.s64 = 706740224;
	// ori r11,r11,43704
	ctx.r11.u64 = ctx.r11.u64 | 43704;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82e8a43c
	if (ctx.cr6.gt) goto loc_82E8A43C;
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r11,r11,43686
	ctx.r11.u64 = ctx.r11.u64 | 43686;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82e8a404
	if (ctx.cr6.gt) goto loc_82E8A404;
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// addis r11,r3,-6688
	ctx.r11.s64 = ctx.r3.s64 + -438304768;
	// addic. r11,r11,-10934
	ctx.xer.ca = ctx.r11.u32 > 10933;
	ctx.r11.s64 = ctx.r11.s64 + -10934;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a4cc
	if (ctx.cr0.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,32676
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32676, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,32720
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32720, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,32932
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32932, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,32976
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32976, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,32682
	ctx.r10.u64 = ctx.r10.u64 | 32682;
loc_82E8A3FC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// b 0x82e8a4c4
	goto loc_82E8A4C4;
loc_82E8A404:
	// addis r11,r3,-6691
	ctx.r11.s64 = ctx.r3.s64 + -438501376;
	// addic. r11,r11,21664
	ctx.xer.ca = ctx.r11.u32 > 4294945631;
	ctx.r11.s64 = ctx.r11.s64 + 21664;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a4cc
	if (ctx.cr0.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// addis r11,r11,-4093
	ctx.r11.s64 = ctx.r11.s64 + -268238848;
	// addic. r11,r11,-24293
	ctx.xer.ca = ctx.r11.u32 > 24292;
	ctx.r11.s64 = ctx.r11.s64 + -24293;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a4cc
	if (ctx.cr0.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,321
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 321, ctx.xer);
	// b 0x82e8a4c4
	goto loc_82E8A4C4;
loc_82E8A43C:
	// lis r11,11554
	ctx.r11.s64 = 757202944;
	// ori r11,r11,43685
	ctx.r11.u64 = ctx.r11.u64 | 43685;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82e8a490
	if (ctx.cr6.gt) goto loc_82E8A490;
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// lis r11,10784
	ctx.r11.s64 = 706740224;
	// ori r11,r11,43960
	ctx.r11.u64 = ctx.r11.u64 | 43960;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// addis r11,r3,-11553
	ctx.r11.s64 = ctx.r3.s64 + -757137408;
	// addic. r11,r11,21942
	ctx.xer.ca = ctx.r11.u32 > 4294945353;
	ctx.r11.s64 = ctx.r11.s64 + 21942;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a4cc
	if (ctx.cr0.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,79
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 79, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,335
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 335, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,85
	ctx.r10.u64 = ctx.r10.u64 | 85;
	// b 0x82e8a3fc
	goto loc_82E8A3FC;
loc_82E8A490:
	// addis r11,r3,-11555
	ctx.r11.s64 = ctx.r3.s64 + -757268480;
	// addic. r11,r11,21601
	ctx.xer.ca = ctx.r11.u32 > 4294945694;
	ctx.r11.s64 = ctx.r11.s64 + 21601;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a4cc
	if (ctx.cr0.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// addis r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -8388608;
	// addic. r11,r11,321
	ctx.xer.ca = ctx.r11.u32 > 4294966974;
	ctx.r11.s64 = ctx.r11.s64 + 321;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a4cc
	if (ctx.cr0.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,70
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 70, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// beq cr6,0x82e8a4cc
	if (ctx.cr6.eq) goto loc_82E8A4CC;
	// cmplwi cr6,r11,326
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 326, ctx.xer);
loc_82E8A4C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E8A4CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A4D4"))) PPC_WEAK_FUNC(sub_82E8A4D4);
PPC_FUNC_IMPL(__imp__sub_82E8A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A4D8"))) PPC_WEAK_FUNC(sub_82E8A4D8);
PPC_FUNC_IMPL(__imp__sub_82E8A4D8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmpwi cr6,r11,22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 22, ctx.xer);
	// bgt cr6,0x82e8a528
	if (ctx.cr6.gt) goto loc_82E8A528;
	// beq cr6,0x82e8a554
	if (ctx.cr6.eq) goto loc_82E8A554;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82e8a520
	if (ctx.cr6.lt) goto loc_82E8A520;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x82e8a554
	if (!ctx.cr6.gt) goto loc_82E8A554;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// ble cr6,0x82e8a520
	if (!ctx.cr6.gt) goto loc_82E8A520;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// ble cr6,0x82e8a554
	if (!ctx.cr6.gt) goto loc_82E8A554;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// beq cr6,0x82e8a554
	if (ctx.cr6.eq) goto loc_82E8A554;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// ble cr6,0x82e8a520
	if (!ctx.cr6.gt) goto loc_82E8A520;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// ble cr6,0x82e8a554
	if (!ctx.cr6.gt) goto loc_82E8A554;
loc_82E8A520:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82E8A528:
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// blt cr6,0x82e8a520
	if (ctx.cr6.lt) goto loc_82E8A520;
	// cmpwi cr6,r11,29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 29, ctx.xer);
	// ble cr6,0x82e8a554
	if (!ctx.cr6.gt) goto loc_82E8A554;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// ble cr6,0x82e8a520
	if (!ctx.cr6.gt) goto loc_82E8A520;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// ble cr6,0x82e8a554
	if (!ctx.cr6.gt) goto loc_82E8A554;
	// addi r11,r11,-39
	ctx.r11.s64 = ctx.r11.s64 + -39;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bgt cr6,0x82e8a520
	if (ctx.cr6.gt) goto loc_82E8A520;
loc_82E8A554:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A55C"))) PPC_WEAK_FUNC(sub_82E8A55C);
PPC_FUNC_IMPL(__imp__sub_82E8A55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A560"))) PPC_WEAK_FUNC(sub_82E8A560);
PPC_FUNC_IMPL(__imp__sub_82E8A560) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r5,1104
	ctx.r5.s64 = 1104;
	// addi r4,r11,27680
	ctx.r4.s64 = ctx.r11.s64 + 27680;
	// bl 0x82cb1160
	ctx.lr = 0x82E8A580;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A594"))) PPC_WEAK_FUNC(sub_82E8A594);
PPC_FUNC_IMPL(__imp__sub_82E8A594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A598"))) PPC_WEAK_FUNC(sub_82E8A598);
PPC_FUNC_IMPL(__imp__sub_82E8A598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,28808
	ctx.r4.s64 = ctx.r11.s64 + 28808;
	// li r5,304
	ctx.r5.s64 = 304;
	// b 0x82cb1160
	sub_82CB1160(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A5AC"))) PPC_WEAK_FUNC(sub_82E8A5AC);
PPC_FUNC_IMPL(__imp__sub_82E8A5AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A5B0"))) PPC_WEAK_FUNC(sub_82E8A5B0);
PPC_FUNC_IMPL(__imp__sub_82E8A5B0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A5C4"))) PPC_WEAK_FUNC(sub_82E8A5C4);
PPC_FUNC_IMPL(__imp__sub_82E8A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A5C8"))) PPC_WEAK_FUNC(sub_82E8A5C8);
PPC_FUNC_IMPL(__imp__sub_82E8A5C8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A5E0"))) PPC_WEAK_FUNC(sub_82E8A5E0);
PPC_FUNC_IMPL(__imp__sub_82E8A5E0) {
	PPC_FUNC_PROLOGUE();
	// addis r3,r3,-16384
	ctx.r3.s64 = ctx.r3.s64 + -1073741824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A5E8"))) PPC_WEAK_FUNC(sub_82E8A5E8);
PPC_FUNC_IMPL(__imp__sub_82E8A5E8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r3,3
	ctx.r10.u64 = ctx.r3.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A604"))) PPC_WEAK_FUNC(sub_82E8A604);
PPC_FUNC_IMPL(__imp__sub_82E8A604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A608"))) PPC_WEAK_FUNC(sub_82E8A608);
PPC_FUNC_IMPL(__imp__sub_82E8A608) {
	PPC_FUNC_PROLOGUE();
	// srawi r3,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A610"))) PPC_WEAK_FUNC(sub_82E8A610);
PPC_FUNC_IMPL(__imp__sub_82E8A610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// srad r10,r9,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r10.s64 = ctx.r9.s64 >> temp.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// srd r3,r10,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A638"))) PPC_WEAK_FUNC(sub_82E8A638);
PPC_FUNC_IMPL(__imp__sub_82E8A638) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A64C"))) PPC_WEAK_FUNC(sub_82E8A64C);
PPC_FUNC_IMPL(__imp__sub_82E8A64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A650"))) PPC_WEAK_FUNC(sub_82E8A650);
PPC_FUNC_IMPL(__imp__sub_82E8A650) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// andc r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r5.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A664"))) PPC_WEAK_FUNC(sub_82E8A664);
PPC_FUNC_IMPL(__imp__sub_82E8A664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A668"))) PPC_WEAK_FUNC(sub_82E8A668);
PPC_FUNC_IMPL(__imp__sub_82E8A668) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A670"))) PPC_WEAK_FUNC(sub_82E8A670);
PPC_FUNC_IMPL(__imp__sub_82E8A670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82e892c8
	ctx.lr = 0x82E8A684;
	sub_82E892C8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A698"))) PPC_WEAK_FUNC(sub_82E8A698);
PPC_FUNC_IMPL(__imp__sub_82E8A698) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82e89a48
	sub_82E89A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8A6A0"))) PPC_WEAK_FUNC(sub_82E8A6A0);
PPC_FUNC_IMPL(__imp__sub_82E8A6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm. r11,r3,24,8,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8a6b0
	if (!ctx.cr0.eq) goto loc_82E8A6B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82e8a6f8
	goto loc_82E8A6F8;
loc_82E8A6B0:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8a6d4
	if (ctx.cr0.eq) goto loc_82E8A6D4;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r11,r11,3,9,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7FFFF8;
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// subfic r10,r10,127
	ctx.xer.ca = ctx.r10.u32 <= 127;
	ctx.r10.s64 = 127 - ctx.r10.s64;
	// rlwinm r10,r10,23,0,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0xFF800000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82e8a6f8
	goto loc_82E8A6F8;
loc_82E8A6D4:
	// rlwinm r10,r11,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r10,3
	ctx.r9.s64 = ctx.r10.s64 + 3;
	// subfic r10,r10,113
	ctx.xer.ca = ctx.r10.u32 <= 113;
	ctx.r10.s64 = 113 - ctx.r10.s64;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82E8A6F8:
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A710"))) PPC_WEAK_FUNC(sub_82E8A710);
PPC_FUNC_IMPL(__imp__sub_82E8A710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// srad r9,r8,r9
	temp.u64 = ctx.r9.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r8.s64 < 0) & (((ctx.r8.s64 >> temp.u64) << temp.u64) != ctx.r8.s64);
	ctx.r9.s64 = ctx.r8.s64 >> temp.u64;
	// ldx r8,r11,r3
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A74C"))) PPC_WEAK_FUNC(sub_82E8A74C);
PPC_FUNC_IMPL(__imp__sub_82E8A74C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A750"))) PPC_WEAK_FUNC(sub_82E8A750);
PPC_FUNC_IMPL(__imp__sub_82E8A750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 16;
	// addi r10,r5,-1
	ctx.r10.s64 = ctx.r5.s64 + -1;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r8,r4,56
	ctx.r8.u64 = ctx.r4.u64 & 0xFF;
	// srad r10,r9,r10
	temp.u64 = ctx.r10.u64 & 0x7F;
	if (temp.u64 > 0x3F) temp.u64 = 0x3F;
	ctx.xer.ca = (ctx.r9.s64 < 0) & (((ctx.r9.s64 >> temp.u64) << temp.u64) != ctx.r9.s64);
	ctx.r10.s64 = ctx.r9.s64 >> temp.u64;
	// ldx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r3.u32);
	// srd r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// stdx r10,r11,r3
	PPC_STORE_U64(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A784"))) PPC_WEAK_FUNC(sub_82E8A784);
PPC_FUNC_IMPL(__imp__sub_82E8A784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A788"))) PPC_WEAK_FUNC(sub_82E8A788);
PPC_FUNC_IMPL(__imp__sub_82E8A788) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A78C"))) PPC_WEAK_FUNC(sub_82E8A78C);
PPC_FUNC_IMPL(__imp__sub_82E8A78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A790"))) PPC_WEAK_FUNC(sub_82E8A790);
PPC_FUNC_IMPL(__imp__sub_82E8A790) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A794"))) PPC_WEAK_FUNC(sub_82E8A794);
PPC_FUNC_IMPL(__imp__sub_82E8A794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A798"))) PPC_WEAK_FUNC(sub_82E8A798);
PPC_FUNC_IMPL(__imp__sub_82E8A798) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// rlwinm r10,r3,1,25,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x7E;
	// addi r9,r11,25560
	ctx.r9.s64 = ctx.r11.s64 + 25560;
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// lhzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm. r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82e8a7dc
	if (ctx.cr0.eq) goto loc_82E8A7DC;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82e8a7dc
	if (ctx.cr6.eq) goto loc_82E8A7DC;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// beq cr6,0x82e8a7dc
	if (ctx.cr6.eq) goto loc_82E8A7DC;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bne cr6,0x82e8a7d4
	if (!ctx.cr6.eq) goto loc_82E8A7D4;
	// rlwinm. r11,r3,0,15,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1FE00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8a7dc
	if (!ctx.cr0.eq) goto loc_82E8A7DC;
loc_82E8A7D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82E8A7DC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A7E4"))) PPC_WEAK_FUNC(sub_82E8A7E4);
PPC_FUNC_IMPL(__imp__sub_82E8A7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A7E8"))) PPC_WEAK_FUNC(sub_82E8A7E8);
PPC_FUNC_IMPL(__imp__sub_82E8A7E8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,26
	ctx.r11.u64 = ctx.r3.u32 & 0x3F;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82e8a800
	if (ctx.cr6.eq) goto loc_82E8A800;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82E8A800:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A808"))) PPC_WEAK_FUNC(sub_82E8A808);
PPC_FUNC_IMPL(__imp__sub_82E8A808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82e8a828
	if (ctx.cr6.eq) goto loc_82E8A828;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2155
	ctx.r3.u64 = ctx.r3.u64 | 2155;
	// b 0x82e8a85c
	goto loc_82E8A85C;
loc_82E8A828:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82e8a83c
	if (!ctx.cr6.eq) goto loc_82E8A83C;
loc_82E8A830:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2154
	ctx.r3.u64 = ctx.r3.u64 | 2154;
	// b 0x82e8a85c
	goto loc_82E8A85C;
loc_82E8A83C:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82e8a798
	ctx.lr = 0x82E8A844;
	sub_82E8A798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e8a830
	if (ctx.cr0.eq) goto loc_82E8A830;
	// xor r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r6.u64;
	// clrlwi. r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8a830
	if (!ctx.cr0.eq) goto loc_82E8A830;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8A85C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8A86C"))) PPC_WEAK_FUNC(sub_82E8A86C);
PPC_FUNC_IMPL(__imp__sub_82E8A86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8A870"))) PPC_WEAK_FUNC(sub_82E8A870);
PPC_FUNC_IMPL(__imp__sub_82E8A870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82e8a908
	if (ctx.cr6.eq) goto loc_82E8A908;
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82e8a908
	if (ctx.cr6.eq) goto loc_82E8A908;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82e8a8a0
	if (ctx.cr6.eq) goto loc_82E8A8A0;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2155
	ctx.r3.u64 = ctx.r3.u64 | 2155;
	// b 0x82e8a910
	goto loc_82E8A910;
loc_82E8A8A0:
	// rlwinm. r11,r6,0,23,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1F8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8a908
	if (!ctx.cr0.eq) goto loc_82E8A908;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e8a798
	ctx.lr = 0x82E8A8B0;
	sub_82E8A798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8a8c4
	if (!ctx.cr0.eq) goto loc_82E8A8C4;
loc_82E8A8B8:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2154
	ctx.r3.u64 = ctx.r3.u64 | 2154;
	// b 0x82e8a910
	goto loc_82E8A910;
loc_82E8A8C4:
	// cmplwi cr6,r8,2
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2, ctx.xer);
	// blt cr6,0x82e8a908
	if (ctx.cr6.lt) goto loc_82E8A908;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// beq cr6,0x82e8a908
	if (ctx.cr6.eq) goto loc_82E8A908;
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// beq cr6,0x82e8a908
	if (ctx.cr6.eq) goto loc_82E8A908;
	// cmplwi cr6,r8,8
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 8, ctx.xer);
	// beq cr6,0x82e8a908
	if (ctx.cr6.eq) goto loc_82E8A908;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82e8aa14
	if (ctx.cr6.eq) goto loc_82E8AA14;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x82e8a93c
	if (ctx.cr6.eq) goto loc_82E8A93C;
	// cmpwi cr6,r7,16
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16, ctx.xer);
	// beq cr6,0x82e8a920
	if (ctx.cr6.eq) goto loc_82E8A920;
	// ble cr6,0x82e8a908
	if (!ctx.cr6.gt) goto loc_82E8A908;
	// cmpwi cr6,r7,20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 20, ctx.xer);
	// ble cr6,0x82e8a928
	if (!ctx.cr6.gt) goto loc_82E8A928;
loc_82E8A908:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
loc_82E8A910:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82E8A920:
	// rlwinm. r11,r6,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8a908
	if (!ctx.cr0.eq) goto loc_82E8A908;
loc_82E8A928:
	// lis r12,12
	ctx.r12.s64 = 786432;
	// ori r12,r12,49155
	ctx.r12.u64 = ctx.r12.u64 | 49155;
	// and. r11,r6,r12
	ctx.r11.u64 = ctx.r6.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8aa38
	if (ctx.cr0.eq) goto loc_82E8AA38;
	// b 0x82e8a8b8
	goto loc_82E8A8B8;
loc_82E8A93C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// rlwinm. r11,r6,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 49152;
	// bne 0x82e8a908
	if (!ctx.cr0.eq) goto loc_82E8A908;
	// clrlwi. r11,r6,30
	ctx.r11.u64 = ctx.r6.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a9cc
	if (ctx.cr0.eq) goto loc_82E8A9CC;
	// clrlwi. r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a9a0
	if (ctx.cr0.eq) goto loc_82E8A9A0;
	// rlwinm. r11,r6,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a988
	if (ctx.cr0.eq) goto loc_82E8A988;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82e8a998
	if (ctx.cr6.eq) goto loc_82E8A998;
	// lis r11,10280
	ctx.r11.s64 = 673710080;
	// ori r11,r11,390
	ctx.r11.u64 = ctx.r11.u64 | 390;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82e8a998
	if (ctx.cr6.eq) goto loc_82E8A998;
	// b 0x82e8a8b8
	goto loc_82E8A8B8;
loc_82E8A988:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82e8a798
	ctx.lr = 0x82E8A990;
	sub_82E8A798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e8a8b8
	if (ctx.cr0.eq) goto loc_82E8A8B8;
loc_82E8A998:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,49154
	ctx.r10.u64 = ctx.r10.u64 | 49154;
loc_82E8A9A0:
	// rlwinm. r11,r6,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a9c4
	if (ctx.cr0.eq) goto loc_82E8A9C4;
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82e8a9bc
	if (ctx.cr6.eq) goto loc_82E8A9BC;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x82e8a8b8
	if (!ctx.cr6.eq) goto loc_82E8A8B8;
loc_82E8A9BC:
	// oris r10,r10,12
	ctx.r10.u64 = ctx.r10.u64 | 786432;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
loc_82E8A9C4:
	// oris r11,r10,3
	ctx.r11.u64 = ctx.r10.u64 | 196608;
	// b 0x82e8aa04
	goto loc_82E8AA04;
loc_82E8A9CC:
	// rlwinm. r11,r6,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a9e4
	if (ctx.cr0.eq) goto loc_82E8A9E4;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82e8a4d8
	ctx.lr = 0x82E8A9DC;
	sub_82E8A4D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e8a8b8
	if (ctx.cr0.eq) goto loc_82E8A8B8;
loc_82E8A9E4:
	// rlwinm. r11,r6,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8a9fc
	if (ctx.cr0.eq) goto loc_82E8A9FC;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82e8a2e0
	ctx.lr = 0x82E8A9F4;
	sub_82E8A2E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e8a8b8
	if (ctx.cr0.eq) goto loc_82E8A8B8;
loc_82E8A9FC:
	// lis r11,12
	ctx.r11.s64 = 786432;
	// ori r11,r11,49152
	ctx.r11.u64 = ctx.r11.u64 | 49152;
loc_82E8AA04:
	// and. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8a8b8
	if (!ctx.cr0.eq) goto loc_82E8A8B8;
loc_82E8AA0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82e8a910
	goto loc_82E8A910;
loc_82E8AA14:
	// clrlwi r11,r6,12
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFFF;
	// rlwinm. r11,r11,0,30,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFC0003;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8a8b8
	if (!ctx.cr0.eq) goto loc_82E8A8B8;
	// rlwinm. r11,r6,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8aa38
	if (ctx.cr0.eq) goto loc_82E8AA38;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82e8a398
	ctx.lr = 0x82E8AA30;
	sub_82E8A398(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e8a8b8
	if (ctx.cr0.eq) goto loc_82E8A8B8;
loc_82E8AA38:
	// rlwinm. r11,r6,0,14,14
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8aa50
	if (ctx.cr0.eq) goto loc_82E8AA50;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82e8a4d8
	ctx.lr = 0x82E8AA48;
	sub_82E8A4D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e8a8b8
	if (ctx.cr0.eq) goto loc_82E8A8B8;
loc_82E8AA50:
	// rlwinm. r11,r6,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8aa0c
	if (ctx.cr0.eq) goto loc_82E8AA0C;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82e8a2e0
	ctx.lr = 0x82E8AA60;
	sub_82E8A2E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8aa0c
	if (!ctx.cr0.eq) goto loc_82E8AA0C;
	// b 0x82e8a8b8
	goto loc_82E8A8B8;
}

__attribute__((alias("__imp__sub_82E8AA6C"))) PPC_WEAK_FUNC(sub_82E8AA6C);
PPC_FUNC_IMPL(__imp__sub_82E8AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8AA70"))) PPC_WEAK_FUNC(sub_82E8AA70);
PPC_FUNC_IMPL(__imp__sub_82E8AA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82e8aa90
	if (ctx.cr6.eq) goto loc_82E8AA90;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2155
	ctx.r3.u64 = ctx.r3.u64 | 2155;
	// b 0x82e8aae4
	goto loc_82E8AAE4;
loc_82E8AA90:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82e8aaa4
	if (ctx.cr6.eq) goto loc_82E8AAA4;
loc_82E8AA98:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2154
	ctx.r3.u64 = ctx.r3.u64 | 2154;
	// b 0x82e8aae4
	goto loc_82E8AAE4;
loc_82E8AAA4:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e8a798
	ctx.lr = 0x82E8AAAC;
	sub_82E8A798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8aac8
	if (!ctx.cr0.eq) goto loc_82E8AAC8;
	// clrlwi r11,r5,26
	ctx.r11.u64 = ctx.r5.u32 & 0x3F;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82e8aac8
	if (ctx.cr6.eq) goto loc_82E8AAC8;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x82e8aa98
	if (!ctx.cr6.eq) goto loc_82E8AA98;
loc_82E8AAC8:
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x82e8aa98
	if (!ctx.cr6.lt) goto loc_82E8AA98;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82e8aae0
	if (ctx.cr6.eq) goto loc_82E8AAE0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
loc_82E8AAE0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8AAE4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8AAF4"))) PPC_WEAK_FUNC(sub_82E8AAF4);
PPC_FUNC_IMPL(__imp__sub_82E8AAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8AAF8"))) PPC_WEAK_FUNC(sub_82E8AAF8);
PPC_FUNC_IMPL(__imp__sub_82E8AAF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82e8ab18
	if (ctx.cr6.eq) goto loc_82E8AB18;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2155
	ctx.r3.u64 = ctx.r3.u64 | 2155;
	// b 0x82e8ab5c
	goto loc_82E8AB5C;
loc_82E8AB18:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e8a798
	ctx.lr = 0x82E8AB20;
	sub_82E8A798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8ab34
	if (!ctx.cr0.eq) goto loc_82E8AB34;
loc_82E8AB28:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2156
	ctx.r3.u64 = ctx.r3.u64 | 2156;
	// b 0x82e8ab5c
	goto loc_82E8AB5C;
loc_82E8AB34:
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82e8a798
	ctx.lr = 0x82E8AB3C;
	sub_82E8A798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82e8ab28
	if (ctx.cr0.eq) goto loc_82E8AB28;
	// clrlwi r11,r7,26
	ctx.r11.u64 = ctx.r7.u32 & 0x3F;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// beq cr6,0x82e8ab58
	if (ctx.cr6.eq) goto loc_82E8AB58;
	// cmplwi cr6,r11,23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 23, ctx.xer);
	// bne cr6,0x82e8ab28
	if (!ctx.cr6.eq) goto loc_82E8AB28;
loc_82E8AB58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8AB5C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8AB6C"))) PPC_WEAK_FUNC(sub_82E8AB6C);
PPC_FUNC_IMPL(__imp__sub_82E8AB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8AB70"))) PPC_WEAK_FUNC(sub_82E8AB70);
PPC_FUNC_IMPL(__imp__sub_82E8AB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82e8ab90
	if (ctx.cr6.eq) goto loc_82E8AB90;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2155
	ctx.r3.u64 = ctx.r3.u64 | 2155;
	// b 0x82e8abd8
	goto loc_82E8ABD8;
loc_82E8AB90:
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82e8a798
	ctx.lr = 0x82E8AB98;
	sub_82E8A798(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82e8abac
	if (!ctx.cr0.eq) goto loc_82E8ABAC;
loc_82E8ABA0:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2154
	ctx.r3.u64 = ctx.r3.u64 | 2154;
	// b 0x82e8abd8
	goto loc_82E8ABD8;
loc_82E8ABAC:
	// addis r11,r6,-6184
	ctx.r11.s64 = ctx.r6.s64 + -405274624;
	// addic. r11,r11,-262
	ctx.xer.ca = ctx.r11.u32 > 261;
	ctx.r11.s64 = ctx.r11.s64 + -262;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8abd4
	if (ctx.cr0.eq) goto loc_82E8ABD4;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82e8abd4
	if (ctx.cr6.eq) goto loc_82E8ABD4;
	// addis r11,r11,-4096
	ctx.r11.s64 = ctx.r11.s64 + -268435456;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8abd4
	if (ctx.cr0.eq) goto loc_82E8ABD4;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bne cr6,0x82e8aba0
	if (!ctx.cr6.eq) goto loc_82E8ABA0;
loc_82E8ABD4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8ABD8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8ABE8"))) PPC_WEAK_FUNC(sub_82E8ABE8);
PPC_FUNC_IMPL(__imp__sub_82E8ABE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82e8ac0c
	if (ctx.cr6.eq) goto loc_82E8AC0C;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2155
	ctx.r3.u64 = ctx.r3.u64 | 2155;
	// b 0x82e8ac20
	goto loc_82E8AC20;
loc_82E8AC0C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r5,304
	ctx.r5.s64 = 304;
	// addi r4,r11,28808
	ctx.r4.s64 = ctx.r11.s64 + 28808;
	// bl 0x82cb1160
	ctx.lr = 0x82E8AC1C;
	sub_82CB1160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8AC20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8AC30"))) PPC_WEAK_FUNC(sub_82E8AC30);
PPC_FUNC_IMPL(__imp__sub_82E8AC30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,13544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13544);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// lwz r11,13548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13548);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// lwz r11,21556(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21556);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r11.u32);
	// lwz r11,13552(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13552);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8AC54"))) PPC_WEAK_FUNC(sub_82E8AC54);
PPC_FUNC_IMPL(__imp__sub_82E8AC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8AC58"))) PPC_WEAK_FUNC(sub_82E8AC58);
PPC_FUNC_IMPL(__imp__sub_82E8AC58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lbz r11,10940(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10940);
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne 0x82e8ac80
	if (!ctx.cr0.eq) goto loc_82E8AC80;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E8AC80:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,23932(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 23932);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8AC90"))) PPC_WEAK_FUNC(sub_82E8AC90);
PPC_FUNC_IMPL(__imp__sub_82E8AC90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,13652(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8acb0
	if (!ctx.cr6.eq) goto loc_82E8ACB0;
	// lwz r10,13548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13548);
	// b 0x82e8acb8
	goto loc_82E8ACB8;
loc_82E8ACB0:
	// lwz r10,13644(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13644);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82E8ACB8:
	// lis r11,32712
	ctx.r11.s64 = 2143813632;
	// lwz r9,25988(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25988);
	// lwz r8,25904(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25904);
	// clrlwi. r11,r9,20
	ctx.r11.u64 = ctx.r9.u32 & 0xFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r9,r8,18
	ctx.r9.u64 = ctx.r8.u32 & 0x3FFF;
	// bne 0x82e8acd4
	if (!ctx.cr0.eq) goto loc_82E8ACD4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82E8ACD4:
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// twllei r11,0
	// divwu r11,r9,r11
	ctx.r11.u32 = ctx.r9.u32 / ctx.r11.u32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82e8acf4
	if (ctx.cr6.lt) goto loc_82E8ACF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82E8ACF4:
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8ACFC"))) PPC_WEAK_FUNC(sub_82E8ACFC);
PPC_FUNC_IMPL(__imp__sub_82E8ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8AD00"))) PPC_WEAK_FUNC(sub_82E8AD00);
PPC_FUNC_IMPL(__imp__sub_82E8AD00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E8AD08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwinm r9,r5,6,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x40;
	// clrlwi r28,r30,26
	ctx.r28.u64 = ctx.r30.u32 & 0x3F;
	// rlwinm r10,r5,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// lbz r11,12121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12121);
	// or r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 | ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r11,12121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12121, ctx.r11.u8);
	// or r11,r9,r28
	ctx.r11.u64 = ctx.r9.u64 | ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stb r10,12056(r8)
	PPC_STORE_U8(ctx.r8.u32 + 12056, ctx.r10.u8);
	// ori r29,r11,1
	ctx.r29.u64 = ctx.r11.u64 | 1;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e8ad60
	if (!ctx.cr6.gt) goto loc_82E8AD60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E8AD60;
	sub_82E898A8(ctx, base);
loc_82E8AD60:
	// stw r29,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r29.u32);
	// li r11,8851
	ctx.r11.s64 = 8851;
	// li r12,-2
	ctx.r12.s64 = -2;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r30,32
	ctx.r10.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// sld r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r10.u8 & 0x7F));
	// stwu r29,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r3.u32 = ea;
	// ld r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// std r9,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r9.u64);
	// ld r9,12048(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12048);
	// and r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// bne cr6,0x82e8adc0
	if (!ctx.cr6.eq) goto loc_82E8ADC0;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r9,r9,8960
	ctx.r9.u64 = ctx.r9.u64 | 8960;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// ld r9,12048(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12048);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// std r10,12048(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12048, ctx.r10.u64);
loc_82E8ADC0:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8ADCC"))) PPC_WEAK_FUNC(sub_82E8ADCC);
PPC_FUNC_IMPL(__imp__sub_82E8ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8ADD0"))) PPC_WEAK_FUNC(sub_82E8ADD0);
PPC_FUNC_IMPL(__imp__sub_82E8ADD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E8ADD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lbz r11,12121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12121);
	// li r30,1
	ctx.r30.s64 = 1;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// lbz r10,12056(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12056);
	// stb r11,12121(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12121, ctx.r11.u8);
	// clrlwi r29,r10,26
	ctx.r29.u64 = ctx.r10.u32 & 0x3F;
	// bne 0x82e8ae4c
	if (!ctx.cr0.eq) goto loc_82E8AE4C;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e8ae1c
	if (!ctx.cr6.gt) goto loc_82E8AE1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E8AE1C;
	sub_82E898A8(ctx, base);
loc_82E8AE1C:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// ori r11,r11,8960
	ctx.r11.u64 = ctx.r11.u64 | 8960;
	// rlwimi r10,r30,8,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 8) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// sld r11,r30,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r30.u64 << (ctx.r11.u8 & 0x7F));
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// ld r10,12048(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 12048);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// std r11,12048(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12048, ctx.r11.u64);
loc_82E8AE4C:
	// lbz r11,12121(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12121);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82e8ae6c
	if (ctx.cr0.eq) goto loc_82E8AE6C;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r11,12056(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 12056);
	// rlwimi r30,r11,1,24,30
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0xFE) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r30,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r30.u32);
	// b 0x82e8ae74
	goto loc_82E8AE74;
loc_82E8AE6C:
	// rlwinm r11,r29,1,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x7E;
	// stw r11,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r11.u32);
loc_82E8AE74:
	// li r12,1
	ctx.r12.s64 = 1;
	// ld r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rldicr r12,r12,35,63
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	ctx.r11.u64 = ctx.r11.u64 | ctx.r12.u64;
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8AE90"))) PPC_WEAK_FUNC(sub_82E8AE90);
PPC_FUNC_IMPL(__imp__sub_82E8AE90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r11,12187(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// add r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r11,12187(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12187, ctx.r11.u8);
	// stb r4,12122(r9)
	PPC_STORE_U8(ctx.r9.u32 + 12122, ctx.r4.u8);
	// lwz r11,10932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,10936(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10936);
	// bne cr6,0x82e8afc0
	if (!ctx.cr6.eq) goto loc_82E8AFC0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8afc0
	if (!ctx.cr6.eq) goto loc_82E8AFC0;
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// li r9,0
	ctx.r9.s64 = 0;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r9.u32);
	// bne 0x82e8afa8
	if (!ctx.cr0.eq) goto loc_82E8AFA8;
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8afa8
	if (!ctx.cr0.eq) goto loc_82E8AFA8;
	// lbz r11,12187(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82e8afa8
	if (!ctx.cr0.eq) goto loc_82E8AFA8;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8af0c
	if (ctx.cr0.eq) goto loc_82E8AF0C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e8af9c
	goto loc_82E8AF9C;
loc_82E8AF0C:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8af94
	if (ctx.cr0.eq) goto loc_82E8AF94;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r8,12728(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8af2c
	if (ctx.cr6.eq) goto loc_82E8AF2C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8af94
	if (!ctx.cr6.eq) goto loc_82E8AF94;
loc_82E8AF2C:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r8,12732(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8af44
	if (ctx.cr6.eq) goto loc_82E8AF44;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8af94
	if (!ctx.cr6.eq) goto loc_82E8AF94;
loc_82E8AF44:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r8,12736(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8af5c
	if (ctx.cr6.eq) goto loc_82E8AF5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8af94
	if (!ctx.cr6.eq) goto loc_82E8AF94;
loc_82E8AF5C:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r8,12740(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8af74
	if (ctx.cr6.eq) goto loc_82E8AF74;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8af94
	if (!ctx.cr6.eq) goto loc_82E8AF94;
loc_82E8AF74:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r8,12744(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8af8c
	if (ctx.cr6.eq) goto loc_82E8AF8C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8af94
	if (!ctx.cr6.eq) goto loc_82E8AF94;
loc_82E8AF8C:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e8af98
	goto loc_82E8AF98;
loc_82E8AF94:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82E8AF98:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E8AF9C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82e8afac
	if (!ctx.cr0.eq) goto loc_82E8AFAC;
loc_82E8AFA8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82E8AFAC:
	// rlwimi r11,r10,0,24,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r9,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r9.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r10.u32);
	// b 0x82e8afd8
	goto loc_82E8AFD8;
loc_82E8AFC0:
	// lbz r9,10940(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r11.u32);
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r8.u32);
	// stw r10,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r10.u32);
loc_82E8AFD8:
	// stb r11,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e8aff4
	if (!ctx.cr6.gt) goto loc_82E8AFF4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E8AFF4;
	sub_82E898A8(ctx, base);
loc_82E8AFF4:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12708);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12712);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B034"))) PPC_WEAK_FUNC(sub_82E8B034);
PPC_FUNC_IMPL(__imp__sub_82E8B034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B038"))) PPC_WEAK_FUNC(sub_82E8B038);
PPC_FUNC_IMPL(__imp__sub_82E8B038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r10,12187(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 12187);
	// lwz r11,10932(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10932);
	// addi r9,r10,255
	ctx.r9.s64 = ctx.r10.s64 + 255;
	// lwz r10,10936(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10936);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// stb r9,12187(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12187, ctx.r9.u8);
	// bne cr6,0x82e8b15c
	if (!ctx.cr6.eq) goto loc_82E8B15C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e8b15c
	if (!ctx.cr6.eq) goto loc_82E8B15C;
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm. r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r8.u32);
	// bne 0x82e8b144
	if (!ctx.cr0.eq) goto loc_82E8B144;
	// rlwinm. r11,r10,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8b144
	if (!ctx.cr0.eq) goto loc_82E8B144;
	// clrlwi. r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82e8b144
	if (!ctx.cr0.eq) goto loc_82E8B144;
	// rlwinm. r11,r10,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b0a8
	if (ctx.cr0.eq) goto loc_82E8B0A8;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e8b138
	goto loc_82E8B138;
loc_82E8B0A8:
	// rlwinm. r11,r10,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82e8b130
	if (ctx.cr0.eq) goto loc_82E8B130;
	// lwz r11,12440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12440);
	// lwz r9,12728(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12728);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8b0c8
	if (ctx.cr6.eq) goto loc_82E8B0C8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b130
	if (!ctx.cr6.eq) goto loc_82E8B130;
loc_82E8B0C8:
	// lwz r11,12444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12444);
	// lwz r9,12732(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12732);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8b0e0
	if (ctx.cr6.eq) goto loc_82E8B0E0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b130
	if (!ctx.cr6.eq) goto loc_82E8B130;
loc_82E8B0E0:
	// lwz r11,12448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12448);
	// lwz r9,12736(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12736);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8b0f8
	if (ctx.cr6.eq) goto loc_82E8B0F8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b130
	if (!ctx.cr6.eq) goto loc_82E8B130;
loc_82E8B0F8:
	// lwz r11,12452(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12452);
	// lwz r9,12740(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12740);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8b110
	if (ctx.cr6.eq) goto loc_82E8B110;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b130
	if (!ctx.cr6.eq) goto loc_82E8B130;
loc_82E8B110:
	// lwz r11,12456(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12456);
	// lwz r9,12744(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12744);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e8b128
	if (ctx.cr6.eq) goto loc_82E8B128;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b130
	if (!ctx.cr6.eq) goto loc_82E8B130;
loc_82E8B128:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82e8b134
	goto loc_82E8B134;
loc_82E8B130:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82E8B134:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_82E8B138:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82e8b148
	if (!ctx.cr0.eq) goto loc_82E8B148;
loc_82E8B144:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82E8B148:
	// rlwimi r11,r10,0,24,30
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFE) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF01);
	// stw r8,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r8.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r10.u32);
	// b 0x82e8b174
	goto loc_82E8B174;
loc_82E8B15C:
	// lbz r9,10940(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10940);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,12708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12708, ctx.r11.u32);
	// rlwinm r11,r9,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,12716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12716, ctx.r8.u32);
	// stw r10,12712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12712, ctx.r10.u32);
loc_82E8B174:
	// stb r11,10940(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10940, ctx.r11.u8);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82e8b190
	if (!ctx.cr6.gt) goto loc_82E8B190;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e898a8
	ctx.lr = 0x82E8B190;
	sub_82E898A8(ctx, base);
loc_82E8B190:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	ctx.r11.u64 = ctx.r11.u64 | 24576;
	// ori r10,r10,24832
	ctx.r10.u64 = ctx.r10.u64 | 24832;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12708(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12708);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12712);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B1D0"))) PPC_WEAK_FUNC(sub_82E8B1D0);
PPC_FUNC_IMPL(__imp__sub_82E8B1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10ec
	ctx.lr = 0x82E8B1D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,21560
	ctx.r30.s64 = ctx.r3.s64 + 21560;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82e8b258
	if (ctx.cr6.eq) goto loc_82E8B258;
	// b 0x82e8b24c
	goto loc_82E8B24C;
loc_82E8B1F0:
	// lwz r31,12(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82e8b248
	if (!ctx.cr6.eq) goto loc_82E8B248;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r10,12,20,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addis r3,r11,-16384
	ctx.r3.s64 = ctx.r11.s64 + -1073741824;
	// addi r4,r3,4096
	ctx.r4.s64 = ctx.r3.s64 + 4096;
	// bl 0x82e928e8
	ctx.lr = 0x82E8B224;
	sub_82E928E8(ctx, base);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822996c0
	ctx.lr = 0x82E8B230;
	sub_822996C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// bl 0x822996c0
	ctx.lr = 0x82E8B244;
	sub_822996C0(ctx, base);
	// b 0x82e8b24c
	goto loc_82E8B24C;
loc_82E8B248:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82E8B24C:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b1f0
	if (!ctx.cr6.eq) goto loc_82E8B1F0;
loc_82E8B258:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82cb113c
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B260"))) PPC_WEAK_FUNC(sub_82E8B260);
PPC_FUNC_IMPL(__imp__sub_82E8B260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E8B268;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r3,21560
	ctx.r31.s64 = ctx.r3.s64 + 21560;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,21560(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21560);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e8b308
	if (!ctx.cr6.eq) goto loc_82E8B308;
loc_82E8B28C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e8b308
	if (!ctx.cr6.eq) goto loc_82E8B308;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b2b8
	if (ctx.cr6.eq) goto loc_82E8B2B8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82e8b28c
	if (ctx.cr6.eq) goto loc_82E8B28C;
	// b 0x82e8b308
	goto loc_82E8B308;
loc_82E8B2B8:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,6016
	ctx.r3.s64 = 6016;
	// bl 0x82299698
	ctx.lr = 0x82E8B2C4;
	sub_82299698(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82e8b2d8
	if (!ctx.cr0.eq) goto loc_82E8B2D8;
loc_82E8B2CC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82e8b37c
	goto loc_82E8B37C;
loc_82E8B2D8:
	// lis r4,-17280
	ctx.r4.s64 = -1132462080;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82299698
	ctx.lr = 0x82E8B2E4;
	sub_82299698(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82e8b300
	if (!ctx.cr0.eq) goto loc_82E8B300;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822996c0
	ctx.lr = 0x82E8B2FC;
	sub_822996C0(ctx, base);
	// b 0x82e8b2cc
	goto loc_82E8B2CC;
loc_82E8B300:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82E8B308:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E8B30C:
	// lbzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bne cr6,0x82e8b324
	if (!ctx.cr6.eq) goto loc_82E8B324;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82e8b30c
	if (ctx.cr6.lt) goto loc_82E8B30C;
loc_82E8B324:
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// li r10,0
	ctx.r10.s64 = 0;
loc_82E8B32C:
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// srw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r8.u8 & 0x3F));
	// clrlwi. r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82e8b348
	if (ctx.cr0.eq) goto loc_82E8B348;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82e8b32c
	if (ctx.cr6.lt) goto loc_82E8B32C;
loc_82E8B348:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r8,r8,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r31.u32);
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// stbx r9,r11,r31
	PPC_STORE_U8(ctx.r11.u32 + ctx.r31.u32, ctx.r9.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82E8B37C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B384"))) PPC_WEAK_FUNC(sub_82E8B384);
PPC_FUNC_IMPL(__imp__sub_82E8B384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B388"))) PPC_WEAK_FUNC(sub_82E8B388);
PPC_FUNC_IMPL(__imp__sub_82E8B388) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B39C"))) PPC_WEAK_FUNC(sub_82E8B39C);
PPC_FUNC_IMPL(__imp__sub_82E8B39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B3A0"))) PPC_WEAK_FUNC(sub_82E8B3A0);
PPC_FUNC_IMPL(__imp__sub_82E8B3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82cb10e8
	ctx.lr = 0x82E8B3A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r3,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r3.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bne 0x82e8b504
	if (!ctx.cr0.eq) goto loc_82E8B504;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82e8b45c
	if (!ctx.cr6.eq) goto loc_82E8B45C;
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82e8b4e8
	if (!ctx.cr6.gt) goto loc_82E8B4E8;
	// addi r30,r31,88
	ctx.r30.s64 = ctx.r31.s64 + 88;
loc_82E8B3E4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,-60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -60);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b444
	if (!ctx.cr6.eq) goto loc_82E8B444;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b444
	if (!ctx.cr6.eq) goto loc_82E8B444;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8b1d0
	ctx.lr = 0x82E8B444;
	sub_82E8B1D0(ctx, base);
loc_82E8B444:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82e8b3e4
	if (ctx.cr6.lt) goto loc_82E8B3E4;
	// b 0x82e8b4e8
	goto loc_82E8B4E8;
loc_82E8B45C:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82e8b4e8
	if (!ctx.cr6.eq) goto loc_82E8B4E8;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e8b4a4
	if (ctx.cr6.eq) goto loc_82E8B4A4;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r9,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r9,r10,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r8.u32);
	// andc r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 & ~ctx.r11.u64;
	// stbx r11,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u8);
loc_82E8B4A4:
	// lwz r4,88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b4c8
	if (!ctx.cr6.eq) goto loc_82E8B4C8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e8b4c8
	if (!ctx.cr6.eq) goto loc_82E8B4C8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8b1d0
	ctx.lr = 0x82E8B4C8;
	sub_82E8B1D0(ctx, base);
loc_82E8B4C8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82e8b4e8
	if (!ctx.cr6.eq) goto loc_82E8B4E8;
	// lbz r11,10943(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 10943);
	// clrlwi r11,r11,25
	ctx.r11.u64 = ctx.r11.u32 & 0x7F;
	// stb r11,10943(r28)
	PPC_STORE_U8(ctx.r28.u32 + 10943, ctx.r11.u8);
loc_82E8B4E8:
	// lis r11,30840
	ctx.r11.s64 = 2021130240;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// ori r11,r11,30840
	ctx.r11.u64 = ctx.r11.u64 | 30840;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x822996c0
	ctx.lr = 0x82E8B500;
	sub_822996C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E8B504:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82cb1138
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E8B50C"))) PPC_WEAK_FUNC(sub_82E8B50C);
PPC_FUNC_IMPL(__imp__sub_82E8B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B510"))) PPC_WEAK_FUNC(sub_82E8B510);
PPC_FUNC_IMPL(__imp__sub_82E8B510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82e68718
	ctx.lr = 0x82E8B534;
	sub_82E68718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B554"))) PPC_WEAK_FUNC(sub_82E8B554);
PPC_FUNC_IMPL(__imp__sub_82E8B554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E8B558"))) PPC_WEAK_FUNC(sub_82E8B558);
PPC_FUNC_IMPL(__imp__sub_82E8B558) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E8B560"))) PPC_WEAK_FUNC(sub_82E8B560);
PPC_FUNC_IMPL(__imp__sub_82E8B560) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82e8b588
	if (ctx.cr6.eq) goto loc_82E8B588;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82e8b588
	if (ctx.cr6.eq) goto loc_82E8B588;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,24
	ctx.r3.s64 = 24;
	// blr 
	return;
loc_82E8B588:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

