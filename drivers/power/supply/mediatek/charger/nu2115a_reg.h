#ifndef __NU2115A_HEADER__
#define __NU2115A_HEADER__

/* Register 00h */
#define NU2115A_REG_00                    0x00
#define NU2115A_BAT_OVP_DIS_MASK            0x80
#define NU2115A_BAT_OVP_DIS_SHIFT        7
#define NU2115A_BAT_OVP_ENABLE            0
#define NU2115A_BAT_OVP_DISABLE            1

#define NU2115A_BAT_OVP_MASK                0x7F
#define NU2115A_BAT_OVP_SHIFT            0
#define NU2115A_BAT_OVP_BASE                3500
#define NU2115A_BAT_OVP_LSB                156

/* Register 01h */
#define NU2115A_REG_01                    0x01
#define NU2115A_BAT_OVP_ALM_DIS_MASK            0x80
#define NU2115A_BAT_OVP_ALM_DIS_SHIFT        7
#define NU2115A_BAT_OVP_ALM_ENABLE            0
#define NU2115A_BAT_OVP_ALM_DISABLE            1

#define NU2115A_BAT_OVP_ALM_MASK                0x7F
#define NU2115A_BAT_OVP_ALM_SHIFT            0
#define NU2115A_BAT_OVP_ALM_BASE                3500
#define NU2115A_BAT_OVP_ALM_LSB                15


/* Register 02h */
#define NU2115A_REG_02                    0x02
#define NU2115A_BAT_OCP_DIS_MASK            0x80
#define NU2115A_BAT_OCP_DIS_SHIFT        7
#define NU2115A_BAT_OCP_ENABLE            0
#define NU2115A_BAT_OCP_DISABLE            1

#define NU2115A_BAT_OCP_MASK                0x7F
#define NU2115A_BAT_OCP_SHIFT            0
#define NU2115A_BAT_OCP_BASE                2000
#define NU2115A_BAT_OCP_LSB                100

/* Register 03h */
#define NU2115A_REG_03                    0x03
#define NU2115A_BAT_OCP_ALM_DIS_MASK            0x80
#define NU2115A_BAT_OCP_ALM_DIS_SHIFT        7
#define NU2115A_BAT_OCP_ALM_ENABLE            0
#define NU2115A_BAT_OCP_ALM_DISABLE            1

#define NU2115A_BAT_OCP_ALM_MASK                0x7F
#define NU2115A_BAT_OCP_ALM_SHIFT            0
#define NU2115A_BAT_OCP_ALM_BASE                2000
#define NU2115A_BAT_OCP_ALM_LSB                100

/* Register 04h */
#define NU2115A_REG_04                    0x04
#define    NU2115A_BAT_UCP_ALM_DIS_MASK            0x80
#define    NU2115A_BAT_UCP_ALM_DIS_SHIFT        7
#define NU2115A_BAT_UCP_ALM_ENABLE            0
#define NU2115A_BAT_UCP_ALM_DISABLE            1

#define NU2115A_BAT_UCP_ALM_MASK                0x3F
#define NU2115A_BAT_UCP_ALM_SHIFT            0
#define NU2115A_BAT_UCP_ALM_BASE                0
#define NU2115A_BAT_UCP_ALM_LSB                50

/* Register 05h */
#define NU2115A_REG_05                    0x05
#define NU2115A_AC1_OVP_STAT_MASK            0x80
#define NU2115A_AC1_OVP_STAT_SHIFT            7

#define NU2115A_AC1_OVP_FLAG_MASK            0x40
#define NU2115A_AC1_OVP_FLAG_SHIFT            6

#define NU2115A_AC1_OVP_MASK_MASK            0x20
#define NU2115A_AC1_OVP_MASK_SHIFT            5

#define NU2115A_VAC1_PD_EN_MASK        0x10
#define NU2115A_VAC1_PD_EN_SHIFT        4

#define NU2115A_AC1_OVP_MASK                0x07
#define NU2115A_AC1_OVP_SHIFT                0
#define NU2115A_AC1_OVP_BASE                10000
#define NU2115A_AC1_OVP_6P5V                6500
#define NU2115A_AC1_OVP_LSB                500

/* Register 06h */
#define NU2115A_REG_06                    0x06
#define NU2115A_AC2_OVP_STAT_MASK            0x80
#define NU2115A_AC2_OVP_STAT_SHIFT            7

#define NU2115A_AC2_OVP_FLAG_MASK            0x40
#define NU2115A_AC2_OVP_FLAG_SHIFT            6

#define NU2115A_AC2_OVP_MASK_MASK            0x20
#define NU2115A_AC2_OVP_MASK_SHIFT            5

#define NU2115A_VAC2_PD_EN_MASK        0x10
#define NU2115A_VAC2_PD_EN_SHIFT        4

#define NU2115A_AC2_OVP_MASK                0x07
#define NU2115A_AC2_OVP_SHIFT                0
#define NU2115A_AC2_OVP_BASE                10000
#define NU2115A_AC2_OVP_LSB                500

/* Register 07h */
#define NU2115A_REG_07                    0x07
#define NU2115A_VBUS_PD_EN_MASK                0x80
#define NU2115A_VBUS_PD_EN_SHIFT            7
#define NU2115A_VBUS_PD_ENABLE                1
#define NU2115A_VBUS_PD_DISABLE                0

#define NU2115A_BUS_OVP_DIS_MASK            0x40
#define NU2115A_BUS_OVP_DIS_SHIFT        6
#define NU2115A_BUS_OVP_ENABLE            0
#define NU2115A_BUS_OVP_DISABLE            1

#define NU2115A_BUS_OVP_MASK                0x3F
#define NU2115A_BUS_OVP_SHIFT                0
#define NU2115A_BUS_OVP_BASE                6000
#define NU2115A_BUS_OVP_LSB                100

/* Register 08h */
#define NU2115A_REG_08                    0x08
#define NU2115A_BUS_OVP_ALM_DIS_MASK            0x80
#define NU2115A_BUS_OVP_ALM_DIS_SHIFT        7
#define NU2115A_BUS_OVP_ALM_ENABLE            0
#define NU2115A_BUS_OVP_ALM_DISABLE            1

#define NU2115A_BUS_RCP_DIS_MASK            0x40
#define NU2115A_BUS_RCP_DIS_SHIFT        6
#define NU2115A_BUS_RCP_ENABLE            0
#define NU2115A_BUS_RCP_DISABLE            1

