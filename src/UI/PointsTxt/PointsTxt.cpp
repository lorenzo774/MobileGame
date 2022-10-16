#include "raylib.h"
#include "PointsTxt.h"
#include <iostream>
#include "../../Settings/Settings.h"

PointsTxt::PointsTxt() : Txt::Txt("points_hud")
{
}

void PointsTxt::Draw()
{
    pos.x = (int)(width / 2) - (int)(MeasureText(text.c_str(), fontSize) / 2);
    DrawText(text.c_str(), pos.x, pos.y, fontSize, foregroundHUD);
}