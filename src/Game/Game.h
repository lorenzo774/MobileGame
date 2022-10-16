#include "../UI/Txt/Txt.h"
#include "../Entities/Sprite/Sprite.h"
#include "../UI/PointsTxt/PointsTxt.h"
#include "../Entities/Player/Player.h"
#include "../Entities/Platform/Platform.h"
#pragma once

/// @brief Game contains all the sprites and ui elements
class Game
{
public:
    Player* player;
    Platform* leftPlatform = new Platform("right_platform", true);
    Platform* rightPlatform = new Platform("left_platform", false);;
    PointsTxt* pointTxt = new PointsTxt();
    Game();
    void Run();

private:
    void DrawSprites();
    void DrawUIElements();
    void UpdateSprites();
};