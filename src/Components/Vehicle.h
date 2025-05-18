//
// Created by Ivan Polák on 18/05/2025.
//

#ifndef VEHICLE_H
#define VEHICLE_H

#include "../Component.h"
#include <iostream>


class Vehicle: public Component {
    void Update(double deltaTime) override;
    void Start() override;
};



#endif //VEHICLE_H
