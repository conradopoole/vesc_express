// This file is autogenerated by VESC Tool

#ifndef VBMS32_CONF_DEFAULT_H_
#define VBMS32_CONF_DEFAULT_H_

// CAN ID
#ifndef CONF_CONTROLLER_ID
#define CONF_CONTROLLER_ID 3
#endif

// CAN Baud Rate
#ifndef CONF_CAN_BAUD_RATE
#define CONF_CAN_BAUD_RATE 2
#endif

// Status Message Rate
#ifndef CONF_CAN_STATUS_RATE_HZ
#define CONF_CAN_STATUS_RATE_HZ 20
#endif

// WiFi Mode
#ifndef CONF_WIFI_MODE
#define CONF_WIFI_MODE 0
#endif

// Station Mode SSID
#ifndef CONF_WIFI_STA_SSID
#define CONF_WIFI_STA_SSID ""
#endif

// Station Mode Key
#ifndef CONF_WIFI_STA_KEY
#define CONF_WIFI_STA_KEY ""
#endif

// Access Point SSID
#ifndef CONF_WIFI_AP_SSID
#define CONF_WIFI_AP_SSID "VESC WiFi"
#endif

// Access Point Key
#ifndef CONF_WIFI_AP_KEY
#define CONF_WIFI_AP_KEY "vesc6wifi"
#endif

// Enable Local TCP
#ifndef CONF_USE_TCP_LOCAL
#define CONF_USE_TCP_LOCAL 1
#endif

// Enable TCP Hub
#ifndef CONF_USE_TCP_HUB
#define CONF_USE_TCP_HUB 0
#endif

// TCP Hub URL
#ifndef CONF_TCP_HUB_URL
#define CONF_TCP_HUB_URL "veschub.vedder.se"
#endif

// TCP Hub Port
#ifndef CONF_TCP_HUB_PORT
#define CONF_TCP_HUB_PORT 65101
#endif

// TCP Hub ID
#ifndef CONF_TCP_HUB_ID
#define CONF_TCP_HUB_ID "express1"
#endif

// TCP Hub Password
#ifndef CONF_TCP_HUB_PASS
#define CONF_TCP_HUB_PASS ""
#endif

// Bluetooth Mode
#ifndef CONF_BLE_MODE
#define CONF_BLE_MODE 1
#endif

// Name
#ifndef CONF_BLE_NAME
#define CONF_BLE_NAME "VESC BMS"
#endif

// Bluetooth Pin Code
#ifndef CONF_BLE_PIN
#define CONF_BLE_PIN 123456
#endif

// BLE Service Capacity
#ifndef CONF_BLE_SERVICE_CAPACITY
#define CONF_BLE_SERVICE_CAPACITY 0
#endif

// BLE Characteristic and Descriptor Capacity
#ifndef CONF_BLE_CHR_DESCR_CAPACITY
#define CONF_BLE_CHR_DESCR_CAPACITY 0
#endif

// Max Balance Channels
#ifndef CONF_MAX_BAL_CH
#define CONF_MAX_BAL_CH 5
#endif

// Cells IC1
#ifndef CONF_CELLS_IC1
#define CONF_CELLS_IC1 16
#endif

// Cells IC2
#ifndef CONF_CELLS_IC2
#define CONF_CELLS_IC2 16
#endif

// Temperature Sensors
#ifndef CONF_TEMP_NUM
#define CONF_TEMP_NUM 1
#endif

// Ah Columb Counting
#ifndef CONF_BATT_AH
#define CONF_BATT_AH 10
#endif

// Use Columb Counting
#ifndef CONF_SOC_USE_AH
#define CONF_SOC_USE_AH 0
#endif

// Block Sleep Mode
#ifndef CONF_BLOCK_SLEEP
#define CONF_BLOCK_SLEEP 1
#endif

// Cell Voltage Empty
#ifndef CONF_VC_EMPTY
#define CONF_VC_EMPTY 3.1
#endif

