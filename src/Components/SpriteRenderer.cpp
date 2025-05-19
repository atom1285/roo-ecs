//
// Created by Ivan Polák on 18/05/2025.
//

#include "SpriteRenderer.h"

#include <iostream>
#include "../Entity.h"
#include "../Manager.h"
#include "../Entities/Person.h"

void SpriteRenderer::Update(double deltaTime) {
    std::cout << "SpriteRenderer Update" << std::endl;

    Manager::AddEntity(new Person("Additional person"));
}

void SpriteRenderer::Start() {
    std::cout << "SpriteRenderer Start" << std::endl;
}