#define NU2115A_BUS_OVP_ALM_MASK                0x3F
#define NU2115A_BUS_OVP_ALM_SHIFT                0
#define NU2115A_BUS_OVP_ALM_BASE                6000
#define NU2115A_BUS_OVP_ALM_LSB                100

/* Register 09h */
#define NU2115A_REG_09                    0x09
#define NU2115A_BUS_OCP_DIS_MASK            0x80
#define NU2115A_BUS_OCP_DIS_SHIFT            7
#define NU2115A_BUS_OCP_ENABLE                0
#define NU2115A_BUS_OCP_DISABLE                1

#define NU2115A_IBUS_UCP_RISE_FLAG_MASK            0x40
#define NU2115A_IBUS_UCP_RISE_FLAG_SHIFT        6

#define NU2115A_IBUS_UCP_RISE_MASK_MASK            0x20
#define NU2115A_IBUS_UCP_RISE_MASK_SHIFT        5

#define NU2115A_BUS_UCP_DIS_MASK            0x10
#define NU2115A_BUS_UCP_DIS_SHIFT            4
#define NU2115A_BUS_UCP_ENABLE                0
#define NU2115A_BUS_UCP_DISABLE                1

#define NU2115A_BUS_OCP_MASK                0x0F
#define NU2115A_BUS_OCP_SHIFT                0
#define NU2115A_BUS_OCP_BASE                2500
#define NU2115A_BUS_OCP_LSB                250

/* Register 0Ah */
#define NU2115A_REG_0A                    0x0A
#define NU2115A_BUS_OCP_ALM_DIS_MASK            0x80
#define NU2115A_BUS_OCP_ALM_DIS_SHIFT            7
#define NU2115A_BUS_OCP_ALM_ENABLE            0
#define NU2115A_BUS_OCP_ALM_DISABLE            1

#define NU2115A_IBUS_UCP_FALL_FLAG_MASK            0x40
#define NU2115A_IBUS_UCP_FALL_FLAG_SHIFT        6

#define NU2115A_IBUS_UCP_FALL_MASK_MASK            0x20
#define NU2115A_IBUS_UCP_FALL_MASK_SHIFT        5

#define NU2115A_BUS_OCP_ALM_MASK            0x1F
#define NU2115A_BUS_OCP_ALM_SHIFT            0
#define NU2115A_BUS_OCP_ALM_BASE            2500
#define NU2115A_BUS_OCP_ALM_LSB                125

/* Register 0Bh */
#define NU2115A_REG_0B                    0xB
#define NU2115A_VOUT_OVP_DIS_MASK            0x80
#define NU2115A_VOUT_OVP_DIS_SHIFT            7
#define NU2115A_VOUT_OVP_ENABLE            0
#define NU2115A_VOUT_OVP_DISABLE            1

#define NU2115A_VOUT_OVP_SET_MASK            0x40
#define NU2115A_VOUT_OVP_SET_SHIFT            6

#define NU2115A_VOUT_OVP_STAT_MASK        0x04
#define NU2115A_VOUT_OVP_STAT_SHIFT        2

#define NU2115A_VOUT_OVP_FLAG_MASK        0x02
#define NU2115A_VOUT_OVP_FLAG_SHIFT        1

#define NU2115A_VOUT_OVP_MASK_MASK        0x01
#define NU2115A_VOUT_OVP_MASK_SHIFT        0
#define NU2115A_VOUT_OVP_MASK_ENABLE        1
#define NU2115A_VOUT_OVP_MASK_DISABLE    0

/* Register 0Ch */
#define NU2115A_REG_0C                    0x0C
#define NU2115A_TSD_FLAG_MASK                0x80
#define NU2115A_TSD_FLAG_SHIFT            7

#define NU2115A_TSD_STAT_MASK                0x40
#define NU2115A_TSD_STAT_SHIFT            6

#define NU2115A_VBUS_ERRORLO_FLAG_MASK            0x20
#define NU2115A_VBUS_ERRORLO_FLAG_SHIFT            5

#define NU2115A_VBUS_ERRORHI_FLAG_MASK            0x10
#define NU2115A_VBUS_ERRORHI_FLAG_SHIFT            4

#define NU2115A_SS_TIMEOUT_FLAG_MASK            0x08
#define NU2115A_SS_TIMEOUT_FLAG_SHIFT            3

#define NU2115A_CONV_SWITCHING_STAT_MASK        0x04
#define NU2115A_CONV_SWITCHING_STAT_SHIFT        2

#define NU2115A_PIN_DIAG_FALL_FLAG_MASK            0x01
#define NU2115A_PIN_DIAG_FALL_FLAG_SHIFT        0

/* Register 0Dh */
#define NU2115A_REG_0D                    0x0D
#define NU2115A_REG_RST_MASK                0x80
#define NU2115A_REG_RST_SHIFT                7
#define NU2115A_REG_RST_ENABLE                1
#define NU2115A_REG_RST_DISABLE                0

#define NU2115A_FSW_SET_MASK                0x70
#define NU2115A_FSW_SET_SHIFT                4
#define NU2115A_FSW_SET_300KHZ                0
#define NU2115A_FSW_SET_400KHZ                1
#define NU2115A_FSW_SET_500KHZ                2
#define NU2115A_FSW_SET_600KHZ                3
#define NU2115A_FSW_SET_700KHZ                4
#define NU2115A_FSW_SET_800KHZ                5
#define NU2115A_FSW_SET_900KHZ                6
#define NU2115A_FSW_SET_1000KHZ                7

#define NU2115A_WD_TIMEOUT_FLAG_MASK            0x08
#define NU2115A_WD_TIMEOUT_SHIFT            3

#define NU2115A_WATCHDOG_DIS_MASK            0x04
#define NU2115A_WATCHDOG_DIS_SHIFT            2
#define NU2115A_WATCHDOG_ENABLE                0
#define NU2115A_WATCHDOG_DISABLE            1

#define NU2115A_WATCHDOG_MASK                0x03
#define NU2115A_WATCHDOG_SHIFT                0
#define NU2115A_WATCHDOG_0P5S                0
#define NU2115A_WATCHDOG_1S                1
#define NU2115A_WATCHDOG_5S                2
#define NU2115A_WATCHDOG_30S                3

