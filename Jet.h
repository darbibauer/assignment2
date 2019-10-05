//
// Created by Darbi Bauer on 10/4/2019
//

#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;

public:
    Jet();

    explicit Jet(string brand, string model, string fuelType,
                 int numberOfEngines);

    virtual ~Jet();
    int getnumberOfEngines();
    void setNumberOfEngines(int engines);
    virtual double mileageEstimate(double time);
    virtual string toString();
};


#endif