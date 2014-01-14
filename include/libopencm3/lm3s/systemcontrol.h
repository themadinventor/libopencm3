/** @defgroup systemcontrol_defines System Control

@brief <b>Defined Constants and Types for the LM3S System Control</b>

@ingroup LM3Sxx_defines

@version 1.0.0

@author @htmlonly &copy; @endhtmlonly 2011
Gareth McMullin <gareth@blacksphere.co.nz>
@author @htmlonly &copy; @endhtmlonly 2012
Alexandru Gagniuc <mr.nuke.me@gmail.com>
@author @htmlonly &copy; @endhtmlonly 2014
Fredrik Ahlberg <fredrik@z80.se>

@date 10 March 2013

LGPL License Terms @ref lgpl_license
*/

/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2011 Gareth McMullin <gareth@blacksphere.co.nz>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LM3S_SYSTEMCONTROL_H
#define LM3S_SYSTEMCONTROL_H

/**@{*/

#include <libopencm3/cm3/common.h>
#include <libopencm3/lm3s/memorymap.h>

#define SYSTEMCONTROL_DID0		MMIO32(SYSTEMCONTROL_BASE + 0x000)
#define SYSTEMCONTROL_DID1		MMIO32(SYSTEMCONTROL_BASE + 0x004)
#define SYSTEMCONTROL_DC0		MMIO32(SYSTEMCONTROL_BASE + 0x008)
#define SYSTEMCONTROL_DC1		MMIO32(SYSTEMCONTROL_BASE + 0x010)
#define SYSTEMCONTROL_DC2		MMIO32(SYSTEMCONTROL_BASE + 0x014)
#define SYSTEMCONTROL_DC3		MMIO32(SYSTEMCONTROL_BASE + 0x018)
#define SYSTEMCONTROL_DC4		MMIO32(SYSTEMCONTROL_BASE + 0x01C)
#define SYSTEMCONTROL_DC5		MMIO32(SYSTEMCONTROL_BASE + 0x020)
#define SYSTEMCONTROL_DC6		MMIO32(SYSTEMCONTROL_BASE + 0x024)
#define SYSTEMCONTROL_DC7		MMIO32(SYSTEMCONTROL_BASE + 0x028)
#define SYSTEMCONTROL_PBORCTL		MMIO32(SYSTEMCONTROL_BASE + 0x030)
#define SYSTEMCONTROL_LDORCTL		MMIO32(SYSTEMCONTROL_BASE + 0x034)
#define SYSTEMCONTROL_SRCR0		MMIO32(SYSTEMCONTROL_BASE + 0x040)
#define SYSTEMCONTROL_SRCR1		MMIO32(SYSTEMCONTROL_BASE + 0x044)
#define SYSTEMCONTROL_SRCR2		MMIO32(SYSTEMCONTROL_BASE + 0x048)
#define SYSTEMCONTROL_RIS		MMIO32(SYSTEMCONTROL_BASE + 0x050)
#define SYSTEMCONTROL_IMC		MMIO32(SYSTEMCONTROL_BASE + 0x054)
#define SYSTEMCONTROL_MISC		MMIO32(SYSTEMCONTROL_BASE + 0x058)
#define SYSTEMCONTROL_RESC		MMIO32(SYSTEMCONTROL_BASE + 0x05C)
#define SYSTEMCONTROL_RCC		MMIO32(SYSTEMCONTROL_BASE + 0x060)
#define SYSTEMCONTROL_PLLCFG		MMIO32(SYSTEMCONTROL_BASE + 0x064)
#define SYSTEMCONTROL_GPIOHBCTL		MMIO32(SYSTEMCONTROL_BASE + 0x06C)
#define SYSTEMCONTROL_RCC2		MMIO32(SYSTEMCONTROL_BASE + 0x070)
#define SYSTEMCONTROL_MOSCCTL		MMIO32(SYSTEMCONTROL_BASE + 0x07C)
#define SYSTEMCONTROL_RCGC0		MMIO32(SYSTEMCONTROL_BASE + 0x100)
#define SYSTEMCONTROL_RCGC1		MMIO32(SYSTEMCONTROL_BASE + 0x104)
#define SYSTEMCONTROL_RCGC2		MMIO32(SYSTEMCONTROL_BASE + 0x108)
#define SYSTEMCONTROL_SCGC0		MMIO32(SYSTEMCONTROL_BASE + 0x110)
#define SYSTEMCONTROL_SCGC1		MMIO32(SYSTEMCONTROL_BASE + 0x114)
#define SYSTEMCONTROL_SCGC2		MMIO32(SYSTEMCONTROL_BASE + 0x118)
#define SYSTEMCONTROL_DCGC0		MMIO32(SYSTEMCONTROL_BASE + 0x120)
#define SYSTEMCONTROL_DCGC1		MMIO32(SYSTEMCONTROL_BASE + 0x124)
#define SYSTEMCONTROL_DCGC2		MMIO32(SYSTEMCONTROL_BASE + 0x128)
#define SYSTEMCONTROL_DSLPCLKCFG	MMIO32(SYSTEMCONTROL_BASE + 0x144)

