/********************************************
* Car Class
*
* Author: Amka Baasanbat
* Version: 4/9/2025
********************************************/
#include <iostream>
#include <queue>
#include <string>
#include <car.h>
#include <fstream>
#include <cmath>


using namespace std;

Car::Car(int carNumber, int arrivalTime) // Constructor to initialize members immediately
    : carNumber(carNumber), arrivalTime(arrivalTime),
      carWashStartTime(0), departureTime(0), waitTime(0), totalTime(0) {}

void Car::calculateTimes(int& currentTime) {
    // Time Calculation Logic
    if (arrivalTime > currentTime) {
        carWashStartTime = arrivalTime;
    } else {
        carWashStartTime = currentTime;
    }

    waitTime = carWashStartTime - arrivalTime;
    departureTime = carWashStartTime + 3; // 3 because 3 min per wash
    totalTime = departureTime - arrivalTime;
    currentTime = departureTime;

    
}



