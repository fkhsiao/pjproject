#define PJ_CONFIG_ANDROID               1
#include <pj/config_site_sample.h>
#	define PJMEDIA_HAS_SPEEX_AEC		0
#	define PJMEDIA_HAS_SPEEX_CODEC		0
#   define PJ_HAS_SSL_SOCK              1
#   define PJLIB_USE_SLNK_TIMING        1

/* Increase allowable packet size.  Defaults to 4000 in sip_config.h
 *  if not defined.  Needed for complicated sites.  Increase max logging
 *  size to agree with the packet size */
#   define PJSIP_MAX_PKT_LEN            6000
#   define PJ_LOG_MAX_SIZE              (PJSIP_MAX_PKT_LEN+500)