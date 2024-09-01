#ifndef __UPM6720_HEADER__
#define __UPM6720_HEADER__

/* Register 00h */
#define UPM6720_REG_00                        0x00
#define    UPM6720_BAT_OVP_DIS_MASK            0x80
#define    UPM6720_BAT_OVP_DIS_SHIFT            7
#define    UPM6720_BAT_OVP_ENABLE                0
#define    UPM6720_BAT_OVP_DISABLE                1

#define UPM6720_BAT_OVP_MASK                0x7F
#define UPM6720_BAT_OVP_SHIFT                0
#define UPM6720_BAT_OVP_BASE                3491000
#define UPM6720_BAT_OVP_LSB                    9985
#define UPM6720_BAT_OVP_OFFSET                0
#define UPM6720_BAT_OVP_MAX                    4759000

/* Register 01h */
#define UPM6720_REG_01                        0x01
#define UPM6720_BAT_OVP_ALM_DIS_MASK        0x80
#define UPM6720_BAT_OVP_ALM_DIS_SHIFT        7
#define UPM6720_BAT_OVP_ALM_ENABLE            0
#define UPM6720_BAT_OVP_ALM_DISABLE            1

#define UPM6720_BAT_OVP_ALM_MASK            0x7F
#define UPM6720_BAT_OVP_ALM_SHIFT            0
#define UPM6720_BAT_OVP_ALM_BASE            3500
#define UPM6720_BAT_OVP_ALM_LSB                10
#define UPM6720_BAT_OVP_ALM_OFFSET            0
#define UPM6720_BAT_OVP_ALM_MAX                4770

/* Register 02h */
#define UPM6720_REG_02                        0x02
#define    UPM6720_BAT_OCP_DIS_MASK            0x80
#define    UPM6720_BAT_OCP_DIS_SHIFT            7
#define UPM6720_BAT_OCP_ENABLE                0
#define UPM6720_BAT_OCP_DISABLE                1

#define UPM6720_BAT_OCP_MASK                0x7F
#define UPM6720_BAT_OCP_SHIFT                0
#define UPM6720_BAT_OCP_BASE                0
#define UPM6720_BAT_OCP_LSB                    100
#define UPM6720_BAT_OCP_OFFSET                200
#define UPM6720_BAT_OCP_MIN                    2000
#define UPM6720_BAT_OCP_MAX                    8800

/* Register 03h */
#define UPM6720_REG_03                        0x03
#define UPM6720_BAT_OCP_ALM_DIS_MASK        0x80
#define UPM6720_BAT_OCP_ALM_DIS_SHIFT        7
#define UPM6720_BAT_OCP_ALM_ENABLE            0
#define UPM6720_BAT_OCP_ALM_DISABLE            1

#define UPM6720_BAT_OCP_ALM_MASK            0x7F
#define UPM6720_BAT_OCP_ALM_SHIFT            0
#define UPM6720_BAT_OCP_ALM_BASE            0
#define UPM6720_BAT_OCP_ALM_LSB                100
#define UPM6720_BAT_OCP_ALM_OFFSET            0
#define UPM6720_BAT_OCP_ALM_MAX                12700

/* Register 04h */
#define UPM6720_REG_04                        0x04
#define UPM6720_BAT_UCP_ALM_DIS_MASK        0x80
#define UPM6720_BAT_UCP_ALM_DIS_SHIFT        7
#define UPM6720_BAT_UCP_ALM_ENABLE            0
#define UPM6720_BAT_UCP_ALM_DISABLE            1

#define UPM6720_BAT_UCP_ALM_MASK            0x7F
#define UPM6720_BAT_UCP_ALM_SHIFT            0
#define UPM6720_BAT_UCP_ALM_BASE            0
#define UPM6720_BAT_UCP_ALM_LSB                50
#define UPM6720_BAT_UCP_ALM_OFFSET            0
#define UPM6720_BAT_UCP_ALM_MAX                4500

/* Register 05h */
#define UPM6720_REG_05                        0x05
#define UPM6720_BUS_UCP_DIS_MASK            0x80
#define UPM6720_BUS_UCP_DIS_SHIFT            7
#define    UPM6720_BUS_UCP_ENABLE                0
#define    UPM6720_BUS_UCP_DISABLE                1

#define UPM6720_BUS_UCP_MASK                0x40
#define UPM6720_BUS_UCP_SHIFT                6
#define    UPM6720_BUS_UCP_RESERVED            0
#define    UPM6720_BUS_UCP_250MA                1

#define UPM6720_BUS_RCP_DIS_MASK            0x20
#define UPM6720_BUS_RCP_DIS_SHIFT            5
#define    UPM6720_BUS_RCP_ENABLE                0
#define    UPM6720_BUS_RCP_DISABLE                1

#define UPM6720_BUS_RCP_MASK                0x10
#define UPM6720_BUS_RCP_SHIFT                4
#define    UPM6720_BUS_RCP_300MA                0
#define    UPM6720_BUS_RCP_RESERVED            1

#define UPM6720_CHG_CONFIG_1_MASK            0x08
#define UPM6720_CHG_CONFIG_1_SHIFT            3
#define UPM6720_CHG_CONFIG_1_TRUE            1
#define UPM6720_CHG_CONFIG_1_FALSE            0

#define UPM6720_VBUS_ERRHI_DIS_MASK            0x04
#define UPM6720_VBUS_ERRHI_DIS_SHIFT        2
#define UPM6720_VBUS_ERRHI_DIS_ENABLE        0
#define UPM6720_VBUS_ERRHI_DIS_DISABLE        1

/* Register 06h */
#define UPM6720_REG_06                        0x06
#define UPM6720_VBUS_PD_EN_MASK                0x80
#define UPM6720_VBUS_PD_EN_SHIFT            7
#define UPM6720_VBUS_PD_ENABLE                1
#define UPM6720_VBUS_PD_DISABLE                0

#define UPM6720_BUS_OVP_MASK                0x7F
#define UPM6720_BUS_OVP_SHIFT                0
#define UPM6720_SW_CAP_BUS_OVP_BASE            7000
#define UPM6720_SW_CAP_BUS_OVP_LSB            50
#define UPM6720_SW_CAP_BUS_OVP_OFFSET        0
#define UPM6720_SW_CAP_BUS_OVP_MAX            12750
#define UPM6720_BYPASS_BUS_OVP_BASE            3500
#define UPM6720_BYPASS_BUS_OVP_LSB            25
#define UPM6720_BYPASS_BUS_OVP_OFFSET        0
#define UPM6720_BYPASS_BUS_OVP_MAX            6500

/* Register 07h */
#define UPM6720_REG_07                        0x07
#define UPM6720_BUS_OVP_ALM_DIS_MASK        0x80
#define UPM6720_BUS_OVP_ALM_DIS_SHIFT        7
#define UPM6720_BUS_OVP_ALM_DIS_ENABLE        0
#define UPM6720_BUS_OVP_ALM_DIS_DISABLE        1

#define UPM6720_BUS_OVP_ALM_MASK            0x7F
#define UPM6720_BUS_OVP_ALM_SHIFT            0
#define UPM6720_SW_CAP_BUS_OVP_ALM_BASE        7000
#define UPM6720_SW_CAP_BUS_OVP_ALM_LSB        50
#define UPM6720_SW_CAP_BUS_OVP_ALM_OFFSET    0
#define UPM6720_SW_CAP_BUS_OVP_ALM_MAX        13350
#define UPM6720_BYPASS_BUS_OVP_ALM_BASE        3500
#define UPM6720_BYPASS_BUS_OVP_ALM_LSB        25
#define UPM6720_BYPASS_BUS_OVP_ALM_OFFSET    0
#define UPM6720_BYPASS_BUS_OVP_ALM_MAX        6675

