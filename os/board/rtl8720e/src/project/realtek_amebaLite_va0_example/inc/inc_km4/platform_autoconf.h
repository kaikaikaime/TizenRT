/*
 * Automatically generated by make menuconfig: don't edit
 */
#define AUTOCONF_INCLUDED

/*
 * < MENUCONFIG FOR CHIP CONFIG
 */

/*
 * < CONFIG CHIP
 */
#define CONFIG_AMEBALITE 1
#define ARM_CORE_CM4 1
#define CONFIG_FPGA 1
#define CONFIG_RL6842_A_CUT 1

/*
 * < CONFIG TEST MODE
 */
#undef  CONFIG_MP
#undef  CONFIG_CP
#undef  CONFIG_FT
#undef  CONFIG_EQC
#undef  CONFIG_QA
#undef  CONFIG_OLT
#undef  CONFIG_CornerTest
#undef  CONFIG_POST_SIM

/*
 * < CONFIG TrustZone
 */
#undef  CONFIG_TRUSTZONE

/*
 * < CONFIG Link Option
 */
#define CONFIG_CODE_XIP_DATA_PSRAM 1
#undef  CONFIG_CODE_PSRAM_DATA_SRAM
#undef  CONFIG_CODE_XIP_DATA_SRAM
#undef  CONFIG_XIP_FLASH

/*
 * < CONFIG OS
 */
#define CONFIG_KERNEL 1
#define PLATFORM_FREERTOS 1
#define TASK_SCHEDULER_DISABLED (0)

/*
 * < CONFIG SOC PS
 */
#define CONFIG_SOC_PS_EN 1
#define CONFIG_SOC_PS_MODULE 1

/*
 * < CONFIG SDIO Device
 */
#define CONFIG_SDIO_DEVICE_EN 1
#define CONFIG_SDIO_DEVICE_NORMAL 1
#define CONFIG_SDIO_DEVICE_MODULE 1

/*
 * < CONFIG PINMUX
 */
#undef  CONFIG_PINMAP_ENABLE

/*
 * < CONFIG VAD
 */
#undef  CONFIG_HW_VAD_EN

/*
 * < MBED_API
 */
#define CONFIG_MBED_API_EN 1

/*
 * < CONFIG FUNCTION TEST
 */
#undef  CONFIG_PER_TEST

/*
 * < CONFIG SECURE TEST
 */
#undef  CONFIG_SEC_VERIFY

/*
 * < CONFIG BT
 */
#define  CONFIG_BT 1
#define  CONFIG_BT_AP 1
#undef  CONFIG_BT_NP
#undef  CONFIG_BT_SINGLE_CORE

/*
 * < CONFIG WIFI
 */
#define CONFIG_WLAN 1
#define CONFIG_AS_INIC_AP 1
#undef  CONFIG_AS_INIC_NP
#undef  CONFIG_HIGH_TP_TEST
#define CONFIG_LWIP_LAYER 1

/*
 * < CONFIG WIFI FW
 */
#undef  CONFIG_WIFI_FW_EN
#undef  CONFIG_FW_DRIVER_COEXIST

/*
 * < CONFIG 802154
 */
#undef  CONFIG_802154_PHY_EN

/*
 * < SSL Config
 */
#define CONFIG_USE_MBEDTLS_ROM 1
#define CONFIG_MBED_TLS_ENABLED 1
#undef  CONFIG_SSL_ROM_TEST

/*
 * < MQTT Config
 */
#undef  CONFIG_MQTT_EN

/*
 * < GUI Config
 */
#undef  CONFIG_GUI_EN

/*
 * < Audio Config
 */
#undef  CONFIG_AUDIO_FWK
#undef  CONFIG_AUDIO_MIXER
#undef  CONFIG_AUDIO_PASSTHROUGH
#undef  CONFIG_AUDIO_HAL_AFE
#undef  CONFIG_MEDIA_PLAYER
#undef  CONFIG_MEDIA_PLAYER_LITE

/*
 * < Demux
 */
#undef  CONFIG_MEDIA_DEMUX_WAV
#undef  CONFIG_MEDIA_DEMUX_MP3
#undef  CONFIG_MEDIA_DEMUX_AAC
#undef  CONFIG_MEDIA_DEMUX_MP4
#undef  CONFIG_MEDIA_DEMUX_FLAC
#undef  CONFIG_MEDIA_DEMUX_OGG

/*
 * < Codec
 */
#undef  CONFIG_MEDIA_CODEC_PCM
#undef  CONFIG_MEDIA_CODEC_MP3
#undef  CONFIG_MEDIA_CODEC_HAAC
#undef  CONFIG_MEDIA_CODEC_VORBIS
#undef  CONFIG_MEDIA_CODEC_OPUS
#undef  CONFIG_AUDIO_SPEECH
#undef  CONFIG_AUDIO_RPC

/*
 * < IMQ Config
 */
#undef  CONFIG_IMQ_EN

/*
 * To set debug msg flag
 */
#define CONFIG_DEBUG_LOG 1

/*
 * < Build Option
 */
#define CONFIG_TOOLCHAIN_ASDK 1
#undef  CONFIG_TOOLCHAIN_ARM_GCC
#undef  CONFIG_LINK_ROM_LIB
#define CONFIG_LINK_ROM_SYMB 1
/*
 * < CONFIG USE FLASH LAYOUT CFG
 */
#define  CONFIG_USE_FLASHCFG
