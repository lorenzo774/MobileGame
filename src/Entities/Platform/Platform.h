#include "../Sprite/Sprite.h"
#include "physac.h"
#pragma once

class Platform : public Sprite 
{   
public: 
    int distanceFromBorder = 10;
    int platformThickness = 4;
    PhysicsBody physicsBody;
    Platform(const char* tag, bool _isRightPlatform);
    virtual void Draw() override;
    virtual void Update() override;
private:
    bool isRightPlatform;
    void InitializePlatform();
};