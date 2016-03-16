#ifndef _MSP430_SPI_H_
#define _MSP430_SPI_H_

#include <stdint.h>

extern void spi_init();
extern uint8_t spi_transfer(uint8_t);  // SPI xfer 1 byte
extern uint16_t spi_transfer16(uint16_t);  // SPI xfer 2 bytes
extern uint16_t spi_transfer9(uint16_t);   // SPI xfer 9 bits (courtesy for driving LCD screens)

#endif
