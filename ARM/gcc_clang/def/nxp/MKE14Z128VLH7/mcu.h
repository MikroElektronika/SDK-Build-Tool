/****************************************************************************
**
** Copyright (C) 2025 MikroElektronika d.o.o.
** Contact: https://www.mikroe.com/contact
**
** This file is part of the mikroSDK package
**
** Commercial License Usage
**
** Licensees holding valid commercial NECTO compilers AI licenses may use this
** file in accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The MikroElektronika Company.
** For licensing terms and conditions see
** https://www.mikroe.com/legal/software-license-agreement.
** For further information use the contact form at
** https://www.mikroe.com/contact.
**
**
** GNU Lesser General Public License Usage
**
** Alternatively, this file may be used for
** non-commercial projects under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation: https://www.gnu.org/licenses/lgpl-3.0.html.
**
** The above copyright notice and this permission notice shall be
** included in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
** OF MERCHANTABILITY, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED
** TO THE WARRANTIES FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
** IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
** DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT
** OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE
** OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
**
****************************************************************************/

#ifndef __MKE14Z128VLH7_H__
#define __MKE14Z128VLH7_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   62               // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -61              // Not available device specific interrupt
#define NonMaskableInterrupt_IRQn               -17              // Non-maskable interrupt
#define Reserved_IRQn                           -16              // Reserved
#define Reserved_IRQn                           -15              // Reserved
#define Reserved_IRQn                           -14              // Reserved
#define Reserved_IRQn                           -13              // Reserved
#define Reserved_IRQn                           -12              // Reserved
#define Reserved_IRQn                           -11              // Reserved
#define Reserved_IRQn                           -10              // Reserved
#define Reserved_IRQn                           -9               // Reserved
#define Reserved_IRQn                           -8               // Reserved
#define Reserved_IRQn                           -7               // Reserved
#define Reserved_IRQn                           -6               // Reserved
#define Reserved_IRQn                           -5               // Reserved
#define Reserved_IRQn                           -4               // Reserved
#define Reserved_IRQn                           -3               // Reserved
#define Reserved_IRQn                           -2               // Reserved
#define Reserved_IRQn                           -1               // Reserved
#define DMA0_IRQn                               0                // DMA channel 0 transfer complete
#define DMA1_IRQn                               1                // DMA channel 1 transfer complete
#define DMA2_IRQn                               2                // DMA channel 2 transfer complete
#define DMA3_IRQn                               3                // DMA channel 3 transfer complete
#define DMA4_IRQn                               4                // DMA channel 4 transfer complete
#define DMA5_IRQn                               5                // DMA channel 5 transfer complete
#define DMA6_IRQn                               6                // DMA channel 6 transfer complete
#define DMA7_IRQn                               7                // DMA channel 7 transfer complete
#define DMA_Error_IRQn                          8                // DMA error interrupt
#define MCM_Single_Fault_Interrupt_IRQn         9                // MCM single fault interrupt
#define MCM_Double_Fault_Interrupt_IRQn         10               // MCM double fault interrupt
#define MCM_Stop_Acknowledge_Interrupt_IRQn     11               // MCM stop acknowledge interrupt
#define FTFE_Command_Complete_Interrupt_IRQn    12               // FTFE command complete interrupt
#define CMP0_IRQn                               15               // CMP0 interrupt
#define CMP1_IRQn                               16               // CMP1 interrupt
#define FTM0_IRQn                               17               // FTM0 fault interrupt
#define FTM0_IRQn                               18               // FTM0 combined interrupt
#define FTM1_IRQn                               19               // FTM1 fault interrupt
#define FTM1_IRQn                               20               // FTM1 combined interrupt
#define FTM2_IRQn                               21               // FTM2 fault interrupt
#define FTM2_IRQn                               22               // FTM2 combined interrupt
#define CAN0_ORED_0Red_Message_buffer_IRQn      23               // CAN0 ORed message buffer interrupt
#define CAN0_BUSOFF_Bus_Off_IRQn                24               // CAN0 bus off interrupt
#define CAN0_ERROR_Error_IRQn                   25               // CAN0 error interrupt
#define CAN0_TX_Tx_Warning_IRQn                 26               // CAN0 transmit interrupt
#define CAN0_RX_Rx_Warning_IRQn                 27               // CAN0 receive interrupt
#define CAN0_WAKEUP_Wake_Up_IRQn                28               // CAN0 wake up interrupt
#define I2S0_TransmiT_Interrupt_IRQn            29               // I2S0 transmit interrupt
#define I2S0_Receive_Interrupt_IRQn             30               // I2S0 receive interrupt
#define LPUART0_TransmiT_Interrupt_IRQn         32               // LPUART0 transmit interrupt
#define LPUART0_Receive_Interrupt_IRQn          33               // LPUART0 receive interrupt
#define LPUART1_TransmiT_Interrupt_IRQn         34               // LPUART1 transmit interrupt
#define LPUART1_Receive_Interrupt_IRQn          35               // LPUART1 receive interrupt
#define LPUART2_TransmiT_Interrupt_IRQn         36               // LPUART2 transmit interrupt
#define LPUART2_Receive_Interrupt_IRQn          37               // LPUART2 receive interrupt
#define SPI0_RX_IRQn                            39               // SPI0 receive interrupt
#define SPI0_TX_IRQn                            40               // SPI0 transmit interrupt
#define I2C0_IRQn                               42               // I2C0 interrupt
#define I2C1_IRQn                               43               // I2C1 interrupt
#define CAN1_ORED_0Red_Message_buffer_IRQn      44               // CAN1 ORed message buffer interrupt
#define CAN1_BUSOFF_Bus_Off_IRQn                45               // CAN1 bus off interrupt
#define CAN1_ERROR_Error_IRQn                   46               // CAN1 error interrupt
#define CAN1_TX_Tx_Warning_IRQn                 47               // CAN1 transmit interrupt
#define CAN1_RX_Rx_Warning_IRQn                 48               // CAN1 receive interrupt
#define CAN1_WAKEUP_Wake_Up_IRQn                49               // CAN1 wake up interrupt



//*****************************************************************************
//
// System Integration Module (SIM) registers
//
//*****************************************************************************

#define SIM_CHIPCTL                   (*((volatile uint32_t *)0x40048004))      // Chip Control register (SIM_CHIPCTL)
#define SIM_FTMOPT0                   (*((volatile uint32_t *)0x4004800C))      // FTM Option Register 0 (SIM_FTMOPT0)
#define SIM_ADCOPT                    (*((volatile uint32_t *)0x40048018))      // ADC Options Register (SIM_ADCOPT)
#define SIM_FTMOPT1                   (*((volatile uint32_t *)0x4004801C))      // FTM Option Register 1 (SIM_FTMOPT1)
#define SIM_SDID                      (*((volatile uint32_t *)0x40048024))      // System Device Identification Register (SIM_SDID)
#define SIM_FCFG1                     (*((volatile uint32_t *)0x4004804C))      // Flash Configuration Register 1 (SIM_FCFG1)
#define SIM_FCFG2                     (*((volatile uint32_t *)0x40048050))      // Flash Configuration Register 2 (SIM_FCFG2)
#define SIM_UIDH                      (*((volatile uint32_t *)0x40048054))      // Unique Identification Register High (SIM_UIDH)
#define SIM_UIDMH                     (*((volatile uint32_t *)0x40048058))      // Unique Identification Register Mid-High (SIM_UIDMH)
#define SIM_UIDML                     (*((volatile uint32_t *)0x4004805C))      // Unique Identification Register Mid Low (SIM_UIDML)
#define SIM_UIDL                      (*((volatile uint32_t *)0x40048060))      // Unique Identification Register Low (SIM_UIDL)
#define SIM_MISCTRL                   (*((volatile uint32_t *)0x4004806C))      // Miscellaneous Control register (SIM_MISCTRL)


//*****************************************************************************
//
// Memory-Mapped Divide and Square Root (MMDVSQ) registers
//
//*****************************************************************************

#define MMDVSQ_DEND                   (*((volatile uint32_t *)0xF0004000))      // Dividend Register (MMDVSQ_DEND)
#define MMDVSQ_DSOR                   (*((volatile uint32_t *)0xF0004004))      // Divisor Register (MMDVSQ_DSOR)
#define MMDVSQ_CSR                    (*((volatile uint32_t *)0xF0004008))      // Control/Status Register (MMDVSQ_CSR)
#define MMDVSQ_RES                    (*((volatile uint32_t *)0xF000400C))      // Result Register (MMDVSQ_RES)
#define MMDVSQ_RCND                   (*((volatile uint32_t *)0xF0004010))      // Radicand Register (MMDVSQ_RCND)


//*****************************************************************************
//
// Miscellaneous Control Module (MCM) registers
//
//*****************************************************************************

#define MCM_PLASC                     (*((volatile uint32_t *)0xF0003008))      // Crossbar Switch (AXBS) Slave Configuration
#define MCM_PLAMC                     (*((volatile uint32_t *)0xF000300A))      // Crossbar Switch (AXBS) Master Configuration
#define MCM_PLACR                     (*((volatile uint32_t *)0xF000300C))      // Platform Control Register
#define MCM_CPO                       (*((volatile uint32_t *)0xF0003040))      // Compute Operation Control Register


//*****************************************************************************
//
// Trigger MUX Control (TRGMUX) registers
//
//*****************************************************************************

#define TRGMUX_CTRL0                  (*((volatile uint32_t *)0x40063000))      // TRGMUX_CTRL0
#define TRGMUX_CTRL1                  (*((volatile uint32_t *)0x40063004))      // TRGMUX_CTRL1


//*****************************************************************************
//
// Direct Memory Access Multiplexer (DMAMUX) registers
//
//*****************************************************************************

#define DMAMUX_CHCFG0                 (*((volatile uint32_t *)0x40021000))      // Channel Configuration register
#define DMAMUX_CHCFG1                 (*((volatile uint32_t *)0x40021001))      // Channel Configuration register
#define DMAMUX_CHCFG2                 (*((volatile uint32_t *)0x40021002))      // Channel Configuration register
#define DMAMUX_CHCFG3                 (*((volatile uint32_t *)0x40021003))      // Channel Configuration register
#define DMAMUX_CHCFG4                 (*((volatile uint32_t *)0x40021004))      // Channel Configuration register
#define DMAMUX_CHCFG5                 (*((volatile uint32_t *)0x40021005))      // Channel Configuration register
#define DMAMUX_CHCFG6                 (*((volatile uint32_t *)0x40021006))      // Channel Configuration register
#define DMAMUX_CHCFG7                 (*((volatile uint32_t *)0x40021007))      // Channel Configuration register


//*****************************************************************************
//
// Enhanced Direct Memory Access (eDMA) registers
//
//*****************************************************************************

#define DMA_CR                        (*((volatile uint32_t *)0x40008000))      // Control Register (DMA_CR)
#define DMA_ES                        (*((volatile uint32_t *)0x40008004))      // Error Status Register (DMA_ES)
#define DMA_ERQ                       (*((volatile uint32_t *)0x4000800C))      // Enable Request Register (DMA_ERQ)
#define DMA_EEI                       (*((volatile uint32_t *)0x40008014))      // Enable Error Interrupt Register (DMA_EEI)
#define DMA_CEEI                      (*((volatile uint32_t *)0x40008018))      // Clear Enable Error Interrupt Register (DMA_CEEI)
#define DMA_SEEI                      (*((volatile uint32_t *)0x40008019))      // Set Enable Error Interrupt Register (DMA_SEEI)


//*****************************************************************************
//
// System Clock Generator (SCG) registers
//
//*****************************************************************************

#define SCG_VERID                     (*((volatile uint32_t *)0x40064000))      // Version ID Register (SCG_VERID)
#define SCG_PARAM                     (*((volatile uint32_t *)0x40064004))      // Parameter Register (SCG_PARAM)
#define SCG_CSR                       (*((volatile uint32_t *)0x40064010))      // Clock Status Register (SCG_CSR)
#define SCG_RCCR                      (*((volatile uint32_t *)0x40064014))      // Run Clock Control Register (SCG_RCCR)
#define SCG_VCCR                      (*((volatile uint32_t *)0x40064018))      // VLPR Clock Control Register (SCG_VCCR)
#define SCG_CLKOUTCNFG                (*((volatile uint32_t *)0x40064020))      // SCG CLKOUT Configuration Register (SCG_CLKOUTCNFG)
#define SCG_SOSCCSR                   (*((volatile uint32_t *)0x40064100))      // System OSC Control Status Register (SCG_SOSCCSR)
#define SCG_SOSCDIV                   (*((volatile uint32_t *)0x40064104))      // System OSC Divide Register (SCG_SOSCDIV)
#define SCG_SOSCCFG                   (*((volatile uint32_t *)0x40064108))      // System Oscillator Configuration Register (SCG_SOSCCFG)
#define SCG_SIRCCSR                   (*((volatile uint32_t *)0x40064200))      // Slow IRC Control Status Register (SCG_SIRCCSR)
#define SCG_SIRCDIV                   (*((volatile uint32_t *)0x40064204))      // Slow IRC Divide Register (SCG_SIRCDIV)
#define SCG_SIRCCFG                   (*((volatile uint32_t *)0x40064208))      // Slow IRC Configuration Register (SCG_SIRCCFG)
#define SCG_FIRCCSR                   (*((volatile uint32_t *)0x40064300))      // Fast IRC Control Status Register (SCG_FIRCCSR)
#define SCG_FIRCDIV                   (*((volatile uint32_t *)0x40064304))      // Fast IRC Divide Register (SCG_FIRCDIV)
#define SCG_FIRCCFG                   (*((volatile uint32_t *)0x40064308))      // Fast IRC Configuration Register (SCG_FIRCCFG)
#define SCG_FIRCTCFG                  (*((volatile uint32_t *)0x4006430C))      // Fast IRC Trim Configuration Register (SCG_FIRCTCFG)
#define SCG_FIRCSTAT                  (*((volatile uint32_t *)0x40064318))      // Fast IRC Status Register (SCG_FIRCSTAT)
#define SCG_LPFLLCSR                  (*((volatile uint32_t *)0x40064500))      // Low Power FLL Control Status Register (SCG_LPFLLCSR)
#define SCG_LPFLLDIV                  (*((volatile uint32_t *)0x40064504))      // Low Power FLL Divide Register (SCG_LPFLLDIV)
#define SCG_LPFLLCFG                  (*((volatile uint32_t *)0x40064508))      // Low Power FLL Configuration Register (SCG_LPFLLCFG)
#define SCG_LPFLLTCFG                 (*((volatile uint32_t *)0x4006450C))      // Low Power FLL Trim Configuration Register (SCG_LPFLLTCFG)
#define SCG_LPFLLSTAT                 (*((volatile uint32_t *)0x40064514))      // Low Power FLL Status Register (SCG_LPFLLSTAT)


//*****************************************************************************
//
// RTC Oscillator (OSC32) registers
//
//*****************************************************************************

#define OSC32_CR                      (*((volatile uint32_t *)0x40060000))      // RTC Oscillator Control Register (OSC32_CR)


//*****************************************************************************
//
// Peripheral Clock Controller (PCC) registers
//
//*****************************************************************************

#define PCC_DMA0                      (*((volatile uint32_t *)0x40065020))      // PCC DMA0
#define PCC_FLASH                     (*((volatile uint32_t *)0x40065080))      // PCC FLASH
#define PCC_DMAMUX0                   (*((volatile uint32_t *)0x40065084))      // PCC DMAMUX0
#define PCC_ADC1                      (*((volatile uint32_t *)0x4006509C))      // PCC ADC1
#define PCC_LPSPI0                    (*((volatile uint32_t *)0x400650B0))      // PCC LPSPI0
#define PCC_LPSPI1                    (*((volatile uint32_t *)0x400650B4))      // PCC LPSPI1
#define PCC_CRC                       (*((volatile uint32_t *)0x400650C8))      // PCC CRC
#define PCC_PDB0                      (*((volatile uint32_t *)0x400650D8))      // PCC PDB0
#define PCC_LPIT0                     (*((volatile uint32_t *)0x400650DC))      // PCC LPIT0
#define PCC_FLEXTMR0                  (*((volatile uint32_t *)0x400650E0))      // PCC FLEXTMR0
#define PCC_FLEXTMR1                  (*((volatile uint32_t *)0x400650E4))      // PCC FLEXTMR1
#define PCC_FLEXTMR2                  (*((volatile uint32_t *)0x400650E8))      // PCC FLEXTMR2
#define PCC_ADC0                      (*((volatile uint32_t *)0x400650EC))      // PCC ADC0
#define PCC_RTC                       (*((volatile uint32_t *)0x400650F4))      // PCC RTC
#define PCC_LPTMR0                    (*((volatile uint32_t *)0x40065100))      // PCC LPTMR0
#define PCC_TSI                       (*((volatile uint32_t *)0x40065114))      // PCC TSI
#define PCC_PORTA                     (*((volatile uint32_t *)0x40065124))      // PCC PORTA
#define PCC_PORTB                     (*((volatile uint32_t *)0x40065128))      // PCC PORTB
#define PCC_PORTC                     (*((volatile uint32_t *)0x4006512C))      // PCC PORTC
#define PCC_PORTD                     (*((volatile uint32_t *)0x40065130))      // PCC PORTD
#define PCC_PORTE                     (*((volatile uint32_t *)0x40065134))      // PCC PORTE
#define PCC_PWT                       (*((volatile uint32_t *)0x40065158))      // PCC PWT
#define PCC_FLEXIO                    (*((volatile uint32_t *)0x40065168))      // PCC FLEXIO
#define PCC_OSC32                     (*((volatile uint32_t *)0x40065180))      // PCC OSC32
#define PCC_EWM                       (*((volatile uint32_t *)0x40065184))      // PCC EWM
#define PCC_LPI2C0                    (*((volatile uint32_t *)0x40065198))      // PCC LPI2C0
#define PCC_LPI2C1                    (*((volatile uint32_t *)0x4006519C))      // PCC LPI2C1
#define PCC_LPUART0                   (*((volatile uint32_t *)0x400651A8))      // PCC LPUART0
#define PCC_LPUART1                   (*((volatile uint32_t *)0x400651AC))      // PCC LPUART1
#define PCC_LPUART2                   (*((volatile uint32_t *)0x400651B0))      // PCC LPUART2
#define PCC_CMP0                      (*((volatile uint32_t *)0x400651CC))      // PCC CMP0
#define PCC_CMP1                      (*((volatile uint32_t *)0x400651D0))      // PCC CMP1


//*****************************************************************************
//
// Reset Control Module (RCM) registers
//
//*****************************************************************************

#define RCM_VERID                     (*((volatile uint32_t *)0x4007F000))      // Version ID Register (RCM_VERID)
#define RCM_PARAM                     (*((volatile uint32_t *)0x4007F004))      // Parameter Register (RCM_PARAM)
#define RCM_SRS                       (*((volatile uint32_t *)0x4007F008))      // System Reset Status Register (RCM_SRS)
#define RCM_RPC                       (*((volatile uint32_t *)0x4007F00C))      // Reset Pin Control register (RCM_RPC)
#define RCM_MR                        (*((volatile uint32_t *)0x4007F010))      // Mode Register (RCM_MR)
#define RCM_FM                        (*((volatile uint32_t *)0x4007F014))      // Force Mode Register (RCM_FM)
#define RCM_SSRS                      (*((volatile uint32_t *)0x4007F018))      // Sticky System Reset Status Register (RCM_SSRS)
#define RCM_SRIE                      (*((volatile uint32_t *)0x4007F01C))      // System Reset Interrupt Enable Register (RCM_SRIE)


//*****************************************************************************
//
// System Mode Controller (SMC) registers
//
//*****************************************************************************

