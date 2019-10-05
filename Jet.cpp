//
// Created by Darbi Bauer on 10/4/2019
//

#include "Jet.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

Jet::Jet() {
    numberOfEngines = 1;
    setBrand("Custom");
    setModel("Hawker 400");

    srand(std::time(nullptr));
}

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines) {
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
}

Jet::~Jet() = default;

int Jet::getnumberOfEngines() {
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engines){
    if (engines <= 1)
        numberOfEngines = 1;
    else
        numberOfEngines = engines;
}

double Jet::mileageEstimate(double time){
    double mileage = rand() % 41 + 60 * time;

    if (fuelType == "Rocket" && numberOfEngines > 2) {
        mileage += mileage * (0.055 * numberOfEngines);
    }
    return mileage;
}

string Jet::toString(){
    return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of Engines: " +
           to_string(getnumberOfEngines());
}