// Cell Voltage Full
#ifndef CONF_VC_FULL
#define CONF_VC_FULL 4.2
#endif

// Balance Starting Voltage
#ifndef CONF_BALANCE_START
#define CONF_BALANCE_START 0.015
#endif

// Balance End Voltage
#ifndef CONF_BALANCE_END
#define CONF_BALANCE_END 0.008
#endif

// Charge Start Voltage
#ifndef CONF_CHARGE_START
#define CONF_CHARGE_START 4.16
#endif

// Charge End Voltage
#ifndef CONF_CHARGE_END
#define CONF_CHARGE_END 4.21
#endif

// Charge Minimum Voltage
#ifndef CONF_CHARGE_MIN
#define CONF_CHARGE_MIN 2
#endif

// Balance Minimum Voltage
#ifndef CONF_BALANCE_MIN
#define CONF_BALANCE_MIN 3.5
#endif

// Max Cell Temp Balancing
#ifndef CONF_T_BAL_MAX_CELL
#define CONF_T_BAL_MAX_CELL 45
#endif

// Max BMS Temp Balancing
#ifndef CONF_T_BAL_MAX_IC
#define CONF_T_BAL_MAX_IC 85
#endif

// Balance Maximum Current
#ifndef CONF_BALANCE_MAX_CURRENT
#define CONF_BALANCE_MAX_CURRENT 1
#endif

// Minimum Counter Current
#ifndef CONF_MIN_CURRENT_AH_WH_CNT
#define CONF_MIN_CURRENT_AH_WH_CNT 0.3
#endif

// Minimum Sleep Current
#ifndef CONF_MIN_CURRENT_SLEEP
#define CONF_MIN_CURRENT_SLEEP 0.3
#endif

// Charger Detection Voltage
#ifndef CONF_V_CHARGE_DETECT
#define CONF_V_CHARGE_DETECT 5
#endif

// Charge Temp Max
#ifndef CONF_T_CHARGE_MAX
#define CONF_T_CHARGE_MAX 45
#endif

// Charge Temp Max Mos
#ifndef CONF_T_CHARGE_MAX_MOS
#define CONF_T_CHARGE_MAX_MOS 85
#endif

// Min Charge Current
#ifndef CONF_MIN_CHARGE_CURRENT
#define CONF_MIN_CHARGE_CURRENT 0.5
#endif

// Max Charge Current
#ifndef CONF_MAX_CHARGE_CURRENT
#define CONF_MAX_CHARGE_CURRENT 16
#endif

// Sleep Time Regular
#ifndef CONF_SLEEP_REGULAR
#define CONF_SLEEP_REGULAR 10
#endif

// Sleep Time Long
#ifndef CONF_SLEEP_LONG
#define CONF_SLEEP_LONG 30
#endif

// SoC Filter Constant
#ifndef CONF_SOC_FILTER_CONST
#define CONF_SOC_FILTER_CONST 1e-05
#endif

// Charge Temp Min
#ifndef CONF_T_CHARGE_MIN
#define CONF_T_CHARGE_MIN 0
#endif

// Precharge Time Max
#ifndef CONF_PSW_T_PCHG
#define CONF_PSW_T_PCHG 3
#endif

// Shortcircuit Protection Enabled
#ifndef CONF_PSW_SCD_EN
#define CONF_PSW_SCD_EN 1
#endif

// Shortcircuit Protection Threshold
#ifndef CONF_PSW_SCD_TRES
#define CONF_PSW_SCD_TRES 4
#endif

// Temperature Protection Enabled
#ifndef CONF_T_PSW_EN
#define CONF_T_PSW_EN 1
#endif

// PSW Temp Max Mos
#ifndef CONF_T_PSW_MAX_MOS
#define CONF_T_PSW_MAX_MOS 105
#endif

// Wait for Init
#ifndef CONF_PSW_WAIT_INIT
#define CONF_PSW_WAIT_INIT 0
#endif

// VBMS32_CONF_DEFAULT_H_
#endif

