/*
* dm_high_current.cpp - Library for Device Module 3.1 High Current
* Created By Kevin Lam, June 5, 2017
* Released for Desktop Kit
* Philip Beesley Architect Inc. / Living Architecture Systems Group
*/

#include "dm_high_current.h"

DeviceModuleHigh::DeviceModuleHigh(const int digital_pin_array[], const int analog_pin_array[]) {

	memcpy(digital_port_pin, digital_pin_array, sizeof(digital_port_pin));
	memcpy(analog_port_pin, analog_pin_array, sizeof(analog_port_pin));

	pinMode(digital_port_pin[0], OUTPUT);
	pinMode(digital_port_pin[1], OUTPUT);
	pinMode(digital_port_pin[2], OUTPUT);
	pinMode(digital_port_pin[3], OUTPUT);
	pinMode(digital_port_pin[6], OUTPUT);
	pinMode(digital_port_pin[7], OUTPUT);
	pinMode(analog_port_pin[4], INPUT);
	pinMode(analog_port_pin[5], INPUT);

}

void DeviceModuleHigh::digitalWriteDM(char port_char, int port_state) {

	int pin_number = -1;

	if (port_char == 'C') { pin_number = digital_port_pin[0]; }
	else if (port_char == 'D') { pin_number = digital_port_pin[1]; }
	else if (port_char == 'E') { pin_number = digital_port_pin[2]; }
	else if (port_char == 'F') { pin_number = digital_port_pin[3]; }
	else if (port_char == 'G') { pin_number = digital_port_pin[6]; }
	else if (port_char == 'H') { pin_number = digital_port_pin[7]; }

	if (pin_number != -1)  {
		digitalWrite(digital_port_pin[pin_number], port_state);
	}

}

int DeviceModuleHigh::analogReadDM(char port_char){

	int pin_number = -1;

	if (port_char == 'A') { pin_number = analog_port_pin[4]; }
	else if (port_char == 'B') { pin_number = analog_port_pin[5]; }


	if (pin_number != -1){
		return analogRead(analog_port_pin[pin_number]);
	}

	return 0;

}
