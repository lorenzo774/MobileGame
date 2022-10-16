#include "raylib.h"
#pragma once

class Txt
{
public:
    const char* tag;
    const char* text = "";
    int fontSize = 20;
    Vector2 pos;
    Color color = GetColor(0xFFFFFF);
    Txt(const char* _tag);
    virtual void Draw();
};