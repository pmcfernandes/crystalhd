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
 * $brcm_Workfile: bchp_pcie_phy.h $
 * $brcm_Revision: Hydra_Software_Devel/1 $
 * $brcm_Date: 7/17/09 8:13p $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on         Fri Jul 17 19:42:28 2009
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
 * $brcm_Log: /magnum/basemodules/chp/70015/rdb/a0/bchp_pcie_phy.h $
 * 
 * Hydra_Software_Devel/1   7/17/09 8:13p albertl
 * PR56880: Initial revision.
 *
 ***************************************************************************/

#ifndef BCHP_PCIE_PHY_H__
#define BCHP_PCIE_PHY_H__

/***************************************************************************
 *PCIE_PHY - PCIE PHY related registers
 ***************************************************************************/
#define BCHP_PCIE_PHY_PHY_MODE                   0x00500600 /* TYPE_PHY_MODE Register */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS            0x00500604 /* TYPE_PHY_LINK_STATUS Register */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL     0x00500608 /* TYPE_PHY_LINK_LTSSM_CONTROL Register */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LINK_NUMBER 0x0050060c /* TYPE_PHY_LINK_TRAINING_LINK_NUMBER Register */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LANE_NUMBER 0x00500610 /* TYPE_PHY_LINK_TRAINING_LANE_NUMBER Register */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS    0x00500614 /* TYPE_PHY_LINK_TRAINING_N_FTS Register */
#define BCHP_PCIE_PHY_PHY_ATTENTION              0x00500618 /* TYPE_PHY_ATTENTION Register */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK         0x0050061c /* TYPE_PHY_ATTENTION_MASK Register */
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_COUNTER  0x00500620 /* TYPE_PHY_RECEIVE_ERROR_COUNTER Register */
#define BCHP_PCIE_PHY_PHY_RECEIVE_FRAMING_ERROR_COUNTER 0x00500624 /* TYPE_PHY_RECEIVE_FRAMING_ERROR_COUNTER Register */
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD 0x00500628 /* TYPE_PHY_RECEIVE_ERROR_THRESHOLD Register */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL           0x0050062c /* TYPE_PHY_TEST_CONTROL Register */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE 0x00500630 /* TYPE_PHY_SERDES_CONTROL_OVERRIDE Register */
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE 0x00500634 /* TYPE_PHY_TIMING_PARAMETER_OVERRIDE Register */
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES 0x00500638 /* TYPE_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES Register */
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC2_LTSSM_STATES 0x0050063c /* TYPE_PHY_HARDWARE_DIAGNOSTIC2_LTSSM_STATES Register */

/***************************************************************************
 *PHY_MODE - TYPE_PHY_MODE Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_MODE :: RESERVED_0 [31:04] */
#define BCHP_PCIE_PHY_PHY_MODE_RESERVED_0_MASK                     0xfffffff0
#define BCHP_PCIE_PHY_PHY_MODE_RESERVED_0_SHIFT                    4

/* PCIE_PHY :: PHY_MODE :: UPSTREAM_DEV [03:03] */
#define BCHP_PCIE_PHY_PHY_MODE_UPSTREAM_DEV_MASK                   0x00000008
#define BCHP_PCIE_PHY_PHY_MODE_UPSTREAM_DEV_SHIFT                  3

/* PCIE_PHY :: PHY_MODE :: SERDES_SA_MODE [02:02] */
#define BCHP_PCIE_PHY_PHY_MODE_SERDES_SA_MODE_MASK                 0x00000004
#define BCHP_PCIE_PHY_PHY_MODE_SERDES_SA_MODE_SHIFT                2

/* PCIE_PHY :: PHY_MODE :: LINK_DISABLE [01:01] */
#define BCHP_PCIE_PHY_PHY_MODE_LINK_DISABLE_MASK                   0x00000002
#define BCHP_PCIE_PHY_PHY_MODE_LINK_DISABLE_SHIFT                  1

/* PCIE_PHY :: PHY_MODE :: SOFT_RESET [00:00] */
#define BCHP_PCIE_PHY_PHY_MODE_SOFT_RESET_MASK                     0x00000001
#define BCHP_PCIE_PHY_PHY_MODE_SOFT_RESET_SHIFT                    0