/* =============================================================================
 * SYSCTL_SRCR0 values
 * ---------------------------------------------------------------------------*/
#define SYSCTL_SRCR0_WDT1		(1 << 28)
#define SYSCTL_SRCR0_CAN0		(1 << 24)
#define SYSCTL_SRCR0_PWM		(1 << 20)
#define SYSCTL_SRCR0_ADC1		(1 << 17)
#define SYSCTL_SRCR0_ADC0		(1 << 16)
#define SYSCTL_SRCR0_HIB		(1 << 6)
#define SYSCTL_SRCR0_WDT0		(1 << 3)

/* =============================================================================
 * SYSCTL_SRCR1 values
 * ---------------------------------------------------------------------------*/
#define SYSCTL_SRCR1_COMP1		(1 << 25)
#define SYSCTL_SRCR1_COMP0		(1 << 24)
#define SYSCTL_SRCR1_TIMER3		(1 << 19)
#define SYSCTL_SRCR1_TIMER2		(1 << 18)
#define SYSCTL_SRCR1_TIMER1		(1 << 17)
#define SYSCTL_SRCR1_TIMER0		(1 << 16)
#define SYSCTL_SRCR1_I2C1		(1 << 14)
#define SYSCTL_SRCR1_I2C0		(1 << 12)
#define SYSCTL_SRCR1_QEI0		(1 << 8)
#define SYSCTL_SRCR1_SSI1		(1 << 5)
#define SYSCTL_SRCR1_SSI0		(1 << 4)
#define SYSCTL_SRCR1_UART2		(1 << 2)
#define SYSCTL_SRCR1_UART1		(1 << 1)
#define SYSCTL_SRCR1_UART0		(1 << 0)

/* =============================================================================
 * SYSCTL_SRCR2 values
 * ---------------------------------------------------------------------------*/
#define SYSCTL_SRCR2_USB0		(1 << 16)
#define SYSCTL_SRCR2_UDMA		(1 << 13)
#define SYSCTL_SRCR2_GPIOE		(1 << 4)
#define SYSCTL_SRCR2_GPIOD		(1 << 3)
#define SYSCTL_SRCR2_GPIOC		(1 << 2)
#define SYSCTL_SRCR2_GPIOB		(1 << 1)
#define SYSCTL_SRCR2_GPIOA		(1 << 0)

/* =============================================================================
 * SYSCTL_RIS values
 * ---------------------------------------------------------------------------*/
