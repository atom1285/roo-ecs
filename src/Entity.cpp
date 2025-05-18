//
// Created by Ivan Polák on 18/05/2025.
//

#include "Entity.h"
#include "Component.h"
#include <iostream>

void Entity::Start() {
}

void Entity::Update(double deltaTime) {
    std::cout << "Entity Update" << std::endl;
}

void Entity::AddComponent(Component *component) {
    components.push_back(component);
}

void Entity::StartComponents() {
    for (const auto& component : components) {
        component->Start();
    }
}

void Entity::UpdateComponents(double deltaTime) {
    for (const auto& component : components) {
        component->Update(deltaTime);
    }
}