/* Register 0Eh */
#define NU2115A_REG_0E                    0x0E
#define NU2115A_CHG_EN_MASK                0x80
#define NU2115A_CHG_EN_SHIFT                7
#define NU2115A_CHG_ENABLE                1
#define NU2115A_CHG_DISABLE                0

#define NU2115A_CHG_MODE_MASK                0x20
#define NU2115A_CHG_MODE_SHIFT                5
#define NU2115A_1_1_MODE                    1
#define NU2115A_2_1_MODE                    0

#define NU2115A_FREQ_SHIFT_MASK                0x18
#define NU2115A_FREQ_SHIFT_SHIFT            3
#define NU2115A_FREQ_SHIFT_NORMINAL            0
#define NU2115A_FREQ_SHIFT_POSITIVE10            1
#define NU2115A_FREQ_SHIFT_NEGATIVE10            2
#define NU2115A_FREQ_SHIFT_SPREAD_SPECTRUM        3

#define NU2115A_TSBAT_DIS_MASK                0x04
#define NU2115A_TSBAT_DIS_SHIFT                2
#define NU2115A_TSBAT_ENABLE                0
#define NU2115A_TSBAT_DISABLE                1

#define NU2115A_TSBUS_DIS_MASK                0x02
#define NU2115A_TSBUS_DIS_SHIFT                1
#define NU2115A_TSBUS_ENABLE                0
#define NU2115A_TSBUS_DISABLE                1


#define NU2115A_TDIE_DIS_MASK                0x01
#define NU2115A_TDIE_DIS_SHIFT                0
#define NU2115A_TDIE_ENABLE                0
#define NU2115A_TDIE_DISABLE                1

/* Register 0Fh */
#define NU2115A_REG_0F                    0x0F
#define NU2115A_BAT_OVP_ALM_STAT_MASK            0x80
#define NU2115A_BAT_OVP_ALM_STAT_SHIFT            7

#define NU2115A_BAT_OCP_ALM_STAT_MASK            0x40
#define NU2115A_BAT_OCP_ALM_STAT_SHIFT            6

#define NU2115A_BUS_OVP_ALM_STAT_MASK            0x20
#define NU2115A_BUS_OVP_ALM_STAT_SHIFT            5

#define NU2115A_BUS_OCP_ALM_STAT_MASK            0x10
#define NU2115A_BUS_OCP_ALM_STAT_SHIFT            4

#define NU2115A_BAT_UCP_ALM_STAT_MASK            0x08
#define NU2115A_BAT_UCP_ALM_STAT_SHIFT            3

#define NU2115A_VOUT_NOT_PRES_STAT_MASK            0x08
#define NU2115A_VOUT_NOT_PRES_STAT_SHIFT            2

#define NU2115A_VBAT_INSERT_STAT_MASK            0x02
#define NU2115A_VBAT_INSERT_STAT_SHIFT            1

#define NU2115A_ADC_DONE_STAT_MASK            0x01
#define NU2115A_ADC_DONE_STAT_SHIFT            0
#define NU2115A_ADC_DONE_STAT_COMPLETE            1
#define NU2115A_ADC_DONE_STAT_NOTCOMPLETE        0

/* Register 10h */
#define NU2115A_REG_10                    0x10
#define NU2115A_BAT_OVP_ALM_FLAG_MASK            0x80
#define NU2115A_BAT_OVP_ALM_FLAG_SHIFT            7

#define NU2115A_BAT_OCP_ALM_FLAG_MASK            0x40
#define NU2115A_BAT_OCP_ALM_FLAG_SHIFT            6

#define NU2115A_BUS_OVP_ALM_FLAG_MASK            0x20
#define NU2115A_BUS_OVP_ALM_FLAG_SHIFT            5

#define NU2115A_BUS_OCP_ALM_FLAG_MASK            0x10
#define NU2115A_BUS_OCP_ALM_FLAG_SHIFT            4

#define NU2115A_BAT_UCP_ALM_FLAG_MASK        0x08
#define NU2115A_BAT_UCP_ALM_FLAG_SHIFT        3

#define NU2115A_VBAT_INSERT_FLAG_MASK            0x02
#define NU2115A_VBAT_INSERT_FLAG_SHIFT            1

#define NU2115A_ADC_DONE_FLAG_MASK            0x01
#define NU2115A_ADC_DONE_FLAG_SHIFT            0

/* Register 11h */
#define NU2115A_REG_11                    0x11
#define NU2115A_BAT_OVP_ALM_MASK_MASK            0x80
#define NU2115A_BAT_OVP_ALM_MASK_SHIFT            7

#define NU2115A_BAT_OCP_ALM_MASK_MASK            0x40
#define NU2115A_BAT_OCP_ALM_MASK_SHIFT            6

#define NU2115A_BUS_OVP_ALM_MASK_MASK            0x20
#define NU2115A_BUS_OVP_ALM_MASK_SHIFT            5

#define NU2115A_BUS_OCP_ALM_MASK_MASK            0x10
#define NU2115A_BUS_OCP_ALM_MASK_SHIFT            4

#define NU2115A_BAT_UCP_ALM_MASK_MASK        0x08
#define NU2115A_BAT_UCP_ALM_MASK_SHIFT        3

#define NU2115A_VBAT_INSERT_MASK_MASK            0x02
#define NU2115A_VBAT_INSERT_MASK_SHIFT            1

#define NU2115A_ADC_DONE_MASK_MASK            0x01
#define NU2115A_ADC_DONE_MASK_SHIFT            0

/* Register 12h */
#define NU2115A_REG_12                    0x12
#define NU2115A_BAT_OVP_FLT_STAT_MASK            0x80
#define NU2115A_BAT_OVP_FLT_STAT_SHIFT            7

#define NU2115A_BAT_OCP_FLT_STAT_MASK            0x40
#define NU2115A_BAT_OCP_FLT_STAT_SHIFT            6

#define NU2115A_BUS_OVP_FLT_STAT_MASK            0x20
#define NU2115A_BUS_OVP_FLT_STAT_SHIFT            5

#define NU2115A_BUS_OCP_FLT_STAT_MASK            0x10
#define NU2115A_BUS_OCP_FLT_STAT_SHIFT            4

#define NU2115A_BUS_RCP_FLT_STAT_MASK        0x08
#define NU2115A_BUS_RCP_FLT_STAT_SHIFT        3

