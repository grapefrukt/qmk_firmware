#pragma once

#undef MANUFACTURER
#undef PRODUCT
#undef DESCRIPTION

#define MANUFACTURER    grapefrukt
#define PRODUCT         grapefrukt keyboard
#define DESCRIPTION     it can type things

/* send tap key if no layer key was used even after tap delay */
#define TAPPING_TERM 50
#define RETRO_TAPPING

/* turn off RGB when computer sleeps */
#ifdef RGB_DI_PIN
#define RGBLIGHT_SLEEP
#endif