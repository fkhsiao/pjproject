#define PJ_CONFIG_ANDROID                       1

/*
 * PJLIB settings.
 */

/* Disable floating point support */
#undef PJ_HAS_FLOATING_POINT
#define PJ_HAS_FLOATING_POINT                   0
#define PJ_HAS_SSL_SOCK                         0

/*
 * PJMEDIA settings
 */

/* We have our own OpenSL ES backend */
#define PJMEDIA_AUDIO_DEV_HAS_PORTAUDIO         0
#define PJMEDIA_AUDIO_DEV_HAS_WMME              0
#define PJMEDIA_AUDIO_DEV_HAS_OPENSL            0
#define PJMEDIA_AUDIO_DEV_HAS_ANDROID_JNI       1

/* Disable some codecs */
#define PJMEDIA_HAS_L16_CODEC                   0
#define PJMEDIA_HAS_SPEEX_AEC                   0
#define PJMEDIA_HAS_SPEEX_CODEC                 0
//#define PJMEDIA_HAS_G722_CODEC                0

/* Fine tune Speex's default settings for best performance/quality */
#define PJMEDIA_CODEC_SPEEX_DEFAULT_QUALITY     5

/*
 * PJSIP settings.
 */

/* Increase allowable packet size, just in case */
//#define PJSIP_MAX_PKT_LEN                     2000

/* Increase allowable packet size.  Defaults to 4000 in sip_config.h
 *  if not defined.  Needed for complicated sites.  Increase max logging
 *  size to agree with the packet size */
#define PJSIP_MAX_PKT_LEN                       6000

#define PJ_LOG_MAX_SIZE                         (PJSIP_MAX_PKT_LEN+500)

/*
 * PJSUA settings.
 */

/* Default codec quality, previously was set to 5, however it is now
 * set to 4 to make sure pjsua instantiates resampler with small filter.
 */
#define PJSUA_DEFAULT_CODEC_QUALITY             4

/* Set maximum number of dialog/transaction/calls to minimum */
#define PJSIP_MAX_TSX_COUNT                     31
#define PJSIP_MAX_DIALOG_COUNT                  31
#define PJSUA_MAX_CALLS                         4

/* Other pjsua settings */
#define PJSUA_MAX_ACC                           4
#define PJSUA_MAX_PLAYERS                       4
#define PJSUA_MAX_RECORDERS                     4
#define PJSUA_MAX_CONF_PORTS                    (PJSUA_MAX_CALLS+2*PJSUA_MAX_PLAYERS)
#define PJSUA_MAX_BUDDIES                       32