#define NU2115A_TS_ALM_STAT_MASK            0x04
#define NU2115A_TS_ALM_STAT_SHIFT            2

#define NU2115A_TS_FLT_STAT_MASK            0x02
#define NU2115A_TS_FLT_STAT_SHIFT            1

#define NU2115A_TDIE_ALM_STAT_MASK            0x01
#define NU2115A_TDIE_ALM_STAT_SHIFT            0

/* Register 13h */
#define NU2115A_REG_13                    0x13
#define NU2115A_BAT_OVP_FLT_FLAG_MASK            0x80
#define NU2115A_BAT_OVP_FLT_FLAG_SHIFT            7

#define NU2115A_BAT_OCP_FLT_FLAG_MASK            0x40
#define NU2115A_BAT_OCP_FLT_FLAG_SHIFT            6

#define NU2115A_BUS_OVP_FLT_FLAG_MASK            0x20
#define NU2115A_BUS_OVP_FLT_FLAG_SHIFT            5

#define NU2115A_BUS_OCP_FLT_FLAG_MASK            0x10
#define NU2115A_BUS_OCP_FLT_FLAG_SHIFT            4

#define NU2115A_BUS_RCP_FLT_FLAG_MASK        0x08
#define NU2115A_BUS_RCP_FLT_FLAG_SHIFT        3

#define NU2115A_TS_ALM_FLAG_MASK            0x04
#define NU2115A_TS_ALM_FLAG_SHIFT            2

#define NU2115A_TS_FLT_FLAG_MASK            0x02
#define NU2115A_TS_FLT_FLAG_SHIFT            1

#define NU2115A_TDIE_ALM_FLAG_MASK            0x01
#define NU2115A_TDIE_ALM_FLAG_SHIFT            0

/* Register 14h */
#define NU2115A_REG_14                    0x14
#define NU2115A_BAT_OVP_FLT_MASK_MASK            0x80
#define NU2115A_BAT_OVP_FLT_MASK_SHIFT            7
#define NU2115A_BAT_OVP_FLT_MASK_ENABLE            1
#define NU2115A_BAT_OVP_FLT_MASK_DISABLE        0

#define NU2115A_BAT_OCP_FLT_MASK_MASK            0x40
#define NU2115A_BAT_OCP_FLT_MASK_SHIFT            6
#define NU2115A_BAT_OCP_FLT_MASK_ENABLE            1
#define NU2115A_BAT_OCP_FLT_MASK_DISABLE        0

#define NU2115A_BUS_OVP_FLT_MASK_MASK            0x20
#define NU2115A_BUS_OVP_FLT_MASK_SHIFT            5
#define NU2115A_BUS_OVP_FLT_MASK_ENABLE            1
#define NU2115A_BUS_OVP_FLT_MASK_DISABLE        0

#define NU2115A_BUS_OCP_FLT_MASK_MASK            0x10
#define NU2115A_BUS_OCP_FLT_MASK_SHIFT            4
#define NU2115A_BUS_OCP_FLT_MASK_ENABLE            1
#define NU2115A_BUS_OCP_FLT_MASK_DISABLE        0

#define NU2115A_BUS_RCP_FLT_MASK_MASK        0x08
#define NU2115A_BUS_RCP_FLT_MASK_SHIFT        3
#define NU2115A_BUS_RCP_FLT_MASK_ENABLE        1
#define NU2115A_BUS_RCP_FLT_MASK_DISABLE        0

#define NU2115A_TS_ALM_MASK_MASK            0x04
#define NU2115A_TS_ALM_MASK_SHIFT            2
#define NU2115A_TS_ALM_MASK_ENABLE            1
#define NU2115A_TS_ALM_MASK_DISABLE            0

#define NU2115A_TS_FLT_MASK_MASK            0x02
#define NU2115A_TS_FLT_MASK_SHIFT            1
#define NU2115A_TS_FLT_MASK_ENABLE            1
#define NU2115A_TS_FLT_MASK_DISABLE            0

#define NU2115A_TDIE_ALM_MASK_MASK            0x01
#define NU2115A_TDIE_ALM_MASK_SHIFT            0
#define NU2115A_TDIE_ALM_MASK_ENABLE            1
#define NU2115A_TDIE_ALM_MASK_DISABLE            0

/* Register 15h */
#define NU2115A_REG_15                    0x15
#define NU2115A_ADC_EN_MASK                0x80
#define NU2115A_ADC_EN_SHIFT                7
#define NU2115A_ADC_ENABLE                1
#define NU2115A_ADC_DISABLE                0

#define NU2115A_ADC_RATE_MASK                0x40
#define NU2115A_ADC_RATE_SHIFT                6
#define NU2115A_ADC_RATE_CONTINOUS            0
#define NU2115A_ADC_RATE_ONESHOT            1

#define NU2115A_IBUS_ADC_DIS_MASK            0x02
#define NU2115A_IBUS_ADC_DIS_SHIFT            1
#define NU2115A_IBUS_ADC_ENABLE                0
#define NU2115A_IBUS_ADC_DISABLE            1

#define NU2115A_VBUS_ADC_DIS_MASK            0x01
#define NU2115A_VBUS_ADC_DIS_SHIFT            0
#define NU2115A_VBUS_ADC_ENABLE                0
#define NU2115A_VBUS_ADC_DISABLE            1

/* Register 16h */
#define NU2115A_REG_16                    0x16
#define NU2115A_VAC1_ADC_DIS_MASK            0x80
#define NU2115A_VAC1_ADC_DIS_SHIFT            7
#define NU2115A_VAC1_ADC_ENABLE                0
#define NU2115A_VAC1_ADC_DISABLE            1

#define NU2115A_VAC2_ADC_DIS_MASK            0x40
#define NU2115A_VAC2_ADC_DIS_SHIFT            6
#define NU2115A_VAC2_ADC_ENABLE                0
#define NU2115A_VAC2_ADC_DISABLE                1

#define NU2115A_VOUT_ADC_DIS_MASK            0x20
#define NU2115A_VOUT_ADC_DIS_SHIFT            5
#define NU2115A_VOUT_ADC_ENABLE                0
#define NU2115A_VOUT_ADC_DISABLE            1

#define NU2115A_VBAT_ADC_DIS_MASK            0x10
#define NU2115A_VBAT_ADC_DIS_SHIFT            4
#define NU2115A_VBAT_ADC_ENABLE                0
#define NU2115A_VBAT_ADC_DISABLE            1

