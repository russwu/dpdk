/* SPDX-License-Identifier: BSD-3-Clause
 * Copyright(c) 2014-2024 Broadcom
 * All rights reserved.
 */

#include "ulp_template_db_enum.h"
#include "ulp_template_db_field.h"
#include "ulp_template_struct.h"
#include "ulp_template_db_tbl.h"

/* Mapper templates for header act list */
struct bnxt_ulp_mapper_tmpl_info ulp_thor2_act_tmpl_list[] = {
	/* act_tid: 1, ingress */
	[1] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 16,
	.start_tbl_idx = 0,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 0,
		.cond_nums = 4 }
	},
	/* act_tid: 2, ingress */
	[2] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 12,
	.start_tbl_idx = 16,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 19,
		.cond_nums = 0 }
	},
	/* act_tid: 3, ingress */
	[3] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 9,
	.start_tbl_idx = 28,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 23,
		.cond_nums = 0 }
	},
	/* act_tid: 4, ingress */
	[4] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 7,
	.start_tbl_idx = 37,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 28,
		.cond_nums = 1 }
	},
	/* act_tid: 5, ingress */
	[5] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 19,
	.start_tbl_idx = 44,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_FALSE,
		.cond_start_idx = 33,
		.cond_nums = 0 }
	},
	/* act_tid: 6, egress */
	[6] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 6,
	.start_tbl_idx = 63,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 48,
		.cond_nums = 4 }
	},
	/* act_tid: 7, egress */
	[7] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 7,
	.start_tbl_idx = 69,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 54,
		.cond_nums = 1 }
	},
	/* act_tid: 8, egress */
	[8] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 21,
	.start_tbl_idx = 76,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 58,
		.cond_nums = 2 }
	},
	/* act_tid: 9, egress */
	[9] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 6,
	.start_tbl_idx = 97,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 78,
		.cond_nums = 2 }
	},
	/* act_tid: 10, egress */
	[10] = {
	.device_name = BNXT_ULP_DEVICE_ID_THOR2,
	.num_tbls = 6,
	.start_tbl_idx = 103,
	.reject_info = {
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 81,
		.cond_nums = 4 }
	}
};

