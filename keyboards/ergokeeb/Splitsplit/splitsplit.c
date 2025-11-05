#include "splitsplit.h"
#include "print.h"
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
  debug_keyboard=true;
  debug_mouse=true;
}


// Optional: confirm init
void keyboard_post_init_kb(void) {
    //setPinOutput(LED_CAPS_LOCK_PIN);
    //writePinLow(LED_CAPS_LOCK_PIN);

    dprintf("splitsplit: keyboard_post_init_kb()\r\n");
    dprintf("Cirque driver: CLK=GP%d MISO=GP%d MOSI=GP%d CS=GP%d DR=GP%d\r\n",
            CIRQUE_PINNACLE_SPI_CLK_PIN,
            CIRQUE_PINNACLE_SPI_MISO_PIN,
            CIRQUE_PINNACLE_SPI_MOSI_PIN,
            CIRQUE_PINNACLE_SPI_CS_PIN,
            CIRQUE_PINNACLE_DATA_READY_PIN);

    keyboard_post_init_user();
}