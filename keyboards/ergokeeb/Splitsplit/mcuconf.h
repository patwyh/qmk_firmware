// Copyright 2021-2023 ChibiOS team
// SPDX-License-Identifier: Apache-2.0

#ifndef MCUCONF_H
#define MCUCONF_H

#define RP2040_MCUCONF

/*
 * HAL driver system settings.
 */

/* I2C driver system settings. */
#define RP_I2C_USE_I2C0                     TRUE
#define RP_I2C_USE_I2C1                     FALSE
#define RP_I2C_BUSY_TIMEOUT                 50
#define RP_I2C_ADDRESS_MODE_10BIT           FALSE
#define RP_IRQ_I2C0_PRIORITY                3  // Lowest priority (0=highest, 3=lowest) for I2C0

/* SPI driver system settings. */
#define RP_SPI_USE_SPI0                     TRUE
#define RP_SPI_USE_SPI1                     FALSE

/* SPI IRQ and DMA definitions for RP2040 (valid ranges: IRQ 0-3, DMA 0-1) */
#define RP_IRQ_SPI0_PRIORITY                3  // Lowest priority (0=highest, 3=lowest)
#define RP_IRQ_SPI1_PRIORITY                3
#define RP_SPI_SPI0_RX_DMA_CHANNEL          0
#define RP_SPI_SPI0_TX_DMA_CHANNEL          1
#define RP_SPI_SPI1_RX_DMA_CHANNEL          2
#define RP_SPI_SPI1_TX_DMA_CHANNEL          3
#define RP_SPI_SPI0_DMA_PRIORITY            1  // Valid low priority (0-1 for RP2040 stability)
#define RP_SPI_SPI1_DMA_PRIORITY            1

/* Serial driver system settings. (Disabled for vendor PIO split transport) */
#define RP_USART_USE_UART0                  FALSE
#define RP_USART_USE_UART1                  FALSE
#define RP_IRQ_UART0_PRIORITY               3  // Required for LLD inclusion even when disabled
#define RP_IRQ_UART1_PRIORITY               3

/* USB driver system settings. */
#define RP_USB_USE_USBD0                    TRUE
#define RP_IRQ_USB0_PRIORITY                3  // Consistent lowest priority for USB
#define RP_USB_FORCE_VBUS_DETECT            TRUE
#define RP_USE_EXTERNAL_VBUS_DETECT         FALSE

#endif /* MCUCONF_H */