struct bnxt_ulp_mapper_tbl_info ulp_thor2_act_tbl_list[] = {
	{ /* act_tid: 1, , table: shared_meter_tbl_cache.rd */
	.description = "shared_meter_tbl_cache.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_METER_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 4,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 0,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.ident_start_idx = 0,
	.ident_nums = 1
	},
	{ /* act_tid: 1, , table: control.meter_chk */
	.description = "control.meter_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1023,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 5,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 1, , table: shared_mirror_record.rd */
	.description = "shared_mirror_record.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TBL_TYPE_MIRROR_CONFIG,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_MIRROR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 6,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 1,
	.blob_key_bit_size = 5,
	.key_bit_size = 5,
	.key_num_fields = 1,
	.ident_start_idx = 1,
	.ident_nums = 1
	},
	{ /* act_tid: 1, , table: control.mirror */
	.description = "control.mirror",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1023,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 7,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 1, , table: control.check_mods */
	.description = "control.check_mods",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 4,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 8,
		.cond_nums = 3 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 1, , table: mod_record.ing_no_ttl */
	.description = "mod_record.ing_no_ttl",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 11,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 0,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 18
	},
	{ /* act_tid: 1, , table: mod_record.ing_ttl */
	.description = "mod_record.ing_ttl",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 12,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 18,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 26
	},
	{ /* act_tid: 1, , table: control.mod_handle_to_offset */
	.description = "control.mod_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 13,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_MODIFY_PTR }
	},
	{ /* act_tid: 1, , table: tunnel_cache.f1_f2_act_rd */
	.description = "tunnel_cache.f1_f2_act_rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_TUNNEL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 13,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 2,
	.blob_key_bit_size = 19,
	.key_bit_size = 19,
	.key_num_fields = 2,
	.ident_start_idx = 2,
	.ident_nums = 2
	},
	{ /* act_tid: 1, , table: control.tunnel_cache_check_act */
	.description = "control.tunnel_cache_check_act",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 15,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 1, , table: cmm_stat_record.f1_flow */
	.description = "cmm_stat_record.f1_flow",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 16,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL_F1,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 44,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 1, , table: control.stat_handle_to_offset_ptr_1 */
	.description = "control.stat_handle_to_offset_ptr_1",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 16,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL_F1,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_F1 }
	},
	{ /* act_tid: 1, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 16,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 46,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 1, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 18,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 1, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 18,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 48,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 1, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 19,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	},
	{ /* act_tid: 2, , table: control.delete_chk */
	.description = "control.delete_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 19,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 2, , table: shared_mirror_record.del_chk */
	.description = "shared_mirror_record.del_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = CFA_RSUBTYPE_IDX_TBL_MIRROR,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_MIRROR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 20,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.ref_cnt_opcode = BNXT_ULP_REF_CNT_OPC_NOP,
	.key_start_idx = 4,
	.blob_key_bit_size = 5,
	.key_bit_size = 5,
	.key_num_fields = 1,
	.ident_start_idx = 4,
	.ident_nums = 1
	},
	{ /* act_tid: 2, , table: control.mirror_del_exist_chk */
	.description = "control.mirror_del_exist_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 20,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 2, , table: control.mirror_ref_cnt_chk */
	.description = "control.mirror_ref_cnt_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 21,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_DELETE_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_EQ,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_REF_CNT,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 1,
		.func_dst_opr = BNXT_ULP_RF_IDX_CC }
	},
	{ /* act_tid: 2, , table: control.create */
	.description = "control.create",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 22,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* act_tid: 2, , table: mirror_tbl.alloc */
	.description = "mirror_tbl.alloc",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = CFA_RSUBTYPE_IDX_TBL_MIRROR,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 22,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MIRROR_PTR_0,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 66,
	.result_bit_size = 128,
	.result_num_fields = 12
	},
	{ /* act_tid: 2, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 22,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 78,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 2, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 23,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 2, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 23,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 80,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 2, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 23,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	},
	{ /* act_tid: 2, , table: mirror_tbl.wr */
	.description = "mirror_tbl.wr",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = CFA_RSUBTYPE_IDX_TBL_MIRROR,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 23,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_MIRROR_PTR_0,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 98,
	.result_bit_size = 128,
	.result_num_fields = 12
	},
	{ /* act_tid: 2, , table: shared_mirror_record.wr */
	.description = "shared_mirror_record.wr",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = CFA_RSUBTYPE_IDX_TBL_MIRROR,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_MIRROR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 23,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.ref_cnt_opcode = BNXT_ULP_REF_CNT_OPC_INC,
	.key_start_idx = 5,
	.blob_key_bit_size = 5,
	.key_bit_size = 5,
	.key_num_fields = 1,
	.result_start_idx = 110,
	.result_bit_size = 37,
	.result_num_fields = 2
	},
	{ /* act_tid: 3, , table: shared_mirror_record.rd */
	.description = "shared_mirror_record.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TBL_TYPE_MIRROR_CONFIG,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_MIRROR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 23,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 6,
	.blob_key_bit_size = 5,
	.key_bit_size = 5,
	.key_num_fields = 1,
	.ident_start_idx = 5,
	.ident_nums = 1
	},
	{ /* act_tid: 3, , table: control.mirror */
	.description = "control.mirror",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1023,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 24,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 3, , table: mod_record.ing_no_ttl */
	.description = "mod_record.ing_no_ttl",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 25,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 112,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 24
	},
	{ /* act_tid: 3, , table: mod_record.ing_ttl */
	.description = "mod_record.ing_ttl",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 26,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 136,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 32
	},
	{ /* act_tid: 3, , table: control.mod_handle_to_offset */
	.description = "control.mod_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 27,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_MODIFY_PTR }
	},
	{ /* act_tid: 3, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 27,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 168,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 3, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 28,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 3, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 28,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 170,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 3, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 28,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	},
	{ /* act_tid: 4, , table: shared_mirror_record.rd */
	.description = "shared_mirror_record.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TBL_TYPE_MIRROR_CONFIG,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_MIRROR,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 29,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_INDEX,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 7,
	.blob_key_bit_size = 5,
	.key_bit_size = 5,
	.key_num_fields = 1,
	.ident_start_idx = 6,
	.ident_nums = 1
	},
	{ /* act_tid: 4, , table: control.mirror */
	.description = "control.mirror",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1023,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 30,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 4, , table: vnic_interface_rss_config.0 */
	.description = "vnic_interface_rss_config.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_VNIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_VNIC_TABLE_RSS,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 31,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_VNIC_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_RSS_VNIC,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 188,
	.result_bit_size = 0,
	.result_num_fields = 0
	},
	{ /* act_tid: 4, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 32,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 188,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 4, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 33,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 4, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 33,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 190,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 4, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 33,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	},
	{ /* act_tid: 5, , table: control.create_check */
	.description = "control.create_check",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 10,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 33,
		.cond_nums = 2 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 5, , table: meter_profile_tbl_cache.rd */
	.description = "meter_profile_tbl_cache.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_METER_PROFILE_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 3,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 35,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.ref_cnt_opcode = BNXT_ULP_REF_CNT_OPC_NOP,
	.key_start_idx = 8,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.ident_start_idx = 7,
	.ident_nums = 0
	},
	{ /* act_tid: 5, , table: control.shared_meter_profile_0 */
	.description = "control.shared_meter_profile_0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 36,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* act_tid: 5, , table: meter_profile_tbl_cache.wr */
	.description = "meter_profile_tbl_cache.wr",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_type = TF_TBL_TYPE_METER_PROF,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_METER_PROFILE_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 37,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.key_start_idx = 9,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.result_start_idx = 208,
	.result_bit_size = 97,
	.result_num_fields = 12
	},
	{ /* act_tid: 5, , table: shared_meter_tbl_cache.rd */
	.description = "shared_meter_tbl_cache.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_METER_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 37,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.ref_cnt_opcode = BNXT_ULP_REF_CNT_OPC_NOP,
	.key_start_idx = 10,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.ident_start_idx = 7,
	.ident_nums = 0
	},
	{ /* act_tid: 5, , table: control.meter_created_chk */
	.description = "control.meter_created_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 38,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* act_tid: 5, , table: meter_profile_tbl_cache.rd2 */
	.description = "meter_profile_tbl_cache.rd2",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_METER_PROFILE_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 39,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.key_start_idx = 11,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.ident_start_idx = 7,
	.ident_nums = 11
	},
	{ /* act_tid: 5, , table: control.shared_meter_profile_chk */
	.description = "control.shared_meter_profile_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1023,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 39,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 5, , table: meter_tbl.0 */
	.description = "meter_tbl.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = CFA_RSUBTYPE_IDX_TBL_METER_INST,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 40,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_METER_PTR_0,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 220,
	.result_bit_size = 128,
	.result_num_fields = 18
	},
	{ /* act_tid: 5, , table: shared_meter_tbl_cache.wr */
	.description = "shared_meter_tbl_cache.wr",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_METER_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 40,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.key_start_idx = 12,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.result_start_idx = 238,
	.result_bit_size = 74,
	.result_num_fields = 3
	},
	{ /* act_tid: 5, , table: control.delete_check */
	.description = "control.delete_check",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 5,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 40,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 5, , table: meter_profile_tbl_cache.del_chk */
	.description = "meter_profile_tbl_cache.del_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_METER_PROFILE_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 41,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.ref_cnt_opcode = BNXT_ULP_REF_CNT_OPC_NOP,
	.key_start_idx = 13,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.ident_start_idx = 18,
	.ident_nums = 1
	},
	{ /* act_tid: 5, , table: control.mtr_prof_ref_cnt_chk */
	.description = "control.mtr_prof_ref_cnt_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 42,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_DELETE_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_EQ,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_REF_CNT,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 1,
		.func_dst_opr = BNXT_ULP_RF_IDX_CC }
	},
	{ /* act_tid: 5, , table: shared_meter_tbl_cache.del_chk */
	.description = "shared_meter_tbl_cache.del_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_METER_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 43,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.ref_cnt_opcode = BNXT_ULP_REF_CNT_OPC_NOP,
	.key_start_idx = 14,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.ident_start_idx = 19,
	.ident_nums = 1
	},
	{ /* act_tid: 5, , table: control.shared_mtr_ref_cnt_chk */
	.description = "control.shared_mtr_ref_cnt_chk",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 44,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_DELETE_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_EQ,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_REF_CNT,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 1,
		.func_dst_opr = BNXT_ULP_RF_IDX_CC }
	},
	{ /* act_tid: 5, , table: control.update_check */
	.description = "control.update_check",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 45,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP
	},
	{ /* act_tid: 5, , table: shared_meter_tbl_cache.rd_update */
	.description = "shared_meter_tbl_cache.rd_update",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SHARED_METER_TBL_CACHE,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 45,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.ref_cnt_opcode = BNXT_ULP_REF_CNT_OPC_NOP,
	.key_start_idx = 15,
	.blob_key_bit_size = 32,
	.key_bit_size = 32,
	.key_num_fields = 1,
	.ident_start_idx = 20,
	.ident_nums = 1
	},
	{ /* act_tid: 5, , table: meter_tbl.update_rd */
	.description = "meter_tbl.update_rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = CFA_RSUBTYPE_IDX_TBL_METER_INST,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1023,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 46,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_RD_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_METER_PTR_0,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.ident_start_idx = 21,
	.ident_nums = 13,
	.result_bit_size = 128
	},
	{ /* act_tid: 5, , table: meter_tbl.update_wr */
	.description = "meter_tbl.update_wr",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_INDEX_TABLE,
	.resource_type = CFA_RSUBTYPE_IDX_TBL_METER_INST,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_INDEX_TABLE_NORMAL,
	.direction = TF_DIR_RX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 48,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_METER_PTR_0,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.result_start_idx = 241,
	.result_bit_size = 128,
	.result_num_fields = 18
	},
	{ /* act_tid: 6, , table: mod_record.ing_ttl */
	.description = "mod_record.ing_ttl",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 52,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 259,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 24
	},
	{ /* act_tid: 6, , table: control.mod_handle_to_offset */
	.description = "control.mod_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 53,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_MODIFY_PTR }
	},
	{ /* act_tid: 6, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 53,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 283,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 6, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 6, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 285,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 6, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 54,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	},
	{ /* act_tid: 7, , table: mod_record.egr_no_ttl */
	.description = "mod_record.egr_no_ttl",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 55,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 303,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 24
	},
	{ /* act_tid: 7, , table: mod_record.egr_ttl */
	.description = "mod_record.egr_ttl",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 56,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 327,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 32
	},
	{ /* act_tid: 7, , table: control.mod_handle_to_offset */
	.description = "control.mod_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 57,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_MODIFY_PTR }
	},
	{ /* act_tid: 7, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 57,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 359,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 7, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 58,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 7, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 58,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 361,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 7, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 58,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	},
	{ /* act_tid: 8, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 60,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 379,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 8, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 61,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 8, , table: mod_record.egr_set_mac */
	.description = "mod_record.egr_set_mac",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_OR,
		.cond_start_idx = 61,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.result_start_idx = 381,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 18
	},
	{ /* act_tid: 8, , table: control.mod_handle_to_offset */
	.description = "control.mod_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 63,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_MODIFY_PTR }
	},
	{ /* act_tid: 8, , table: source_property_cache.rd */
	.description = "source_property_cache.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SOURCE_PROPERTY_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 5,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 63,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 16,
	.blob_key_bit_size = 85,
	.key_bit_size = 85,
	.key_num_fields = 3,
	.ident_start_idx = 34,
	.ident_nums = 1
	},
	{ /* act_tid: 8, , table: control.sp_rec_v4 */
	.description = "control.sp_rec_v4",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 64,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* act_tid: 8, , table: sp_smac_ipv4.0 */
	.description = "sp_smac_ipv4.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 65,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_SRP_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 399,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 3
	},
	{ /* act_tid: 8, , table: control.srp_handle_to_offset */
	.description = "control.srp_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 66,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_SRP_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_SP_PTR }
	},
	{ /* act_tid: 8, , table: source_property_cache.wr */
	.description = "source_property_cache.wr",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_SOURCE_PROPERTY_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 66,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 19,
	.blob_key_bit_size = 85,
	.key_bit_size = 85,
	.key_num_fields = 3,
	.result_start_idx = 402,
	.result_bit_size = 64,
	.result_num_fields = 2
	},
	{ /* act_tid: 8, , table: vxlan_encap_rec_cache.rd */
	.description = "vxlan_encap_rec_cache.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_VXLAN_ENCAP_REC_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 10,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 66,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 22,
	.blob_key_bit_size = 141,
	.key_bit_size = 141,
	.key_num_fields = 6,
	.ident_start_idx = 35,
	.ident_nums = 1
	},
	{ /* act_tid: 8, , table: control.vxlan_v4_encap */
	.description = "control.vxlan_v4_encap",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 68,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* act_tid: 8, , table: ext_tun_vxlan_encap_record.ipv4_vxlan */
	.description = "ext_tun_vxlan_encap_record.ipv4_vxlan",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 69,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ENC_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 404,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 25
	},
	{ /* act_tid: 8, , table: control.enc_handle_to_offset */
	.description = "control.enc_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 71,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ENC_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_ENCAP_PTR_0 }
	},
	{ /* act_tid: 8, , table: vxlan_encap_rec_cache.wr */
	.description = "vxlan_encap_rec_cache.wr",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_VXLAN_ENCAP_REC_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 71,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 28,
	.blob_key_bit_size = 141,
	.key_bit_size = 141,
	.key_num_fields = 6,
	.result_start_idx = 429,
	.result_bit_size = 64,
	.result_num_fields = 2
	},
	{ /* act_tid: 8, , table: geneve_encap_rec_cache.rd */
	.description = "geneve_encap_rec_cache.rd",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_GENEVE_ENCAP_REC_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 5,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 71,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_READ,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 34,
	.blob_key_bit_size = 493,
	.key_bit_size = 493,
	.key_num_fields = 15,
	.ident_start_idx = 36,
	.ident_nums = 1
	},
	{ /* act_tid: 8, , table: control.geneve_encap */
	.description = "control.geneve_encap",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 4,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 72,
		.cond_nums = 1 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_ALLOC_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID
	},
	{ /* act_tid: 8, , table: ext_tun_geneve_encap_record.ipv4_vxlan */
	.description = "ext_tun_geneve_encap_record.ipv4_vxlan",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 73,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ENC_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 431,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 31
	},
	{ /* act_tid: 8, , table: ext_tun_geneve_encap_record.ipv6_geneve */
	.description = "ext_tun_geneve_encap_record.ipv6_geneve",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 75,
		.cond_nums = 2 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ENC_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_RID_REGFILE,
	.fdb_operand = BNXT_ULP_RF_IDX_RID,
	.result_start_idx = 462,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 29
	},
	{ /* act_tid: 8, , table: geneve_encap_rec_cache.wr */
	.description = "geneve_encap_rec_cache.wr",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_GENERIC_TABLE,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_GENERIC_TABLE_GENEVE_ENCAP_REC_CACHE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 77,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_GENERIC_TBL_OPC_WRITE,
	.gen_tbl_lkup_type = BNXT_ULP_GENERIC_TBL_LKUP_TYPE_HASH,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.key_start_idx = 49,
	.blob_key_bit_size = 493,
	.key_bit_size = 493,
	.key_num_fields = 15,
	.result_start_idx = 491,
	.result_bit_size = 64,
	.result_num_fields = 2
	},
	{ /* act_tid: 8, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 78,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 493,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 8, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 78,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	},
	{ /* act_tid: 9, , table: mod_record.meta */
	.description = "mod_record.meta",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 80,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_BIT_OR,
		.func_src1 = BNXT_ULP_FUNC_SRC_COMP_FIELD,
		.func_opr1 = BNXT_ULP_CF_IDX_VNIC,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = ULP_THOR2_SYM_VF_2_VF_META_VAL,
		.func_dst_opr = BNXT_ULP_RF_IDX_RF_0 },
	.result_start_idx = 511,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 20
	},
	{ /* act_tid: 9, , table: control.mod_handle_to_offset */
	.description = "control.mod_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 80,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_MODIFY_PTR }
	},
	{ /* act_tid: 9, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 80,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 531,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 9, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 81,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 9, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 81,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 533,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 9, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 81,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	},
	{ /* act_tid: 10, , table: mod_record.meta */
	.description = "mod_record.meta",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 85,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_BIT_OR,
		.func_src1 = BNXT_ULP_FUNC_SRC_COMP_FIELD,
		.func_opr1 = BNXT_ULP_CF_IDX_VNIC,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = ULP_THOR2_SYM_VF_2_VF_META_VAL,
		.func_dst_opr = BNXT_ULP_RF_IDX_RF_0 },
	.result_start_idx = 551,
	.result_bit_size = 0,
	.result_num_fields = 0,
	.encap_num_fields = 20
	},
	{ /* act_tid: 10, , table: control.mod_handle_to_offset */
	.description = "control.mod_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 85,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_MOD_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_MODIFY_PTR }
	},
	{ /* act_tid: 10, , table: cmm_stat_record.0 */
	.description = "cmm_stat_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_STAT,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 2,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_AND,
		.cond_start_idx = 85,
		.cond_nums = 1 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 571,
	.result_bit_size = 128,
	.result_num_fields = 2
	},
	{ /* act_tid: 10, , table: control.stat_handle_to_offset */
	.description = "control.stat_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 86,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_STAT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 8,
		.func_dst_opr = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 }
	},
	{ /* act_tid: 10, , table: cmm_full_act_record.0 */
	.description = "cmm_full_act_record.0",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CMM_TABLE,
	.resource_type = CFA_RSUBTYPE_CMM_ACT,
	.resource_sub_type =
		BNXT_ULP_RESOURCE_SUB_TYPE_CMM_TABLE_ACT,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 1,
		.cond_false_goto = 1,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 86,
		.cond_nums = 0 },
	.tbl_opcode = BNXT_ULP_INDEX_TBL_OPC_ALLOC_WR_REGFILE,
	.tbl_operand = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_PUSH_FID,
	.mark_db_opcode = BNXT_ULP_MARK_DB_OPC_NOP,
	.result_start_idx = 573,
	.result_bit_size = 192,
	.result_num_fields = 18
	},
	{ /* act_tid: 10, , table: control.act_handle_to_offset */
	.description = "control.act_handle_to_offset",
	.resource_func = BNXT_ULP_RESOURCE_FUNC_CTRL_TABLE,
	.direction = TF_DIR_TX,
	.execute_info = {
		.cond_true_goto  = 0,
		.cond_false_goto = 0,
		.cond_list_opcode = BNXT_ULP_COND_LIST_OPC_TRUE,
		.cond_start_idx = 86,
		.cond_nums = 0 },
	.key_recipe_opcode = BNXT_ULP_KEY_RECIPE_OPC_NOP,
	.fdb_opcode = BNXT_ULP_FDB_OPC_NOP,
	.func_info = {
		.func_opc = BNXT_ULP_FUNC_OPC_HANDLE_TO_OFFSET,
		.func_src1 = BNXT_ULP_FUNC_SRC_REGFILE,
		.func_opr1 = BNXT_ULP_RF_IDX_CMM_ACT_HNDL,
		.func_src2 = BNXT_ULP_FUNC_SRC_CONST,
		.func_opr2 = 32,
		.func_dst_opr = BNXT_ULP_RF_IDX_MAIN_ACTION_PTR }
	}
};

