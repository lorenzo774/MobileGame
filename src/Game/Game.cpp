#include "Game.h"
#include "raylib.h"
#include "physac.h"
#include "../Entities/Player/Player.h"
#include "../Settings/Settings.h"
#include "raygui.h"
#include "../Style/dark.h" // Style

/// @brief Game initialization
Game::Game()
{
    player = new Player(pointTxt);
}

/// @brief Game loop
void Game::Run()
{
    GuiLoadStyleDark(); // Set style
    InitPhysics();
    SetPhysicsGravity(-gravity, 0);
    InitWindow(width, height, "test");
    while (!WindowShouldClose())
    {
        BeginDrawing();
            DrawSprites();
            DrawUIElements();
            ClearBackground(background);
        EndDrawing();
        UpdateSprites();
    }
    ClosePhysics();
    CloseWindow();
}


void Game::UpdateSprites()
{
    player->Update();
    rightPlatform->Update();
    leftPlatform->Update();
}

void Game::DrawSprites()
{
    player->Draw();
    rightPlatform->Draw();
    leftPlatform->Draw();
}

void Game::DrawUIElements()
{
    optionButton->Draw();
    pointTxt->Draw();
}