/****************************************************************************
**
** Copyright (C) 2024 MikroElektronika d.o.o.
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

#ifndef __MK10DX128VFM5_H__
#define __MK10DX128VFM5_H__



//*****************************************************************************
//
// Interrupt assignments
//
//*****************************************************************************

#define NUMBER_OF_INT_VECTORS                   126              // Number of interrupts in the Vector table
#define NotAvail_IRQn                           -120             // Not available device specific interrupt
#define NonMaskableInterrupt_IRQn               -14              // Non-maskable Interrupt (NMI)
#define HardFault_IRQn                          -13              // Hard Fault
#define MemManageFault_IRQn                     -12              // MemManage Fault
#define BusFault_IRQn                           -11              // Bus Fault
#define UsageFault_IRQn                         -10              // Usage Fault
#define SVCall_IRQn                             -5               // Supervisor call (SVCall)
#define DebugMonitor_IRQn                       -4               // Debug Monitor
#define PendSV_IRQn                             -2               // Pendable request for system service (PendableSrvReq)
#define SysTick_IRQn                            -1               // System tick timer (SysTick)
#define DMA0_IRQn                               0                // DMA channel 0 transfer complete
#define DMA1_IRQn                               1                // DMA channel 1 transfer complete
#define DMA2_IRQn                               2                // DMA channel 2 transfer complete
#define DMA3_IRQn                               3                // DMA channel 3 transfer complete
#define DMA_Error_IRQn                          4                // DMA error interrupt channel
#define DMA_IRQn                                5                // -
#define Command_Complete_IRQn                   6                // Command complete
#define Read_Collision_IRQn                     7                // Read collision
#define PMC_IRQn                                8                // Low-voltage detect, low-voltage warning
#define LLWU_IRQn                               9                // Low Leakage Wakeup
#define WDOG_EWM_IRQn                           10               // Both EWM and WDOG interrupt sources set this IRQ
#define I2C0_IRQn                               11               // -
#define SPI0_IRQn                               12               // Single interrupt vector for all sources
#define Transmit_IRQn                           13               // Transmit
#define Receive_IRQn                            14               // Receive
#define UART0_RX_TX_LON_IRQn                    15               // Single interrupt vector for CEA7091-B (LON) status sources
#define UART0_RX_TX_IRQn                        16               // Single interrupt vector for UART status sources
#define UART0_ERR_IRQn                          17               // Single interrupt vector for UART error sources
#define UART1_RX_TX_IRQn                        18               // Single interrupt vector for UART status sources
#define UART1_ERR_IRQn                          19               // Single interrupt vector for UART error sources
#define UART2_RX_TX_IRQn                        20               // Single interrupt vector for UART status sources
#define UART2_ERR_IRQn                          21               // Single interrupt vector for UART error sources
#define ADC0_IRQn                               22               // -
#define CMP0_IRQn                               23               // -
#define CMP1_IRQn                               24               // -
#define FTM0_IRQn                               25               // -
#define FTM1_IRQn                               26               // -
#define CMT_IRQn                                27               // -
#define Alarm_Interrupt_IRQn                    28               // Alarm interrupt
#define Seconds_Interrupt_IRQn                  29               // Seconds interrupt
#define PIT0_IRQn                               30               // Channel 0
#define PIT1_IRQn                               31               // Channel 1
#define PIT2_IRQn                               32               // Channel 2
#define PIT3_IRQn                               33               // Channel 3
#define PDB_IRQn                                34               // -
#define Reserved_IRQn                           35               // -
#define Reserved_IRQn                           36               // -
#define TSI_IRQn                                37               // -
#define MCG_IRQn                                38               // -
#define LPTMR0_IRQn                             39               // -
#define PORTA_IRQn                              40               // Pin detect (Port A)
#define PORTB_IRQn                              41               // Pin detect (Port B)
#define PORTC_IRQn                              42               // Pin detect (Port C)
#define PORTD_IRQn                              43               // Pin detect (Port D)
#define PORTE_IRQn                              44               // Pin detect (Port E)
#define Software_initiated_IRQn                 45               // -
#define Reserved_IRQn                           46               // -
#define Reserved_IRQn                           47               // -
#define Reserved_IRQn                           48               // -
#define Reserved_IRQn                           49               // -
#define Reserved_IRQn                           50               // -
#define Reserved_IRQn                           51               // -
#define Reserved_IRQn                           52               // -
#define Reserved_IRQn                           53               // -
#define Reserved_IRQn                           54               // -
#define Reserved_IRQn                           55               // -
#define Reserved_IRQn                           56               // -
#define Reserved_IRQn                           57               // -
#define Reserved_IRQn                           58               // -
#define Reserved_IRQn                           59               // -
#define Reserved_IRQn                           60               // -
#define Reserved_IRQn                           61               // -
#define Reserved_IRQn                           62               // -
#define Reserved_IRQn                           63               // -
#define Reserved_IRQn                           64               // -
#define Reserved_IRQn                           65               // -
#define Reserved_IRQn                           66               // -
#define Reserved_IRQn                           67               // -
#define Reserved_IRQn                           68               // -
#define Reserved_IRQn                           69               // -
#define Reserved_IRQn                           70               // -
#define Reserved_IRQn                           71               // -
#define Reserved_IRQn                           72               // -
#define Reserved_IRQn                           73               // -
#define Reserved_IRQn                           74               // -
#define Reserved_IRQn                           75               // -
#define Reserved_IRQn                           76               // -
#define Reserved_IRQn                           77               // -
#define Reserved_IRQn                           78               // -
#define Reserved_IRQn                           79               // -
#define Reserved_IRQn                           80               // -
#define Reserved_IRQn                           81               // -
#define Reserved_IRQn                           82               // -
#define Reserved_IRQn                           83               // -
#define Reserved_IRQn                           84               // -
#define Reserved_IRQn                           85               // -
#define Reserved_IRQn                           86               // -
#define Reserved_IRQn                           87               // -
#define Reserved_IRQn                           88               // -
#define Reserved_IRQn                           89               // -
#define Reserved_IRQn                           90               // -
#define Reserved_IRQn                           91               // -
#define Reserved_IRQn                           92               // -
#define Reserved_IRQn                           93               // -
#define Reserved_IRQn                           94               // -
#define Reserved_IRQn                           95               // -
#define Reserved_IRQn                           96               // -
#define Reserved_IRQn                           97               // -
#define Reserved_IRQn                           98               // -
#define Reserved_IRQn                           99               // -
#define Reserved_IRQn                           100              // -
#define Reserved_IRQn                           101              // -
#define Reserved_IRQn                           102              // -
#define Reserved_IRQn                           103              // -
#define Reserved_IRQn                           104              // -
#define Reserved_IRQn                           105              // -
#define Reserved_IRQn                           106              // -
#define Reserved_IRQn                           107              // -
#define Reserved_IRQn                           108              // -
#define Reserved_IRQn                           109              // -
#define Reserved_IRQn                           110              // -
#define Reserved_IRQn                           111              // -



//*****************************************************************************
//
// System Integration Module (SIM) registers
//
//*****************************************************************************

#define SIM_SOPT1                     (*((volatile uint32_t *)0x40047000))      // System Options Register 1 (SIM_SOPT1)
#define SIM_SOPT2                     (*((volatile uint32_t *)0x40048004))      // System Options Register 2 (SIM_SOPT2)
#define SIM_SOPT4                     (*((volatile uint32_t *)0x4004800C))      // System Options Register 4 (SIM_SOPT4)
#define SIM_SOPT5                     (*((volatile uint32_t *)0x40048010))      // System Options Register 5 (SIM_SOPT5)
#define SIM_SOPT7                     (*((volatile uint32_t *)0x40048018))      // System Options Register 7 (SIM_SOPT7)
#define SIM_SDID                      (*((volatile uint32_t *)0x40048024))      // System Device Identification Register (SIM_SDID)
#define SIM_SCGC4                     (*((volatile uint32_t *)0x40048034))      // System Clock Gating Control Register 4 (SIM_SCGC4)
#define SIM_SCGC5                     (*((volatile uint32_t *)0x40048038))      // System Clock Gating Control Register 5 (SIM_SCGC5)
#define SIM_SCGC6                     (*((volatile uint32_t *)0x4004803C))      // System Clock Gating Control Register 6 (SIM_SCGC6)
#define SIM_SCGC7                     (*((volatile uint32_t *)0x40048040))      // System Clock Gating Control Register 7 (SIM_SCGC7)
#define SIM_CLKDIV1                   (*((volatile uint32_t *)0x40048044))      // System Clock Divider Register 1 (SIM_CLKDIV1)
#define SIM_CLKDIV2                   (*((volatile uint32_t *)0x40048048))      // System Clock Divider Register 2 (SIM_CLKDIV2)
#define SIM_FCFG1                     (*((volatile uint32_t *)0x4004804C))      // Flash Configuration Register 1 (SIM_FCFG1)
#define SIM_FCFG2                     (*((volatile uint32_t *)0x40048050))      // Flash Configuration Register 2 (SIM_FCFG2)
#define SIM_UIDH                      (*((volatile uint32_t *)0x40048054))      // Unique Identification Register High (SIM_UIDH)
#define SIM_UIDMH                     (*((volatile uint32_t *)0x40048058))      // Unique Identification Register Mid-High (SIM_UIDMH)
#define SIM_UIDML                     (*((volatile uint32_t *)0x4004805C))      // Unique Identification Register Mid Low (SIM_UIDML)
#define SIM_UIDL                      (*((volatile uint32_t *)0x40048060))      // Unique Identification Register Low (SIM_UIDL)


//*****************************************************************************
//
// System Mode Controller registers
//
//*****************************************************************************

#define SMC_PMPROT                    (*((volatile uint32_t *)0x4007E000))      // Power Mode Protection Register (SMC_PMPROT)
#define SMC_PMCTRL                    (*((volatile uint32_t *)0x4007E001))      // Power Mode Control Register (SMC_PMCTRL)
#define SMC_VLLSCTRL                  (*((volatile uint32_t *)0x4007E002))      // VLLS Control Register (SMC_VLLSCTRL)
#define SMC_PMSTAT                    (*((volatile uint32_t *)0x4007E003))      // Power Mode Status Register (SMC_PMSTAT)


//*****************************************************************************
//
// Power Management Controller registers
//
//*****************************************************************************

#define PMC_LVDSC1                    (*((volatile uint32_t *)0x4007D000))      // Low Voltage Detect Status And Control 1 register
#define PMC_LVDSC2                    (*((volatile uint32_t *)0x4007D001))      // Low Voltage Detect Status And Control 2 register
#define PMC_REGSC                     (*((volatile uint32_t *)0x4007D002))      // Regulator Status And Control register


//*****************************************************************************
//
// Low-Leakage Wakeup Unit (LLWU) registers
//
//*****************************************************************************

#define LLWU_PE1                      (*((volatile uint32_t *)0x4007C000))      // LLWU Pin Enable 1 register
#define LLWU_PE2                      (*((volatile uint32_t *)0x4007C001))      // LLWU Pin Enable 2 register
#define LLWU_PE3                      (*((volatile uint32_t *)0x4007C002))      // LLWU Pin Enable 3 register
#define LLWU_PE4                      (*((volatile uint32_t *)0x4007C003))      // LLWU Pin Enable 4 register
#define LLWU_ME                       (*((volatile uint32_t *)0x4007C004))      // LLWU Module Enable register
#define LLWU_F1                       (*((volatile uint32_t *)0x4007C005))      // LLWU Flag 1 register
#define LLWU_F2                       (*((volatile uint32_t *)0x4007C006))      // LLWU Flag 2 register
#define LLWU_F3                       (*((volatile uint32_t *)0x4007C007))      // LLWU Flag 3 register
#define LLWU_FILT1                    (*((volatile uint32_t *)0x4007C008))      // LLWU Pin Filter 1 register
#define LLWU_FILT2                    (*((volatile uint32_t *)0x4007C009))      // LLWU Pin Filter 2 register
#define LLWU_RST                      (*((volatile uint32_t *)0x4007C00A))      // LLWU Reset Enable register


//*****************************************************************************
//
// Miscellaneous Control Module (MCM) registers
//
//*****************************************************************************

#define MCM_PLASC                     (*((volatile uint32_t *)0xE0080008))      // Crossbar Switch (AXBS) Slave Configuration
#define MCM_PLAMC                     (*((volatile uint32_t *)0xE008000A))      // Crossbar Switch (AXBS) Master Configuration
#define MCM_PLACR                     (*((volatile uint32_t *)0xE008000C))      // Crossbar Switch (AXBS) Control Register


//*****************************************************************************
//
// Direct Memory Access Multiplexer (DMAMUX) registers
//
//*****************************************************************************

#define DMAMUX0_CHCFG0                (*((volatile uint32_t *)0x40021000))      // Channel Configuration register
#define DMAMUX0_CHCFG1                (*((volatile uint32_t *)0x40021001))      // Channel Configuration register
#define DMAMUX0_CHCFG2                (*((volatile uint32_t *)0x40021002))      // Channel Configuration register
#define DMAMUX0_CHCFG3                (*((volatile uint32_t *)0x40021003))      // Channel Configuration register
#define DMAMUX0_CHCFG4                (*((volatile uint32_t *)0x40021004))      // Channel Configuration register
#define DMAMUX0_CHCFG5                (*((volatile uint32_t *)0x40021005))      // Channel Configuration register
#define DMAMUX0_CHCFG6                (*((volatile uint32_t *)0x40021006))      // Channel Configuration register
#define DMAMUX0_CHCFG7                (*((volatile uint32_t *)0x40021007))      // Channel Configuration register
#define DMAMUX0_CHCFG8                (*((volatile uint32_t *)0x40021008))      // Channel Configuration register
#define DMAMUX0_CHCFG9                (*((volatile uint32_t *)0x40021009))      // Channel Configuration register
#define DMAMUX0_CHCFG10               (*((volatile uint32_t *)0x4002100A))      // Channel Configuration register
#define DMAMUX0_CHCFG11               (*((volatile uint32_t *)0x4002100B))      // Channel Configuration register
#define DMAMUX0_CHCFG12               (*((volatile uint32_t *)0x4002100C))      // Channel Configuration register
#define DMAMUX0_CHCFG13               (*((volatile uint32_t *)0x4002100D))      // Channel Configuration register
#define DMAMUX0_CHCFG14               (*((volatile uint32_t *)0x4002100E))      // Channel Configuration register
#define DMAMUX0_CHCFG15               (*((volatile uint32_t *)0x4002100F))      // Channel Configuration register


//*****************************************************************************
//
// Direct Memory Access Controller (eDMA) registers
//
//*****************************************************************************

#define DMA_CR                        (*((volatile uint32_t *)0x40008000))      // Control Register
#define DMA_ES                        (*((volatile uint32_t *)0x40008004))      // Error Status Register
#define DMA_ERQ                       (*((volatile uint32_t *)0x4000800C))      // Enable Request Register
#define DMA_EEI                       (*((volatile uint32_t *)0x40008014))      // Enable Error Interrupt Register
#define DMA_CEEI                      (*((volatile uint32_t *)0x40008018))      // Clear Enable Error Interrupt Register
#define DMA_SEEI                      (*((volatile uint32_t *)0x40008019))      // Set Enable Error Interrupt Register
#define DMA_CERQ                      (*((volatile uint32_t *)0x4000801A))      // Clear Enable Request Register
#define DMA_SERQ                      (*((volatile uint32_t *)0x4000801B))      // Set Enable Request Register
#define DMA_CDNE                      (*((volatile uint32_t *)0x4000801C))      // Clear DONE Status Bit Register
#define DMA_SSRT                      (*((volatile uint32_t *)0x4000801D))      // Set START Bit Register


//*****************************************************************************
//
// External Watchdog Monitor (EWM) registers
//
//*****************************************************************************

#define EWM_CTRL                      (*((volatile uint32_t *)0x40061000))      // Control Register (EWM_CTRL)
#define EWM_SERV                      (*((volatile uint32_t *)0x40061001))      // Service Register (EWM_SERV)
#define EWM_CMPL                      (*((volatile uint32_t *)0x40061002))      // Compare Low Register (EWM_CMPL)
#define EWM_CMPH                      (*((volatile uint32_t *)0x40061003))      // Compare High Register (EWM_CMPH)


//*****************************************************************************
//
// Watchdog Timer (WDOG) registers
//
//*****************************************************************************

#define WDOG_STCTRLH                  (*((volatile uint32_t *)0x40052000))      // Watchdog Status and Control Register High
#define WDOG_STCTRLL                  (*((volatile uint32_t *)0x40052002))      // Watchdog Status and Control Register Low
#define WDOG_TOVALH                   (*((volatile uint32_t *)0x40052004))      // Watchdog Time-out Value Register High
#define WDOG_TOVALL                   (*((volatile uint32_t *)0x40052006))      // Watchdog Time-out Value Register Low
#define WDOG_WINH                     (*((volatile uint32_t *)0x40052008))      // Watchdog Window Register High
#define WDOG_WINL                     (*((volatile uint32_t *)0x4005200A))      // Watchdog Window Register Low
#define WDOG_REFRESH                  (*((volatile uint32_t *)0x4005200C))      // Watchdog Refresh register
#define WDOG_UNLOCK                   (*((volatile uint32_t *)0x4005200E))      // Watchdog Unlock register
#define WDOG_TMROUTH                  (*((volatile uint32_t *)0x40052010))      // Watchdog Timer Output Register High
#define WDOG_TMROUTL                  (*((volatile uint32_t *)0x40052012))      // Watchdog Timer Output Register Low
#define WDOG_RSTCNT                   (*((volatile uint32_t *)0x40052014))      // Watchdog Reset Count register
#define WDOG_PRESC                    (*((volatile uint32_t *)0x40052016))      // Watchdog Prescaler register


//*****************************************************************************
//
// Multipurpose Clock Generator (MCG) registers
//
//*****************************************************************************

#define MCG_C1                        (*((volatile uint32_t *)0x40064000))      // MCG Control 1 Register (MCG_C1)
#define MCG_C2                        (*((volatile uint32_t *)0x40064001))      // MCG Control 2 Register (MCG_C2)
#define MCG_C3                        (*((volatile uint32_t *)0x40064002))      // MCG Control 3 Register (MCG_C3)
#define MCG_C4                        (*((volatile uint32_t *)0x40064003))      // MCG Control 4 Register (MCG_C4)
#define MCG_C5                        (*((volatile uint32_t *)0x40064004))      // MCG Control 5 Register (MCG_C5)
#define MCG_C6                        (*((volatile uint32_t *)0x40064005))      // MCG Control 6 Register (MCG_C6)
#define MCG_S                         (*((volatile uint32_t *)0x40064006))      // MCG Status Register (MCG_S)
#define MCG_SC                        (*((volatile uint32_t *)0x40064008))      // MCG Status and Control Register (MCG_SC)
#define MCG_ATCVH                     (*((volatile uint32_t *)0x4006400A))      // MCG Auto Trim Compare Value High Register (MCG_ATCVH)
#define MCG_ATCVL                     (*((volatile uint32_t *)0x4006400B))      // MCG Auto Trim Compare Value Low Register (MCG_ATCVL)
#define MCG_C7                        (*((volatile uint32_t *)0x4006400C))      // MCG Control 7 Register (MCG_C7)
#define MCG_C8                        (*((volatile uint32_t *)0x4006400D))      // MCG Control 8 Register (MCG_C8)


//*****************************************************************************
//
// Oscillator (OSC) registers
//
//*****************************************************************************

#define OSC0_CR                       (*((volatile uint32_t *)0x40065000))      // OSC Control Register


//*****************************************************************************
//
// Flash Memory Controller (FMC) registers
//
//*****************************************************************************

#define FMC_PFAPR                     (*((volatile uint32_t *)0x4001F000))      // Flash Access Protection Register (FMC_PFAPR)
#define FMC_PFB0CR                    (*((volatile uint32_t *)0x4001F004))      // Flash Control Register (FMC_PFB0CR)
#define FMC_TAGVDW0S0                 (*((volatile uint32_t *)0x4001F100))      // Cache Tag Storage (FMC_TAGVDW0S0)
#define FMC_TAGVDW0S1                 (*((volatile uint32_t *)0x4001F104))      // Cache Tag Storage (FMC_TAGVDW0S1)
#define FMC_TAGVDW1S0                 (*((volatile uint32_t *)0x4001F108))      // Cache Tag Storage (FMC_TAGVDW1S0)
#define FMC_TAGVDW1S1                 (*((volatile uint32_t *)0x4001F10C))      // Cache Tag Storage (FMC_TAGVDW1S1)
#define FMC_TAGVDW2S0                 (*((volatile uint32_t *)0x4001F110))      // Cache Tag Storage (FMC_TAGVDW2S0)
#define FMC_TAGVDW2S1                 (*((volatile uint32_t *)0x4001F114))      // Cache Tag Storage (FMC_TAGVDW2S1)
#define FMC_TAGVDW3S0                 (*((volatile uint32_t *)0x4001F118))      // Cache Tag Storage (FMC_TAGVDW3S0)
#define FMC_TAGVDW3S1                 (*((volatile uint32_t *)0x4001F11C))      // Cache Tag Storage (FMC_TAGVDW3S1)
#define FMC_DATAW0S0                  (*((volatile uint32_t *)0x4001F200))      // Cache Data Storage (FMC_DATAW0S0)
#define FMC_DATAW0S1                  (*((volatile uint32_t *)0x4001F204))      // Cache Data Storage (FMC_DATAW0S1)
#define FMC_DATAW1S0                  (*((volatile uint32_t *)0x4001F208))      // Cache Data Storage (FMC_DATAW1S0)
#define FMC_DATAW1S1                  (*((volatile uint32_t *)0x4001F20C))      // Cache Data Storage (FMC_DATAW1S1)
#define FMC_DATAW2S0                  (*((volatile uint32_t *)0x4001F210))      // Cache Data Storage (FMC_DATAW2S0)
#define FMC_DATAW2S1                  (*((volatile uint32_t *)0x4001F214))      // Cache Data Storage (FMC_DATAW2S1)
#define FMC_DATAW3S0                  (*((volatile uint32_t *)0x4001F218))      // Cache Data Storage (FMC_DATAW3S0)
#define FMC_DATAW3S1                  (*((volatile uint32_t *)0x4001F21C))      // Cache Data Storage (FMC_DATAW3S1)


//*****************************************************************************
//
// Cyclic Redundancy Check (CRC) registers
//
//*****************************************************************************

#define CRC_CRC                       (*((volatile uint32_t *)0x40032000))      // CRC Data register (CRC_CRC)
#define CRC_GPOLY                     (*((volatile uint32_t *)0x40032004))      // CRC Polynomial register (CRC_GPOLY)
#define CRC_CTRL                      (*((volatile uint32_t *)0x40032008))      // CRC Control register (CRC_CTRL)


//*****************************************************************************
//
// Analog-to-Digital Converter (ADC) registers
//
//*****************************************************************************

#define ADC0_SC1A                     (*((volatile uint32_t *)0x4003B000))      // ADC status and control registers 1 (ADC0_SC1A)
#define ADC0_SC1B                     (*((volatile uint32_t *)0x4003B004))      // ADC status and control registers 1 (ADC0_SC1B)
#define ADC0_CFG1                     (*((volatile uint32_t *)0x4003B008))      // ADC configuration register 1 (ADC0_CFG1)
#define ADC0_CFG2                     (*((volatile uint32_t *)0x4003B00C))      // Configuration register 2 (ADC0_CFG2)
#define ADC0_RA                       (*((volatile uint32_t *)0x4003B010))      // ADC data result register (ADC0_RA)
#define ADC0_RB                       (*((volatile uint32_t *)0x4003B014))      // ADC data result register (ADC0_RB)
#define ADC0_CV1                      (*((volatile uint32_t *)0x4003B018))      // Compare value registers (ADC0_CV1)
#define ADC0_CV2                      (*((volatile uint32_t *)0x4003B01C))      // Compare value registers (ADC0_CV2)
#define ADC0_SC2                      (*((volatile uint32_t *)0x4003B020))      // Status and control register 2 (ADC0_SC2)
#define ADC0_SC3                      (*((volatile uint32_t *)0x4003B024))      // Status and control register 3 (ADC0_SC3)
#define ADC0_OFS                      (*((volatile uint32_t *)0x4003B028))      // ADC offset correction register (ADC0_OFS)
#define ADC0_PG                       (*((volatile uint32_t *)0x4003B02C))      // ADC plus-side gain register (ADC0_PG)
#define ADC0_CLPD                     (*((volatile uint32_t *)0x4003B034))      // ADC plus-side general calibration value register (ADC0_CLPD)
#define ADC0_CLPS                     (*((volatile uint32_t *)0x4003B038))      // ADC plus-side general calibration value register (ADC0_CLPS)
#define ADC0_CLP4                     (*((volatile uint32_t *)0x4003B03C))      // ADC plus-side general calibration value register (ADC0_CLP4)
#define ADC0_CLP3                     (*((volatile uint32_t *)0x4003B040))      // ADC plus-side general calibration value register (ADC0_CLP3)
#define ADC0_CLP2                     (*((volatile uint32_t *)0x4003B044))      // ADC plus-side general calibration value register (ADC0_CLP2)
#define ADC0_CLP1                     (*((volatile uint32_t *)0x4003B048))      // ADC plus-side general calibration value register (ADC0_CLP1)
#define ADC0_CLP0                     (*((volatile uint32_t *)0x4003B04C))      // ADC plus-side general calibration value register (ADC0_CLP0)


//*****************************************************************************
//
// Comparator (CMP) registers
//
//*****************************************************************************

#define CMP0_CR0                      (*((volatile uint32_t *)0x40073000))      // CMP Control Register 0 (CMP0_CR0)
#define CMP0_CR1                      (*((volatile uint32_t *)0x40073001))      // CMP Control Register 1 (CMP0_CR1)
#define CMP0_FPR                      (*((volatile uint32_t *)0x40073002))      // CMP Filter Period Register (CMP0_FPR)
#define CMP0_SCR                      (*((volatile uint32_t *)0x40073003))      // CMP Status and Control Register (CMP0_SCR)
#define CMP0_DACCR                    (*((volatile uint32_t *)0x40073004))      // DAC Control Register (CMP0_DACCR)
#define CMP0_MUXCR                    (*((volatile uint32_t *)0x40073005))      // MUX Control Register (CMP0_MUXCR)
#define CMP1_CR0                      (*((volatile uint32_t *)0x40073008))      // CMP Control Register 0 (CMP1_CR0)
#define CMP1_CR1                      (*((volatile uint32_t *)0x40073009))      // CMP Control Register 1 (CMP1_CR1)
#define CMP1_FPR                      (*((volatile uint32_t *)0x4007300A))      // CMP Filter Period Register (CMP1_FPR)
#define CMP1_SCR                      (*((volatile uint32_t *)0x4007300B))      // CMP Status and Control Register (CMP1_SCR)
#define CMP1_DACCR                    (*((volatile uint32_t *)0x4007300C))      // DAC Control Register (CMP1_DACCR)
#define CMP1_MUXCR                    (*((volatile uint32_t *)0x4007300D))      // MUX Control Register (CMP1_MUXCR)


//*****************************************************************************
//
// Programmable Delay Block (PDB) registers
//
//*****************************************************************************

#define PDB0_SC                       (*((volatile uint32_t *)0x40036000))      // Status and Control Register
#define PDB0_MOD                      (*((volatile uint32_t *)0x40036004))      // Modulus Register
#define PDB0_CNT                      (*((volatile uint32_t *)0x40036008))      // Counter Register
#define PDB0_IDLY                     (*((volatile uint32_t *)0x4003600C))      // Interrupt Delay Register
#define PDB0_CH0C1                    (*((volatile uint32_t *)0x40036010))      // Channel n Control Register 1
#define PDB0_CH0S                     (*((volatile uint32_t *)0x40036014))      // Channel n Status Register
#define PDB0_CH0DLY0                  (*((volatile uint32_t *)0x40036018))      // Channel n Delay 0 Register
#define PDB0_CH0DLY1                  (*((volatile uint32_t *)0x4003601C))      // Channel n Delay 1 Register
#define PDB0_POEN                     (*((volatile uint32_t *)0x40036190))      // Pulse-Out n Enable Register
#define PDB0_PO0DLY                   (*((volatile uint32_t *)0x40036194))      // Pulse-Out n Delay Register
#define PDB0_PO1DLY                   (*((volatile uint32_t *)0x40036198))      // Pulse-Out n Delay Register


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


//*****************************************************************************
//
// Periodic Interrupt Timer (PIT) registers
//
//*****************************************************************************

#define PIT_MCR                       (*((volatile uint32_t *)0x40037000))      // PIT Module Control Register
#define PIT_LDVAL0                    (*((volatile uint32_t *)0x40037100))      // Timer Load Value Register
#define PIT_CVAL0                     (*((volatile uint32_t *)0x40037104))      // Current Timer Value Register
#define PIT_TCTRL0                    (*((volatile uint32_t *)0x40037108))      // Timer Control Register
#define PIT_TFLG0                     (*((volatile uint32_t *)0x4003710C))      // Timer Flag Register
#define PIT_LDVAL1                    (*((volatile uint32_t *)0x40037110))      // Timer Load Value Register
#define PIT_CVAL1                     (*((volatile uint32_t *)0x40037114))      // Current Timer Value Register
#define PIT_TCTRL1                    (*((volatile uint32_t *)0x40037118))      // Timer Control Register
#define PIT_TFLG1                     (*((volatile uint32_t *)0x4003711C))      // Timer Flag Register
#define PIT_LDVAL2                    (*((volatile uint32_t *)0x40037120))      // Timer Load Value Register
#define PIT_CVAL2                     (*((volatile uint32_t *)0x40037124))      // Current Timer Value Register
#define PIT_TCTRL2                    (*((volatile uint32_t *)0x40037128))      // Timer Control Register
#define PIT_TFLG2                     (*((volatile uint32_t *)0x4003712C))      // Timer Flag Register
#define PIT_LDVAL3                    (*((volatile uint32_t *)0x40037130))      // Timer Load Value Register
#define PIT_CVAL3                     (*((volatile uint32_t *)0x40037134))      // Current Timer Value Register
#define PIT_TCTRL3                    (*((volatile uint32_t *)0x40037138))      // Timer Control Register
#define PIT_TFLG3                     (*((volatile uint32_t *)0x4003713C))      // Timer Flag Register


//*****************************************************************************
//
// Low-Power Timer (LPTMR) registers
//
//*****************************************************************************

#define LPTMR0_CSR                    (*((volatile uint32_t *)0x40040000))      // Low Power Timer Control Status Register (LPTMR0_CSR)
#define LPTMR0_PSR                    (*((volatile uint32_t *)0x40040004))      // Low Power Timer Prescale Register (LPTMR0_PSR)
#define LPTMR0_CMR                    (*((volatile uint32_t *)0x40040008))      // Low Power Timer Compare Register (LPTMR0_CMR)
#define LPTMR0_CNR                    (*((volatile uint32_t *)0x4004000C))      // Low Power Timer Counter Register (LPTMR0_CNR)


//*****************************************************************************
//
// Carrier Modulator Transmitter (CMT) registers
//
//*****************************************************************************

#define CMT_CGH1                      (*((volatile uint32_t *)0x40062000))      // CMT Carrier Generator High Data Register 1 (CMT_CGH1)
#define CMT_CGL1                      (*((volatile uint32_t *)0x40062001))      // CMT Carrier Generator Low Data Register 1 (CMT_CGL1)
#define CMT_CGH2                      (*((volatile uint32_t *)0x40062002))      // CMT Carrier Generator High Data Register 2 (CMT_CGH2)
#define CMT_CGL2                      (*((volatile uint32_t *)0x40062003))      // CMT Carrier Generator Low Data Register 2 (CMT_CGL2)
#define CMT_OC                        (*((volatile uint32_t *)0x40062004))      // CMT Output Control Register (CMT_OC)
#define CMT_MSC                       (*((volatile uint32_t *)0x40062005))      // CMT Modulator Status and Control Register (CMT_MSC)
#define CMT_CMD1                      (*((volatile uint32_t *)0x40062006))      // CMT Modulator Data Register Mark High (CMT_CMD1)
#define CMT_CMD2                      (*((volatile uint32_t *)0x40062007))      // CMT Modulator Data Register Mark Low (CMT_CMD2)
#define CMT_CMD3                      (*((volatile uint32_t *)0x40062008))      // CMT Modulator Data Register Space High (CMT_CMD3)
#define CMT_CMD4                      (*((volatile uint32_t *)0x40062009))      // CMT Modulator Data Register Space Low (CMT_CMD4)
#define CMT_PPS                       (*((volatile uint32_t *)0x4006200A))      // CMT Primary Prescaler Register (CMT_PPS)
#define CMT_DMA                       (*((volatile uint32_t *)0x4006200B))      // CMT Direct Memory Access Register (CMT_DMA)


//*****************************************************************************
//
// Real Time Clock (RTC) registers
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
// SPI (DSPI) registers
//
//*****************************************************************************

#define SPI0_MCR                      (*((volatile uint32_t *)0x4002C000))      // DSPI Module Configuration Register (SPI0_MCR)
#define SPI0_TCR                      (*((volatile uint32_t *)0x4002C008))      // DSPI Transfer Count Register (SPI0_TCR)
#define SPI0_CTAR0                    (*((volatile uint32_t *)0x4002C00C))      // DSPI Clock and Transfer Attributes Register (In Master Mode) (SPI0_CTAR0)
#define SPI0_CTAR0_SLAVE              (*((volatile uint32_t *)0x4002C00C))      // DSPI Clock and Transfer Attributes Register (In Slave Mode) (SPI0_CTAR0_SLAVE)
#define SPI0_CTAR1                    (*((volatile uint32_t *)0x4002C010))      // DSPI Clock and Transfer Attributes Register (In Master Mode) (SPI0_CTAR1)
#define SPI0_SR                       (*((volatile uint32_t *)0x4002C02C))      // DSPI Status Register (SPI0_SR)
#define SPI0_RSER                     (*((volatile uint32_t *)0x4002C030))      // DSPI DMA/Interrupt Request Select and Enable Register (SPI0_RSER)
#define SPI0_PUSHR                    (*((volatile uint32_t *)0x4002C034))      // DSPI PUSH TX FIFO Register In Master Mode (SPI0_PUSHR)
#define SPI0_PUSHR_SLAVE              (*((volatile uint32_t *)0x4002C034))      // DSPI PUSH TX FIFO Register In Slave Mode (SPI0_PUSHR_SLAVE)
#define SPI0_POPR                     (*((volatile uint32_t *)0x4002C038))      // DSPI POP RX FIFO Register (SPI0_POPR)
#define SPI0_TXFR0                    (*((volatile uint32_t *)0x4002C03C))      // DSPI Transmit FIFO Registers (SPI0_TXFR0)
#define SPI0_TXFR1                    (*((volatile uint32_t *)0x4002C040))      // DSPI Transmit FIFO Registers (SPI0_TXFR1)
#define SPI0_TXFR2                    (*((volatile uint32_t *)0x4002C044))      // DSPI Transmit FIFO Registers (SPI0_TXFR2)
#define SPI0_TXFR3                    (*((volatile uint32_t *)0x4002C048))      // DSPI Transmit FIFO Registers (SPI0_TXFR3)
#define SPI0_RXFR0                    (*((volatile uint32_t *)0x4002C07C))      // DSPI Receive FIFO Registers (SPI0_RXFR0)
#define SPI0_RXFR1                    (*((volatile uint32_t *)0x4002C080))      // DSPI Receive FIFO Registers (SPI0_RXFR1)
#define SPI0_RXFR2                    (*((volatile uint32_t *)0x4002C084))      // DSPI Receive FIFO Registers (SPI0_RXFR2)
#define SPI0_RXFR3                    (*((volatile uint32_t *)0x4002C088))      // DSPI Receive FIFO Registers (SPI0_RXFR3)


//*****************************************************************************
//
// Inter-Integrated Circuit (I2C) registers
//
//*****************************************************************************

#define I2C0_A1                       (*((volatile uint32_t *)0x40066000))      // I2C Address Register 1
#define I2C0_F                        (*((volatile uint32_t *)0x40066001))      // I2C Frequency Divider register
#define I2C0_C1                       (*((volatile uint32_t *)0x40066002))      // I2C Control Register 1
#define I2C0_S                        (*((volatile uint32_t *)0x40066003))      // I2C Status register
#define I2C0_D                        (*((volatile uint32_t *)0x40066004))      // I2C Data I/O register
#define I2C0_C2                       (*((volatile uint32_t *)0x40066005))      // I2C Control Register 2
#define I2C0_FLT                      (*((volatile uint32_t *)0x40066006))      // I2C Programmable Input Glitch Filter register
#define I2C0_RA                       (*((volatile uint32_t *)0x40066007))      // I2C Range Address register
#define I2C0_SMB                      (*((volatile uint32_t *)0x40066008))      // I2C SMBus Control and Status register
#define I2C0_A2                       (*((volatile uint32_t *)0x40066009))      // I2C Address Register 2
#define I2C0_SLTH                     (*((volatile uint32_t *)0x4006600A))      // I2C SCL Low Timeout Register High
#define I2C0_SLTL                     (*((volatile uint32_t *)0x4006600B))      // I2C SCL Low Timeout Register Low


//*****************************************************************************
//
// Universal Asynchronous Receiver/Transmitter (UART) registers
//
//*****************************************************************************

#define UART0_BDH                     (*((volatile uint32_t *)0x4006A000))      // UART Baud Rate Registers: High (UART0_BDH)
#define UART0_BDL                     (*((volatile uint32_t *)0x4006A001))      // UART Baud Rate Registers: Low (UART0_BDL)
#define UART0_C1                      (*((volatile uint32_t *)0x4006A002))      // UART Control Register 1 (UART0_C1)
#define UART0_C2                      (*((volatile uint32_t *)0x4006A003))      // UART Control Register 2 (UART0_C2)
#define UART0_S1                      (*((volatile uint32_t *)0x4006A004))      // UART Status Register 1 (UART0_S1)
#define UART0_S2                      (*((volatile uint32_t *)0x4006A005))      // UART Status Register 2 (UART0_S2)
#define UART0_C3                      (*((volatile uint32_t *)0x4006A006))      // UART Control Register 3 (UART0_C3)
#define UART0_D                       (*((volatile uint32_t *)0x4006A007))      // UART Data Register (UART0_D)
#define UART0_MA1                     (*((volatile uint32_t *)0x4006A008))      // UART Match Address Registers 1 (UART0_MA1)
#define UART0_MA2                     (*((volatile uint32_t *)0x4006A009))      // UART Match Address Registers 2 (UART0_MA2)
#define UART0_C4                      (*((volatile uint32_t *)0x4006A00A))      // UART Control Register 4 (UART0_C4)
#define UART0_C5                      (*((volatile uint32_t *)0x4006A00B))      // UART Control Register 5 (UART0_C5)
#define UART0_ED                      (*((volatile uint32_t *)0x4006A00C))      // UART Extended Data Register (UART0_ED)
#define UART0_MODEM                   (*((volatile uint32_t *)0x4006A00D))      // UART Modem Register (UART0_MODEM)
#define UART0_IR                      (*((volatile uint32_t *)0x4006A00E))      // UART Infrared Register (UART0_IR)
#define UART0_PFIFO                   (*((volatile uint32_t *)0x4006A010))      // UART FIFO Parameters (UART0_PFIFO)
#define UART0_CFIFO                   (*((volatile uint32_t *)0x4006A011))      // UART FIFO Control Register (UART0_CFIFO)
#define UART0_SFIFO                   (*((volatile uint32_t *)0x4006A012))      // UART FIFO Status Register (UART0_SFIFO)
#define UART0_TWFIFO                  (*((volatile uint32_t *)0x4006A013))      // UART FIFO Transmit Watermark (UART0_TWFIFO)
#define UART0_TCFIFO                  (*((volatile uint32_t *)0x4006A014))      // UART FIFO Transmit Count (UART0_TCFIFO)
#define UART0_RWFIFO                  (*((volatile uint32_t *)0x4006A015))      // UART FIFO Receive Watermark (UART0_RWFIFO)
#define UART0_RCFIFO                  (*((volatile uint32_t *)0x4006A016))      // UART FIFO Receive Count (UART0_RCFIFO)
#define UART0_C7816                   (*((volatile uint32_t *)0x4006A018))      // UART 7816 Control Register (UART0_C7816)
#define UART0_IE7816                  (*((volatile uint32_t *)0x4006A019))      // UART 7816 Interrupt Enable Register (UART0_IE7816)
#define UART0_IS7816                  (*((volatile uint32_t *)0x4006A01A))      // UART 7816 Interrupt Status Register (UART0_IS7816)
#define UART0_WP7816T0                (*((volatile uint32_t *)0x4006A01B))      // UART 7816 Wait Parameter Register (UART0_WP7816T0)
#define UART0_WP7816T1                (*((volatile uint32_t *)0x4006A01B))      // UART 7816 Wait Parameter Register (UART0_WP7816T1)
#define UART0_WN7816                  (*((volatile uint32_t *)0x4006A01C))      // UART 7816 Wait N Register (UART0_WN7816)
#define UART0_WF7816                  (*((volatile uint32_t *)0x4006A01D))      // UART 7816 Wait FD Register (UART0_WF7816)
#define UART0_ET7816                  (*((volatile uint32_t *)0x4006A01E))      // UART 7816 Error Threshold Register (UART0_ET7816)
#define UART0_TL7816                  (*((volatile uint32_t *)0x4006A01F))      // UART 7816 Transmit Length Register (UART0_TL7816)
#define UART0_C6                      (*((volatile uint32_t *)0x4006A021))      // UART CEA709.1-B Control Register 6 (UART0_C6)
#define UART0_PCTH                    (*((volatile uint32_t *)0x4006A022))      // UART CEA709.1-B Packet Cycle Time Counter High (UART0_PCTH)
#define UART0_PCTL                    (*((volatile uint32_t *)0x4006A023))      // UART CEA709.1-B Packet Cycle Time Counter Low (UART0_PCTL)
#define UART0_B1T                     (*((volatile uint32_t *)0x4006A024))      // UART CEA709.1-B Beta1 Timer (UART0_B1T)
#define UART0_SDTH                    (*((volatile uint32_t *)0x4006A025))      // UART CEA709.1-B Secondary Delay Timer High (UART0_SDTH)
#define UART0_SDTL                    (*((volatile uint32_t *)0x4006A026))      // UART CEA709.1-B Secondary Delay Timer Low (UART0_SDTL)
#define UART0_PRE                     (*((volatile uint32_t *)0x4006A027))      // UART CEA709.1-B Preamble (UART0_PRE)
#define UART0_TPL                     (*((volatile uint32_t *)0x4006A028))      // UART CEA709.1-B Transmit Packet Length (UART0_TPL)
#define UART0_IE                      (*((volatile uint32_t *)0x4006A029))      // UART CEA709.1-B Interrupt Enable Register (UART0_IE)
#define UART0_WB                      (*((volatile uint32_t *)0x4006A02A))      // UART CEA709.1-B WBASE (UART0_WB)
#define UART0_S3                      (*((volatile uint32_t *)0x4006A02B))      // UART CEA709.1-B Status Register (UART0_S3)
#define UART0_S4                      (*((volatile uint32_t *)0x4006A02C))      // UART CEA709.1-B Status Register (UART0_S4)
#define UART0_RPL                     (*((volatile uint32_t *)0x4006A02D))      // UART CEA709.1-B Received Packet Length (UART0_RPL)
#define UART0_RPREL                   (*((volatile uint32_t *)0x4006A02E))      // UART CEA709.1-B Received Preamble Length (UART0_RPREL)
#define UART0_CPW                     (*((volatile uint32_t *)0x4006A02F))      // UART CEA709.1-B Collision Pulse Width (UART0_CPW)
#define UART0_RIDT                    (*((volatile uint32_t *)0x4006A030))      // UART CEA709.1-B Receive Indeterminate Time (UART0_RIDT)
#define UART0_TIDT                    (*((volatile uint32_t *)0x4006A031))      // UART CEA709.1-B Transmit Indeterminate Time (UART0_TIDT)
#define UART1_BDH                     (*((volatile uint32_t *)0x4006B000))      // UART Baud Rate Registers: High (UART1_BDH)
#define UART1_BDL                     (*((volatile uint32_t *)0x4006B001))      // UART Baud Rate Registers: Low (UART1_BDL)
#define UART1_C1                      (*((volatile uint32_t *)0x4006B002))      // UART Control Register 1 (UART1_C1)
#define UART1_C2                      (*((volatile uint32_t *)0x4006B003))      // UART Control Register 2 (UART1_C2)
#define UART1_S1                      (*((volatile uint32_t *)0x4006B004))      // UART Status Register 1 (UART1_S1)
#define UART1_S2                      (*((volatile uint32_t *)0x4006B005))      // UART Status Register 2 (UART1_S2)
#define UART1_C3                      (*((volatile uint32_t *)0x4006B006))      // UART Control Register 3 (UART1_C3)
#define UART1_D                       (*((volatile uint32_t *)0x4006B007))      // UART Data Register (UART1_D)
#define UART1_MA1                     (*((volatile uint32_t *)0x4006B008))      // UART Match Address Registers 1 (UART1_MA1)
#define UART1_MA2                     (*((volatile uint32_t *)0x4006B009))      // UART Match Address Registers 2 (UART1_MA2)
#define UART1_C4                      (*((volatile uint32_t *)0x4006B00A))      // UART Control Register 4 (UART1_C4)
#define UART1_C5                      (*((volatile uint32_t *)0x4006B00B))      // UART Control Register 5 (UART1_C5)
#define UART1_ED                      (*((volatile uint32_t *)0x4006B00C))      // UART Extended Data Register (UART1_ED)
#define UART1_MODEM                   (*((volatile uint32_t *)0x4006B00D))      // UART Modem Register (UART1_MODEM)
#define UART1_IR                      (*((volatile uint32_t *)0x4006B00E))      // UART Infrared Register (UART1_IR)
#define UART1_PFIFO                   (*((volatile uint32_t *)0x4006B010))      // UART FIFO Parameters (UART1_PFIFO)
#define UART1_CFIFO                   (*((volatile uint32_t *)0x4006B011))      // UART FIFO Control Register (UART1_CFIFO)
#define UART1_SFIFO                   (*((volatile uint32_t *)0x4006B012))      // UART FIFO Status Register (UART1_SFIFO)
#define UART1_TWFIFO                  (*((volatile uint32_t *)0x4006B013))      // UART FIFO Transmit Watermark (UART1_TWFIFO)
#define UART1_TCFIFO                  (*((volatile uint32_t *)0x4006B014))      // UART FIFO Transmit Count (UART1_TCFIFO)
#define UART1_RWFIFO                  (*((volatile uint32_t *)0x4006B015))      // UART FIFO Receive Watermark (UART1_RWFIFO)
#define UART1_RCFIFO                  (*((volatile uint32_t *)0x4006B016))      // UART FIFO Receive Count (UART1_RCFIFO)
#define UART1_C7816                   (*((volatile uint32_t *)0x4006B018))      // UART 7816 Control Register (UART1_C7816)
#define UART1_IE7816                  (*((volatile uint32_t *)0x4006B019))      // UART 7816 Interrupt Enable Register (UART1_IE7816)
#define UART1_IS7816                  (*((volatile uint32_t *)0x4006B01A))      // UART 7816 Interrupt Status Register (UART1_IS7816)
#define UART1_WP7816T0                (*((volatile uint32_t *)0x4006B01B))      // UART 7816 Wait Parameter Register (UART1_WP7816T0)
#define UART1_WP7816T1                (*((volatile uint32_t *)0x4006B01B))      // UART 7816 Wait Parameter Register (UART1_WP7816T1)
#define UART1_WN7816                  (*((volatile uint32_t *)0x4006B01C))      // UART 7816 Wait N Register (UART1_WN7816)
#define UART1_WF7816                  (*((volatile uint32_t *)0x4006B01D))      // UART 7816 Wait FD Register (UART1_WF7816)
#define UART1_ET7816                  (*((volatile uint32_t *)0x4006B01E))      // UART 7816 Error Threshold Register (UART1_ET7816)
#define UART1_TL7816                  (*((volatile uint32_t *)0x4006B01F))      // UART 7816 Transmit Length Register (UART1_TL7816)
#define UART1_C6                      (*((volatile uint32_t *)0x4006B021))      // UART CEA709.1-B Control Register 6 (UART1_C6)
#define UART1_PCTH                    (*((volatile uint32_t *)0x4006B022))      // UART CEA709.1-B Packet Cycle Time Counter High (UART1_PCTH)
#define UART1_PCTL                    (*((volatile uint32_t *)0x4006B023))      // UART CEA709.1-B Packet Cycle Time Counter Low (UART1_PCTL)
#define UART1_B1T                     (*((volatile uint32_t *)0x4006B024))      // UART CEA709.1-B Beta1 Timer (UART1_B1T)
#define UART1_SDTH                    (*((volatile uint32_t *)0x4006B025))      // UART CEA709.1-B Secondary Delay Timer High (UART1_SDTH)
#define UART1_SDTL                    (*((volatile uint32_t *)0x4006B026))      // UART CEA709.1-B Secondary Delay Timer Low (UART1_SDTL)
#define UART1_PRE                     (*((volatile uint32_t *)0x4006B027))      // UART CEA709.1-B Preamble (UART1_PRE)
#define UART1_TPL                     (*((volatile uint32_t *)0x4006B028))      // UART CEA709.1-B Transmit Packet Length (UART1_TPL)
#define UART1_IE                      (*((volatile uint32_t *)0x4006B029))      // UART CEA709.1-B Interrupt Enable Register (UART1_IE)
#define UART1_WB                      (*((volatile uint32_t *)0x4006B02A))      // UART CEA709.1-B WBASE (UART1_WB)
#define UART1_S3                      (*((volatile uint32_t *)0x4006B02B))      // UART CEA709.1-B Status Register (UART1_S3)
#define UART1_S4                      (*((volatile uint32_t *)0x4006B02C))      // UART CEA709.1-B Status Register (UART1_S4)
#define UART1_RPL                     (*((volatile uint32_t *)0x4006B02D))      // UART CEA709.1-B Received Packet Length (UART1_RPL)
#define UART1_RPREL                   (*((volatile uint32_t *)0x4006B02E))      // UART CEA709.1-B Received Preamble Length (UART1_RPREL)
#define UART1_CPW                     (*((volatile uint32_t *)0x4006B02F))      // UART CEA709.1-B Collision Pulse Width (UART1_CPW)
#define UART1_RIDT                    (*((volatile uint32_t *)0x4006B030))      // UART CEA709.1-B Receive Indeterminate Time (UART1_RIDT)
#define UART1_TIDT                    (*((volatile uint32_t *)0x4006B031))      // UART CEA709.1-B Transmit Indeterminate Time (UART1_TIDT)
#define UART2_BDH                     (*((volatile uint32_t *)0x4006C000))      // UART Baud Rate Registers: High (UART2_BDH)
#define UART2_BDL                     (*((volatile uint32_t *)0x4006C001))      // UART Baud Rate Registers: Low (UART2_BDL)
#define UART2_C1                      (*((volatile uint32_t *)0x4006C002))      // UART Control Register 1 (UART2_C1)
#define UART2_C2                      (*((volatile uint32_t *)0x4006C003))      // UART Control Register 2 (UART2_C2)
#define UART2_S1                      (*((volatile uint32_t *)0x4006C004))      // UART Status Register 1 (UART2_S1)
#define UART2_S2                      (*((volatile uint32_t *)0x4006C005))      // UART Status Register 2 (UART2_S2)
#define UART2_C3                      (*((volatile uint32_t *)0x4006C006))      // UART Control Register 3 (UART2_C3)
#define UART2_D                       (*((volatile uint32_t *)0x4006C007))      // UART Data Register (UART2_D)
#define UART2_MA1                     (*((volatile uint32_t *)0x4006C008))      // UART Match Address Registers 1 (UART2_MA1)
#define UART2_MA2                     (*((volatile uint32_t *)0x4006C009))      // UART Match Address Registers 2 (UART2_MA2)
#define UART2_C4                      (*((volatile uint32_t *)0x4006C00A))      // UART Control Register 4 (UART2_C4)
#define UART2_C5                      (*((volatile uint32_t *)0x4006C00B))      // UART Control Register 5 (UART2_C5)
#define UART2_ED                      (*((volatile uint32_t *)0x4006C00C))      // UART Extended Data Register (UART2_ED)
#define UART2_MODEM                   (*((volatile uint32_t *)0x4006C00D))      // UART Modem Register (UART2_MODEM)
#define UART2_IR                      (*((volatile uint32_t *)0x4006C00E))      // UART Infrared Register (UART2_IR)
#define UART2_PFIFO                   (*((volatile uint32_t *)0x4006C010))      // UART FIFO Parameters (UART2_PFIFO)
#define UART2_CFIFO                   (*((volatile uint32_t *)0x4006C011))      // UART FIFO Control Register (UART2_CFIFO)
#define UART2_SFIFO                   (*((volatile uint32_t *)0x4006C012))      // UART FIFO Status Register (UART2_SFIFO)
#define UART2_TWFIFO                  (*((volatile uint32_t *)0x4006C013))      // UART FIFO Transmit Watermark (UART2_TWFIFO)
#define UART2_TCFIFO                  (*((volatile uint32_t *)0x4006C014))      // UART FIFO Transmit Count (UART2_TCFIFO)
#define UART2_RWFIFO                  (*((volatile uint32_t *)0x4006C015))      // UART FIFO Receive Watermark (UART2_RWFIFO)
#define UART2_RCFIFO                  (*((volatile uint32_t *)0x4006C016))      // UART FIFO Receive Count (UART2_RCFIFO)
#define UART2_C7816                   (*((volatile uint32_t *)0x4006C018))      // UART 7816 Control Register (UART2_C7816)
#define UART2_IE7816                  (*((volatile uint32_t *)0x4006C019))      // UART 7816 Interrupt Enable Register (UART2_IE7816)
#define UART2_IS7816                  (*((volatile uint32_t *)0x4006C01A))      // UART 7816 Interrupt Status Register (UART2_IS7816)
#define UART2_WP7816T0                (*((volatile uint32_t *)0x4006C01B))      // UART 7816 Wait Parameter Register (UART2_WP7816T0)
#define UART2_WP7816T1                (*((volatile uint32_t *)0x4006C01B))      // UART 7816 Wait Parameter Register (UART2_WP7816T1)
#define UART2_WN7816                  (*((volatile uint32_t *)0x4006C01C))      // UART 7816 Wait N Register (UART2_WN7816)
#define UART2_WF7816                  (*((volatile uint32_t *)0x4006C01D))      // UART 7816 Wait FD Register (UART2_WF7816)
#define UART2_ET7816                  (*((volatile uint32_t *)0x4006C01E))      // UART 7816 Error Threshold Register (UART2_ET7816)
#define UART2_TL7816                  (*((volatile uint32_t *)0x4006C01F))      // UART 7816 Transmit Length Register (UART2_TL7816)
#define UART2_C6                      (*((volatile uint32_t *)0x4006C021))      // UART CEA709.1-B Control Register 6 (UART2_C6)
#define UART2_PCTH                    (*((volatile uint32_t *)0x4006C022))      // UART CEA709.1-B Packet Cycle Time Counter High (UART2_PCTH)
#define UART2_PCTL                    (*((volatile uint32_t *)0x4006C023))      // UART CEA709.1-B Packet Cycle Time Counter Low (UART2_PCTL)
#define UART2_B1T                     (*((volatile uint32_t *)0x4006C024))      // UART CEA709.1-B Beta1 Timer (UART2_B1T)
#define UART2_SDTH                    (*((volatile uint32_t *)0x4006C025))      // UART CEA709.1-B Secondary Delay Timer High (UART2_SDTH)
#define UART2_SDTL                    (*((volatile uint32_t *)0x4006C026))      // UART CEA709.1-B Secondary Delay Timer Low (UART2_SDTL)
#define UART2_PRE                     (*((volatile uint32_t *)0x4006C027))      // UART CEA709.1-B Preamble (UART2_PRE)
#define UART2_TPL                     (*((volatile uint32_t *)0x4006C028))      // UART CEA709.1-B Transmit Packet Length (UART2_TPL)
#define UART2_IE                      (*((volatile uint32_t *)0x4006C029))      // UART CEA709.1-B Interrupt Enable Register (UART2_IE)
#define UART2_WB                      (*((volatile uint32_t *)0x4006C02A))      // UART CEA709.1-B WBASE (UART2_WB)
#define UART2_S3                      (*((volatile uint32_t *)0x4006C02B))      // UART CEA709.1-B Status Register (UART2_S3)
#define UART2_S4                      (*((volatile uint32_t *)0x4006C02C))      // UART CEA709.1-B Status Register (UART2_S4)
#define UART2_RPL                     (*((volatile uint32_t *)0x4006C02D))      // UART CEA709.1-B Received Packet Length (UART2_RPL)
#define UART2_RPREL                   (*((volatile uint32_t *)0x4006C02E))      // UART CEA709.1-B Received Preamble Length (UART2_RPREL)
#define UART2_CPW                     (*((volatile uint32_t *)0x4006C02F))      // UART CEA709.1-B Collision Pulse Width (UART2_CPW)
#define UART2_RIDT                    (*((volatile uint32_t *)0x4006C030))      // UART CEA709.1-B Receive Indeterminate Time (UART2_RIDT)
#define UART2_TIDT                    (*((volatile uint32_t *)0x4006C031))      // UART CEA709.1-B Transmit Indeterminate Time (UART2_TIDT)


//*****************************************************************************
//
// Synchronous Audio Interface (SAI) registers
//
//*****************************************************************************

#define I2S0_TCSR                     (*((volatile uint32_t *)0x4002F000))      // SAI Transmit Control Register (I2S0_TCSR)
#define I2S0_TCR1                     (*((volatile uint32_t *)0x4002F004))      // SAI Transmit Configuration 1 Register (I2S0_TCR1)
#define I2S0_TCR2                     (*((volatile uint32_t *)0x4002F008))      // SAI Transmit Configuration 2 Register (I2S0_TCR2)
#define I2S0_TCR3                     (*((volatile uint32_t *)0x4002F00C))      // SAI Transmit Configuration 3 Register (I2S0_TCR3)
#define I2S0_TCR4                     (*((volatile uint32_t *)0x4002F010))      // SAI Transmit Configuration 4 Register (I2S0_TCR4)
#define I2S0_TCR5                     (*((volatile uint32_t *)0x4002F014))      // SAI Transmit Configuration 5 Register (I2S0_TCR5)
#define I2S0_TDR0                     (*((volatile uint32_t *)0x4002F020))      // SAI Transmit Data Register (I2S0_TDR0)
#define I2S0_TFR0                     (*((volatile uint32_t *)0x4002F040))      // SAI Transmit FIFO Register (I2S0_TFR0)
#define I2S0_TMR                      (*((volatile uint32_t *)0x4002F060))      // SAI Transmit Mask Register (I2S0_TMR)
#define I2S0_RCSR                     (*((volatile uint32_t *)0x4002F080))      // SAI Receive Control Register (I2S0_RCSR)
#define I2S0_RCR1                     (*((volatile uint32_t *)0x4002F084))      // SAI Receive Configuration 1 Register (I2S0_RCR1)
#define I2S0_RCR2                     (*((volatile uint32_t *)0x4002F088))      // SAI Receive Configuration 2 Register (I2S0_RCR2)
#define I2S0_RCR3                     (*((volatile uint32_t *)0x4002F08C))      // SAI Receive Configuration 3 Register (I2S0_RCR3)
#define I2S0_RCR4                     (*((volatile uint32_t *)0x4002F090))      // SAI Receive Configuration 4 Register (I2S0_RCR4)
#define I2S0_RCR5                     (*((volatile uint32_t *)0x4002F094))      // SAI Receive Configuration 5 Register (I2S0_RCR5)
#define I2S0_RDR0                     (*((volatile uint32_t *)0x4002F0A0))      // SAI Receive Data Register (I2S0_RDR0)
#define I2S0_RFR0                     (*((volatile uint32_t *)0x4002F0C0))      // SAI Receive FIFO Register (I2S0_RFR0)
#define I2S0_RMR                      (*((volatile uint32_t *)0x4002F0E0))      // SAI Receive Mask Register (I2S0_RMR)
#define I2S0_MCR                      (*((volatile uint32_t *)0x4002F100))      // SAI MCLK Control Register (I2S0_MCR)
#define I2S0_MDR                      (*((volatile uint32_t *)0x4002F104))      // SAI MCLK Divide Register (I2S0_MDR)


//*****************************************************************************
//
// General-Purpose Input/Output (GPIO) registers
//
//*****************************************************************************

#define GPIOA_PDOR                    (*((volatile uint32_t *)0x400FF000))      // Port Data Output Register
#define GPIOA_PSOR                    (*((volatile uint32_t *)0x400FF004))      // Port Set Output Register
#define GPIOA_PCOR                    (*((volatile uint32_t *)0x400FF008))      // Port Clear Output Register
#define GPIOA_PTOR                    (*((volatile uint32_t *)0x400FF00C))      // Port Toggle Output Register
#define GPIOA_PDIR                    (*((volatile uint32_t *)0x400FF010))      // Port Data Input Register
#define GPIOA_PDDR                    (*((volatile uint32_t *)0x400FF014))      // Port Data Direction Register
#define GPIOB_PDOR                    (*((volatile uint32_t *)0x400FF040))      // Port Data Output Register
#define GPIOB_PSOR                    (*((volatile uint32_t *)0x400FF044))      // Port Set Output Register
#define GPIOB_PCOR                    (*((volatile uint32_t *)0x400FF048))      // Port Clear Output Register
#define GPIOB_PTOR                    (*((volatile uint32_t *)0x400FF04C))      // Port Toggle Output Register
#define GPIOB_PDIR                    (*((volatile uint32_t *)0x400FF050))      // Port Data Input Register
#define GPIOB_PDDR                    (*((volatile uint32_t *)0x400FF054))      // Port Data Direction Register
#define GPIOC_PDOR                    (*((volatile uint32_t *)0x400FF080))      // Port Data Output Register
#define GPIOC_PSOR                    (*((volatile uint32_t *)0x400FF084))      // Port Set Output Register
#define GPIOC_PCOR                    (*((volatile uint32_t *)0x400FF088))      // Port Clear Output Register
#define GPIOC_PTOR                    (*((volatile uint32_t *)0x400FF08C))      // Port Toggle Output Register
#define GPIOC_PDIR                    (*((volatile uint32_t *)0x400FF090))      // Port Data Input Register
#define GPIOC_PDDR                    (*((volatile uint32_t *)0x400FF094))      // Port Data Direction Register
#define GPIOD_PDOR                    (*((volatile uint32_t *)0x400FF0C0))      // Port Data Output Register
#define GPIOD_PSOR                    (*((volatile uint32_t *)0x400FF0C4))      // Port Set Output Register
#define GPIOD_PCOR                    (*((volatile uint32_t *)0x400FF0C8))      // Port Clear Output Register
#define GPIOD_PTOR                    (*((volatile uint32_t *)0x400FF0CC))      // Port Toggle Output Register
#define GPIOD_PDIR                    (*((volatile uint32_t *)0x400FF0D0))      // Port Data Input Register
#define GPIOD_PDDR                    (*((volatile uint32_t *)0x400FF0D4))      // Port Data Direction Register
#define GPIOE_PDOR                    (*((volatile uint32_t *)0x400FF100))      // Port Data Output Register
#define GPIOE_PSOR                    (*((volatile uint32_t *)0x400FF104))      // Port Set Output Register
#define GPIOE_PCOR                    (*((volatile uint32_t *)0x400FF108))      // Port Clear Output Register
#define GPIOE_PTOR                    (*((volatile uint32_t *)0x400FF10C))      // Port Toggle Output Register
#define GPIOE_PDIR                    (*((volatile uint32_t *)0x400FF110))      // Port Data Input Register
#define GPIOE_PDDR                    (*((volatile uint32_t *)0x400FF114))      // Port Data Direction Register


//*****************************************************************************
//
// Touch sense input (TSI) registers
//
//*****************************************************************************

#define TSI0_GENCS                    (*((volatile uint32_t *)0x40045000))      // General Control and Status Register
#define TSI0_SCANC                    (*((volatile uint32_t *)0x40045004))      // SCAN Control Register
#define TSI0_PEN                      (*((volatile uint32_t *)0x40045008))      // Pin Enable Register
#define TSI0_WUCNTR                   (*((volatile uint32_t *)0x4004500C))      // Wake-Up Channel Counter Register
#define TSI0_CNTR1                    (*((volatile uint32_t *)0x40045100))      // Counter Register
#define TSI0_CNTR3                    (*((volatile uint32_t *)0x40045104))      // Counter Register
#define TSI0_CNTR5                    (*((volatile uint32_t *)0x40045108))      // Counter Register
#define TSI0_CNTR7                    (*((volatile uint32_t *)0x4004510C))      // Counter Register
#define TSI0_CNTR9                    (*((volatile uint32_t *)0x40045110))      // Counter Register
#define TSI0_CNTR11                   (*((volatile uint32_t *)0x40045114))      // Counter Register
#define TSI0_CNTR13                   (*((volatile uint32_t *)0x40045118))      // Counter Register
#define TSI0_CNTR15                   (*((volatile uint32_t *)0x4004511C))      // Counter Register
#define TSI0_THRESHOLD                (*((volatile uint32_t *)0x40045120))      // Low Power Channel Threshold Register



//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT1 register.
//
//*****************************************************************************

#define OSC32KSEL                     0x00180000      // 32K oscillator clock select
#define RAMSIZE                       0x00078000      // RAM size


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT2 register.
//
//*****************************************************************************

#define PLLFLLSEL                     0x00010000      // PLL/FLL clock select
#define TRACECLKSEL                   0x00001000      // Debug trace clock select
#define PTD7PAD                       0x00000800      // PTD7 pad drive strength
#define CLKOUTSEL                     0x00000380      // CLKOUT select
#define RTCCLKOUTSEL                  0x00000010      // RTC clock out select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT4 register.
//
//*****************************************************************************

#define FTM0TRG0SRC                   0x10000000      // FlexTimer 0 Hardware Trigger 0 Source Select
#define FTM1CLKSEL                    0x02000000      // FTM1 External Clock Pin Select
#define FTM0CLKSEL                    0x01000000      // FlexTimer 0 External Clock Pin Select
#define FTM1CH0SRC                    0x00180000      // FTM1 channel 0 input capture source select
#define FTM1FLT0                      0x00000010      // FTM1 Fault 0 Select
#define FTM0FLT1                      0x00000002      // FTM0 Fault 1 Select
#define FTM0FLT0                      0x00000001      // FTM0 Fault 0 Select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT5 register.
//
//*****************************************************************************

#define UART1RXSRC                    0x00000180      // UART 1 receive data source select
#define UART1TXSRC                    0x00000010      // UART 1 transmit data source select
#define UART0RXSRC                    0x00000018      // UART 0 receive data source select
#define UART0TXSRC                    0x00000001      // UART 0 transmit data source select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SOPT7 register.
//
//*****************************************************************************

#define ADC0ALTTRGEN                  0x00000080      // ADC0 alternate trigger enable
#define ADC0PRETRGSEL                 0x00000010      // ADC0 pretrigger select
#define ADC0TRGSEL                    0x00000078      // ADC0 trigger select


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SDID register.
//
//*****************************************************************************

#define FAMID                         0x00078000      // Kinetis family identification
#define PINID                         0x00000078      // Pincount identification


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC4 register.
//
//*****************************************************************************

#define VREF                          0x00100000      // VREF Clock Gate Control
#define CMP                           0x00080000      // Comparator Clock Gate Control
#define UART2                         0x00001000      // UART2 Clock Gate Control
#define UART1                         0x00000800      // UART1 Clock Gate Control
#define UART0                         0x00000400      // UART0 Clock Gate Control
#define I2C0                          0x00000040      // I2C0 Clock Gate Control
#define CMT                           0x00000004      // CMT Clock Gate Control
#define EWM                           0x00000002      // EWM Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC5 register.
//
//*****************************************************************************

#define PORTE                         0x00002000      // Port E Clock Gate Control
#define PORTD                         0x00001000      // Port D Clock Gate Control
#define PORTC                         0x00000800      // Port C Clock Gate Control
#define PORTB                         0x00000400      // Port B Clock Gate Control
#define PORTA                         0x00000200      // Port A Clock Gate Control
#define TSI                           0x00000020      // TSI Clock Gate Control
#define LPTIMER                       0x00000001      // Low Power Timer Access Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC6 register.
//
//*****************************************************************************

#define RTC                           0x20000000      // RTC Access Control
#define ADC0                          0x08000000      // ADC0 Clock Gate Control
#define FTM1                          0x02000000      // FTM1 Clock Gate Control
#define FTM0                          0x01000000      // FTM0 Clock Gate Control
#define PIT                           0x00800000      // PIT Clock Gate Control
#define PDB                           0x00400000      // PDB Clock Gate Control
#define CRC                           0x00040000      // CRC Clock Gate Control
#define I2S                           0x00008000      // I2S Clock Gate Control
#define SPI0                          0x00001000      // SPI0 Clock Gate Control
#define DMAMUX                        0x00000002      // DMA Mux Clock Gate Control
#define FTFL                          0x00000001      // Flash Memory Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_SCGC7 register.
//
//*****************************************************************************

#define DMA                           0x00000002      // DMA Clock Gate Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_CLKDIV1 register.
//
//*****************************************************************************

#define OUTDIV1                       0x780000000      // Clock 1 output divider value
#define OUTDIV2                       0x78000000      // Clock 2 output divider value
#define OUTDIV4                       0x00780000      // Clock 4 output divider value


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG1 register.
//
//*****************************************************************************

#define NVMSIZE                       0x780000000      // FlexNVM size
#define PFSIZE                        0x78000000      // Program flash size
#define EESIZE                        0x00780000      // EEPROM size
#define DEPART                        0x00007800      // FlexNVM partition
#define FLASHDOZE                     0x00000002      // Flash Doze
#define FLASHDIS                      0x00000001      // Flash Disable


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_FCFG2 register.
//
//*****************************************************************************

#define MAXADDR0                      0x1FC0000000      // Max address block 0
#define PFLSH                         0x00800000      // Program flash
#define MAXADDR1                      0x1FC00000      // Max address block 1 ::


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDH register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique identification for the device


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDMH register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique identification for the device


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDML register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique identification for the device


//*****************************************************************************
//
// The following are defines for the bit fields in the SIM_UIDL register.
//
//*****************************************************************************

#define UID                           0x7FFFFFFF80000000      // Unique identification for the device


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMPROT register.
//
//*****************************************************************************

#define AVLP                          0x00000020      // Allow very low power modes
#define ALLS                          0x00000008      // Allow low leakage stop mode
#define AVLLS                         0x00000002      // Allow very low leakage stop mode


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMCTRL register.
//
//*****************************************************************************

#define LPWUI                         0x00000080      // Low Power Wake Up on Interrupt
#define RUNM                          0x000000C0      // Run Mode Control
#define STOPA                         0x00000008      // Stop Aborted
#define STOPM                         0x0000001C      // Stop Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_VLLSCTRL register.
//
//*****************************************************************************

#define PORPO                         0x00000020      // POR Power Option
#define VLLSM                         0x0000001C      // VLLS Mode Control


//*****************************************************************************
//
// The following are defines for the bit fields in the SMC_PMSTAT register.
//
//*****************************************************************************

#define PMSTAT                        0x00001FC0      // Power mode status


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_LVDSC2 register.
//
//*****************************************************************************

#define LVWF                          0x00000080      // Low-Voltage Warning Flag
#define LVWACK                        0x00000040      // Low-Voltage Warning Acknowledge
#define LVWIE                         0x00000020      // Low-Voltage Warning Interrupt Enable
#define LVWV                          0x00000006      // Low-Voltage Warning Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the PMC_REGSC register.
//
//*****************************************************************************

#define BGEN                          0x00000010      // Bandgap Enable In VLPx Operation
#define ACKISO                        0x00000008      // 
#define REGONS                        0x00000004      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE1 register.
//
//*****************************************************************************

#define WUPE3                         0x00000180      // Wakeup Pin Enable For LLWU_P3
#define WUPE2                         0x00000060      // Wakeup Pin Enable For LLWU_P2
#define WUPE1                         0x00000018      // Wakeup Pin Enable For LLWU_P1
#define WUPE0                         0x00000006      // Wakeup Pin Enable For LLWU_P0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE2 register.
//
//*****************************************************************************

#define WUPE7                         0x00000180      // Wakeup Pin Enable For LLWU_P7
#define WUPE6                         0x00000060      // Wakeup Pin Enable For LLWU_P6
#define WUPE5                         0x00000018      // Wakeup Pin Enable For LLWU_P5
#define WUPE4                         0x00000006      // Wakeup Pin Enable For LLWU_P4


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE3 register.
//
//*****************************************************************************

#define WUPE11                        0x00000180      // Wakeup Pin Enable For LLWU_P11
#define WUPE10                        0x00000060      // Wakeup Pin Enable For LLWU_P10
#define WUPE9                         0x00000018      // Wakeup Pin Enable For LLWU_P9
#define WUPE8                         0x00000006      // Wakeup Pin Enable For LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_PE4 register.
//
//*****************************************************************************

#define WUPE15                        0x00000180      // Wakeup Pin Enable For LLWU_P15
#define WUPE14                        0x00000060      // Wakeup Pin Enable For LLWU_P14
#define WUPE13                        0x00000018      // Wakeup Pin Enable For LLWU_P13
#define WUPE12                        0x00000006      // Wakeup Pin Enable For LLWU_P12


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_ME register.
//
//*****************************************************************************

#define WUME7                         0x00000080      // Wakeup Module Enable For Module 7
#define WUME6                         0x00000040      // Wakeup Module Enable For Module 6
#define WUME5                         0x00000020      // Wakeup Module Enable For Module 5
#define WUME4                         0x00000010      // Wakeup Module Enable For Module 4
#define WUME3                         0x00000008      // Wakeup Module Enable For Module 3
#define WUME2                         0x00000004      // Wakeup Module Enable For Module 2
#define WUME1                         0x00000002      // Wakeup Module Enable For Module 1
#define WUME0                         0x00000001      // Wakeup Module Enable For Module 0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F1 register.
//
//*****************************************************************************

#define WUF7                          0x00000080      // Wakeup Flag For LLWU_P7
#define WUF6                          0x00000040      // Wakeup Flag For LLWU_P6
#define WUF5                          0x00000020      // Wakeup Flag For LLWU_P5
#define WUF4                          0x00000010      // Wakeup Flag For LLWU_P4
#define WUF3                          0x00000008      // Wakeup Flag For LLWU_P3
#define WUF2                          0x00000004      // Wakeup Flag For LLWU_P2
#define WUF1                          0x00000002      // Wakeup Flag For LLWU_P1
#define WUF0                          0x00000001      // Wakeup Flag For LLWU_P0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F2 register.
//
//*****************************************************************************

#define WUF15                         0x00000080      // Wakeup Flag For LLWU_P15
#define WUF14                         0x00000040      // Wakeup Flag For LLWU_P14
#define WUF13                         0x00000020      // Wakeup Flag For LLWU_P13
#define WUF12                         0x00000010      // Wakeup Flag For LLWU_P12
#define WUF11                         0x00000008      // Wakeup Flag For LLWU_P11
#define WUF10                         0x00000004      // Wakeup Flag For LLWU_P10
#define WUF9                          0x00000002      // Wakeup Flag For LLWU_P9
#define WUF8                          0x00000001      // Wakeup Flag For LLWU_P8


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_F3 register.
//
//*****************************************************************************

#define MWUF7                         0x00000080      // Wakeup flag For module 7
#define MWUF6                         0x00000040      // Wakeup flag For module 6
#define MWUF5                         0x00000020      // Wakeup flag For module 5
#define MWUF4                         0x00000010      // Wakeup flag For module 4
#define MWUF3                         0x00000008      // Wakeup flag For module 3
#define MWUF2                         0x00000004      // Wakeup flag For module 2
#define MWUF1                         0x00000002      // Wakeup flag For module 1
#define MWUF0                         0x00000001      // Wakeup flag For module 0


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_FILT1 register.
//
//*****************************************************************************

#define FILTF                         0x00000080      // Filter Detect Flag
#define FILTE                         0x000000C0      // Digital Filter On External Pin
#define FILTSEL                       0x00000078      // Filter Pin Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_FILT2 register.
//
//*****************************************************************************

#define FILTF                         0x00000080      // Filter Detect Flag
#define FILTE                         0x000000C0      // Digital Filter On External Pin
#define FILTSEL                       0x00000078      // Filter Pin Select


//*****************************************************************************
//
// The following are defines for the bit fields in the LLWU_RST register.
//
//*****************************************************************************

#define LLRSTE                        0x00000002      // Low-Leakage Mode RESET Enable
#define RSTFILT                       0x00000001      // Digital Filter On RESET Pin


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLASC register.
//
//*****************************************************************************

#define ASC                           0x00007F80      // Each bit in the ASC field indicates whether there is a corresponding connection to the crossbar switch's slave input port.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLAMC register.
//
//*****************************************************************************

#define AMC                           0x00007F80      // Each bit in the AMC field indicates whether there is a corresponding connection to the AXBS master input port.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCM_PLACR register.
//
//*****************************************************************************

#define ARB                           0x00000200      // Arbitration select


//*****************************************************************************
//
// The following are defines for the bit fields in the DMAMUXx_CHCFGn register.
//
//*****************************************************************************

#define ENBL                          0x00000080      // DMA Channel Enable
#define TRIG                          0x00000040      // Trigger configuration
#define SOURCE                        0x00000001      // DMA channel source select


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CR register.
//
//*****************************************************************************

#define CX                            0x00020000      // Cancel Transfer
#define ECX                           0x00010000      // Error Cancel Transfer
#define EMLM                          0x00000080      // Enable Minor Loop Mapping
#define CLM                           0x00000040      // Continuous Link Mode
#define HALT                          0x00000020      // Halt DMA Operations
#define HOE                           0x00000010      // Halt On Error
#define ERCA                          0x00000004      // Enable Round Robin Channel Arbitration
#define EDBG                          0x00000002      // Enable Debug


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ES register.
//
//*****************************************************************************

#define VLD                           0x80000000      // Logical OR of all ERR status bits
#define ECX                           0x00010000      // Transfer Cancelled
#define CPE                           0x00004000      // Channel Priority Error
#define ERRCHN                        0x00000600      // Error Channel Number or Cancelled Channel Number
#define SAE                           0x00000080      // Source Address Error
#define SOE                           0x00000040      // Source Offset Error
#define DAE                           0x00000020      // Destination Address Error
#define DOE                           0x00000010      // Destination Offset Error
#define NCE                           0x00000008      // NBYTES/CITER Configuration Error
#define SGE                           0x00000004      // Scatter/Gather Configuration Error
#define SBE                           0x00000002      // Source Bus Error
#define DBE                           0x00000001      // Destination Bus Error


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERQ register.
//
//*****************************************************************************

#define ERQ3                          0x00000008      // Enable DMA Request 3
#define ERQ2                          0x00000004      // Enable DMA Request 2
#define ERQ1                          0x00000002      // Enable DMA Request 1
#define ERQ0                          0x00000001      // Enable DMA Request 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_EEI register.
//
//*****************************************************************************

#define EEI3                          0x00000008      // Enable Error Interrupt 3
#define EEI2                          0x00000004      // Enable Error Interrupt 2
#define EEI1                          0x00000002      // Enable Error Interrupt 1
#define EEI0                          0x00000001      // Enable Error Interrupt 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CEEI register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CAEE                          0x00000040      // Clear All Enable Error Interrupts
#define CEEI                          0x00000006      // Clear Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SEEI register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define SAEE                          0x00000040      // Sets All Enable Error Interrupts
#define SEEI                          0x00000006      // Set Enable Error Interrupt


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERQ register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CAER                          0x00000040      // Clear All Enable Requests
#define CERQ                          0x00000006      // Clear Enable Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SERQ register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define SAER                          0x00000040      // Set All Enable Requests
#define SERQ                          0x00000006      // Set enable request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CDNE register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CADN                          0x00000040      // Clears All DONE Bits
#define CDNE                          0x00000006      // Clear DONE Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_SSRT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define SAST                          0x00000040      // Set All START Bits (activates all channels)
#define SSRT                          0x00000006      // Set START Bit


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CERR register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CAEI                          0x00000040      // Clear All Error Indicators
#define CERR                          0x00000006      // Clear Error Indicator


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_CINT register.
//
//*****************************************************************************

#define NOP                           0x00000080      // No operation, ignore the other bits in this register
#define CAIR                          0x00000040      // Clear All Interrupt Requests
#define CINT                          0x00000006      // Clear Interrupt Request


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_INT register.
//
//*****************************************************************************

#define INT3                          0x00000008      // Interrupt Request 3
#define INT2                          0x00000004      // Interrupt Request 2
#define INT1                          0x00000002      // Interrupt Request 1
#define INT0                          0x00000001      // Interrupt Request 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_ERR register.
//
//*****************************************************************************

#define ERR3                          0x00000008      // Error In Channel 3
#define ERR2                          0x00000004      // Error In Channel 2
#define ERR1                          0x00000002      // Error In Channel 1
#define ERR0                          0x00000001      // Error In Channel 0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_HRS register.
//
//*****************************************************************************

#define HRS3                          0x00000008      // Hardware Request Status Channel 3
#define HRS2                          0x00000004      // Hardware Request Status Channel 2
#define HRS1                          0x00000002      // Hardware Request Status Channel 1
#define HRS0                          0x00000001      // Hardware Request Status Channel 0
#define HRS3-HRS0                     0x00000078      // Hardware Request Status Channel 3-0


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_DCHPRIn register.
//
//*****************************************************************************

#define ECP                           0x00000080      // Enable Channel Preemption
#define DPA                           0x00000040      // Disable Preempt Ability
#define CHPRI                         0x00000006      // Channel n Arbitration Priority


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SADDR register.
//
//*****************************************************************************

#define SADDR                         0x7FFFFFFF80000000      // Source Address
#define SADDR                         0x7FFFFFFF80000000      // Source Address


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SOFF register.
//
//*****************************************************************************

#define SOFF                          0x7FFF8000      // Source address signed offset
#define SOFF                          0x7FFF8000      // Source address signed offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_ATTR register.
//
//*****************************************************************************

#define SMOD                          0x000F8000      // Source Address Modulo
#define SSIZE                         0x00001C00      // Source data transfer size
#define DMOD                          0x00000F80      // Destination Address Modulo
#define DSIZE                         0x0000001C      // Destination Data Transfer Size
#define SMOD                          0x000F8000      // Source Address Modulo.
#define DMOD                          0x00000F80      // Destination Address Modulo.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLNO register.
//
//*****************************************************************************

#define NBYTES                        0x7FFFFFFF80000000      // Minor Byte Transfer Count
#define NBYTES                        0x7FFFFFFF80000000      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFNO register.
//
//*****************************************************************************

#define SMLOE                         0x80000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x40000000      // Destination Minor Loop Offset enable
#define NBYTES                        0x7FFFFFFE0000000      // Minor Byte Transfer Count
#define NBYTES                        0x7FFFFFFE0000000      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_NBYTES_MLOFFYES register.
//
//*****************************************************************************

#define SMLOE                         0x80000000      // Source Minor Loop Offset Enable
#define DMLOE                         0x40000000      // Destination Minor Loop Offset enable
#define MLOFF                         0x1FFFFE0000000      // If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes
#define NBYTES                        0x0007FE00      // Minor Byte Transfer Count
#define MLOFF                         0x1FFFFE0000000      // Minor loop offset
#define NBYTES                        0x0007FE00      // Minor Byte Transfer Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_SLAST register.
//
//*****************************************************************************

#define SLAST                         0x7FFFFFFF80000000      // Last source Address Adjustment
#define SLAST                         0x7FFFFFFF80000000      // Last source Address Adjustment


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DADDR register.
//
//*****************************************************************************

#define DADDR                         0x7FFFFFFF80000000      // Destination Address
#define DADDR                         0x7FFFFFFF80000000      // Destination Address


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DOFF register.
//
//*****************************************************************************

#define DOFF                          0x7FFF8000      // Destination Address Signed offset
#define DOFF                          0x7FFF8000      // Destination Address Signed offset


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define Reserved                      0x0003C000      // This read-only field is reserved and always has the value zero
#define LINKCH                        0x00000C00      // Link Channel Number
#define CITER                         0x0001FF00      // Current Major Iteration Count
#define LINKCH                        0x00000C00      // Link Channel Number
#define CITER                         0x0001FF00      // Current Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enable channel-to-channel linking on minor-loop complete
#define CITER                         0x1FFFC000      // Current Major Iteration Count
#define CITER                         0x1FFFC000      // Current Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_DLASTSGA register.
//
//*****************************************************************************

#define DLASTSGA                      0x7FFFFFFF80000000      // Destination last address adjustment or the memory address for the next transfer control descriptor to be loaded into this channel (scatter/gather)
#define DLASTSGA                      0x7FFFFFFF80000000      // Destination last address adjustment or the memory address for the next transfer control descriptor to be loaded into this channel (scatter/gather).


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_CSR register.
//
//*****************************************************************************

#define BWC                           0x00018000      // Bandwidth Control
#define Reserved                      0x0001E000      // This read-only field is reserved and always has the value zero
#define MAJORLINKCH                   0x00000600      // Link Channel Number
#define DONE                          0x00000080      // Channel Done
#define ACTIVE                        0x00000040      // Channel Active
#define MAJORELINK                    0x00000020      // Enable channel-to-channel linking on major loop complete
#define ESG                           0x00000010      // Enable Scatter/Gather Processing
#define DREQ                          0x00000008      // Disable Request
#define INTHALF                       0x00000004      // Enable an interrupt when major counter is half complete
#define INTMAJOR                      0x00000002      // Enable an interrupt when major iteration count completes
#define START                         0x00000001      // Channel Start
#define MAJORLINKCH                   0x00000600      // Link Channel Number
#define DONE                          0x00000080      // Channel Done
#define ACTIVE                        0x00000040      // Channel Active
#define ESG                           0x00000010      // Enable Scatter/Gather Processing
#define INTHALF                       0x00000004      // Enable an interrupt when major counter is half complete.


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKYES register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define Reserved                      0x0003C000      // This read-only field is reserved and always has the value zero
#define LINKCH                        0x00000C00      // Link Channel Number
#define BITER                         0x0001FF00      // Starting Major Iteration Count
#define LINKCH                        0x00000C00      // Link Channel Number
#define BITER                         0x0001FF00      // Starting Major Iteration Count
#define LINKCH                        0x00000C00      // Link Channel Number
#define BITER                         0x0001FF00      // Starting Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the DMA_TCDn_BITER_ELINKNO register.
//
//*****************************************************************************

#define ELINK                         0x00008000      // Enables channel-to-channel linking on minor loop complete
#define BITER                         0x1FFFC000      // Starting Major Iteration Count
#define BITER                         0x1FFFC000      // Starting Major Iteration Count
#define BITER                         0x0001FF00      // Starting Major Iteration Count


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_SERV register.
//
//*****************************************************************************

#define SERVICE                       0x00007F80      // The EWM service mechanism requires the CPU to write two values to the SERV register: a first data byte of 0xB4, followed by a second data byte of 0x2C. The EWM service is illegal if either of the following conditions is true. •  The first or second data byte is not written correctly. •  The second data byte is not written within a fixed number of peripheral bus cycles of the first data byte. This fixed number of cycles is called EWM_service_time.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPL register.
//
//*****************************************************************************

#define COMPAREL                      0x00007F80      // To prevent runaway code from changing this field, software should  write  to  this  field  after  a  CPU  reset even if the (default) minimum service time is required.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CTRL register.
//
//*****************************************************************************

#define INTEN                         0x00000008      // Interrupt Enable. This bit when set and EWM_out is asserted, an interrupt request is generated. To de-assert interrupt request, user should clear this bit by writing 0.
#define INEN                          0x00000004      // Input Enable. This bit when set, enables the EWM_in port.
#define ASSIN                         0x00000002      // EWM_in's Assertion State Select. Default assert state of the EWM_in signal is logic zero. Setting ASSIN bit inverts the assert state to a logic one.
#define EWMEN                         0x00000001      // EWM enable. This bit when set, enables the EWM module. This resets the EWM counter to zero and deasserts the EWM_out signal. Clearing EWMEN bit disables the EWM, and therefore it cannot be enabled until a reset occurs, due to the write-once nature of this bit.


//*****************************************************************************
//
// The following are defines for the bit fields in the EWM_CMPH register.
//
//*****************************************************************************

#define COMPAREH                      0x00007F80      // The valid values for CMPH are up to 0xFE because the EWM counter never expires when CMPH = 0xFF. The expiration happens only if EWM counter is greater than CMPH.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_STCTRLH register.
//
//*****************************************************************************

#define DISTESTWDOG                   0x00004000      // Allows the WDOG’s functional test mode to be disabled permanently. After it is set, it can only be cleared by a reset. It cannot be unlocked for editing after it is set.
#define BYTESEL[1:0]                  0x00006000      // This 2-bit field selects the byte to be tested when the watchdog is in the byte test mode.
#define TESTSEL                       0x00000800      // Effective only if TESTWDOG is set. Selects the test to be run on the watchdog timer.
#define TESTWDOG                      0x00000400      // Puts the watchdog in the functional test mode. In this mode, the watchdog timer and the associated compare and reset generation logic is tested for correct operation. The clock for the timer is switched from the main watchdog clock to the fast clock input for watchdog functional test. The TESTSEL bit selects the test to be run. 
#define WAITEN                        0x00000080      // Enables or disables WDOG in Wait mode.
#define STOPEN                        0x00000040      // Enables or disables WDOG in Stop mode.
#define DBGEN                         0x00000020      // Enables or disables WDOG in Debug mode.
#define ALLOWUPDATE                   0x00000010      // Enables updates to watchdog write-once registers, after the reset-triggered initial configuration window (WCT) closes, through unlock sequence.
#define WINEN                         0x00000008      // Enables Windowing mode.
#define IRQRSTEN                      0x00000004      // Used to enable the debug breadcrumbs feature. A change in this bit is updated immediately, as opposed to updating after WCT.
#define CLKSRC                        0x00000002      // Selects clock source for the WDOG timer and other internal timing operations.
#define WDOGEN                        0x00000001      // Enables or disables the WDOG’s operation. In the disabled state, the watchdog timer is kept in the reset state, but the other exception conditions can still trigger a reset/interrupt. A change in the value of this bit must be held for more than one WDOG_CLK cycle for the WDOG to be enabled or disabled.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_STCTRLL register.
//
//*****************************************************************************

#define INTFLG                        0x00008000      // Interrupt flag. It is set when an exception occurs. IRQRSTEN = 1 is a precondition to set this flag. INTFLG = 1 results in an interrupt being issued followed by a reset, WCT later. The interrupt can be cleared by writing 1 to this bit. It also gets cleared on a system reset. 


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TOVALH register.
//
//*****************************************************************************

#define TOVALHIGH                     0x7FFF8000      // Defines the upper 16 bits of the 32-bit time-out value for the watchdog timer. It is defined in terms of cycles of the watchdog clock.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TOVALL register.
//
//*****************************************************************************

#define TOVALLOW                      0x7FFF8000      // Defines the lower 16 bits of the 32-bit time-out value for the watchdog timer. It is defined in terms of cycles of the watchdog clock.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_WINH register.
//
//*****************************************************************************

#define WINHIGH                       0x7FFF8000      // Defines the upper 16 bits of the 32-bit window for the windowed mode of operation of the watchdog. It is defined in terms of cycles of the watchdog clock. In this mode, the watchdog can be refreshed only when the timer has reached a value greater than or equal to this window length. A refresh outside this window resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_WINL register.
//
//*****************************************************************************

#define WINLOW                        0x7FFF8000      // Defines the lower 16 bits of the 32-bit window for the windowed mode of operation of the watchdog. It is defined in terms of cycles of the pre-scaled watchdog clock. In this mode, the watchdog can be refreshed only when the timer reaches a value greater than or equal to this window length value. A refresh outside of this window resets the system or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_REFRESH register.
//
//*****************************************************************************

#define WDOGREFRESH                   0x7FFF8000      // Watchdog refresh register. A sequence of 0xA602 followed by 0xB480 within 20 bus clock cycles written to this register refreshes the WDOG and prevents it from resetting the system. Writing a value other than the above mentioned sequence or if the sequence is longer than 20 bus cycles, resets the system, or if IRQRSTEN is set, it interrupts and then resets the system.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_UNLOCK register.
//
//*****************************************************************************

#define WDOGUNLOCK                    0x7FFF8000      // Writing the unlock sequence values to this register to makes the watchdog write-once registers writable again. The required unlock sequence is 0xC520 followed by 0xD928 within 20 bus clock cycles. A valid unlock sequence opens a window equal in length to the WCT within which you can update the registers. Writing a value other than the above mentioned sequence or if the sequence is longer than 20 bus cycles, resets the system or if IRQRSTEN is set, it interrupts and then resets the system. The unlock sequence is effective only if ALLOWUPDATE is set.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TMROUTH register.
//
//*****************************************************************************

#define TIMEROUTHIGH                  0x7FFF8000      // Shows the value of the upper 16 bits of the watchdog timer.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_TMROUTL register.
//
//*****************************************************************************

#define TIMEROUTLOW                   0x7FFF8000      // Shows the value of the lower 16 bits of the watchdog timer.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_RSTCNT register.
//
//*****************************************************************************

#define RSTCNT                        0x7FFF8000      // Counts the number of times the watchdog resets the system. This register is reset only on a POR. Writing 1 to the bit to be cleared enables you to clear the contents of this register.


//*****************************************************************************
//
// The following are defines for the bit fields in the WDOG_PRESC register.
//
//*****************************************************************************

#define PRESCVAL                      0x00001C00      // 3-bit prescaler for the watchdog clock source. A value of zero indicates no division of the input WDOG clock. The watchdog clock is divided by (PRESCVAL + 1) to provide the prescaled WDOG_CLK.


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C1 register.
//
//*****************************************************************************

#define CLKS                          0x00000180      // Clock Source Select
#define FRDIV                         0x000000E0      // FLL External Reference Divider
#define IREFS                         0x00000004      // Internal Reference Select
#define IRCLKEN                       0x00000002      // Internal Reference Clock Enable
#define IREFSTEN                      0x00000001      // Internal Reference Stop Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C2 register.
//
//*****************************************************************************

#define LOCRE0                        0x00000080      // Loss of Clock Reset Enable
#define RANGE0                        0x00000060      // Frequency Range Select
#define HGO0                          0x00000008      // High Gain Oscillator Select
#define EREFS0                        0x00000004      // External Reference Select
#define LP                            0x00000002      // Low Power Select
#define IRCS                          0x00000001      // Internal Reference Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C3 register.
//
//*****************************************************************************

#define SCTRIM                        0x00007F80      // Slow Internal Reference Clock Trim Setting


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C4 register.
//
//*****************************************************************************

#define DMX32                         0x00000080      // DCO Maximum Frequency with 32.768 kHz Reference
#define DRST_DRS                      0x000000C0      // DCO Range Select
#define FCTRIM                        0x000000F0      // Fast Internal Reference Clock Trim Setting
#define SCFTRIM                       0x00000001      // Slow Internal Reference Clock Fine Trim


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C5 register.
//
//*****************************************************************************

#define PLLCLKEN0                     0x00000040      // PLL Clock Enable
#define PLLSTEN0                      0x00000020      // PLL Stop Enable
#define PRDIV0                        0x000001F0      // PLL External Reference Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C6 register.
//
//*****************************************************************************

#define LOLIE0                        0x00000080      // Loss of Lock Interrupt Enable
#define PLLS                          0x00000040      // PLL Select
#define CME0                          0x00000020      // Clock Monitor Enable
#define VDIV0                         0x000001F0      // VCO 0 Divider


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_S register.
//
//*****************************************************************************

#define LOLS0                         0x00000080      // Loss of Lock Status
#define LOCK0                         0x00000040      // Lock Status
#define PLLST                         0x00000020      // PLL Select Status
#define IREFST                        0x00000010      // Internal Reference Status
#define CLKST                         0x00000018      // Clock Mode Status
#define OSCINIT0                      0x00000002      // OSC Initialization
#define IRCST                         0x00000001      // Internal Reference Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_SC register.
//
//*****************************************************************************

#define ATME                          0x00000080      // Automatic Trim Machine Enable
#define ATMS                          0x00000040      // Automatic Trim Machine Select
#define ATMF                          0x00000020      // Automatic Trim Machine Fail Flag
#define FLTPRSRV                      0x00000010      // FLL Filter Preserve Enable
#define FCRDIV                        0x00000038      // Fast Clock Internal Reference Divider
#define LOCS0                         0x00000001      // OSC0 Loss of Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATCVH register.
//
//*****************************************************************************

#define ATCVH                         0x00007F80      // ATM Compare Value High


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_ATCVL register.
//
//*****************************************************************************

#define ATCVL                         0x00007F80      // ATM Compare Value Low


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C7 register.
//
//*****************************************************************************

#define OSCSEL                        0x00000001      // MCG OSC Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the MCG_C8 register.
//
//*****************************************************************************

#define LOCRE1                        0x00000080      // Loss of Clock Reset Enable
#define LOLRE                         0x00000040      // Loss of Lock Reset Enable
#define CME1                          0x00000020      // Clock Monitor Enable1
#define LOCS1                         0x00000001      // RTC Loss of Clock Status


//*****************************************************************************
//
// The following are defines for the bit fields in the OSC0_CR register.
//
//*****************************************************************************

#define ERCLKEN                       0x00000080      // Enable External Reference Clock
#define EREFSTEN                      0x00000020      // External Reference Stop Enable
#define SC2P                          0x00000010      // Oscillator 2P Gain Control
#define SC4P                          0x00000008      // Oscillator 4P Gain Control
#define SC8P                          0x00000004      // Oscillator 8P Gain Control
#define SC16P                         0x00000002      // Oscillator 16P Gain Control


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFAPR register.
//
//*****************************************************************************

#define M3PFD                         0x00300000      // Master 3 Prefetch Disable
#define M2PFD                         0x00040000      // Master 2 Prefetch Disable
#define M1PFD                         0x00020000      // Master 1 Prefetch Disable
#define M0PFD                         0x00010000      // Master 0 Prefetch Disable
#define M3AP[1:0]                     0x00000180      // Master 3 Access Protection
#define M2AP[1:0]                     0x00000060      // Master 2 Access Protection
#define M1AP[1:0]                     0x00000018      // Master 1 Access Protection
#define M0AP[1:0]                     0x00000006      // Master 0 Access Protection


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_PFB0CR register.
//
//*****************************************************************************

#define B0RWSC[3:0]                   0x780000000      // Read Wait State Control
#define CLCK_WAY[3:0]                 0x78000000      // Cache Lock Way x
#define CINV_WAY[3:0]                 0x07800000      // Cache Invalidate Way x
#define S_B_INV                       0x00080000      // Invalidate Prefetch Speculation Buffer
#define B0MW[1:0]                     0x000C0000      // Memory Width
#define CRC[2:0]                      0x00000380      // Cache Replacement Control
#define B0DCE                         0x00000010      // Data Cache Enable
#define B0ICE                         0x00000008      // Instruction Cache Enable
#define B0DPE                         0x00000004      // Data Prefetch Enable
#define B0IPE                         0x00000002      // Instruction Prefetch Enable
#define B0SEBE                        0x00000001      // Single Entry Buffer Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW0Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW1Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW2Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_TAGVDW3Sn register.
//
//*****************************************************************************

#define tag[18:6]                     0x7FFC0000      // 13-bit tag for cache entry
#define valid                         0x00000001      // 1-bit valid for cache entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW0Sn register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW1Sn register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW2Sn register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry


//*****************************************************************************
//
// The following are defines for the bit fields in the FMC_DATAW3Sn register.
//
//*****************************************************************************

#define data[31:0]                    0x7FFFFFFF80000000      // Bits [31:0] of data entry ::


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC1n register.
//
//*****************************************************************************

#define COCO                          0x00000080      // Conversion complete flag
#define AIEN                          0x00000040      // Interrupt enable
#define ADCH                          0x000001F0      // Input channel select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CFG1 register.
//
//*****************************************************************************

#define ADLPC                         0x00000080      // Low-power configuration
#define ADIV                          0x000000C0      // Clock divide select
#define ADLSMP                        0x00000010      // Sample time configuration
#define MODE                          0x00000018      // Conversion mode selection
#define ADICLK                        0x00000006      // Input clock select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CFG2 register.
//
//*****************************************************************************

#define MUXSEL                        0x00000010      // ADC Mux select
#define ADACKEN                       0x00000008      // Asynchronous clock output enable
#define ADHSC                         0x00000004      // High speed configuration
#define ADLSTS                        0x00000006      // Long sample time select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_Rn register.
//
//*****************************************************************************

#define D                             0x7FFF8000      // Data result


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CVn register.
//
//*****************************************************************************

#define CV                            0x7FFF8000      // Compare value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC2 register.
//
//*****************************************************************************

#define ADACT                         0x00000080      // Conversion active
#define ADTRG                         0x00000040      // Conversion trigger select
#define ACFE                          0x00000020      // Compare function enable
#define ACFGT                         0x00000010      // Compare function greater than enable
#define ACREN                         0x00000008      // Compare function range enable
#define DMAEN                         0x00000004      // DMA enable
#define REFSEL                        0x00000006      // Voltage reference selection


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_SC3 register.
//
//*****************************************************************************

#define CAL                           0x00000080      // Calibration
#define CALF                          0x00000040      // Calibration failed flag
#define ADCO                          0x00000008      // Continuous conversion enable
#define AVGE                          0x00000004      // Hardware average enable
#define AVGS                          0x00000006      // Hardware average select


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_OFS register.
//
//*****************************************************************************

#define OFS                           0x7FFF8000      // Offset error correction value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_PG register.
//
//*****************************************************************************

#define PG                            0x7FFF8000      // Plus-side gain


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLPD register.
//
//*****************************************************************************

#define CLPD                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLPS register.
//
//*****************************************************************************

#define CLPS                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP4 register.
//
//*****************************************************************************

#define CLP4                          0x0007FE00      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP3 register.
//
//*****************************************************************************

#define CLP3                          0x0001FF00      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP2 register.
//
//*****************************************************************************

#define CLP2                          0x00007F80      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP1 register.
//
//*****************************************************************************

#define CLP1                          0x00001FC0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the ADCx_CLP0 register.
//
//*****************************************************************************

#define CLP0                          0x000007E0      // Calibration value
#define CLP0                          0x000007E0      // Calibration value


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_CR0 register.
//
//*****************************************************************************

#define FILTER_CNT                    0x000001C0      // Filter Sample Count
#define HYSTCTR                       0x00000006      // Comparator hard block hysteresis control


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_CR1 register.
//
//*****************************************************************************

#define SE                            0x00000080      // Sample Enable
#define WE                            0x00000040      // Windowing Enable
#define PMODE                         0x00000010      // Power Mode Select
#define INV                           0x00000008      // Comparator INVERT
#define COS                           0x00000004      // Comparator Output Select
#define OPE                           0x00000002      // Comparator Output Pin Enable
#define EN                            0x00000001      // Comparator Module Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_FPR register.
//
//*****************************************************************************

#define FILT_PER                      0x00007F80      // Filter Sample Period


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_SCR register.
//
//*****************************************************************************

#define DMAEN                         0x00000040      // DMA Enable Control
#define IER                           0x00000010      // Comparator Interrupt Enable Rising
#define IEF                           0x00000008      // Comparator Interrupt Enable Falling
#define CFR                           0x00000004      // Analog Comparator Flag Rising
#define CFF                           0x00000002      // Analog Comparator Flag Falling
#define COUT                          0x00000001      // Analog Comparator Output


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_DACCR register.
//
//*****************************************************************************

#define DACEN                         0x00000080      // DAC Enable
#define VRSEL                         0x00000040      // Supply Voltage Reference Source Select
#define VOSEL                         0x000007E0      // DAC Output Voltage Select


//*****************************************************************************
//
// The following are defines for the bit fields in the CMPx_MUXCR register.
//
//*****************************************************************************

#define PSEL                          0x000000E0      // Plus Input Mux Control


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_SC register.
//
//*****************************************************************************

#define LDMOD                         0x00180000      // Load Mode Select
#define PDBEIE                        0x00020000      // PDB Sequence Error Interrupt Enable
#define SWTRIG                        0x00010000      // Software Trigger
#define DMAEN                         0x00008000      // DMA Enable
#define PRESCALER                     0x0001C000      // Prescaler Divider Select
#define TRGSEL                        0x00007800      // Trigger Input Source Select
#define PDBEN                         0x00000080      // PDB Enable
#define PDBIF                         0x00000040      // PDB Interrupt Flag
#define PDBIE                         0x00000020      // PDB Interrupt Enable
#define MULT                          0x00000018      // Multiplication Factor Select for Prescaler
#define CONT                          0x00000002      // Continuous Mode Enable
#define LDOK                          0x00000001      // Load OK


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_MOD register.
//
//*****************************************************************************

#define MOD                           0x7FFF8000      // PDB Modulus


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CNT register.
//
//*****************************************************************************

#define CNT                           0x7FFF8000      // PDB Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_IDLY register.
//
//*****************************************************************************

#define IDLY                          0x7FFF8000      // PDB Interrupt Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnC1 register.
//
//*****************************************************************************

#define BB                            0x7F800000      // PDB Channel Pre-Trigger Back-to-Back Operation Enable
#define TOS                           0x007F8000      // PDB Channel Pre-Trigger Output Select
#define EN                            0x00007F80      // PDB Channel Pre-Trigger Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnS register.
//
//*****************************************************************************

#define CF                            0x7F800000      // PDB Channel Flags
#define ERR                           0x00007F80      // PDB Channel Sequence Error Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnDLY0 register.
//
//*****************************************************************************

#define DLY                           0x7FFF8000      // PDB Channel Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_CHnDLY1 register.
//
//*****************************************************************************

#define DLY                           0x7FFF8000      // PDB Channel Delay


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_POEN register.
//
//*****************************************************************************

#define POEN                          0x00007F80      // PDB Pulse-Out Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the PDBx_POnDLY register.
//
//*****************************************************************************

#define DLY1                          0x7FFF80000000      // PDB Pulse-Out Delay 1
#define DLY2                          0x7FFF8000      // PDB Pulse-Out Delay 2 ::


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SC register.
//
//*****************************************************************************

#define TOF                           0x00000080      // Timer Overflow Flag
#define TOIE                          0x00000040      // Timer Overflow Interrupt Enable
#define CPWMS                         0x00000020      // Center-Aligned PWM Select
#define CLKS                          0x00000030      // Clock Source Selection
#define PS                            0x0000001C      // Prescale Factor Selection


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CNT register.
//
//*****************************************************************************

#define COUNT                         0x7FFF8000      // Counter Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_MOD register.
//
//*****************************************************************************

#define MOD                           0x7FFF8000      // Modulo Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CnSC register.
//
//*****************************************************************************

#define CHF                           0x00000080      // Channel Flag
#define CHIE                          0x00000040      // Channel Interrupt Enable
#define MSB                           0x00000020      // Channel Mode Select
#define MSA                           0x00000010      // Channel Mode Select
#define ELSB:ELSA                     0x00000018      // Edge or Level Select
#define DMA                           0x00000002      // DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CnV register.
//
//*****************************************************************************

#define VAL                           0x7FFF8000      // Channel Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CNTIN register.
//
//*****************************************************************************

#define INIT                          0x7FFF8000      // Initial Value Of The FTM Counter


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_STATUS register.
//
//*****************************************************************************

#define CH7F:CH0F                     0x00007F80      // Channel Flags


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_MODE register.
//
//*****************************************************************************

#define FAULTIE                       0x00000080      // Fault Interrupt Enable
#define FAULTM                        0x000000C0      // Fault Control Mode
#define CAPTEST                       0x00000010      // Capture Test Mode Enable
#define PWMSYNC                       0x00000008      // PWM Synchronization Mode
#define WPDIS                         0x00000004      // Write Protection Disable
#define INIT                          0x00000002      // Initialize The Channels Output
#define FTMEN                         0x00000001      // FTM Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SYNC register.
//
//*****************************************************************************

#define SWSYNC                        0x00000080      // PWM Synchronization Software Trigger
#define TRIG2                         0x00000040      // PWM Synchronization Hardware Trigger 2
#define TRIG1                         0x00000020      // PWM Synchronization Hardware Trigger 1
#define TRIG0                         0x00000010      // PWM Synchronization Hardware Trigger 0
#define SYNCHOM                       0x00000008      // Output Mask Synchronization
#define REINIT                        0x00000004      // FTM Counter Reinitialization By Synchronization
#define CNTMAX                        0x00000002      // Maximum Loading Point Enable
#define CNTMIN                        0x00000001      // Minimum Loading Point Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_OUTINIT register.
//
//*****************************************************************************

#define CH7OI:CH0OI                   0x00007F80      // Channel Output Initialization Values


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_OUTMASK register.
//
//*****************************************************************************

#define CH7OM:CH0OM                   0x00007F80      // Channel Output Masks


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_COMBINE register.
//
//*****************************************************************************

#define FAULTEN3                      0x40000000      // Fault Control Enable For n = 6
#define SYNCEN3                       0x20000000      // Synchronization Enable For n = 6
#define DTEN3                         0x10000000      // Deadtime Enable For n = 6
#define DECAP3                        0x08000000      // Dual Edge Capture Mode Captures For n = 6
#define DECAPEN3                      0x04000000      // Dual Edge Capture Mode Enable For n = 6
#define COMP3                         0x02000000      // Complement Of Channel (n) for n = 6
#define COMBINE3                      0x01000000      // Combine Channels For n = 6
#define FAULTEN2                      0x00400000      // Fault Control Enable For n = 4
#define SYNCEN2                       0x00200000      // Synchronization Enable For n = 4
#define DTEN2                         0x00100000      // Deadtime Enable For n = 4
#define DECAP2                        0x00080000      // Dual Edge Capture Mode Captures For n = 4
#define DECAPEN2                      0x00040000      // Dual Edge Capture Mode Enable For n = 4
#define COMP2                         0x00020000      // Complement Of Channel (n) For n = 4
#define COMBINE2                      0x00010000      // Combine Channels For n = 4
#define FAULTEN1                      0x00004000      // Fault Control Enable For n = 2
#define SYNCEN1                       0x00002000      // Synchronization Enable For n = 2
#define DTEN1                         0x00001000      // Deadtime Enable For n = 2
#define DECAP1                        0x00000800      // Dual Edge Capture Mode Captures For n = 2
#define DECAPEN1                      0x00000400      // Dual Edge Capture Mode Enable For n = 2
#define COMP1                         0x00000200      // Complement Of Channel (n) For n = 2
#define COMBINE1                      0x00000100      // Combine Channels For n = 2
#define FAULTEN0                      0x00000040      // Fault Control Enable For n = 0
#define SYNCEN0                       0x00000020      // Synchronization Enable For n = 0
#define DTEN0                         0x00000010      // Deadtime Enable For n = 0
#define DECAP0                        0x00000008      // Dual Edge Capture Mode Captures For n = 0
#define DECAPEN0                      0x00000004      // Dual Edge Capture Mode Enable For n = 0
#define COMP0                         0x00000002      // Complement Of Channel (n) For n = 0
#define COMBINE0                      0x00000001      // Combine Channels For n = 0


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_DEADTIME register.
//
//*****************************************************************************

#define DTPS                          0x00000180      // Deadtime Prescaler Value
#define DTVAL                         0x000007E0      // Deadtime Value


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_EXTTRIG register.
//
//*****************************************************************************

#define TRIGF                         0x00000080      // Channel Trigger Flag
#define INITTRIGEN                    0x00000040      // Initialization Trigger Enable
#define CH1TRIG                       0x00000020      // Channel 1 Trigger Enable
#define CH0TRIG                       0x00000010      // Channel 0 Trigger Enable
#define CH5TRIG                       0x00000008      // Channel 5 Trigger Enable
#define CH4TRIG                       0x00000004      // Channel 4 Trigger Enable
#define CH3TRIG                       0x00000002      // Channel 3 Trigger Enable
#define CH2TRIG                       0x00000001      // Channel 2 Trigger Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_POL register.
//
//*****************************************************************************

#define POL7:POL0                     0x00007F80      // Channel Polarity
#define POL7-POL0                     0x00007F80      // Channel 7-0 Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FMS register.
//
//*****************************************************************************

#define FAULTF                        0x00000080      // Fault Detection Flag
#define WPEN                          0x00000040      // Write Protection Enable
#define FAULTIN                       0x00000020      // Fault Inputs
#define FAULTF3                       0x00000010      // Fault Detection Flag 3
#define FAULTF2                       0x00000008      // Fault Detection Flag 2
#define FAULTF1                       0x00000004      // Fault Detection Flag 1
#define FAULTF0                       0x00000002      // Fault Detection Flag 0
#define FAULTIN                       0x00000020      // Fault Inputs
#define FAULTF3-FAULTF0               0x000001F0      // Fault Detection Flag 3-0


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FILTER register.
//
//*****************************************************************************

#define CH3FVAL                       0x00078000      // Channel 3 Input Filter
#define CH2FVAL                       0x00007800      // Channel 2 Input Filter
#define CH1FVAL                       0x00000780      // Channel 1 Input Filter
#define CH0FVAL                       0x00000078      // Channel 0 Input Filter
#define CH3FVAL                       0x00078000      // Channel 3 Input Filter
#define CH2FVAL                       0x00007800      // Channel 2 Input Filter
#define CH1FVAL                       0x00000780      // Channel 1 Input Filter
#define CH0FVAL                       0x00000078      // Channel 0 Input Filter


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FLTCTRL register.
//
//*****************************************************************************

#define FFVAL                         0x00007800      // Fault Input Filter
#define FFLTR3EN                      0x00000080      // Fault Input 3 Filter Enable
#define FFLTR2EN                      0x00000040      // Fault Input 2 Filter Enable
#define FFLTR1EN                      0x00000020      // Fault Input 1 Filter Enable
#define FFLTR0EN                      0x00000010      // Fault Input 0 Filter Enable
#define FAULT3EN                      0x00000008      // Fault Input 3 Enable
#define FAULT2EN                      0x00000004      // Fault Input 2 Enable
#define FAULT1EN                      0x00000002      // Fault Input 1 Enable
#define FAULT0EN                      0x00000001      // Fault Input 0 Enable
#define FFVAL                         0x00007800      // Fault Input Filter


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_QDCTRL register.
//
//*****************************************************************************

#define PHAFLTREN                     0x00000080      // Phase A Input Filter Enable
#define PHBFLTREN                     0x00000040      // Phase B Input Filter Enable
#define PHAPOL                        0x00000020      // Phase A Input Polarity
#define PHBPOL                        0x00000010      // Phase B Input Polarity
#define QUADMODE                      0x00000008      // Quadrature Decoder Mode
#define QUADIR                        0x00000004      // FTM Counter Direction In Quadrature Decoder Mode
#define TOFDIR                        0x00000002      // Timer Overflow Direction In Quadrature Decoder Mode
#define QUADEN                        0x00000001      // Quadrature Decoder Mode Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_CONF register.
//
//*****************************************************************************

#define GTBEOUT                       0x00000400      // Global Time Base Output
#define GTBEEN                        0x00000200      // Global Time Base Enable
#define BDMMODE                       0x00000180      // BDM Mode
#define NUMTOF                        0x000001F0      // TOF Frequency
#define NUMTOF                        0x000001F0      // TOF Frequency


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_FLTPOL register.
//
//*****************************************************************************

#define FLT3POL                       0x00000008      // Fault Input 3 Polarity
#define FLT2POL                       0x00000004      // Fault Input 2 Polarity
#define FLT1POL                       0x00000002      // Fault Input 1 Polarity
#define FLT0POL                       0x00000001      // Fault Input 0 Polarity
#define FLT3POL-FLT0POL               0x00000078      // Fault Input 3-0 Polarity


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SYNCONF register.
//
//*****************************************************************************

#define HWSOC                         0x00100000      // Software output control synchronization is activated by a hardware trigger
#define HWINVC                        0x00080000      // Inverting control synchronization is activated by a hardware trigger
#define HWOM                          0x00040000      // Output mask synchronization is activated by a hardware trigger
#define HWWRBUF                       0x00020000      // MOD, CNTIN, and CV registers synchronization is activated by a hardware trigger
#define HWRSTCNT                      0x00010000      // FTM counter synchronization is activated by a hardware trigger
#define SWSOC                         0x00001000      // Software output control synchronization is activated by the software trigger
#define SWINVC                        0x00000800      // Inverting control synchronization is activated by the software trigger
#define SWOM                          0x00000400      // Output mask synchronization is activated by the software trigger
#define SWWRBUF                       0x00000200      // MOD, CNTIN, and CV registers synchronization is activated by the software trigger
#define SWRSTCNT                      0x00000100      // FTM counter synchronization is activated by the software trigger
#define SYNCMODE                      0x00000080      // Synchronization Mode
#define SWOC                          0x00000040      // SWOCTRL Register Synchronization
#define INVC                          0x00000020      // INVCTRL Register Synchronization
#define CNTINC                        0x00000008      // CNTIN Register Synchronization
#define HWTRIGMODE                    0x00000001      // Hardware Trigger Mode
#define SWOC                          0x00000020      // SWOCTRL Register Synchronization
#define INVC                          0x00000010      // INVCTRL Register Synchronization


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_INVCTRL register.
//
//*****************************************************************************

#define INV3EN                        0x00000008      // Pair Channels 3 Inverting Enable
#define INV2EN                        0x00000004      // Pair Channels 2 Inverting Enable
#define INV1EN                        0x00000002      // Pair Channels 1 Inverting Enable
#define INV0EN                        0x00000001      // Pair Channels 0 Inverting Enable
#define INV3EN-INV0EN                 0x00000078      // Pair Channels 3-0 Inverting Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_SWOCTRL register.
//
//*****************************************************************************

#define CH7OCV                        0x00018000      // Channel 7 Software Output Control Value
#define CH6OCV                        0x00006000      // Channel 6 Software Output Control Value
#define CH5OCV                        0x00001800      // Channel 5 Software Output Control Value
#define CH4OCV                        0x00000600      // Channel 4 Software Output Control Value
#define CH3OCV                        0x00000180      // Channel 3 Software Output Control Value
#define CH2OCV                        0x00000060      // Channel 2 Software Output Control Value
#define CH1OCV                        0x00000018      // Channel 1 Software Output Control Value
#define CH0OCV                        0x00000006      // Channel 0 Software Output Control Value
#define CH7OC                         0x00008000      // Channel 7 Software Output Control Enable
#define CH6OC                         0x00004000      // Channel 6 Software Output Control Enable
#define CH5OC                         0x00002000      // Channel 5 Software Output Control Enable
#define CH4OC                         0x00001000      // Channel 4 Software Output Control Enable
#define CH3OC                         0x00000800      // Channel 3 Software Output Control Enable
#define CH2OC                         0x00000400      // Channel 2 Software Output Control Enable
#define CH1OC                         0x00000200      // Channel 1 Software Output Control Enable
#define CH0OC                         0x00000100      // Channel 0 Software Output Control Enable
#define CH7OCV-CH0OCV                 0x007F8000      // Channel 7-0 Software Output Control Value
#define CH7OC-CH0OC                   0x00007F80      // Channel 7-0 Software Output Control Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the FTMx_PWMLOAD register.
//
//*****************************************************************************

#define LDOK                          0x00000200      // Load Enable
#define CH7SEL                        0x00000080      // Channel 7 Select
#define CH6SEL                        0x00000040      // Channel 6 Select
#define CH5SEL                        0x00000020      // Channel 5 Select
#define CH4SEL                        0x00000010      // Channel 4 Select
#define CH3SEL                        0x00000008      // Channel 3 Select
#define CH2SEL                        0x00000004      // Channel 2 Select
#define CH1SEL                        0x00000002      // Channel 1 Select
#define CH0SEL                        0x00000001      // Channel 0 Select
#define CH7SEL-CH0SEL                 0x00007F80      // Channel 7-0 Select


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCSR register.
//
//*****************************************************************************

#define TE                            0x80000000      // Transmitter Enable
#define STOPE                         0x40000000      // Stop Enable
#define DBGE                          0x20000000      // Debug Enable
#define BCE                           0x10000000      // Bit Clock Enable
#define FR                            0x02000000      // FIFO Reset
#define SR                            0x01000000      // Software Reset
#define WSF                           0x00100000      // Word Start Flag
#define SEF                           0x00080000      // Sync Error Flag
#define FEF                           0x00040000      // FIFO Error Flag
#define FWF                           0x00020000      // FIFO Warning Flag
#define FRF                           0x00010000      // FIFO Request Flag
#define WSIE                          0x00001000      // Word Start Interrupt Enable
#define SEIE                          0x00000800      // Sync Error Interrupt Enable
#define FEIE                          0x00000400      // FIFO Error Interrupt Enable
#define FWIE                          0x00000200      // FIFO Warning Interrupt Enable
#define FRIE                          0x00000100      // FIFO Request Interrupt Enable
#define FWDE                          0x00000002      // FIFO Warning DMA Enable
#define FRDE                          0x00000001      // FIFO Request DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR1 register.
//
//*****************************************************************************

#define TFW                           0x00000006      // Transmit FIFO Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR2 register.
//
//*****************************************************************************

#define SYNC                          0x180000000      // Synchronous Mode
#define BCS                           0x20000000      // Bit Clock Swap
#define BCI                           0x10000000      // Bit Clock Input
#define MSEL                          0x18000000      // MCLK Select
#define BCP                           0x02000000      // Bit Clock Polarity
#define BCD                           0x01000000      // Bit Clock Direction
#define DIV                           0x00007F80      // Bit Clock Divide


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR3 register.
//
//*****************************************************************************

#define TCE                           0x00010000      // Transmit Channel Enable
#define WDFL                          0x00000078      // Word Flag Configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR4 register.
//
//*****************************************************************************

#define FRSZ                          0x00780000      // Frame Size
#define Reserved                      0x00038000      // 
#define SYWD                          0x0001F000      // Sync Width
#define Reserved                      0x00000380      // 
#define MF                            0x00000010      // MSB First
#define FSE                           0x00000008      // Frame Sync Early
#define Reserved                      0x00000004      // 
#define FSP                           0x00000002      // Frame Sync Polarity
#define FSD                           0x00000001      // Frame Sync Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TCR5 register.
//
//*****************************************************************************

#define WNW                           0x1F0000000      // Word N Width
#define Reserved                      0x03800000      // 
#define W0W                           0x01F00000      // Word 0 Width
#define Reserved                      0x00038000      // 
#define FBT                           0x0001F000      // First Bit Shifted
#define Reserved                      0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TDRn register.
//
//*****************************************************************************

#define TDR[31:0]                     0x7FFFFFFF80000000      // Transmit Data Register


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TFRn register.
//
//*****************************************************************************

#define WFP                           0x001C0000      // Write FIFO Pointer
#define Reserved                      0x0FFF8000      // 
#define RFP                           0x0000001C      // Read FIFO Pointer


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_TMR register.
//
//*****************************************************************************

#define TWM                           0x7FFF8000      // Transmit Word Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCSR register.
//
//*****************************************************************************

#define RE                            0x80000000      // Receiver Enable
#define STOPE                         0x40000000      // Stop Enable
#define DBGE                          0x20000000      // Debug Enable
#define BCE                           0x10000000      // Bit Clock Enable
#define FR                            0x02000000      // FIFO Reset
#define SR                            0x01000000      // Software Reset
#define WSF                           0x00100000      // Word Start Flag
#define SEF                           0x00080000      // Sync Error Flag
#define FEF                           0x00040000      // FIFO Error Flag
#define FWF                           0x00020000      // FIFO Warning Flag
#define FRF                           0x00010000      // FIFO Request Flag
#define WSIE                          0x00001000      // Word Start Interrupt Enable
#define SEIE                          0x00000800      // Sync Error Interrupt Enable
#define FEIE                          0x00000400      // FIFO Error Interrupt Enable
#define FWIE                          0x00000200      // FIFO Warning Interrupt Enable
#define FRIE                          0x00000100      // FIFO Request Interrupt Enable
#define FWDE                          0x00000010      // FIFO Warning DMA Enable
#define FRDE                          0x00000001      // FIFO Request DMA Enable


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR1 register.
//
//*****************************************************************************

#define RFW                           0x00000006      // Receive FIFO Watermark


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR2 register.
//
//*****************************************************************************

#define SYNC                          0x180000000      // Synchronous Mode
#define BCS                           0x20000000      // Bit Clock Swap
#define BCI                           0x10000000      // Bit Clock Input
#define MSEL                          0x18000000      // MCLK Select
#define BCP                           0x02000000      // Bit Clock Polarity
#define BCD                           0x01000000      // Bit Clock Direction
#define DIV                           0x00007F80      // Bit Clock Divide


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR3 register.
//
//*****************************************************************************

#define RCE                           0x00010000      // Receive Channel Enable
#define WDFL                          0x00000078      // Word flag configuration


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR4 register.
//
//*****************************************************************************

#define FRSZ                          0x00780000      // Frame Size
#define Reserved                      0x00038000      // 
#define SYWD                          0x0001F000      // Sync Width
#define Reserved                      0x00000380      // 
#define MF                            0x00000010      // MSB First
#define FSE                           0x00000008      // Frame Sync Early
#define Reserved                      0x00000004      // 
#define FSP                           0x00000002      // Frame Sync Polarity
#define FSD                           0x00000001      // Frame Sync Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RCR5 register.
//
//*****************************************************************************

#define WNW                           0x1F0000000      // Word N Width
#define Reserved                      0x03800000      // 
#define W0W                           0x01F00000      // Word 0 Width
#define Reserved                      0x00038000      // 
#define FBT                           0x0001F000      // First Bit Shifted
#define Reserved                      0x00007F80      // 


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RDRn register.
//
//*****************************************************************************

#define RDR[31:0]                     0x7FFFFFFF80000000      // Receive Data Register


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RFRn register.
//
//*****************************************************************************

#define WFP                           0x001C0000      // Write FIFO Pointer
#define Reserved                      0x0FFF8000      // 
#define RFP                           0x0000001C      // Read FIFO Pointer
#define WFP                           0x001C0000      // FIFO write pointer for receive data channel
#define RFP                           0x0000001C      // FIFO read pointer for receive data channel


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_RMR register.
//
//*****************************************************************************

#define RWM                           0x7FFF8000      // Receive Word Mask
#define RWM                           0x7FFF8000      // Receive Word Mask


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_MCR register.
//
//*****************************************************************************

#define DUF                           0x80000000      // Divider Update Flag
#define MOE                           0x40000000      // MCLK Output Enable
#define MICS                          0x06000000      // MCLK Input Clock Select
#define DUF                           0x80000000      // Divider Update Flag
#define MOE                           0x40000000      // MCLK Output Enable
#define MICS                          0x06000000      // MCLK Input Clock Select


//*****************************************************************************
//
// The following are defines for the bit fields in the I2Sx_MDR register.
//
//*****************************************************************************

#define FRACT                         0x07F80000      // MCLK Fraction
#define DIVIDE                        0x007FF800      // MCLK Divide ::


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDOR register.
//
//*****************************************************************************

#define PDO                           0x7FFFFFFF80000000      // Port Data Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PSOR register.
//
//*****************************************************************************

#define PTSO                          0x7FFFFFFF80000000      // Port Set Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PCOR register.
//
//*****************************************************************************

#define PTCO                          0x7FFFFFFF80000000      // Port Clear Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PTOR register.
//
//*****************************************************************************

#define PTTO                          0x7FFFFFFF80000000      // Port Toggle Output


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDIR register.
//
//*****************************************************************************

#define PDI                           0x7FFFFFFF80000000      // Port Data Input


//*****************************************************************************
//
// The following are defines for the bit fields in the GPIOx_PDDR register.
//
//*****************************************************************************

#define PDD                           0x7FFFFFFF80000000      // Port Data Direction


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_GENCS register.
//
//*****************************************************************************

#define LPCLKS                        0x10000000      // Low Power Mode Clock Source Selection.
#define LPSCNITV                      0x78000000      // TSI Low Power Mode Scan Interval.
#define NSCN                          0x0F800000      // Number of Consecutive Scans per Electrode.
#define PS                            0x001C0000      // Electrode Oscillator prescaler.
#define EOSF                          0x00008000      // End of Scan Flag.
#define OUTRGF                        0x00004000      // Out of Range Flag.
#define EXTERF                        0x00002000      // External Electrode error occurred.
#define OVRF                          0x00001000      // Overrun error Flag.
#define SCNIP                         0x00000200      // Scan In Progress status.
#define SWTS                          0x00000100      // Software Trigger Start.
#define TSIEN                         0x00000080      // Touch Sensing Input Module Enable.
#define TSIIE                         0x00000040      // Touch Sensing Input Interrupt Module Enable.
#define ERIE                          0x00000020      // Error Interrupt Enable.
#define ESOR                          0x00000010      // End-of-Scan or Out-of-Range Interrupt select.
#define STM                           0x00000002      // Scan Trigger Mode.
#define STPE                          0x00000001      // TSI STOP Enable while in Low Power Modes (STOP, VLPS, LLS and VLLS{3,2,1}).


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_SCANC register.
//
//*****************************************************************************

#define REFCHRG                       0x78000000      // Ref OSC Charge Current select.
#define EXTCHRG                       0x00780000      // External OSC Charge Current select.
#define SMOD                          0x007F8000      // Scan Module.
#define AMCLKS                        0x00000030      // Active Mode Clock Source.
#define AMPSC                         0x0000001C      // Active Mode Prescaler.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_PEN register.
//
//*****************************************************************************

#define LPSP                          0x00780000      // Low Power Scan Pin.
#define PEN15                         0x00008000      // Touch Sensing Input Pin Enable Register 15.
#define PEN14                         0x00004000      // Touch Sensing Input Pin Enable Register 14.
#define PEN13                         0x00002000      // Touch Sensing Input Pin Enable Register 13.
#define PEN12                         0x00001000      // Touch Sensing Input Pin Enable Register 12.
#define PEN11                         0x00000800      // Touch Sensing Input Pin Enable Register 11.
#define PEN10                         0x00000400      // Touch Sensing Input Pin Enable Register 10.
#define PEN9                          0x00000200      // Touch Sensing Input Pin Enable Register 9.
#define PEN8                          0x00000100      // Touch Sensing Input Pin Enable Register 8.
#define PEN7                          0x00000080      // Touch Sensing Input Pin Enable Register 7.
#define PEN6                          0x00000040      // Touch Sensing Input Pin Enable Register 6.
#define PEN5                          0x00000020      // Touch Sensing Input Pin Enable Register 5.
#define PEN4                          0x00000010      // Touch Sensing Input Pin Enable Register 4.
#define PEN3                          0x00000008      // Touch Sensing Input Pin Enable Register 3.
#define PEN2                          0x00000004      // Touch Sensing Input Pin Enable Register 2.
#define PEN1                          0x00000002      // Touch Sensing Input Pin Enable Register 1.
#define PEN0                          0x00000001      // Touch Sensing Input Pin Enable Register 0.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_WUCNTR register.
//
//*****************************************************************************

#define WUCNT                         0x7FFF8000      // TouchSensing wake-up Channel 16bit counter value.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_CNTRn register.
//
//*****************************************************************************

#define CTN                           0x7FFF80000000      // TouchSensing Channel n 16-bit counter value.
#define CTN1                          0x7FFF8000      // TouchSensing Channel n-1 16-bit counter value.


//*****************************************************************************
//
// The following are defines for the bit fields in the TSIx_THRESHOLD register.
//
//*****************************************************************************

#define LTHH                          0x7FFF80000000      // Touch Sensing Channel Low Threshold value.
#define HTHH                          0x7FFF8000      // Touch Sensing Channel High Threshold value. ::



#endif // __MK10DX128VFM5_H__

