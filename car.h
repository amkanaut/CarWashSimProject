/********************************************
* Car Class header file
*
* Author: Amka Baasanbat
* Version: 4/9/2025
********************************************/
#ifndef CAR_H
#define CAR_H

using namespace std;

class Car {
public:

    int carNumber;
    int departureTime;
    int waitTime;
    int totalTime;
    int arrivalTime;
    int carWashStartTime;

    Car(int carNumber, int arrivalTime);
    void calculateTimes(int& currentTime);
};

#endif // CAR_H