#define NU2115A_IBAT_ADC_DIS_MASK            0x08
#define NU2115A_IBAT_ADC_DIS_SHIFT            3
#define NU2115A_IBAT_ADC_ENABLE                0
#define NU2115A_IBAT_ADC_DISABLE            1

#define NU2115A_TSBUS_ADC_DIS_MASK            0x04
#define NU2115A_TSBUS_ADC_DIS_SHIFT            2
#define NU2115A_TSBUS_ADC_ENABLE            0
#define NU2115A_TSBUS_ADC_DISABLE            1

#define NU2115A_TSBAT_ADC_DIS_MASK            0x02
#define NU2115A_TSBAT_ADC_DIS_SHIFT            1
#define NU2115A_TSBAT_ADC_ENABLE            0
#define NU2115A_TSBAT_ADC_DISABLE            1

#define NU2115A_TDIE_ADC_DIS_MASK            0x01
#define NU2115A_TDIE_ADC_DIS_SHIFT            0
#define NU2115A_TDIE_ADC_ENABLE                0
#define NU2115A_TDIE_ADC_DISABLE            1

/* Register 17h */
#define NU2115A_REG_17                    0x17
#define NU2115A_IBUS_POL_MASK                0x80
#define NU2115A_IBUS_POL_SHIFT                7
#define NU2115A_IBUS_POL_POSITIVE            0 
#define NU2115A_IBUS_POL_NAGETIVE            1

#define NU2115A_IBUS_ADC1_MASK                0x1F
#define NU2115A_IBUS_ADC1_SHIFT                0
#define NU2115A_IBUS_ADC1_BASE                0
#define NU2115A_IBUS_ADC1_LSB                256

/* Register 18h */
#define NU2115A_REG_18                    0x18
#define NU2115A_IBUS_ADC0_MASK                0xFF
#define NU2115A_IBUS_ADC0_SHIFT                0
#define NU2115A_IBUS_ADC0_BASE                0
#define NU2115A_IBUS_ADC0_LSB                1

/* Register 19h */
#define NU2115A_REG_19                    0x19
#define NU2115A_VBUS_POL_MASK                0x80
#define NU2115A_VBUS_POL_SHIFT                7
#define NU2115A_VBUS_POL_POSITIVE            0
#define NU2115A_VBUS_POL_NEGATIVE            1

#define NU2115A_VBUS_ADC1_MASK                0x7F
#define NU2115A_VBUS_ADC1_SHIFT                0
#define NU2115A_VBUS_ADC1_BASE                0
#define NU2115A_VBUS_ADC1_LSB                256

/* Register 1Ah */
#define NU2115A_REG_1A                    0x1A
#define NU2115A_VBUS_ADC0_MASK                0xFF
#define NU2115A_VBUS_ADC0_SHIFT                0
#define NU2115A_VBUS_ADC0_BASE                0
#define NU2115A_VBUS_ADC0_LSB                1

/* Register 1Bh */
#define NU2115A_REG_1B                    0x1B
#define NU2115A_VAC1_POL_MASK                0x80
#define NU2115A_VAC1_POL_SHIFT                7
#define NU2115A_VAC1_POL_POSITIVE            0
#define NU2115A_VAC1_POL_NEGATIVE            1

#define NU2115A_VAC1_ADC1_MASK                0x7F
#define NU2115A_VAC1_ADC1_SHIFT                0
#define NU2115A_VAC1_ADC1_BASE                0
#define NU2115A_VAC1_ADC1_LSB                256

/* Register 1Ch */
#define NU2115A_REG_1C                    0x1C
#define NU2115A_VAC1_ADC0_MASK                0xFF
#define NU2115A_VAC1_ADC0_SHIFT                0
#define NU2115A_VAC1_ADC0_BASE                0
#define NU2115A_VAC1_ADC0_LSB                1

/* Register 1Dh */
#define NU2115A_REG_1D                    0x1D
#define NU2115A_VAC2_POL_MASK                0x80
#define NU2115A_VAC2_POL_SHIFT                7
#define NU2115A_VAC2_POL_POSITIVE            0
#define NU2115A_VAC2_POL_NEGATIVE            1

#define NU2115A_VAC2_ADC1_MASK                0x7F
#define NU2115A_VAC2_ADC1_SHIFT                0
#define NU2115A_VAC2_ADC1_BASE                0
#define NU2115A_VAC2_ADC1_LSB                256

/* Register 1Eh */
#define NU2115A_REG_1E                    0x1E
#define NU2115A_VAC2_ADC0_MASK                0xFF
#define NU2115A_VAC2_ADC0_SHIFT                0
#define NU2115A_VAC2_ADC0_BASE                0
#define NU2115A_VAC2_ADC0_LSB                1

/* Register 1Fh */
#define NU2115A_REG_1F                    0x1F
#define NU2115A_VOUT_POL_MASK                0x80
#define NU2115A_VOUT_POL_SHIFT                7
#define NU2115A_VOUT_POL_POSITIVE            0
#define NU2115A_VOUT_POL_NEGATIVE            1

#define NU2115A_VOUT_ADC1_MASK                0x3F
#define NU2115A_VOUT_ADC1_SHIFT                0
#define NU2115A_VOUT_ADC1_BASE                0
#define NU2115A_VOUT_ADC1_LSB                256

/* Register 20h */
#define NU2115A_REG_20                    0x20
#define NU2115A_VOUT_ADC0_MASK                0xFF
#define NU2115A_VOUT_ADC0_SHIFT                0
#define NU2115A_VOUT_ADC0_BASE                0
#define NU2115A_VOUT_ADC0_LSB                1

/* Register 21h */
#define NU2115A_REG_21                    0x21
#define NU2115A_VBAT_POL_MASK                0x80
#define NU2115A_VBAT_POL_SHIFT                7
#define NU2115A_VBAT_POL_POSITIVE            0
#define NU2115A_VBAT_POL_NEGATIVE            1

#define NU2115A_VBAT_ADC1_MASK                0x3F
#define NU2115A_VBAT_ADC1_SHIFT                0
#define NU2115A_VBAT_ADC1_BASE                0
#define NU2115A_VBAT_ADC1_LSB                256

/* Register 22h */
#define NU2115A_REG_22                    0x22
#define NU2115A_VBAT_ADC0_MASK                0xFF
#define NU2115A_VBAT_ADC0_SHIFT                0
#define NU2115A_VBAT_ADC0_BASE                0
#define NU2115A_VBAT_ADC0_LSB                1

