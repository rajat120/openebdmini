#include "state.h"

bool highgain = false;
uint16_t lvc = 2000;
uint16_t targetamps = 1000;
uint16_t volts = 0;
uint16_t amps = 0;
uint16_t amphours = 0;
uint16_t watts = 0;
uint16_t loadduty = 800;
displaymode dm = VOLTS;