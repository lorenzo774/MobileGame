#include "raylib.h"
#include <iostream>
#pragma once

class Txt
{
public:
    const char* tag;
    std::string text = "0";
    int fontSize = 110;
    Vector2 pos;
    Color color = GetColor(0xFFFFFF);
    Txt(const char* _tag);
    virtual void Draw();
};