#define SMC_VERID                     (*((volatile uint32_t *)0x4007E000))      // SMC Version ID Register (SMC_VERID)
#define SMC_PARAM                     (*((volatile uint32_t *)0x4007E004))      // SMC Parameter Register (SMC_PARAM)
#define SMC_PMPROT                    (*((volatile uint32_t *)0x4007E008))      // Power Mode Protection register (SMC_PMPROT)
#define SMC_PMCTRL                    (*((volatile uint32_t *)0x4007E00C))      // Power Mode Control register (SMC_PMCTRL)
#define SMC_STOPCTRL                  (*((volatile uint32_t *)0x4007E010))      // Stop Control Register (SMC_STOPCTRL)
#define SMC_PMSTAT                    (*((volatile uint32_t *)0x4007E014))      // Power Mode Status register (SMC_PMSTAT)


//*****************************************************************************
//
// Power Management Controller (PMC) registers
//
//*****************************************************************************

#define PMC_LVDSC1                    (*((volatile uint32_t *)0x4007D000))      // Low Voltage Detect Status and Control 1 Register
#define PMC_LVDSC2                    (*((volatile uint32_t *)0x4007D001))      // Low Voltage Detect Status and Control 2 Register
#define PMC_REGSC                     (*((volatile uint32_t *)0x4007D002))      // Regulator Status and Control Register
#define PMC_LPOTRIM                   (*((volatile uint32_t *)0x4007D004))      // Low Power Oscillator Trim Register


//*****************************************************************************
//
// External Watchdog Monitor (EWM) registers
//
//*****************************************************************************

#define EWM_CTRL                      (*((volatile uint32_t *)0x40061000))      // Control Register (EWM_CTRL)
#define EWM_SERV                      (*((volatile uint32_t *)0x40061001))      // Service Register (EWM_SERV)
#define EWM_CMPL                      (*((volatile uint32_t *)0x40061002))      // Compare Low Register (EWM_CMPL)
#define EWM_CMPH                      (*((volatile uint32_t *)0x40061003))      // Compare High Register (EWM_CMPH)
#define EWM_CLKPRESCALER              (*((volatile uint32_t *)0x40061005))      // Clock Prescaler Register (EWM_CLKPRESCALER)


//*****************************************************************************
//
// Watchdog timer (WDOG) registers
//
//*****************************************************************************

#define WDOG_CS                       (*((volatile uint32_t *)0x40052000))      // Watchdog Control and Status Register (WDOG_CS)
#define WDOG_CNT                      (*((volatile uint32_t *)0x40052004))      // Watchdog Counter Register (WDOG_CNT)
#define WDOG_TOVAL                    (*((volatile uint32_t *)0x40052008))      // Watchdog Timeout Value Register (WDOG_TOVAL)
#define WDOG_WIN                      (*((volatile uint32_t *)0x4005200C))      // Watchdog Window Register (WDOG_WIN)


//*****************************************************************************
//
// Cyclic Redundancy Check (CRC) registers
//
//*****************************************************************************

#define CRC_DATA                      (*((volatile uint32_t *)0x40032000))      // CRC Data register
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial register
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control register


//*****************************************************************************
//
// Micro Trace Buffer (MTB) registers
//
//*****************************************************************************

#define MTB_POSITION                  (*((volatile uint32_t *)0xF0000000))      // MTB Position Register (MTB_POSITION)
#define MTB_MASTER                    (*((volatile uint32_t *)0xF0000004))      // MTB Master Register (MTB_MASTER)
#define MTB_FLOW                      (*((volatile uint32_t *)0xF0000008))      // MTB Flow Register (MTB_FLOW)
#define MTB_BASE                      (*((volatile uint32_t *)0xF000000C))      // MTB Base Register (MTB_BASE)
#define MTB_MODECTRL                  (*((volatile uint32_t *)0xF0000F00))      // Integration Mode Control Register (MTB_MODECTRL)
#define MTB_TAGSET                    (*((volatile uint32_t *)0xF0000FA0))      // Claim TAG Set Register (MTB_TAGSET)
#define MTB_TAGCLEAR                  (*((volatile uint32_t *)0xF0000FA4))      // Claim TAG Clear Register (MTB_TAGCLEAR)
#define MTB_LOCKACCESS                (*((volatile uint32_t *)0xF0000FB0))      // Lock Access Register (MTB_LOCKACCESS)
#define MTB_LOCKSTAT                  (*((volatile uint32_t *)0xF0000FB4))      // Lock Status Register (MTB_LOCKSTAT)
#define MTB_AUTHSTAT                  (*((volatile uint32_t *)0xF0000FB8))      // Authentication Status Register (MTB_AUTHSTAT)
#define MTB_DEVICEARCH                (*((volatile uint32_t *)0xF0000FBC))      // Device Architecture Register (MTB_DEVICEARCH)
#define MTB_DEVICECFG                 (*((volatile uint32_t *)0xF0000FC8))      // Device Configuration Register (MTB_DEVICECFG)
#define MTB_DEVICETYPID               (*((volatile uint32_t *)0xF0000FCC))      // Device Type Identifier Register (MTB_DEVICETYPID)
#define MTB_PERIPHID4                 (*((volatile uint32_t *)0xF0000FD0))      // Peripheral ID Register (MTB_PERIPHID4)
#define MTB_PERIPHID5                 (*((volatile uint32_t *)0xF0000FD4))      // Peripheral ID Register (MTB_PERIPHID5)
#define MTB_PERIPHID6                 (*((volatile uint32_t *)0xF0000FD8))      // Peripheral ID Register (MTB_PERIPHID6)
#define MTB_PERIPHID7                 (*((volatile uint32_t *)0xF0000FDC))      // Peripheral ID Register (MTB_PERIPHID7)
#define MTB_PERIPHID0                 (*((volatile uint32_t *)0xF0000FE0))      // Peripheral ID Register (MTB_PERIPHID0)
#define MTB_PERIPHID1                 (*((volatile uint32_t *)0xF0000FE4))      // Peripheral ID Register (MTB_PERIPHID1)
#define MTB_PERIPHID2                 (*((volatile uint32_t *)0xF0000FE8))      // Peripheral ID Register (MTB_PERIPHID2)
#define MTB_PERIPHID3                 (*((volatile uint32_t *)0xF0000FEC))      // Peripheral ID Register (MTB_PERIPHID3)
#define MTB_COMPID0                   (*((volatile uint32_t *)0xF0000FF0))      // Component ID Register (MTB_COMPID0)
#define MTB_COMPID1                   (*((volatile uint32_t *)0xF0000FF4))      // Component ID Register (MTB_COMPID1)
#define MTB_COMPID2                   (*((volatile uint32_t *)0xF0000FF8))      // Component ID Register (MTB_COMPID2)
#define MTB_COMPID3                   (*((volatile uint32_t *)0xF0000FFC))      // Component ID Register (MTB_COMPID3)


//*****************************************************************************
//
// Port Control and Interrupts (PORT) registers
//
//*****************************************************************************

#define PORTA_PCR0                    (*((volatile uint32_t *)0x40049000))      // Pin Control Register n (PORTA_PCR0)
#define PORTA_PCR1                    (*((volatile uint32_t *)0x40049004))      // Pin Control Register n (PORTA_PCR1)
#define PORTA_PCR2                    (*((volatile uint32_t *)0x40049008))      // Pin Control Register n (PORTA_PCR2)
#define PORTA_PCR3                    (*((volatile uint32_t *)0x4004900C))      // Pin Control Register n (PORTA_PCR3)
#define PORTA_PCR4                    (*((volatile uint32_t *)0x40049010))      // Pin Control Register n (PORTA_PCR4)
#define PORTA_PCR5                    (*((volatile uint32_t *)0x40049014))      // Pin Control Register n (PORTA_PCR5)
#define PORTA_PCR6                    (*((volatile uint32_t *)0x40049018))      // Pin Control Register n (PORTA_PCR6)
#define PORTA_PCR7                    (*((volatile uint32_t *)0x4004901C))      // Pin Control Register n (PORTA_PCR7)
#define PORTA_PCR8                    (*((volatile uint32_t *)0x40049020))      // Pin Control Register n (PORTA_PCR8)
#define PORTA_PCR9                    (*((volatile uint32_t *)0x40049024))      // Pin Control Register n (PORTA_PCR9)
#define PORTA_PCR10                   (*((volatile uint32_t *)0x40049028))      // Pin Control Register n (PORTA_PCR10)
#define PORTA_PCR11                   (*((volatile uint32_t *)0x4004902C))      // Pin Control Register n (PORTA_PCR11)
#define PORTA_PCR12                   (*((volatile uint32_t *)0x40049030))      // Pin Control Register n (PORTA_PCR12)
#define PORTA_PCR13                   (*((volatile uint32_t *)0x40049034))      // Pin Control Register n (PORTA_PCR13)
#define PORTA_PCR14                   (*((volatile uint32_t *)0x40049038))      // Pin Control Register n (PORTA_PCR14)
#define PORTA_PCR15                   (*((volatile uint32_t *)0x4004903C))      // Pin Control Register n (PORTA_PCR15)
#define PORTA_PCR16                   (*((volatile uint32_t *)0x40049040))      // Pin Control Register n (PORTA_PCR16)
#define PORTA_PCR17                   (*((volatile uint32_t *)0x40049044))      // Pin Control Register n (PORTA_PCR17)
#define PORTA_PCR18                   (*((volatile uint32_t *)0x40049048))      // Pin Control Register n (PORTA_PCR18)
#define PORTA_PCR19                   (*((volatile uint32_t *)0x4004904C))      // Pin Control Register n (PORTA_PCR19)
#define PORTA_PCR20                   (*((volatile uint32_t *)0x40049050))      // Pin Control Register n (PORTA_PCR20)
#define PORTA_PCR21                   (*((volatile uint32_t *)0x40049054))      // Pin Control Register n (PORTA_PCR21)
#define PORTA_PCR22                   (*((volatile uint32_t *)0x40049058))      // Pin Control Register n (PORTA_PCR22)
#define PORTA_PCR23                   (*((volatile uint32_t *)0x4004905C))      // Pin Control Register n (PORTA_PCR23)
#define PORTA_PCR24                   (*((volatile uint32_t *)0x40049060))      // Pin Control Register n (PORTA_PCR24)
#define PORTA_PCR25                   (*((volatile uint32_t *)0x40049064))      // Pin Control Register n (PORTA_PCR25)
#define PORTA_PCR26                   (*((volatile uint32_t *)0x40049068))      // Pin Control Register n (PORTA_PCR26)
#define PORTA_PCR27                   (*((volatile uint32_t *)0x4004906C))      // Pin Control Register n (PORTA_PCR27)
#define PORTA_PCR28                   (*((volatile uint32_t *)0x40049070))      // Pin Control Register n (PORTA_PCR28)
#define PORTA_PCR29                   (*((volatile uint32_t *)0x40049074))      // Pin Control Register n (PORTA_PCR29)
#define PORTA_PCR30                   (*((volatile uint32_t *)0x40049078))      // Pin Control Register n (PORTA_PCR30)
#define PORTA_PCR31                   (*((volatile uint32_t *)0x4004907C))      // Pin Control Register n (PORTA_PCR31)
#define PORTA_GPCLR                   (*((volatile uint32_t *)0x40049080))      // Global Pin Control Low Register (PORTA_GPCLR)
#define PORTA_GPCHR                   (*((volatile uint32_t *)0x40049084))      // Global Pin Control High Register (PORTA_GPCHR)
#define PORTA_ISFR                    (*((volatile uint32_t *)0x400490A0))      // Interrupt Status Flag Register (PORTA_ISFR)
#define PORTA_DFER                    (*((volatile uint32_t *)0x400490C0))      // Digital Filter Enable Register (PORTA_DFER)
#define PORTA_DFCR                    (*((volatile uint32_t *)0x400490C4))      // Digital Filter Clock Register (PORTA_DFCR)
#define PORTA_DFWR                    (*((volatile uint32_t *)0x400490C8))      // Digital Filter Width Register (PORTA_DFWR)
#define PORTB_PCR0                    (*((volatile uint32_t *)0x4004A000))      // Pin Control Register n (PORTB_PCR0)
#define PORTB_PCR1                    (*((volatile uint32_t *)0x4004A004))      // Pin Control Register n (PORTB_PCR1)
#define PORTB_PCR2                    (*((volatile uint32_t *)0x4004A008))      // Pin Control Register n (PORTB_PCR2)
#define PORTB_PCR3                    (*((volatile uint32_t *)0x4004A00C))      // Pin Control Register n (PORTB_PCR3)
#define PORTB_PCR4                    (*((volatile uint32_t *)0x4004A010))      // Pin Control Register n (PORTB_PCR4)
#define PORTB_PCR5                    (*((volatile uint32_t *)0x4004A014))      // Pin Control Register n (PORTB_PCR5)
#define PORTB_PCR6                    (*((volatile uint32_t *)0x4004A018))      // Pin Control Register n (PORTB_PCR6)
#define PORTB_PCR7                    (*((volatile uint32_t *)0x4004A01C))      // Pin Control Register n (PORTB_PCR7)
#define PORTB_PCR8                    (*((volatile uint32_t *)0x4004A020))      // Pin Control Register n (PORTB_PCR8)
#define PORTB_PCR9                    (*((volatile uint32_t *)0x4004A024))      // Pin Control Register n (PORTB_PCR9)
#define PORTB_PCR10                   (*((volatile uint32_t *)0x4004A028))      // Pin Control Register n (PORTB_PCR10)
#define PORTB_PCR11                   (*((volatile uint32_t *)0x4004A02C))      // Pin Control Register n (PORTB_PCR11)
#define PORTB_PCR12                   (*((volatile uint32_t *)0x4004A030))      // Pin Control Register n (PORTB_PCR12)
#define PORTB_PCR13                   (*((volatile uint32_t *)0x4004A034))      // Pin Control Register n (PORTB_PCR13)
#define PORTB_PCR14                   (*((volatile uint32_t *)0x4004A038))      // Pin Control Register n (PORTB_PCR14)
#define PORTB_PCR15                   (*((volatile uint32_t *)0x4004A03C))      // Pin Control Register n (PORTB_PCR15)
#define PORTB_PCR16                   (*((volatile uint32_t *)0x4004A040))      // Pin Control Register n (PORTB_PCR16)
#define PORTB_PCR17                   (*((volatile uint32_t *)0x4004A044))      // Pin Control Register n (PORTB_PCR17)
#define PORTB_PCR18                   (*((volatile uint32_t *)0x4004A048))      // Pin Control Register n (PORTB_PCR18)
#define PORTB_PCR19                   (*((volatile uint32_t *)0x4004A04C))      // Pin Control Register n (PORTB_PCR19)
#define PORTB_PCR20                   (*((volatile uint32_t *)0x4004A050))      // Pin Control Register n (PORTB_PCR20)
#define PORTB_PCR21                   (*((volatile uint32_t *)0x4004A054))      // Pin Control Register n (PORTB_PCR21)
#define PORTB_PCR22                   (*((volatile uint32_t *)0x4004A058))      // Pin Control Register n (PORTB_PCR22)
#define PORTB_PCR23                   (*((volatile uint32_t *)0x4004A05C))      // Pin Control Register n (PORTB_PCR23)
#define PORTB_PCR24                   (*((volatile uint32_t *)0x4004A060))      // Pin Control Register n (PORTB_PCR24)
#define PORTB_PCR25                   (*((volatile uint32_t *)0x4004A064))      // Pin Control Register n (PORTB_PCR25)
#define PORTB_PCR26                   (*((volatile uint32_t *)0x4004A068))      // Pin Control Register n (PORTB_PCR26)
#define PORTB_PCR27                   (*((volatile uint32_t *)0x4004A06C))      // Pin Control Register n (PORTB_PCR27)
#define PORTB_PCR28                   (*((volatile uint32_t *)0x4004A070))      // Pin Control Register n (PORTB_PCR28)
#define PORTB_PCR29                   (*((volatile uint32_t *)0x4004A074))      // Pin Control Register n (PORTB_PCR29)
#define PORTB_PCR30                   (*((volatile uint32_t *)0x4004A078))      // Pin Control Register n (PORTB_PCR30)
#define PORTB_PCR31                   (*((volatile uint32_t *)0x4004A07C))      // Pin Control Register n (PORTB_PCR31)
#define PORTB_GPCLR                   (*((volatile uint32_t *)0x4004A080))      // Global Pin Control Low Register (PORTB_GPCLR)
#define PORTB_GPCHR                   (*((volatile uint32_t *)0x4004A084))      // Global Pin Control High Register (PORTB_GPCHR)
#define PORTB_ISFR                    (*((volatile uint32_t *)0x4004A0A0))      // Interrupt Status Flag Register (PORTB_ISFR)
#define PORTB_DFER                    (*((volatile uint32_t *)0x4004A0C0))      // Digital Filter Enable Register (PORTB_DFER)
#define PORTB_DFCR                    (*((volatile uint32_t *)0x4004A0C4))      // Digital Filter Clock Register (PORTB_DFCR)
#define PORTB_DFWR                    (*((volatile uint32_t *)0x4004A0C8))      // Digital Filter Width Register (PORTB_DFWR)
#define PORTC_PCR0                    (*((volatile uint32_t *)0x4004B000))      // Pin Control Register n (PORTC_PCR0)
#define PORTC_PCR1                    (*((volatile uint32_t *)0x4004B004))      // Pin Control Register n (PORTC_PCR1)
#define PORTC_PCR2                    (*((volatile uint32_t *)0x4004B008))      // Pin Control Register n (PORTC_PCR2)
#define PORTC_PCR3                    (*((volatile uint32_t *)0x4004B00C))      // Pin Control Register n (PORTC_PCR3)
#define PORTC_PCR4                    (*((volatile uint32_t *)0x4004B010))      // Pin Control Register n (PORTC_PCR4)
#define PORTC_PCR5                    (*((volatile uint32_t *)0x4004B014))      // Pin Control Register n (PORTC_PCR5)
#define PORTC_PCR6                    (*((volatile uint32_t *)0x4004B018))      // Pin Control Register n (PORTC_PCR6)
#define PORTC_PCR7                    (*((volatile uint32_t *)0x4004B01C))      // Pin Control Register n (PORTC_PCR7)
#define PORTC_PCR8                    (*((volatile uint32_t *)0x4004B020))      // Pin Control Register n (PORTC_PCR8)
#define PORTC_PCR9                    (*((volatile uint32_t *)0x4004B024))      // Pin Control Register n (PORTC_PCR9)
#define PORTC_PCR10                   (*((volatile uint32_t *)0x4004B028))      // Pin Control Register n (PORTC_PCR10)
#define PORTC_PCR11                   (*((volatile uint32_t *)0x4004B02C))      // Pin Control Register n (PORTC_PCR11)
#define PORTC_PCR12                   (*((volatile uint32_t *)0x4004B030))      // Pin Control Register n (PORTC_PCR12)
#define PORTC_PCR13                   (*((volatile uint32_t *)0x4004B034))      // Pin Control Register n (PORTC_PCR13)
#define PORTC_PCR14                   (*((volatile uint32_t *)0x4004B038))      // Pin Control Register n (PORTC_PCR14)
#define PORTC_PCR15                   (*((volatile uint32_t *)0x4004B03C))      // Pin Control Register n (PORTC_PCR15)
#define PORTC_PCR16                   (*((volatile uint32_t *)0x4004B040))      // Pin Control Register n (PORTC_PCR16)
#define PORTC_PCR17                   (*((volatile uint32_t *)0x4004B044))      // Pin Control Register n (PORTC_PCR17)
#define PORTC_PCR18                   (*((volatile uint32_t *)0x4004B048))      // Pin Control Register n (PORTC_PCR18)
#define PORTC_PCR19                   (*((volatile uint32_t *)0x4004B04C))      // Pin Control Register n (PORTC_PCR19)
#define PORTC_PCR20                   (*((volatile uint32_t *)0x4004B050))      // Pin Control Register n (PORTC_PCR20)
#define PORTC_PCR21                   (*((volatile uint32_t *)0x4004B054))      // Pin Control Register n (PORTC_PCR21)
#define PORTC_PCR22                   (*((volatile uint32_t *)0x4004B058))      // Pin Control Register n (PORTC_PCR22)
#define PORTC_PCR23                   (*((volatile uint32_t *)0x4004B05C))      // Pin Control Register n (PORTC_PCR23)
#define PORTC_PCR24                   (*((volatile uint32_t *)0x4004B060))      // Pin Control Register n (PORTC_PCR24)
#define PORTC_PCR25                   (*((volatile uint32_t *)0x4004B064))      // Pin Control Register n (PORTC_PCR25)
#define PORTC_PCR26                   (*((volatile uint32_t *)0x4004B068))      // Pin Control Register n (PORTC_PCR26)
#define PORTC_PCR27                   (*((volatile uint32_t *)0x4004B06C))      // Pin Control Register n (PORTC_PCR27)
#define PORTC_PCR28                   (*((volatile uint32_t *)0x4004B070))      // Pin Control Register n (PORTC_PCR28)
#define PORTC_PCR29                   (*((volatile uint32_t *)0x4004B074))      // Pin Control Register n (PORTC_PCR29)
#define PORTC_PCR30                   (*((volatile uint32_t *)0x4004B078))      // Pin Control Register n (PORTC_PCR30)
#define PORTC_PCR31                   (*((volatile uint32_t *)0x4004B07C))      // Pin Control Register n (PORTC_PCR31)
#define PORTC_GPCLR                   (*((volatile uint32_t *)0x4004B080))      // Global Pin Control Low Register (PORTC_GPCLR)
#define PORTC_GPCHR                   (*((volatile uint32_t *)0x4004B084))      // Global Pin Control High Register (PORTC_GPCHR)
#define PORTC_ISFR                    (*((volatile uint32_t *)0x4004B0A0))      // Interrupt Status Flag Register (PORTC_ISFR)
#define PORTC_DFER                    (*((volatile uint32_t *)0x4004B0C0))      // Digital Filter Enable Register (PORTC_DFER)
#define PORTC_DFCR                    (*((volatile uint32_t *)0x4004B0C4))      // Digital Filter Clock Register (PORTC_DFCR)
#define PORTC_DFWR                    (*((volatile uint32_t *)0x4004B0C8))      // Digital Filter Width Register (PORTC_DFWR)
#define PORTD_PCR0                    (*((volatile uint32_t *)0x4004C000))      // Pin Control Register n (PORTD_PCR0)
#define PORTD_PCR1                    (*((volatile uint32_t *)0x4004C004))      // Pin Control Register n (PORTD_PCR1)
#define PORTD_PCR2                    (*((volatile uint32_t *)0x4004C008))      // Pin Control Register n (PORTD_PCR2)
#define PORTD_PCR3                    (*((volatile uint32_t *)0x4004C00C))      // Pin Control Register n (PORTD_PCR3)
#define PORTD_PCR4                    (*((volatile uint32_t *)0x4004C010))      // Pin Control Register n (PORTD_PCR4)
#define PORTD_PCR5                    (*((volatile uint32_t *)0x4004C014))      // Pin Control Register n (PORTD_PCR5)
#define PORTD_PCR6                    (*((volatile uint32_t *)0x4004C018))      // Pin Control Register n (PORTD_PCR6)
#define PORTD_PCR7                    (*((volatile uint32_t *)0x4004C01C))      // Pin Control Register n (PORTD_PCR7)
#define PORTD_PCR8                    (*((volatile uint32_t *)0x4004C020))      // Pin Control Register n (PORTD_PCR8)
#define PORTD_PCR9                    (*((volatile uint32_t *)0x4004C024))      // Pin Control Register n (PORTD_PCR9)
#define PORTD_PCR10                   (*((volatile uint32_t *)0x4004C028))      // Pin Control Register n (PORTD_PCR10)
#define PORTD_PCR11                   (*((volatile uint32_t *)0x4004C02C))      // Pin Control Register n (PORTD_PCR11)
#define PORTD_PCR12                   (*((volatile uint32_t *)0x4004C030))      // Pin Control Register n (PORTD_PCR12)
#define PORTD_PCR13                   (*((volatile uint32_t *)0x4004C034))      // Pin Control Register n (PORTD_PCR13)
#define PORTD_PCR14                   (*((volatile uint32_t *)0x4004C038))      // Pin Control Register n (PORTD_PCR14)
#define PORTD_PCR15                   (*((volatile uint32_t *)0x4004C03C))      // Pin Control Register n (PORTD_PCR15)
#define PORTD_PCR16                   (*((volatile uint32_t *)0x4004C040))      // Pin Control Register n (PORTD_PCR16)
#define PORTD_PCR17                   (*((volatile uint32_t *)0x4004C044))      // Pin Control Register n (PORTD_PCR17)
#define PORTD_PCR18                   (*((volatile uint32_t *)0x4004C048))      // Pin Control Register n (PORTD_PCR18)
#define PORTD_PCR19                   (*((volatile uint32_t *)0x4004C04C))      // Pin Control Register n (PORTD_PCR19)
#define PORTD_PCR20                   (*((volatile uint32_t *)0x4004C050))      // Pin Control Register n (PORTD_PCR20)
#define PORTD_PCR21                   (*((volatile uint32_t *)0x4004C054))      // Pin Control Register n (PORTD_PCR21)
#define PORTD_PCR22                   (*((volatile uint32_t *)0x4004C058))      // Pin Control Register n (PORTD_PCR22)
#define PORTD_PCR23                   (*((volatile uint32_t *)0x4004C05C))      // Pin Control Register n (PORTD_PCR23)
#define PORTD_PCR24                   (*((volatile uint32_t *)0x4004C060))      // Pin Control Register n (PORTD_PCR24)
#define PORTD_PCR25                   (*((volatile uint32_t *)0x4004C064))      // Pin Control Register n (PORTD_PCR25)
#define PORTD_PCR26                   (*((volatile uint32_t *)0x4004C068))      // Pin Control Register n (PORTD_PCR26)
#define PORTD_PCR27                   (*((volatile uint32_t *)0x4004C06C))      // Pin Control Register n (PORTD_PCR27)
#define PORTD_PCR28                   (*((volatile uint32_t *)0x4004C070))      // Pin Control Register n (PORTD_PCR28)
#define PORTD_PCR29                   (*((volatile uint32_t *)0x4004C074))      // Pin Control Register n (PORTD_PCR29)
#define PORTD_PCR30                   (*((volatile uint32_t *)0x4004C078))      // Pin Control Register n (PORTD_PCR30)
#define PORTD_PCR31                   (*((volatile uint32_t *)0x4004C07C))      // Pin Control Register n (PORTD_PCR31)
#define PORTD_GPCLR                   (*((volatile uint32_t *)0x4004C080))      // Global Pin Control Low Register (PORTD_GPCLR)
#define PORTD_GPCHR                   (*((volatile uint32_t *)0x4004C084))      // Global Pin Control High Register (PORTD_GPCHR)
#define PORTD_ISFR                    (*((volatile uint32_t *)0x4004C0A0))      // Interrupt Status Flag Register (PORTD_ISFR)
#define PORTD_DFER                    (*((volatile uint32_t *)0x4004C0C0))      // Digital Filter Enable Register (PORTD_DFER)
#define PORTD_DFCR                    (*((volatile uint32_t *)0x4004C0C4))      // Digital Filter Clock Register (PORTD_DFCR)
#define PORTD_DFWR                    (*((volatile uint32_t *)0x4004C0C8))      // Digital Filter Width Register (PORTD_DFWR)
#define PORTE_PCR0                    (*((volatile uint32_t *)0x4004D000))      // Pin Control Register n (PORTE_PCR0)
#define PORTE_PCR1                    (*((volatile uint32_t *)0x4004D004))      // Pin Control Register n (PORTE_PCR1)
#define PORTE_PCR2                    (*((volatile uint32_t *)0x4004D008))      // Pin Control Register n (PORTE_PCR2)
#define PORTE_PCR3                    (*((volatile uint32_t *)0x4004D00C))      // Pin Control Register n (PORTE_PCR3)
#define PORTE_PCR4                    (*((volatile uint32_t *)0x4004D010))      // Pin Control Register n (PORTE_PCR4)
#define PORTE_PCR5                    (*((volatile uint32_t *)0x4004D014))      // Pin Control Register n (PORTE_PCR5)
#define PORTE_PCR6                    (*((volatile uint32_t *)0x4004D018))      // Pin Control Register n (PORTE_PCR6)
#define PORTE_PCR7                    (*((volatile uint32_t *)0x4004D01C))      // Pin Control Register n (PORTE_PCR7)
#define PORTE_PCR8                    (*((volatile uint32_t *)0x4004D020))      // Pin Control Register n (PORTE_PCR8)
#define PORTE_PCR9                    (*((volatile uint32_t *)0x4004D024))      // Pin Control Register n (PORTE_PCR9)
#define PORTE_PCR10                   (*((volatile uint32_t *)0x4004D028))      // Pin Control Register n (PORTE_PCR10)
#define PORTE_PCR11                   (*((volatile uint32_t *)0x4004D02C))      // Pin Control Register n (PORTE_PCR11)
#define PORTE_PCR12                   (*((volatile uint32_t *)0x4004D030))      // Pin Control Register n (PORTE_PCR12)
#define PORTE_PCR13                   (*((volatile uint32_t *)0x4004D034))      // Pin Control Register n (PORTE_PCR13)
#define PORTE_PCR14                   (*((volatile uint32_t *)0x4004D038))      // Pin Control Register n (PORTE_PCR14)
#define PORTE_PCR15                   (*((volatile uint32_t *)0x4004D03C))      // Pin Control Register n (PORTE_PCR15)
#define PORTE_PCR16                   (*((volatile uint32_t *)0x4004D040))      // Pin Control Register n (PORTE_PCR16)
#define PORTE_PCR17                   (*((volatile uint32_t *)0x4004D044))      // Pin Control Register n (PORTE_PCR17)
#define PORTE_PCR18                   (*((volatile uint32_t *)0x4004D048))      // Pin Control Register n (PORTE_PCR18)
#define PORTE_PCR19                   (*((volatile uint32_t *)0x4004D04C))      // Pin Control Register n (PORTE_PCR19)
#define PORTE_PCR20                   (*((volatile uint32_t *)0x4004D050))      // Pin Control Register n (PORTE_PCR20)
#define PORTE_PCR21                   (*((volatile uint32_t *)0x4004D054))      // Pin Control Register n (PORTE_PCR21)
#define PORTE_PCR22                   (*((volatile uint32_t *)0x4004D058))      // Pin Control Register n (PORTE_PCR22)


