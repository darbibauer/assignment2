//
// Created by Darbi Bauer on 10/4/2019
//

#include "Skateboard.h"
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

Skateboard::Skateboard(string brand, string model){
    setBrand(brand);
    setModel(model);
    srand(std::time(nullptr));
}

Skateboard::~Skateboard() = default;

double Skateboard::mileageEstimate(double time){
    double mileage = (rand() % 5 + 1)/10 * time;

    if(time > 25 && time < 250)
        mileage +=( rand() % int(time/3) + 1);

    return mileage;
}

string Skateboard::toString(){
    return "-> Skateboard\n" + Vehicle::toString();
}