/* Register 08h */
#define UPM6720_REG_08                        0x08
#define UPM6720_BUS_OCP_MASK                0x1F
#define UPM6720_BUS_OCP_SHIFT                0
#define UPM6720_SW_CAP_BUS_OCP_BASE            1075
#define UPM6720_SW_CAP_BUS_OCP_LSB            250
#define UPM6720_SW_CAP_BUS_OCP_OFFSET        0
#define UPM6720_SW_CAP_BUS_OCP_MAX            4575
#define UPM6720_BYPASS_BUS_OCP_BASE            1075
#define UPM6720_BYPASS_BUS_OCP_LSB            250
#define UPM6720_BYPASS_BUS_OCP_OFFSET        0
#define UPM6720_BYPASS_BUS_OCP_MAX            6825

/* Register 09h */
#define UPM6720_REG_09                        0x09
#define UPM6720_BUS_OCP_ALM_DIS_MASK        0x80
#define UPM6720_BUS_OCP_ALM_DIS_SHIFT        7
#define UPM6720_BUS_OCP_ALM_ENABLE            0
#define UPM6720_BUS_OCP_ALM_DISABLE            1

#define UPM6720_BUS_OCP_ALM_MASK            0x1F
#define UPM6720_BUS_OCP_ALM_SHIFT            0
#define UPM6720_BUS_OCP_ALM_BASE            1000
#define UPM6720_BUS_OCP_ALM_LSB                250
#define UPM6720_BUS_OCP_ALM_OFFSET            0
#define UPM6720_BUS_OCP_ALM_MAX                8750

/* Register 0Ah */
#define UPM6720_REG_0A                        0x0A
#define UPM6720_TDIE_FLT_DIS_MASK            0x80
#define UPM6720_TDIE_FLT_DIS_SHIFT            7
#define UPM6720_TDIE_FLT_ENABLE                0
#define UPM6720_TDIE_FLT_DISABLE            1

#define UPM6720_TDIE_FLT_MASK                0x60
#define UPM6720_TDIE_FLT_SHIFT                5
#define UPM6720_TDIE_FLT_BASE                80
#define UPM6720_TDIE_FLT_LSB                20
#define UPM6720_TDIE_FLT_MAX                140

#define UPM6720_TDIE_ALM_DIS_MASK            0x10
#define UPM6720_TDIE_ALM_DIS_SHIFT            4
#define UPM6720_TDIE_ALM_ENABLE                0
#define UPM6720_TDIE_ALM_DISABLE            1

#define UPM6720_TSBUS_FLT_DIS_MASK            0x08
#define UPM6720_TSBUS_FLT_DIS_SHIFT            3
#define UPM6720_TSBUS_FLT_ENABLE            0
#define UPM6720_TSBUS_FLT_DISABLE            1

#define UPM6720_TSBAT_FLT_DIS_MASK            0x04
#define UPM6720_TSBAT_FLT_DIS_SHIFT            2
#define UPM6720_TSBAT_FLT_ENABLE            0
#define UPM6720_TSBAT_FLT_DISABLE            1

/* Register 0Bh */
#define UPM6720_REG_0B                        0x0B
#define UPM6720_TDIE_ALM_MASK                0xFF
#define UPM6720_TDIE_ALM_SHIFT                0
#define UPM6720_TDIE_ALM_BASE                250        //25.0℃
#define UPM6720_TDIE_ALM_LSB                5        //0.5℃
#define UPM6720_TDIE_ALM_OFFSET                0
#define UPM6720_TDIE_ALM_MAX                1500    //150.0℃

/* Register 0Ch */
#define UPM6720_REG_0C                        0x0C
#define UPM6720_TSBUS_FLT_MASK                0xFF
#define UPM6720_TSBUS_FLT_SHIFT                0
#define UPM6720_TSBUS_FLT_BASE                0
#define UPM6720_TSBUS_FLT_LSB                19531        //0.19531%
#define UPM6720_TSBUS_FLT_OFFSET            0
#define UPM6720_TSBUS_FLT_MAX                4980410        //49.8041%

/* Register 0Dh */
#define UPM6720_REG_0D                        0x0D
#define UPM6720_TSBAT_FLT_MASK                0xFF
#define UPM6720_TSBAT_FLT_SHIFT                0
#define UPM6720_TSBAT_FLT_BASE                0
#define UPM6720_TSBAT_FLT_LSB                19531        //0.19531%
#define UPM6720_TSBAT_FLT_OFFSET            0
#define UPM6720_TSBAT_FLT_MAX                4980410        //49.8041%

/* Register 0Eh */
#define UPM6720_REG_0E                        0x0E
#define UPM6720_AC1_OVP_MASK                0xE0
#define UPM6720_AC1_OVP_SHIFT                5
#define UPM6720_AC1_OVP_6V5                    0
#define UPM6720_AC1_OVP_10V5                1
#define UPM6720_AC1_OVP_12V                    2
#define UPM6720_AC1_OVP_14V                    3
#define UPM6720_AC1_OVP_16V                    4
#define UPM6720_AC1_OVP_18V                    5

#define UPM6720_AC2_OVP_MASK                0x1C
#define UPM6720_AC2_OVP_SHIFT                2
#define UPM6720_AC2_OVP_6V5                    0
#define UPM6720_AC2_OVP_10V5                1
#define UPM6720_AC2_OVP_12V                    2
#define UPM6720_AC2_OVP_14V                    3
#define UPM6720_AC2_OVP_16V                    4
#define UPM6720_AC2_OVP_18V                    5

#define UPM6720_AC1_PD_EN_MASK                0x02
#define UPM6720_AC1_PD_EN_SHIFT                1
#define UPM6720_AC1_PD_ENABLE                1
#define UPM6720_AC1_PD_DISABLE                0

#define UPM6720_AC2_PD_EN_MASK                0x01
#define UPM6720_AC2_PD_EN_SHIFT                0
#define UPM6720_AC2_PD_ENABLE                1
#define UPM6720_AC2_PD_DISABLE                0

/* Register 0Fh */
#define UPM6720_REG_0F                        0x0F
#define UPM6720_REG_RST_MASK                0x80
#define UPM6720_REG_RST_SHIFT                7
#define UPM6720_REG_RST_ENABLE                1
#define UPM6720_REG_RST_DISABLE                0

#define UPM6720_EN_HIZ_MASK                    0x40
#define UPM6720_EN_HIZ_SHIFT                6
#define UPM6720_EN_HIZ_ENABLE                1
#define UPM6720_EN_HIZ_DISABLE                0

#define UPM6720_EN_OTG_MASK                    0x20
#define UPM6720_EN_OTG_SHIFT                5
#define UPM6720_EN_OTG_ENABLE                1
#define UPM6720_EN_OTG_DISABLE                0

#define UPM6720_CHG_EN_MASK                    0x10
#define UPM6720_CHG_EN_SHIFT                4
#define UPM6720_CHG_EN_ENABLE                1
#define UPM6720_CHG_EN_DISABLE                0

#define UPM6720_EN_BYPASS_MASK                0x08
#define UPM6720_EN_BYPASS_SHIFT                3
#define UPM6720_EN_BYPASS_ENABLE            1
#define UPM6720_EN_BYPASS_DISABLE            0