/** MOSC Power Up Raw Interrupt Status */
#define SYSCTL_RIS_MOSCPUPRIS		(1 << 8)
/** USB PLL Lock Raw Interrupt Status */
#define SYSCTL_RIS_USBPLLLRIS		(1 << 7)
/** PLL Lock Raw Interrupt Status */
#define SYSCTL_RIS_PLLLRIS		(1 << 6)
/** Main Oscillator Failure Raw Interrupt Status */
#define SYSCTL_RIS_MOFRIS		(1 << 3)
/** Brown-Out Reset Raw Interrupt Status */
#define SYSCTL_RIS_BORRIS		(1 << 1)

/* =============================================================================
 * SYSCTL_IMC values
 * ---------------------------------------------------------------------------*/
/** MOSC Power Up Raw Interrupt Status */
#define SYSCTL_IMC_MOSCPUPIM		(1 << 8)
/** USB PLL Lock Raw Interrupt Status */
#define SYSCTL_IMC_USBPLLLIM		(1 << 7)
/** PLL Lock Raw Interrupt Status */
#define SYSCTL_IMC_PLLLIM		(1 << 6)
/** Brown-Out Reset Raw Interrupt Status */
#define SYSCTL_IMC_BORIM		(1 << 1)

/* =============================================================================
 * SYSCTL_RCC values
 * ---------------------------------------------------------------------------*/
/** Auto Clock Gating */
#define SYSCTL_RCC_ACG			(1 << 27)
/** System Clock Divisor */
#define SYSCTL_RCC_SYSDIV_MASK		(0xF << 23)
/** Enable System Clock Divider */
#define SYSCTL_RCC_USESYSDIV		(1 << 22)
/** Enable PWM Clock Divisor */
#define SYSCTL_RCC_USEPWMDIV		(1 << 20)
/** PWM Unit Clock Divisor */
#define SYSCTL_RCC_PWMDIV_MASK		(0xF << 17)
#define SYSCTL_RCC_PWMDIV_2		(0x0 << 17)
#define SYSCTL_RCC_PWMDIV_4		(0x1 << 17)
#define SYSCTL_RCC_PWMDIV_8		(0x2 << 17)
#define SYSCTL_RCC_PWMDIV_16		(0x3 << 17)
#define SYSCTL_RCC_PWMDIV_32		(0x4 << 17)
#define SYSCTL_RCC_PWMDIV_64		(0x5 << 17)
/** PLL Power Down */
#define SYSCTL_RCC_PWRDN		(1 << 13)
/** PLL Bypass */
#define SYSCTL_RCC_BYPASS		(1 << 11)
/** Crystal Value */
#define SYSCTL_RCC_XTAL_MASK		(0x1F << 6)
#define SYSCTL_RCC_XTAL_4M		(0x06 << 6)
#define SYSCTL_RCC_XTAL_4M_096		(0x07 << 6)
#define SYSCTL_RCC_XTAL_4M_9152		(0x08 << 6)
#define SYSCTL_RCC_XTAL_5M		(0x09 << 6)
#define SYSCTL_RCC_XTAL_5M_12		(0x0A << 6)
#define SYSCTL_RCC_XTAL_6M		(0x0B << 6)
#define SYSCTL_RCC_XTAL_6M_144		(0x0C << 6)
#define SYSCTL_RCC_XTAL_7M_3728		(0x0D << 6)
#define SYSCTL_RCC_XTAL_8M		(0x0E << 6)
#define SYSCTL_RCC_XTAL_8M_192		(0x0F << 6)
#define SYSCTL_RCC_XTAL_10M		(0x10 << 6)
#define SYSCTL_RCC_XTAL_12M		(0x11 << 6)
#define SYSCTL_RCC_XTAL_12M_288		(0x12 << 6)
#define SYSCTL_RCC_XTAL_13M_56		(0x13 << 6)
#define SYSCTL_RCC_XTAL_14M_31818	(0x14 << 6)
#define SYSCTL_RCC_XTAL_16M		(0x15 << 6)
#define SYSCTL_RCC_XTAL_16M_384		(0x16 << 6)
#define SYSCTL_RCC_XTAL_18M		(0x17 << 6)
#define SYSCTL_RCC_XTAL_20M		(0x18 << 6)
#define SYSCTL_RCC_XTAL_24M		(0x19 << 6)
#define SYSCTL_RCC_XTAL_25M		(0x1A << 6)
/** Oscillator Source */
#define SYSCTL_RCC_OSCSRC_MASK		(0x3 << 4)
#define SYSCTL_RCC_OSCSRC_MOSC		(0x0 << 4)
#define SYSCTL_RCC_OSCSRC_PIOSC		(0x1 << 4)
#define SYSCTL_RCC_OSCSRC_PIOSC_D4	(0x2 << 4)
#define SYSCTL_RCC_OSCSRC_30K		(0x3 << 4)
/** Precision Internal Oscillator Disable */
#define SYSCTL_RCC_IOSCDIS		(1 << 1)
/** Main Oscillator Disable */
#define SYSCTL_RCC_MOSCDIS		(1 << 0)