//*****************************************************************************
//
// General-Purpose Input/Output (GPIO) registers
//
//*****************************************************************************

#define GPIOA_PDOR                    (*((volatile uint32_t *)0x400FF000))      // Port Data Output Register (GPIOA_PDOR)
#define GPIOA_PSOR                    (*((volatile uint32_t *)0x400FF004))      // Port Set Output Register (GPIOA_PSOR)
#define GPIOA_PCOR                    (*((volatile uint32_t *)0x400FF008))      // Port Clear Output Register (GPIOA_PCOR)
#define GPIOA_PTOR                    (*((volatile uint32_t *)0x400FF00C))      // Port Toggle Output Register (GPIOA_PTOR)
#define GPIOA_PDIR                    (*((volatile uint32_t *)0x400FF010))      // Port Data Input Register (GPIOA_PDIR)
#define GPIOA_PDDR                    (*((volatile uint32_t *)0x400FF014))      // Port Data Direction Register (GPIOA_PDDR)
#define GPIOB_PDOR                    (*((volatile uint32_t *)0x400FF040))      // Port Data Output Register (GPIOB_PDOR)
#define GPIOB_PSOR                    (*((volatile uint32_t *)0x400FF044))      // Port Set Output Register (GPIOB_PSOR)
#define GPIOB_PCOR                    (*((volatile uint32_t *)0x400FF048))      // Port Clear Output Register (GPIOB_PCOR)
#define GPIOB_PTOR                    (*((volatile uint32_t *)0x400FF04C))      // Port Toggle Output Register (GPIOB_PTOR)
#define GPIOB_PDIR                    (*((volatile uint32_t *)0x400FF050))      // Port Data Input Register (GPIOB_PDIR)
#define GPIOB_PDDR                    (*((volatile uint32_t *)0x400FF054))      // Port Data Direction Register (GPIOB_PDDR)
#define GPIOC_PDOR                    (*((volatile uint32_t *)0x400FF080))      // Port Data Output Register (GPIOC_PDOR)
#define GPIOC_PSOR                    (*((volatile uint32_t *)0x400FF084))      // Port Set Output Register (GPIOC_PSOR)
#define GPIOC_PCOR                    (*((volatile uint32_t *)0x400FF088))      // Port Clear Output Register (GPIOC_PCOR)
#define GPIOC_PTOR                    (*((volatile uint32_t *)0x400FF08C))      // Port Toggle Output Register (GPIOC_PTOR)
#define GPIOC_PDIR                    (*((volatile uint32_t *)0x400FF090))      // Port Data Input Register (GPIOC_PDIR)
#define GPIOC_PDDR                    (*((volatile uint32_t *)0x400FF094))      // Port Data Direction Register (GPIOC_PDDR)
#define GPIOD_PDOR                    (*((volatile uint32_t *)0x400FF0C0))      // Port Data Output Register (GPIOD_PDOR)
#define GPIOD_PSOR                    (*((volatile uint32_t *)0x400FF0C4))      // Port Set Output Register (GPIOD_PSOR)
#define GPIOD_PCOR                    (*((volatile uint32_t *)0x400FF0C8))      // Port Clear Output Register (GPIOD_PCOR)
#define GPIOD_PTOR                    (*((volatile uint32_t *)0x400FF0CC))      // Port Toggle Output Register (GPIOD_PTOR)
#define GPIOD_PDIR                    (*((volatile uint32_t *)0x400FF0D0))      // Port Data Input Register (GPIOD_PDIR)
#define GPIOD_PDDR                    (*((volatile uint32_t *)0x400FF0D4))      // Port Data Direction Register (GPIOD_PDDR)
#define GPIOE_PDOR                    (*((volatile uint32_t *)0x400FF100))      // Port Data Output Register (GPIOE_PDOR)
#define GPIOE_PSOR                    (*((volatile uint32_t *)0x400FF104))      // Port Set Output Register (GPIOE_PSOR)
#define GPIOE_PCOR                    (*((volatile uint32_t *)0x400FF108))      // Port Clear Output Register (GPIOE_PCOR)
#define GPIOE_PTOR                    (*((volatile uint32_t *)0x400FF10C))      // Port Toggle Output Register (GPIOE_PTOR)
#define GPIOE_PDIR                    (*((volatile uint32_t *)0x400FF110))      // Port Data Input Register (GPIOE_PDIR)
#define GPIOE_PDDR                    (*((volatile uint32_t *)0x400FF114))      // Port Data Direction Register (GPIOE_PDDR)


//*****************************************************************************
//
// Analog-to-Digital Converter (ADC) registers
//
//*****************************************************************************

#define ADC1_SC1A                     (*((volatile uint32_t *)0x40027000))      // ADC Status and Control Register 1 (ADC1_SC1A)
#define ADC1_SC1B                     (*((volatile uint32_t *)0x40027004))      // ADC Status and Control Register 1 (ADC1_SC1B)
#define ADC1_CFG1                     (*((volatile uint32_t *)0x40027040))      // ADC Configuration Register 1 (ADC1_CFG1)
#define ADC1_CFG2                     (*((volatile uint32_t *)0x40027044))      // ADC Configuration Register 2 (ADC1_CFG2)
#define ADC1_RA                       (*((volatile uint32_t *)0x40027048))      // ADC Data Result Registers (ADC1_RA)
#define ADC1_RB                       (*((volatile uint32_t *)0x4002704C))      // ADC Data Result Registers (ADC1_RB)
#define ADC1_CV1                      (*((volatile uint32_t *)0x40027088))      // Compare Value Registers (ADC1_CV1)
#define ADC1_CV2                      (*((volatile uint32_t *)0x4002708C))      // Compare Value Registers (ADC1_CV2)
#define ADC1_SC2                      (*((volatile uint32_t *)0x40027090))      // Status and Control Register 2 (ADC1_SC2)
#define ADC1_SC3                      (*((volatile uint32_t *)0x40027094))      // Status and Control Register 3 (ADC1_SC3)
#define ADC1_BASE_OFS                 (*((volatile uint32_t *)0x40027098))      // BASE Offset Register (ADC1_BASE_OFS)
#define ADC1_OFS                      (*((volatile uint32_t *)0x4002709C))      // ADC Offset Correction Register (ADC1_OFS)
#define ADC1_USR_OFS                  (*((volatile uint32_t *)0x400270A0))      // USER Offset Correction Register (ADC1_USR_OFS)
#define ADC1_XOFS                     (*((volatile uint32_t *)0x400270A4))      // ADC X Offset Correction Register (ADC1_XOFS)
#define ADC1_YOFS                     (*((volatile uint32_t *)0x400270A8))      // ADC Y Offset Correction Register (ADC1_YOFS)
#define ADC1_G                        (*((volatile uint32_t *)0x400270AC))      // ADC Gain Register (ADC1_G)
#define ADC1_UG                       (*((volatile uint32_t *)0x400270B0))      // ADC User Gain Register (ADC1_UG)
#define ADC1_CLPS                     (*((volatile uint32_t *)0x400270B4))      // ADC General Calibration Value Register S (ADC1_CLPS)
#define ADC1_CLP3                     (*((volatile uint32_t *)0x400270B8))      // ADC Plus-Side General Calibration Value Register 3 (ADC1_CLP3)
#define ADC1_CLP2                     (*((volatile uint32_t *)0x400270BC))      // ADC Plus-Side General Calibration Value Register 2 (ADC1_CLP2)
#define ADC1_CLP1                     (*((volatile uint32_t *)0x400270C0))      // ADC Plus-Side General Calibration Value Register 1 (ADC1_CLP1)
#define ADC1_CLP0                     (*((volatile uint32_t *)0x400270C4))      // ADC Plus-Side General Calibration Value Register 0 (ADC1_CLP0)
#define ADC1_CLPX                     (*((volatile uint32_t *)0x400270C8))      // ADC Plus-Side General Calibration Value Register X (ADC1_CLPX)
#define ADC1_CLP9                     (*((volatile uint32_t *)0x400270CC))      // ADC Plus-Side General Calibration Value Register 9 (ADC1_CLP9)
#define ADC1_CLPS_OFS                 (*((volatile uint32_t *)0x400270D0))      // ADC General Calibration Offset Value Register S (ADC1_CLPS_OFS)
#define ADC1_CLP3_OFS                 (*((volatile uint32_t *)0x400270D4))      // ADC Plus-Side General Calibration Offset Value Register 3 (ADC1_CLP3_OFS)
#define ADC1_CLP2_OFS                 (*((volatile uint32_t *)0x400270D8))      // ADC Plus-Side General Calibration Offset Value Register 2 (ADC1_CLP2_OFS)
#define ADC1_CLP1_OFS                 (*((volatile uint32_t *)0x400270DC))      // ADC Plus-Side General Calibration Offset Value Register 1 (ADC1_CLP1_OFS)
#define ADC1_CLP0_OFS                 (*((volatile uint32_t *)0x400270E0))      // ADC Plus-Side General Calibration Offset Value Register 0 (ADC1_CLP0_OFS)
#define ADC1_CLPX_OFS                 (*((volatile uint32_t *)0x400270E4))      // ADC Plus-Side General Calibration Offset Value Register X (ADC1_CLPX_OFS)
#define ADC1_CLP9_OFS                 (*((volatile uint32_t *)0x400270E8))      // ADC Plus-Side General Calibration Offset Value Register 9 (ADC1_CLP9_OFS)
#define ADC0_SC1A                     (*((volatile uint32_t *)0x4003B000))      // ADC Status and Control Register 1 (ADC0_SC1A)
#define ADC0_SC1B                     (*((volatile uint32_t *)0x4003B004))      // ADC Status and Control Register 1 (ADC0_SC1B)
#define ADC0_CFG1                     (*((volatile uint32_t *)0x4003B040))      // ADC Configuration Register 1 (ADC0_CFG1)
#define ADC0_CFG2                     (*((volatile uint32_t *)0x4003B044))      // ADC Configuration Register 2 (ADC0_CFG2)
#define ADC0_RA                       (*((volatile uint32_t *)0x4003B048))      // ADC Data Result Registers (ADC0_RA)
#define ADC0_RB                       (*((volatile uint32_t *)0x4003B04C))      // ADC Data Result Registers (ADC0_RB)
#define ADC0_CV1                      (*((volatile uint32_t *)0x4003B088))      // Compare Value Registers (ADC0_CV1)
#define ADC0_CV2                      (*((volatile uint32_t *)0x4003B08C))      // Compare Value Registers (ADC0_CV2)
#define ADC0_SC2                      (*((volatile uint32_t *)0x4003B090))      // Status and Control Register 2 (ADC0_SC2)
#define ADC0_SC3                      (*((volatile uint32_t *)0x4003B094))      // Status and Control Register 3 (ADC0_SC3)
#define ADC0_BASE_OFS                 (*((volatile uint32_t *)0x4003B098))      // BASE Offset Register (ADC0_BASE_OFS)
#define ADC0_OFS                      (*((volatile uint32_t *)0x4003B09C))      // ADC Offset Correction Register (ADC0_OFS)
#define ADC0_USR_OFS                  (*((volatile uint32_t *)0x4003B0A0))      // USER Offset Correction Register (ADC0_USR_OFS)
#define ADC0_XOFS                     (*((volatile uint32_t *)0x4003B0A4))      // ADC X Offset Correction Register (ADC0_XOFS)
#define ADC0_YOFS                     (*((volatile uint32_t *)0x4003B0A8))      // ADC Y Offset Correction Register (ADC0_YOFS)
#define ADC0_G                        (*((volatile uint32_t *)0x4003B0AC))      // ADC Gain Register (ADC0_G)
#define ADC0_UG                       (*((volatile uint32_t *)0x4003B0B0))      // ADC User Gain Register (ADC0_UG)
#define ADC0_CLPS                     (*((volatile uint32_t *)0x4003B0B4))      // ADC General Calibration Value Register S (ADC0_CLPS)
#define ADC0_CLP3                     (*((volatile uint32_t *)0x4003B0B8))      // ADC Plus-Side General Calibration Value Register 3 (ADC0_CLP3)
#define ADC0_CLP2                     (*((volatile uint32_t *)0x4003B0BC))      // ADC Plus-Side General Calibration Value Register 2 (ADC0_CLP2)
#define ADC0_CLP1                     (*((volatile uint32_t *)0x4003B0C0))      // ADC Plus-Side General Calibration Value Register 1 (ADC0_CLP1)
#define ADC0_CLP0                     (*((volatile uint32_t *)0x4003B0C4))      // ADC Plus-Side General Calibration Value Register 0 (ADC0_CLP0)
#define ADC0_CLPX                     (*((volatile uint32_t *)0x4003B0C8))      // ADC Plus-Side General Calibration Value Register X (ADC0_CLPX)
#define ADC0_CLP9                     (*((volatile uint32_t *)0x4003B0CC))      // ADC Plus-Side General Calibration Value Register 9 (ADC0_CLP9)
#define ADC0_CLPS_OFS                 (*((volatile uint32_t *)0x4003B0D0))      // ADC General Calibration Offset Value Register S (ADC0_CLPS_OFS)
#define ADC0_CLP3_OFS                 (*((volatile uint32_t *)0x4003B0D4))      // ADC Plus-Side General Calibration Offset Value Register 3 (ADC0_CLP3_OFS)
#define ADC0_CLP2_OFS                 (*((volatile uint32_t *)0x4003B0D8))      // ADC Plus-Side General Calibration Offset Value Register 2 (ADC0_CLP2_OFS)
#define ADC0_CLP1_OFS                 (*((volatile uint32_t *)0x4003B0DC))      // ADC Plus-Side General Calibration Offset Value Register 1 (ADC0_CLP1_OFS)
#define ADC0_CLP0_OFS                 (*((volatile uint32_t *)0x4003B0E0))      // ADC Plus-Side General Calibration Offset Value Register 0 (ADC0_CLP0_OFS)
#define ADC0_CLPX_OFS                 (*((volatile uint32_t *)0x4003B0E4))      // ADC Plus-Side General Calibration Offset Value Register X (ADC0_CLPX_OFS)
#define ADC0_CLP9_OFS                 (*((volatile uint32_t *)0x4003B0E8))      // ADC Plus-Side General Calibration Offset Value Register 9 (ADC0_CLP9_OFS)


