//
// Created by Ivan Polák on 18/05/2025.
//
#pragma once

#include <ctime>
#include <list>
#include <__chrono/steady_clock.h>

#include "Entity.h"

#ifndef MANAGER_H
#define MANAGER_H


class Manager {
protected:
    static std::list<Entity*> entities;
    std::chrono::steady_clock::time_point constructedAt;
    std::chrono::steady_clock::time_point lastFrame;
    unsigned long frames = 0;

public:
    Manager();

    void Frame();

    [[nodiscard]] unsigned long GetFrames() const;

    static void AddEntity(Entity *entity);
};


#endif //MANAGER_H
