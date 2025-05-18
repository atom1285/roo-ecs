#include <iostream>
#include <thread>
#include <chrono>

#include "src/Manager.h"
#include "src/Components/Vehicle.h"

int main() {
    std::cout << "ECS" << "!\n";

    Manager manager;

    manager.AddComponent(new Vehicle());

    while (true) {
        manager.Frame();

        // Run at 30 fps
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 / 30));
    }

    return 0;
}