#define UPM6720_DIS_ACDRV_BOTH_MASK            0x04
#define UPM6720_DIS_ACDRV_BOTH_SHIFT        2
#define UPM6720_DIS_ACDRV_BOTH_ENABLE        1
#define UPM6720_DIS_ACDRV_BOTH_DISABLE        0

#define UPM6720_ACDRV1_STAT_MASK            0x02
#define UPM6720_ACDRV1_STAT_SHIFT            1
#define UPM6720_ACDRV1_STAT_ON                1
#define UPM6720_ACDRV1_STAT_OFF                0

#define UPM6720_ACDRV2_STAT_MASK            0x01
#define UPM6720_ACDRV2_STAT_SHIFT            0
#define UPM6720_ACDRV2_STAT_ON                1
#define UPM6720_ACDRV2_STAT_OFF                0

/* Register 10h */
#define UPM6720_REG_10                        0x10
#define UPM6720_FSW_SET_MASK                0xE0
#define UPM6720_FSW_SET_SHIFT                5
#define UPM6720_FSW_SET_187K5                0
#define UPM6720_FSW_SET_250K                1
#define UPM6720_FSW_SET_300K                2
#define UPM6720_FSW_SET_375K                3
#define UPM6720_FSW_SET_500K                4
#define UPM6720_FSW_SET_750K                5

#define UPM6720_WATCHDOG_MASK                0x18
#define UPM6720_WATCHDOG_SHIFT                3
#define UPM6720_WATCHDOG_0S5                0
#define UPM6720_WATCHDOG_1S                    1
#define UPM6720_WATCHDOG_5S                    2
#define UPM6720_WATCHDOG_30S                3

#define UPM6720_WATCHDOG_DIS_MASK            0x04
#define UPM6720_WATCHDOG_DIS_SHIFT            2
#define UPM6720_WATCHDOG_DISABLE            1
#define UPM6720_WATCHDOG_ENABLE                0

/* Register 11h */
#define UPM6720_REG_11                        0x11
#define UPM6720_RSNS_MASK                    0x80
#define UPM6720_RSNS_SHIFT                    7
#define UPM6720_RSNS_2MOHM                    0
#define UPM6720_RSNS_5MOHM                    1


#define UPM6720_SS_TIMEOUT_MASK                0x70
#define UPM6720_SS_TIMEOUT_SHIFT            4
#define UPM6720_SS_TIMEOUT_6MS25            0
#define UPM6720_SS_TIMEOUT_12MS5            1
#define UPM6720_SS_TIMEOUT_25MS                2
#define UPM6720_SS_TIMEOUT_50MS                3
#define UPM6720_SS_TIMEOUT_100MS            4
#define UPM6720_SS_TIMEOUT_400MS            5
#define UPM6720_SS_TIMEOUT_1S5                6
#define UPM6720_SS_TIMEOUT_10S                7


#define UPM6720_IBUS_UCP_FALL_DG_SEL_MASK            0x0C
#define UPM6720_IBUS_UCP_FALL_DG_SEL_SHIFT            2
#define UPM6720_IBUS_UCP_FALL_DG_SEL_0MS01            0
#define UPM6720_IBUS_UCP_FALL_DG_SEL_5MS            1
#define UPM6720_IBUS_UCP_FALL_DG_SEL_50MS            2
#define UPM6720_IBUS_UCP_FALL_DG_SEL_150MS            3

/* Register 12h */
#define UPM6720_REG_12                        0x12
#define UPM6720_VOUT_OVP_DIS_MASK            0x80
#define UPM6720_VOUT_OVP_DIS_SHIFT            7
#define UPM6720_VOUT_OVP_DIS_ENABLE            0
#define UPM6720_VOUT_OVP_DIS_DISABLE        1

#define UPM6720_VOUT_OVP_MASK                0x60
#define UPM6720_VOUT_OVP_SHIFT                5
#define UPM6720_VOUT_OVP_4V7                0
#define UPM6720_VOUT_OVP_4V8                1
#define UPM6720_VOUT_OVP_4V9                2
#define UPM6720_VOUT_OVP_5V                    3

#define UPM6720_FREQ_SHIFT_MASK                0x18
#define UPM6720_FREQ_SHIFT_SHIFT            3
#define UPM6720_FREQ_SHIFT_NONE                0
#define UPM6720_FREQ_SHIFT_10P_HIHGER        0
#define UPM6720_FREQ_SHIFT_10P_LOWER        0

#define UPM6720_MS_MASK                        0x03
#define UPM6720_MS_SHIFT                    0
#define UPM6720_MS_STANDALONE                0
#define UPM6720_MS_SECONDARY                1
#define UPM6720_MS_PRIMARY                    2

/* Register 13h */
#define UPM6720_REG_13                        0x13
#define UPM6720_BAT_OVP_STAT_MASK            0x80
#define UPM6720_BAT_OVP_STAT_SHIFT            7
#define UPM6720_BAT_OVP_STAT_TRUE            1
#define UPM6720_BAT_OVP_STAT_FALSE            0

#define UPM6720_BAT_OVP_ALM_STAT_MASK        0x40
#define UPM6720_BAT_OVP_ALM_STAT_SHIFT        6
#define UPM6720_BAT_OVP_ALM_STAT_TRUE        1
#define UPM6720_BAT_OVP_ALM_STAT_FALSE        0

#define UPM6720_VOUT_OVP_STAT_MASK            0x20
#define UPM6720_VOUT_OVP_STAT_SHIFT            5
#define UPM6720_VOUT_OVP_STAT_TRUE            1
#define UPM6720_VOUT_OVP_STAT_FALSE            0

#define UPM6720_BAT_OCP_STAT_MASK            0x10
#define UPM6720_BAT_OCP_STAT_SHIFT            4
#define UPM6720_BAT_OCP_STAT_TRUE            1
#define UPM6720_BAT_OCP_STAT_FALSE            0

#define UPM6720_BAT_OCP_ALM_STAT_MASK        0x08
#define UPM6720_BAT_OCP_ALM_STAT_SHIFT        3
#define UPM6720_BAT_OCP_ALM_STAT_TRUE        1
#define UPM6720_BAT_OCP_ALM_STAT_FALSE        0

#define UPM6720_BAT_UCP_ALM_STAT_MASK        0x04
#define UPM6720_BAT_UCP_ALM_STAT_SHIFT        2
#define UPM6720_BAT_UCP_ALM_STAT_TRUE        1
#define UPM6720_BAT_UCP_ALM_STAT_FALSE        0

#define UPM6720_BUS_OVP_STAT_MASK            0x02
#define UPM6720_BUS_OVP_STAT_SHIFT            1
#define UPM6720_BUS_OVP_STAT_TRUE            1
#define UPM6720_BUS_OVP_STAT_FALSE            0

#define UPM6720_BUS_OVP_ALM_STAT_MASK        0x01
#define UPM6720_BUS_OVP_ALM_STAT_SHIFT        0
#define UPM6720_BUS_OVP_ALM_STAT_TRUE        1
#define UPM6720_BUS_OVP_ALM_STAT_FALSE        0

/* Register 14h */
#define UPM6720_REG_14                        0x14
#define UPM6720_BUS_OCP_STAT_MASK            0x80
#define UPM6720_BUS_OCP_STAT_SHIFT            7
#define UPM6720_BUS_OCP_STAT_TRUE            1
#define UPM6720_BUS_OCP_STAT_FALSE            0

