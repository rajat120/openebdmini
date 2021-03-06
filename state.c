#include "state.h"

bool highgain = false;
uint16_t lvc = 2000;
uint16_t targetamps = 1000;
uint16_t volts = 0;
uint16_t amps = 0;
uint16_t amphours = 0;
uint16_t watts = 0;
uint16_t loadduty = 800;
uint8_t digitbeingset = 0;
uint16_t time = 0;
displaymode dm = VOLTS;
operationmode om = OPMODE_OFF;
uint8_t sequence = 0;

bool state_changeopmode(operationmode newmode) {

	bool changeok = false;

	switch (om) {
	case OPMODE_ON:
		if (newmode == OPMODE_OFF)
			changeok = true;
		break;
	case OPMODE_OFF:
		if (newmode == OPMODE_ON)
			changeok = true;
		break;
	case OPMODE_LVC:
		if (newmode == OPMODE_OFF)
			changeok = true;
		break;
	}

	if (changeok)
		om = newmode;

	return changeok;
}
