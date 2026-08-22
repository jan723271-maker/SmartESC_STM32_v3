#define THROTTLEOFFSET 45
#define THROTTLEMAX 175
#define BRAKEOFFSET 50
#define BRAKEMAX 100
#ifndef CONFIG_H_
#define CONFIG_H_

// ====================================================================
// HARDWARE DEFINITION
// ====================================================================
#define HW_G30                  // Aktiviert das Ninebot G30 Platinen-Layout
//#define HW_M365               // Deaktiviert (auskommentiert)

// ====================================================================
// BATTERIE & SPANNUNG (48V / 13S Modifikation)
// ====================================================================
#define BATTERY_VOLTAGE_MIN 39000     // 39.0V - Tiefentladeschutz für 48V Akku
#define BATTERY_VOLTAGE_MAX 55000     // 55.0V - Ladeschluss-Sicherheitspuffer (max 54.6V)

// ====================================================================
// GLOBAL STROMBEGRENZUNG
// ====================================================================
#define BATTERY_CURRENT_MAX 38000     // Maximal 38 Ampere Batteriestrom
#define PHASE_CURRENT_MAX   65000     // Maximal 65 Ampere Phasenstrom (KuKirin Motor)

// ====================================================================
// DASHBOARD & INTEGRATION (G30 Stock Dashboard)
// ====================================================================
#define US_DASHBOARD_G30        // Aktiviert das originale Ninebot G30 Display
#define BMS_UART_COMM           // Aktiviert die 3-Kabel UART-Kommunikation zum BMS

// ====================================================================
// DIE 3 FAHRMODI (Eco, Normal, Sport) & FIELD WEAKENING
// ====================================================================
#define FIELD_WEAK_ENA 1        // Feldschwächung grundsätzlich aktivieren

// --- MODUS 1: ECO (Polizei- / Legal-Modus) ---
#define PHASE_CURRENT_ECO 25000        // 25A Phasenstrom (sanfter Anzug)
#define SPEED_LIMIT_ECO 99            // Strikt auf 22 km/h gedrosselt
#define FIELD_WEAK_CURRENT_ECO 0       // 0A - Feldschwächung komplett AUS

// --- MODUS 2: NORMAL (Mittlere Feldschwächung) ---
#define PHASE_CURRENT_NORMAL 45000     // 45A Phasenstrom
#define SPEED_LIMIT_NORMAL 99          // Begrenzt auf ca. 35 km/h
#define FIELD_WEAK_CURRENT_NORMAL 6000  // 6A Feldschwächung (mittlerer Top-Speed)

// --- MODUS 3: SPORT (Starke Feldschwächung + Offene Leistung) ---
#define PHASE_CURRENT_SPORT 65000      // Volle 65A Phasenstrom für den G2 Master Motor
#define SPEED_LIMIT_SPORT 99           // Keine Geschwindigkeitsbegrenzung (offen)
#define FIELD_WEAK_CURRENT_SPORT 14000 // 14A starke Feldschwächung (maximaler Top-Speed)

// ====================================================================
// MOTOR-PARAMETER & SCHUTZFUNKTIONEN
// ====================================================================
#define MOTOR_POLE_PAIRS 15     // 15 Polpaare entspricht genau den 30 Polen des KuKirin G2 Master Motors
#define INVERT_DIRECTION 0      // Wenn der Motor rückwärts dreht, hier eine 1 eintragen
#define INVERTER_TEMP_MAX 80    // Temperaturschutz für den G30 Controller (80°C)





// ADC channels
#define ADC_VOLTAGE 0
#define ADC_THROTTLE 1
#define ADC_TEMP 2

#define LED_Pin GPIO_PIN_1
#define LED_GPIO_Port GPIOD
#define UART1_Tx_Pin GPIO_PIN_6
#define UART1_Tx_GPIO_Port GPIOB
#define BrakeLight_Pin GPIO_PIN_15
#define BrakeLight_GPIO_Port GPIOA
#define Temp_Pin GPIO_PIN_0
#define Temp_GPIO_Port GPIOA
#define Throttle_Pin GPIO_PIN_1
#define Throttle_GPIO_Port GPIOA
#define Batt_Voltage_Pin GPIO_PIN_2
#define Batt_Voltage_GPIO_Port GPIOA
#define PWR_BTN_Pin GPIO_PIN_14
#define PWR_BTN_GPIO_Port GPIOC
#define TPS_ENA_Pin GPIO_PIN_15
#define TPS_ENA_GPIO_Port GPIOC