#define UPM6720_BUS_OCP_ALM_STAT_MASK        0x40
#define UPM6720_BUS_OCP_ALM_STAT_SHIFT        6
#define UPM6720_BUS_OCP_ALM_STAT_TRUE        1
#define UPM6720_BUS_OCP_ALM_STAT_FALSE        0

#define UPM6720_BUS_UCP_STAT_MASK            0x20
#define UPM6720_BUS_UCP_STAT_SHIFT            5
#define UPM6720_BUS_UCP_STAT_TRUE            1
#define UPM6720_BUS_UCP_STAT_FALSE            0

#define UPM6720_BUS_RCP_STAT_MASK            0x10
#define UPM6720_BUS_RCP_STAT_SHIFT            4
#define UPM6720_BUS_RCP_STAT_TRUE            1
#define UPM6720_BUS_RCP_STAT_FALSE            0

#define UPM6720_CFLY_SHORT_STAT_MASK        0x40
#define UPM6720_CFLY_SHORT_STAT_SHIFT        2
#define UPM6720_CFLY_SHORT_STAT_TRUE        1
#define UPM6720_CFLY_SHORT_STAT_FALSE        0

/* Register 15h */
#define UPM6720_REG_15                        0x15
#define UPM6720_VAC1_OVP_STAT_MASK            0x80
#define UPM6720_VAC1_OVP_STAT_SHIFT            7
#define UPM6720_VAC1_OVP_STAT_TRUE            1
#define UPM6720_VAC1_OVP_STAT_FALSE            0

#define UPM6720_VAC2_OVP_STAT_MASK            0x40
#define UPM6720_VAC2_OVP_STAT_SHIFT            6
#define UPM6720_VAC2_OVP_STAT_TRUE            1
#define UPM6720_VAC2_OVP_STAT_FALSE            0

#define UPM6720_VOUT_PRESENT_STAT_MASK        0x20
#define UPM6720_VOUT_PRESENT_STAT_SHIFT        5
#define UPM6720_VOUT_PRESENT_STAT_TRUE        1
#define UPM6720_VOUT_PRESENT_STAT_FALSE        0

#define UPM6720_VAC1_PRESENT_STAT_MASK        0x10
#define UPM6720_VAC1_PRESENT_STAT_SHIFT        4
#define UPM6720_VAC1_PRESENT_STAT_TRUE        1
#define UPM6720_VAC1_PRESENT_STAT_FALSE        0

#define UPM6720_VAC2_PRESENT_STAT_MASK        0x08
#define UPM6720_VAC2_PRESENT_STAT_SHIFT        3
#define UPM6720_VAC2_PRESENT_STAT_TRUE        1
#define UPM6720_VAC2_PRESENT_STAT_FALSE        0

#define UPM6720_VBUS_PRESENT_STAT_MASK        0x04
#define UPM6720_VBUS_PRESENT_STAT_SHIFT        2
#define UPM6720_VBUS_PRESENT_STAT_TRUE        1
#define UPM6720_VBUS_PRESENT_STAT_FALSE        0

#define UPM6720_ACRB1_CONFIG_STAT_MASK        0x02
#define UPM6720_ACRB1_CONFIG_STAT_SHIFT        1
#define UPM6720_ACRB1_CONFIG_STAT_TRUE        1
#define UPM6720_ACRB1_CONFIG_STAT_FALSE        0

#define UPM6720_ACRB2_CONFIG_STAT_MASK        0x01
#define UPM6720_ACRB2_CONFIG_STAT_SHIFT        0
#define UPM6720_ACRB2_CONFIG_STAT_TRUE        1
#define UPM6720_ACRB2_CONFIG_STAT_FALSE        0

/* Register 16h */
#define UPM6720_REG_16                        0x16
#define UPM6720_ADC_DONE_STAT_MASK            0x80
#define UPM6720_ADC_DONE_STAT_SHIFT            7
#define UPM6720_ADC_DONE_STAT_COMPLETE        1
#define UPM6720_ADC_DONE_STAT_NOTCOMPLETE    0

#define UPM6720_SS_TIMEOUT_STAT_MASK        0x40
#define UPM6720_SS_TIMEOUT_STAT_SHIFT        6
#define UPM6720_SS_TIMEOUT_STAT_TRUE        1
#define UPM6720_SS_TIMEOUT_STAT_FALSE        0

#define UPM6720_TSBUS_TSBAT_ALM_STAT_MASK        0x20
#define UPM6720_TSBUS_TSBAT_ALM_STAT_SHIFT        5
#define UPM6720_TSBUS_TSBAT_ALM_STAT_TRUE        1
#define UPM6720_TSBUS_TSBAT_ALM_STAT_FALSE        0

#define UPM6720_TSBUS_FLT_STAT_MASK            0x10
#define UPM6720_TSBUS_FLT_STAT_SHIFT        4
#define UPM6720_TSBUS_FLT_STAT_TRUE            1
#define UPM6720_TSBUS_FLT_STAT_FALSE        0

#define UPM6720_TSBAT_FLT_STAT_MASK            0x08
#define UPM6720_TSBAT_FLT_STAT_SHIFT        3
#define UPM6720_TSBAT_FLT_STAT_TRUE            1
#define UPM6720_TSBAT_FLT_STAT_FALSE        0

#define UPM6720_TDIE_FLT_STAT_MASK            0x04
#define UPM6720_TDIE_FLT_STAT_SHIFT            2
#define UPM6720_TDIE_FLT_STAT_TRUE            1
#define UPM6720_TDIE_FLT_STAT_FALSE            0

#define UPM6720_TDIE_ALM_STAT_MASK            0x02
#define UPM6720_TDIE_ALM_STAT_SHIFT            1
#define UPM6720_TDIE_ALM_STAT_TRUE            1
#define UPM6720_TDIE_ALM_STAT_FALSE            0

#define UPM6720_WD_STAT_MASK                0x01
#define UPM6720_WD_STAT_SHIFT                0
#define UPM6720_WD_STAT_TIME_EXPIRED        1
#define UPM6720_WD_STAT_NORMAL                0

/* Register 17h */
#define UPM6720_REG_17                        0x17
#define UPM6720_REGN_GOOD_STAT_MASK            0x80
#define UPM6720_REGN_GOOD_STAT_SHIFT        7
#define UPM6720_REGN_GOOD_STAT_GOOD            1
#define UPM6720_REGN_GOOD_STAT_NOTGOOD        0

#define UPM6720_CONV_ACTIVE_STAT_MASK            0x40
#define UPM6720_CONV_ACTIVE_STAT_SHIFT            6
#define UPM6720_CONV_ACTIVE_STAT_RUNNING        1
#define UPM6720_CONV_ACTIVE_STAT_NOTRUNNING        0

#define UPM6720_VBUS_ERRHI_STAT_MASK        0x20
#define UPM6720_VBUS_ERRHI_STAT_SHIFT        4
#define UPM6720_VBUS_ERRHI_STAT_TRUE        1
#define UPM6720_VBUS_ERRHI_STAT_FALSE        0

/* Register 18h */
#define UPM6720_REG_18                        0x18
#define UPM6720_BAT_OVP_FLAG_MASK            0x80
#define UPM6720_BAT_OVP_FLAG_SHIFT            7
#define UPM6720_BAT_OVP_FLAG_TRUE            1
#define UPM6720_BAT_OVP_FLAG_FALSE            0

