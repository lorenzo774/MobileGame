#include "raylib.h"
#include "Txt.h"

/// @brief UI element
Txt::Txt(const char* _tag)
{
    pos.x = 0;
    pos.y = 30;
    tag = _tag;
}

void Txt::Draw()
{
    DrawText(text.c_str(), pos.x, pos.y, fontSize, color);
}