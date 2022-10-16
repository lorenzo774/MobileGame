#include "raylib.h"
#pragma once

class Sprite
{
public:
    Vector2 position;
    Vector2 size;
    virtual void Update();
    virtual void Draw();
    Sprite();
};