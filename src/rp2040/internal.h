#ifndef __RP2040_INTERNAL_H
#define __RP2040_INTERNAL_H
// Local definitions for rp2040

#include "RP2040.h"

uint32_t get_pclock_frequency(void);
void gpio_peripheral(uint32_t gpio, int func, int pull_up);
void unreset(uint32_t reset_bit);

#endif // internal.h
