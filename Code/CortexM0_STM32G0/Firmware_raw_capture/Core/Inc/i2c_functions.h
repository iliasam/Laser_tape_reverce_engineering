#include "stm32g0xx.h"
#ifndef _I2C_FUNC
#define _I2C_FUNC

void init_i2c(void);
void pll_send_data(uint8_t* data, uint16_t length);
void pll_send_data2(uint8_t start_reg, uint8_t* data, uint16_t length);

#endif