#define UPM6720_BAT_OVP_ALM_FLAG_MASK        0x40
#define UPM6720_BAT_OVP_ALM_FLAG_SHIFT        6
#define UPM6720_BAT_OVP_ALM_FLAG_TRUE        1
#define UPM6720_BAT_OVP_ALM_FLAG_FALSE        0

#define UPM6720_VOUT_OVP_FLAG_MASK            0x20
#define UPM6720_VOUT_OVP_FLAG_SHIFT            5
#define UPM6720_VOUT_OVP_FLAG_TRUE            1
#define UPM6720_VOUT_OVP_FLAG_FALSE            0

#define UPM6720_BAT_OCP_FLAG_MASK            0x10
#define UPM6720_BAT_OCP_FLAG_SHIFT            4
#define UPM6720_BAT_OCP_FLAG_TRUE            1
#define UPM6720_BAT_OCP_FLAG_FALSE            0

#define UPM6720_BAT_OCP_ALM_FLAG_MASK        0x08
#define UPM6720_BAT_OCP_ALM_FLAG_SHIFT        3
#define UPM6720_BAT_OCP_ALM_FLAG_TRUE        1
#define UPM6720_BAT_OCP_ALM_FLAG_FALSE        0

#define UPM6720_BAT_UCP_ALM_FLAG_MASK        0x04
#define UPM6720_BAT_UCP_ALM_FLAG_SHIFT        2
#define UPM6720_BAT_UCP_ALM_FLAG_TRUE        1
#define UPM6720_BAT_UCP_ALM_FLAG_FALSE        0

#define UPM6720_BUS_OVP_FLAG_MASK            0x02
#define UPM6720_BUS_OVP_FLAG_SHIFT            1
#define UPM6720_BUS_OVP_FLAG_TRUE            1
#define UPM6720_BUS_OVP_FLAG_FALSE            0

#define UPM6720_BUS_OVP_ALM_FLAG_MASK        0x01
#define UPM6720_BUS_OVP_ALM_FLAG_SHIFT        0
#define UPM6720_BUS_OVP_ALM_FLAG_TRUE        1
#define UPM6720_BUS_OVP_ALM_FLAG_FALSE        0

/* Register 19h */
#define UPM6720_REG_19                        0x19
#define UPM6720_BUS_OCP_FLAG_MASK            0x80
#define UPM6720_BUS_OCP_FLAG_SHIFT            7
#define UPM6720_BUS_OCP_FLAG_TRUE            1
#define UPM6720_BUS_OCP_FLAG_FALSE            0

#define UPM6720_BUS_OCP_ALM_FLAG_MASK        0x40
#define UPM6720_BUS_OCP_ALM_FLAG_SHIFT        6
#define UPM6720_BUS_OCP_ALM_FLAG_TRUE        1
#define UPM6720_BUS_OCP_ALM_FLAG_FALSE        0

#define UPM6720_BUS_UCP_FLAG_MASK            0x20
#define UPM6720_BUS_UCP_FLAG_SHIFT            5
#define UPM6720_BUS_UCP_FLAG_TRUE            1
#define UPM6720_BUS_UCP_FLAG_FALSE            0

#define UPM6720_BUS_RCP_FLAG_MASK            0x10
#define UPM6720_BUS_RCP_FLAG_SHIFT            4
#define UPM6720_BUS_RCP_FLAG_TRUE            1
#define UPM6720_BUS_RCP_FLAG_FALSE            0

#define UPM6720_CFLY_SHORT_FLAG_MASK        0x04
#define UPM6720_CFLY_SHORT_FLAG_SHIFT        2
#define UPM6720_CFLY_SHORT_FLAG_TRUE        1
#define UPM6720_CFLY_SHORT_FLAG_FALSE        0

/* Register 1Ah */
#define UPM6720_REG_1A                        0x1A
#define UPM6720_VAC1_OVP_FLAG_MASK            0x80
#define UPM6720_VAC1_OVP_FLAG_SHIFT            7
#define UPM6720_VAC1_OVP_FLAG_TRUE            1
#define UPM6720_VAC1_OVP_FLAG_FALSE            0

#define UPM6720_VAC2_OVP_FLAG_MASK            0x40
#define UPM6720_VAC2_OVP_FLAG_SHIFT            6
#define UPM6720_VAC2_OVP_FLAG_TRUE            1
#define UPM6720_VAC2_OVP_FLAG_FALSE            0

#define UPM6720_VOUT_PRESENT_FLAG_MASK        0x20
#define UPM6720_VOUT_PRESENT_FLAG_SHIFT        5
#define UPM6720_VOUT_PRESENT_FLAG_TRUE        1
#define UPM6720_VOUT_PRESENT_FLAG_FALSE        0

#define UPM6720_VAC1_PRESENT_FLAG_MASK        0x10
#define UPM6720_VAC1_PRESENT_FLAG_SHIFT        4
#define UPM6720_VAC1_PRESENT_FLAG_TRUE        1
#define UPM6720_VAC1_PRESENT_FLAG_FALSE        0

#define UPM6720_VAC2_PRESENT_FLAG_MASK        0x08
#define UPM6720_VAC2_PRESENT_FLAG_SHIFT        3
#define UPM6720_VAC2_PRESENT_FLAG_TRUE        1
#define UPM6720_VAC2_PRESENT_FLAG_FALSE        0

#define UPM6720_VBUS_PRESENT_FLAG_MASK        0x04
#define UPM6720_VBUS_PRESENT_FLAG_SHIFT        2
#define UPM6720_VBUS_PRESENT_FLAG_TRUE        1
#define UPM6720_VBUS_PRESENT_FLAG_FALSE        0

#define UPM6720_ACRB1_CONFIG_FLAG_MASK        0x02
#define UPM6720_ACRB1_CONFIG_FLAG_SHIFT        1
#define UPM6720_ACRB1_CONFIG_FLAG_TRUE        1
#define UPM6720_ACRB1_CONFIG_FLAG_FALSE        0

#define UPM6720_ACRB2_CONFIG_FLAG_MASK        0x01
#define UPM6720_ACRB2_CONFIG_FLAG_SHIFT        0
#define UPM6720_ACRB2_CONFIG_FLAG_TRUE        1
#define UPM6720_ACRB2_CONFIG_FLAG_FALSE        0

/* Register 1Bh */
#define UPM6720_REG_1B                        0x1B
#define UPM6720_ADC_DONE_FLAG_MASK            0x80
#define UPM6720_ADC_DONE_FLAG_SHIFT            7
#define UPM6720_ADC_DONE_FLAG_TRUE            1
#define UPM6720_ADC_DONE_FLAG_FALSE            0

#define UPM6720_SS_TIMEOUT_FLAG_MASK        0x40
#define UPM6720_SS_TIMEOUT_FLAG_SHIFT        6
#define UPM6720_SS_TIMEOUT_FLAG_TRUE        1
#define UPM6720_SS_TIMEOUT_FLAG_FALSE        0

#define UPM6720_TSBUS_TSBAT_ALM_FLAG_MASK    0x20
#define UPM6720_TSBUS_TSBAT_ALM_FLAG_SHIFT    5
#define UPM6720_TSBUS_TSBAT_ALM_FLAG_TRUE    1
#define UPM6720_TSBUS_TSBAT_ALM_FLAG_FALSE    0

