//
// Created by Ivan Polák on 18/05/2025.
//

#ifndef COMPONENT_H
#define COMPONENT_H


class Component {
public:
    virtual ~Component() = default;
    virtual void Start();
    virtual void Update(double deltaTime);
};


#endif //COMPONENT_H