/* =============================================================================
 * SYSCTL_RCC2 values
 * ---------------------------------------------------------------------------*/
/** RCC2 overides RCC */
#define SYSCTL_RCC2_USERCC2		(1 << 31)
/** Divide PLL as 400 MHz vs. 200 MHz */
#define SYSCTL_RCC2_DIV400		(1 << 30)
/** System Clock Divisor 2 */
#define SYSCTL_RCC2_SYSDIV2_MASK	(0x3F << 23)
/** Additional LSB for SYSDIV2 */
#define SYSCTL_RCC2_SYSDIV2LSB		(1 << 22)
/** System clock divisor mask when RCC2_DIV400 is set */
#define SYSCTL_RCC2_SYSDIV400_MASK	(0x7F << 22)
/** Power-Down USB PLL */
#define SYSCTL_RCC2_USBPWRDN		(1 << 14)
/** PLL Power Down 2 */
#define SYSCTL_RCC2_PWRDN2		(1 << 13)
/** PLL Bypass 2 */
#define SYSCTL_RCC2_BYPASS2		(1 << 11)
/** Oscillator Source 2 */
#define SYSCTL_RCC2_OSCSRC2_MASK	(0x7 << 4)
#define SYSCTL_RCC2_OSCSRC2_MOSC	(0x0 << 4)
#define SYSCTL_RCC2_OSCSRC2_PIOSC	(0x1 << 4)
#define SYSCTL_RCC2_OSCSRC2_PIOSC_D4	(0x2 << 4)
#define SYSCTL_RCC2_OSCSRC2_30K		(0x3 << 4)
#define SYSCTL_RCC2_OSCSRC2_32K768	(0x7 << 4)

/* =============================================================================
 * Convenience definitions for a readable API
 * ---------------------------------------------------------------------------*/
/**
 * \brief Clock enable definitions
 *
 * The definitions are specified in the form
 * 31:5 register offset from SYSCTL_BASE for the clock register
 * 4:0  bit offset for the given peripheral
 *
 * The names have the form [clock_type]_[periph_type]_[periph_number]
 * Where clock_type is
 *     RCC for run clock
 *     SCC for sleep clock
 *     DCC for deep-sleep clock
 */

#define SYSCTL_BASE	SYSTEMCONTROL_BASE
#define SYSCTL_RCGC0	SYSTEMCONTROL_RCGC0
#define SYSCTL_RCGC1	SYSTEMCONTROL_RCGC1
#define SYSCTL_RCGC2	SYSTEMCONTROL_RCGC2
#define SYSCTL_SCGC0	SYSTEMCONTROL_SCGC0
#define SYSCTL_SCGC1	SYSTEMCONTROL_SCGC1
#define SYSCTL_SCGC2	SYSTEMCONTROL_SCGC2
#define SYSCTL_DCGC0	SYSTEMCONTROL_DCGC0
#define SYSCTL_DCGC1	SYSTEMCONTROL_DCGC1
#define SYSCTL_DCGC2	SYSTEMCONTROL_DCGC2

