#ifndef __ASM_AVR32_ARCH_GPIO_H
#define __ASM_AVR32_ARCH_GPIO_H

#include <linux/compiler.h>
#include <asm/irq.h>


/* Some GPIO chips can manage IRQs; some can't.  The exact numbers can
 * be changed if needed, but for the moment they're not configurable.
 */
#define ARCH_NR_GPIOS	(NR_GPIO_IRQS + 2 * 32)

/* We implement a few ourself */
#define gpio_to_irq gpio_to_irq
#define irq_to_gpio irq_to_gpio

/* Arch-neutral GPIO API, supporting both "native" and external GPIOs. */
#include <asm-generic/gpio.h>

static inline int gpio_to_irq(unsigned int gpio)
{
	if (gpio < NR_GPIO_IRQS)
		return gpio + GPIO_IRQ_BASE;
	return -EINVAL;
}

static inline int irq_to_gpio(unsigned int irq)
{
	return irq - GPIO_IRQ_BASE;
}

#endif /* __ASM_AVR32_ARCH_GPIO_H */
