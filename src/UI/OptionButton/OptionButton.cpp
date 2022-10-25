#include "OptionButton.h"
#include "raygui.h"
#include "../../Settings/Settings.h"

OptionButton::OptionButton() : Txt::Txt()
{
}

void OptionButton::Draw() 
{
    Rectangle rect;
    rect.width = 60;
    rect.height = 60;
    rect.x = 0;
    rect.y = 0;
    GuiSetIconScale(3);
    GuiButton(rect, GuiIconText(ICON_ARROW_LEFT_FILL, ""));
}