/***************************************************************************
 *PHY_LINK_STATUS - TYPE_PHY_LINK_STATUS Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_LINK_STATUS :: RESERVED_0 [31:10] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_RESERVED_0_MASK              0xfffffc00
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_RESERVED_0_SHIFT             10

/* PCIE_PHY :: PHY_LINK_STATUS :: BUFFER_OVERRUN [09:09] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_BUFFER_OVERRUN_MASK          0x00000200
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_BUFFER_OVERRUN_SHIFT         9

/* PCIE_PHY :: PHY_LINK_STATUS :: BUFFER_UNDERRUN [08:08] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_BUFFER_UNDERRUN_MASK         0x00000100
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_BUFFER_UNDERRUN_SHIFT        8

/* PCIE_PHY :: PHY_LINK_STATUS :: LINK_PARTNER_REQUEST_LOOPBACK [07:07] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_LINK_PARTNER_REQUEST_LOOPBACK_MASK 0x00000080
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_LINK_PARTNER_REQUEST_LOOPBACK_SHIFT 7

/* PCIE_PHY :: PHY_LINK_STATUS :: LINK_PARTNER_DISABLE_SCRAMBLER [06:06] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_LINK_PARTNER_DISABLE_SCRAMBLER_MASK 0x00000040
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_LINK_PARTNER_DISABLE_SCRAMBLER_SHIFT 6

/* PCIE_PHY :: PHY_LINK_STATUS :: EXTENDED_SYNCH [05:05] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_EXTENDED_SYNCH_MASK          0x00000020
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_EXTENDED_SYNCH_SHIFT         5

/* PCIE_PHY :: PHY_LINK_STATUS :: POLARITY_INVERTED [04:04] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_POLARITY_INVERTED_MASK       0x00000010
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_POLARITY_INVERTED_SHIFT      4

/* PCIE_PHY :: PHY_LINK_STATUS :: LINK_UP [03:03] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_LINK_UP_MASK                 0x00000008
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_LINK_UP_SHIFT                3

/* PCIE_PHY :: PHY_LINK_STATUS :: LINK_TRAINING [02:02] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_LINK_TRAINING_MASK           0x00000004
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_LINK_TRAINING_SHIFT          2

/* PCIE_PHY :: PHY_LINK_STATUS :: RECEIVE_DATA_VALID [01:01] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_RECEIVE_DATA_VALID_MASK      0x00000002
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_RECEIVE_DATA_VALID_SHIFT     1

/* PCIE_PHY :: PHY_LINK_STATUS :: RESERVED_1 [00:00] */
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_RESERVED_1_MASK              0x00000001
#define BCHP_PCIE_PHY_PHY_LINK_STATUS_RESERVED_1_SHIFT             0

/***************************************************************************
 *PHY_LINK_LTSSM_CONTROL - TYPE_PHY_LINK_LTSSM_CONTROL Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: RESERVED_0 [31:08] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_RESERVED_0_MASK       0xffffff00
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_RESERVED_0_SHIFT      8

/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: DISABLESCRAMBLE [07:07] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_DISABLESCRAMBLE_MASK  0x00000080
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_DISABLESCRAMBLE_SHIFT 7

/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: DETECTSTATE [06:06] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_DETECTSTATE_MASK      0x00000040
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_DETECTSTATE_SHIFT     6

/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: POLLINGSTATE [05:05] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_POLLINGSTATE_MASK     0x00000020
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_POLLINGSTATE_SHIFT    5

/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: CONFIGSTATE [04:04] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_CONFIGSTATE_MASK      0x00000010
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_CONFIGSTATE_SHIFT     4

/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: RECOVSTATE [03:03] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_RECOVSTATE_MASK       0x00000008
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_RECOVSTATE_SHIFT      3

/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: EXTLBSTATE [02:02] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_EXTLBSTATE_MASK       0x00000004
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_EXTLBSTATE_SHIFT      2

/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: RESETSTATE [01:01] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_RESETSTATE_MASK       0x00000002
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_RESETSTATE_SHIFT      1

/* PCIE_PHY :: PHY_LINK_LTSSM_CONTROL :: DISABLESTATE [00:00] */
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_DISABLESTATE_MASK     0x00000001
#define BCHP_PCIE_PHY_PHY_LINK_LTSSM_CONTROL_DISABLESTATE_SHIFT    0

