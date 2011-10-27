/*
 *  include/asm-sh/gpio.h
 *
 * Generic GPIO API and pinmux table support for SuperH.
 *
 * Copyright (c) 2008 Magnus Damm
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 */
#ifndef __ASM_SH_GPIO_H
#define __ASM_SH_GPIO_H

#if defined(CONFIG_CPU_SH3)
#include <cpu/gpio.h>
#endif

#define ARCH_NR_GPIOS 512
#include <linux/sh_pfc.h>

#include <asm-generic/gpio.h>

#endif /* __ASM_SH_GPIO_H */