struct bnxt_ulp_mapper_cond_list_info ulp_thor2_act_cond_oper_list[] = {
};

struct bnxt_ulp_mapper_cond_info ulp_thor2_act_cond_list[] = {
	/* cond_reject: thor2, act_tid: 1 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_PUSH_VLAN
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_POP_VLAN
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SET_VLAN_VID
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SET_VLAN_PCP
	},
	/* cond_execute: act_tid: 1, shared_meter_tbl_cache.rd:4*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_METER
	},
	/* cond_execute: act_tid: 1, control.meter_chk:5*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 1, shared_mirror_record.rd:6*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_SAMPLE
	},
	/* cond_execute: act_tid: 1, control.mirror:7*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 1, control.check_mods:8*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DEC_TTL
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SET_MAC_SRC
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SET_MAC_DST
	},
	/* cond_execute: act_tid: 1, mod_record.ing_no_ttl:11*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DEC_TTL
	},
	/* cond_execute: act_tid: 1, mod_record.ing_ttl:12*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DEC_TTL
	},
	/* cond_execute: act_tid: 1, tunnel_cache.f1_f2_act_rd:13*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_F1
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_F2
	},
	/* cond_execute: act_tid: 1, control.tunnel_cache_check_act:15*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 1, cmm_stat_record.0:16*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_F1
	},
	/* cond_execute: act_tid: 1, cmm_full_act_record.0:18*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_HDR_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_F1
	},
	/* cond_execute: act_tid: 2, control.delete_chk:19*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DELETE
	},
	/* cond_execute: act_tid: 2, control.mirror_del_exist_chk:20*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 2, control.mirror_ref_cnt_chk:21*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_CC
	},
	/* cond_execute: act_tid: 2, cmm_stat_record.0:22*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	},
	/* cond_execute: act_tid: 3, shared_mirror_record.rd:23*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_SAMPLE
	},
	/* cond_execute: act_tid: 3, control.mirror:24*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 3, mod_record.ing_no_ttl:25*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DEC_TTL
	},
	/* cond_execute: act_tid: 3, mod_record.ing_ttl:26*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DEC_TTL
	},
	/* cond_execute: act_tid: 3, cmm_stat_record.0:27*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	},
	/* cond_reject: thor2, act_tid: 4 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_QUEUE
	},
	/* cond_execute: act_tid: 4, shared_mirror_record.rd:29*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_SAMPLE
	},
	/* cond_execute: act_tid: 4, control.mirror:30*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 4, vnic_interface_rss_config.0:31*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_RSS
	},
	/* cond_execute: act_tid: 4, cmm_stat_record.0:32*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	},
	/* cond_execute: act_tid: 5, control.create_check:33*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_UPDATE
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DELETE
	},
	/* cond_execute: act_tid: 5, meter_profile_tbl_cache.rd:35*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_METER_PROFILE
	},
	/* cond_execute: act_tid: 5, control.shared_meter_profile_0:36*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 5, shared_meter_tbl_cache.rd:37*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_METER
	},
	/* cond_execute: act_tid: 5, control.meter_created_chk:38*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 5, control.shared_meter_profile_chk:39*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 5, control.delete_check:40*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DELETE
	},
	/* cond_execute: act_tid: 5, meter_profile_tbl_cache.del_chk:41*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_METER_PROFILE
	},
	/* cond_execute: act_tid: 5, control.mtr_prof_ref_cnt_chk:42*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_CC
	},
	/* cond_execute: act_tid: 5, shared_meter_tbl_cache.del_chk:43*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_METER
	},
	/* cond_execute: act_tid: 5, control.shared_mtr_ref_cnt_chk:44*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_CC
	},
	/* cond_execute: act_tid: 5, shared_meter_tbl_cache.rd_update:45*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_METER
	},
	/* cond_execute: act_tid: 5, meter_tbl.update_rd:46*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_NOT_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_PROP_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID_UPDATE
	},
	/* cond_reject: thor2, act_tid: 6 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SET_VLAN_PCP
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SET_VLAN_VID
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_PUSH_VLAN
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_SAMPLE
	},
	/* cond_execute: act_tid: 6, mod_record.ing_ttl:52*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DEC_TTL
	},
	/* cond_execute: act_tid: 6, cmm_stat_record.0:53*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	},
	/* cond_reject: thor2, act_tid: 7 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_SAMPLE
	},
	/* cond_execute: act_tid: 7, mod_record.egr_no_ttl:55*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_NOT_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DEC_TTL
	},
	/* cond_execute: act_tid: 7, mod_record.egr_ttl:56*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DEC_TTL
	},
	/* cond_execute: act_tid: 7, cmm_stat_record.0:57*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	},
	/* cond_reject: thor2, act_tid: 8 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_SAMPLE
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_ACT_ENCAP_IPV6_FLAG
	},
	/* cond_execute: act_tid: 8, cmm_stat_record.0:60*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	},
	/* cond_execute: act_tid: 8, mod_record.egr_set_mac:61*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SET_MAC_SRC
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SET_MAC_DST
	},
	/* cond_execute: act_tid: 8, source_property_cache.rd:63*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_ACT_ENCAP_IPV4_FLAG
	},
	/* cond_execute: act_tid: 8, control.sp_rec_v4:64*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 8, sp_smac_ipv4.0:65*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_CF_IS_SET,
	.cond_operand = BNXT_ULP_CF_IDX_ACT_ENCAP_IPV4_FLAG
	},
	/* cond_execute: act_tid: 8, vxlan_encap_rec_cache.rd:66*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: act_tid: 8, control.vxlan_v4_encap:68*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 8, ext_tun_vxlan_encap_record.ipv4_vxlan:69*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_VXLAN
	},
	/* cond_execute: act_tid: 8, geneve_encap_rec_cache.rd:71*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_GENEVE
	},
	/* cond_execute: act_tid: 8, control.geneve_encap:72*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_RF_IS_SET,
	.cond_operand = BNXT_ULP_RF_IDX_GENERIC_TBL_MISS
	},
	/* cond_execute: act_tid: 8, ext_tun_geneve_encap_record.ipv4_vxlan:73*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV4
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_GENEVE
	},
	/* cond_execute: act_tid: 8, ext_tun_geneve_encap_record.ipv6_geneve:75*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_O_IPV6
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_GENEVE
	},
	/* cond_execute: act_tid: 8, geneve_encap_rec_cache.wr:77*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ENC_HDR_BIT_IS_SET,
	.cond_operand = BNXT_ULP_HDR_BIT_T_GENEVE
	},
	/* cond_reject: thor2, act_tid: 9 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_SAMPLE
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_MULTIPLE_PORT
	},
	/* cond_execute: act_tid: 9, cmm_stat_record.0:80*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	},
	/* cond_reject: thor2, act_tid: 10 */
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SAMPLE
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_DELETE
	},
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_SHARED_SAMPLE
	},
	/* cond_execute: act_tid: 10, cmm_stat_record.0:85*/
	{
	.cond_opcode = BNXT_ULP_COND_OPC_ACT_BIT_IS_SET,
	.cond_operand = BNXT_ULP_ACT_BIT_COUNT
	}
};

