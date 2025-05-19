//
// Created by Ivan Polák on 18/05/2025.
//

#include "Manager.h"

#include <chrono>
#include <iostream>

Manager::Manager() {
    constructedAt = std::chrono::steady_clock::now(); // Store current time
    lastFrame = constructedAt;
}

std::list<Entity*> Manager::entities;

void Manager::Frame() {
    frames++;

    std::cout << "frame = " << frames << std::endl;

    for (const auto entity: entities) {
        auto currentTime = std::chrono::steady_clock::now();
        std::chrono::duration<double> timeSinceLastFrame = currentTime - lastFrame;

        const auto timeSinceLastFrameInMilliseconds = timeSinceLastFrame.count() * 1000;

        entity->Update(timeSinceLastFrameInMilliseconds);
        entity->UpdateComponents(timeSinceLastFrameInMilliseconds);
    }

    lastFrame = std::chrono::steady_clock::now();
}

unsigned long Manager::GetFrames() const {
    return frames;
}

void Manager::AddEntity(Entity *entity) {
    entity->Start();
    entity->StartComponents();
    std::cout << "Added Entity" << std::endl;
    entities.push_back(entity);
}
