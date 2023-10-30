/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * Copyright (c) 2012-2016, The Linux Foundation. All rights reserved.
 * Copyright (C) 2017 Linaro Ltd.
 */
#ifndef __VENUS_HFI_HELPER_H__
#define __VENUS_HFI_HELPER_H__

#define HFI_DOMAIN_BASE_COMMON				0

#define HFI_DOMAIN_BASE_VDEC				0x1000000
#define HFI_DOMAIN_BASE_VENC				0x2000000
#define HFI_DOMAIN_BASE_VPE				0x3000000

#define HFI_VIDEO_ARCH_OX				0x1

#define HFI_ARCH_COMMON_OFFSET				0
#define HFI_ARCH_OX_OFFSET				0x200000

#define HFI_OX_BASE					0x1000000

#define HFI_CMD_START_OFFSET				0x10000
#define HFI_MSG_START_OFFSET				0x20000

#define HFI_ERR_NONE					0x0
#define HFI_ERR_SYS_FATAL				0x1
#define HFI_ERR_SYS_INVALID_PARAMETER			0x2
#define HFI_ERR_SYS_VERSION_MISMATCH			0x3
#define HFI_ERR_SYS_INSUFFICIENT_RESOURCES		0x4
#define HFI_ERR_SYS_MAX_SESSIONS_REACHED		0x5
#define HFI_ERR_SYS_UNSUPPORTED_CODEC			0x6
#define HFI_ERR_SYS_SESSION_IN_USE			0x7
#define HFI_ERR_SYS_SESSION_ID_OUT_OF_RANGE		0x8
#define HFI_ERR_SYS_UNSUPPORTED_DOMAIN			0x9

#define HFI_ERR_SESSION_FATAL				0x1001
#define HFI_ERR_SESSION_INVALID_PARAMETER		0x1002
#define HFI_ERR_SESSION_BAD_POINTER			0x1003
#define HFI_ERR_SESSION_INVALID_SESSION_ID		0x1004
#define HFI_ERR_SESSION_INVALID_STREAM_ID		0x1005
#define HFI_ERR_SESSION_INCORRECT_STATE_OPERATION	0x1006
#define HFI_ERR_SESSION_UNSUPPORTED_PROPERTY		0x1007
#define HFI_ERR_SESSION_UNSUPPORTED_SETTING		0x1008
#define HFI_ERR_SESSION_INSUFFICIENT_RESOURCES		0x1009
#define HFI_ERR_SESSION_STREAM_CORRUPT_OUTPUT_STALLED	0x100a
#define HFI_ERR_SESSION_STREAM_CORRUPT			0x100b
#define HFI_ERR_SESSION_ENC_OVERFLOW			0x100c
#define HFI_ERR_SESSION_UNSUPPORTED_STREAM		0x100d
#define HFI_ERR_SESSION_CMDSIZE				0x100e
#define HFI_ERR_SESSION_UNSUPPORT_CMD			0x100f
#define HFI_ERR_SESSION_UNSUPPORT_BUFFERTYPE		0x1010
#define HFI_ERR_SESSION_BUFFERCOUNT_TOOSMALL		0x1011
#define HFI_ERR_SESSION_INVALID_SCALE_FACTOR		0x1012
#define HFI_ERR_SESSION_UPSCALE_NOT_SUPPORTED		0x1013

#define HFI_EVENT_SYS_ERROR				0x1
#define HFI_EVENT_SESSION_ERROR				0x2

#define HFI_EVENT_DATA_SEQUENCE_CHANGED_SUFFICIENT_BUF_RESOURCES   0x1000001
#define HFI_EVENT_DATA_SEQUENCE_CHANGED_INSUFFICIENT_BUF_RESOURCES 0x1000002
#define HFI_EVENT_SESSION_SEQUENCE_CHANGED			   0x1000003
#define HFI_EVENT_SESSION_PROPERTY_CHANGED			   0x1000004
#define HFI_EVENT_SESSION_LTRUSE_FAILED				   0x1000005
#define HFI_EVENT_RELEASE_BUFFER_REFERENCE			   0x1000006

#define HFI_BUFFERFLAG_EOS				0x00000001
#define HFI_BUFFERFLAG_STARTTIME			0x00000002
#define HFI_BUFFERFLAG_DECODEONLY			0x00000004
#define HFI_BUFFERFLAG_DATACORRUPT			0x00000008
#define HFI_BUFFERFLAG_ENDOFFRAME			0x00000010
#define HFI_BUFFERFLAG_SYNCFRAME			0x00000020
#define HFI_BUFFERFLAG_EXTRADATA			0x00000040
#define HFI_BUFFERFLAG_CODECCONFIG			0x00000080
#define HFI_BUFFERFLAG_TIMESTAMPINVALID			0x00000100
#define HFI_BUFFERFLAG_READONLY				0x00000200
#define HFI_BUFFERFLAG_ENDOFSUBFRAME			0x00000400
#define HFI_BUFFERFLAG_EOSEQ				0x00200000
#define HFI_BUFFERFLAG_MBAFF				0x08000000
#define HFI_BUFFERFLAG_VPE_YUV_601_709_CSC_CLAMP	0x10000000
#define HFI_BUFFERFLAG_DROP_FRAME			0x20000000
#define HFI_BUFFERFLAG_TEI				0x40000000
#define HFI_BUFFERFLAG_DISCONTINUITY			0x80000000

#define HFI_ERR_SESSION_EMPTY_BUFFER_DONE_OUTPUT_PENDING	0x1001001
#define HFI_ERR_SESSION_SAME_STATE_OPERATION			0x1001002
#define HFI_ERR_SESSION_SYNC_FRAME_NOT_DETECTED			0x1001003
#define HFI_ERR_SESSION_START_CODE_NOT_FOUND			0x1001004

#define HFI_FLUSH_INPUT					0x1000001
#define HFI_FLUSH_OUTPUT				0x1000002
#define HFI_FLUSH_OUTPUT2				0x1000003
#define HFI_FLUSH_ALL					0x1000004

#define HFI_EXTRADATA_NONE				0x00000000
#define HFI_EXTRADATA_MB_QUANTIZATION			0x00000001
#define HFI_EXTRADATA_INTERLACE_VIDEO			0x00000002
#define HFI_EXTRADATA_VC1_FRAMEDISP			0x00000003
#define HFI_EXTRADATA_VC1_SEQDISP			0x00000004
#define HFI_EXTRADATA_TIMESTAMP				0x00000005
#define HFI_EXTRADATA_S3D_FRAME_PACKING			0x00000006
#define HFI_EXTRADATA_FRAME_RATE			0x00000007
#define HFI_EXTRADATA_PANSCAN_WINDOW			0x00000008
#define HFI_EXTRADATA_RECOVERY_POINT_SEI		0x00000009
#define HFI_EXTRADATA_MPEG2_SEQDISP			0x0000000d
#define HFI_EXTRADATA_STREAM_USERDATA			0x0000000e
#define HFI_EXTRADATA_FRAME_QP				0x0000000f
#define HFI_EXTRADATA_FRAME_BITS_INFO			0x00000010
#define HFI_EXTRADATA_MULTISLICE_INFO			0x7f100000
#define HFI_EXTRADATA_NUM_CONCEALED_MB			0x7f100001
#define HFI_EXTRADATA_INDEX				0x7f100002
#define HFI_EXTRADATA_METADATA_LTR			0x7f100004
#define HFI_EXTRADATA_METADATA_FILLER			0x7fe00002

