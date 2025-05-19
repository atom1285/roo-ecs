//
// Created by Ivan Polák on 18/05/2025.
//

#include "Component.h"

#include <iostream>

void Component::Start() {
    std::cout << "Component Start" << std::endl;
}

void Component::Update(double deltaTime) {
    std::cout << "Component Update" << std::endl;
}