struct bnxt_ulp_mapper_key_info ulp_thor2_act_key_info_list[] = {
	/* act_tid: 1, , table: shared_meter_tbl_cache.rd */
	{
	.field_info_mask = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER & 0xff}
		}
	},
	/* act_tid: 1, , table: shared_mirror_record.rd */
	{
	.field_info_mask = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_SHARED_HANDLE >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_SHARED_HANDLE & 0xff}
		}
	},
	/* act_tid: 1, , table: tunnel_cache.f1_f2_act_rd */
	{
	.field_info_mask = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		},
	.field_info_spec = {
		.description = "svif",
		.field_bit_size = 11,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_HF,
		.field_opr1 = {
		(BNXT_ULP_GLB_HF_ID_SVIF_INDEX >> 8) & 0xff,
		BNXT_ULP_GLB_HF_ID_SVIF_INDEX & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tunnel_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tunnel_id",
		.field_bit_size = 8,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_CF,
		.field_opr1 = {
		(BNXT_ULP_CF_IDX_TUNNEL_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_TUNNEL_ID & 0xff}
		}
	},
	/* act_tid: 2, , table: shared_mirror_record.del_chk */
	{
	.field_info_mask = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_SHARED_HANDLE >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_SHARED_HANDLE & 0xff}
		}
	},
	/* act_tid: 2, , table: shared_mirror_record.wr */
	{
	.field_info_mask = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_RF,
		.field_opr1 = {
		(BNXT_ULP_RF_IDX_MIRROR_PTR_0 >> 8) & 0xff,
		BNXT_ULP_RF_IDX_MIRROR_PTR_0 & 0xff}
		}
	},
	/* act_tid: 3, , table: shared_mirror_record.rd */
	{
	.field_info_mask = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_SHARED_HANDLE >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_SHARED_HANDLE & 0xff}
		}
	},
	/* act_tid: 4, , table: shared_mirror_record.rd */
	{
	.field_info_mask = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "shared_index",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_SHARED_HANDLE >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_SHARED_HANDLE & 0xff}
		}
	},
	/* act_tid: 5, , table: meter_profile_tbl_cache.rd */
	{
	.field_info_mask = {
		.description = "sw_meter_profile_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_profile_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID & 0xff}
		}
	},
	/* act_tid: 5, , table: meter_profile_tbl_cache.wr */
	{
	.field_info_mask = {
		.description = "sw_meter_profile_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_profile_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID & 0xff}
		}
	},
	/* act_tid: 5, , table: shared_meter_tbl_cache.rd */
	{
	.field_info_mask = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER_INST_ID >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER_INST_ID & 0xff}
		}
	},
	/* act_tid: 5, , table: meter_profile_tbl_cache.rd2 */
	{
	.field_info_mask = {
		.description = "sw_meter_profile_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_profile_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID & 0xff}
		}
	},
	/* act_tid: 5, , table: shared_meter_tbl_cache.wr */
	{
	.field_info_mask = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER_INST_ID >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER_INST_ID & 0xff}
		}
	},
	/* act_tid: 5, , table: meter_profile_tbl_cache.del_chk */
	{
	.field_info_mask = {
		.description = "sw_meter_profile_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_profile_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID & 0xff}
		}
	},
	/* act_tid: 5, , table: shared_meter_tbl_cache.del_chk */
	{
	.field_info_mask = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER_INST_ID >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER_INST_ID & 0xff}
		}
	},
	/* act_tid: 5, , table: shared_meter_tbl_cache.rd_update */
	{
	.field_info_mask = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "sw_meter_id",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
		.field_opr1 = {
		(BNXT_ULP_ACT_PROP_IDX_METER_INST_ID >> 8) & 0xff,
		BNXT_ULP_ACT_PROP_IDX_METER_INST_ID & 0xff}
		}
	},
	/* act_tid: 8, , table: source_property_cache.rd */
	{
	.field_info_mask = {
		.description = "smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_ETH_SMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ipv4_src_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ipv4_src_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_IPV4_SADDR >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_IPV4_SADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_PORT_TABLE,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff,
			(BNXT_ULP_PORT_TABLE_TABLE_SCOPE >> 8) & 0xff,
			BNXT_ULP_PORT_TABLE_TABLE_SCOPE & 0xff}
		}
	},
	/* act_tid: 8, , table: source_property_cache.wr */
	{
	.field_info_mask = {
		.description = "smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "smac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_ETH_SMAC >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_ETH_SMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ipv4_src_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ipv4_src_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_IPV4_SADDR >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_IPV4_SADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_PORT_TABLE,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff,
			(BNXT_ULP_PORT_TABLE_TABLE_SCOPE >> 8) & 0xff,
			BNXT_ULP_PORT_TABLE_TABLE_SCOPE & 0xff}
		}
	},
	/* act_tid: 8, , table: vxlan_encap_rec_cache.rd */
	{
	.field_info_mask = {
		.description = "dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ipv4_dst_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ipv4_dst_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_IPV4_DADDR >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_IPV4_DADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "udp_sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "udp_sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_UDP_SPORT >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_UDP_SPORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "udp_dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "udp_dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_UDP_DPORT >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_UDP_DPORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "vni",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "vni",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_VXLAN_VNI >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_VXLAN_VNI & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_PORT_TABLE,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff,
			(BNXT_ULP_PORT_TABLE_TABLE_SCOPE >> 8) & 0xff,
			BNXT_ULP_PORT_TABLE_TABLE_SCOPE & 0xff}
		}
	},
	/* act_tid: 8, , table: vxlan_encap_rec_cache.wr */
	{
	.field_info_mask = {
		.description = "dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ipv4_dst_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ipv4_dst_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_IPV4_DADDR >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_IPV4_DADDR & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "udp_sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "udp_sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_UDP_SPORT >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_UDP_SPORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "udp_dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "udp_dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_UDP_DPORT >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_UDP_DPORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "vni",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "vni",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_VXLAN_VNI >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_VXLAN_VNI & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff}
		},
	.field_info_spec = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_PORT_TABLE,
		.field_opr1 = {
			(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
			BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff,
			(BNXT_ULP_PORT_TABLE_TABLE_SCOPE >> 8) & 0xff,
			BNXT_ULP_PORT_TABLE_TABLE_SCOPE & 0xff}
		}
	},
	/* act_tid: 8, , table: geneve_encap_rec_cache.rd */
	{
	.field_info_mask = {
		.description = "dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ipv4_dst_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ipv4_dst_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr2 = {
		(BNXT_ULP_ENC_FIELD_IPV4_DADDR >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_IPV4_DADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "ipv6_dst_addr",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ipv6_dst_addr",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr2 = {
		(BNXT_ULP_ENC_FIELD_IPV6_DADDR >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_IPV6_DADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "udp_sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "udp_sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_UDP_SPORT >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_UDP_SPORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "udp_dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "udp_dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_UDP_DPORT >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_UDP_DPORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ver_opt_len_o_c_rsvd0",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ver_opt_len_o_c_rsvd0",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_VER_OPT_LEN_O_C_RSVD0 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_VER_OPT_LEN_O_C_RSVD0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "proto_type",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "proto_type",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_PROTO_TYPE >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_PROTO_TYPE & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "vni",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "vni",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_VNI >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_VNI & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w0",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w0",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W0 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w1",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w1",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W1 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W1 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w2",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w2",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W2 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W2 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w3",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w3",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W3 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W3 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W4 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w5",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w5",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W5 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W5 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	/* act_tid: 8, , table: geneve_encap_rec_cache.wr */
	{
	.field_info_mask = {
		.description = "dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "dmac",
		.field_bit_size = 48,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_ETH_DMAC >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_ETH_DMAC & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ipv4_dst_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ipv4_dst_addr",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_IPV4 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr2 = {
		(BNXT_ULP_ENC_FIELD_IPV4_DADDR >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_IPV4_DADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "ipv6_dst_addr",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "ipv6_dst_addr",
		.field_bit_size = 128,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
		.field_opr1 = {
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 56) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 48) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 40) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 32) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 24) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 16) & 0xff,
		((uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 >> 8) & 0xff,
		(uint64_t)BNXT_ULP_HDR_BIT_O_IPV6 & 0xff},
		.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr2 = {
		(BNXT_ULP_ENC_FIELD_IPV6_DADDR >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_IPV6_DADDR & 0xff},
		.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "udp_sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "udp_sport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_UDP_SPORT >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_UDP_SPORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "udp_dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "udp_dport",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_UDP_DPORT >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_UDP_DPORT & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "ver_opt_len_o_c_rsvd0",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "ver_opt_len_o_c_rsvd0",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "proto_type",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "proto_type",
		.field_bit_size = 16,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	},
	{
	.field_info_mask = {
		.description = "vni",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "vni",
		.field_bit_size = 24,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_VNI >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_VNI & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w0",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w0",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W0 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W0 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w1",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w1",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W1 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W1 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w2",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w2",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W2 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W2 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w3",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w3",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W3 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W3 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w4",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W4 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W4 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "opt_w5",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
		.field_opr1 = {
			0xff,
			0xff,
			0xff,
			0xff}
		},
	.field_info_spec = {
		.description = "opt_w5",
		.field_bit_size = 32,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
		.field_opr1 = {
		(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W5 >> 8) & 0xff,
		BNXT_ULP_ENC_FIELD_GENEVE_OPT_W5 & 0xff}
		}
	},
	{
	.field_info_mask = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		},
	.field_info_spec = {
		.description = "tbl_scope",
		.field_bit_size = 5,
		.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
		.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
		}
	}
};