#define HFI_INDEX_EXTRADATA_INPUT_CROP			0x0700000e
#define HFI_INDEX_EXTRADATA_OUTPUT_CROP			0x0700000f
#define HFI_INDEX_EXTRADATA_DIGITAL_ZOOM		0x07000010
#define HFI_INDEX_EXTRADATA_ASPECT_RATIO		0x7f100003

#define HFI_INTERLACE_FRAME_PROGRESSIVE			0x01
#define HFI_INTERLACE_INTERLEAVE_FRAME_TOPFIELDFIRST	0x02
#define HFI_INTERLACE_INTERLEAVE_FRAME_BOTTOMFIELDFIRST	0x04
#define HFI_INTERLACE_FRAME_TOPFIELDFIRST		0x08
#define HFI_INTERLACE_FRAME_BOTTOMFIELDFIRST		0x10

/*
 * HFI_PROPERTY_PARAM_OX_START
 * HFI_DOMAIN_BASE_COMMON + HFI_ARCH_OX_OFFSET + 0x1000
 */
#define HFI_PROPERTY_PARAM_BUFFER_COUNT_ACTUAL				0x201001
#define HFI_PROPERTY_PARAM_UNCOMPRESSED_PLANE_ACTUAL_CONSTRAINTS_INFO	0x201002
#define HFI_PROPERTY_PARAM_INTERLACE_FORMAT_SUPPORTED			0x201003
#define HFI_PROPERTY_PARAM_CHROMA_SITE					0x201004
#define HFI_PROPERTY_PARAM_EXTRA_DATA_HEADER_CONFIG			0x201005
#define HFI_PROPERTY_PARAM_INDEX_EXTRADATA				0x201006
#define HFI_PROPERTY_PARAM_DIVX_FORMAT					0x201007
#define HFI_PROPERTY_PARAM_BUFFER_ALLOC_MODE				0x201008
#define HFI_PROPERTY_PARAM_S3D_FRAME_PACKING_EXTRADATA			0x201009
#define HFI_PROPERTY_PARAM_ERR_DETECTION_CODE_EXTRADATA			0x20100a
#define HFI_PROPERTY_PARAM_BUFFER_ALLOC_MODE_SUPPORTED			0x20100b
#define HFI_PROPERTY_PARAM_BUFFER_SIZE_ACTUAL				0x20100c
#define HFI_PROPERTY_PARAM_BUFFER_DISPLAY_HOLD_COUNT_ACTUAL		0x20100d

/*
 * HFI_PROPERTY_CONFIG_OX_START
 * HFI_DOMAIN_BASE_COMMON + HFI_ARCH_OX_OFFSET + 0x2000
 */
#define HFI_PROPERTY_CONFIG_BUFFER_REQUIREMENTS		0x202001
#define HFI_PROPERTY_CONFIG_REALTIME			0x202002
#define HFI_PROPERTY_CONFIG_PRIORITY			0x202003
#define HFI_PROPERTY_CONFIG_BATCH_INFO			0x202004

/*
 * HFI_PROPERTY_PARAM_VDEC_OX_START	\
 * HFI_DOMAIN_BASE_VDEC + HFI_ARCH_OX_OFFSET + 0x3000
 */
#define HFI_PROPERTY_PARAM_VDEC_CONTINUE_DATA_TRANSFER		0x1203001
#define HFI_PROPERTY_PARAM_VDEC_DISPLAY_PICTURE_BUFFER_COUNT	0x1203002
#define HFI_PROPERTY_PARAM_VDEC_MULTI_VIEW_SELECT		0x1203003
#define HFI_PROPERTY_PARAM_VDEC_PICTURE_TYPE_DECODE		0x1203004
#define HFI_PROPERTY_PARAM_VDEC_OUTPUT_ORDER			0x1203005
#define HFI_PROPERTY_PARAM_VDEC_MB_QUANTIZATION			0x1203006
#define HFI_PROPERTY_PARAM_VDEC_NUM_CONCEALED_MB		0x1203007
#define HFI_PROPERTY_PARAM_VDEC_H264_ENTROPY_SWITCHING		0x1203008
#define HFI_PROPERTY_PARAM_VDEC_OUTPUT2_KEEP_ASPECT_RATIO	0x1203009
#define HFI_PROPERTY_PARAM_VDEC_FRAME_RATE_EXTRADATA		0x120300a
#define HFI_PROPERTY_PARAM_VDEC_PANSCAN_WNDW_EXTRADATA		0x120300b
#define HFI_PROPERTY_PARAM_VDEC_RECOVERY_POINT_SEI_EXTRADATA	0x120300c
#define HFI_PROPERTY_PARAM_VDEC_THUMBNAIL_MODE			0x120300d
#define HFI_PROPERTY_PARAM_VDEC_FRAME_ASSEMBLY			0x120300e
#define HFI_PROPERTY_PARAM_VDEC_DPB_COUNTS				0x120300e
#define HFI_PROPERTY_PARAM_VDEC_VC1_FRAMEDISP_EXTRADATA		0x1203011
#define HFI_PROPERTY_PARAM_VDEC_VC1_SEQDISP_EXTRADATA		0x1203012
#define HFI_PROPERTY_PARAM_VDEC_TIMESTAMP_EXTRADATA		0x1203013
#define HFI_PROPERTY_PARAM_VDEC_INTERLACE_VIDEO_EXTRADATA	0x1203014
#define HFI_PROPERTY_PARAM_VDEC_AVC_SESSION_SELECT		0x1203015
#define HFI_PROPERTY_PARAM_VDEC_MPEG2_SEQDISP_EXTRADATA		0x1203016
#define HFI_PROPERTY_PARAM_VDEC_STREAM_USERDATA_EXTRADATA	0x1203017
#define HFI_PROPERTY_PARAM_VDEC_FRAME_QP_EXTRADATA		0x1203018
#define HFI_PROPERTY_PARAM_VDEC_FRAME_BITS_INFO_EXTRADATA	0x1203019
#define HFI_PROPERTY_PARAM_VDEC_SCS_THRESHOLD			0x120301a

/*
 * HFI_PROPERTY_CONFIG_VDEC_OX_START
 * HFI_DOMAIN_BASE_VDEC + HFI_ARCH_OX_OFFSET + 0x0000
 */
#define HFI_PROPERTY_CONFIG_VDEC_POST_LOOP_DEBLOCKER		0x1200001
#define HFI_PROPERTY_CONFIG_VDEC_MB_ERROR_MAP_REPORTING		0x1200002
#define HFI_PROPERTY_CONFIG_VDEC_MB_ERROR_MAP			0x1200003

#define HFI_PROPERTY_CONFIG_VDEC_ENTROPY			0x1204004

/*
 * HFI_PROPERTY_PARAM_VENC_OX_START
 * HFI_DOMAIN_BASE_VENC + HFI_ARCH_OX_OFFSET + 0x5000
 */
#define  HFI_PROPERTY_PARAM_VENC_MULTI_SLICE_INFO		0x2205001
#define  HFI_PROPERTY_PARAM_VENC_H264_IDR_S3D_FRAME_PACKING_NAL	0x2205002
#define  HFI_PROPERTY_PARAM_VENC_LTR_INFO			0x2205003
#define  HFI_PROPERTY_PARAM_VENC_MBI_DUMPING			0x2205005

