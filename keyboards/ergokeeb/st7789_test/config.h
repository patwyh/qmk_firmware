#pragma once

// Matrix configuration: Minimal 1x1 for display-only test (no real switches)
#define MATRIX_ROWS 1
#define MATRIX_COLS 1
#define MATRIX_ROW_PINS { GP0 }  // Dummy row pin (any unused GPIO)
#define MATRIX_COL_PINS { GP1 }  // Dummy column pin (any unused GPIO)
#define DIODE_DIRECTION COL2ROW  // Or ROW2COL; irrelevant for dummy matrix

// Quantum Painter: Hardware SPI1 for RP2040 (SCK=GP19, MOSI=GP20)

#define QP_SPI_DRIVER SPID1