/***************************************************************************
 *PHY_LINK_TRAINING_LINK_NUMBER - TYPE_PHY_LINK_TRAINING_LINK_NUMBER Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_LINK_TRAINING_LINK_NUMBER :: RESERVED_0 [31:08] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LINK_NUMBER_RESERVED_0_MASK 0xffffff00
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LINK_NUMBER_RESERVED_0_SHIFT 8

/* PCIE_PHY :: PHY_LINK_TRAINING_LINK_NUMBER :: LANE_NUMBER [07:00] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LINK_NUMBER_LANE_NUMBER_MASK 0x000000ff
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LINK_NUMBER_LANE_NUMBER_SHIFT 0

/***************************************************************************
 *PHY_LINK_TRAINING_LANE_NUMBER - TYPE_PHY_LINK_TRAINING_LANE_NUMBER Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_LINK_TRAINING_LANE_NUMBER :: RESERVED_0 [31:08] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LANE_NUMBER_RESERVED_0_MASK 0xffffff00
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LANE_NUMBER_RESERVED_0_SHIFT 8

/* PCIE_PHY :: PHY_LINK_TRAINING_LANE_NUMBER :: LANE_NUMBER [07:00] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LANE_NUMBER_LANE_NUMBER_MASK 0x000000ff
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_LANE_NUMBER_LANE_NUMBER_SHIFT 0

/***************************************************************************
 *PHY_LINK_TRAINING_N_FTS - TYPE_PHY_LINK_TRAINING_N_FTS Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_LINK_TRAINING_N_FTS :: RESERVED_0 [31:25] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_RESERVED_0_MASK      0xfe000000
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_RESERVED_0_SHIFT     25

/* PCIE_PHY :: PHY_LINK_TRAINING_N_FTS :: TRANSMITTER_N_FTS_OVERRIDE [24:24] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_TRANSMITTER_N_FTS_OVERRIDE_MASK 0x01000000
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_TRANSMITTER_N_FTS_OVERRIDE_SHIFT 24

/* PCIE_PHY :: PHY_LINK_TRAINING_N_FTS :: TRANSMITTER_N_FTS_OVERRIDE_VALUE [23:16] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_TRANSMITTER_N_FTS_OVERRIDE_VALUE_MASK 0x00ff0000
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_TRANSMITTER_N_FTS_OVERRIDE_VALUE_SHIFT 16

/* PCIE_PHY :: PHY_LINK_TRAINING_N_FTS :: TRANSMITTER_N_FTS [15:08] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_TRANSMITTER_N_FTS_MASK 0x0000ff00
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_TRANSMITTER_N_FTS_SHIFT 8

/* PCIE_PHY :: PHY_LINK_TRAINING_N_FTS :: RECEIVER_N_FTS [07:00] */
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_RECEIVER_N_FTS_MASK  0x000000ff
#define BCHP_PCIE_PHY_PHY_LINK_TRAINING_N_FTS_RECEIVER_N_FTS_SHIFT 0

