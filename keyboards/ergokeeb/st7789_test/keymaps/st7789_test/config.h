#pragma once

#define ST7789_SPI_DRIVER    SPID1
#define ST7789_SPI_SCK_PIN   GP19
#define ST7789_SPI_MOSI_PIN  GP20 // (A4 is the QMK alias for GP20 on Pro Micro RP2040)
#define ST7789_CS_PIN   GP23
#define ST7789_DC_PIN   GP22
#define ST7789_RST_PIN  GP21
#define ST7789_BL_PIN   GP25   // Backlight (optional, can be tied to 3.3V)
#define ST7789_SPI_DIVISOR 6// Adjust for stable display (4 = 15 MHz on 120 MHz sysclk)

#define DISPLAY_WIDTH   240
#define DISPLAY_HEIGHT  135    // Common small ST7789 module (135×240)
#define DISPLAY_ROTATION 1     // 0–3; 1 is typical landscape for these modules