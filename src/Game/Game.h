#include "../UI/Txt/Txt.h"
#include "../Entities/Sprite/Sprite.h"
#include "../UI/PointsTxt/PointsTxt.h"
#include "../UI/OptionButton/OptionButton.h"
#include "../Entities/Player/Player.h"
#include "../Entities/Platform/Platform.h"
#pragma once

/// @brief Game contains all the sprites and ui elements
class Game
{
public:
    Player* player;
    Platform* leftPlatform = new Platform(true);
    Platform* rightPlatform = new Platform(false);;
    PointsTxt* pointTxt = new PointsTxt();
    OptionButton* optionButton = new OptionButton();
    Game();
    void Run();

private:
    void DrawSprites();
    void DrawUIElements();
    void UpdateSprites();
};