/***************************************************************************
 *PHY_ATTENTION - TYPE_PHY_ATTENTION Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_ATTENTION :: RESERVED_0 [31:08] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_RESERVED_0_MASK                0xffffff00
#define BCHP_PCIE_PHY_PHY_ATTENTION_RESERVED_0_SHIFT               8

/* PCIE_PHY :: PHY_ATTENTION :: HOT_RESET [07:07] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_HOT_RESET_MASK                 0x00000080
#define BCHP_PCIE_PHY_PHY_ATTENTION_HOT_RESET_SHIFT                7

/* PCIE_PHY :: PHY_ATTENTION :: LINK_DOWN [06:06] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_LINK_DOWN_MASK                 0x00000040
#define BCHP_PCIE_PHY_PHY_ATTENTION_LINK_DOWN_SHIFT                6

/* PCIE_PHY :: PHY_ATTENTION :: TRAINING_ERROR [05:05] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_TRAINING_ERROR_MASK            0x00000020
#define BCHP_PCIE_PHY_PHY_ATTENTION_TRAINING_ERROR_SHIFT           5

/* PCIE_PHY :: PHY_ATTENTION :: BUFFER_OVERRUN [04:04] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_BUFFER_OVERRUN_MASK            0x00000010
#define BCHP_PCIE_PHY_PHY_ATTENTION_BUFFER_OVERRUN_SHIFT           4

/* PCIE_PHY :: PHY_ATTENTION :: BUFFER_UNDERRUN [03:03] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_BUFFER_UNDERRUN_MASK           0x00000008
#define BCHP_PCIE_PHY_PHY_ATTENTION_BUFFER_UNDERRUN_SHIFT          3

/* PCIE_PHY :: PHY_ATTENTION :: RECEIVE_FRAMING_ERROR [02:02] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_RECEIVE_FRAMING_ERROR_MASK     0x00000004
#define BCHP_PCIE_PHY_PHY_ATTENTION_RECEIVE_FRAMING_ERROR_SHIFT    2

/* PCIE_PHY :: PHY_ATTENTION :: RECEIVE_DISPARITY_ERROR [01:01] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_RECEIVE_DISPARITY_ERROR_MASK   0x00000002
#define BCHP_PCIE_PHY_PHY_ATTENTION_RECEIVE_DISPARITY_ERROR_SHIFT  1

/* PCIE_PHY :: PHY_ATTENTION :: RECEIVE_CODE_ERROR [00:00] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_RECEIVE_CODE_ERROR_MASK        0x00000001
#define BCHP_PCIE_PHY_PHY_ATTENTION_RECEIVE_CODE_ERROR_SHIFT       0

/***************************************************************************
 *PHY_ATTENTION_MASK - TYPE_PHY_ATTENTION_MASK Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_ATTENTION_MASK :: RESERVED_0 [31:08] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_RESERVED_0_MASK           0xffffff00
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_RESERVED_0_SHIFT          8

/* PCIE_PHY :: PHY_ATTENTION_MASK :: HOT_RESET_MASK [07:07] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_HOT_RESET_MASK_MASK       0x00000080
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_HOT_RESET_MASK_SHIFT      7

/* PCIE_PHY :: PHY_ATTENTION_MASK :: LINK_DOWN_MASK [06:06] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_LINK_DOWN_MASK_MASK       0x00000040
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_LINK_DOWN_MASK_SHIFT      6

/* PCIE_PHY :: PHY_ATTENTION_MASK :: TRAINING_ERROR_MASK [05:05] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_TRAINING_ERROR_MASK_MASK  0x00000020
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_TRAINING_ERROR_MASK_SHIFT 5

/* PCIE_PHY :: PHY_ATTENTION_MASK :: BUFFER_OVERRUN_MASK [04:04] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_BUFFER_OVERRUN_MASK_MASK  0x00000010
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_BUFFER_OVERRUN_MASK_SHIFT 4

/* PCIE_PHY :: PHY_ATTENTION_MASK :: BUFFER_UNDERRUN_MASK [03:03] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_BUFFER_UNDERRUN_MASK_MASK 0x00000008
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_BUFFER_UNDERRUN_MASK_SHIFT 3

/* PCIE_PHY :: PHY_ATTENTION_MASK :: RECEIVE_FRAME_ERROR_MASK [02:02] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_RECEIVE_FRAME_ERROR_MASK_MASK 0x00000004
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_RECEIVE_FRAME_ERROR_MASK_SHIFT 2

/* PCIE_PHY :: PHY_ATTENTION_MASK :: RECEIVE_DISPARITY_ERROR_MASK [01:01] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_RECEIVE_DISPARITY_ERROR_MASK_MASK 0x00000002
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_RECEIVE_DISPARITY_ERROR_MASK_SHIFT 1

/* PCIE_PHY :: PHY_ATTENTION_MASK :: RECEIVE_CODE_ERROR_MASK [00:00] */
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_RECEIVE_CODE_ERROR_MASK_MASK 0x00000001
#define BCHP_PCIE_PHY_PHY_ATTENTION_MASK_RECEIVE_CODE_ERROR_MASK_SHIFT 0

/***************************************************************************
 *PHY_RECEIVE_ERROR_COUNTER - TYPE_PHY_RECEIVE_ERROR_COUNTER Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_RECEIVE_ERROR_COUNTER :: DISPARITY_ERROR_COUNT [31:16] */
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_COUNTER_DISPARITY_ERROR_COUNT_MASK 0xffff0000
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_COUNTER_DISPARITY_ERROR_COUNT_SHIFT 16

/* PCIE_PHY :: PHY_RECEIVE_ERROR_COUNTER :: CODE_ERROR_COUNT [15:00] */
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_COUNTER_CODE_ERROR_COUNT_MASK 0x0000ffff
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_COUNTER_CODE_ERROR_COUNT_SHIFT 0