/* Register 23h */
#define NU2115A_REG_23                    0x23
#define NU2115A_IBAT_POL_MASK                0x80
#define NU2115A_IBAT_POL_SHIFT                7
#define NU2115A_IBAT_POL_POSITIVE            0
#define NU2115A_IBAT_POL_NEGATIVE            1

#define NU2115A_IBAT_ADC1_MASK                0x3F
#define NU2115A_IBAT_ADC1_SHIFT                0
#define NU2115A_IBAT_ADC1_BASE                0
#define NU2115A_IBAT_ADC1_LSB                256

/* Register 24h */
#define NU2115A_REG_24                    0x24
#define NU2115A_IBAT_ADC0_MASK                0xFF
#define NU2115A_IBAT_ADC0_SHIFT                0
#define NU2115A_IBAT_ADC0_BASE                0
#define NU2115A_IBAT_ADC0_LSB                1

/* Register 25h */
#define NU2115A_REG_25                    0x25
#define NU2115A_TSBUS_POL_MASK                0x80
#define NU2115A_TSBUS_POL_SHIFT                7
#define NU2115A_TSBUS_POL_POSITIVE            0
#define NU2115A_TSBUS_POL_NEGATIVE            1

#define NU2115A_TSBUS_ADC1_MASK                0x03
#define NU2115A_TSBUS_ADC1_SHIFT            0
#define NU2115A_TSBUS_ADC1_BASE                0
#define NU2115A_TSBUS_ADC1_LSB                25

/* Register 26h */
#define NU2115A_REG_26                    0x26
#define NU2115A_TSBUS_ADC0_MASK                0xFF
#define NU2115A_TSBUS_ADC0_SHIFT            0
#define NU2115A_TSBUS_ADC0_BASE                0
#define NU2115A_TSBUS_ADC0_LSB                0.09766

/* Register 27h */
#define NU2115A_REG_27                    0x27
#define NU2115A_TSBAT_POL_MASK                0x80
#define NU2115A_TSBAT_POL_SHIFT                7
#define NU2115A_TSBAT_POL_POSITIVE            0
#define NU2115A_TSBAT_POL_NEGATIVE            1

#define NU2115A_TSBAT_ADC1_MASK                0x03
#define NU2115A_TSBAT_ADC1_SHIFT            0
#define NU2115A_TSBAT_ADC1_BASE                0
#define NU2115A_TSBAT_ADC1_LSB                25

/* Register 28h */
#define NU2115A_REG_28                    0x28
#define NU2115A_TSBAT_ADC0_MASK                0xFF
#define NU2115A_TSBAT_ADC0_SHIFT            0
#define NU2115A_TSBAT_ADC0_BASE                0
#define NU2115A_TSBAT_ADC0_LSB                0.09766

/* Register 29h */
#define NU2115A_REG_29                    0x29
#define NU2115A_TDIE_POL_MASK                0x80
#define NU2115A_TDIE_POL_SHIFT                7
#define NU2115A_TDIE_POL_POSITIVE            0
#define NU2115A_TDIE_POL_NEGATIVE            1

#define NU2115A_TDIE_ADC1_MASK                0x01
#define NU2115A_TDIE_ADC1_SHIFT                0
#define NU2115A_TDIE_ADC1_BASE                0
#define NU2115A_TDIE_ADC1_LSB                128

/* Register 2Ah */
#define NU2115A_REG_2A                    0x2A
#define NU2115A_TDIE_ADC0_MASK                0xFF
#define NU2115A_TDIE_ADC0_SHIFT                0
#define NU2115A_TDIE_ADC0_BASE                0
#define NU2115A_TDIE_ADC0_LSB                0.5

/* Register 2Bh */
#define NU2115A_REG_2B                    0x2B
#define NU2115A_TSBUS_FLT_MASK                0xFF
#define NU2115A_TSBUS_FLT_SHIFT            0
#define NU2115A_TSBUS_FLT_BASE                0
#define NU2115A_TSBUS_FLT_LSB                0.19531

/* Register 2Ch */
#define NU2115A_REG_2C                    0x2C
#define NU2115A_TSBAT_FLT0_MASK                0xFF
#define NU2115A_TSBAT_FLT0_SHIFT            0
#define NU2115A_TSBAT_FLT0_BASE                0
#define NU2115A_TSBAT_FLT0_LSB                0.19531

/* Register 2Dh */
#define NU2115A_REG_2D                    0x2D
#define NU2115A_TDIE_ALM_MASK                0xFF
#define NU2115A_TDIE_ALM_SHIFT                0
#define NU2115A_TDIE_ALM_BASE                22.5

#define NU2115A_TDIE_ALM_LSB                0.5 /*careful
                        multiply is used for calc*/

/* Register 2Eh */
#define NU2115A_REG_2E                    0x2E
#define NU2115A_SS_TIMEOUT_SET_MASK            0xE0
#define NU2115A_SS_TIMEOUT_SET_SHIFT            5
#define NU2115A_SS_TIMEOUT_DISABLE            0
#define NU2115A_SS_TIMEOUT_12P5MS            1
#define NU2115A_SS_TIMEOUT_25MS                2
#define NU2115A_SS_TIMEOUT_50MS                3
#define NU2115A_SS_TIMEOUT_100MS            4
#define NU2115A_SS_TIMEOUT_400MS            5
#define NU2115A_SS_TIMEOUT_1500MS            6
#define NU2115A_SS_TIMEOUT_100000MS            7

#define NU2115A_MS_MASK            0x18
#define NU2115A_MS_SHIFT            3

#define NU2115A_IBUS_UCP_RISE_TH_MASK            0x04
#define NU2115A_IBUS_UCP_RISE_TH_SHIFT            2
#define NU2115A_IBUS_UCP_RISE_300MA            0
#define NU2115A_IBUS_UCP_RISE_500MA            1

#define NU2115A_SET_IBAT_SNS_RES_MASK            0x02
#define NU2115A_SET_IBAT_SNS_RES_SHIFT            1
#define NU2115A_SET_IBAT_SNS_RES_2MHM            0
#define NU2115A_SET_IBAT_SNS_RES_5MHM            1

