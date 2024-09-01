/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2019 MediaTek Inc.
 * Author: Michael Hsiao <michael.hsiao@mediatek.com>
 */

/*****************************************************************************
 *
 * Filename:
 * ---------
 *  mt_sco_analog_type.h
 *
 * Project:
 * --------
 *   MT6583  Audio Driver Kernel Function
 *
 * Description:
 * ------------
 *   Audio register
 *
 * Author:
 * -------
 * Chipeng Chang
 *
 *----------------------------------------------------------------------------
 *
 *
 *****************************************************************************/

#ifndef _AUDIO_ANALOG_TYPE_H
#define _AUDIO_ANALOG_TYPE_H


/*****************************************************************************
 *                ENUM DEFINITION
 *****************************************************************************/


enum audio_analog_volume_type {
	AUDIO_ANALOG_VOLUME_HSOUTL = 0,
	AUDIO_ANALOG_VOLUME_HSOUTR,
	AUDIO_ANALOG_VOLUME_HPOUTL,
	AUDIO_ANALOG_VOLUME_HPOUTR,
	AUDIO_ANALOG_VOLUME_SPKL,
	AUDIO_ANALOG_VOLUME_SPKR,
	AUDIO_ANALOG_VOLUME_SPEAKER_HEADSET_R,
	AUDIO_ANALOG_VOLUME_SPEAKER_HEADSET_L,
	AUDIO_ANALOG_VOLUME_IV_BUFFER,
	AUDIO_ANALOG_VOLUME_LINEOUTL,
	AUDIO_ANALOG_VOLUME_LINEOUTR,
	AUDIO_ANALOG_VOLUME_LINEINL,
	AUDIO_ANALOG_VOLUME_LINEINR,
	AUDIO_ANALOG_VOLUME_MICAMP1,
	AUDIO_ANALOG_VOLUME_MICAMP2,
	AUDIO_ANALOG_VOLUME_MICAMP3,
	AUDIO_ANALOG_VOLUME_MICAMP4,
	AUDIO_ANALOG_VOLUME_LEVELSHIFTL,
	AUDIO_ANALOG_VOLUME_LEVELSHIFTR,
	AUDIO_ANALOG_VOLUME_TYPE_MAX
};

/* mux seleciotn */
enum audio_analog_mux_type {
	AUDIO_ANALOG_MUX_VOICE = 0,
	AUDIO_ANALOG_MUX_AUDIO,
	AUDIO_ANALOG_MUX_IV_BUFFER,
	AUDIO_ANALOG_MUX_LINEIN_STEREO,
	AUDIO_ANALOG_MUX_LINEIN_L,
	AUDIO_ANALOG_MUX_LINEIN_R,
	AUDIO_ANALOG_MUX_LINEIN_AUDIO_MONO,
	AUDIO_ANALOG_MUX_LINEIN_AUDIO_STEREO,
	AUDIO_ANALOG_MUX_IN_MIC1,
	AUDIO_ANALOG_MUX_IN_MIC2,
	AUDIO_ANALOG_MUX_IN_MIC3,
	AUDIO_ANALOG_MUX_IN_MIC4,
	AUDIO_ANALOG_MUX_IN_LINE_IN,
	AUDIO_ANALOG_MUX_IN_PREAMP_1,
	AUDIO_ANALOG_MUX_IN_PREAMP_2,
	AUDIO_ANALOG_MUX_IN_PREAMP_3,
	AUDIO_ANALOG_MUX_IN_PREAMP_4,
	AUDIO_MICSOURCE_MUX_IN_1,
	AUDIO_MICSOURCE_MUX_IN_2,
	AUDIO_MICSOURCE_MUX_IN_3,
	AUDIO_MICSOURCE_MUX_IN_4,
	AUDIO_ANALOG_MUX_IN_LEVEL_SHIFT_BUFFER,
	AUDIO_ANALOG_MUX_MUTE,
	AUDIO_ANALOG_MUX_OPEN,
	AUDIO_ANALOG_MAX_MUX_TYPE
};

/* device power */
enum audio_analog_device_type {
	AUDIO_ANALOG_DEVICE_OUT_EARPIECER = 0,
	AUDIO_ANALOG_DEVICE_OUT_EARPIECEL = 1,
	AUDIO_ANALOG_DEVICE_OUT_HEADSETR = 2,
	AUDIO_ANALOG_DEVICE_OUT_HEADSETL = 3,
	AUDIO_ANALOG_DEVICE_OUT_SPEAKERR = 4,
	AUDIO_ANALOG_DEVICE_OUT_SPEAKERL = 5,
	AUDIO_ANALOG_DEVICE_OUT_SPEAKER_HEADSET_R = 6,
	AUDIO_ANALOG_DEVICE_OUT_SPEAKER_HEADSET_L = 7,
	AUDIO_ANALOG_DEVICE_OUT_LINEOUTR = 8,
	AUDIO_ANALOG_DEVICE_OUT_LINEOUTL = 9,
	AUDIO_ANALOG_DEVICE_OUT_EXTSPKAMP = 10,
	AUDIO_ANALOG_DEVICE_2IN1_SPK = 11,
	/* DEVICE_IN_LINEINR = 11, */
	/* DEVICE_IN_LINEINL = 12, */
	AUDIO_ANALOG_DEVICE_IN_ADC1 = 13,
	AUDIO_ANALOG_DEVICE_IN_ADC2 = 14,
	AUDIO_ANALOG_DEVICE_IN_ADC3 = 15,
	AUDIO_ANALOG_DEVICE_IN_ADC4 = 16,
	AUDIO_ANALOG_DEVICE_IN_PREAMP_L = 17,
	AUDIO_ANALOG_DEVICE_IN_PREAMP_R = 18,
	AUDIO_ANALOG_DEVICE_IN_DIGITAL_MIC = 19,
	AUDIO_ANALOG_DEVICE_RECEIVER_SPEAKER_SWITCH = 20,
	AUDIO_ANALOG_DEVICE_MAX
};

