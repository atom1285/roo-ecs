//
// Created by Ivan Polák on 18/05/2025.
//

#ifndef COMPONENT_H
#define COMPONENT_H
#include <list>
#include <string>

#include "Component.h"

class Component;

class Entity {
public:
    std::string name;
    std::list<Component*> components;

    explicit Entity(const std::string &name) {
        this->name = name;
    }

    virtual ~Entity() = default;

    virtual void Start();

    virtual void Update(double deltaTime);

    void AddComponent(Component *component);

    void StartComponents();

    void UpdateComponents(double deltaTime);
};


#endif //COMPONENT_H