//*****************************************************************************
//
// Comparator (CMP) registers
//
//*****************************************************************************

#define CMP0_C0                       (*((volatile uint32_t *)0x40073000))      // CMP Control Register 0 (CMP0_C0)
#define CMP0_C1                       (*((volatile uint32_t *)0x40073004))      // CMP Control Register 1 (CMP0_C1)
#define CMP0_C2                       (*((volatile uint32_t *)0x40073008))      // CMP Control Register 2 (CMP0_C2)
#define CMP1_C0                       (*((volatile uint32_t *)0x40074000))      // CMP Control Register 0 (CMP1_C0)
#define CMP1_C1                       (*((volatile uint32_t *)0x40074004))      // CMP Control Register 1 (CMP1_C1)
#define CMP1_C2                       (*((volatile uint32_t *)0x40074008))      // CMP Control Register 2 (CMP1_C2)


//*****************************************************************************
//
// Programmable Delay Block (PDB) registers
//
//*****************************************************************************

#define PDB0_SC                       (*((volatile uint32_t *)0x40036000))      // Status and Control register (PDB0_SC)
#define PDB0_MOD                      (*((volatile uint32_t *)0x40036004))      // Modulus register (PDB0_MOD)
#define PDB0_CNT                      (*((volatile uint32_t *)0x40036008))      // Counter register (PDB0_CNT)
#define PDB0_IDLY                     (*((volatile uint32_t *)0x4003600C))      // Interrupt Delay register (PDB0_IDLY)
#define PDB0_CH0C1                    (*((volatile uint32_t *)0x40036010))      // Channel n Control register 1 (PDB0_CH0C1)
#define PDB0_CH0S                     (*((volatile uint32_t *)0x40036014))      // Channel n Status register (PDB0_CH0S)
#define PDB0_CH0DLY0                  (*((volatile uint32_t *)0x40036018))      // Channel n Delay 0 register (PDB0_CH0DLY0)
#define PDB0_CH0DLY1                  (*((volatile uint32_t *)0x4003601C))      // Channel n Delay 1 register (PDB0_CH0DLY1)
#define PDB0_CH1C1                    (*((volatile uint32_t *)0x40036038))      // Channel n Control register 1 (PDB0_CH1C1)
#define PDB0_CH1S                     (*((volatile uint32_t *)0x4003603C))      // Channel n Status register (PDB0_CH1S)
#define PDB0_CH1DLY0                  (*((volatile uint32_t *)0x40036040))      // Channel n Delay 0 register (PDB0_CH1DLY0)
#define PDB0_CH1DLY1                  (*((volatile uint32_t *)0x40036044))      // Channel n Delay 1 register (PDB0_CH1DLY1)
#define PDB0_POEN                     (*((volatile uint32_t *)0x40036190))      // Pulse-Out n Enable register (PDB0_POEN)
#define PDB0_PO0DLY                   (*((volatile uint32_t *)0x40036194))      // Pulse-Out n Delay register (PDB0_PO0DLY)
#define PDB0_PO1DLY                   (*((volatile uint32_t *)0x40036198))      // Pulse-Out n Delay register (PDB0_PO1DLY)


//*****************************************************************************
//
// FlexTimer Module (FTM) registers
//
//*****************************************************************************

#define FTM0_SC                       (*((volatile uint32_t *)0x40038000))      // Status And Control
#define FTM0_CNT                      (*((volatile uint32_t *)0x40038004))      // Counter
#define FTM0_MOD                      (*((volatile uint32_t *)0x40038008))      // Modulo
#define FTM0_C0SC                     (*((volatile uint32_t *)0x4003800C))      // Channel (n) Status And Control
#define FTM0_C0V                      (*((volatile uint32_t *)0x40038010))      // Channel (n) Value
#define FTM0_C1SC                     (*((volatile uint32_t *)0x40038014))      // Channel (n) Status And Control
#define FTM0_C1V                      (*((volatile uint32_t *)0x40038018))      // Channel (n) Value
#define FTM0_C2SC                     (*((volatile uint32_t *)0x4003801C))      // Channel (n) Status And Control
#define FTM0_C2V                      (*((volatile uint32_t *)0x40038020))      // Channel (n) Value
#define FTM0_C3SC                     (*((volatile uint32_t *)0x40038024))      // Channel (n) Status And Control
#define FTM0_C3V                      (*((volatile uint32_t *)0x40038028))      // Channel (n) Value
#define FTM0_C4SC                     (*((volatile uint32_t *)0x4003802C))      // Channel (n) Status And Control
#define FTM0_C4V                      (*((volatile uint32_t *)0x40038030))      // Channel (n) Value
#define FTM0_C5SC                     (*((volatile uint32_t *)0x40038034))      // Channel (n) Status And Control
#define FTM0_C5V                      (*((volatile uint32_t *)0x40038038))      // Channel (n) Value
#define FTM0_C6SC                     (*((volatile uint32_t *)0x4003803C))      // Channel (n) Status And Control
#define FTM0_C6V                      (*((volatile uint32_t *)0x40038040))      // Channel (n) Value
#define FTM0_C7SC                     (*((volatile uint32_t *)0x40038044))      // Channel (n) Status And Control
#define FTM0_C7V                      (*((volatile uint32_t *)0x40038048))      // Channel (n) Value


//*****************************************************************************
//
// Low-power Periodic Interrupt Timer (LPIT) registers
//
//*****************************************************************************

#define LPIT0_VERID                   (*((volatile uint32_t *)0x40037000))      // Version ID Register
#define LPIT0_PARAM                   (*((volatile uint32_t *)0x40037004))      // Parameter Register
#define LPIT0_MCR                     (*((volatile uint32_t *)0x40037008))      // Module Control Register
#define LPIT0_MSR                     (*((volatile uint32_t *)0x4003700C))      // Module Status Register
#define LPIT0_MIER                    (*((volatile uint32_t *)0x40037010))      // Module Interrupt Enable Register
#define LPIT0_SETTEN                  (*((volatile uint32_t *)0x40037014))      // Set Timer Enable Register
#define LPIT0_CLRTEN                  (*((volatile uint32_t *)0x40037018))      // Clear Timer Enable Register
#define LPIT0_TVAL0                   (*((volatile uint32_t *)0x40037020))      // Timer Value Register
#define LPIT0_CVAL0                   (*((volatile uint32_t *)0x40037024))      // Current Timer Value
#define LPIT0_TCTRL0                  (*((volatile uint32_t *)0x40037028))      // Timer Control Register
#define LPIT0_TVAL1                   (*((volatile uint32_t *)0x40037030))      // Timer Value Register
#define LPIT0_CVAL1                   (*((volatile uint32_t *)0x40037034))      // Current Timer Value
#define LPIT0_TCTRL1                  (*((volatile uint32_t *)0x40037038))      // Timer Control Register
#define LPIT0_TVAL2                   (*((volatile uint32_t *)0x40037040))      // Timer Value Register
#define LPIT0_CVAL2                   (*((volatile uint32_t *)0x40037044))      // Current Timer Value
#define LPIT0_TCTRL2                  (*((volatile uint32_t *)0x40037048))      // Timer Control Register
#define LPIT0_TVAL3                   (*((volatile uint32_t *)0x40037050))      // Timer Value Register
#define LPIT0_CVAL3                   (*((volatile uint32_t *)0x40037054))      // Current Timer Value
#define LPIT0_TCTRL3                  (*((volatile uint32_t *)0x40037058))      // Timer Control Register


//*****************************************************************************
//
// Pulse Width Timer (PWT) registers
//
//*****************************************************************************

#define PWT_CS                        (*((volatile uint32_t *)0x40056000))      // Pulse Width Timer Control and Status Register
#define PWT_CR                        (*((volatile uint32_t *)0x40056001))      // Pulse Width Timer Control Register
#define PWT_PPH                       (*((volatile uint32_t *)0x40056002))      // Pulse Width Timer Positive Pulse Width Register: High
#define PWT_PPL                       (*((volatile uint32_t *)0x40056003))      // Pulse Width Timer Positive Pulse Width Register: Low
#define PWT_NPH                       (*((volatile uint32_t *)0x40056004))      // Pulse Width Timer Negative Pulse Width Register: High
#define PWT_NPL                       (*((volatile uint32_t *)0x40056005))      // Pulse Width Timer Negative Pulse Width Register: Low
#define PWT_CNTH                      (*((volatile uint32_t *)0x40056006))      // Pulse Width Timer Counter Register: High
#define PWT_CNTL                      (*((volatile uint32_t *)0x40056007))      // Pulse Width Timer Counter Register: Low


//*****************************************************************************
//
// Low Power Timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register (LPTMR0_CSR)
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register (LPTMR0_PSR)
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register (LPTMR0_CMR)
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register (LPTMR0_CNR)


//*****************************************************************************
//
// Real Time Clock (SRTC) registers
//
//*****************************************************************************

#define RTC_TSR                       (*((volatile uint32_t *)0x4003D000))      // RTC Time Seconds Register
#define RTC_TPR                       (*((volatile uint32_t *)0x4003D004))      // RTC Time Prescaler Register
#define RTC_TAR                       (*((volatile uint32_t *)0x4003D008))      // RTC Time Alarm Register
#define RTC_TCR                       (*((volatile uint32_t *)0x4003D00C))      // RTC Time Compensation Register
#define RTC_CR                        (*((volatile uint32_t *)0x4003D010))      // RTC Control Register
#define RTC_SR                        (*((volatile uint32_t *)0x4003D014))      // RTC Status Register
#define RTC_LR                        (*((volatile uint32_t *)0x4003D018))      // RTC Lock Register
#define RTC_IER                       (*((volatile uint32_t *)0x4003D01C))      // RTC Interrupt Enable Register
#define RTC_WAR                       (*((volatile uint32_t *)0x4003D800))      // RTC Write Access Register
#define RTC_RAR                       (*((volatile uint32_t *)0x4003D804))      // RTC Read Access Register


//*****************************************************************************
//
// Low Power Serial Peripheral Interface (LPSPI) registers
//
//*****************************************************************************

#define LPSPI0_VERID                  (*((volatile uint32_t *)0x4002C000))      // Version ID Register
#define LPSPI0_PARAM                  (*((volatile uint32_t *)0x4002C004))      // Parameter Register
#define LPSPI0_CR                     (*((volatile uint32_t *)0x4002C010))      // Control Register
#define LPSPI0_SR                     (*((volatile uint32_t *)0x4002C014))      // Status Register
#define LPSPI0_IER                    (*((volatile uint32_t *)0x4002C018))      // Interrupt Enable Register
#define LPSPI0_DER                    (*((volatile uint32_t *)0x4002C01C))      // DMA Enable Register
#define LPSPI0_CFGR0                  (*((volatile uint32_t *)0x4002C020))      // Configuration Register 0
#define LPSPI0_CFGR1                  (*((volatile uint32_t *)0x4002C024))      // Configuration Register 1
#define LPSPI0_DMR0                   (*((volatile uint32_t *)0x4002C030))      // Data Match Register 0
#define LPSPI0_DMR1                   (*((volatile uint32_t *)0x4002C034))      // Data Match Register 1
#define LPSPI0_CCR                    (*((volatile uint32_t *)0x4002C040))      // Clock Configuration Register
#define LPSPI0_FCR                    (*((volatile uint32_t *)0x4002C058))      // FIFO Control Register
#define LPSPI0_FSR                    (*((volatile uint32_t *)0x4002C05C))      // FIFO Status Register
#define LPSPI0_TCR                    (*((volatile uint32_t *)0x4002C060))      // Transmit Command Register
#define LPSPI0_TDR                    (*((volatile uint32_t *)0x4002C064))      // Transmit Data Register
#define LPSPI0_RSR                    (*((volatile uint32_t *)0x4002C070))      // Receive Status Register
#define LPSPI0_RDR                    (*((volatile uint32_t *)0x4002C074))      // Receive Data Register
#define LPSPI1_VERID                  (*((volatile uint32_t *)0x4002D000))      // Version ID Register
#define LPSPI1_PARAM                  (*((volatile uint32_t *)0x4002D004))      // Parameter Register
#define LPSPI1_CR                     (*((volatile uint32_t *)0x4002D010))      // Control Register
#define LPSPI1_SR                     (*((volatile uint32_t *)0x4002D014))      // Status Register
#define LPSPI1_IER                    (*((volatile uint32_t *)0x4002D018))      // Interrupt Enable Register
#define LPSPI1_DER                    (*((volatile uint32_t *)0x4002D01C))      // DMA Enable Register
#define LPSPI1_CFGR0                  (*((volatile uint32_t *)0x4002D020))      // Configuration Register 0
#define LPSPI1_CFGR1                  (*((volatile uint32_t *)0x4002D024))      // Configuration Register 1
#define LPSPI1_DMR0                   (*((volatile uint32_t *)0x4002D030))      // Data Match Register 0
#define LPSPI1_DMR1                   (*((volatile uint32_t *)0x4002D034))      // Data Match Register 1
#define LPSPI1_CCR                    (*((volatile uint32_t *)0x4002D040))      // Clock Configuration Register
#define LPSPI1_FCR                    (*((volatile uint32_t *)0x4002D058))      // FIFO Control Register
#define LPSPI1_FSR                    (*((volatile uint32_t *)0x4002D05C))      // FIFO Status Register
#define LPSPI1_TCR                    (*((volatile uint32_t *)0x4002D060))      // Transmit Command Register
#define LPSPI1_TDR                    (*((volatile uint32_t *)0x4002D064))      // Transmit Data Register
#define LPSPI1_RSR                    (*((volatile uint32_t *)0x4002D070))      // Receive Status Register
#define LPSPI1_RDR                    (*((volatile uint32_t *)0x4002D074))      // Receive Data Register


//*****************************************************************************
//
// Low Power Inter-Integrated Circuit (LPI2C) registers
//
//*****************************************************************************

