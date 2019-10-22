#pragma once

#undef MANUFACTURER
#undef PRODUCT
#undef DESCRIPTION

#define MANUFACTURER    grapefrukt
#define PRODUCT         grapefrukt keyboard
#define DESCRIPTION     it can type things

#define TAPPING_TERM 175

/* turn off RGB when computer sleeps */
#ifdef RGB_DI_PIN
#define RGBLIGHT_SLEEP
#endif