/*================================================================
*   Copyright (C) 2019 Sangfor Ltd. All rights reserved.
*   
*   文件名称：m4412.c
*   创 建 者：yutao: yutao@126.com
*   创建日期：2019年07月21日
*   描    述：
*
================================================================*/
// SPDX-License-Identifier: GPL-2.0+
/*
 * Copyright (C) 2011 Samsung Electronics
 */

#include <common.h>
#include <asm/io.h>
#include <asm/gpio.h>
#include <asm/arch/cpu.h>
#include <asm/arch/mmc.h>
#include <asm/arch/periph.h>
#include <asm/arch/pinmux.h>
#include <usb.h>

DECLARE_GLOBAL_DATA_PTR;

u32 get_board_rev(void)
{
       return 0;
}

int exynos_init(void)
{
       return 0;
}

int board_usb_init(int index, enum usb_init_type init)
{
       return 0;
}

#ifdef CONFIG_BOARD_EARLY_INIT_F
int exynos_early_init_f(void)
{
       return 0;
}
#endif