#define NU2115A_IBUS_RCP_TH_MASK                0x01
#define NU2115A_IBUS_RCP_TH_SHIFT                0
#define NU2115A_IBUS_RCP_TH_500MA            0
#define NU2115A_IBUS_RCP_TH_3A                1

/* Register 2Fh */
#define NU2115A_REG_2F                    0x2F
#define NU2115A_VAC1PRESENT_STAT_MASK    0x80
#define NU2115A_VAC1PRESENT_STAT_SHIFT    7

#define NU2115A_VAC1PRESENT_FLAG_MASK    0x40
#define NU2115A_VAC1PRESENT_FLAG_SHIFT    6

#define NU2115A_VAC1PRESENT_MASK_MASK    0x20
#define NU2115A_VAC1PRESENT_MASK_SHIFT    5
#define NU2115A_VAC1PRESENT_MASK_ENABLE        1
#define NU2115A_VAC1PRESENT_MASK_DISABLE        0

#define NU2115A_VAC2PRESENT_STAT_MASK    0x10
#define NU2115A_VAC2PRESENT_STAT_SHIFT    4

#define NU2115A_VAC2PRESENT_FLAG_MASK    0x08
#define NU2115A_VAC2PRESENT_FLAG_SHIFT    3

#define NU2115A_VAC2PRESENT_MASK_MASK    0x04
#define NU2115A_VAC2PRESENT_MASK_SHIFT    2
#define NU2115A_VAC2PRESENT_MASK_ENABLE        1
#define NU2115A_VAC2PRESENT_MASK_DISABLE        0

#define NU2115A_EN_OTG_MASK        0x02
#define NU2115A_EN_OTG_SHIFT        1
#define NU2115A_OTG_ENABLE        1
#define NU2115A_OTG_DISABLE        0

#define NU2115A_DIS_ACDRV_MASK        0x01
#define NU2115A_DIS_ACDRV_SHIFT        0
#define NU2115A_DIS_ACDRV_ENABLE         0
#define NU2115A_DIS_ACDRV_DISABLE     1


/* Register 30h */
#define NU2115A_REG_30                    0x30
#define NU2115A_EN_ACDRV1_MASK        0x80
#define NU2115A_EN_ACDRV1_SHIFT        7
#define NU2115A_ACDRV1_ENABLE        1
#define NU2115A_ACDRV1_DISABLE        0

#define NU2115A_EN_ACDRV2_MASK        0x40
#define NU2115A_EN_ACDRV2_SHIFT        6
#define NU2115A_ACDRV2_ENABLE        1
#define NU2115A_ACDRV2_DISABLE        0

#define NU2115A_ACRB1_STAT_MASK        0x20
#define NU2115A_ACRB1_STAT_SHIFT        5

#define NU2115A_ACRB1_FLAG_MASK        0x10
#define NU2115A_ACRB1_FLAG_SHIFT        4

#define NU2115A_ACRB1_MASK_MASK        0x08
#define NU2115A_ACRB1_MASK_SHIFT        3
#define NU2115A_ACRB1_MASK_ENABLE    1
#define NU2115A_ACRB1_MASK_DISABLE    0

#define NU2115A_ACRB2_STAT_MASK        0x04
#define NU2115A_ACRB2_STAT_SHIFT        2

#define NU2115A_ACRB2_FLAG_MASK        0x02
#define NU2115A_ACRB2_FLAG_SHIFT        1

#define NU2115A_ACRB2_MASK_MASK        0x01
#define NU2115A_ACRB2_MASK_SHIFT        0
#define NU2115A_ACRB2_MASK_ENABLE    1
#define NU2115A_ACRB2_MASK_DISABLE    0


/* Register 31h */
#define NU2115A_REG_31                    0x31
#define NU2115A_DEV_ID_MASK                0xFF
#define NU2115A_DEV_ID_SHIFT                0

/* Register 32h */
#define NU2115A_REG_32                    0x32
#define NU2115A_PMID2VOUT_UVP_MASK        0xC0
#define NU2115A_PMID2VOUT_UVP_SHIFT        6
#define NU2115A_PMID2VOUT_UVP_N1P25      0
#define NU2115A_PMID2VOUT_UVP_N2P5       1
#define NU2115A_PMID2VOUT_UVP_N3P75      2
#define NU2115A_PMID2VOUT_UVP_N5         3

#define NU2115A_PMID2VOUT_OVP_MASK        0x30
#define NU2115A_PMID2VOUT_OVP_SHIFT        4
#define NU2115A_PMID2VOUT_OVP_2P5      0
#define NU2115A_PMID2VOUT_OVP_5       1
#define NU2115A_PMID2VOUT_OVP_7P5      2
#define NU2115A_PMID2VOUT_OVP_10         3

#define NU2115A_PMID2VOUT_UVP_FLAG_MASK        0x08
#define NU2115A_PMID2VOUT_UVP_FALG_SHIFT        3

#define NU2115A_PMID2VOUT_OVP_FLAG_MASK        0x04
#define NU2115A_PMID2VOUT_OVP_FALG_SHIFT        2

#define NU2115A_PMID2VOUT_UVP_MASK_MASK        0x02
#define NU2115A_PMID2VOUT_UVP_MASK_SHIFT        1
#define NU2115A_PMID2VOUT_UVP_MASK_ENABLE    1
#define NU2115A_PMID2VOUT_UVP_MASK_DISABLE   0

/* Register 33h */
#define NU2115A_REG_33                    0x33
#define NU2115A_VAC_PRESENT_DEG_MASK        0x80
#define NU2115A_VAC_PRESENT_DEG_SHIFT    7
#define NU2115A_VAC_PRESENT_DEG_20MS      0
#define NU2115A_VAC_PRESENT_DEG_10US       1

#define NU2115A_VBUS_PRESENT_DEG_MASK        0x40
#define NU2115A_VBUS_PRESENT_DEG_SHIFT    6
#define NU2115A_VBUS_PRESENT_DEG_20MS      0
#define NU2115A_VBUS_PRESENT_DEG_10US       1

#define NU2115A_IBUS_RCP_DEG_MASK        0x20
#define NU2115A_IBUS_RCP_DEG_SHIFT    5
#define NU2115A_IBUS_RCP_DEG_8US      0
#define NU2115A_IBUS_RCP_DEG_4MS      1