/***************************************************************************
 *PHY_RECEIVE_FRAMING_ERROR_COUNTER - TYPE_PHY_RECEIVE_FRAMING_ERROR_COUNTER Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_RECEIVE_FRAMING_ERROR_COUNTER :: RESERVED_0 [31:16] */
#define BCHP_PCIE_PHY_PHY_RECEIVE_FRAMING_ERROR_COUNTER_RESERVED_0_MASK 0xffff0000
#define BCHP_PCIE_PHY_PHY_RECEIVE_FRAMING_ERROR_COUNTER_RESERVED_0_SHIFT 16

/* PCIE_PHY :: PHY_RECEIVE_FRAMING_ERROR_COUNTER :: FRAMING_ERROR_COUNT [15:00] */
#define BCHP_PCIE_PHY_PHY_RECEIVE_FRAMING_ERROR_COUNTER_FRAMING_ERROR_COUNT_MASK 0x0000ffff
#define BCHP_PCIE_PHY_PHY_RECEIVE_FRAMING_ERROR_COUNTER_FRAMING_ERROR_COUNT_SHIFT 0

/***************************************************************************
 *PHY_RECEIVE_ERROR_THRESHOLD - TYPE_PHY_RECEIVE_ERROR_THRESHOLD Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_RECEIVE_ERROR_THRESHOLD :: RESERVED_0 [31:12] */
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD_RESERVED_0_MASK  0xfffff000
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD_RESERVED_0_SHIFT 12

/* PCIE_PHY :: PHY_RECEIVE_ERROR_THRESHOLD :: FRAME_ERROR_THRESHOLD [11:08] */
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD_FRAME_ERROR_THRESHOLD_MASK 0x00000f00
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD_FRAME_ERROR_THRESHOLD_SHIFT 8

/* PCIE_PHY :: PHY_RECEIVE_ERROR_THRESHOLD :: DISPARITY_ERROR_THRESHOLD [07:04] */
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD_DISPARITY_ERROR_THRESHOLD_MASK 0x000000f0
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD_DISPARITY_ERROR_THRESHOLD_SHIFT 4

/* PCIE_PHY :: PHY_RECEIVE_ERROR_THRESHOLD :: CODE_ERROR_THRESHOLD [03:00] */
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD_CODE_ERROR_THRESHOLD_MASK 0x0000000f
#define BCHP_PCIE_PHY_PHY_RECEIVE_ERROR_THRESHOLD_CODE_ERROR_THRESHOLD_SHIFT 0

