//
// Created by Ivan Polák on 18/05/2025.
//

#include "Vehicle.h"
#include <iostream>

void Vehicle::Update(double deltaTime) {
    std::cout << "Vehicle (" << name << ") Update" << std::endl;
    std::cout << "Delta Time: " << deltaTime << std::endl;
}

void Vehicle::Start() {
    std::cout << "Vehicle Start" << std::endl;
}
