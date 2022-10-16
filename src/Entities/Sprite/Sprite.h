#include "raylib.h"
#pragma once

class Sprite
{
public:
    Vector2 position;
    Vector2 size;
    const char* tag;
    virtual void Update();
    virtual void Draw();
    Sprite(const char* tag);
};