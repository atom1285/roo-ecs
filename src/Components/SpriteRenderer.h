//
// Created by Ivan Polák on 18/05/2025.
//

#ifndef SPRITERENDERER_H
#define SPRITERENDERER_H
#include "../Component.h"


class SpriteRenderer: public Component {
public:
    void Update(double deltaTime) override;

    void Start() override;
};



#endif //SPRITERENDERER_H
