#include "raylib.h"
#include "PointsTxt.h"

PointsTxt::PointsTxt() : Txt::Txt("points_hud")
{
}

void PointsTxt::Draw()
{
    DrawText(text, pos.x, pos.y, fontSize, color);
}