/*
 * HFI_PROPERTY_CONFIG_VENC_OX_START
 * HFI_DOMAIN_BASE_VENC + HFI_ARCH_OX_OFFSET + 0x6000
 */
#define HFI_PROPERTY_CONFIG_VENC_FRAME_QP			0x2206001

/*
 * HFI_PROPERTY_PARAM_VPE_OX_START
 * HFI_DOMAIN_BASE_VPE + HFI_ARCH_OX_OFFSET + 0x7000
 */
#define HFI_PROPERTY_PARAM_VPE_COLOR_SPACE_CONVERSION		0x3207001

#define HFI_PROPERTY_CONFIG_VPE_OX_START	\
	(HFI_DOMAIN_BASE_VPE + HFI_ARCH_OX_OFFSET + 0x8000)

#define HFI_CHROMA_SITE_0			0x1000001
#define HFI_CHROMA_SITE_1			0x1000002
#define HFI_CHROMA_SITE_2			0x1000003
#define HFI_CHROMA_SITE_3			0x1000004
#define HFI_CHROMA_SITE_4			0x1000005
#define HFI_CHROMA_SITE_5			0x1000006

#define HFI_PRIORITY_LOW			10
#define HFI_PRIOIRTY_MEDIUM			20
#define HFI_PRIORITY_HIGH			30

#define HFI_OUTPUT_ORDER_DISPLAY		0x1000001
#define HFI_OUTPUT_ORDER_DECODE			0x1000002

#define HFI_RATE_CONTROL_OFF			0x1000001
#define HFI_RATE_CONTROL_VBR_VFR		0x1000002
#define HFI_RATE_CONTROL_VBR_CFR		0x1000003
#define HFI_RATE_CONTROL_CBR_VFR		0x1000004
#define HFI_RATE_CONTROL_CBR_CFR		0x1000005
#define HFI_RATE_CONTROL_CQ			0x1000008

#define HFI_VIDEO_CODEC_H264			0x00000002
#define HFI_VIDEO_CODEC_H263			0x00000004
#define HFI_VIDEO_CODEC_MPEG1			0x00000008
#define HFI_VIDEO_CODEC_MPEG2			0x00000010
#define HFI_VIDEO_CODEC_MPEG4			0x00000020
#define HFI_VIDEO_CODEC_DIVX_311		0x00000040
#define HFI_VIDEO_CODEC_DIVX			0x00000080
#define HFI_VIDEO_CODEC_VC1			0x00000100
#define HFI_VIDEO_CODEC_SPARK			0x00000200
#define HFI_VIDEO_CODEC_VP8			0x00001000
#define HFI_VIDEO_CODEC_HEVC			0x00002000
#define HFI_VIDEO_CODEC_VP9			0x00004000
#define HFI_VIDEO_CODEC_HEVC_HYBRID		0x80000000

#define HFI_H264_PROFILE_BASELINE		0x00000001
#define HFI_H264_PROFILE_MAIN			0x00000002
#define HFI_H264_PROFILE_HIGH			0x00000004
#define HFI_H264_PROFILE_STEREO_HIGH		0x00000008
#define HFI_H264_PROFILE_MULTIVIEW_HIGH		0x00000010
#define HFI_H264_PROFILE_CONSTRAINED_BASE	0x00000020
#define HFI_H264_PROFILE_CONSTRAINED_HIGH	0x00000040

#define HFI_H264_LEVEL_1			0x00000001
#define HFI_H264_LEVEL_1b			0x00000002
#define HFI_H264_LEVEL_11			0x00000004
#define HFI_H264_LEVEL_12			0x00000008
#define HFI_H264_LEVEL_13			0x00000010
#define HFI_H264_LEVEL_2			0x00000020
#define HFI_H264_LEVEL_21			0x00000040
#define HFI_H264_LEVEL_22			0x00000080
#define HFI_H264_LEVEL_3			0x00000100
#define HFI_H264_LEVEL_31			0x00000200
#define HFI_H264_LEVEL_32			0x00000400
#define HFI_H264_LEVEL_4			0x00000800
#define HFI_H264_LEVEL_41			0x00001000
#define HFI_H264_LEVEL_42			0x00002000
#define HFI_H264_LEVEL_5			0x00004000
#define HFI_H264_LEVEL_51			0x00008000
#define HFI_H264_LEVEL_52			0x00010000

#define HFI_H263_PROFILE_BASELINE		0x00000001

#define HFI_H263_LEVEL_10			0x00000001
#define HFI_H263_LEVEL_20			0x00000002
#define HFI_H263_LEVEL_30			0x00000004
#define HFI_H263_LEVEL_40			0x00000008
#define HFI_H263_LEVEL_45			0x00000010
#define HFI_H263_LEVEL_50			0x00000020
#define HFI_H263_LEVEL_60			0x00000040
#define HFI_H263_LEVEL_70			0x00000080

#define HFI_MPEG2_PROFILE_SIMPLE		0x00000001
#define HFI_MPEG2_PROFILE_MAIN			0x00000002
#define HFI_MPEG2_PROFILE_422			0x00000004
#define HFI_MPEG2_PROFILE_SNR			0x00000008
#define HFI_MPEG2_PROFILE_SPATIAL		0x00000010
#define HFI_MPEG2_PROFILE_HIGH			0x00000020

#define HFI_MPEG2_LEVEL_LL			0x00000001
#define HFI_MPEG2_LEVEL_ML			0x00000002
#define HFI_MPEG2_LEVEL_H14			0x00000004
#define HFI_MPEG2_LEVEL_HL			0x00000008

#define HFI_MPEG4_PROFILE_SIMPLE		0x00000001
#define HFI_MPEG4_PROFILE_ADVANCEDSIMPLE	0x00000002

#define HFI_MPEG4_LEVEL_0			0x00000001
#define HFI_MPEG4_LEVEL_0b			0x00000002
#define HFI_MPEG4_LEVEL_1			0x00000004
#define HFI_MPEG4_LEVEL_2			0x00000008
#define HFI_MPEG4_LEVEL_3			0x00000010
#define HFI_MPEG4_LEVEL_4			0x00000020
#define HFI_MPEG4_LEVEL_4a			0x00000040
#define HFI_MPEG4_LEVEL_5			0x00000080
#define HFI_MPEG4_LEVEL_6			0x00000100
#define HFI_MPEG4_LEVEL_7			0x00000200
#define HFI_MPEG4_LEVEL_8			0x00000400
#define HFI_MPEG4_LEVEL_9			0x00000800
#define HFI_MPEG4_LEVEL_3b			0x00001000

#define HFI_VC1_PROFILE_SIMPLE			0x00000001
#define HFI_VC1_PROFILE_MAIN			0x00000002
#define HFI_VC1_PROFILE_ADVANCED		0x00000004

#define HFI_VC1_LEVEL_LOW			0x00000001
#define HFI_VC1_LEVEL_MEDIUM			0x00000002
#define HFI_VC1_LEVEL_HIGH			0x00000004
#define HFI_VC1_LEVEL_0				0x00000008
#define HFI_VC1_LEVEL_1				0x00000010
#define HFI_VC1_LEVEL_2				0x00000020
#define HFI_VC1_LEVEL_3				0x00000040
#define HFI_VC1_LEVEL_4				0x00000080

