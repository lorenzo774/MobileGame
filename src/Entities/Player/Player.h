#include "../Sprite/Sprite.h"
#include "physac.h"
#pragma once

class Player : public Sprite
{
public:
    bool isOnRight = false;
    double distanceFromStart = 0;
    int playerThickness = 4;
    float speed = 12;
    virtual void Update() override;
    virtual void Draw() override;
    Player();
    
private:
    PhysicsBody physicsBody;
    enum PlayerState
    {
        Moving,
        Dead
    };
    PlayerState currentState;
    void ChangeGravity();
};