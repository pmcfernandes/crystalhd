/***************************************************************************
 *     Copyright (c) 1999-2009, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: bchp_misc_perst.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:12p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:43:23 2009
 *                 MD5 Checksum         2914699efc3fb3edefca5cb4f4f38b34
 *
 * Compiled with:  RDB Utility          combo_header.pl
 *                 RDB Parser           3.0
 *                 unknown              unknown
 *                 Perl Interpreter     5.008008
 *                 Operating System     linux
 *
 * Revision History:
 *
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_misc_perst.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:12p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_MISC_PERST_H__
#define BCHP_MISC_PERST_H__

/***************************************************************************
 *MISC_PERST - Registers for Link reset on PERST_N
 ***************************************************************************/
#define BCHP_MISC_PERST_ECO_CTRL_PERST           0x00502280 /* ECO PCIE Reset Control Register */
#define BCHP_MISC_PERST_DECODER_CTRL             0x00502284 /* Decoder Control Register */
#define BCHP_MISC_PERST_CCE_STATUS               0x00502288 /* Config Copy Engine Status */
#define BCHP_MISC_PERST_PCIE_DEBUG               0x0050228c /* PCIE Debug Control Register */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS        0x00502290 /* PCIE Debug Status Register */
#define BCHP_MISC_PERST_PCIE_LTSSM_STATUS        0x00502294 /* PCIE LTSSM Status Register */
#define BCHP_MISC_PERST_CLOCK_CTRL               0x0050229c /* Clock Control Register */

/***************************************************************************
 *ECO_CTRL_PERST - ECO PCIE Reset Control Register
 ***************************************************************************/
/* MISC_PERST :: ECO_CTRL_PERST :: reserved0 [31:16] */
#define BCHP_MISC_PERST_ECO_CTRL_PERST_reserved0_MASK              0xffff0000
#define BCHP_MISC_PERST_ECO_CTRL_PERST_reserved0_SHIFT             16

/* MISC_PERST :: ECO_CTRL_PERST :: ECO_PERST_N [15:00] */
#define BCHP_MISC_PERST_ECO_CTRL_PERST_ECO_PERST_N_MASK            0x0000ffff
#define BCHP_MISC_PERST_ECO_CTRL_PERST_ECO_PERST_N_SHIFT           0

/***************************************************************************
 *DECODER_CTRL - Decoder Control Register
 ***************************************************************************/
/* MISC_PERST :: DECODER_CTRL :: reserved0 [31:05] */
#define BCHP_MISC_PERST_DECODER_CTRL_reserved0_MASK                0xffffffe0
#define BCHP_MISC_PERST_DECODER_CTRL_reserved0_SHIFT               5

/* MISC_PERST :: DECODER_CTRL :: STOP_CLK_OUT [04:04] */
#define BCHP_MISC_PERST_DECODER_CTRL_STOP_CLK_OUT_MASK             0x00000010
#define BCHP_MISC_PERST_DECODER_CTRL_STOP_CLK_OUT_SHIFT            4

/* MISC_PERST :: DECODER_CTRL :: reserved1 [03:01] */
#define BCHP_MISC_PERST_DECODER_CTRL_reserved1_MASK                0x0000000e
#define BCHP_MISC_PERST_DECODER_CTRL_reserved1_SHIFT               1

/* MISC_PERST :: DECODER_CTRL :: BCM2727_RUN [00:00] */
#define BCHP_MISC_PERST_DECODER_CTRL_BCM2727_RUN_MASK              0x00000001
#define BCHP_MISC_PERST_DECODER_CTRL_BCM2727_RUN_SHIFT             0

/***************************************************************************
 *CCE_STATUS - Config Copy Engine Status
 ***************************************************************************/
/* MISC_PERST :: CCE_STATUS :: CCE_DONE [31:31] */
#define BCHP_MISC_PERST_CCE_STATUS_CCE_DONE_MASK                   0x80000000
#define BCHP_MISC_PERST_CCE_STATUS_CCE_DONE_SHIFT                  31

/* MISC_PERST :: CCE_STATUS :: reserved0 [30:03] */
#define BCHP_MISC_PERST_CCE_STATUS_reserved0_MASK                  0x7ffffff8
#define BCHP_MISC_PERST_CCE_STATUS_reserved0_SHIFT                 3

