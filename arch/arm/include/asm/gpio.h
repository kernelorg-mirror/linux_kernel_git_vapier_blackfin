#ifndef _ARCH_ARM_GPIO_H
#define _ARCH_ARM_GPIO_H

/* not all ARM platforms necessarily support this API ... */
#include <mach/gpio.h>

/* Note: this may rely upon the value of ARCH_NR_GPIOS set in mach/gpio.h */
#include <asm-generic/gpio.h>

#endif /* _ARCH_ARM_GPIO_H */
