/*
 * config.h
 *
 *  Automatically created by Lishui Parameter Configurator
 *  Author: stancecoke
 */

#ifndef CONFIG_H_
#define CONFIG_H_
#include "stdint.h"
#define DISPLAY_TYPE_EBiCS (1<<5)                  // King-Meter 618U protocol (KM5s, EBS-LCD2, J-LCD, SW-LCD)
#define DISPLAY_TYPE_KINGMETER_618U (1<<3)                  // King-Meter 618U protocol (KM5s, EBS-LCD2, J-LCD, SW-LCD)
#define DISPLAY_TYPE_KINGMETER_901U (1<<4)                  // King-Meter 901U protocol (KM5s)
#define DISPLAY_TYPE_KINGMETER      (DISPLAY_TYPE_KINGMETER_618U|DISPLAY_TYPE_KINGMETER_901U)
#define DISPLAY_TYPE_BAFANG (1<<2)							// For 'Blaupunkt' Display of Prophete Entdecker
#define DISPLAY_TYPE_KUNTENG (1<<1)							// For ASCII-Output in Debug mode
#define DISPLAY_TYPE_DEBUG (1<<0)							// For ASCII-Output in Debug mode);

#define TRIGGER_OFFSET_ADC 50
#define TRIGGER_DEFAULT 2020
#define _T 2028
#define CAL_BAT_V 25                                        
#define CAL_V 25											// ADC Wert = Batteriespannung in mV:MS.Voltage Ausgabe in HTErm . Beispiel: bei 53,00V = 53000/2128 = 25
#define CAL_I 48LL<<8										// ausgerechnet mit hochsitzcola - 48 = ADC Wert
#define INDUCTANCE 6LL
#define RESISTANCE 40LL
#define FLUX_LINKAGE 1200LL
#define GAMMA 9LL
#define BATTERY_LEVEL_1 433000 //nur für Kuteng, dennoch nochmal prüfen bis BATTERY_LEVEL_5
#define BATTERY_LEVEL_2 450000
#define BATTERY_LEVEL_3 470000
#define BATTERY_LEVEL_4 480000
#define BATTERY_LEVEL_5 500000
#define P_FACTOR_I_Q 50  //50
#define I_FACTOR_I_Q 2
#define P_FACTOR_I_D 50  //50
#define I_FACTOR_I_D 2
#define P_FACTOR_SPEED 1
#define I_FACTOR_SPEED 10
#define TS_COEF 1000 //ca. 1000 als Richtwert, dann nach Fahrgefühl anpassen.
//Rechnung =
//int32_temp_current_target = aktueller Phasenstrom beim Pedalieren!
//= (TS_COEF*(int16_t)(MS.assist_level)* (uint32_torque_cumulated>>5)/uint32_PAS)>>8;
//((1000*127*(5767/2^5))/129)/2^8 = 693
//693 x 48 = 33264 mA = 33 A Phasenstrom beim Pedalieren
#define PAS_TIMEOUT 1000 //8000 = 1 Sekunde
#define RAMP_END 1600
#define THROTTLE_OFFSET 900  //GASGRIFF OFFSET 900 proved
#define THROTTLE_MAX 3000 //2800 proved   2000 zum Testen
#define WHEEL_CIRCUMFERENCE 2450
#define GEAR_RATIO 50 // Motor hat 20 Magnete und eine 1:5 Übersetzung. 1: nicht mitrechnen = 5*10 Polpaare (20 Magnete:2) = 50
#define SPEEDLIMIT 25 //in km/h
#define PULSES_PER_REVOLUTION 6
#define PH_CURRENT_MAX 1042 // Phasenstrom soll 25A sein: 25000mA/48(ADC Wert Zeile 24) = 520 oder z.B. 600 sind 28,8A/ oder 28800mA 
                            // Schwach 25A = 520 //Mittel 50A = 1042 //Stark 70A = 1458 // Hyper 85A = 1771
                            // Absolutes Maximum Phasenstrom sollten 95A sein für den Controller. Mehr Phasenstrom bedeutet mehr Belastung für das Planetengetriebe
#define BATTERYCURRENT_MAX 13000 //in mA - benötigt keine Umrechnung über ADC Wert
#define SPEC_ANGLE -167026406L //Value no longer needed
//#define DIRDET
#define FRAC_HIGH 30
#define FRAC_LOW 15
#define TS_MODE  //Drehmomentsensor Modus aktiv
#define TQONAD1  //Drehmomentsensor an AD1
//#define DISPLAY_TYPE DISPLAY_TYPE_DEBUG //DEBUG AUSGABE
#define DISPLAY_TYPE DISPLAY_TYPE_KINGMETER_901U //KM5S-Himiway-Disp
#define REVERSE 1
#define PUSHASSIST_CURRENT 30
#define VOLTAGE_MIN 1640 // Motorabschaltung soll ab/unter 41V sein: 41000mV/25 (ADC Wert Zeile 23) = 1640
#define REGEN_CURRENT 0
//#define FAST_LOOP_LOG
//#define DISABLE_DYNAMIC_ADC
//#define INDIVIDUAL_MODES
//#define SPEEDTHROTTLE
#define THROTTLE_OVERRIDE
#define REGEN_CURRENT_MAX 10000


#define P_FACTOR_PLL 10
#define I_FACTOR_PLL 10
#define AUTODETECT 0
#define SPEED_PLL 0 //1 for using PLL, 0 for angle extrapolation

#define EXTERNAL 1
#define INTERNAL 0
#define SPEEDSOURCE EXTERNAL     // KM/H Berechnung. EXTERNAL = über extra Sensor     INTERNAL = Berechnung über Controller - ohne Motor immer 0 km/h
#define SPEEDFILTER 1
#define SIXSTEPTHRESHOLD 20000

#define SPDSHFT 0
//#define ADC_BRAKE

#endif /* CONFIG_H_ */