enum lm3s_clken {
	/*
	 * Run clock control
	 */
	RCC_WD0 = (((uint32_t)&SYSCTL_RCGC0 - SYSCTL_BASE) << 5) | 3,
	RCC_WD1 = (((uint32_t)&SYSCTL_RCGC0 - SYSCTL_BASE) << 5) | 28,

	RCC_TIMER0 = (((uint32_t)&SYSCTL_RCGC1 - SYSCTL_BASE) << 5) | 16,
	RCC_TIMER1,
	RCC_TIMER2,
	RCC_TIMER3,

	RCC_GPIOA = ((uint32_t)&SYSCTL_RCGC2 - SYSCTL_BASE) << 5,
	RCC_GPIOB,
	RCC_GPIOC,
	RCC_GPIOD,
	RCC_GPIOE,

	RCC_DMA = (((uint32_t)&SYSCTL_RCGC2 - SYSCTL_BASE) << 5) | 13,

	RCC_HIB = (((uint32_t)&SYSCTL_RCGC0 - SYSCTL_BASE) << 5) | 6,

	RCC_UART0 = ((uint32_t)&SYSCTL_RCGC1 - SYSCTL_BASE) << 5,
	RCC_UART1,
	RCC_UART2,

	RCC_SSI0 = (((uint32_t)&SYSCTL_RCGC1 - SYSCTL_BASE) << 5) | 4,
	RCC_SSI1,

	RCC_I2C0 = (((uint32_t)&SYSCTL_RCGC1 - SYSCTL_BASE) << 5) | 12,
	RCC_I2C1 = (((uint32_t)&SYSCTL_RCGC1 - SYSCTL_BASE) << 5) | 14,

	RCC_USB0 = (((uint32_t)&SYSCTL_RCGC2 - SYSCTL_BASE) << 5) | 16,

	RCC_CAN0 = (((uint32_t)&SYSCTL_RCGC0 - SYSCTL_BASE) << 5) | 24,

	RCC_ADC0 = (((uint32_t)&SYSCTL_RCGC0 - SYSCTL_BASE) << 5) | 16,
	RCC_ADC1,

	RCC_ACMP0 = (((uint32_t)&SYSCTL_RCGC1 - SYSCTL_BASE) << 5) | 24,
	RCC_ACMP1,

	RCC_PWM0 = (((uint32_t)&SYSCTL_RCGC0 - SYSCTL_BASE) << 5) | 20,

	RCC_QEI0 = (((uint32_t)&SYSCTL_RCGC1 - SYSCTL_BASE) << 5) | 8,


	/*
	 * Sleep clock control
	 */
	SCC_WD0 = (((uint32_t)&SYSCTL_SCGC0 - SYSCTL_BASE) << 5) | 3,
	SCC_WD1 = (((uint32_t)&SYSCTL_SCGC0 - SYSCTL_BASE) << 5) | 28,

	SCC_TIMER0 = (((uint32_t)&SYSCTL_SCGC1 - SYSCTL_BASE) << 5) | 16,
	SCC_TIMER1,
	SCC_TIMER2,
	SCC_TIMER3,

	SCC_GPIOA = ((uint32_t)&SYSCTL_SCGC2 - SYSCTL_BASE) << 5,
	SCC_GPIOB,
	SCC_GPIOC,
	SCC_GPIOD,
	SCC_GPIOE,

	SCC_DMA = (((uint32_t)&SYSCTL_SCGC2 - SYSCTL_BASE) << 5) | 13,

	SCC_HIB = (((uint32_t)&SYSCTL_SCGC0 - SYSCTL_BASE) << 5) | 6,

	SCC_UART0 = ((uint32_t)&SYSCTL_SCGC1 - SYSCTL_BASE) << 5,
	SCC_UART1,
	SCC_UART2,

	SCC_SSI0 = (((uint32_t)&SYSCTL_SCGC1 - SYSCTL_BASE) << 5) | 4,
	SCC_SSI1,

