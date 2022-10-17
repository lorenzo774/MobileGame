#include "raylib.h"
#include "physac.h"
#include "../Sprite/Sprite.h"
#pragma once

class Obstacle : public Sprite 
{
private:
    void DrawSpikes();
protected:
    int repeat;
    bool rightObstacle;
public:
    float obstacleSpeed = 700.0;
    Obstacle(int _repeat, bool _rightObstacle);
    PhysicsBody physicsBody;
    virtual void Draw() override;
    virtual void Update() override;
};