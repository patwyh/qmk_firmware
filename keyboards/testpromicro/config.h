// keyboards/mysplit/config.h
#pragma once

#define SPLIT_HAND_PIN GP29        // Optional: detect left/right by a pin pulled high/low
// #define EE_HANDS                 // Alternative: store handedness in EEPROM

// Serial transport pins (if using serial)
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1    // Only needed on the slave side
#define SELECT_SOFT_SERIAL_SPEED 1   // Optional, higher = faster

// Other common options
#define SPLIT_TRANSACTION_IDS_KB MY_CUSTOM_SPLIT_RPC_ID