#define HFI_VPX_PROFILE_SIMPLE			0x00000001
#define HFI_VPX_PROFILE_ADVANCED		0x00000002
#define HFI_VPX_PROFILE_VERSION_0		0x00000004
#define HFI_VPX_PROFILE_VERSION_1		0x00000008
#define HFI_VPX_PROFILE_VERSION_2		0x00000010
#define HFI_VPX_PROFILE_VERSION_3		0x00000020

#define HFI_DIVX_FORMAT_4			0x1
#define HFI_DIVX_FORMAT_5			0x2
#define HFI_DIVX_FORMAT_6			0x3

#define HFI_DIVX_PROFILE_QMOBILE		0x00000001
#define HFI_DIVX_PROFILE_MOBILE			0x00000002
#define HFI_DIVX_PROFILE_MT			0x00000004
#define HFI_DIVX_PROFILE_HT			0x00000008
#define HFI_DIVX_PROFILE_HD			0x00000010

#define HFI_HEVC_PROFILE_MAIN			0x00000001
#define HFI_HEVC_PROFILE_MAIN10			0x00000002
#define HFI_HEVC_PROFILE_MAIN_STILL_PIC		0x00000004

#define HFI_HEVC_LEVEL_1			0x00000001
#define HFI_HEVC_LEVEL_2			0x00000002
#define HFI_HEVC_LEVEL_21			0x00000004
#define HFI_HEVC_LEVEL_3			0x00000008
#define HFI_HEVC_LEVEL_31			0x00000010
#define HFI_HEVC_LEVEL_4			0x00000020
#define HFI_HEVC_LEVEL_41			0x00000040
#define HFI_HEVC_LEVEL_5			0x00000080
#define HFI_HEVC_LEVEL_51			0x00000100
#define HFI_HEVC_LEVEL_52			0x00000200
#define HFI_HEVC_LEVEL_6			0x00000400
#define HFI_HEVC_LEVEL_61			0x00000800
#define HFI_HEVC_LEVEL_62			0x00001000

#define HFI_HEVC_TIER_MAIN			0x1
#define HFI_HEVC_TIER_HIGH0			0x2

#define HFI_VPX_PROFILE_MAIN			0x00000001

#define HFI_VPX_LEVEL_VERSION_0			0x00000001
#define HFI_VPX_LEVEL_VERSION_1			0x00000002
#define HFI_VPX_LEVEL_VERSION_2			0x00000004
#define HFI_VPX_LEVEL_VERSION_3			0x00000008

/* VP9 Profile 0, 8-bit */
#define HFI_VP9_PROFILE_P0			0x00000001
/* VP9 Profile 2, 10-bit */
#define HFI_VP9_PROFILE_P2_10B			0x00000004

#define HFI_VP9_LEVEL_1				0x00000001
#define HFI_VP9_LEVEL_11			0x00000002
#define HFI_VP9_LEVEL_2				0x00000004
#define HFI_VP9_LEVEL_21			0x00000008
#define HFI_VP9_LEVEL_3				0x00000010
#define HFI_VP9_LEVEL_31			0x00000020
#define HFI_VP9_LEVEL_4				0x00000040
#define HFI_VP9_LEVEL_41			0x00000080
#define HFI_VP9_LEVEL_5				0x00000100
#define HFI_VP9_LEVEL_51			0x00000200
#define HFI_VP9_LEVEL_6				0x00000400
#define HFI_VP9_LEVEL_61			0x00000800

#define HFI_BUFFER_INPUT			0x1
#define HFI_BUFFER_OUTPUT			0x2
#define HFI_BUFFER_OUTPUT2			0x3
#define HFI_BUFFER_INTERNAL_PERSIST		0x4
#define HFI_BUFFER_INTERNAL_PERSIST_1		0x5
#define HFI_BUFFER_INTERNAL_SCRATCH(ver)	\
	(((ver) == HFI_VERSION_4XX ||		\
	(ver) == HFI_VERSION_6XX) ? 0x6 : 0x1000001)
#define HFI_BUFFER_INTERNAL_SCRATCH_1(ver)	\
	(((ver) == HFI_VERSION_4XX ||		\
	(ver) == HFI_VERSION_6XX) ? 0x7 : 0x1000005)
#define HFI_BUFFER_INTERNAL_SCRATCH_2(ver)	\
	(((ver) == HFI_VERSION_4XX ||		\
	(ver) == HFI_VERSION_6XX) ? 0x8 : 0x1000006)
#define HFI_BUFFER_EXTRADATA_INPUT(ver)		\
	(((ver) == HFI_VERSION_4XX) ? 0xc : 0x1000002)
#define HFI_BUFFER_EXTRADATA_OUTPUT(ver)	\
	(((ver) == HFI_VERSION_4XX) ? 0xa : 0x1000003)
#define HFI_BUFFER_EXTRADATA_OUTPUT2(ver)	\
	(((ver) == HFI_VERSION_4XX) ? 0xb : 0x1000004)
#define HFI_BUFFER_TYPE_MAX			11

#define HFI_BUFFER_MODE_STATIC			0x1000001
#define HFI_BUFFER_MODE_RING			0x1000002
#define HFI_BUFFER_MODE_DYNAMIC			0x1000003

/*
 * HFI_PROPERTY_SYS_COMMON_START
 * HFI_DOMAIN_BASE_COMMON + HFI_ARCH_COMMON_OFFSET + 0x0000
 */
#define HFI_PROPERTY_SYS_DEBUG_CONFIG				0x1
#define HFI_PROPERTY_SYS_RESOURCE_OCMEM_REQUIREMENT_INFO	0x2
#define HFI_PROPERTY_SYS_CONFIG_VCODEC_CLKFREQ			0x3
#define HFI_PROPERTY_SYS_IDLE_INDICATOR				0x4
#define HFI_PROPERTY_SYS_CODEC_POWER_PLANE_CTRL			0x5
#define HFI_PROPERTY_SYS_IMAGE_VERSION				0x6
#define HFI_PROPERTY_SYS_CONFIG_COVERAGE			0x7
#define HFI_PROPERTY_SYS_UBWC_CONFIG				0x8

/*
 * HFI_PROPERTY_PARAM_COMMON_START
 * HFI_DOMAIN_BASE_COMMON + HFI_ARCH_COMMON_OFFSET + 0x1000
 */
#define HFI_PROPERTY_PARAM_FRAME_SIZE				0x1001
#define HFI_PROPERTY_PARAM_UNCOMPRESSED_PLANE_ACTUAL_INFO	0x1002
#define HFI_PROPERTY_PARAM_UNCOMPRESSED_FORMAT_SELECT		0x1003
#define HFI_PROPERTY_PARAM_UNCOMPRESSED_FORMAT_SUPPORTED	0x1004
#define HFI_PROPERTY_PARAM_PROFILE_LEVEL_CURRENT		0x1005
#define HFI_PROPERTY_PARAM_PROFILE_LEVEL_SUPPORTED		0x1006
#define HFI_PROPERTY_PARAM_CAPABILITY_SUPPORTED			0x1007
#define HFI_PROPERTY_PARAM_PROPERTIES_SUPPORTED			0x1008
#define HFI_PROPERTY_PARAM_CODEC_SUPPORTED			0x1009
#define HFI_PROPERTY_PARAM_NAL_STREAM_FORMAT_SUPPORTED		0x100a
#define HFI_PROPERTY_PARAM_NAL_STREAM_FORMAT_SELECT		0x100b
#define HFI_PROPERTY_PARAM_MULTI_VIEW_FORMAT			0x100c
#define HFI_PROPERTY_PARAM_MAX_SEQUENCE_HEADER_SIZE		0x100d
#define HFI_PROPERTY_PARAM_CODEC_MASK_SUPPORTED			0x100e
#define HFI_PROPERTY_PARAM_MVC_BUFFER_LAYOUT			0x100f
#define HFI_PROPERTY_PARAM_MAX_SESSIONS_SUPPORTED		0x1010
#define HFI_PROPERTY_PARAM_WORK_MODE				0x1015
#define HFI_PROPERTY_PARAM_WORK_ROUTE				0x1017