enum audio_analog_device_sample_rate {
	AUDIO_ANALOG_DEVICE_OUT_DAC,
	AUDIO_ANALOG_DEVICE_IN_ADC,
	AUDIO_ANALOG_DEVICE_IN_ADC_2,
	AUDIO_ANALOG_DEVICE_INOUT_MAX
};

enum audio_analog_audio_analog_input {


	AUDIO_ANALOG_AUDIOANALOG_INPUT_OPEN = 0,
	AUDIO_ANALOG_AUDIOANALOG_INPUT_ADC,
	AUDIO_ANALOG_AUDIOANALOG_INPUT_PREAMP,
};

enum audio_analog_channels {


	AUDIO_ANALOG_CHANNELS_LEFT1 = 0,
	AUDIO_ANALOG_CHANNELS_RIGHT1,
};

enum audio_analog_loopback {


	AUDIO_ANALOG_DAC_LOOP_DAC_HS_ON = 0,
	AUDIO_ANALOG_DAC_LOOP_DAC_HS_OFF,
	AUDIO_ANALOG_DAC_LOOP_DAC_HP_ON,
	AUDIO_ANALOG_DAC_LOOP_DAC_HP_OFF,
	AUDIO_ANALOG_DAC_LOOP_DAC_SPEAKER_ON,
	AUDIO_ANALOG_DAC_LOOP_DAC_SPEAKER_OFF,
};

enum audio_analog_ul_mode {
	AUDIO_ANALOGUL_MODE_ACC = 0,
	AUDIO_ANALOGUL_MODE_DCC,
	AUDIO_ANALOGUL_MODE_DMIC,
	AUDIO_ANALOGUL_MODE_DCCECMDIFF,
	AUDIO_ANALOGUL_MODE_DCCECMSINGLE,
};

enum audio_offset_trim_mux {


	AUDIO_OFFSET_TRIM_MUX_OPEN = 0,
	AUDIO_OFFSET_TRIM_MUX_HPL,
	AUDIO_OFFSET_TRIM_MUX_HPR,
	AUDIO_OFFSET_TRIM_MUX_HSP,
	AUDIO_OFFSET_TRIM_MUX_HSN,
	AUDIO_OFFSET_TRIM_MUX_LOLP,
	AUDIO_OFFSET_TRIM_MUX_LOLN,
	AUDIO_OFFSET_TRIM_MUX_LORP,
	AUDIO_OFFSET_TRIM_MUX_LORN,
	AUDIO_OFFSET_TRIM_MUX_AVSS32,
	AUDIO_OFFSET_TRIM_MUX_GROUND,
};


struct mt6357_codec_priv {
	int mAudio_Ana_Volume[AUDIO_ANALOG_VOLUME_TYPE_MAX];
	int mAudio_Ana_Mux[AUDIO_ANALOG_MAX_MUX_TYPE];
	int mAudio_Ana_DevicePower[AUDIO_ANALOG_DEVICE_MAX];
	int mAudio_BackUpAna_DevicePower[AUDIO_ANALOG_DEVICE_MAX];
};


/* hs03s code for SR-AL5625-01-247 by zhangbing at 2022/03/15 start */
#ifdef CONFIG_HQ_PROJECT_HS03S
#define ANALOG_PA_SUPPORT
struct mt6357_priv {
	struct device *dev;
	struct regmap *regmap;
	struct iio_channel *codec_auxadc, *accdet_auxadc;
	struct nvmem_device *hp_efuse;
	int mtkaif_protocol;
	int ctrl_mod;
};
#endif
#ifdef CONFIG_HQ_PROJECT_O22
#define ANALOG_PA_SUPPORT
struct mt6357_priv {
	struct device *dev;
	struct regmap *regmap;
	struct iio_channel *codec_auxadc, *accdet_auxadc;
	struct nvmem_device *hp_efuse;
	int mtkaif_protocol;
	int ctrl_mod;
};
#endif
#ifdef CONFIG_HQ_PROJECT_O8
#define ANALOG_PA_SUPPORT
struct mt6357_priv {
	struct device *dev;
	struct regmap *regmap;
	struct iio_channel *codec_auxadc, *accdet_auxadc;
	struct nvmem_device *hp_efuse;
	int mtkaif_protocol;
	int ctrl_mod;
};
#endif
#ifdef CONFIG_HQ_PROJECT_HS04
#define ANALOG_PA_SUPPORT
/*hs04 code for SR-AL6398A-01-121 by hujincan at 2022/07/05 start*/
/* Compatible time sequence with Foursemi PA and AW PA */
#define COMPATIBLE_PA_SUPPORT
/*hs04 code for SR-AL6398A-01-121 by hujincan at 2022/07/05 end*/
struct mt6357_priv {
	struct device *dev;
	struct regmap *regmap;
	struct iio_channel *codec_auxadc, *accdet_auxadc;
	struct nvmem_device *hp_efuse;
	int mtkaif_protocol;
	int ctrl_mod;
};
#endif
#ifdef CONFIG_HQ_PROJECT_OT8
struct mt6357_priv {
	struct device *dev;
	struct regmap *regmap;
	struct iio_channel *codec_auxadc, *accdet_auxadc;
	struct nvmem_device *hp_efuse;
	int mtkaif_protocol;
};
#endif
/* hs03s code for SR-AL5625-01-247 by zhangbing at 2022/03/15 end */

#endif
