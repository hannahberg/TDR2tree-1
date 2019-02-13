#ifndef CALIBRATION_H
#define CALIBRATION_H

#include "FileReader.h"
#include "event.h"

extern bool SetCalibration(const char *calfile);

extern double CalibrateEnergy(const word_t &detector);

extern double CalibrateTime(const word_t &detector);

//extern Event_time_t CalibrateTime(const word_t &detector);

extern bool CheckTimeGateAddback(const double &timediff);


#endif // CALIBRATION_H