/***************************************************************************
 *PHY_TEST_CONTROL - TYPE_PHY_TEST_CONTROL Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_TEST_CONTROL :: UNUSED_0 [31:31] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_UNUSED_0_MASK               0x80000000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_UNUSED_0_SHIFT              31

/* PCIE_PHY :: PHY_TEST_CONTROL :: DELAY_HOTRESET_ENABLE [30:30] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DELAY_HOTRESET_ENABLE_MASK  0x40000000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DELAY_HOTRESET_ENABLE_SHIFT 30

/* PCIE_PHY :: PHY_TEST_CONTROL :: CQ27039_TSX_MAJORITY_CHECK [29:29] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ27039_TSX_MAJORITY_CHECK_MASK 0x20000000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ27039_TSX_MAJORITY_CHECK_SHIFT 29

/* PCIE_PHY :: PHY_TEST_CONTROL :: CQ27039_MASK_OFF_BOGUS [28:28] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ27039_MASK_OFF_BOGUS_MASK 0x10000000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ27039_MASK_OFF_BOGUS_SHIFT 28

/* PCIE_PHY :: PHY_TEST_CONTROL :: CQ27039_POLARITY_CHECK [27:27] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ27039_POLARITY_CHECK_MASK 0x08000000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ27039_POLARITY_CHECK_SHIFT 27

/* PCIE_PHY :: PHY_TEST_CONTROL :: CQ27039_STICKY_POLARITY_CHECK [26:26] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ27039_STICKY_POLARITY_CHECK_MASK 0x04000000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ27039_STICKY_POLARITY_CHECK_SHIFT 26

/* PCIE_PHY :: PHY_TEST_CONTROL :: UNUSED_1 [25:23] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_UNUSED_1_MASK               0x03800000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_UNUSED_1_SHIFT              23

/* PCIE_PHY :: PHY_TEST_CONTROL :: TWO_OS_RULE_RELAXING [22:22] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_TWO_OS_RULE_RELAXING_MASK   0x00400000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_TWO_OS_RULE_RELAXING_SHIFT  22

/* PCIE_PHY :: PHY_TEST_CONTROL :: DISABLE_HOT_RESET [21:21] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_HOT_RESET_MASK      0x00200000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_HOT_RESET_SHIFT     21

/* PCIE_PHY :: PHY_TEST_CONTROL :: DISABLE_LINK_DOWN_RESET [20:20] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_LINK_DOWN_RESET_MASK 0x00100000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_LINK_DOWN_RESET_SHIFT 20

/* PCIE_PHY :: PHY_TEST_CONTROL :: DISABLE_EIDLE_SET_TRANSMITTING_AT_TIME_OUT_TO_DETECT_STATE [19:19] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_EIDLE_SET_TRANSMITTING_AT_TIME_OUT_TO_DETECT_STATE_MASK 0x00080000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_EIDLE_SET_TRANSMITTING_AT_TIME_OUT_TO_DETECT_STATE_SHIFT 19

/* PCIE_PHY :: PHY_TEST_CONTROL :: DISABLE_ERROR_EXIT [18:18] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_ERROR_EXIT_MASK     0x00040000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_ERROR_EXIT_SHIFT    18

/* PCIE_PHY :: PHY_TEST_CONTROL :: DISABLE_ERROR_MASK [17:17] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_ERROR_MASK_MASK     0x00020000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_ERROR_MASK_SHIFT    17

/* PCIE_PHY :: PHY_TEST_CONTROL :: DISABLE_ERROR_RECOVERY [16:16] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_ERROR_RECOVERY_MASK 0x00010000
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_DISABLE_ERROR_RECOVERY_SHIFT 16

/* PCIE_PHY :: PHY_TEST_CONTROL :: RESERVED_0 [15:08] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_RESERVED_0_MASK             0x0000ff00
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_RESERVED_0_SHIFT            8

/* PCIE_PHY :: PHY_TEST_CONTROL :: UNUSED_2 [07:04] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_UNUSED_2_MASK               0x000000f0
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_UNUSED_2_SHIFT              4

/* PCIE_PHY :: PHY_TEST_CONTROL :: CQ22100_FIX_DISABLE [03:03] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ22100_FIX_DISABLE_MASK    0x00000008
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_CQ22100_FIX_DISABLE_SHIFT   3

/* PCIE_PHY :: PHY_TEST_CONTROL :: TRAINING_BYPASS [02:02] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_TRAINING_BYPASS_MASK        0x00000004
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_TRAINING_BYPASS_SHIFT       2

/* PCIE_PHY :: PHY_TEST_CONTROL :: EXTERNAL_LOOPBACK [01:01] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_EXTERNAL_LOOPBACK_MASK      0x00000002
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_EXTERNAL_LOOPBACK_SHIFT     1

/* PCIE_PHY :: PHY_TEST_CONTROL :: INTERNAL_LOOPBACK [00:00] */
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_INTERNAL_LOOPBACK_MASK      0x00000001
#define BCHP_PCIE_PHY_PHY_TEST_CONTROL_INTERNAL_LOOPBACK_SHIFT     0

/***************************************************************************
 *PHY_SERDES_CONTROL_OVERRIDE - TYPE_PHY_SERDES_CONTROL_OVERRIDE Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: RESERVED_0 [31:18] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RESERVED_0_MASK  0xfffc0000
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RESERVED_0_SHIFT 18

/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: OBSVELECIDLEVALUE [17:17] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_OBSVELECIDLEVALUE_MASK 0x00020000
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_OBSVELECIDLEVALUE_SHIFT 17

/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: OBSVELECIDLEOVERRIDE [16:16] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_OBSVELECIDLEOVERRIDE_MASK 0x00010000
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_OBSVELECIDLEOVERRIDE_SHIFT 16

/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: PLLISUPVALUE [15:15] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_PLLISUPVALUE_MASK 0x00008000
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_PLLISUPVALUE_SHIFT 15

/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: PLLISUPOVERRIDE [14:14] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_PLLISUPOVERRIDE_MASK 0x00004000
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_PLLISUPOVERRIDE_SHIFT 14

/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: RCVRDETVALUE [13:13] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RCVRDETVALUE_MASK 0x00002000
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RCVRDETVALUE_SHIFT 13

/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: RCVRDETOVERRIDE [12:12] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RCVRDETOVERRIDE_MASK 0x00001000
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RCVRDETOVERRIDE_SHIFT 12

/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: RCVRDETTIMECONTROL [11:10] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RCVRDETTIMECONTROL_MASK 0x00000c00
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RCVRDETTIMECONTROL_SHIFT 10

/* PCIE_PHY :: PHY_SERDES_CONTROL_OVERRIDE :: RCVRDETECTIONTIME [09:00] */
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RCVRDETECTIONTIME_MASK 0x000003ff
#define BCHP_PCIE_PHY_PHY_SERDES_CONTROL_OVERRIDE_RCVRDETECTIONTIME_SHIFT 0

