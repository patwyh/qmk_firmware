# Build options
BOOTLOADER = rp2040

# Features
SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor  # For RP2040 UART

OLED_ENABLE = yes
POINTING_DEVICE_ENABLE = yes
CIRQUE_PINNACLE_ENABLE = yes  # Included with POINTING_DEVICE

# VIAL (disable VIA if conflicting)
VIAL_ENABLE = no  # Enable in vial keymap only
VIA_ENABLE = no