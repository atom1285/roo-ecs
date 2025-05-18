//
// Created by Ivan Polák on 18/05/2025.
//

#ifndef VEHICLE_H
#define VEHICLE_H

#include "../Entity.h"
#include <iostream>


class Vehicle : public Entity {
public:
    explicit Vehicle(const std::string &name) : Entity(name) {
    }

    void Update(double deltaTime) override;

    void Start() override;
};


#endif //VEHICLE_H
