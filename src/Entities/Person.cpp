//
// Created by Ivan Polák on 18/05/2025.
//

#include "Person.h"
#include <iostream>

void Person::Update(double deltaTime) {
    std::cout << "Person (" << name << ") Update" << std::endl;
    std::cout << "Delta Time: " << deltaTime << std::endl;
}

void Person::Start() {
    std::cout << "Person Start" << std::endl;
}
