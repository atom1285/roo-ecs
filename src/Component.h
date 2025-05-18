//
// Created by Ivan Polák on 18/05/2025.
//

#ifndef COMPONENT_H
#define COMPONENT_H

#pragma once

#include "./Entity.h"


class Component {
public:
    virtual ~Component() = default;

    virtual void Start() = 0;
    virtual void Update(double deltaTime) = 0;
};


#endif //COMPONENT_H