/* MISC_PERST :: CCE_STATUS :: CCE_BAD_GISB_ACCESS [02:02] */
#define BCHP_MISC_PERST_CCE_STATUS_CCE_BAD_GISB_ACCESS_MASK        0x00000004
#define BCHP_MISC_PERST_CCE_STATUS_CCE_BAD_GISB_ACCESS_SHIFT       2

/* MISC_PERST :: CCE_STATUS :: CCE_BAD_I2C_ACCESS [01:01] */
#define BCHP_MISC_PERST_CCE_STATUS_CCE_BAD_I2C_ACCESS_MASK         0x00000002
#define BCHP_MISC_PERST_CCE_STATUS_CCE_BAD_I2C_ACCESS_SHIFT        1

/* MISC_PERST :: CCE_STATUS :: CCE_BAD_SECTION_ID [00:00] */
#define BCHP_MISC_PERST_CCE_STATUS_CCE_BAD_SECTION_ID_MASK         0x00000001
#define BCHP_MISC_PERST_CCE_STATUS_CCE_BAD_SECTION_ID_SHIFT        0

/***************************************************************************
 *PCIE_DEBUG - PCIE Debug Control Register
 ***************************************************************************/
/* MISC_PERST :: PCIE_DEBUG :: SERDES_TERM_CNT [31:16] */
#define BCHP_MISC_PERST_PCIE_DEBUG_SERDES_TERM_CNT_MASK            0xffff0000
#define BCHP_MISC_PERST_PCIE_DEBUG_SERDES_TERM_CNT_SHIFT           16

/* MISC_PERST :: PCIE_DEBUG :: reserved0 [15:13] */
#define BCHP_MISC_PERST_PCIE_DEBUG_reserved0_MASK                  0x0000e000
#define BCHP_MISC_PERST_PCIE_DEBUG_reserved0_SHIFT                 13

/* MISC_PERST :: PCIE_DEBUG :: FORCE_CLOCK_SWITCH [12:12] */
#define BCHP_MISC_PERST_PCIE_DEBUG_FORCE_CLOCK_SWITCH_MASK         0x00001000
#define BCHP_MISC_PERST_PCIE_DEBUG_FORCE_CLOCK_SWITCH_SHIFT        12

/* MISC_PERST :: PCIE_DEBUG :: CLKREQ_PLLPD_EXTEND_DISABLE [11:11] */
#define BCHP_MISC_PERST_PCIE_DEBUG_CLKREQ_PLLPD_EXTEND_DISABLE_MASK 0x00000800
#define BCHP_MISC_PERST_PCIE_DEBUG_CLKREQ_PLLPD_EXTEND_DISABLE_SHIFT 11

/* MISC_PERST :: PCIE_DEBUG :: PLL_VCO_RESCUE [10:10] */
#define BCHP_MISC_PERST_PCIE_DEBUG_PLL_VCO_RESCUE_MASK             0x00000400
#define BCHP_MISC_PERST_PCIE_DEBUG_PLL_VCO_RESCUE_SHIFT            10

/* MISC_PERST :: PCIE_DEBUG :: PLL_PDN_OVERRIDE [09:09] */
#define BCHP_MISC_PERST_PCIE_DEBUG_PLL_PDN_OVERRIDE_MASK           0x00000200
#define BCHP_MISC_PERST_PCIE_DEBUG_PLL_PDN_OVERRIDE_SHIFT          9

/* MISC_PERST :: PCIE_DEBUG :: CORE_CLOCK_OVR [08:08] */
#define BCHP_MISC_PERST_PCIE_DEBUG_CORE_CLOCK_OVR_MASK             0x00000100
#define BCHP_MISC_PERST_PCIE_DEBUG_CORE_CLOCK_OVR_SHIFT            8

/* MISC_PERST :: PCIE_DEBUG :: reserved1 [07:04] */
#define BCHP_MISC_PERST_PCIE_DEBUG_reserved1_MASK                  0x000000f0
#define BCHP_MISC_PERST_PCIE_DEBUG_reserved1_SHIFT                 4

/* MISC_PERST :: PCIE_DEBUG :: PCIE_TMUX_SEL [03:00] */
#define BCHP_MISC_PERST_PCIE_DEBUG_PCIE_TMUX_SEL_MASK              0x0000000f
#define BCHP_MISC_PERST_PCIE_DEBUG_PCIE_TMUX_SEL_SHIFT             0

/***************************************************************************
 *PCIE_DEBUG_STATUS - PCIE Debug Status Register
 ***************************************************************************/
