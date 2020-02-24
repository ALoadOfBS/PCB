EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L MCU_Microchip_ATmega:ATmega32U4-AU U?
U 1 1 5E535670
P 2000 3200
F 0 "U?" H 2000 1311 50  0000 C CNN
F 1 "ATmega32U4-AU" H 2000 1220 50  0000 C CNN
F 2 "Package_QFP:TQFP-44_10x10mm_P0.8mm" H 2000 3200 50  0001 C CIN
F 3 "http://ww1.microchip.com/downloads/en/DeviceDoc/Atmel-7766-8-bit-AVR-ATmega16U4-32U4_Datasheet.pdf" H 2000 3200 50  0001 C CNN
	1    2000 3200
	1    0    0    -1  
$EndComp
$Comp
L power:+5V #PWR?
U 1 1 5E53C44C
P 1900 1200
F 0 "#PWR?" H 1900 1050 50  0001 C CNN
F 1 "+5V" H 1915 1373 50  0000 C CNN
F 2 "" H 1900 1200 50  0001 C CNN
F 3 "" H 1900 1200 50  0001 C CNN
	1    1900 1200
	1    0    0    -1  
$EndComp
Wire Wire Line
	2100 1400 2000 1400
Wire Wire Line
	2000 1400 1900 1400
Connection ~ 2000 1400
Wire Wire Line
	1900 1400 1900 1200
Connection ~ 1900 1400
$Comp
L power:GND #PWR?
U 1 1 5E53D250
P 1550 5000
F 0 "#PWR?" H 1550 4750 50  0001 C CNN
F 1 "GND" H 1555 4827 50  0000 C CNN
F 2 "" H 1550 5000 50  0001 C CNN
F 3 "" H 1550 5000 50  0001 C CNN
	1    1550 5000
	1    0    0    -1  
$EndComp
Wire Wire Line
	2000 5000 1900 5000
Wire Wire Line
	1900 5000 1550 5000
Connection ~ 1900 5000
$Comp
L Device:R_Small R?
U 1 1 5E53DEC2
P 3100 3800
F 0 "R?" V 2904 3800 50  0000 C CNN
F 1 "10k" V 2995 3800 50  0000 C CNN
F 2 "" H 3100 3800 50  0001 C CNN
F 3 "~" H 3100 3800 50  0001 C CNN
	1    3100 3800
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR?
U 1 1 5E53F0A7
P 3500 3800
F 0 "#PWR?" H 3500 3550 50  0001 C CNN
F 1 "GND" H 3505 3627 50  0000 C CNN
F 2 "" H 3500 3800 50  0001 C CNN
F 3 "" H 3500 3800 50  0001 C CNN
	1    3500 3800
	1    0    0    -1  
$EndComp
Wire Wire Line
	2600 3800 3000 3800
Wire Wire Line
	3200 3800 3500 3800
$EndSCHEMATC
