#include "splitsplit.h"

/* --------------------------------------------------------------- */
/*  Early GPIO setup for the Cirque DR (Data-Ready) pin            */
/* --------------------------------------------------------------- */
// void keyboard_pre_init_kb(void) {
//     /* Make DR pin an input with pull-up – required for interrupt mode */
//     setPinInputHigh(CIRQUE_PINNACLE_DATA_READY_PIN);

//     /* Call user hook (optional) */
//     keyboard_pre_init_user();
// }

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
  debug_enable=true;
  debug_matrix=true;
  //debug_keyboard=true;
  //debug_mouse=true;
}