/* MISC_PERST :: PCIE_DEBUG_STATUS :: reserved0 [31:20] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_reserved0_MASK           0xfff00000
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_reserved0_SHIFT          20

/* MISC_PERST :: PCIE_DEBUG_STATUS :: PCS_LINK_IN_L2 [19:19] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PCS_LINK_IN_L2_MASK      0x00080000
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PCS_LINK_IN_L2_SHIFT     19

/* MISC_PERST :: PCIE_DEBUG_STATUS :: PCS_LINK_IN_L1 [18:18] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PCS_LINK_IN_L1_MASK      0x00040000
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PCS_LINK_IN_L1_SHIFT     18

/* MISC_PERST :: PCIE_DEBUG_STATUS :: PCS_LINK_IN_L0S [17:17] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PCS_LINK_IN_L0S_MASK     0x00020000
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PCS_LINK_IN_L0S_SHIFT    17

/* MISC_PERST :: PCIE_DEBUG_STATUS :: PCIE_IDLE [16:16] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PCIE_IDLE_MASK           0x00010000
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PCIE_IDLE_SHIFT          16

/* MISC_PERST :: PCIE_DEBUG_STATUS :: reserved1 [15:06] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_reserved1_MASK           0x0000ffc0
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_reserved1_SHIFT          6

/* MISC_PERST :: PCIE_DEBUG_STATUS :: DATALINKATTN [05:05] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_DATALINKATTN_MASK        0x00000020
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_DATALINKATTN_SHIFT       5

/* MISC_PERST :: PCIE_DEBUG_STATUS :: PHYLINKATTN [04:04] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PHYLINKATTN_MASK         0x00000010
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PHYLINKATTN_SHIFT        4

/* MISC_PERST :: PCIE_DEBUG_STATUS :: reserved2 [03:02] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_reserved2_MASK           0x0000000c
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_reserved2_SHIFT          2

/* MISC_PERST :: PCIE_DEBUG_STATUS :: DATA_LINKUP [01:01] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_DATA_LINKUP_MASK         0x00000002
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_DATA_LINKUP_SHIFT        1

/* MISC_PERST :: PCIE_DEBUG_STATUS :: PHY_LINKUP [00:00] */
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PHY_LINKUP_MASK          0x00000001
#define BCHP_MISC_PERST_PCIE_DEBUG_STATUS_PHY_LINKUP_SHIFT         0

/***************************************************************************
 *PCIE_LTSSM_STATUS - PCIE LTSSM Status Register
 ***************************************************************************/
/* MISC_PERST :: PCIE_LTSSM_STATUS :: LTSSM_VECTOR [31:00] */
#define BCHP_MISC_PERST_PCIE_LTSSM_STATUS_LTSSM_VECTOR_MASK        0xffffffff
#define BCHP_MISC_PERST_PCIE_LTSSM_STATUS_LTSSM_VECTOR_SHIFT       0

/***************************************************************************
 *CLOCK_CTRL - Clock Control Register
 ***************************************************************************/
/* MISC_PERST :: CLOCK_CTRL :: reserved0 [31:03] */
#define BCHP_MISC_PERST_CLOCK_CTRL_reserved0_MASK                  0xfffffff8
#define BCHP_MISC_PERST_CLOCK_CTRL_reserved0_SHIFT                 3

/* MISC_PERST :: CLOCK_CTRL :: EARLY_L1_EXIT [02:02] */
#define BCHP_MISC_PERST_CLOCK_CTRL_EARLY_L1_EXIT_MASK              0x00000004
#define BCHP_MISC_PERST_CLOCK_CTRL_EARLY_L1_EXIT_SHIFT             2

/* MISC_PERST :: CLOCK_CTRL :: STOP_CORE_CLK [01:01] */
#define BCHP_MISC_PERST_CLOCK_CTRL_STOP_CORE_CLK_MASK              0x00000002
#define BCHP_MISC_PERST_CLOCK_CTRL_STOP_CORE_CLK_SHIFT             1

/* MISC_PERST :: CLOCK_CTRL :: SEL_ALT_CLK [00:00] */
#define BCHP_MISC_PERST_CLOCK_CTRL_SEL_ALT_CLK_MASK                0x00000001
#define BCHP_MISC_PERST_CLOCK_CTRL_SEL_ALT_CLK_SHIFT               0

#endif /* #ifndef BCHP_MISC_PERST_H__ */

/* End of File */