struct bnxt_ulp_mapper_field_info ulp_thor2_act_key_ext_list[] = {
};

struct bnxt_ulp_mapper_field_info ulp_thor2_act_result_field_list[] = {
	/* act_tid: 1, , table: mod_record.ing_no_ttl */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l2_smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	/* act_tid: 1, , table: mod_record.ing_ttl */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "alt_pfid",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "alt_vid",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_rsvd",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_tl3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_ACT_T_DEC_TTL >> 8) & 0xff,
	BNXT_ULP_CF_IDX_ACT_T_DEC_TTL & 0xff}
	},
	{
	.description = "ttl_il3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_ACT_DEC_TTL >> 8) & 0xff,
	BNXT_ULP_CF_IDX_ACT_DEC_TTL & 0xff}
	},
	{
	.description = "ttl_otl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_il3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l2_smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	/* act_tid: 1, , table: cmm_stat_record.f1_flow */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 1, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 1, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff}
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ZERO,
	.field_src3 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr3 = {
	(BNXT_ULP_ACT_PROP_IDX_VNIC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_VNIC & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_VXLAN_DECAP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_VXLAN_DECAP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_VXLAN_DECAP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_VXLAN_DECAP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_VXLAN_DECAP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_VXLAN_DECAP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_VXLAN_DECAP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_VXLAN_DECAP & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	ULP_THOR2_SYM_DECAP_FUNC_THRU_TUN},
	.field_src3 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr3 = {
	ULP_THOR2_SYM_DECAP_FUNC_NONE}
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr2 = {
	(BNXT_ULP_RF_IDX_MIRROR_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MIRROR_ID_0 & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_METER >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_METER >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_METER >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_METER >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_METER >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_METER >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_METER >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_METER & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr2 = {
	(BNXT_ULP_RF_IDX_METER_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_METER_PTR_0 & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_F1 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_F1 & 0xff}
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MODIFY_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MODIFY_PTR & 0xff}
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 2, , table: mirror_tbl.alloc */
	{
	.description = "reserved1",
	.field_bit_size = 21,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "arp_relative",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "action_hint",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sample_mode",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "trunc_mode",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ignore_drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "copy_mode",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirr_cond",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_ptr",
	.field_bit_size = 26,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved2",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "samp_cfg",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "padding1",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 2, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 2, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_VNIC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_VNIC & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 2, , table: mirror_tbl.wr */
	{
	.description = "reserved1",
	.field_bit_size = 21,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "arp_relative",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "action_hint",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "sample_mode",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "trunc_mode",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ignore_drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "copy_mode",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	3}
	},
	{
	.description = "mirr_cond",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "act_rec_ptr",
	.field_bit_size = 26,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_ACTION_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_ACTION_PTR & 0xff}
	},
	{
	.description = "reserved2",
	.field_bit_size = 6,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "samp_cfg",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ONES,
	.field_opr1 = {
		0xff,
		0xff,
		0xff,
		0xff}
	},
	{
	.description = "padding1",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 2, , table: shared_mirror_record.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "mirror_id",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MIRROR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MIRROR_PTR_0 & 0xff}
	},
	/* act_tid: 3, , table: mod_record.ing_no_ttl */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l2_smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_sip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_dip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_sip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_dip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l4_sport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l4_dport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_TP_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_TP_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	/* act_tid: 3, , table: mod_record.ing_ttl */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "alt_pfid",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "alt_vid",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_rsvd",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_tl3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_ACT_T_DEC_TTL >> 8) & 0xff,
	BNXT_ULP_CF_IDX_ACT_T_DEC_TTL & 0xff}
	},
	{
	.description = "ttl_il3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_ACT_DEC_TTL >> 8) & 0xff,
	BNXT_ULP_CF_IDX_ACT_DEC_TTL & 0xff}
	},
	{
	.description = "ttl_otl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_il3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l2_smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_sip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_dip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_sip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_dip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l4_sport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l4_dport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_TP_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_TP_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	/* act_tid: 3, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 3, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff}
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ZERO,
	.field_src3 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr3 = {
	(BNXT_ULP_ACT_PROP_IDX_VNIC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_VNIC & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr2 = {
	(BNXT_ULP_RF_IDX_MIRROR_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MIRROR_ID_0 & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MODIFY_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MODIFY_PTR & 0xff}
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 4, , table: vnic_interface_rss_config.0 */
	/* act_tid: 4, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 4, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RSS_VNIC >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RSS_VNIC & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SHARED_SAMPLE & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr2 = {
	(BNXT_ULP_RF_IDX_MIRROR_ID_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MIRROR_ID_0 & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 5, , table: meter_profile_tbl_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "cf",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_CF >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_CF & 0xff}
	},
	{
	.description = "pm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_PM >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_PM & 0xff}
	},
	{
	.description = "rfc2698",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_RFC2698 >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_RFC2698 & 0xff}
	},
	{
	.description = "cbsm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_CBSM >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_CBSM & 0xff}
	},
	{
	.description = "ebsm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_EBSM >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_EBSM & 0xff}
	},
	{
	.description = "cbnd",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_CBND >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_CBND & 0xff}
	},
	{
	.description = "ebnd",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_EBND >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_EBND & 0xff}
	},
	{
	.description = "cbs",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_CBS >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_CBS & 0xff}
	},
	{
	.description = "ebs",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_EBS >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_EBS & 0xff}
	},
	{
	.description = "cir",
	.field_bit_size = 17,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_CIR >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_CIR & 0xff}
	},
	{
	.description = "eir",
	.field_bit_size = 17,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_EIR >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_EIR & 0xff}
	},
	/* act_tid: 5, , table: meter_tbl.0 */
	{
	.description = "bkt_c",
	.field_bit_size = 27,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	(134217727 >> 24) & 0xff,
	(134217727 >> 16) & 0xff,
	(134217727 >> 8) & 0xff,
	134217727 & 0xff}
	},
	{
	.description = "bkt_e",
	.field_bit_size = 27,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	(134217727 >> 24) & 0xff,
	(134217727 >> 16) & 0xff,
	(134217727 >> 8) & 0xff,
	134217727 & 0xff}
	},
	{
	.description = "mtr_val",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_INST_MTR_VAL >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_INST_MTR_VAL & 0xff}
	},
	{
	.description = "ecn_rmp_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_INST_ECN_RMP_EN >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_INST_ECN_RMP_EN & 0xff}
	},
	{
	.description = "cf",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CF_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CF_0 & 0xff}
	},
	{
	.description = "pm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_PM_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_PM_0 & 0xff}
	},
	{
	.description = "rfc2698",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RFC2698_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RFC2698_0 & 0xff}
	},
	{
	.description = "cbsm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CBSM_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CBSM_0 & 0xff}
	},
	{
	.description = "ebsm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EBSM_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EBSM_0 & 0xff}
	},
	{
	.description = "cbnd",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CBND_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CBND_0 & 0xff}
	},
	{
	.description = "ebnd",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EBND_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EBND_0 & 0xff}
	},
	{
	.description = "cbs",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CBS_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CBS_0 & 0xff}
	},
	{
	.description = "ebs",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EBS_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EBS_0 & 0xff}
	},
	{
	.description = "cir",
	.field_bit_size = 17,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CIR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CIR_0 & 0xff}
	},
	{
	.description = "eir",
	.field_bit_size = 17,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EIR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EIR_0 & 0xff}
	},
	{
	.description = "scope",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_PORT_TABLE,
	.field_opr1 = {
		(BNXT_ULP_CF_IDX_DEV_PORT_ID >> 8) & 0xff,
		BNXT_ULP_CF_IDX_DEV_PORT_ID & 0xff,
		(BNXT_ULP_PORT_TABLE_TABLE_SCOPE >> 8) & 0xff,
		BNXT_ULP_PORT_TABLE_TABLE_SCOPE & 0xff}
	},
	{
	.description = "rsvd",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "prot_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* act_tid: 5, , table: shared_meter_tbl_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_METER_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_METER_PTR_0 & 0xff}
	},
	{
	.description = "sw_meter_profile_id",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_PROF_ID & 0xff}
	},
	/* act_tid: 5, , table: meter_tbl.update_wr */
	{
	.description = "bkt_c",
	.field_bit_size = 27,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	(134217727 >> 24) & 0xff,
	(134217727 >> 16) & 0xff,
	(134217727 >> 8) & 0xff,
	134217727 & 0xff}
	},
	{
	.description = "bkt_e",
	.field_bit_size = 27,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	(134217727 >> 24) & 0xff,
	(134217727 >> 16) & 0xff,
	(134217727 >> 8) & 0xff,
	134217727 & 0xff}
	},
	{
	.description = "mtr_val",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_INST_MTR_VAL_UPDATE >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_INST_MTR_VAL_UPDATE & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_INST_MTR_VAL >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_INST_MTR_VAL & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr3 = {
	(BNXT_ULP_RF_IDX_RF_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RF_0 & 0xff}
	},
	{
	.description = "ecn_rmp_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_INST_ECN_RMP_EN_UPDATE >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_INST_ECN_RMP_EN_UPDATE & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_METER_INST_ECN_RMP_EN >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_METER_INST_ECN_RMP_EN & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr3 = {
	(BNXT_ULP_RF_IDX_RF_1 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RF_1 & 0xff}
	},
	{
	.description = "cf",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CF_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CF_0 & 0xff}
	},
	{
	.description = "pm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_PM_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_PM_0 & 0xff}
	},
	{
	.description = "rfc2698",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RFC2698_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RFC2698_0 & 0xff}
	},
	{
	.description = "cbsm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CBSM_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CBSM_0 & 0xff}
	},
	{
	.description = "ebsm",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EBSM_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EBSM_0 & 0xff}
	},
	{
	.description = "cbnd",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CBND_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CBND_0 & 0xff}
	},
	{
	.description = "ebnd",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EBND_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EBND_0 & 0xff}
	},
	{
	.description = "cbs",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CBS_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CBS_0 & 0xff}
	},
	{
	.description = "ebs",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EBS_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EBS_0 & 0xff}
	},
	{
	.description = "cir",
	.field_bit_size = 17,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_CIR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_CIR_0 & 0xff}
	},
	{
	.description = "eir",
	.field_bit_size = 17,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_EIR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_EIR_0 & 0xff}
	},
	{
	.description = "scope",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "prot_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	/* act_tid: 6, , table: mod_record.ing_ttl */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "alt_pfid",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "alt_vid",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_rsvd",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_tl3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_ACT_T_DEC_TTL >> 8) & 0xff,
	BNXT_ULP_CF_IDX_ACT_T_DEC_TTL & 0xff}
	},
	{
	.description = "ttl_il3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_ACT_DEC_TTL >> 8) & 0xff,
	BNXT_ULP_CF_IDX_ACT_DEC_TTL & 0xff}
	},
	{
	.description = "ttl_otl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_il3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 6, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 6, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff}
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_VPORT >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_VPORT & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MODIFY_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MODIFY_PTR & 0xff}
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 7, , table: mod_record.egr_no_ttl */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l2_smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_sip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_dip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_sip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_dip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l4_sport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l4_dport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_TP_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_TP_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	/* act_tid: 7, , table: mod_record.egr_ttl */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "alt_pfid",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "alt_vid",
	.field_bit_size = 12,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_rsvd",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_tl3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_ACT_T_DEC_TTL >> 8) & 0xff,
	BNXT_ULP_CF_IDX_ACT_T_DEC_TTL & 0xff}
	},
	{
	.description = "ttl_il3_dec",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CF,
	.field_opr1 = {
	(BNXT_ULP_CF_IDX_ACT_DEC_TTL >> 8) & 0xff,
	BNXT_ULP_CF_IDX_ACT_DEC_TTL & 0xff}
	},
	{
	.description = "ttl_otl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_tl3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_il3_rdir",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l2_smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_sip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV6_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_dip_ipv6",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV6_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV6_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_sip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV4_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l3_dip_ipv4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_IPV4_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_IPV4_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l4_sport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_TP_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l4_dport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_TP_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_TP_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_TP_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	/* act_tid: 7, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 7, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff}
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_VPORT >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_VPORT & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MODIFY_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MODIFY_PTR & 0xff}
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 8, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 8, , table: mod_record.egr_set_mac */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr2 = {
	1},
	.field_src3 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_DST & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_DST & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "l2_smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_SET_MAC_SRC & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr2 = {
	(BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_SET_MAC_SRC & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	/* act_tid: 8, , table: sp_smac_ipv4.0 */
	{
	.description = "smac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_ETH_SMAC >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_ETH_SMAC & 0xff}
	},
	{
	.description = "ipv4_src_addr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_SADDR >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_SADDR & 0xff}
	},
	{
	.description = "reserved",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 8, , table: source_property_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "sp_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_SP_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_SP_PTR & 0xff}
	},
	/* act_tid: 8, , table: ext_tun_vxlan_encap_record.ipv4_vxlan */
	{
	.description = "ecv_valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_VALID_YES}
	},
	{
	.description = "ecv_custom_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ecv_vtag_type",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_TYPE >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_TYPE & 0xff}
	},
	{
	.description = "ecv_l2_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_L2_EN_YES}
	},
	{
	.description = "ecv_l3_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_ENCAP_L3_TYPE >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_ENCAP_L3_TYPE & 0xff}
	},
	{
	.description = "ecv_l4_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_L4_TYPE_UDP_CSUM}
	},
	{
	.description = "ecv_tun_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_TUN_TYPE_VXLAN}
	},
	{
	.description = "enc_eth_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_ETH_DMAC >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_ETH_DMAC & 0xff}
	},
	{
	.description = "enc_o_vlan_tag",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_O_VLAN_TCI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_O_VLAN_TCI & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_o_vlan_type",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_O_VLAN_TYPE >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_O_VLAN_TYPE & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_i_vlan_tag",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_I_VLAN_TCI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_I_VLAN_TCI & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_i_vlan_type",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_I_VLAN_TYPE >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_I_VLAN_TYPE & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_ipv4_ihl",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_IHL >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_IHL & 0xff}
	},
	{
	.description = "enc_ipv4_tos",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_TOS >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_TOS & 0xff}
	},
	{
	.description = "enc_ipv4_pkt_id",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_PKT_ID >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_PKT_ID & 0xff}
	},
	{
	.description = "enc_ipv4_frag",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_FRAG >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_FRAG & 0xff}
	},
	{
	.description = "enc_ipv4_ttl",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_TTL >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_TTL & 0xff}
	},
	{
	.description = "enc_ipv4_proto",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_PROTO >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_PROTO & 0xff}
	},
	{
	.description = "enc_ipv4_daddr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_DADDR >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_DADDR & 0xff}
	},
	{
	.description = "enc_udp_sport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_UDP_SPORT >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_UDP_SPORT & 0xff}
	},
	{
	.description = "enc_udp_dport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_UDP_DPORT >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_UDP_DPORT & 0xff}
	},
	{
	.description = "enc_vxlan_flags",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_VXLAN_FLAGS >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_VXLAN_FLAGS & 0xff}
	},
	{
	.description = "enc_vxlan_rsvd0",
	.field_bit_size = 24,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_VXLAN_RSVD0 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_VXLAN_RSVD0 & 0xff}
	},
	{
	.description = "enc_vxlan_vni",
	.field_bit_size = 24,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_VXLAN_VNI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_VXLAN_VNI & 0xff}
	},
	{
	.description = "enc_vxlan_rsvd1",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_VXLAN_RSVD1 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_VXLAN_RSVD1 & 0xff}
	},
	/* act_tid: 8, , table: vxlan_encap_rec_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "enc_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_ENCAP_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_ENCAP_PTR_0 & 0xff}
	},
	/* act_tid: 8, , table: ext_tun_geneve_encap_record.ipv4_vxlan */
	{
	.description = "ecv_valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_VALID_YES}
	},
	{
	.description = "ecv_custom_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ecv_vtag_type",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_TYPE >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_TYPE & 0xff}
	},
	{
	.description = "ecv_l2_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_L2_EN_YES}
	},
	{
	.description = "ecv_l3_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_ENCAP_L3_TYPE >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_ENCAP_L3_TYPE & 0xff}
	},
	{
	.description = "ecv_l4_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_L4_TYPE_UDP_CSUM}
	},
	{
	.description = "ecv_tun_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_TUN_TYPE_NGE}
	},
	{
	.description = "enc_eth_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_ETH_DMAC >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_ETH_DMAC & 0xff}
	},
	{
	.description = "enc_o_vlan_tag",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_O_VLAN_TCI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_O_VLAN_TCI & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_o_vlan_type",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_O_VLAN_TYPE >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_O_VLAN_TYPE & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_i_vlan_tag",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_I_VLAN_TCI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_I_VLAN_TCI & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_i_vlan_type",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_I_VLAN_TYPE >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_I_VLAN_TYPE & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_ipv4_ihl",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_IHL >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_IHL & 0xff}
	},
	{
	.description = "enc_ipv4_tos",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_TOS >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_TOS & 0xff}
	},
	{
	.description = "enc_ipv4_pkt_id",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_PKT_ID >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_PKT_ID & 0xff}
	},
	{
	.description = "enc_ipv4_frag",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_FRAG >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_FRAG & 0xff}
	},
	{
	.description = "enc_ipv4_ttl",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_TTL >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_TTL & 0xff}
	},
	{
	.description = "enc_ipv4_proto",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_PROTO >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_PROTO & 0xff}
	},
	{
	.description = "enc_ipv4_daddr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV4_DADDR >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV4_DADDR & 0xff}
	},
	{
	.description = "enc_udp_sport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_UDP_SPORT >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_UDP_SPORT & 0xff}
	},
	{
	.description = "enc_udp_dport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_UDP_DPORT >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_UDP_DPORT & 0xff}
	},
	{
	.description = "enc_geneve_ver_opt_len_o_c_rsvd0",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_VER_OPT_LEN_O_C_RSVD0 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_VER_OPT_LEN_O_C_RSVD0 & 0xff}
	},
	{
	.description = "enc_geneve_proto_type",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_PROTO_TYPE >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_PROTO_TYPE & 0xff}
	},
	{
	.description = "enc_geneve_vni",
	.field_bit_size = 24,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_VNI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_VNI & 0xff}
	},
	{
	.description = "enc_geneve_rsvd1",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_RSVD1 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_RSVD1 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w0",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W0 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W0 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w1",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W1 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W1 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w2",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W2 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W2 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w3",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W3 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W3 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W4 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W4 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w5",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W5 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W5 & 0xff}
	},
	/* act_tid: 8, , table: ext_tun_geneve_encap_record.ipv6_geneve */
	{
	.description = "ecv_valid",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_VALID_YES}
	},
	{
	.description = "ecv_custom_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ecv_vtag_type",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_TYPE >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_ENCAP_VTAG_TYPE & 0xff}
	},
	{
	.description = "ecv_l2_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_L2_EN_YES}
	},
	{
	.description = "ecv_l3_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_ENCAP_L3_TYPE >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_ENCAP_L3_TYPE & 0xff}
	},
	{
	.description = "ecv_l4_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_L4_TYPE_UDP_CSUM}
	},
	{
	.description = "ecv_tun_type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	ULP_THOR2_SYM_ECV_TUN_TYPE_NGE}
	},
	{
	.description = "enc_eth_dmac",
	.field_bit_size = 48,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_ETH_DMAC >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_ETH_DMAC & 0xff}
	},
	{
	.description = "enc_o_vlan_tag",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_O_VLAN_TCI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_O_VLAN_TCI & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_o_vlan_type",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OO_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_O_VLAN_TYPE >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_O_VLAN_TYPE & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_i_vlan_tag",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_I_VLAN_TCI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_I_VLAN_TCI & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_i_vlan_type",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1_THEN_SRC2_ELSE_SRC3,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_HDR_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 56) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 48) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 40) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 32) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 24) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 16) & 0xff,
	((uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN >> 8) & 0xff,
	(uint64_t)BNXT_ULP_HDR_BIT_OI_VLAN & 0xff},
	.field_src2 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr2 = {
	(BNXT_ULP_ENC_FIELD_I_VLAN_TYPE >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_I_VLAN_TYPE & 0xff},
	.field_src3 = BNXT_ULP_FIELD_SRC_SKIP
	},
	{
	.description = "enc_ipv6_vtc",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV6_VTC_FLOW >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV6_VTC_FLOW & 0xff}
	},
	{
	.description = "enc_ipv6_zero",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "enc_ipv6_proto",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV6_PROTO >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV6_PROTO & 0xff}
	},
	{
	.description = "enc_ipv6_ttl",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV6_TTL >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV6_TTL & 0xff}
	},
	{
	.description = "enc_ipv6_daddr",
	.field_bit_size = 128,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_IPV6_DADDR >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_IPV6_DADDR & 0xff}
	},
	{
	.description = "enc_udp_sport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_UDP_SPORT >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_UDP_SPORT & 0xff}
	},
	{
	.description = "enc_udp_dport",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_UDP_DPORT >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_UDP_DPORT & 0xff}
	},
	{
	.description = "enc_geneve_ver_opt_len_o_c_rsvd0",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_VER_OPT_LEN_O_C_RSVD0 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_VER_OPT_LEN_O_C_RSVD0 & 0xff}
	},
	{
	.description = "enc_geneve_proto_type",
	.field_bit_size = 16,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_PROTO_TYPE >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_PROTO_TYPE & 0xff}
	},
	{
	.description = "enc_geneve_vni",
	.field_bit_size = 24,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_VNI >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_VNI & 0xff}
	},
	{
	.description = "enc_geneve_rsvd1",
	.field_bit_size = 8,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_RSVD1 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_RSVD1 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w0",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W0 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W0 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w1",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W1 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W1 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w2",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W2 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W2 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w3",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W3 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W3 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w4",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W4 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W4 & 0xff}
	},
	{
	.description = "enc_geneve_opt_w5",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ENC_FIELD,
	.field_opr1 = {
	(BNXT_ULP_ENC_FIELD_GENEVE_OPT_W5 >> 8) & 0xff,
	BNXT_ULP_ENC_FIELD_GENEVE_OPT_W5 & 0xff}
	},
	/* act_tid: 8, , table: geneve_encap_rec_cache.wr */
	{
	.description = "rid",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RID >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RID & 0xff}
	},
	{
	.description = "enc_rec_ptr",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_ENCAP_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_ENCAP_PTR_0 & 0xff}
	},
	/* act_tid: 8, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff}
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_PROP,
	.field_opr1 = {
	(BNXT_ULP_ACT_PROP_IDX_VPORT >> 8) & 0xff,
	BNXT_ULP_ACT_PROP_IDX_VPORT & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MODIFY_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MODIFY_PTR & 0xff}
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_ENCAP_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_ENCAP_PTR_0 & 0xff}
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MAIN_SP_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MAIN_SP_PTR & 0xff}
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 9, , table: mod_record.meta */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_rsvd",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_prof",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_METADATA_TX_ACT_0 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_METADATA_TX_ACT_0 & 0xff}
	},
	{
	.description = "metadata_data",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RF_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RF_0 & 0xff}
	},
	/* act_tid: 9, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 9, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff}
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	(ULP_THOR2_SYM_LOOPBACK_PORT >> 8) & 0xff,
	ULP_THOR2_SYM_LOOPBACK_PORT & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MODIFY_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MODIFY_PTR & 0xff}
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 10, , table: mod_record.meta */
	{
	.description = "metadata_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "rem_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rem_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ivlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rep_add_ovlan",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "ttl_update",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "tun_md_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "reserved_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_dmac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l2_smac_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv6_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_sip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l3_dip_ipv4_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_sport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "l4_dport_en",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_rsvd",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "metadata_prof",
	.field_bit_size = 4,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_GLB_RF,
	.field_opr1 = {
	(BNXT_ULP_GLB_RF_IDX_GLB_METADATA_TX_ACT_0 >> 8) & 0xff,
	BNXT_ULP_GLB_RF_IDX_GLB_METADATA_TX_ACT_0 & 0xff}
	},
	{
	.description = "metadata_data",
	.field_bit_size = 32,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_RF_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_RF_0 & 0xff}
	},
	/* act_tid: 10, , table: cmm_stat_record.0 */
	{
	.description = "packet_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "byte_count",
	.field_bit_size = 64,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	/* act_tid: 10, , table: cmm_full_act_record.0 */
	{
	.description = "type",
	.field_bit_size = 3,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "drop",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ACT_BIT,
	.field_opr1 = {
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 56) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 48) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 40) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 32) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 24) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 16) & 0xff,
	((uint64_t)BNXT_ULP_ACT_BIT_DROP >> 8) & 0xff,
	(uint64_t)BNXT_ULP_ACT_BIT_DROP & 0xff}
	},
	{
	.description = "vlan_del_rpt",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "vnic_or_vport",
	.field_bit_size = 11,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	(ULP_THOR2_SYM_LOOPBACK_PORT >> 8) & 0xff,
	ULP_THOR2_SYM_LOOPBACK_PORT & 0xff}
	},
	{
	.description = "dest_op",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "decap_func",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mirror",
	.field_bit_size = 5,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "meter_ptr",
	.field_bit_size = 10,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat0_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 >> 8) & 0xff,
	BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_0 & 0xff}
	},
	{
	.description = "stat0_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_CONST,
	.field_opr1 = {
	1}
	},
	{
	.description = "stat0_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ing_egr",
	.field_bit_size = 1,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "stat1_ctr_type",
	.field_bit_size = 2,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "mod_rec_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_RF,
	.field_opr1 = {
	(BNXT_ULP_RF_IDX_MODIFY_PTR >> 8) & 0xff,
	BNXT_ULP_RF_IDX_MODIFY_PTR & 0xff}
	},
	{
	.description = "encap_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "src_ptr",
	.field_bit_size = 28,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	},
	{
	.description = "rsvd0",
	.field_bit_size = 7,
	.field_opc = BNXT_ULP_FIELD_OPC_SRC1,
	.field_src1 = BNXT_ULP_FIELD_SRC_ZERO
	}
};

