# -------------------------------------------------
# Core features
# -------------------------------------------------
#POINTING_DEVICE_ENABLE = yes
#SPLIT_KEYBOARD = yes  # For split communication
POINTING_DEVICE_DRIVER = cirque_pinnacle_spi
SERIAL_DRIVER = vendor  # Required for RP2040 serial split (PIO-based half-duplex)
BOOTLOADER = rp2040

# Optional: Enable relative mode (default)
CIRQUE_PINNACLE_TAP_ENABLE = yes
CIRQUE_PINNACLE_TIMEOUT = 100

DEBUG_MATRIX_SCAN_RATE_ENABLE = yes
CIRQUE_PINNACLE_DEBUG_ENABLE = yes   # CRITICAL: prints raw trackpad data