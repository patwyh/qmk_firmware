# keyboards/mysplit/rules.mk
MCU = RP2040
BOARD = GENERIC_RP_RP2040   # works for most RP2040 boards

# Split keyboard options
SPLIT_KEYBOARD = yes

# Transport options (choose ONE)
# Serial (most common, uses GPIO pin)
SERIAL_DRIVER = vendor     # or "usart" on some boards

# OR use i2c for split communication (rare with RP2040 splits)
# I2C_DRIVER = I2C0

# Bootloader
BOOTLOADER = rp2040       # uses UF2 bootloader (Adafruit, Raspberry Pi, etc.)

# Required features
CONVERT_TO = rp2040_ce    # IMPORTANT: only rp2040_ce is currently supported for split RP2040