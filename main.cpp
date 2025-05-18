#include <iostream>
#include <thread>
#include <chrono>

#include "src/Manager.h"
#include "src/Entities/Person.h"
#include "src/Entities/Vehicle.h"

int main() {
    std::cout << "ECS" << "!\n";

    Manager manager;

    manager.AddEntity(new Vehicle("Starting Vehicle"));
    manager.AddEntity(new Person("Starting Person"));

    while (true) {
        manager.Frame();

        // Run at 30 fps
        std::this_thread::sleep_for(std::chrono::milliseconds(1000 / 30));

        if (manager.GetFrames() % 100 == 0) {
            //std::cout << "--------------------------------" << std::endl;
            //std::cout << "You can now add an Entity! (TODO)" << std::endl;
            //std::cout << "--------------------------------" << std::endl;
        }
    }

    return 0;
}