	SCC_I2C0 = (((uint32_t)&SYSCTL_SCGC1 - SYSCTL_BASE) << 5) | 12,
	SCC_I2C1 = (((uint32_t)&SYSCTL_SCGC1 - SYSCTL_BASE) << 5) | 14,

	SCC_USB0 = (((uint32_t)&SYSCTL_SCGC2 - SYSCTL_BASE) << 5) | 16,

	SCC_CAN0 = (((uint32_t)&SYSCTL_SCGC0 - SYSCTL_BASE) << 5) | 24,

	SCC_ADC0 = (((uint32_t)&SYSCTL_SCGC0 - SYSCTL_BASE) << 5) | 16,
	SCC_ADC1,

	SCC_ACMP0 = (((uint32_t)&SYSCTL_SCGC1 - SYSCTL_BASE) << 5) | 24,
	SCC_ACMP1,

	SCC_PWM0 = (((uint32_t)&SYSCTL_SCGC0 - SYSCTL_BASE) << 5) | 20,

	SCC_QEI0 = (((uint32_t)&SYSCTL_SCGC1 - SYSCTL_BASE) << 5) | 8,
	

	/*
	 * Deep-sleep clock control
	 */
	DCC_WD0 = (((uint32_t)&SYSCTL_DCGC0 - SYSCTL_BASE) << 5) | 3,
	DCC_WD1 = (((uint32_t)&SYSCTL_DCGC0 - SYSCTL_BASE) << 5) | 28,

	DCC_TIMER0 = (((uint32_t)&SYSCTL_DCGC1 - SYSCTL_BASE) << 5) | 16,
	DCC_TIMER1,
	DCC_TIMER2,
	DCC_TIMER3,

	DCC_GPIOA = ((uint32_t)&SYSCTL_DCGC2 - SYSCTL_BASE) << 5,
	DCC_GPIOB,
	DCC_GPIOC,
	DCC_GPIOD,
	DCC_GPIOE,

	DCC_DMA = (((uint32_t)&SYSCTL_DCGC2 - SYSCTL_BASE) << 5) | 13,

	DCC_HIB = (((uint32_t)&SYSCTL_DCGC0 - SYSCTL_BASE) << 5) | 6,

	DCC_UART0 = ((uint32_t)&SYSCTL_DCGC1 - SYSCTL_BASE) << 5,
	DCC_UART1,
	DCC_UART2,

	DCC_SSI0 = (((uint32_t)&SYSCTL_DCGC1 - SYSCTL_BASE) << 5) | 4,
	DCC_SSI1,

	DCC_I2C0 = (((uint32_t)&SYSCTL_DCGC1 - SYSCTL_BASE) << 5) | 12,
	DCC_I2C1 = (((uint32_t)&SYSCTL_DCGC1 - SYSCTL_BASE) << 5) | 14,

	DCC_USB0 = (((uint32_t)&SYSCTL_DCGC2 - SYSCTL_BASE) << 5) | 16,

	DCC_CAN0 = (((uint32_t)&SYSCTL_DCGC0 - SYSCTL_BASE) << 5) | 24,

	DCC_ADC0 = (((uint32_t)&SYSCTL_DCGC0 - SYSCTL_BASE) << 5) | 16,
	DCC_ADC1,

	DCC_ACMP0 = (((uint32_t)&SYSCTL_DCGC1 - SYSCTL_BASE) << 5) | 24,
	DCC_ACMP1,

	DCC_PWM0 = (((uint32_t)&SYSCTL_DCGC0 - SYSCTL_BASE) << 5) | 20,

	DCC_QEI0 = (((uint32_t)&SYSCTL_DCGC1 - SYSCTL_BASE) << 5) | 8,
};

/* ============================================================================
 * Function prototypes
 * --------------------------------------------------------------------------*/
BEGIN_DECLS

void periph_clock_enable(enum lm3s_clken periph);
void periph_clock_disable(enum lm3s_clken periph);

END_DECLS

/**@}*/

#endif

