#ifndef SIMULATION_H
#define SIMULATION_H

#include <vector>
#include "car.h"

using namespace std;

void simulateCarWash(vector<Car>& cars, int simulationEndTime);
void displayCars(const vector<Car>& cars);
void displayStats(const vector<Car>& cars);

#endif