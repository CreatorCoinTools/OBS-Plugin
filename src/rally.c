/* my-plugin.c */
#include <obs-module.h>

/* Defines common functions (required) */
OBS_DECLARE_MODULE()

/* Implements common ini-based locale (optional) */
OBS_MODULE_USE_DEFAULT_LOCALE("rally-plugin", "en-US")

extern struct obs_source_info  rally_source;  /* Defined in rally-source.c  */

bool obs_module_load(void)
{
        obs_register_source(&my_source);
    
        return true;
}