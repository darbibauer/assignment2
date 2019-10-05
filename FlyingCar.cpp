//
// Created by Darbi Bauer on 10/4/2019
//

#include "FlyingCar.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

FlyingCar::FlyingCar(){
    weightOfCar = 3000;
    setBrand("Tesla");
    setModel("Model S Fly");

    srand(std::time(nullptr));
}

FlyingCar::FlyingCar(string brand, string model, string fuelType, int carWeight){
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setweightOfCar(carWeight);
}

FlyingCar::~FlyingCar() = default;

int FlyingCar::getweightOfCar(){
    return weightOfCar;
}

void FlyingCar::setweightOfCar(int carWeight){
    if (carWeight > 0)
        weightOfCar = carWeight;
    else
        weightOfCar = 3000;
}

/* mileage is random number between 200 and 300; increases by 15% if
 * weight is under 2500 and fuel type is Jet Fuel*/

double FlyingCar::mileageEstimate(double time){
    double mileage = rand() % 101 + 200 * time;

    if (fuelType == "Jet Fuel" && weightOfCar < 2500) {
        mileage += mileage * 0.15;
    }
    return mileage;
}

string FlyingCar::toString(){
    return "-> FlyingCar\n" + PoweredVehicle::toString() + "\n\tWeight of Flying Car: " +
           to_string(weightOfCar);
}