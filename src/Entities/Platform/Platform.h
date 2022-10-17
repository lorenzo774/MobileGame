#include "../Sprite/Sprite.h"
#include "physac.h"
#pragma once

class Platform : public Sprite 
{   
public: 
    int platformThickness = 6;
    PhysicsBody physicsBody;
    Platform(bool _isRightPlatform);
    virtual void Draw() override;
    virtual void Update() override;
private:
    bool isRightPlatform;
    void InitializePlatform();
};