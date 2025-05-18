//
// Created by Ivan Polák on 18/05/2025.
//

#ifndef PERSON_H
#define PERSON_H

#include "../Entity.h"
#include <iostream>


class Person : public Entity {
public:
    explicit Person(const std::string &name): Entity(name) {
    }

    void Update(double deltaTime) override;

    void Start() override;
};


#endif //PERSON_H
