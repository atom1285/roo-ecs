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

void Manager::Frame() {
    frames++;

    std::cout << "frame = " << frames << std::endl;

    for (const auto component: components) {
        auto currentTime = std::chrono::steady_clock::now();
        std::chrono::duration<double> timeSinceLastFrame = currentTime - lastFrame;

        const auto timeSinceLastFrameInMilliseconds = timeSinceLastFrame.count() * 1000;

        component->Update(timeSinceLastFrameInMilliseconds);
    }

    lastFrame = std::chrono::steady_clock::now();
}

void Manager::AddComponent(Component *component) {
    component->Start();
    std::cout << "Added component" << std::endl;
    components.push_back(component);
}