/*
 * HFI_PROPERTY_CONFIG_COMMON_START
 * HFI_DOMAIN_BASE_COMMON + HFI_ARCH_COMMON_OFFSET + 0x2000
 */
#define HFI_PROPERTY_CONFIG_FRAME_RATE				0x2001
#define HFI_PROPERTY_CONFIG_VIDEOCORES_USAGE			0x2002

/*
 * HFI_PROPERTY_PARAM_VDEC_COMMON_START
 * HFI_DOMAIN_BASE_VDEC + HFI_ARCH_COMMON_OFFSET + 0x3000
 */
#define HFI_PROPERTY_PARAM_VDEC_MULTI_STREAM			0x1003001
#define HFI_PROPERTY_PARAM_VDEC_CONCEAL_COLOR			0x1003002
#define HFI_PROPERTY_PARAM_VDEC_NONCP_OUTPUT2			0x1003003
#define HFI_PROPERTY_PARAM_VDEC_PIXEL_BITDEPTH			0x1003007
#define HFI_PROPERTY_PARAM_VDEC_PIC_STRUCT			0x1003009
#define HFI_PROPERTY_PARAM_VDEC_COLOUR_SPACE			0x100300a
#define HFI_PROPERTY_PARAM_VDEC_ENABLE_SUFFICIENT_SEQCHANGE_EVENT \
								0x100300b

/*
 * HFI_PROPERTY_CONFIG_VDEC_COMMON_START
 * HFI_DOMAIN_BASE_VDEC + HFI_ARCH_COMMON_OFFSET + 0x4000
 */

/*
 * HFI_PROPERTY_PARAM_VENC_COMMON_START
 * HFI_DOMAIN_BASE_VENC + HFI_ARCH_COMMON_OFFSET + 0x5000
 */
#define HFI_PROPERTY_PARAM_VENC_SLICE_DELIVERY_MODE		0x2005001
#define HFI_PROPERTY_PARAM_VENC_H264_ENTROPY_CONTROL		0x2005002
#define HFI_PROPERTY_PARAM_VENC_H264_DEBLOCK_CONTROL		0x2005003
#define HFI_PROPERTY_PARAM_VENC_RATE_CONTROL			0x2005004
#define HFI_PROPERTY_PARAM_VENC_H264_PICORDER_CNT_TYPE		0x2005005
#define HFI_PROPERTY_PARAM_VENC_SESSION_QP			0x2005006
#define HFI_PROPERTY_PARAM_VENC_MPEG4_AC_PREDICTION		0x2005007
#define HFI_PROPERTY_PARAM_VENC_SESSION_QP_RANGE		0x2005008
/*
 * Note: HFI_PROPERTY_PARAM_VENC_SESSION_QP_RANGE_V2 is
 * specific to HFI_VERSION_6XX and HFI_VERSION_4XX only
 */
#define HFI_PROPERTY_PARAM_VENC_SESSION_QP_RANGE_V2		0x2005009
#define HFI_PROPERTY_PARAM_VENC_MPEG4_TIME_RESOLUTION		0x2005009
#define HFI_PROPERTY_PARAM_VENC_MPEG4_SHORT_HEADER		0x200500a
#define HFI_PROPERTY_PARAM_VENC_MPEG4_HEADER_EXTENSION		0x200500b
#define HFI_PROPERTY_PARAM_VENC_OPEN_GOP			0x200500c
#define HFI_PROPERTY_PARAM_VENC_INTRA_REFRESH			0x200500d
#define HFI_PROPERTY_PARAM_VENC_MULTI_SLICE_CONTROL		0x200500e
#define HFI_PROPERTY_PARAM_VENC_VBV_HRD_BUF_SIZE		0x200500f
#define HFI_PROPERTY_PARAM_VENC_QUALITY_VS_SPEED		0x2005010
#define HFI_PROPERTY_PARAM_VENC_ADVANCED			0x2005012
#define HFI_PROPERTY_PARAM_VENC_H264_SPS_ID			0x2005014
#define HFI_PROPERTY_PARAM_VENC_H264_PPS_ID			0x2005015
#define HFI_PROPERTY_PARAM_VENC_H264_GENERATE_AUDNAL		0x2005016
#define HFI_PROPERTY_PARAM_VENC_ASPECT_RATIO			0x2005017
#define HFI_PROPERTY_PARAM_VENC_NUMREF				0x2005018
#define HFI_PROPERTY_PARAM_VENC_MULTIREF_P			0x2005019
#define HFI_PROPERTY_PARAM_VENC_H264_NAL_SVC_EXT		0x200501b
#define HFI_PROPERTY_PARAM_VENC_LTRMODE				0x200501c
#define HFI_PROPERTY_PARAM_VENC_VIDEO_FULL_RANGE		0x200501d
#define HFI_PROPERTY_PARAM_VENC_H264_VUI_TIMING_INFO		0x200501e
#define HFI_PROPERTY_PARAM_VENC_VC1_PERF_CFG			0x200501f
#define HFI_PROPERTY_PARAM_VENC_MAX_NUM_B_FRAMES		0x2005020
#define HFI_PROPERTY_PARAM_VENC_H264_VUI_BITSTREAM_RESTRC	0x2005021
#define HFI_PROPERTY_PARAM_VENC_PRESERVE_TEXT_QUALITY		0x2005023
#define HFI_PROPERTY_PARAM_VENC_H264_TRANSFORM_8X8			0x2005025
#define HFI_PROPERTY_PARAM_VENC_HIER_P_MAX_NUM_ENH_LAYER	0x2005026
#define HFI_PROPERTY_PARAM_VENC_DISABLE_RC_TIMESTAMP		0x2005027
#define HFI_PROPERTY_PARAM_VENC_INITIAL_QP			0x2005028
#define HFI_PROPERTY_PARAM_VENC_VPX_ERROR_RESILIENCE_MODE	0x2005029
#define HFI_PROPERTY_PARAM_VENC_HIER_B_MAX_NUM_ENH_LAYER	0x200502c
#define HFI_PROPERTY_PARAM_VENC_HIER_P_HYBRID_MODE		0x200502f
#define HFI_PROPERTY_PARAM_VENC_HDR10_PQ_SEI			0x2005036

/*
 * HFI_PROPERTY_CONFIG_VENC_COMMON_START
 * HFI_DOMAIN_BASE_VENC + HFI_ARCH_COMMON_OFFSET + 0x6000
 */
