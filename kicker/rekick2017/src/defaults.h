#ifndef	DEFAULTS_H
#define	DEFAULTS_H

#define	MISO			B,0
#define	MOSI			B,1
#define	SCK				B,7

// Boost and Kick
#define KICK			C,7
#define RESET_NOTAUS	B,4
#define NOTAUS			B,5
#define TRIGGER_NOTAUS	B,6

// Control Boost Controller
#define FAULT			C,4
#define CHARGE			C,6
#define DONE			B,3		// Is not implemented. Change R_BG from 0 to a value you calculate -> datasheet(LT3751)

// Control Active States
#define ACTIVATE_BOOSTER	C,5
#define ACTIVATE_SERVO		D,7
#define SERVO_PWM			C,1

// ADC Pins
#define PIN_24V_LOGIC		D,4
#define PIN_24V_BOOSTER		D,5
#define PIN_CAP				D,6

// Ethernet Communication
#define INT_ETH			C,0
#define CS_ETH			D,0
#define RST_ETH			D,1

//#define ADC_24V_LOGIC		0x01	// ADC1 / D,4
//#define ADC_24V_BOOSTER		0x02	// ADC2 / D,5
//#define ADC_CAP				0x03	// ADC3 / D,6

// CAN and PWM
#define CAN_TX			C,2
#define CAN_RX			C,3
#define OC1A			D,2
#define OC0A			D,3

#endif	// DEFAULTS_H