#define LPI2C0_VERID                  (*((volatile uint32_t *)0x40066000))      // Version ID Register
#define LPI2C0_PARAM                  (*((volatile uint32_t *)0x40066004))      // Parameter Register
#define LPI2C0_MCR                    (*((volatile uint32_t *)0x40066010))      // Master Control Register
#define LPI2C0_MSR                    (*((volatile uint32_t *)0x40066014))      // Master Status Register
#define LPI2C0_MIER                   (*((volatile uint32_t *)0x40066018))      // Master Interrupt Enable Register
#define LPI2C0_MDER                   (*((volatile uint32_t *)0x4006601C))      // Master DMA Enable Register
#define LPI2C0_MCFGR0                 (*((volatile uint32_t *)0x40066020))      // Master Configuration Register 0
#define LPI2C0_MCFGR1                 (*((volatile uint32_t *)0x40066024))      // Master Configuration Register 1
#define LPI2C0_MCFGR2                 (*((volatile uint32_t *)0x40066028))      // Master Configuration Register 2
#define LPI2C0_MCFGR3                 (*((volatile uint32_t *)0x4006602C))      // Master Configuration Register 3
#define LPI2C0_MDMR                   (*((volatile uint32_t *)0x40066040))      // Master Data Match Register
#define LPI2C0_MCCR0                  (*((volatile uint32_t *)0x40066048))      // Master Clock Configuration Register 0
#define LPI2C0_MCCR1                  (*((volatile uint32_t *)0x40066050))      // Master Clock Configuration Register 1
#define LPI2C0_MFCR                   (*((volatile uint32_t *)0x40066058))      // Master FIFO Control Register
#define LPI2C0_MFSR                   (*((volatile uint32_t *)0x4006605C))      // Master FIFO Status Register
#define LPI2C0_MTDR                   (*((volatile uint32_t *)0x40066060))      // Master Transmit Data Register
#define LPI2C0_MRDR                   (*((volatile uint32_t *)0x40066070))      // Master Receive Data Register
#define LPI2C0_SCR                    (*((volatile uint32_t *)0x40066110))      // Slave Control Register
#define LPI2C0_SSR                    (*((volatile uint32_t *)0x40066114))      // Slave Status Register
#define LPI2C0_SIER                   (*((volatile uint32_t *)0x40066118))      // Slave Interrupt Enable Register
#define LPI2C0_SDER                   (*((volatile uint32_t *)0x4006611C))      // Slave DMA Enable Register
#define LPI2C0_SCFGR1                 (*((volatile uint32_t *)0x40066124))      // Slave Configuration Register 1
#define LPI2C0_SCFGR2                 (*((volatile uint32_t *)0x40066128))      // Slave Configuration Register 2
#define LPI2C0_SAMR                   (*((volatile uint32_t *)0x40066140))      // Slave Address Match Register
#define LPI2C0_SASR                   (*((volatile uint32_t *)0x40066150))      // Slave Address Status Register
#define LPI2C0_STAR                   (*((volatile uint32_t *)0x40066154))      // Slave Transmit ACK Register
#define LPI2C0_STDR                   (*((volatile uint32_t *)0x40066160))      // Slave Transmit Data Register
#define LPI2C0_SRDR                   (*((volatile uint32_t *)0x40066170))      // Slave Receive Data Register
#define LPI2C1_VERID                  (*((volatile uint32_t *)0x40067000))      // Version ID Register
#define LPI2C1_PARAM                  (*((volatile uint32_t *)0x40067004))      // Parameter Register
#define LPI2C1_MCR                    (*((volatile uint32_t *)0x40067010))      // Master Control Register
#define LPI2C1_MSR                    (*((volatile uint32_t *)0x40067014))      // Master Status Register
#define LPI2C1_MIER                   (*((volatile uint32_t *)0x40067018))      // Master Interrupt Enable Register
#define LPI2C1_MDER                   (*((volatile uint32_t *)0x4006701C))      // Master DMA Enable Register
#define LPI2C1_MCFGR0                 (*((volatile uint32_t *)0x40067020))      // Master Configuration Register 0
#define LPI2C1_MCFGR1                 (*((volatile uint32_t *)0x40067024))      // Master Configuration Register 1
#define LPI2C1_MCFGR2                 (*((volatile uint32_t *)0x40067028))      // Master Configuration Register 2
#define LPI2C1_MCFGR3                 (*((volatile uint32_t *)0x4006702C))      // Master Configuration Register 3
#define LPI2C1_MDMR                   (*((volatile uint32_t *)0x40067040))      // Master Data Match Register
#define LPI2C1_MCCR0                  (*((volatile uint32_t *)0x40067048))      // Master Clock Configuration Register 0
#define LPI2C1_MCCR1                  (*((volatile uint32_t *)0x40067050))      // Master Clock Configuration Register 1
#define LPI2C1_MFCR                   (*((volatile uint32_t *)0x40067058))      // Master FIFO Control Register
#define LPI2C1_MFSR                   (*((volatile uint32_t *)0x4006705C))      // Master FIFO Status Register
#define LPI2C1_MTDR                   (*((volatile uint32_t *)0x40067060))      // Master Transmit Data Register
#define LPI2C1_MRDR                   (*((volatile uint32_t *)0x40067070))      // Master Receive Data Register
#define LPI2C1_SCR                    (*((volatile uint32_t *)0x40067110))      // Slave Control Register
#define LPI2C1_SSR                    (*((volatile uint32_t *)0x40067114))      // Slave Status Register
#define LPI2C1_SIER                   (*((volatile uint32_t *)0x40067118))      // Slave Interrupt Enable Register
#define LPI2C1_SDER                   (*((volatile uint32_t *)0x4006711C))      // Slave DMA Enable Register
#define LPI2C1_SCFGR1                 (*((volatile uint32_t *)0x40067124))      // Slave Configuration Register 1
#define LPI2C1_SCFGR2                 (*((volatile uint32_t *)0x40067128))      // Slave Configuration Register 2
#define LPI2C1_SAMR                   (*((volatile uint32_t *)0x40067140))      // Slave Address Match Register
#define LPI2C1_SASR                   (*((volatile uint32_t *)0x40067150))      // Slave Address Status Register
#define LPI2C1_STAR                   (*((volatile uint32_t *)0x40067154))      // Slave Transmit ACK Register
#define LPI2C1_STDR                   (*((volatile uint32_t *)0x40067160))      // Slave Transmit Data Register
#define LPI2C1_SRDR                   (*((volatile uint32_t *)0x40067170))      // Slave Receive Data Register


//*****************************************************************************
//
// Low Power Universal Asynchronous Receiver/Transmitter (LPUART) registers
//
//*****************************************************************************

#define LPUART0_VERID                 (*((volatile uint32_t *)0x4006A000))      // Version ID
#define LPUART0_PARAM                 (*((volatile uint32_t *)0x4006A004))      // Parameter
#define LPUART0_GLOBAL                (*((volatile uint32_t *)0x4006A008))      // LPUART Global
#define LPUART0_PINCFG                (*((volatile uint32_t *)0x4006A00C))      // LPUART Pin Configuration
#define LPUART0_BAUD                  (*((volatile uint32_t *)0x4006A010))      // LPUART Baud Rate
#define LPUART0_STAT                  (*((volatile uint32_t *)0x4006A014))      // LPUART Status
#define LPUART0_CTRL                  (*((volatile uint32_t *)0x4006A018))      // LPUART Control
#define LPUART0_DATA                  (*((volatile uint32_t *)0x4006A01C))      // LPUART Data
#define LPUART0_MATCH                 (*((volatile uint32_t *)0x4006A020))      // LPUART Match Address
#define LPUART0_MODIR                 (*((volatile uint32_t *)0x4006A024))      // LPUART Modem IrDA
#define LPUART0_FIFO                  (*((volatile uint32_t *)0x4006A028))      // LPUART FIFO
#define LPUART0_WATER                 (*((volatile uint32_t *)0x4006A02C))      // LPUART Watermark
#define LPUART1_VERID                 (*((volatile uint32_t *)0x4006B000))      // Version ID
#define LPUART1_PARAM                 (*((volatile uint32_t *)0x4006B004))      // Parameter
#define LPUART1_GLOBAL                (*((volatile uint32_t *)0x4006B008))      // LPUART Global
#define LPUART1_PINCFG                (*((volatile uint32_t *)0x4006B00C))      // LPUART Pin Configuration
#define LPUART1_BAUD                  (*((volatile uint32_t *)0x4006B010))      // LPUART Baud Rate
#define LPUART1_STAT                  (*((volatile uint32_t *)0x4006B014))      // LPUART Status
#define LPUART1_CTRL                  (*((volatile uint32_t *)0x4006B018))      // LPUART Control
#define LPUART1_DATA                  (*((volatile uint32_t *)0x4006B01C))      // LPUART Data
#define LPUART1_MATCH                 (*((volatile uint32_t *)0x4006B020))      // LPUART Match Address
#define LPUART1_MODIR                 (*((volatile uint32_t *)0x4006B024))      // LPUART Modem IrDA
#define LPUART1_FIFO                  (*((volatile uint32_t *)0x4006B028))      // LPUART FIFO
#define LPUART1_WATER                 (*((volatile uint32_t *)0x4006B02C))      // LPUART Watermark
#define LPUART2_VERID                 (*((volatile uint32_t *)0x4006C000))      // Version ID
#define LPUART2_PARAM                 (*((volatile uint32_t *)0x4006C004))      // Parameter
#define LPUART2_GLOBAL                (*((volatile uint32_t *)0x4006C008))      // LPUART Global
#define LPUART2_PINCFG                (*((volatile uint32_t *)0x4006C00C))      // LPUART Pin Configuration
#define LPUART2_BAUD                  (*((volatile uint32_t *)0x4006C010))      // LPUART Baud Rate
#define LPUART2_STAT                  (*((volatile uint32_t *)0x4006C014))      // LPUART Status
#define LPUART2_CTRL                  (*((volatile uint32_t *)0x4006C018))      // LPUART Control
#define LPUART2_DATA                  (*((volatile uint32_t *)0x4006C01C))      // LPUART Data
#define LPUART2_MATCH                 (*((volatile uint32_t *)0x4006C020))      // LPUART Match Address
#define LPUART2_MODIR                 (*((volatile uint32_t *)0x4006C024))      // LPUART Modem IrDA
#define LPUART2_FIFO                  (*((volatile uint32_t *)0x4006C028))      // LPUART FIFO
#define LPUART2_WATER                 (*((volatile uint32_t *)0x4006C02C))      // LPUART Watermark


//*****************************************************************************
//
// Flexible I/O (FlexIO) registers
//
//*****************************************************************************

#define FLEXIO_VERID                  (*((volatile uint32_t *)0x4005A000))      // Version ID Register
#define FLEXIO_PARAM                  (*((volatile uint32_t *)0x4005A004))      // Parameter Register
#define FLEXIO_CTRL                   (*((volatile uint32_t *)0x4005A008))      // FlexIO Control Register
#define FLEXIO_PIN                    (*((volatile uint32_t *)0x4005A00C))      // Pin State Register
#define FLEXIO_SHIFTSTAT              (*((volatile uint32_t *)0x4005A010))      // Shifter Status Register
#define FLEXIO_SHIFTERR               (*((volatile uint32_t *)0x4005A014))      // Shifter Error Register
#define FLEXIO_TIMSTAT                (*((volatile uint32_t *)0x4005A018))      // Timer Status Register
#define FLEXIO_SHIFTSIEN              (*((volatile uint32_t *)0x4005A020))      // Shifter Status Interrupt Enable
#define FLEXIO_SHIFTEIEN              (*((volatile uint32_t *)0x4005A024))      // Shifter Error Interrupt Enable
#define FLEXIO_TIMIEN                 (*((volatile uint32_t *)0x4005A028))      // Timer Interrupt Enable Register
#define FLEXIO_SHIFTSDEN              (*((volatile uint32_t *)0x4005A030))      // Shifter Status DMA Enable
#define FLEXIO_SHIFTCTL0              (*((volatile uint32_t *)0x4005A080))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL1              (*((volatile uint32_t *)0x4005A084))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL2              (*((volatile uint32_t *)0x4005A088))      // Shifter Control N Register
#define FLEXIO_SHIFTCTL3              (*((volatile uint32_t *)0x4005A08C))      // Shifter Control N Register
#define FLEXIO_SHIFTCFG0              (*((volatile uint32_t *)0x4005A100))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG1              (*((volatile uint32_t *)0x4005A104))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG2              (*((volatile uint32_t *)0x4005A108))      // Shifter Configuration N Register
#define FLEXIO_SHIFTCFG3              (*((volatile uint32_t *)0x4005A10C))      // Shifter Configuration N Register
#define FLEXIO_SHIFTBUF0              (*((volatile uint32_t *)0x4005A200))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF1              (*((volatile uint32_t *)0x4005A204))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF2              (*((volatile uint32_t *)0x4005A208))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUF3              (*((volatile uint32_t *)0x4005A20C))      // Shifter Buffer N Register
#define FLEXIO_SHIFTBUFBIS0           (*((volatile uint32_t *)0x4005A280))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS1           (*((volatile uint32_t *)0x4005A284))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS2           (*((volatile uint32_t *)0x4005A288))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBIS3           (*((volatile uint32_t *)0x4005A28C))      // Shifter Buffer N Bit Swapped Register
#define FLEXIO_SHIFTBUFBYS0           (*((volatile uint32_t *)0x4005A300))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS1           (*((volatile uint32_t *)0x4005A304))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS2           (*((volatile uint32_t *)0x4005A308))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBYS3           (*((volatile uint32_t *)0x4005A30C))      // Shifter Buffer N Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS0           (*((volatile uint32_t *)0x4005A380))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS1           (*((volatile uint32_t *)0x4005A384))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS2           (*((volatile uint32_t *)0x4005A388))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_SHIFTBUFBBS3           (*((volatile uint32_t *)0x4005A38C))      // Shifter Buffer N Bit Byte Swapped Register
#define FLEXIO_TIMCTL0                (*((volatile uint32_t *)0x4005A400))      // Timer Control N Register
#define FLEXIO_TIMCTL1                (*((volatile uint32_t *)0x4005A404))      // Timer Control N Register
#define FLEXIO_TIMCTL2                (*((volatile uint32_t *)0x4005A408))      // Timer Control N Register
#define FLEXIO_TIMCTL3                (*((volatile uint32_t *)0x4005A40C))      // Timer Control N Register
#define FLEXIO_TIMCFG0                (*((volatile uint32_t *)0x4005A480))      // Timer Configuration N Register
#define FLEXIO_TIMCFG1                (*((volatile uint32_t *)0x4005A484))      // Timer Configuration N Register
#define FLEXIO_TIMCFG2                (*((volatile uint32_t *)0x4005A488))      // Timer Configuration N Register
#define FLEXIO_TIMCFG3                (*((volatile uint32_t *)0x4005A48C))      // Timer Configuration N Register
#define FLEXIO_TIMCMP0                (*((volatile uint32_t *)0x4005A500))      // Timer Compare N Register
#define FLEXIO_TIMCMP1                (*((volatile uint32_t *)0x4005A504))      // Timer Compare N Register
#define FLEXIO_TIMCMP2                (*((volatile uint32_t *)0x4005A508))      // Timer Compare N Register
#define FLEXIO_TIMCMP3                (*((volatile uint32_t *)0x4005A50C))      // Timer Compare N Register


//*****************************************************************************
//
// Touch Sensing Input (TSI) registers
//
//*****************************************************************************

#define TSI_GENCS                     (*((volatile uint32_t *)0x40045000))      // TSI General Control and Status Register (TSI_GENCS)
#define TSI_DATA                      (*((volatile uint32_t *)0x40045004))      // TSI DATA Register (TSI_DATA)
#define TSI_TSHD                      (*((volatile uint32_t *)0x40045008))      // TSI Threshold Register (TSI_TSHD)
#define TSI_MODE                      (*((volatile uint32_t *)0x4004500C))      // TSI MODE Register (TSI_MODE)
#define TSI_MUL0                      (*((volatile uint32_t *)0x40045010))      // TSI MUTUAL-CAP Register 0 (TSI_MUL0)
#define TSI_MUL1                      (*((volatile uint32_t *)0x40045014))      // TSI MUTUAL-CAP Register 1 (TSI_MUL1)
#define TSI_SINC                      (*((volatile uint32_t *)0x40045018))      // TSI SINC filter Register (TSI_SINC)
#define TSI_SSC0                      (*((volatile uint32_t *)0x4004501C))      // TSI SSC Register 0 (TSI_SSC0)
#define TSI_SSC1                      (*((volatile uint32_t *)0x40045020))      // TSI SSC Register 0 (TSI_SSC1)
#define TSI_SSC2                      (*((volatile uint32_t *)0x40045024))      // TSI SSC Register 2 (TSI_SSC2)



//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CHIPCTL register.
//
//*****************************************************************************

#define RTC32KCLKSEL                  0x00180000      // RTC 32K clock input select
#define PWTCLKSEL                     0x00060000      // PWT clock source select
#define PDB_BB_SEL                    0x00002000      // PDB back-to-back select
#define CLKOUTSEL                     0x00000180      // CLKOUT Select
#define CLKOUTDIV                     0x00000060      // CLKOUT divider ratio
#define ADC_INTERLEAVE_EN             0x00000018      // ADC interleave channel enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FTMOPT0 register.
//
//*****************************************************************************

#define FTM2CLKSEL                    0x60000000      // FTM2 External Clock Pin Select
#define FTM1CLKSEL                    0x18000000      // FTM1 External Clock Pin Select
#define FTM0CLKSEL                    0x06000000      // FTM0 External Clock Pin Select
#define FTM0FLTxSEL                   0xFFFFF800000      // FTM0 Fault x Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_ADCOPT register.
//
//*****************************************************************************

#define ADC1PRETRGSEL                 0x00006000      // ADC1 pre-trigger source select
#define ADC1SWPRETRG                  0x00000C00      // ADC1 software pre-trigger sources
#define ADC1TRGSEL                    0x00000100      // ADC1 trigger source select
#define ADC0PRETRGSEL                 0x00000060      // ADC0 pre-trigger source select
#define ADC0SWPRETRG                  0x0000000C      // ADC0 software pre-trigger sources
#define ADC0TRGSEL                    0x00000001      // ADC0 trigger source select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FTMOPT1 register.
//
//*****************************************************************************

#define FTM0_OUTSEL                   0x7F800000      // FTM0 channel modulation select with FTM1_CH1
#define FTM2CH1SEL                    0x00000100      // FTM2 CH1 Select
#define FTM2CH0SEL                    0x00000180      // FTM2 CH0 Select
#define FTM1CH0SEL                    0x00000060      // FTM1 CH0 Select
#define FTM2SYNCBIT                   0x00000004      // FTM2 Sync Bit
#define FTM1SYNCBIT                   0x00000002      // FTM1 Sync Bit
#define FTM0SYNCBIT                   0x00000001      // FTM0 Sync Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SDID register.
//
//*****************************************************************************

#define FAMILYID                      0x780000000      // Kinetis E-series Family ID
#define SUBFAMID                      0x78000000      // Kinetis E-series Sub-Family ID
#define SERIESID                      0x07800000      // Kinetis Series ID
#define RAMSIZE                       0x00780000      // RAM size
#define REVID                         0x00078000      // Device revision number
#define PROJECTID                     0x0000F800      // Project ID
#define PINID                         0x00001FC0      // Pin identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG1 register.
//
//*****************************************************************************

#define NVMSIZE                       0x780000000      // FlexNVM size
#define PFSIZE                        0x78000000      // Program flash size
#define EEERAMSIZE                    0x00780000      // EEE SRAM SIZE
#define DEPART                        0x00078000      // FlexNVM partition
#define FLASHDOZE                     0x00000002      // Flash Doze
#define FLASHDIS                      0x00000001      // Flash Disable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG2 register.
//
//*****************************************************************************

#define MAXADDR0                      0x1FC0000000      // Max address block 0
#define MAXADDR1                      0x1FC00000      // Max address block 1


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_MISCTRL register.
//
//*****************************************************************************

#define UART2ODE                      0x00040000      // UART2 Open Drain Enable
#define UART1ODE                      0x00020000      // UART1 Open Drain Enable
#define UART0ODE                      0x00010000      // UART0 Open Drain Enable
#define DMA_INT_SEL                   0x00000780      // DMA channel interrupt OR select


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SADDR register.
//
//*****************************************************************************

#define SADDR                         0x7FFFFFFF80000000      // Source Address
#define SADDR                         0x7FFFFFFF80000000      // Memory address pointing to the source data.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SOFF register.
//
//*****************************************************************************

#define SOFF                          0x7FFF8000      // Source address signed offset
#define SOFF                          0x7FFF8000      // Sign-extended offset applied to the current source address to form the next-state value as each source read is completed.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_ATTR register.
//
//*****************************************************************************

#define SMOD                          0x000F8000      // Source Address Modulo
#define SSIZE                         0x00001C00      // Source data transfer size
#define DMOD                          0x00000F80      // Destination Address Modulo
#define DSIZE                         0x0000001C      // Destination data transfer size


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLNO register.
//
//*****************************************************************************

#define NBYTES                        0x7FFFFFFF80000000      // Minor Byte Transfer Count
#define NBYTES                        0x7FFFFFFF80000000      // Number of bytes to be transferred in each service request of the channel. As a channel activates, the appropriate TCD contents load into the eDMA engine, and the appropriate reads and writes perform until the minor byte transfer count has transferred. This is an indivisible operation and cannot be halted. It can, however, be stalled by using the bandwidth control field, or via preemption. After the minor count is exhausted, the SADDR and DADDR values are written back into the TCD memory, the major iteration count is decremented and restored to the TCD memory. If the major iteration count is completed, additional processing is performed.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFNO register.
//
//*****************************************************************************

