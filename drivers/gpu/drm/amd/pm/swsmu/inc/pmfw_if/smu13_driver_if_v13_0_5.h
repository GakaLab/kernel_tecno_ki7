/*
 * Copyright 2020 Advanced Micro Devices, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE COPYRIGHT HOLDER(S) OR AUTHOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 *
 */
#ifndef __SMU13_DRIVER_IF_V13_0_5_H__
#define __SMU13_DRIVER_IF_V13_0_5_H__

#define SMU13_0_5_DRIVER_IF_VERSION 5

// Throttler Status Bitmask
#define THROTTLER_STATUS_BIT_SPL            0
#define THROTTLER_STATUS_BIT_FPPT           1
#define THROTTLER_STATUS_BIT_SPPT           2
#define THROTTLER_STATUS_BIT_SPPT_APU       3
#define THROTTLER_STATUS_BIT_THM_CORE       4
#define THROTTLER_STATUS_BIT_THM_GFX        5
#define THROTTLER_STATUS_BIT_THM_SOC        6
#define THROTTLER_STATUS_BIT_TDC_VDD        7
#define THROTTLER_STATUS_BIT_TDC_SOC        8
#define THROTTLER_STATUS_BIT_PROCHOT_CPU    9
#define THROTTLER_STATUS_BIT_PROCHOT_GFX   10
#define THROTTLER_STATUS_BIT_EDC_CPU       11
#define THROTTLER_STATUS_BIT_EDC_GFX       12

#define NUM_DCFCLK_DPM_LEVELS   4
#define NUM_DISPCLK_DPM_LEVELS  4
#define NUM_DPPCLK_DPM_LEVELS   4
#define NUM_SOCCLK_DPM_LEVELS   4
#define NUM_VCN_DPM_LEVELS      4
#define NUM_SOC_VOLTAGE_LEVELS  4
#define NUM_DF_PSTATE_LEVELS    4

typedef struct {
  uint16_t MinClock; // This is either DCFCLK or SOCCLK (in MHz)
  uint16_t MaxClock; // This is either DCFCLK or SOCCLK (in MHz)
  uint16_t MinMclk;
  uint16_t MaxMclk;
  uint8_t  WmSetting;
  uint8_t  WmType;  // Used for normal pstate change or memory retraining
  uint8_t  Padding[2];
} WatermarkRowGeneric_t;

#define NUM_WM_RANGES 4
#define WM_PSTATE_CHG 0
#define WM_RETRAINING 1

typedef enum {
  WM_SOCCLK = 0,
  WM_DCFCLK,
  WM_COUNT,
} WM_CLOCK_e;

typedef struct {
  // Watermarks
  WatermarkRowGeneric_t WatermarkRow[WM_COUNT][NUM_WM_RANGES];
  uint32_t MmHubPadding[7]; // SMU internal use
} Watermarks_t;

typedef struct {
  uint32_t FClk;
  uint32_t MemClk;
  uint32_t Voltage;
} DfPstateTable_t;

typedef struct {
  uint16_t GfxclkFrequency;             //[MHz]
  uint16_t SocclkFrequency;             //[MHz]

  uint16_t VclkFrequency;               //[MHz]
  uint16_t DclkFrequency;               //[MHz]

  uint16_t MemclkFrequency;             //[MHz]
  uint16_t spare;

  uint16_t GfxActivity;                 //[centi]
  uint16_t UvdActivity;                 //[centi]

  uint16_t Voltage[2];                  //[mV] indices: VDDCR_VDD, VDDCR_SOC
  uint16_t Current[2];                  //[mA] indices: VDDCR_VDD, VDDCR_SOC

  uint16_t Power[2];                    //[mW] indices: VDDCR_VDD, VDDCR_SOC
  uint16_t GfxTemperature;              //[centi-Celsius]

  uint16_t SocTemperature;              //[centi-Celsius]
  uint16_t ThrottlerStatus;

  uint16_t CurrentSocketPower;          //[mW]
} SmuMetrics_t;

//Freq in MHz
//Voltage in milli volts with 2 fractional bits
typedef struct {
  uint32_t DcfClocks[NUM_DCFCLK_DPM_LEVELS];
  uint32_t DispClocks[NUM_DISPCLK_DPM_LEVELS];
  uint32_t DppClocks[NUM_DPPCLK_DPM_LEVELS];
  uint32_t SocClocks[NUM_SOCCLK_DPM_LEVELS];
  uint32_t VClocks[NUM_VCN_DPM_LEVELS];
  uint32_t DClocks[NUM_VCN_DPM_LEVELS];
  uint32_t SocVoltage[NUM_SOC_VOLTAGE_LEVELS];
  DfPstateTable_t DfPstateTable[NUM_DF_PSTATE_LEVELS];
  uint8_t  NumDcfClkLevelsEnabled;
  uint8_t  NumDispClkLevelsEnabled; //Applies to both Dispclk and Dppclk
  uint8_t  NumSocClkLevelsEnabled;
  uint8_t  VcnClkLevelsEnabled;     //Applies to both Vclk and Dclk
  uint8_t  NumDfPstatesEnabled;
  uint8_t  spare[3];
  uint32_t MinGfxClk;
  uint32_t MaxGfxClk;
} DpmClocks_t;

#define TABLE_BIOS_IF            0 // Called by BIOS
#define TABLE_WATERMARKS         1 // Called by DAL through VBIOS
#define TABLE_CUSTOM_DPM         2 // Called by Driver
#define TABLE_SPARE1             3
#define TABLE_DPMCLOCKS          4 // Called by Driver and VBIOS
#define TABLE_MOMENTARY_PM       5 // Called by Tools
#define TABLE_MODERN_STDBY       6 // Called by Tools for Modern Standby Log
#define TABLE_SMU_METRICS        7 // Called by Driver
#define TABLE_COUNT              8

#endif