struct bnxt_ulp_mapper_ident_info ulp_thor2_act_ident_list[] = {
	/* act_tid: 1, , table: shared_meter_tbl_cache.rd */
	{
	.description = "meter_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_METER_PTR_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* act_tid: 1, , table: shared_mirror_record.rd */
	{
	.description = "mirror_id",
	.regfile_idx = BNXT_ULP_RF_IDX_MIRROR_ID_0,
	.ident_bit_size = 5,
	.ident_bit_pos = 32
	},
	/* act_tid: 1, , table: tunnel_cache.f1_f2_act_rd */
	{
	.description = "l2_cntxt_id",
	.regfile_idx = BNXT_ULP_RF_IDX_L2_CNTXT_ID_0,
	.ident_bit_size = 11,
	.ident_bit_pos = 43
	},
	{
	.description = "stat_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_FLOW_CNTR_PTR_F1,
	.ident_bit_size = 64,
	.ident_bit_pos = 54
	},
	/* act_tid: 2, , table: shared_mirror_record.del_chk */
	{
	.description = "rid",
	.regfile_idx = BNXT_ULP_RF_IDX_RID,
	.ident_bit_size = 32,
	.ident_bit_pos = 0
	},
	/* act_tid: 3, , table: shared_mirror_record.rd */
	{
	.description = "mirror_id",
	.regfile_idx = BNXT_ULP_RF_IDX_MIRROR_ID_0,
	.ident_bit_size = 5,
	.ident_bit_pos = 32
	},
	/* act_tid: 4, , table: shared_mirror_record.rd */
	{
	.description = "mirror_id",
	.regfile_idx = BNXT_ULP_RF_IDX_MIRROR_ID_0,
	.ident_bit_size = 5,
	.ident_bit_pos = 32
	},
	/* act_tid: 5, , table: meter_profile_tbl_cache.rd2 */
	{
	.description = "cbnd",
	.regfile_idx = BNXT_ULP_RF_IDX_CBND_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 37
	},
	{
	.description = "cbs",
	.regfile_idx = BNXT_ULP_RF_IDX_CBS_0,
	.ident_bit_size = 12,
	.ident_bit_pos = 39
	},
	{
	.description = "cbsm",
	.regfile_idx = BNXT_ULP_RF_IDX_CBSM_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 35
	},
	{
	.description = "cf",
	.regfile_idx = BNXT_ULP_RF_IDX_CF_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 32
	},
	{
	.description = "cir",
	.regfile_idx = BNXT_ULP_RF_IDX_CIR_0,
	.ident_bit_size = 17,
	.ident_bit_pos = 63
	},
	{
	.description = "ebnd",
	.regfile_idx = BNXT_ULP_RF_IDX_EBND_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 38
	},
	{
	.description = "ebs",
	.regfile_idx = BNXT_ULP_RF_IDX_EBS_0,
	.ident_bit_size = 12,
	.ident_bit_pos = 51
	},
	{
	.description = "ebsm",
	.regfile_idx = BNXT_ULP_RF_IDX_EBSM_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 36
	},
	{
	.description = "eir",
	.regfile_idx = BNXT_ULP_RF_IDX_EIR_0,
	.ident_bit_size = 17,
	.ident_bit_pos = 80
	},
	{
	.description = "pm",
	.regfile_idx = BNXT_ULP_RF_IDX_PM_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 33
	},
	{
	.description = "rfc2698",
	.regfile_idx = BNXT_ULP_RF_IDX_RFC2698_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 34
	},
	/* act_tid: 5, , table: meter_profile_tbl_cache.del_chk */
	{
	.description = "rid",
	.regfile_idx = BNXT_ULP_RF_IDX_RID,
	.ident_bit_size = 32,
	.ident_bit_pos = 0
	},
	/* act_tid: 5, , table: shared_meter_tbl_cache.del_chk */
	{
	.description = "rid",
	.regfile_idx = BNXT_ULP_RF_IDX_RID,
	.ident_bit_size = 32,
	.ident_bit_pos = 0
	},
	/* act_tid: 5, , table: shared_meter_tbl_cache.rd_update */
	{
	.description = "meter_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_METER_PTR_0,
	.ident_bit_size = 10,
	.ident_bit_pos = 32
	},
	/* act_tid: 5, , table: meter_tbl.update_rd */
	{
	.description = "cbnd",
	.regfile_idx = BNXT_ULP_RF_IDX_CBND_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 61
	},
	{
	.description = "cbs",
	.regfile_idx = BNXT_ULP_RF_IDX_CBS_0,
	.ident_bit_size = 12,
	.ident_bit_pos = 63
	},
	{
	.description = "cbsm",
	.regfile_idx = BNXT_ULP_RF_IDX_CBSM_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 59
	},
	{
	.description = "cf",
	.regfile_idx = BNXT_ULP_RF_IDX_CF_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 56
	},
	{
	.description = "cir",
	.regfile_idx = BNXT_ULP_RF_IDX_CIR_0,
	.ident_bit_size = 17,
	.ident_bit_pos = 87
	},
	{
	.description = "ebnd",
	.regfile_idx = BNXT_ULP_RF_IDX_EBND_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 62
	},
	{
	.description = "ebs",
	.regfile_idx = BNXT_ULP_RF_IDX_EBS_0,
	.ident_bit_size = 12,
	.ident_bit_pos = 75
	},
	{
	.description = "ebsm",
	.regfile_idx = BNXT_ULP_RF_IDX_EBSM_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 60
	},
	{
	.description = "ecn_rmp_en",
	.regfile_idx = BNXT_ULP_RF_IDX_RF_1,
	.ident_bit_size = 1,
	.ident_bit_pos = 55
	},
	{
	.description = "eir",
	.regfile_idx = BNXT_ULP_RF_IDX_EIR_0,
	.ident_bit_size = 17,
	.ident_bit_pos = 104
	},
	{
	.description = "mtr_val",
	.regfile_idx = BNXT_ULP_RF_IDX_RF_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 54
	},
	{
	.description = "pm",
	.regfile_idx = BNXT_ULP_RF_IDX_PM_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 57
	},
	{
	.description = "rfc2698",
	.regfile_idx = BNXT_ULP_RF_IDX_RFC2698_0,
	.ident_bit_size = 1,
	.ident_bit_pos = 58
	},
	/* act_tid: 8, , table: source_property_cache.rd */
	{
	.description = "sp_rec_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_MAIN_SP_PTR,
	.ident_bit_size = 32,
	.ident_bit_pos = 32
	},
	/* act_tid: 8, , table: vxlan_encap_rec_cache.rd */
	{
	.description = "enc_rec_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_ENCAP_PTR_0,
	.ident_bit_size = 32,
	.ident_bit_pos = 32
	},
	/* act_tid: 8, , table: geneve_encap_rec_cache.rd */
	{
	.description = "enc_rec_ptr",
	.regfile_idx = BNXT_ULP_RF_IDX_ENCAP_PTR_0,
	.ident_bit_size = 32,
	.ident_bit_pos = 32
	}
};