#define HFI_PROPERTY_CONFIG_VENC_TARGET_BITRATE			0x2006001
#define HFI_PROPERTY_CONFIG_VENC_IDR_PERIOD			0x2006002
#define HFI_PROPERTY_CONFIG_VENC_INTRA_PERIOD			0x2006003
#define HFI_PROPERTY_CONFIG_VENC_REQUEST_SYNC_FRAME		0x2006004
#define HFI_PROPERTY_CONFIG_VENC_SLICE_SIZE			0x2006005
#define HFI_PROPERTY_CONFIG_VENC_MAX_BITRATE			0x2006007
#define HFI_PROPERTY_CONFIG_VENC_SYNC_FRAME_SEQUENCE_HEADER	0x2006008
#define HFI_PROPERTY_CONFIG_VENC_MARKLTRFRAME			0x2006009
#define HFI_PROPERTY_CONFIG_VENC_USELTRFRAME			0x200600a
#define HFI_PROPERTY_CONFIG_VENC_HIER_P_ENH_LAYER		0x200600b
#define HFI_PROPERTY_CONFIG_VENC_LTRPERIOD			0x200600c
#define HFI_PROPERTY_CONFIG_VENC_PERF_MODE			0x200600e
#define HFI_PROPERTY_CONFIG_HEIC_FRAME_QUALITY			0x2006014

/*
 * HFI_PROPERTY_PARAM_VPE_COMMON_START
 * HFI_DOMAIN_BASE_VPE + HFI_ARCH_COMMON_OFFSET + 0x7000
 */

/*
 * HFI_PROPERTY_CONFIG_VPE_COMMON_START
 * HFI_DOMAIN_BASE_VPE + HFI_ARCH_COMMON_OFFSET + 0x8000
 */
#define HFI_PROPERTY_CONFIG_VPE_DEINTERLACE			0x3008001
#define HFI_PROPERTY_CONFIG_VPE_OPERATIONS			0x3008002

enum hfi_version {
	HFI_VERSION_1XX,
	HFI_VERSION_3XX,
	HFI_VERSION_4XX,
	HFI_VERSION_6XX,
};

struct hfi_buffer_info {
	u32 buffer_addr;
	u32 extradata_addr;
};

struct hfi_bitrate {
	u32 bitrate;
	u32 layer_id;
};

struct hfi_h264_8x8_transform {
	u32 enable_type;
};

#define HFI_CAPABILITY_FRAME_WIDTH			0x01
#define HFI_CAPABILITY_FRAME_HEIGHT			0x02
#define HFI_CAPABILITY_MBS_PER_FRAME			0x03
#define HFI_CAPABILITY_MBS_PER_SECOND			0x04
#define HFI_CAPABILITY_FRAMERATE			0x05
#define HFI_CAPABILITY_SCALE_X				0x06
#define HFI_CAPABILITY_SCALE_Y				0x07
#define HFI_CAPABILITY_BITRATE				0x08
#define HFI_CAPABILITY_BFRAME				0x09
#define HFI_CAPABILITY_PEAKBITRATE			0x0a
#define HFI_CAPABILITY_HIER_P_NUM_ENH_LAYERS		0x10
#define HFI_CAPABILITY_ENC_LTR_COUNT			0x11
#define HFI_CAPABILITY_CP_OUTPUT2_THRESH		0x12
#define HFI_CAPABILITY_HIER_B_NUM_ENH_LAYERS		0x13
#define HFI_CAPABILITY_LCU_SIZE				0x14
#define HFI_CAPABILITY_HIER_P_HYBRID_NUM_ENH_LAYERS	0x15
#define HFI_CAPABILITY_MBS_PER_SECOND_POWERSAVE		0x16
#define HFI_CAPABILITY_I_FRAME_QP			0x20
#define HFI_CAPABILITY_P_FRAME_QP			0x21
#define HFI_CAPABILITY_B_FRAME_QP			0x22
#define HFI_CAPABILITY_RATE_CONTROL_MODES		0x23
#define HFI_CAPABILITY_BLUR_WIDTH			0x24
#define HFI_CAPABILITY_BLUR_HEIGHT			0x25
#define HFI_CAPABILITY_SLICE_BYTE			0x27
#define HFI_CAPABILITY_SLICE_MB				0x28
#define HFI_CAPABILITY_MAX_VIDEOCORES			0x2b
#define HFI_CAPABILITY_MAX_WORKMODES			0x2c
#define HFI_CAPABILITY_ROTATION				0x2f
#define HFI_CAPABILITY_COLOR_SPACE_CONVERSION		0x30

struct hfi_capability {
	u32 capability_type;
	u32 min;
	u32 max;
	u32 step_size;
};

struct hfi_capabilities {
	u32 num_capabilities;
	struct hfi_capability data[];
};

#define HFI_DEBUG_MSG_LOW	0x01
#define HFI_DEBUG_MSG_MEDIUM	0x02
#define HFI_DEBUG_MSG_HIGH	0x04
#define HFI_DEBUG_MSG_ERROR	0x08
#define HFI_DEBUG_MSG_FATAL	0x10
#define HFI_DEBUG_MSG_PERF	0x20

#define HFI_DEBUG_MODE_QUEUE	0x01
#define HFI_DEBUG_MODE_QDSS	0x02

struct hfi_debug_config {
	u32 config;
	u32 mode;
};

struct hfi_ubwc_config {
	u32 size;
	u32 packet_type;
	struct {
		u32 max_channel_override : 1;
		u32 mal_length_override : 1;
		u32 hb_override : 1;
		u32 bank_swzl_level_override : 1;
		u32 bank_spreading_override : 1;
		u32 reserved : 27;
		} override_bit_info;
	u32 max_channels;
	u32 mal_length;
	u32 highest_bank_bit;
	u32 bank_swzl_level;
	u32 bank_spreading;
	u32 reserved[2];
};

struct hfi_enable {
	u32 enable;
};

#define HFI_H264_DB_MODE_DISABLE		0x1
#define HFI_H264_DB_MODE_SKIP_SLICE_BOUNDARY	0x2
#define HFI_H264_DB_MODE_ALL_BOUNDARY		0x3

struct hfi_h264_db_control {
	u32 mode;
	s32 slice_alpha_offset;
	s32 slice_beta_offset;
};

#define HFI_H264_ENTROPY_CAVLC			0x1
#define HFI_H264_ENTROPY_CABAC			0x2

#define HFI_H264_CABAC_MODEL_0			0x1
#define HFI_H264_CABAC_MODEL_1			0x2
#define HFI_H264_CABAC_MODEL_2			0x3

struct hfi_h264_entropy_control {
	u32 entropy_mode;
	u32 cabac_model;
};

struct hfi_framerate {
	u32 buffer_type;
	u32 framerate;
};

#define HFI_INTRA_REFRESH_NONE			0x1
#define HFI_INTRA_REFRESH_CYCLIC		0x2
#define HFI_INTRA_REFRESH_ADAPTIVE		0x3
#define HFI_INTRA_REFRESH_CYCLIC_ADAPTIVE	0x4
#define HFI_INTRA_REFRESH_RANDOM		0x5

struct hfi_intra_refresh {
	u32 mode;
	u32 air_mbs;
	u32 air_ref;
	u32 cir_mbs;
};

struct hfi_intra_refresh_3x {
	u32 mode;
	u32 mbs;
};

struct hfi_idr_period {
	u32 idr_period;
};

struct hfi_operations_type {
	u32 rotation;
	u32 flip;
};

struct hfi_max_num_b_frames {
	u32 max_num_b_frames;
};

struct hfi_vc1e_perf_cfg_type {
	u32 search_range_x_subsampled[3];
	u32 search_range_y_subsampled[3];
};

/*
 * 0 - 7bit -> Luma (def: 16)
 * 8 - 15bit -> Chroma (def: 128)
 * format is valid up to v4
 */