#define NBYTES                        0x1FFFFF80000000      // Minor Byte Transfer Count
#define NBYTES                        0x1FFFFF80000000      // Number of bytes to be transferred in each service request of the channel. As a channel activates, the appropriate TCD contents load into the eDMA engine, and the appropriate reads and writes perform until the minor byte transfer count has transferred. This is an indivisible operation and cannot be halted. It can, however, be stalled by using the bandwidth control field, or via preemption. After the minor count is exhausted, the SADDR and DADDR values are written back into the TCD memory, the major iteration count is decremented and restored to the TCD memory. If the major iteration count is completed, additional processing is performed.
#define MLOFF                         0x0007FE00      // Minor Loop Offset
#define SMLOE                         0x80000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x40000000      // Destination Minor Loop Offset enable
#define NBYTES                        0x1FFFFE0000000      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFYES register.
//
//*****************************************************************************

#define MLOFF                         0x1FFFFE0000000      // Minor Loop Offset
#define MLOFF                         0x1FFFFE0000000      // If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes.
#define NBYTES                        0x0007FE00      // Minor Byte Transfer Count
#define NBYTES                        0x0007FE00      // Number of bytes to be transferred in each service request of the channel. As a channel activates, the appropriate TCD contents load into the eDMA engine, and the appropriate reads and writes perform until the minor byte transfer count has transferred. This is an indivisible operation and cannot be halted. It can, however, be stalled by using the bandwidth control field, or via preemption. After the minor count is exhausted, the SADDR and DADDR values are written back into the TCD memory, the major iteration count is decremented and restored to the TCD memory. If the major iteration count is completed, additional processing is performed.
#define SMLOE                         0x80000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x40000000      // Destination Minor Loop Offset enable


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SLAST register.
//
//*****************************************************************************

#define SLAST                         0x7FFFFFFF80000000      // Last Source Address Adjustment
#define SLAST                         0x7FFFFFFF80000000      // Adjustment value added to the source address at the completion of the major iteration count. This value can be applied to restore the source address to the initial value, or adjust the address to reference the next data structure.
#define SLAST                         0x7FFFFFFF80000000      // This register uses two's complement notation; the overflow bit is discarded.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DADDR register.
//
//*****************************************************************************

#define DADDR                         0x7FFFFFFF80000000      // Destination Address
#define DADDR                         0x7FFFFFFF80000000      // Memory address pointing to the destination data.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DOFF register.
//
//*****************************************************************************

#define DOFF                          0x7FFF8000      // Destination Address Signed Offset
#define DOFF                          0x7FFF8000      // Sign-extended offset applied to the current destination address to form the next-state value as each destination write is completed.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define Reserved                      0x0001C000      // -
#define LINKCH                        0x00003800      // Minor Loop Link Channel Number
#define CITER                         0x0001FF00      // Current Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define CITER                         0x1FFFC000      // Current Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DLASTSGA register.
//
//*****************************************************************************

#define DLASTSGA                      0x7FFFFFFF80000000      // Destination last address adjustment or the memory address for the next transfer control descriptor to be loaded into this channel (scatter/gather).


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CSR register.
//
//*****************************************************************************

#define BWC                           0x00018000      // Bandwidth Control
#define Reserved                      0x0000E000      // -
#define MAJORLINKCH                   0x00001C00      // Major Loop Link Channel Number
#define DONE                          0x00000080      // Channel Done
#define ACTIVE                        0x00000040      // Channel Active
#define MAJORELINK                    0x00000020      // Enable channel-to-channel linking on major loop complete
#define ESG                           0x00000010      // Enable Scatter/Gather Processing
#define DREQ                          0x00000008      // Disable Request
#define INTHALF                       0x00000004      // Enable an interrupt when major counter is half complete.
#define INTMAJOR                      0x00000002      // Enable an interrupt when major iteration count completes.
#define START                         0x00000001      // Channel Start


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define Reserved                      0x0001C000      // -
#define LINKCH                        0x00003800      // Link Channel Number
#define BITER                         0x0001FF00      // Starting major iteration count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define BITER                         0x1FFFC000      // Starting Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERR register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define CAEI                          0x00000040      // Clear All Error Indicators
#define Reserved                      0x000000E0      // This field is reserved.
#define CERR                          0x0000001C      // Clear Error Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CINT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No Op enable
#define CAIR                          0x00000040      // Clear All Interrupt Requests
#define Reserved                      0x000000E0      // This field is reserved.
#define CINT                          0x0000001C      // Clear Interrupt Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_INT register.
//
//*****************************************************************************

#define Reserved                      0x7FFFFF80000000      // This field is reserved.
#define INT7                          0x00000080      // Interrupt Request 7
#define INT6                          0x00000040      // Interrupt Request 6
#define INT5                          0x00000020      // Interrupt Request 5
#define INT4                          0x00000010      // Interrupt Request 4
#define INT3                          0x00000008      // Interrupt Request 3
#define INT2                          0x00000004      // Interrupt Request 2
#define INT1                          0x00000002      // Interrupt Request 1
#define INT0                          0x00000001      // Interrupt Request 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERR register.
//
//*****************************************************************************

#define Reserved                      0x7FFFFF80000000      // This field is reserved.
#define ERR7                          0x00000080      // Error In Channel 7
#define ERR6                          0x00000040      // Error In Channel 6
#define ERR5                          0x00000020      // Error In Channel 5
#define ERR4                          0x00000010      // Error In Channel 4
#define ERR3                          0x00000008      // Error In Channel 3
#define ERR2                          0x00000004      // Error In Channel 2
#define ERR1                          0x00000002      // Error In Channel 1
#define ERR0                          0x00000001      // Error In Channel 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_HRS register.
//
//*****************************************************************************

#define Reserved                      0x7FFFFF80000000      // This field is reserved.
#define HRS7                          0x00000080      // Hardware Request Status Channel 7
#define HRS6                          0x00000040      // Hardware Request Status Channel 6
#define HRS5                          0x00000020      // Hardware Request Status Channel 5
#define HRS4                          0x00000010      // Hardware Request Status Channel 4
#define HRS3                          0x00000008      // Hardware Request Status Channel 3
#define HRS2                          0x00000004      // Hardware Request Status Channel 2
#define HRS1                          0x00000002      // Hardware Request Status Channel 1
#define HRS0                          0x00000001      // Hardware Request Status Channel 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_EARS register.
//
//*****************************************************************************

#define Reserved                      0x7FFFFF80000000      // This field is reserved.
#define EDREQ_7                       0x00000080      // Enable asynchronous DMA request in stop mode for channel 7
#define EDREQ_6                       0x00000040      // Enable asynchronous DMA request in stop mode for channel 6
#define EDREQ_5                       0x00000020      // Enable asynchronous DMA request in stop mode for channel 5
#define EDREQ_4                       0x00000010      // Enable asynchronous DMA request in stop mode for channel 4
#define EDREQ_3                       0x00000008      // Enable asynchronous DMA request in stop mode for channel 3
#define EDREQ_2                       0x00000004      // Enable asynchronous DMA request in stop mode for channel 2
#define EDREQ_1                       0x00000002      // Enable asynchronous DMA request in stop mode for channel 1
#define EDREQ_0                       0x00000001      // Enable asynchronous DMA request in stop mode for channel 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DCHPRIn register.
//
//*****************************************************************************

#define ECP                           0x00000080      // Enable Channel Preemption
#define DPA                           0x00000040      // Disable Preempt Ability
#define Reserved                      0x000000E0      // This field is reserved.
#define CHPRI                         0x0000001C      // Channel n Arbitration Priority


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_VERID register.
//
//*****************************************************************************

#define VERSION                       0x7FFFFFFF80000000      // SCG Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_PARAM register.
//
//*****************************************************************************

#define DIVPRES                       0xF80000000      // Divider Present


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_CSR register.
//
//*****************************************************************************

#define SCS                           0x78000000      // System Clock Source


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_RCCR register.
//
//*****************************************************************************

#define SCS                           0x78000000      // System Clock Source


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_VCCR register.
//
//*****************************************************************************

#define SCS                           0x78000000      // System Clock Source


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_CLKOUTCNFG register.
//
//*****************************************************************************

#define CLKOUTSEL                     0x78000000      // SCG Clkout Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_SOSCCSR register.
//
//*****************************************************************************

#define SOSCERR                       0x04000000      // System OSC Clock Error


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_SOSCDIV register.
//
//*****************************************************************************

#define SOSCDIV2                      0x00001C00      // System OSC Clock Divide 2


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_SOSCCFG register.
//
//*****************************************************************************

#define RANGE                         0x00000060      // System OSC Range Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_SIRCCSR register.
//
//*****************************************************************************

#define SIRCSEL                       0x02000000      // Slow IRC Selected


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_SIRCDIV register.
//
//*****************************************************************************

#define SIRCDIV2                      0x00001C00      // Slow IRC Clock Divide 2


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_SIRCCFG register.
//
//*****************************************************************************

#define RANGE                         0x00000001      // Frequency Range


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_FIRCCSR register.
//
//*****************************************************************************

#define FIRCERR                       0x04000000      // Fast IRC Clock Error


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_FIRCDIV register.
//
//*****************************************************************************

#define FIRCDIV2                      0x00001C00      // Fast IRC Clock Divide 2


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_FIRCCFG register.
//
//*****************************************************************************

#define RANGE                         0x00000006      // Frequency Range
#define RANGE                         0x00000001      // Frequency Range


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_FIRCTCFG register.
//
//*****************************************************************************

#define TRIMDIV                       0x00001C00      // Fast IRC Trim Predivide
#define TRIMSRC                       0x00000006      // Trim  Source


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_FIRCSTAT register.
//
//*****************************************************************************

#define TRIMCOAR                      0x00018000      // Trim Coarse
#define TRIMCOAR                      0x0007E000      // Trim Coarse
#define TRIMFINE                      0x00007F80      // Trim Fine Status


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_LPFLLCSR register.
//
//*****************************************************************************

#define LPFLLERR                      0x04000000      // LPFLL Clock Error
#define LPFLLSEL                      0x02000000      // LPFLL Selected
#define LPFLLVLD                      0x01000000      // LPFLL Valid
#define LK                            0x00800000      // Lock Register
#define LPFLLCMRE                     0x00020000      // LPFLL Clock Monitor Reset Enable
#define LPFLLCM                       0x00010000      // LPFLL Clock Monitor
#define LPFLLTRMLOCK                  0x00000400      // LPFLL Trim LOCK
#define LPFLLTRUP                     0x00000200      // LPFLL Trim Update
#define LPFLLTREN                     0x00000100      // LPFLL Trim Enable
#define LPFLLEN                       0x00000001      // LPFLL Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_LPFLLDIV register.
//
//*****************************************************************************

#define LPFLLDIV2                     0x00001C00      // LPFLL Clock Divide 2
#define LPFLLDIV1                     0x00000F80      // LPFLL Clock Divide 1


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_LPFLLCFG register.
//
//*****************************************************************************

#define FSEL                          0x00000006      // Frequency Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_LPFLLTCFG register.
//
//*****************************************************************************

#define LOCKW2LSB                     0x00010000      // Lock LPFLL with 2 LSBS
#define TRIMDIV                       0x0001F000      // LPFLL Trim Predivide
#define TRIMSRC                       0x00000006      // Trim Source


//*****************************************************************************
//
// The following are defines for the bit fields in the SCG_LPFLLSTAT register.
//
//*****************************************************************************

#define AUTOTRIM                      0x00007F80      // Auto Tune Trim Status


//*****************************************************************************
//
// The following are defines for the bit fields in the OSC32_CR register.
//
//*****************************************************************************

#define ROSCEN                        0x00000080      // RTC Oscillator Enable
#define ROSCSTPE                      0x00000040      // RTC Oscillator Stop Enable
#define ROSCSTB                       0x00000020      // RTC Oscillator Standby
#define ROSCEREF                      0x00000010      // RTC Oscillator Reference Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_DMA0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_FLASH register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_DMAMUX0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_ADC1 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control
#define PCS                           0x1C000000      // Peripheral Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPSPI0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control
#define PCS                           0x1C000000      // Peripheral Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPSPI1 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control
#define PCS                           0x1C000000      // Peripheral Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_CRC register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_PDB0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPIT0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control
#define PCS                           0x1C000000      // Peripheral Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_FLEXTMR0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_FLEXTMR1 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_FLEXTMR2 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_ADC0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control
#define PCS                           0x1C000000      // Peripheral Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_RTC register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPTMR0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .
#define PCS                           0x1C000000      // This read/write bit field is used for peripherals that support various clock selections.


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_TSI register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_PORTA register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_PORTB register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_PORTC register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_PORTD register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_PORTE register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_PWT register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_FLEXIO register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .
#define PCS                           0x1C000000      // This read/write bit field is used for peripherals that support various clock selections.


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_OSC32 register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_EWM register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPI2C0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .
#define PCS                           0x1C000000      // This read/write bit field is used for peripherals that support various clock selections.


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPI2C1 register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .
#define PCS                           0x1C000000      // This read/write bit field is used for peripherals that support various clock selections.


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPUART0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // This bit shows whether the peripheral is present on this device.
#define CGC                           0x40000000      // This read/write bit enables the clock for the peripheral.
#define INUSE                         0x20000000      // >This read-only bit shows that this peripheral is being used .
#define PCS                           0x1C000000      // This read/write bit field is used for peripherals that support various clock selections.


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPUART1 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control
#define PCS                           0x1C000000      // Peripheral Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_LPUART2 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control
#define PCS                           0x1C000000      // Peripheral Clock Source Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PCC_CMP0 register.
//
//*****************************************************************************

#define PR                            0x80000000      // Enable
#define CGC                           0x40000000      // Clock Control
#define INUSE                         0x20000000      // Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_VERID register.
//
//*****************************************************************************

#define MAJOR                         0x7F80000000      // Major Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_PARAM register.
//
//*****************************************************************************

#define ECORE1                        0x00010000      // Existence of SRS[CORE1] status indication feature


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SRS register.
//
//*****************************************************************************

#define SACKERR                       0x00002000      // Stop Acknowledge Error


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_RPC register.
//
//*****************************************************************************

#define RSTFLTSEL                     0x0001F000      // Reset Pin Filter Bus Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_MR register.
//
//*****************************************************************************

#define BOOTROM                       0x0000000C      // Boot ROM Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_FM register.
//
//*****************************************************************************

#define FORCEROM                      0x0000000C      // Force ROM Boot


//*****************************************************************************
//
// The following are defines for the bit fields in the RCM_SSRS register.
//
//*****************************************************************************

#define SSACKERR                      0x00002000      // Sticky Stop Acknowledge Error


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_VERID register.
//
//*****************************************************************************

#define MAJOR                         0x7F80000000      // Major Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PARAM register.
//
//*****************************************************************************

#define EVLLS0                        0x00000080      // Existence of VLLS0 feature


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMPROT register.
//
//*****************************************************************************

#define AVLP                          0x00000020      // Allow Very-Low-Power Modes


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMCTRL register.
//
//*****************************************************************************

#define RUNM                          0x000000C0      // Run Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_STOPCTRL register.
//
//*****************************************************************************

#define PSTOPO                        0x00000180      // Partial Stop Option


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMSTAT register.
//
//*****************************************************************************

#define PMSTAT                        0x00000001      // Power Mode Status


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC1 register.
//
//*****************************************************************************

#define LVDF                          0x00000080      // Low Voltage Detect Flag
#define LVDACK                        0x00000040      // Low Voltage Detect Acknowledge
#define LVDRE                         0x00000020      // Low Voltage Detect Reset Enable
#define LVDIE                         0x00000010      // Low Voltage Detect Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC2 register.
//
//*****************************************************************************

#define LVWF                          0x00000080      // Low Voltage Warning Flag
#define LVWACK                        0x00000040      // Low Voltage Warning Acknowledge
#define LVWIE                         0x00000020      // Low Voltage Warning Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CTRL register.
//
//*****************************************************************************

#define -                             0x00000080      // -
#define INEN                          0x00000040      // -
#define ASSIN                         0x00000020      // -
#define EWMEN                         0x00000010      // -


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_SERV register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPL register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPH register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CLKPRESCALER register.
//
//*****************************************************************************




//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_CS register.
//
//*****************************************************************************

#define WIN                           0x00008000      // Watchdog Window
#define FLG                           0x00004000      // Watchdog Interrupt Flag
#define CMD32EN                       0x00002000      // Enables or disables WDOG support for 32-bit (otherwise 16-bit or 8-bit) refresh/unlock command write words
#define PRES                          0x00001000      // Watchdog prescaler
#define ULK                           0x00000800      // Unlock status
#define RCS                           0x00000400      // Reconfiguration Success
#define CLK                           0x00000600      // Watchdog Clock
#define EN                            0x00000080      // Watchdog Enable
#define INT                           0x00000040      // Watchdog Interrupt
#define UPDATE                        0x00000020      // Allow updates
#define TST                           0x00000030      // Watchdog Test
#define DBG                           0x00000004      // Debug Enable
#define WAIT                          0x00000002      // Wait Enable
#define STOP                          0x00000001      // Stop Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_CNT register.
//
//*****************************************************************************

#define CNTHIGH                       0x007F8000      // High byte of the Watchdog Counter
#define CNTLOW                        0x00007F80      // Low byte of the Watchdog Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TOVAL register.
//
//*****************************************************************************

#define TOVALHIGH                     0x007F8000      // High byte of the timeout value
#define TOVALLOW                      0x00007F80      // Low byte of the timeout value


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_WIN register.
//
//*****************************************************************************

#define WINHIGH                       0x007F8000      // High byte of Watchdog Window
#define WINLOW                        0x00007F80      // Low byte of Watchdog Window


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_DATA register.
//
//*****************************************************************************

#define HU                            0x7F80000000      // CRC High Upper Byte
#define HL                            0x7F800000      // CRC High Lower Byte
#define LU                            0x007F8000      // CRC Low Upper Byte
#define LL                            0x00007F80      // CRC Low Lower Byte


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_GPOLY register.
//
//*****************************************************************************

#define HIGH                          0x7FFF80000000      // High Polynominal Half-word
#define LOW                           0x7FFF8000      // Low Polynominal Half-word


//*****************************************************************************
//
// The following are defines for the bit fields in the CRC_CTRL register.
//
//*****************************************************************************

#define TOT                           0x04000000      // -
#define TOTR                          0x02000000      // -
#define FXOR                          0x01000000      // -
#define WAS                           0x00800000      // -
#define TCRC                          0x00400000      // -


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_POSITION register.
//
//*****************************************************************************

#define Trace Packet Address Pointer[28:0]0xFFFFFFF80000000      // Trace Packet Address Pointer[28:0]
#define WRAP                          0x00000004      // WRAP


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_MASTER register.
//
//*****************************************************************************

#define Main Trace Enable             0x80000000      // Main Trace Enable
#define Halt Request                  0x00000200      // Halt Request
#define RAM Privilege                 0x00000100      // RAM Privilege
#define Special Function Register Write Privilege0x00000080      // Special Function Register Write Privilege
#define Trace Stop Input Enable       0x00000040      // Trace Stop Input Enable
#define Trace Start Input Enable      0x00000020      // Trace Start Input Enable
#define Mask                          0x000001F0      // Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_FLOW register.
//
//*****************************************************************************

#define WATERMARK[28:0]               0xFFFFFFF80000000      // WATERMARK[28:0]
#define AUTOHALT                      0x00000002      // AUTOHALT
#define AUTOSTOP                      0x00000001      // AUTOSTOP


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_BASE register.
//
//*****************************************************************************

#define BASEADDR                      0x7FFFFFFF80000000      // BASEADDR


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_MODECTRL register.
//
//*****************************************************************************

#define MODECTRL                      0x7FFFFFFF80000000      // MODECTRL


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_TAGSET register.
//
//*****************************************************************************