#define NU2115A_CFLY_PRECHG_TIMEOUT_MASK        0x18
#define NU2115A_CFLY_PRECHG_TIMEOUT_SHIFT    3
#define NU2115A_CFLY_PRECHG_TIMEOUT_20MS      0
#define NU2115A_CFLY_PRECHG_TIMEOUT_40MS      1
#define NU2115A_CFLY_PRECHG_TIMEOUT_60MS      2
#define NU2115A_CFLY_PRECHG_TIMEOUT_80MS      3

#define NU2115A_VBUS_VALID_DEG_MASK        0x04
#define NU2115A_VBUS_VALID_DEG_SHIFT    2
#define NU2115A_VBUS_VALID_DEG_2MS      0
#define NU2115A_VBUS_VALID_DEG_20MS       1

#define NU2115A_IBUS_UCP_FALL_DG_MASK        0x03
#define NU2115A_IBUS_UCP_FALL_DG_SHIFT    0
#define NU2115A_IBUS_UCP_FALL_DG_10US      0
#define NU2115A_IBUS_UCP_FALL_DG_5MS      1
#define NU2115A_IBUS_UCP_FALL_DG_50MS      2
#define NU2115A_IBUS_UCP_FALL_DG_150MS     3

/* Register 34h */
#define NU2115A_REG_34                    0x34
#define NU2115A_POWER_NG_FLAG_MASK        0x80
#define NU2115A_POWER_NG_FLAG_SHIFT      7

#define NU2115A_FORCE_SLEEP_MASK        0x40
#define NU2115A_FORCE_SLEEP_SHIFT      6
#define NU2115A_FORCE_SLEEP_ENABLE     1
#define NU2115A_FORCE_SLEEP_DISABLE     0

#define NU2115A_PMID2VOUT_UVP_DIS_MASK        0x10
#define NU2115A_PMID2VOUT_UVP_DIS_SHIFT      4
#define NU2115A_PMID2VOUT_UVP_ENABLE      0
#define NU2115A_PMID2VOUT_UVP_DISABLE     1

#define NU2115A_PMID2VOUT_OVP_DIS_MASK        0x08
#define NU2115A_PMID2VOUT_OVP_DIS_SHIFT      3
#define NU2115A_PMID2VOUT_OVP_ENABLE      0
#define NU2115A_PMID2VOUT_OVP_DISABLE     1

#define NU2115A_VAC1_OVP_DIS_MASK        0x04
#define NU2115A_VAC1_OVP_DIS_SHIFT      2
#define NU2115A_VAC1_OVP_ENABLE      0
#define NU2115A_VAC1_OVP_DISABLE     1

#define NU2115A_VAC2_OVP_DIS_MASK        0x02
#define NU2115A_VAC2_OVP_DIS_SHIFT      1
#define NU2115A_VAC2_OVP_ENABLE      0
#define NU2115A_VAC2_OVP_DISABLE     1

#define NU2115A_OVPGATE_DR_MASK        0x01
#define NU2115A_OVPGATE_DR_SHIFT     0
#define NU2115A_OVPGATE_DR_4P75V     0
#define NU2115A_OVPGATE_DR_10V       1

/* Register 35h */
#define NU2115A_REG_35                    0x35
#define NU2115A_VBUS_ERRHI_DIS_MASK        0x80
#define NU2115A_VBUS_ERRHI_DIS_SHIFT        7
#define NU2115A_VBUS_ERRHI_ENABLE      0
#define NU2115A_VBUS_ERRHI_DISABLE     1

#define NU2115A_VBUS_ERRLO_DIS_MASK        0x40
#define NU2115A_VBUS_ERRLO_DIS_SHIFT        6
#define NU2115A_VBUS_ERRLO_ENABLE      0
#define NU2115A_VBUS_ERRLO_DISABLE     1

#define NU2115A_PMID2VOUT_UVP_STAT_MASK        0x20
#define NU2115A_PMID2VOUT_UVP_STAT_SHIFT        5

#define NU2115A_PMID2VOUT_OVP_STAT_MASK        0x10
#define NU2115A_PMID2VOUT_OVP_STAT_SHIFT        4

#define NU2115A_VBUS_ERRHI_STAT_MASK        0x08
#define NU2115A_VBUS_ERRHI_STAT_SHIFT    3

#define NU2115A_VBUS_ERRLO_STAT_MASK        0x04
#define NU2115A_VBUS_ERRLO_STAT_SHIFT    2

#define NU2115A_VBUS_ERRHI_MASK_MASK      0x02
#define NU2115A_VBUS_ERRHI_MASK_SHIFT    1
#define NU2115A_VBUS_ERRHI_MASK_ENABLE   1
#define NU2115A_VBUS_ERRHI_MASK_DISABLE  0

#define NU2115A_VBUS_ERRLO_MASK_MASK      0x01
#define NU2115A_VBUS_ERRLO_MASK_SHIFT    0
#define NU2115A_VBUS_ERRLO_MASK_ENABLE   1
#define NU2115A_VBUS_ERRLO_MASK_DISABLE  0

/* Register 36h */
#define NU2115A_REG_36                    0x36
#define NU2115A_VBUS_PRESENT_STAT_MASK    0x80
#define NU2115A_VBUS_PRESENT_STAT_SHIFT    7

#define NU2115A_VBUS_PRESENT_FLAG_MASK    0x40
#define NU2115A_VBUS_PRESENT_FLAG_SHIFT    6

#define NU2115A_VBUS_PRESENT_MASK_MASK      0x20
#define NU2115A_VBUS_PRESENT_MASK_SHIFT      5
#define NU2115A_VBUS_PRESENT_MASK_ENABLE   1
#define NU2115A_VBUS_PRESENT_MASK_DISABLE  0

#define NU2115A_REGN_DISABLE_MASK       0x10
#define NU2115A_REGN_DISABLE_SHIFT   4
#define NU2115A_REGN_ENABLE     0
#define NU2115A_REGN_DISABLE     1

#define NU2115A_REGN_VOLTAGE_SETTING_MASK       0x08
#define NU2115A_REGN_VOLTAGE_SETTING_SHIFT      3
#define NU2115A_REGN_VOLTAGE_3P3V     0
#define NU2115A_REGN_VOLTAGE_5V       1

#define NU2115A_TDIE_FLT_MASK            0x07
#define NU2115A_TDIE_FLT_SHIFT            0
#define NU2115A_TDIE_FLT_BASE            80
#define NU2115A_TDIE_FLT_LSB                10

#endif