struct hfi_conceal_color {
	u32 conceal_color;
};

struct hfi_conceal_color_v4 {
	u32 conceal_color_8bit;
	u32 conceal_color_10bit;
};

struct hfi_intra_period {
	u32 pframes;
	u32 bframes;
};

struct hfi_mpeg4_header_extension {
	u32 header_extension;
};

struct hfi_mpeg4_time_resolution {
	u32 time_increment_resolution;
};

struct hfi_multi_stream {
	u32 buffer_type;
	u32 enable;
	u32 width;
	u32 height;
};

struct hfi_multi_stream_3x {
	u32 buffer_type;
	u32 enable;
};

struct hfi_multi_view_format {
	u32 views;
	u32 view_order[1];
};

#define HFI_MULTI_SLICE_OFF			0x1
#define HFI_MULTI_SLICE_BY_MB_COUNT		0x2
#define HFI_MULTI_SLICE_BY_BYTE_COUNT		0x3
#define HFI_MULTI_SLICE_GOB			0x4

struct hfi_multi_slice_control {
	u32 multi_slice;
	u32 slice_size;
};

#define HFI_NAL_FORMAT_STARTCODES		0x01
#define HFI_NAL_FORMAT_ONE_NAL_PER_BUFFER	0x02
#define HFI_NAL_FORMAT_ONE_BYTE_LENGTH		0x04
#define HFI_NAL_FORMAT_TWO_BYTE_LENGTH		0x08
#define HFI_NAL_FORMAT_FOUR_BYTE_LENGTH		0x10

struct hfi_nal_stream_format {
	u32 format;
};

struct hfi_nal_stream_format_select {
	u32 format;
};

#define HFI_PICTURE_TYPE_I			0x01
#define HFI_PICTURE_TYPE_P			0x02
#define HFI_PICTURE_TYPE_B			0x04
#define HFI_PICTURE_TYPE_IDR			0x08

struct hfi_profile_level {
	u32 profile;
	u32 level;
};

#define HFI_MAX_PROFILE_COUNT			16

struct hfi_profile_level_supported {
	u32 profile_count;
	struct hfi_profile_level profile_level[];
};

struct hfi_quality_vs_speed {
	u32 quality_vs_speed;
};

struct hfi_heic_frame_quality {
	u32 frame_quality;
	u32 reserved[3];
};

struct hfi_quantization {
	u32 qp_i;
	u32 qp_p;
	u32 qp_b;
	u32 layer_id;
};

struct hfi_initial_quantization {
	u32 qp_i;
	u32 qp_p;
	u32 qp_b;
	u32 init_qp_enable;
};

struct hfi_quantization_range {
	u32 min_qp;
	u32 max_qp;
	u32 layer_id;
};

struct hfi_quantization_v2 {
	u32 qp_packed;
	u32 layer_id;
	u32 enable;
	u32 reserved[3];
};

struct hfi_quantization_range_v2 {
	struct hfi_quantization_v2 min_qp;
	struct hfi_quantization_v2 max_qp;
	u32 reserved[4];
};

#define HFI_LTR_MODE_DISABLE	0x0
#define HFI_LTR_MODE_MANUAL	0x1
#define HFI_LTR_MODE_PERIODIC	0x2

struct hfi_ltr_mode {
	u32 ltr_mode;
	u32 ltr_count;
	u32 trust_mode;
};

struct hfi_ltr_use {
	u32 ref_ltr;
	u32 use_constrnt;
	u32 frames;
};

struct hfi_ltr_mark {
	u32 mark_frame;
};

struct hfi_mastering_display_colour_sei_payload {
	u32 display_primaries_x[3];
	u32 display_primaries_y[3];
	u32 white_point_x;
	u32 white_point_y;
	u32 max_display_mastering_luminance;
	u32 min_display_mastering_luminance;
};

struct hfi_content_light_level_sei_payload {
	u32 max_content_light;
	u32 max_pic_average_light;
};

struct hfi_hdr10_pq_sei {
	struct hfi_mastering_display_colour_sei_payload mastering;
	struct hfi_content_light_level_sei_payload cll;
};

struct hfi_framesize {
	u32 buffer_type;
	u32 width;
	u32 height;
};

#define HFI_VENC_PERFMODE_MAX_QUALITY		0x1
#define HFI_VENC_PERFMODE_POWER_SAVE		0x2

struct hfi_perf_mode {
	u32 video_perf_mode;
};

#define VIDC_CORE_ID_DEFAULT	0
#define VIDC_CORE_ID_1		1
#define VIDC_CORE_ID_2		2
#define VIDC_CORE_ID_3		3

struct hfi_videocores_usage_type {
	u32 video_core_enable_mask;
};

#define VIDC_WORK_MODE_1	1
#define VIDC_WORK_MODE_2	2

struct hfi_video_work_mode {
	u32 video_work_mode;
};

struct hfi_video_work_route {
	u32 video_work_route;
};

struct hfi_h264_vui_timing_info {
	u32 enable;
	u32 fixed_framerate;
	u32 time_scale;
};

#define VIDC_BITDEPTH_8		0x00000
#define VIDC_BITDEPTH_10	0x20002

struct hfi_bit_depth {
	u32 buffer_type;
	u32 bit_depth;
};

struct hfi_picture_type {
	u32 is_sync_frame;
	u32 picture_type;
};

struct hfi_pic_struct {
	u32 progressive_only;
};

struct hfi_colour_space {
	u32 colour_space;
};

struct hfi_extradata_input_crop {
	u32 size;
	u32 version;
	u32 port_index;
	u32 left;
	u32 top;
	u32 width;
	u32 height;
};

struct hfi_dpb_counts {
	u32 max_dpb_count;
	u32 max_ref_frames;
	u32 max_dec_buffering;
	u32 max_reorder_frames;
	u32 fw_min_cnt;
};

#define HFI_COLOR_FORMAT_MONOCHROME		0x01
#define HFI_COLOR_FORMAT_NV12			0x02
#define HFI_COLOR_FORMAT_NV21			0x03
#define HFI_COLOR_FORMAT_NV12_4x4TILE		0x04
#define HFI_COLOR_FORMAT_NV21_4x4TILE		0x05
#define HFI_COLOR_FORMAT_YUYV			0x06
#define HFI_COLOR_FORMAT_YVYU			0x07
#define HFI_COLOR_FORMAT_UYVY			0x08
#define HFI_COLOR_FORMAT_VYUY			0x09
#define HFI_COLOR_FORMAT_RGB565			0x0a
#define HFI_COLOR_FORMAT_BGR565			0x0b
#define HFI_COLOR_FORMAT_RGB888			0x0c
#define HFI_COLOR_FORMAT_BGR888			0x0d
#define HFI_COLOR_FORMAT_YUV444			0x0e
#define HFI_COLOR_FORMAT_RGBA8888		0x10

#define HFI_COLOR_FORMAT_UBWC_BASE		0x8000
#define HFI_COLOR_FORMAT_10_BIT_BASE		0x4000

#define HFI_COLOR_FORMAT_YUV420_TP10		0x4002
#define HFI_COLOR_FORMAT_P010			0x4003
#define HFI_COLOR_FORMAT_NV12_UBWC		0x8002
#define HFI_COLOR_FORMAT_YUV420_TP10_UBWC	0xc002
#define HFI_COLOR_FORMAT_P010_UBWC		0xc003
#define HFI_COLOR_FORMAT_RGBA8888_UBWC		0x8010