#define UPM6720_TSBUS_FLT_FLAG_MASK            0x10
#define UPM6720_TSBUS_FLT_FLAG_SHIFT        4
#define UPM6720_TSBUS_FLT_FLAG_TRUE            1
#define UPM6720_TSBUS_FLT_FLAG_FALSE        0

#define UPM6720_TSBAT_FLT_FLAG_MASK            0x08
#define UPM6720_TSBAT_FLT_FLAG_SHIFT        3
#define UPM6720_TSBAT_FLT_FLAG_TRUE            1
#define UPM6720_TSBAT_FLT_FLAG_FALSE        0

#define UPM6720_TDIE_FLT_FLAG_MASK            0x04
#define UPM6720_TDIE_FLT_FLAG_SHIFT            2
#define UPM6720_TDIE_FLT_FLAG_TRUE            1
#define UPM6720_TDIE_FLT_FLAG_FALSE            0

#define UPM6720_TDIE_ALM_FLAG_MASK            0x02
#define UPM6720_TDIE_ALM_FLAG_SHIFT            1
#define UPM6720_TDIE_ALM_FLAG_TRUE            1
#define UPM6720_TDIE_ALM_FLAG_FALSE            0

#define UPM6720_WD_FLAG_MASK                0x01
#define UPM6720_WD_FLAG_SHIFT                0
#define UPM6720_WD_FLAG_TRUE                1
#define UPM6720_WD_FLAG_FALSE                0

/* Register 1Ch */
#define UPM6720_REG_1C                        0x1C
#define UPM6720_REGN_GOOD_FLAG_MASK            0x80
#define UPM6720_REGN_GOOD_FLAG_SHIFT        7
#define UPM6720_REGN_GOOD_FLAG_TRUE            1
#define UPM6720_REGN_GOOD_FLAG_FALSE        0

#define UPM6720_CONV_ACTIVE_FLAG_MASK        0x40
#define UPM6720_CONV_ACTIVE_FLAG_SHIFT        6
#define UPM6720_CONV_ACTIVE_FLAG_TRUE        1
#define UPM6720_CONV_ACTIVE_FLAG_FALSE        0

#define UPM6720_VBUS_ERRHI_FLAG_MASK        0x10
#define UPM6720_VBUS_ERRHI_FLAG_SHIFT        4
#define UPM6720_VBUS_ERRHI_FLAG_TRUE        1
#define UPM6720_VBUS_ERRHI_FLAG_FALSE        0

/* Register 1Dh */
#define UPM6720_REG_1D                        0x1D
#define UPM6720_BAT_OVP_INT_MASK            0x80
#define UPM6720_BAT_OVP_INT_SHIFT            7
#define UPM6720_BAT_OVP_INT_NOTPRODUCE        1
#define UPM6720_BAT_OVP_INT_PRODUCE            0

#define UPM6720_BAT_OVP_ALM_INT_MASK        0x40
#define UPM6720_BAT_OVP_ALM_INT_SHIFT        6
#define UPM6720_BAT_OVP_ALM_INT_NOTPRODUCE    1
#define UPM6720_BAT_OVP_ALM_INT_PRODUCE        0

#define UPM6720_VOUT_OVP_INT_MASK            0x20
#define UPM6720_VOUT_OVP_INT_SHIFT            5
#define UPM6720_VOUT_OVP_INT_NOTPRODUCE        1
#define UPM6720_VOUT_OVP_INT_PRODUCE        0

#define UPM6720_BAT_OCP_INT_MASK            0x10
#define UPM6720_BAT_OCP_INT_SHIFT            4
#define UPM6720_BAT_OCP_INT_NOTPRODUCE        1
#define UPM6720_BAT_OCP_INT_PRODUCE            0

#define UPM6720_BAT_OCP_ALM_INT_MASK        0x08
#define UPM6720_BAT_OCP_ALM_INT_SHIFT        3
#define UPM6720_BAT_OCP_ALM_INT_NOTPRODUCE    1
#define UPM6720_BAT_OCP_ALM_INT_PRODUCE        0

#define UPM6720_BAT_UCP_ALM_INT_MASK        0x04
#define UPM6720_BAT_UCP_ALM_INT_SHIFT        2
#define UPM6720_BAT_UCP_ALM_INT_NOTPRODUCE    1
#define UPM6720_BAT_UCP_ALM_INT_PRODUCE        0

#define UPM6720_BUS_OVP_INT_MASK            0x02
#define UPM6720_BUS_OVP_INT_SHIFT            1
#define UPM6720_BUS_OVP_INT_NOTPRODUCE        1
#define UPM6720_BUS_OVP_INT_PRODUCE            0

#define UPM6720_BUS_OVP_ALM_INT_MASK        0x01
#define UPM6720_BUS_OVP_ALM_INT_SHIFT        0
#define UPM6720_BUS_OVP_ALM_INT_NOTPRODUCE    1
#define UPM6720_BUS_OVP_ALM_INT_PRODUCE        0

/* Register 1Eh */
#define UPM6720_REG_1E                        0x1E
#define UPM6720_BUS_OCP_INT_MASK            0x80
#define UPM6720_BUS_OCP_INT_SHIFT            7
#define UPM6720_BUS_OCP_INT_NOTPRODUCE        1
#define UPM6720_BUS_OCP_INT_PRODUCE            0

#define UPM6720_BUS_OCP_ALM_INT_MASK        0x40
#define UPM6720_BUS_OCP_ALM_INT_SHIFT        6
#define UPM6720_BUS_OCP_ALM_INT_NOTPRODUCE    1
#define UPM6720_BUS_OCP_ALM_INT_PRODUCE        0

#define UPM6720_BUS_UCP_INT_MASK            0x20
#define UPM6720_BUS_UCP_INT_SHIFT            5
#define UPM6720_BUS_UCP_INT_NOTPRODUCE        1
#define UPM6720_BUS_UCP_INT_PRODUCE            0

#define UPM6720_BUS_RCP_INT_MASK            0x10
#define UPM6720_BUS_RCP_INT_SHIFT            4
#define UPM6720_BUS_RCP_INT_NOTPRODUCE        1
#define UPM6720_BUS_RCP_INT_PRODUCE            0

#define UPM6720_CFLY_SHORT_INT_MASK            0x04
#define UPM6720_CFLY_SHORT_INT_SHIFT        2
#define UPM6720_CFLY_SHORT_INT_NOTPRODUCE    1
#define UPM6720_CFLY_SHORT_INT_PRODUCE        0

#define UPM6720_CFLY_SHORT_INT_MASK            0x04
#define UPM6720_CFLY_SHORT_INT_SHIFT        2
#define UPM6720_CFLY_SHORT_INT_NOTPRODUCE    1
#define UPM6720_CFLY_SHORT_INT_PRODUCE        0

/* Register 1Fh */
#define UPM6720_REG_1F                        0x1F
#define UPM6720_VAC1_OVP_INT_MASK            0x80
#define UPM6720_VAC1_OVP_INT_SHIFT            7
#define UPM6720_VAC1_OVP_INT_NOTPRODUCE        1
#define UPM6720_VAC1_OVP_INT_PRODUCE        0

#define UPM6720_VAC2_OVP_INT_MASK            0x40
#define UPM6720_VAC2_OVP_INT_SHIFT            6
#define UPM6720_VAC2_OVP_INT_NOTPRODUCE        1
#define UPM6720_VAC2_OVP_INT_PRODUCE        0

