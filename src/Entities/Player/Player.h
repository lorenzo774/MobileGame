#include "../Sprite/Sprite.h"
#include "physac.h"
#include "../../UI/PointsTxt/PointsTxt.h"
#pragma once

class Player : public Sprite
{
public:
    bool isOnRight = false;
    float distanceFromStart = 0;
    int playerThickness = 6;
    float speed = 12;
    virtual void Update() override;
    virtual void Draw() override;
    Player(PointsTxt* _pointsTxt);
    
private:
    PointsTxt* pointsTxt;
    PhysicsBody physicsBody;
    enum PlayerState
    {
        Moving,
        Dead
    };
    PlayerState currentState;
    void ChangeGravity();
};