struct hfi_uncompressed_format_select {
	u32 buffer_type;
	u32 format;
};

struct hfi_uncompressed_plane_constraints {
	u32 stride_multiples;
	u32 max_stride;
	u32 min_plane_buffer_height_multiple;
	u32 buffer_alignment;
};

struct hfi_uncompressed_plane_info {
	u32 format;
	u32 num_planes;
	struct hfi_uncompressed_plane_constraints plane_constraints[1];
};

struct hfi_uncompressed_format_supported {
	u32 buffer_type;
	u32 format_entries;
	struct hfi_uncompressed_plane_info plane_info[1];
};

struct hfi_uncompressed_plane_actual {
	int actual_stride;
	u32 actual_plane_buffer_height;
};

struct hfi_uncompressed_plane_actual_info {
	u32 buffer_type;
	u32 num_planes;
	struct hfi_uncompressed_plane_actual plane_format[2];
};

struct hfi_uncompressed_plane_actual_constraints_info {
	u32 buffer_type;
	u32 num_planes;
	struct hfi_uncompressed_plane_constraints plane_format[2];
};

struct hfi_codec_supported {
	u32 dec_codecs;
	u32 enc_codecs;
};

struct hfi_properties_supported {
	u32 num_properties;
	u32 properties[1];
};

struct hfi_max_sessions_supported {
	u32 max_sessions;
};

#define HFI_MAX_MATRIX_COEFFS	9
#define HFI_MAX_BIAS_COEFFS	3
#define HFI_MAX_LIMIT_COEFFS	6

struct hfi_vpe_color_space_conversion {
	u32 csc_matrix[HFI_MAX_MATRIX_COEFFS];
	u32 csc_bias[HFI_MAX_BIAS_COEFFS];
	u32 csc_limit[HFI_MAX_LIMIT_COEFFS];
};

#define HFI_ROTATE_NONE		0x1
#define HFI_ROTATE_90		0x2
#define HFI_ROTATE_180		0x3
#define HFI_ROTATE_270		0x4

#define HFI_FLIP_NONE		0x1
#define HFI_FLIP_HORIZONTAL	0x2
#define HFI_FLIP_VERTICAL	0x3

struct hfi_operations {
	u32 rotate;
	u32 flip;
};

#define HFI_RESOURCE_OCMEM	0x1

struct hfi_resource_ocmem {
	u32 size;
	u32 mem;
};

struct hfi_resource_ocmem_requirement {
	u32 session_domain;
	u32 width;
	u32 height;
	u32 size;
};

struct hfi_resource_ocmem_requirement_info {
	u32 num_entries;
	struct hfi_resource_ocmem_requirement requirements[1];
};

struct hfi_property_sys_image_version_info_type {
	u32 string_size;
	u8  str_image_version[1];
};

struct hfi_codec_mask_supported {
	u32 codecs;
	u32 video_domains;
};

struct hfi_seq_header_info {
	u32 max_hader_len;
};

struct hfi_aspect_ratio {
	u32 aspect_width;
	u32 aspect_height;
};

#define HFI_MVC_BUFFER_LAYOUT_TOP_BOTTOM	0
#define HFI_MVC_BUFFER_LAYOUT_SIDEBYSIDE	1
#define HFI_MVC_BUFFER_LAYOUT_SEQ		2

struct hfi_mvc_buffer_layout_descp_type {
	u32 layout_type;
	u32 bright_view_first;
	u32 ngap;
};

struct hfi_scs_threshold {
	u32 threshold_value;
};

#define HFI_TEST_SSR_SW_ERR_FATAL	0x1
#define HFI_TEST_SSR_SW_DIV_BY_ZERO	0x2
#define HFI_TEST_SSR_HW_WDOG_IRQ	0x3

struct hfi_buffer_alloc_mode {
	u32 type;
	u32 mode;
};

struct hfi_index_extradata_config {
	u32 enable;
	u32 index_extra_data_id;
};

struct hfi_extradata_header {
	u32 size;
	u32 version;
	u32 port_index;
	u32 type;
	u32 data_size;
	u8 data[1];
};

struct hfi_batch_info {
	u32 input_batch_count;
	u32 output_batch_count;
};

struct hfi_buffer_count_actual {
	u32 type;
	u32 count_actual;
};

struct hfi_buffer_count_actual_4xx {
	u32 type;
	u32 count_actual;
	u32 count_min_host;
};

struct hfi_buffer_size_actual {
	u32 type;
	u32 size;
};

struct hfi_buffer_display_hold_count_actual {
	u32 type;
	u32 hold_count;
};

struct hfi_buffer_requirements {
	u32 type;
	u32 size;
	u32 region_size;
	u32 hold_count;
	u32 count_min;
	u32 count_actual;
	u32 contiguous;
	u32 alignment;
};

/* On HFI 4XX, some of the struct members have been swapped. */
static inline u32 hfi_bufreq_get_hold_count(struct hfi_buffer_requirements *req,
					    u32 ver)
{
	if (ver == HFI_VERSION_4XX)
		return 0;

	return req->hold_count;
};

static inline u32 hfi_bufreq_get_count_min(struct hfi_buffer_requirements *req,
					   u32 ver)
{
	if (ver == HFI_VERSION_4XX)
		return req->hold_count;

	return req->count_min;
};

static inline u32 hfi_bufreq_get_count_min_host(struct hfi_buffer_requirements *req,
						u32 ver)
{
	if (ver == HFI_VERSION_4XX)
		return req->count_min;

	return 0;
};

static inline void hfi_bufreq_set_hold_count(struct hfi_buffer_requirements *req,
					     u32 ver, u32 val)
{
	if (ver == HFI_VERSION_4XX)
		return;

	req->hold_count = val;
};

static inline void hfi_bufreq_set_count_min(struct hfi_buffer_requirements *req,
					    u32 ver, u32 val)
{
	if (ver == HFI_VERSION_4XX)
		req->hold_count = val;

	req->count_min = val;
};

static inline void hfi_bufreq_set_count_min_host(struct hfi_buffer_requirements *req,
						 u32 ver, u32 val)
{
	if (ver == HFI_VERSION_4XX)
		req->count_min = val;
};

struct hfi_data_payload {
	u32 size;
	u8 data[1];
};

struct hfi_enable_picture {
	u32 picture_type;
};

struct hfi_display_picture_buffer_count {
	int enable;
	u32 count;
};

struct hfi_extra_data_header_config {
	u32 type;
	u32 buffer_type;
	u32 version;
	u32 port_index;
	u32 client_extra_data_id;
};

struct hfi_interlace_format_supported {
	u32 buffer_type;
	u32 format;
};

struct hfi_buffer_alloc_mode_supported {
	u32 buffer_type;
	u32 num_entries;
	u32 data[1];
};

struct hfi_mb_error_map {
	u32 error_map_size;
	u8 error_map[1];
};

struct hfi_metadata_pass_through {
	int enable;
	u32 size;
};

struct hfi_multi_view_select {
	u32 view_index;
};

struct hfi_hybrid_hierp {
	u32 layers;
};

struct hfi_pkt_hdr {
	u32 size;
	u32 pkt_type;
};

struct hfi_session_hdr_pkt {
	struct hfi_pkt_hdr hdr;
	u32 session_id;
};

struct hfi_session_pkt {
	struct hfi_session_hdr_pkt shdr;
};

#endif
