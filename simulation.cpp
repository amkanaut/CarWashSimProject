#include "simulation.h"
#include <iostream>
#include <iomanip>
#include <queue>

using namespace std; 

void simulateCarWash(queue<Car>& cars, int simulationEndTime) {

    // TODO

    int currentTime = 0;
    queue<Car> washed;

    while (!cars.empty()) {
        Car car = cars.front();
        cars.pop();

        if (car.arrivalTime > simulationEndTime) break;

        car.calculateTimes(currentTime);
        washed.push(car);

    }

    cars = washed;
}

void displayCars (const queue<Car>& cars) {
    queue<Car> copy = cars;
}