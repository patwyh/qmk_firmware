#include QMK_KEYBOARD_H
#include "qp.h"          // Core Quantum Painter API
#include "qp_st7789.h"   // ST7789 device factory

// Global display handle
painter_device_t lcd;

void keyboard_post_init_user(void) {
    // Initialize ST7789 device (240x240, specified pins)
    lcd = qp_st7789_make_spi_device(
        240, 240,      // Width, height
        GP23,          // CS (GPIO 23)
        GP22,          // DC (GPIO 22)
        GP21,          // RST (GPIO 21)
        4,             // SPI divisor (~8 MHz)
        0              // SPI mode
    );

    // Viewport offset for common 240x240 panels (test 0, 0 if shifted)
    qp_set_viewport_offsets(lcd, 0, 80);

    // Enable backlight on GP25 (full brightness)
    setPinOutput(GP25);
    writePinHigh(GP25);

    // Optional: Add text after generating/loading a font (example placeholder)
    // painter_font_t my_font = { /* From qmk painter-make-font-image */ };
    // painter_font_handle_t font_handle = painter_font_make_handle(&my_font);
    // qp_set_foreground(lcd, 0, 0, 255);  // White
    // qp_set_background(lcd, 0, 0, 0);    // Black
    // qp_drawtext(lcd, 20, 100, font_handle, "ST7789 OK");

    // Bouncing pixel animation (yellow pixel; replaces qp_drawpixel with qp_set_pixel)
    uint16_t x = 120, y = 120;
    int8_t dx = 3, dy = 2;
    while (true) {
        // Update position with bounce
        x += dx;
        y += dy;
        if (x <= 1 || x >= 238) dx = -dx;
        if (y <= 1 || y >= 238) dy = -dy;

        wait_ms(30);
    }
}

// Minimal 1x1 keymap for compilation
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(KC_NO)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    return true;
}