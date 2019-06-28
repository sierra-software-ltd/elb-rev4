/* Filename    : lora_spi header file
   Description : handles spi read/write function declarations
   Author      : http://www.ssla.co.uk

   This software is SSLA licensed
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#ifndef ___LORA_SPI_H___
#define ___LORA_SPI_H___ 1

#include <stdint.h>

#if 0
#define SPI_DEV "/dev/spidev2.1"
#else
#define SPI_DEV "/dev/spidev1.0"
#endif

int lora_spi_init(void);
void lora_spi_deinit(void);
int lora_spi_transfer1(uint8_t addr, uint8_t value);
int lora_spi_transfer(uint8_t addr, uint8_t *txbuf, uint8_t *rxbuf, int length);
int lora_spi_read_reg(uint8_t addr);
int lora_spi_write_reg(uint8_t addr, uint8_t value);

uint8_t readRegister(uint8_t address);
void writeRegister(uint8_t address, uint8_t value);
uint8_t singleTransfer(uint8_t address, uint8_t value);

#endif /* ___LORA_SPI_H___ */
