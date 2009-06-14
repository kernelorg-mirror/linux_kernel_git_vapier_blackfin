/*
 * User space memory access functions
 *
 * Copyright 2004-2009 Analog Devices Inc.
 *
 * Licensed under the GPL-2 or later.
 *
 * Based on: include/asm-m68knommu/uaccess.h
 */

#ifndef __BLACKFIN_UACCESS_H
#define __BLACKFIN_UACCESS_H

#define KERNEL_DS   (0x5)
#define USER_DS     (0x1)

#include <asm/segment.h>
#ifdef CONFIG_ACCESS_CHECK
# define __access_ok(ptr, size) _access_ok((unsigned long)(ptr), size)
extern int _access_ok(unsigned long ptr, unsigned long size);
#endif

#include <asm-generic/uaccess.h>

#undef segment_eq
#define segment_eq(a, b) ((a) == (b))

/* How to interpret these return values:
 *	CORE:      can be accessed by core load or dma memcpy
 *	CORE_ONLY: can only be accessed by core load
 *	DMA:       can only be accessed by dma memcpy
 *	IDMA:      can only be accessed by interprocessor dma memcpy (BF561)
 *	ITEST:     can be accessed by isram memcpy or dma memcpy
 */
enum {
	BFIN_MEM_ACCESS_CORE = 0,
	BFIN_MEM_ACCESS_CORE_ONLY,
	BFIN_MEM_ACCESS_DMA,
	BFIN_MEM_ACCESS_IDMA,
	BFIN_MEM_ACCESS_ITEST,
};
/**
 *	bfin_mem_access_type() - what kind of memory access is required
 *	@addr:   the address to check
 *	@size:   number of bytes needed
 *	@return: <0 is error, >=0 is BFIN_MEM_ACCESS_xxx enum (see above)
 */
int bfin_mem_access_type(unsigned long addr, unsigned long size);

#endif
