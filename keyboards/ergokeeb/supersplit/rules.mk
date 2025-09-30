MCU = RP2040
BOOTLOADER = rp2040

SPLIT_KEYBOARD = yes
SERIAL_DRIVER = vendor

OLED_ENABLE = yes
OLED_DRIVER = ssd1306

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = cirque_pinnacle_spi

MOUSEKEY_ENABLE = yes  # Enable mouse keys for trackpad functionality
BOOTMAGIC_ENABLE = yes
EXTRAKEY_ENABLE = yes
NKRO_ENABLE = yes
CONSOLE_ENABLE = yes
COMMAND_ENABLE = yes

# Disable unused features to reduce firmware size
RGBLIGHT_ENABLE = no