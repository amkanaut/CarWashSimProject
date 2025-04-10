#include "arrivalTimeReader.h"
#include <fstream>
#include <queue>
#include <string>

using namespace std;

queue<Car> readArrivalTime(const string& filename) {
    queue<Car> cars;
    ifstream infile(filename);

    if (!infile.is_open()) { // Error handling if file cannot be opened
        cerr << "Unable to open file" << filename << endl;
        return cars;
    }

    int arrivalTime;
    int carNumber = 1; 

    // read data and push onto queue

    while(infile >> arrivalTime) {
        Car car(carNumber++, arrivalTime);
        cars.push(car);
    }

    infile.close();
    return cars; 

    

}