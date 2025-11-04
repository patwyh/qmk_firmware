#POINTING_DEVICE_ENABLE = yes
#SPLIT_KEYBOARD = yes  # For split communication
POINTING_DEVICE_DRIVER = cirque_pinnacle_spi
SERIAL_DRIVER = vendor  # Required for RP2040 serial split (PIO-based half-duplex)
BOOTLOADER = rp2040