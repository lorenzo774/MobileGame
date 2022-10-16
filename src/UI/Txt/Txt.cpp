#include "raylib.h"
#include "Txt.h"

/// @brief UI element
Txt::Txt()
{
    pos.x = 0;
    pos.y = 30;
}

void Txt::Draw()
{
    DrawText(text.c_str(), pos.x, pos.y, fontSize, color);
}