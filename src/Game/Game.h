#include "../UI/Txt/Txt.h"
#include "../Entities/Sprite/Sprite.h"
#include "../UI/PointsTxt/PointsTxt.h"
#include "../UI/OptionButton/OptionButton.h"
#include "../Entities/Player/Player.h"
#include "../Entities/Platform/Platform.h"
#include "../Entities/Obstacle/Obstacle.h"
#include "../LevelBuilder/LevelBuilder.h"
#pragma once

/// @brief Game contains all the sprites and ui elements
class Game
{
public:
    // Entities
    Player* player;
    Platform* leftPlatform = new Platform(true);
    Platform* rightPlatform = new Platform(false);
    // UI
    PointsTxt* pointTxt = new PointsTxt();
    OptionButton* optionButton = new OptionButton();
    LevelBuilder* levelBuilder = new LevelBuilder(3);
    Game();
    void Run();

private:
    void DrawSprites();
    void DrawUIElements();
    void UpdateSprites();
};