#define TAGSET                        0x7FFFFFFF80000000      // TAGSET


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_TAGCLEAR register.
//
//*****************************************************************************

#define TAGCLEAR                      0x7FFFFFFF80000000      // TAGCLEAR


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_LOCKACCESS register.
//
//*****************************************************************************

#define LOCKACCESS                    0x7FFFFFFF80000000      // LOCKACCESS


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_LOCKSTAT register.
//
//*****************************************************************************

#define LOCKSTAT                      0x7FFFFFFF80000000      // LOCKSTAT


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_AUTHSTAT register.
//
//*****************************************************************************

#define BIT3-BIT2                     0x00000018      // BIT3-BIT2
#define BIT1-BIT0                     0x00000006      // BIT1-BIT0


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICEARCH register.
//
//*****************************************************************************

#define DEVICEARCH                    0x7FFFFFFF80000000      // DEVICEARCH


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICECFG register.
//
//*****************************************************************************

#define DEVICECFG                     0x7FFFFFFF80000000      // DEVICECFG


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_DEVICETYPID register.
//
//*****************************************************************************

#define DEVICETYPID                   0x7FFFFFFF80000000      // DEVICETYPID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // PERIPHID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTB_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // COMPID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_CTRL register.
//
//*****************************************************************************

#define NUMCMP                        0x780000000      // Number of comparators
#define DWTCFGCTRL                    0x18000000      // DWT configuration controls


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_COMPn register.
//
//*****************************************************************************

#define COMP                          0x7FFFFFFF80000000      // Reference value for comparison


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_MASKn register.
//
//*****************************************************************************

#define Reserved                      0x3FFFFFF80000000      // This read-only field is reserved and always has the value 0.
#define MASK                          0x000001F0      // MASK


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_FCT0 register.
//
//*****************************************************************************

#define Reserved                      0x3F80000000      // This read-only field is reserved and always has the value 0.
#define MATCHED                       0x01000000      // Comparator match
#define Reserved                      0x07800000      // This read-only field is reserved and always has the value 0.
#define Reserved                      0x00780000      // This read-only field is reserved and always has the value 0.
#define DATAVADDR0                    0x00078000      // Data Value Address 0
#define DATAVSIZE                     0x00001800      // Data Value Size
#define Reserved                      0x00000200      // This read-only field is reserved and always has the value 0.
#define DATAVMATCH                    0x00000100      // Data Value Match
#define Reserved                      0x00000780      // This read-only field is reserved and always has the value 0.
#define FUNCTION                      0x00000078      // Function


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_FCT1 register.
//
//*****************************************************************************

#define Reserved                      0x3F80000000      // This read-only field is reserved and always has the value 0.
#define MATCHED                       0x01000000      // Comparator match
#define Reserved                      0x7FFFF800000      // This read-only field is reserved and always has the value 0.
#define FUNCTION                      0x00000078      // Function


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_TBCTRL register.
//
//*****************************************************************************

#define NUMCOMP                       0x780000000      // Number of Comparators
#define Reserved                      0x1FFFFFF8000000      // This read-only field is reserved and always has the value 0.
#define ACOMP1                        0x00000002      // Action based on Comparator 1 match
#define ACOMP0                        0x00000001      // Action based on Comparator 0 match


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_DEVICECFG register.
//
//*****************************************************************************

#define DEVICECFG                     0x7FFFFFFF80000000      // DEVICECFG


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_DEVICETYPID register.
//
//*****************************************************************************

#define DEVICETYPID                   0x7FFFFFFF80000000      // DEVICETYPID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // PERIPHID


//*****************************************************************************
//
// The following are defines for the bit fields in the MTBDWT_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // Component ID


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_ENTRYn register.
//
//*****************************************************************************

#define ENTRY                         0x7FFFFFFF80000000      // ENTRY


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_TABLEMARK register.
//
//*****************************************************************************

#define MARK                          0x7FFFFFFF80000000      // MARK


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_SYSACCESS register.
//
//*****************************************************************************

#define SYSACCESS                     0x7FFFFFFF80000000      // SYSACCESS
#define -                             0x3FFFFFFF80000000      // -
#define SYSACCESS                     0x00000001      // SYSACCESS


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_PERIPHIDn register.
//
//*****************************************************************************

#define PERIPHID                      0x7FFFFFFF80000000      // PERIPHID


//*****************************************************************************
//
// The following are defines for the bit fields in the ROM_COMPIDn register.
//
//*****************************************************************************

#define COMPID                        0x7FFFFFFF80000000      // Component ID


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Register_Descriptions register.
//
//*****************************************************************************

#define Major Version Number          0x7F80000000      // This read only field returns the major version number for the module specification.
#define Minor Version Number          0x7F800000      // This read only field returns the minor version number for the module specification.
#define Feature Identification Number 0x7FFF8000      // This read only field returns the feature set number.


//*****************************************************************************
//
// The following are defines for the bit fields in the Parameter__PARAM_ register.
//
//*****************************************************************************

#define Receive FIFO Size             0x007F8000      // The number of words  in  the  receive FIFO is 2^RXFIFO.
#define Transmit FIFO Size            0x00007F80      // The number of words  in  the  transmit FIFO is 2^TXFIFO.


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Global__GLOBAL_ register.
//
//*****************************************************************************

#define Software Reset                0x00000002      // Reset all internal  logic and registers,   except  the  Global Register.  Remains  set  until  cleared  by  software.


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Pin_Configuration__PINCFG_ register.
//
//*****************************************************************************

#define Trigger Select                0x00000006      // Configures the input trigger usage.


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Baud_Rate__BAUD_ register.
//
//*****************************************************************************

#define Match Address Mode Enable 1   0x80000000      // 0 - Normal operation.;; 1 - Enables automatic address matching or data matching mode for MATCH[MA1].
#define Match Address Mode Enable 2   0x40000000      // 0 - Normal operation.;; 1 - Enables automatic address matching or data matching mode for MATCH[MA2].
#define 10-bit Mode select            0x20000000      // The M10 bit causes a tenth bit to be part of the serial transmission. This bit should only be changed when the transmitter and receiver are both disabled.
#define Oversampling Ratio            0x1F0000000      // This field configures the oversampling ratio for the receiver between 4x (00011) and 32x (11111). Writing an invalid oversampling ratio (i.e., a value not between 4x and 32x) will default to an oversampling ratio of 16 (01111). This field should only be changed when the transmitter and receiver are both disabled.
#define Transmitter DMA Enable        0x00800000      // TDMAE configures the transmit data register empty flag, LPUART_STAT[TDRE], to generate a DMA request.
#define Reserved                      0x00400000      // -
#define Receiver Full DMA Enable      0x00200000      // RDMAE configures the receiver data register full flag, LPUART_STAT[RDRF], to generate a DMA request.
#define Receiver Idle DMA Enable      0x00100000      // RIDMAE configures the receiver idle flag, LPUART_STAT[IDLE], to generate a DMA request. When this bit is set, reading LPUART_DATA when either DATA[RXEMPT] or DATA[IDLINE] bit is set, will generate an End Of Packet response until the completion of the existing DMA transfer. During an End of Packet response, reading the LPUART_DATA register will return 0x0000_33FF and does not pull data from the FIFO.
#define Match Configuration           0x00180000      // Configures the match addressing mode used.
#define Both Edge Sampling            0x00020000      // Enables sampling of the received data on both edges of the baud rate clock, effectively doubling the number of times the receiver samples the input data for a given oversampling ratio. This bit must be set for oversampling ratios between x4 and x7 and is optional for higher oversampling ratios. This bit should only be changed when the receiver is disabled.
#define Resynchronization Disable     0x00010000      // When set, disables the resynchronization of the received data word when a data one followed by data zero transition is detected. This bit should only be changed when the receiver is disabled.
#define LIN Break Detect Interrupt Enable0x00008000      // LBKDIE enables the LIN break detect flag, LBKDIF, to generate interrupt requests.
#define RX Input Active Edge Interrupt Enable0x00004000      // Enables the receive input active edge, RXEDGIF, to generate interrupt requests. Changing CTRL[LOOP] or CTRL[RSRC] when RXEDGIE is set can cause the RXEDGIF to set.
#define Stop Bit Number Select        0x00002000      // SBNS determines whether data characters are one or two stop bits. This bit should only be changed when the transmitter and receiver are both disabled.
#define Baud Rate Modulo Divisor.     0x01FFF000      // The 13 bits in SBR[12:0] set the modulo divide rate for the baud rate generator. When SBR is 1 - 8191, the baud rate equals "baud clock / ((OSR+1) * SBR)". The 13-bit baud rate setting [SBR12:SBR0] must only be updated when the transmitter and receiver are both disabled (LPUART_CTRL[RE] and LPUART_CTRL[TE] are both 0).


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Status__STAT_ register.
//
//*****************************************************************************

#define LIN Break Detect Interrupt Flag0x80000000      // LBKDIF is set when the LIN break detect circuitry is enabled and a LIN break character is detected. LBKDIF is cleared by writing a 1 to it.
#define RXD Pin Active Edge Interrupt Flag0x40000000      // RXEDGIF is set when an active edge, falling if RXINV = 0, rising if RXINV=1, on the RXD pin occurs. RXEDGIF is cleared by writing a 1 to it.
#define MSB First                     0x20000000      // Setting this bit reverses the order of the bits that are transmitted and received on the wire. This bit does not affect the polarity of the bits, the location of the parity bit or the location of the start or stop bits. This bit should only be changed when the transmitter and receiver are both disabled.
#define Receive Data Inversion        0x10000000      // Setting this bit reverses the polarity of the received data input. NOTE:     Setting RXINV inverts the RXD input for all cases: data bits, start and stop bits, break, and idle.
#define Receive Wake Up Idle Detect   0x08000000      // For RWU on idle character, RWUID controls whether the idle character that wakes up the receiver sets the IDLE bit. For address match wakeup, RWUID controls if the IDLE bit is set when the address does not match. This bit should only be changed when the receiver is disabled.
#define Break Character Generation Length0x04000000      // BRK13 selects a longer transmitted break character length. Detection of a framing error is not affected by the state of this bit. This bit should only be changed when the transmitter is disabled.
#define LIN Break Detection Enable    0x02000000      // LBKDE selects a longer break character detection length. While LBKDE is set, receive data is not stored in the receive data buffer.
#define Receiver Active Flag          0x01000000      // RAF is set when the receiver detects the beginning of a valid start bit, and RAF is cleared automatically when the receiver detects an idle line.
#define Transmit Data Register Empty Flag0x00800000      // When the transmit FIFO is enabled, TDRE will set when the number of datawords in the transmit FIFO (LPUART_DATA) is equal to or less than the number indicated by LPUART_WATER[TXWATER]). To clear TDRE, write to the LPUART data register (LPUART_DATA) until the number of words in the transmit FIFO is greater than the number indicated by LPUART_WATER[TXWATER]. When the transmit FIFO is disabled,TDRE will set when the transmit data register (LPUART_DATA) is empty. To clear TDRE, write to the LPUART data register (LPUART_DATA).
#define Transmission Complete Flag    0x00400000      // TC is cleared when there is a transmission in progress or when a preamble or break character is loaded. TC is set when the transmit buffer is empty and no data, preamble, or break character is being transmitted. When TC is set, the transmit data output signal becomes idle (logic 1). TC is cleared by writing to LPUART_DATA to transmit new data, queuing a preamble by clearing and then setting LPUART_CTRL[TE], queuing a break character by writing 1 to LPUART_CTRL[SBK].
#define Receive Data Register Full Flag0x00200000      // When the receive FIFO is enabled, RDRF is set when the number of datawords in the receive buffer is greater than the number indicated by LPUART_WATER[RXWATER]. To clear RDRF, read LPUART_DATA until the number of datawords in the receive data buffer is equal to or less than the number indicated by LPUART_WATER[RXWATER]. When the receive FIFO is disabled, RDRF is set when the receive buffer (LPUART_DATA) is full. To clear RDRF, read the LPUART_DATA register.
#define Idle Line Flag                0x00100000      // IDLE is set when the LPUART receive line becomes idle for a full character time after a period of activity. When ILT is cleared, the receiver starts counting idle bit times after the start bit. If the receive character is all 1s, these bit times and the stop bits time count toward the full character time of logic high, 10 to 13 bit times, needed for the receiver to detect an idle line. When ILT is set, the receiver doesn't start counting idle bit times until after the stop bits. The stop bits and any logic high bit times at the end of the previous character do not count toward the full character time of logic high needed for the receiver to detect an idle line.
#define Receiver Overrun Flag         0x00080000      // OR is set when software fails to prevent the receive data register from overflowing with data. The OR bit is set immediately after the stop bit has been completely received for the dataword that overflows the buffer and all the other error flags (FE, NF, and PF) are prevented from setting. The data in the shift register is lost, but the data already in the LPUART data registers is not affected. If LBKDE is enabled and a LIN Break is detected, the OR field asserts if LBKDIF is not cleared before the next data character is received.
#define Noise Flag                    0x00040000      // The advanced sampling technique used in the receiver takes three samples in each of the received bits. If any of these samples disagrees with the rest of the samples within any bit time in the frame then noise is detected for that character. NF is set whenever the next character to be read from LPUART_DATA was received with noise detected within the character. To clear NF, write logic one to the NF.
#define Framing Error Flag            0x00020000      // FE is set whenever the next character to be read from LPUART_DATA was received with logic 0 detected where a stop bit was expected. To clear FE, write logic one to the FE.
#define Parity Error Flag             0x00010000      // PF is set whenever the next character to be read from LPUART_DATA was received when parity is enabled (PE = 1) and the parity bit in the received character does not agree with the expected parity value. To clear PF, write a logic one to the PF.
#define Match 1 Flag                  0x00008000      // MA1F is set whenever the next character to be read from LPUART_DATA matches MA1. To clear MA1F, write a logic one to the MA1F.
#define Match 2 Flag                  0x00004000      // MA2F is set whenever the next character to be read from LPUART_DATA matches MA2. To clear MA2F, write a logic one to the MA2F.


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Control__CTRL_ register.
//
//*****************************************************************************

#define Receive Bit 8 / Transmit Bit 90x80000000      // R8 is the ninth data bit received when the LPUART is configured for 9-bit or 10-bit data formats. When reading 9-bit or 10-bit data, read R8 before reading LPUART_DATA. T9 is the tenth data bit received when the LPUART is configured for 10-bit data formats. When writing 10-bit data, write T9 before writing LPUART_DATA. If T9 does not need to change from its previous value, such as when it is used to generate address mark or parity, they it need not be written each time LPUART_DATA is written.
#define Receive Bit 9 / Transmit Bit 80x40000000      // R9 is the tenth data bit received when the LPUART is configured for 10-bit data formats. When reading 10-bit data, read R9 before reading LPUART_DATA R9T8 is the ninth data bit received when the LPUART is configured for 9-bit or 10-bit data formats. When writing 9-bit or 10-bit data, write T8 before writing LPUART_DATA. If T8 does not need to change from its previous value, such as when it is used to generate address mark or parity, they it need not be written each time LPUART_DATA is written.
#define TXD Pin Direction in Single-Wire Mode0x20000000      // When the LPUART is configured for single-wire half-duplex operation (LOOPS = RSRC = 1), this bit determines the direction of data at the TXD pin. When clearing TXDIR, the transmitter will finish receiving the current character (if any) before the receiver starts receiving data from the TXD pin.
#define Transmit Data Inversion       0x10000000      // Setting this bit reverses the polarity of the transmitted data output. NOTE:   Setting TXINV inverts the TXD output for all cases: data bits, start and stop bits, break, and idle.
#define Overrun Interrupt Enable      0x08000000      // This bit enables the overrun flag (OR) to generate hardware interrupt requests.
#define Noise Error Interrupt Enable  0x04000000      // This bit enables the noise flag (NF) to generate hardware interrupt requests.
#define Framing Error Interrupt Enable0x02000000      // This bit enables the framing error flag (FE) to generate hardware interrupt requests.
#define Parity Error Interrupt Enable 0x01000000      // This bit enables the parity error flag (PF) to generate hardware interrupt requests.
#define Transmit Interrupt Enable     0x00800000      // Enables STAT[TDRE] to generate interrupt requests.
#define Transmission Complete Interrupt Enable for0x00400000      // TCIE enables the transmission complete flag, TC, to generate interrupt requests.
#define Receiver Interrupt Enable     0x00200000      // Enables STAT[RDRF] to generate interrupt requests.
#define Idle Line Interrupt Enable    0x00100000      // ILIE enables the idle line flag, STAT[IDLE], to generate interrupt requests.
#define Transmitter Enable            0x00080000      // Enables the LPUART transmitter. TE can also be used to queue an idle preamble by clearing and then setting TE. When TE is cleared, this register bit will read as 1 until the transmitter has completed the current character and the TXD pin is tristated.
#define Receiver Enable               0x00040000      // Enables the LPUART receiver. When RE is written to 0, this register bit will read as 1 until the receiver finishes receiving the current character (if any).
#define Receiver Wakeup Control       0x00020000      // This field can be set to place the LPUART receiver in a standby state. RWU automatically clears when an RWU event occurs, that is, an IDLE event when CTRL[WAKE] is clear or an address match when CTRL[WAKE] is set with STAT[RWUID] is clear. NOTE:   RWU must be set only with CTRL[WAKE] = 0 (wakeup on idle) if the channel is currently not idle. This can be determined by STAT[RAF]. If the flag is set to wake up an IDLE event and the channel is already idle, it is possible that the LPUART will discard data. This is because the data must be received or a LIN break detected after an IDLE is detected before IDLE is allowed to be reasserted.
#define Send Break                    0x00010000      // Writing a 1 and then a 0 to SBK queues a break character in the transmit data stream. Additional break characters of 9 to 13 bits, or 12 to 15 bits if LPUART_STAT[BRK13] is set, bit times of logic 0 are queued as long as SBK is set. Depending on the timing of the set and clear of SBK relative to the information currently being transmitted, a second break character may be queued before software clears SBK.
#define Match 1 Interrupt Enable      0x00008000      // 0: MA1F interrupt disabled;; 1: MA1F interrupt enabled
#define Match 2 Interrupt Enable      0x00004000      // 0: MA2F interrupt disabled;; 1: MA2F interrupt enabled
#define Reserved                      0x00006000      // -
#define 7-Bit Mode Select             0x00000800      // This bit should only be changed when the transmitter and receiver are both disabled.
#define Idle Configuration            0x00001C00      // Configures the number of idle characters that must be received before the IDLE flag is set.
#define Loop Mode Select              0x00000080      // When LOOPS is set, the RXD pin is disconnected from the LPUART and the transmitter output is internally connected to the receiver input. The transmitter and the receiver must be enabled to use the loop function.
#define Doze Enable                   0x00000040      // 0: LPUART is enabled in Doze mode.;; 1: LPUART is disabled in Doze mode.
#define Receiver Source Select        0x00000020      // This field has no meaning or effect unless the LOOPS field is set. When LOOPS is set, the RSRC field determines the source for the receiver shift register input.
#define 9-Bit or 8-Bit Mode Select    0x00000010      // 0: Receiver and transmitter use 8-bit data characters.;; 1: Receiver and transmitter use 9-bit data characters.
#define Receiver Wakeup Method Select 0x00000008      // Determines which condition wakes the LPUART when RWU=1: Address mark in the most significant bit position of a received data character, or An idle condition on the receive pin input signal.
#define Idle Line Type Select         0x00000004      // Determines when the receiver starts counting logic 1s as idle character bits. The count begins either after a valid start bit or after the stop bit. If the count begins after the start bit, then a string of logic 1s preceding the stop bit can cause false recognition of an idle character. Beginning the count after the stop bit avoids false idle character recognition, but requires properly synchronized transmissions. NOTE:  In case the LPUART is programmed with ILT = 1, a logic 0 is automatically shifted after a received stop bit, therefore resetting the idle count.
#define Parity Enable                 0x00000002      // Enables hardware parity generation and checking. When parity is enabled, the bit immediately before the stop bit is treated as the parity bit.
#define Parity Type                   0x00000001      // Provided parity is enabled (PE = 1), this bit selects even or odd parity. Odd parity means the total number of 1s in the data character, including the parity bit, is odd. Even parity means the total number of 1s in the data character, including the parity bit, is even.


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Data__DATA_ register.
//
//*****************************************************************************

