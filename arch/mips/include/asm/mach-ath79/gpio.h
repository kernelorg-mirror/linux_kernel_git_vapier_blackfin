/*
 *  Atheros AR71XX/AR724X/AR913X GPIO API definitions
 *
 *  Copyright (C) 2008-2010 Gabor Juhos <juhosg@openwrt.org>
 *  Copyright (C) 2008 Imre Kaloz <kaloz@openwrt.org>
 *
 *  This program is free software; you can redistribute it and/or modify it
 *  under the terms of the GNU General Public License version 2 as published
 *  by the Free Software Foundation.
 *
 */

#ifndef __ASM_MACH_ATH79_GPIO_H
#define __ASM_MACH_ATH79_GPIO_H

/* We implement a few ourself */
#define gpio_get_value gpio_get_value
#define gpio_set_value gpio_set_value
#define gpio_to_irq gpio_to_irq
#define irq_to_gpio irq_to_gpio

#define ARCH_NR_GPIOS	64
#include <asm-generic/gpio.h>

int gpio_to_irq(unsigned gpio);
int irq_to_gpio(unsigned irq);
int gpio_get_value(unsigned gpio);
void gpio_set_value(unsigned gpio, int value);

#endif /* __ASM_MACH_ATH79_GPIO_H */
