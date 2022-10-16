#include <iostream>
#include "raylib.h"
#include "PointsTxt.h"
#include "../../Settings/Settings.h"

PointsTxt::PointsTxt() : Txt::Txt()
{
}

void PointsTxt::Draw()
{
    pos.x = (width / 2) - (MeasureText(text.c_str(), fontSize) / 2);
    DrawText(text.c_str(), pos.x, pos.y, fontSize, foregroundHUD);
}