#define UPM6720_VOUT_PRESENT_INT_MASK        0x20
#define UPM6720_VOUT_PRESENT_INT_SHIFT        5
#define UPM6720_VOUT_PRESENT_INT_NOTPRODUCE    1
#define UPM6720_VOUT_PRESENT_INT_PRODUCE    0

#define UPM6720_VAC1_PRESENT_INT_MASK        0x10
#define UPM6720_VAC1_PRESENT_INT_SHIFT        4
#define UPM6720_VAC1_PRESENT_INT_NOTPRODUCE    1
#define UPM6720_VAC1_PRESENT_INT_PRODUCE    0

#define UPM6720_VAC2_PRESENT_INT_MASK        0x08
#define UPM6720_VAC2_PRESENT_INT_SHIFT        3
#define UPM6720_VAC2_PRESENT_INT_NOTPRODUCE    1
#define UPM6720_VAC2_PRESENT_INT_PRODUCE    0

#define UPM6720_VBUS_PRESENT_INT_MASK        0x04
#define UPM6720_VBUS_PRESENT_INT_SHIFT        2
#define UPM6720_VBUS_PRESENT_INT_NOTPRODUCE    1
#define UPM6720_VBUS_PRESENT_INT_PRODUCE    0

#define UPM6720_ACRB1_CONFIG_INT_MASK        0x02
#define UPM6720_ACRB1_CONFIG_INT_SHIFT        1
#define UPM6720_ACRB1_CONFIG_INT_NOTPRODUCE    1
#define UPM6720_ACRB1_CONFIG_INT_PRODUCE    0

#define UPM6720_ACRB2_CONFIG_INT_MASK        0x01
#define UPM6720_ACRB2_CONFIG_INT_SHIFT        0
#define UPM6720_ACRB2_CONFIG_INT_NOTPRODUCE    1
#define UPM6720_ACRB2_CONFIG_INT_PRODUCE    0

/* Register 20h */
#define UPM6720_REG_20                        0x20
#define UPM6720_ADC_DONE_INT_MASK            0x80
#define UPM6720_ADC_DONE_INT_SHIFT            7
#define UPM6720_ADC_DONE_INT_NOTPRODUCE        1
#define UPM6720_ADC_DONE_INT_PRODUCE        0

#define UPM6720_SS_TIMEOUT_INT_MASK            0x40
#define UPM6720_SS_TIMEOUT_INT_SHIFT        6
#define UPM6720_SS_TIMEOUT_INT_NOTPRODUCE    1
#define UPM6720_SS_TIMEOUT_INT_PRODUCE        0

#define UPM6720_TSBUS_TSBAT_ALM_INT_MASK        0x20
#define UPM6720_TSBUS_TSBAT_ALM_INT_SHIFT        5
#define UPM6720_TSBUS_TSBAT_ALM_INT_NOTPRODUCE    1
#define UPM6720_TSBUS_TSBAT_ALM_INT_PRODUCE        0

#define UPM6720_TSBUS_FLT_INT_MASK            0x10
#define UPM6720_TSBUS_FLT_INT_SHIFT            4
#define UPM6720_TSBUS_FLT_INT_NOTPRODUCE    1
#define UPM6720_TSBUS_FLT_INT_PRODUCE        0

#define UPM6720_TSBAT_FLT_INT_MASK            0x08
#define UPM6720_TSBAT_FLT_INT_SHIFT            3
#define UPM6720_TSBAT_FLT_INT_NOTPRODUCE    1
#define UPM6720_TSBAT_FLT_INT_PRODUCE        0

#define UPM6720_TDIE_FLT_INT_MASK            0x04
#define UPM6720_TDIE_FLT_INT_SHIFT            2
#define UPM6720_TDIE_FLT_INT_NOTPRODUCE        1
#define UPM6720_TDIE_FLT_INT_PRODUCE        0

#define UPM6720_TDIE_ALM_INT_MASK            0x02
#define UPM6720_TDIE_ALM_INT_SHIFT            1
#define UPM6720_TDIE_ALM_INT_NOTPRODUCE        1
#define UPM6720_TDIE_ALM_INT_PRODUCE        0

#define UPM6720_WD_INT_MASK                    0x01
#define UPM6720_WD_INT_SHIFT                0
#define UPM6720_WD_INT_NOTPRODUCE            1
#define UPM6720_WD_INT_PRODUCE                0

/* Register 21h */
#define UPM6720_REG_21                        0x21
#define UPM6720_REGN_GOOD_INT_MASK            0x80
#define UPM6720_REGN_GOOD_INT_SHIFT            7
#define UPM6720_REGN_GOOD_INT_NOTPRODUCE    1
#define UPM6720_REGN_GOOD_INT_PRODUCE        0

#define UPM6720_CONV_ACTIVE_INT_MASK        0x40
#define UPM6720_CONV_ACTIVE_INT_SHIFT        6
#define UPM6720_CONV_ACTIVE_INT_NOTPRODUCE    1
#define UPM6720_CONV_ACTIVE_INT_PRODUCE        0

#define UPM6720_VBUS_ERRHI_INT_MASK            0x10
#define UPM6720_VBUS_ERRHI_INT_SHIFT        4
#define UPM6720_VBUS_ERRHI_INT_NOTPRODUCE    1
#define UPM6720_VBUS_ERRHI_INT_PRODUCE        0

/* Register 22h */
#define UPM6720_REG_22                        0x22
#define UPM6720_DEVICE_REV_MASK                0xF0
#define UPM6720_DEVICE_REV_SHIFT            4

#define UPM6720_DEVICE_ID_MASK                0x0F
#define UPM6720_DEVICE_ID_SHIFT                0

/* Register 23h */
#define UPM6720_REG_23                        0x23
#define UPM6720_ADC_EN_MASK                    0x80
#define UPM6720_ADC_EN_SHIFT                7
#define UPM6720_ADC_EN_ENABLE                1
#define UPM6720_ADC_EN_DISABLE                0

#define UPM6720_ADC_RATE_MASK                0x40
#define UPM6720_ADC_RATE_SHIFT                6
#define UPM6720_ADC_RATE_ONE_SHOT            1
#define UPM6720_ADC_RATE_CONTINUES            0

#define UPM6720_ADC_AVG_MASK                0x20
#define UPM6720_ADC_AVG_SHIFT                5
#define UPM6720_ADC_AVG_RUNNING_VALUE        1
#define UPM6720_ADC_AVG_SINGLE_VALUE        0

#define UPM6720_ADC_AVG_INIT_MASK            0x10
#define UPM6720_ADC_AVG_INIT_SHIFT            4
#define UPM6720_ADC_AVG_INIT_EXIST_VALUE    0
#define UPM6720_ADC_AVG_INIT_NEW_VALUE        1

#define UPM6720_ADC_SAMPLE_MASK                0x0C
#define UPM6720_ADC_SAMPLE_SHIFT            2
#define UPM6720_ADC_SAMPLE_15BIT            0
#define UPM6720_ADC_SAMPLE_14BIT            1
#define UPM6720_ADC_SAMPLE_13BIT            2
#define UPM6720_ADC_SAMPLE_11BIT            3

#define UPM6720_IBUS_ADC_DIS_MASK            0x02
#define UPM6720_IBUS_ADC_DIS_SHIFT            1
#define UPM6720_IBUS_ADC_DIS_ENABLE            0
#define UPM6720_IBUS_ADC_DIS_DISABLE        1

#define UPM6720_VBUS_ADC_DIS_MASK            0x02
#define UPM6720_VBUS_ADC_DIS_SHIFT            1
#define UPM6720_VBUS_ADC_DIS_ENABLE            0
#define UPM6720_VBUS_ADC_DIS_DISABLE        1