/***************************************************************************
 *PHY_TIMING_PARAMETER_OVERRIDE - TYPE_PHY_TIMING_PARAMETER_OVERRIDE Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_TIMING_PARAMETER_OVERRIDE :: TS1NUMOVERRIDE [31:31] */
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TS1NUMOVERRIDE_MASK 0x80000000
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TS1NUMOVERRIDE_SHIFT 31

/* PCIE_PHY :: PHY_TIMING_PARAMETER_OVERRIDE :: TXIDLEMINOVERRIDE [30:30] */
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TXIDLEMINOVERRIDE_MASK 0x40000000
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TXIDLEMINOVERRIDE_SHIFT 30

/* PCIE_PHY :: PHY_TIMING_PARAMETER_OVERRIDE :: TXIDLE2IDLEOVERRIDE [29:29] */
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TXIDLE2IDLEOVERRIDE_MASK 0x20000000
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TXIDLE2IDLEOVERRIDE_SHIFT 29

/* PCIE_PHY :: PHY_TIMING_PARAMETER_OVERRIDE :: UNUSED_0 [28:28] */
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_UNUSED_0_MASK  0x10000000
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_UNUSED_0_SHIFT 28

/* PCIE_PHY :: PHY_TIMING_PARAMETER_OVERRIDE :: N_TS1INPOLLINGACTIVE [27:16] */
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_N_TS1INPOLLINGACTIVE_MASK 0x0fff0000
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_N_TS1INPOLLINGACTIVE_SHIFT 16

/* PCIE_PHY :: PHY_TIMING_PARAMETER_OVERRIDE :: TXIDLEMINTIME [15:08] */
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TXIDLEMINTIME_MASK 0x0000ff00
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TXIDLEMINTIME_SHIFT 8

/* PCIE_PHY :: PHY_TIMING_PARAMETER_OVERRIDE :: TXIDLESETTOIDLETIME [07:00] */
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TXIDLESETTOIDLETIME_MASK 0x000000ff
#define BCHP_PCIE_PHY_PHY_TIMING_PARAMETER_OVERRIDE_TXIDLESETTOIDLETIME_SHIFT 0

/***************************************************************************
 *PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES - TYPE_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES :: RESERVED_0 [31:10] */
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES_RESERVED_0_MASK 0xfffffc00
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES_RESERVED_0_SHIFT 10

/* PCIE_PHY :: PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES :: TRANSMIT_STATE_MACHINE_STATE [09:04] */
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES_TRANSMIT_STATE_MACHINE_STATE_MASK 0x000003f0
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES_TRANSMIT_STATE_MACHINE_STATE_SHIFT 4

/* PCIE_PHY :: PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES :: RECEIVE_STATE_MACHINE_STATE [03:00] */
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES_RECEIVE_STATE_MACHINE_STATE_MASK 0x0000000f
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC1_TX_RX_SM_STATES_RECEIVE_STATE_MACHINE_STATE_SHIFT 0

/***************************************************************************
 *PHY_HARDWARE_DIAGNOSTIC2_LTSSM_STATES - TYPE_PHY_HARDWARE_DIAGNOSTIC2_LTSSM_STATES Register
 ***************************************************************************/
/* PCIE_PHY :: PHY_HARDWARE_DIAGNOSTIC2_LTSSM_STATES :: LTSSM_STATE_MACHINE_STATE [31:00] */
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC2_LTSSM_STATES_LTSSM_STATE_MACHINE_STATE_MASK 0xffffffff
#define BCHP_PCIE_PHY_PHY_HARDWARE_DIAGNOSTIC2_LTSSM_STATES_LTSSM_STATE_MACHINE_STATE_SHIFT 0

#endif /* #ifndef BCHP_PCIE_PHY_H__ */

/* End of File */