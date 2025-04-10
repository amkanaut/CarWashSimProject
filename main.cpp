#include <iostream>
#include <stdio.h>
#include <queue>
#include <fstream>
#include "car.h"
#include "simulation.h"
#include "arrivalTimeReader.h"



using namespace std;

int main() {

    const int simulationEndTime = 540;
    const string filename = "arrival_time.txt";

    queue<Car> cars = readArrivalTime(filename);
    simulateCarWash(cars, simulationEndTime);
    displayCars(cars);
    displayStats(cars);
    
    return 0; 

}