/* Register 24h */
#define UPM6720_REG_24                        0x24
#define UPM6720_VAC1_ADC_DIS_MASK            0x80
#define UPM6720_VAC1_ADC_DIS_SHIFT            7
#define UPM6720_VAC1_ADC_DIS_ENABLE            0
#define UPM6720_VAC1_ADC_DIS_DISABLE        1

#define UPM6720_VAC2_ADC_DIS_MASK            0x40
#define UPM6720_VAC2_ADC_DIS_SHIFT            6
#define UPM6720_VAC2_ADC_DIS_ENABLE            0
#define UPM6720_VAC2_ADC_DIS_DISABLE        1

#define UPM6720_VOUT_ADC_DIS_MASK            0x20
#define UPM6720_VOUT_ADC_DIS_SHIFT            5
#define UPM6720_VOUT_ADC_DIS_ENABLE            0
#define UPM6720_VOUT_ADC_DIS_DISABLE        1

#define UPM6720_VBAT_ADC_DIS_MASK            0x10
#define UPM6720_VBAT_ADC_DIS_SHIFT            4
#define UPM6720_VBAT_ADC_DIS_ENABLE            0
#define UPM6720_VBAT_ADC_DIS_DISABLE        1

#define UPM6720_IBAT_ADC_DIS_MASK            0x08
#define UPM6720_IBAT_ADC_DIS_SHIFT            3
#define UPM6720_IBAT_ADC_DIS_ENABLE            0
#define UPM6720_IBAT_ADC_DIS_DISABLE        1

#define UPM6720_TSBUS_ADC_DIS_MASK            0x04
#define UPM6720_TSBUS_ADC_DIS_SHIFT            2
#define UPM6720_TSBUS_ADC_DIS_ENABLE        0
#define UPM6720_TSBUS_ADC_DIS_DISABLE        1

#define UPM6720_TSBAT_ADC_DIS_MASK            0x02
#define UPM6720_TSBAT_ADC_DIS_SHIFT            1
#define UPM6720_TSBAT_ADC_DIS_ENABLE        0
#define UPM6720_TSBAT_ADC_DIS_DISABLE        1

#define UPM6720_TDIE_ADC_DIS_MASK            0x01
#define UPM6720_TDIE_ADC_DIS_SHIFT            0
#define UPM6720_TDIE_ADC_DIS_ENABLE            0
#define UPM6720_TDIE_ADC_DIS_DISABLE        1

/* Register 25h */
#define UPM6720_REG_25                        0x25
#define UPM6720_IBUS_ADC_MASK                0xFF
#define UPM6720_IBUS_ADC_SHIFT                0
#define UPM6720_IBUS_ADC_SW_CAP_BASE        0
#define UPM6720_IBUS_ADC_SW_CAP_LSB            10000
#define UPM6720_IBUS_ADC_SW_CAP_PRECISION    10000
#define UPM6720_IBUS_ADC_SW_CAP_OFFSET        0
#define UPM6720_IBUS_ADC_BYPASS_BASE        0
#define UPM6720_IBUS_ADC_BYPASS_LSB            10279
#define UPM6720_IBUS_ADC_BYPASS_PRECISION    10000
#define UPM6720_IBUS_ADC_BYPASS_OFFSET        (0)

/* Register 27h */
#define UPM6720_REG_27                        0x27
#define UPM6720_VBUS_ADC_MASK                0xFF
#define UPM6720_VBUS_ADC_SHIFT                0
#define UPM6720_VBUS_ADC_BASE                0
#define UPM6720_VBUS_ADC_LSB                1000
#define UPM6720_VBUS_ADC_PRECISION            1000
#define UPM6720_VBUS_ADC_OFFSET                (0)

/* Register 29h */
#define UPM6720_REG_29                        0x29
#define UPM6720_VAC1_ADC_MASK                0xFF
#define UPM6720_VAC1_ADC_SHIFT                0
#define UPM6720_VAC1_ADC_BASE                0
#define UPM6720_VAC1_ADC_LSB                10000
#define UPM6720_VAC1_ADC_PRECISION            10000
#define UPM6720_VAC1_ADC_OFFSET                (0)

/* Register 2Bh */
#define UPM6720_REG_2B                        0x2B
#define UPM6720_VAC2_ADC_MASK                0xFF
#define UPM6720_VAC2_ADC_SHIFT                0
#define UPM6720_VAC2_ADC_BASE                0
#define UPM6720_VAC2_ADC_LSB                10000
#define UPM6720_VAC2_ADC_PRECISION            10000
#define UPM6720_VAC2_ADC_OFFSET                (0)

/* Register 2Dh */
#define UPM6720_REG_2D                        0x2D
#define UPM6720_VOUT_ADC_MASK                0xFF
#define UPM6720_VOUT_ADC_SHIFT                0
#define UPM6720_VOUT_ADC_BASE                0
#define UPM6720_VOUT_ADC_LSB                10000
#define UPM6720_VOUT_ADC_PRECISION            10000
#define UPM6720_VOUT_ADC_OFFSET                (0)

/* Register 2Fh */
#define UPM6720_REG_2F                        0x2F
#define UPM6720_VBAT_ADC_MASK                0xFF
#define UPM6720_VBAT_ADC_SHIFT                0
#define UPM6720_VBAT_ADC_BASE                0
#define UPM6720_VBAT_ADC_LSB                1000
#define UPM6720_VBAT_ADC_PRECISION            1000
#define UPM6720_VBAT_ADC_OFFSET                (0)

/* Register 31h */
#define UPM6720_REG_31                        0x31
#define UPM6720_IBAT_ADC_MASK                0xFF
#define UPM6720_IBAT_ADC_SHIFT                0
#define UPM6720_IBAT_ADC_BASE                0
#define UPM6720_IBAT_ADC_LSB                1000
#define UPM6720_IBAT_ADC_PRECISION            1000
#define UPM6720_IBAT_ADC_OFFSET                (0)

/* Register 33h */
#define UPM6720_REG_33                        0x33
#define UPM6720_TSBUS_ADC_MASK                0xFF
#define UPM6720_TSBUS_ADC_SHIFT                0
#define UPM6720_TSBUS_ADC_BASE                0
#define UPM6720_TSBUS_ADC_LSB                1000
#define UPM6720_TSBUS_ADC_PRECISION            10000
#define UPM6720_TSBUS_ADC_OFFSET            (0)

/* Register 35h */
#define UPM6720_REG_35                        0x35
#define UPM6720_TSBAT_ADC_MASK                0xFF
#define UPM6720_TSBAT_ADC_SHIFT                0
#define UPM6720_TSBAT_ADC_BASE                0
#define UPM6720_TSBAT_ADC_LSB                10000
#define UPM6720_TSBAT_ADC_PRECISION            100000
#define UPM6720_TSBAT_ADC_OFFSET            (0)

/* Register 37h */
#define UPM6720_REG_37                        0x37
#define UPM6720_TDIE_ADC_MASK                0xFF
#define UPM6720_TDIE_ADC_SHIFT                0
#define UPM6720_TDIE_ADC_BASE                0
#define UPM6720_TDIE_ADC_LSB                5000
#define UPM6720_TDIE_ADC_PRECISION            10000
#define UPM6720_TDIE_ADC_OFFSET                (0)

#endif /* __UPM6720_HEADER__ */