#define Reserved                      0x7FFF80000000      // -
#define NOISY                         0x00008000      // The current received dataword contained in DATA[R9:R0] was received with noise.
#define PARITYE                       0x00004000      // The current received dataword contained in DATA[R9:R0] was received with a parity error.
#define Frame Error / Transmit Special Character0x00002000      // For reads, indicates the current received dataword contained in DATA[R9:R0] was received with a frame error. For writes, indicates a break or idle character is to be transmitted instead of the contents in DATA[T9:T0]. T9 is used to indicate a break character when 0 and a idle character when 1, he contents of DATA[T8:T0] should be zero.
#define Receive Buffer Empty          0x00001000      // Asserts when there is no data in the receive buffer. This field does not take into account data that is in the receive shift register.
#define Idle Line                     0x00000800      // Indicates the receiver line was idle before receiving the character in DATA[9:0]. Unlike the IDLE flag, this bit can set for the first character received when the receiver is first enabled.
#define Reserved                      0x00000400      // -
#define R9T9                          0x00000200      // Read  receive  data  buffer  9  or  write  transmit  data buffer 9.
#define R8T8                          0x00000100      // Read  receive  data  buffer  8  or  write  transmit  data buffer 8.
#define R7T7                          0x00000080      // Read  receive  data  buffer  7  or  write  transmit  data buffer 7.
#define R6T6                          0x00000040      // Read  receive  data  buffer  6  or  write  transmit  data buffer 6.
#define R5T5                          0x00000020      // Read  receive  data  buffer  5  or  write  transmit  data buffer 5.
#define R4T4                          0x00000010      // Read  receive  data  buffer  4  or  write  transmit  data buffer 4.
#define R3T3                          0x00000008      // Read  receive  data  buffer  3  or  write  transmit  data buffer 3.
#define R2T2                          0x00000004      // Read  receive  data  buffer  2  or  write  transmit  data buffer 2.
#define R1T1                          0x00000002      // Read  receive  data  buffer  1  or  write  transmit  data buffer 1.
#define R0T0                          0x00000001      // Read  receive  data  buffer  0  or  write  transmit  data buffer 0.


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Match_Address__MATCH_ register.
//
//*****************************************************************************

#define Reserved                      0x1F80000000      // -
#define Match Address 2               0x7FE000000      // The MA1 and MA2 registers are compared to input data addresses when the most significant bit is set and the associated BAUD[MAEN] bit is set. If a match occurs, the following data is transferred to the data register. If a match fails, the following data is discarded. Software should only write a MA register when the associated BAUD[MAEN] bit is clear.
#define Reserved                      0x001F8000      // -
#define Match Address 1               0x0007FE00      // The MA1 and MA2 registers are compared to input data addresses when the most significant bit is set and the associated BAUD[MAEN] bit is set. If a match occurs, the following data is transferred to the data register. If a match fails, the following data is discarded. Software should only write a MA register when the associated BAUD[MAEN] bit is clear.


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_Modem_IrDA__MODIR_ register.
//
//*****************************************************************************

#define Reserved                      0xFFF80000000      // -
#define Infrared enable               0x00040000      // Enables/disables the infrared modulation/demodulation.
#define Transmitter narrow pulse      0x00060000      // Configures whether the LPUART transmits a 1/OSR, 2/OSR, 3/OSR or 4/OSR narrow pulse when IR is enabled. The IR pulse width should be configured to less than half of the oversampling ratio. Common pulse widths are 3/16, 1/16, 1/32 or 1/4 of the bit length. These can be configured by selecting the appropriate oversample ratio and pulse width.
#define Receive RTS Configuration     0x007F8000      // Configures the point at which the RX RTS output negates based on the number of additional characters that can be stored in the Receive FIFO. When configured to 0 with receiver controlling RTS, it negates when the the start bit is detetected for the character that will cause the FIFO to become full, and it asserts when the FIFO is not full and the character being received would not cause the FIFO to become full.
#define Reserved                      0x00000180      // -
#define Transmit CTS Source           0x00000020      // Configures the source of the CTS input.
#define Transmit CTS Configuration    0x00000010      // Configures if the CTS state is checked at the start of each character or only when the transmitter is idle.
#define Receiver request-to-send enable0x00000008      // Allows the RTS output to control the CTS input of the transmitting device to prevent receiver overrun. NOTE:  Do not set both RXRTSE and TXRTSE.
#define Transmitter request-to-send polarity0x00000004      // Controls the polarity of the transmitter RTS. TXRTSPOL does not affect the polarity of the receiver RTS. RTS will remain negated in the active low state unless TXRTSE is set.
#define Transmitter request-to-send enable0x00000002      // Controls RTS before and after a transmission.
#define Transmitter clear-to-send enable0x00000001      // TXCTSE controls the operation of the transmitter. TXCTSE can be set independently from the state of TXRTSE and RXRTSE.


//*****************************************************************************
//
// The following are defines for the bit fields in the LPUART_FIFO__FIFO_ register.
//
//*****************************************************************************

#define Reserved                      0x7F80000000      // -
#define Transmit Buffer/FIFO Empty    0x00800000      // Asserts when there is no data in the Transmit FIFO/buffer. This field does not take into account data that is in the transmit shift register.
#define Receive Buffer/FIFO Empty     0x00400000      // Asserts when there is no data in the receive FIFO/Buffer. This field does not take into account data that is in the receive shift register.
#define Reserved                      0x01E00000      // -
#define Transmitter Buffer Overflow Flag0x00020000      // Indicates that more data has been written to the transmit buffer than it can hold. This field will assert regardless of the value of TXOFE. However, an interrupt will be issued to the host only if TXOFE is set. This flag is cleared by writing a 1.
#define Receiver Buffer Underflow Flag0x00010000      // Indicates that more data has been read from the receive buffer than was present. This field will assert regardless of the value of RXUFE. However, an interrupt will be issued to the host only if RXUFE is set. This flag is cleared by writing a 1.
#define Transmit FIFO/Buffer Flush    0x00008000      // Writing to this field causes all data that is stored in the transmit FIFO/buffer to be flushed. This does not affect data that is in the transmit shift register.
#define Receive FIFO/Buffer Flush     0x00004000      // Writing to this field causes all data that is stored in the receive FIFO/buffer to be flushed. This does not affect data that is in the receive shift register.
#define Reserved                      0x00002000      // -
#define Receiver Idle Empty Enable    0x00007000      // When set, enables the assertion of RDRF when the receiver is idle for a number of idle characters and the FIFO is not empty.
#define Transmit FIFO Overflow Interrupt Enable0x00000200      // When this field is set, the TXOF flag generates an interrupt to the host.
#define Receive FIFO Underflow Interrupt Enable0x00000100      // When this field is set, the RXUF flag generates an interrupt to the host.
#define Transmit FIFO Enable          0x00000080      // When this field is set, the built in FIFO structure for the transmit buffer is enabled. The size of the FIFO structure is indicated by TXFIFOSIZE. If this field is not set, the transmit buffer operates as a FIFO of depth one dataword regardless of the value in TXFIFOSIZE. Both CTRL[TE] and CTRL[RE] must be cleared prior to changing this field.
#define Transmit FIFO. Buffer Depth   0x000001C0      // The maximum number of transmit datawords that can be stored in the transmit buffer. This field is read only.
#define Receive FIFO Enable           0x00000008      // When this field is set, the built in FIFO structure for the receive buffer is enabled. The size of the FIFO structure is indicated by the RXFIFOSIZE field. If this field is not set, the receive buffer operates as a FIFO of depth one dataword regardless of the value in RXFIFOSIZE. Both CTRL[TE] and CTRL[RE] must be cleared prior to changing this field.
#define Receive FIFO. Buffer Depth    0x0000001C      // The maximum number of receive datawords that can be stored in the receive buffer before an overrun


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_VERID register.
//
//*****************************************************************************

#define MAJOR                         0x7F80000000      // Major Version Number


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_PARAM register.
//
//*****************************************************************************

#define TRIGGER                       0x7F80000000      // Trigger Number


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_CTRL register.
//
//*****************************************************************************

#define DOZEN                         0x80000000      // Doze Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_PIN register.
//
//*****************************************************************************

#define PDI                           0x00000001      // Pin Data Input


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTSTAT register.
//
//*****************************************************************************

#define SSF                           0x00000001      // Shifter Status Flag


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTERR register.
//
//*****************************************************************************

#define SEF                           0x00000001      // Shifter Error Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMSTAT register.
//
//*****************************************************************************

#define TSF                           0x00000001      // Timer Status Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTSIEN register.
//
//*****************************************************************************

#define SSIE                          0x00000001      // Shifter Status Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTEIEN register.
//
//*****************************************************************************

#define SEIE                          0x00000001      // Shifter Error Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMIEN register.
//
//*****************************************************************************

#define TEIE                          0x00000001      // Timer Status Interrupt Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTSDEN register.
//
//*****************************************************************************

#define SSDE                          0x00000001      // Shifter Status DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTCTLn register.
//
//*****************************************************************************

#define TIMSEL                        0x06000000      // Timer Select


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTCFGn register.
//
//*****************************************************************************

#define INSRC                         0x00000100      // Input Source


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTBUFn register.
//
//*****************************************************************************

#define SHIFTBUF                      0x7FFFFFFF80000000      // Shift Buffer


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTBUFBISn register.
//
//*****************************************************************************

#define SHIFTBUFBIS                   0x7FFFFFFF80000000      // Shift Buffer
#define SHIFTBUFBIS                   0x7FFFFFFF80000000      // Shift Buffer


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTBUFBYSn register.
//
//*****************************************************************************

#define SHIFTBUFBYS                   0x7FFFFFFF80000000      // Shift Buffer
#define SHIFTBUFBYS                   0x7FFFFFFF80000000      // Shift Buffer


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_SHIFTBUFBBSn register.
//
//*****************************************************************************

#define SHIFTBUFBBS                   0x7FFFFFFF80000000      // Shift Buffer
#define SHIFTBUFBBS                   0x7FFFFFFF80000000      // Shift Buffer


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMCTLn register.
//
//*****************************************************************************

#define TRGSEL                        0x78000000      // Trigger Select
#define TRGPOL                        0x00800000      // Trigger Polarity
#define TRGSRC                        0x00400000      // Trigger Source
#define PINCFG                        0x00060000      // Timer Pin Configuration
#define PINSEL                        0x00001C00      // Timer Pin Select
#define PINPOL                        0x00000080      // Timer Pin Polarity
#define TIMOD                         0x0000001C      // Timer Mode


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMCFGn register.
//
//*****************************************************************************

#define TIMOUT                        0x06000000      // Timer Output
#define TIMDEC                        0x00600000      // Timer Decrement
#define TIMRST                        0x001C0000      // Timer Reset
#define TIMDIS                        0x0001C000      // Timer Disable
#define TIMENA                        0x00001C00      // Timer Enable
#define TSTOP                         0x00000060      // Timer Stop Bit
#define TSTART                        0x00000002      // Timer Start Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the FLEXIO_TIMCMPn register.
//
//*****************************************************************************

#define CMP                           0x7FFF8000      // Timer Compare Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_GENCS register.
//
//*****************************************************************************

#define OUTRGF                        0x80000000      // Out of Range Flag.
#define ESOR                          0x10000000      // End-of-scan or Out-of-Range Interrupt Selection
#define DVOLT                         0x00300000      // select comparator Vm, Vp. From DIP.
#define TSIEN                         0x00000080      // Touch Sensing Input Module Enable
#define TSIIEN                        0x00000040      // Touch Sensing Input Interrupt Enable
#define STPE                          0x00000020      // TSI STOP Enable
#define STM                           0x00000010      // Scan Trigger Mode
#define SCNIP                         0x00000008      // Scan In Progress Status
#define EOSF                          0x00000004      // End of Scan Flag
#define EOSDMEO                       0x00000001      // End-of-Scan DMA Transfer Request Enable Only


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_DATA register.
//
//*****************************************************************************

#define TSICH                         0xF80000000      // These bits specify current channel to be measured for self-cap mode. In hardware trigger mode (TSI_GENCS[STM] = 1), the scan will not start until the hardware trigger occurs. In software trigger mode (TSI_GENCS[STM] = 0), the scan starts immediately when TSI_DATA[SWTS] bit is written by 1.
#define DMAEN                         0x00800000      // DMA Transfer Enabled
#define SWTS                          0x00400000      // Software Trigger Start
#define Reserved                      0x07E00000      // This read-only field is reserved and always has the value 0
#define TSICNT                        0x7FFF8000      // TSI Conversion Counter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_TSHD register.
//
//*****************************************************************************

#define THRESH                        0x7FFF80000000      // TSI Wakeup Channel High-threshold
#define THRESL                        0x7FFF8000      // TSI Wakeup Channel Low-threshold


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_MODE register.
//
//*****************************************************************************

#define S_XDN                         0x1C0000000      // When TSI_MODE[S_SEN]=1, adjust sensitivity.
#define S_W_SHIELD                    0x00800000      // Shield switch control when TSI_MODE[MODE] = '0'.
#define S_SEN                         0x00400000      // Sensitivity boost mode of self-cap.
#define S_CTRIM                       0x00E00000      // Capacitor trim setting
#define S_XIN                         0x00040000      // Input current multiple.
#define Reserved                      0x000E0000      // This read-only field is reserved and always has the value 0
#define S_XCH                         0x0001C000      // Charge/Discharge current multiple.
#define Reserved                      0x0000F800      // This read-only field is reserved and always has the value 0
#define SETCLK                        0x000000C0      // Set main clock frequency.
#define Reserved                      0x00000070      // This read-only field is reserved and always has the value 0
#define MODE                          0x00000002      // Select sensing mod.
#define S_NOISE                       0x00000001      // Noise cancellation mode of self-cap.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_MUL0 register.
//
//*****************************************************************************

#define M_PRE_CURRENT                 0x380000000      // Choose the current used in Vref generator, default 4uA.
#define Reserved                      0xF0000000      // This read-only field is reserved and always has the value 0
#define Reserved                      0x01000000      // This read-only field is reserved and always has the value 0
#define Reserved                      0x01800000      // This read-only field is reserved and always has the value 0
#define M_TX_USED                     0x07E00000      // Indicates which channel used for mutual cap TX.
#define M_PRE_RES                     0x00038000      // choose the resistor used in pre-charge, default 4k.
#define Reserved                      0x00001000      // This read-only field is reserved and always has the value 0
#define M_SEN_RES                     0x00007800      // Choose the resistor used in the I_sense generator, default 10k.
#define Reserved                      0x00000080      // This read-only field is reserved and always has the value 0
#define M_SEL_TX                      0x000001C0      // TX channel selection when TSI_MODE[MODE] = '1'.
#define Reserved                      0x00000008      // This read-only field is reserved and always has the value 0
#define M_SEL_RX                      0x0000001C      // RX channel selection when TSI_MODE[MODE] = '1'.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_MUL1 register.
//
//*****************************************************************************

#define Reserved                      0x7F80000000      // This read-only field is reserved and always has the value 0
#define M_SEN_BOOST                   0x0F800000      // Choose the sensitivity boost current, default 0.
#define M_MODE                        0x00040000      // TX drive mode control, default 0V~5V.
#define Reserved                      0x00020000      // This read-only field is reserved and always has the value 0
#define M_VPRE_CHOOSE                 0x00010000      // Digital control signal for pre-voltage choose.
#define M_TRIM2                       0x007F8000      // M_TRIM2[7:0] is for trim use.
#define M_PMIRRORL                    0x00000380      // PMOS current mirror on the left side, default m=16.
#define M_PMIRRORR                    0x00000030      // PMOS current mirror on the right side, default m=4.
#define M_NMIRROR                     0x0000000C      // NMOS current mirror, default m=4.
#define M_NMIR_CTRL                   0x00000001      // NMOS mirror control signal, default enable.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_SINC register.
//
//*****************************************************************************

#define Reserved                      0x780000000      // This read-only field is reserved and always has the value 0
#define CUTOFF                        0x78000000      // The value of shifting out lower bits of counter, equal to divide the result by div, default div=0.
#define Reserved                      0x01800000      // This read-only field is reserved and always has the value 0
#define ORDER                         0x00200000      // Select the order of SINC filter, the SINC filter is a digital decimation filter for filtering out the low frequency noise from EMC (Electro Magnetic Compatibility).
#define DECIMATION                    0x01F00000      // Choose the decimation value of the SINC filter.
#define Reserved                      0x07FF8000      // This read-only field is reserved and always has the value 0
#define SWITCH_ENABLE                 0x00000008      // Indicating the state of SSC (spread spectrum clocking), for digital testing. SSC function is used for spreading frequency of sampling clock, reducing EMC (Electro Magnetic Compatibility).
#define SINC_OVERFLOW_FLAG            0x00000004      // Indicating whether the counter result in TSI_DATA[TSICNT] has an overflow occurrence in the last scan process. Note: this bit has no default value, please force it to 0 or deposit it if necessary.
#define SINC_VALID                    0x00000002      // Indicating the state of SINC filter, for digital testing.
#define SSC_CONTROL_OUT               0x00000001      // Indicating the state of SSC output value, for digital testing.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_SSC0 register.
//
//*****************************************************************************

#define PRBS_OUTSEL                   0x780000000      // When SSC0[SSC_MODE] = 2'b00, choosing the length of the PRBS (Pseudo-RandomBinarySequence) method.
#define Reserved                      0x08000000      // This read-only field is reserved and always has the value 0
#define SSC_MODE                      0x0C000000      // Choosing the SSC mode.
#define SSC_CONTROL_REVERSE           0x01000000      // Reversing the SSC output bit's polarity or not.
#define CHARGE_NUM                    0x07800000      // Choosing the period of the SSC output bit 0's period, when using up-down counter mode.
#define BASE_NOCHARGE_NUM             0x00780000      // Choosing the basic period of the SSC output bit 1's period, when using up-down counter mode. Together with the TSI_SSC2[MOVE_NOCHARGE_MAX] and TSI_SSC2[MOVE_NOCHARGE_MIN], they are determining the SSC output 1's period.
#define Reserved                      0x007F8000      // This read-only field is reserved and always has the value 0
#define SSC_PRESCALE_NUM              0x00007F80      // Selecting the divider ratio for the clock used for generating the SSC output bit.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_SSC1 register.
//
//*****************************************************************************

#define PRBS_WEIGHT_HI                0x7F80000000      // Together with the TSI_SSC1[PRBS_WEIGHT_LO], choosing the PRBS's feeding back nodes, when using PRBS method generating SSC output bit. The nodes whose value corresponding with "1" will be feed back and connected to the input of the XOR
#define PRBS_WEIGHT_LO                0x7F800000      // Together with the TSI_SSC1[PRBS_WEIGHT_HI], choosing the PRBS's feeding back nodes, when using PRBS method generating SSC output bit. The nodes whose value corresponding with "1" will be feed back and connected to the input of the XOR
#define PRBS_SEED_HI                  0x007F8000      // Together with the TSI_SSC1[PRBS_SEED_LO], choosing the initial value of the PRBS method, when using PRBS method generating SSC output bit
#define PRBS_SEED_LO                  0x00007F80      // Together with the TSI_SSC1[PRBS_SEED_HI], choosing the initial value of the PRBS method, when using PRBS method generating SSC output bit


//*****************************************************************************
//
// The following are defines for the bit fields in the TSI_SSC2 register.
//
//*****************************************************************************

#define MOVE_NOCHARGE_MIN             0x780000000      // Choosing the min period of the SSC output bit 1's period, when using up-down counter mode. Together with the TSI_SSC0[BASE_NOCHARGE_NUM] and TSI_SSC2[MOVE_NOCHARGE_MAX], they are determining the SSC output 1's period.



#endif // __MKE14Z128VLH7_H__

