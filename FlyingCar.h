//
// Created by Darbi Bauer on 10/4/2019
//

#ifndef DRIVINGSIMULATOR_FLYINGCAR_H
#define DRIVINGSIMULATOR_FLYINGCAR_H

#include "PoweredVehicle.h"

class FlyingCar : public PoweredVehicle {

private:
    int weightOfCar;

public:
    FlyingCar();

    explicit FlyingCar(string brand, string model, string fuelType,
                       int numberOfEngines);

    virtual ~FlyingCar();
    int getweightOfCar();
    void setweightOfCar(int carWeight);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif