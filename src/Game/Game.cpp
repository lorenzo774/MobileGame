#include "Game.h"
#include "raylib.h"
#include "physac.h"
#include "../Settings/Settings.h"

/// @brief Game initialization
Game::Game()
{
}

/// @brief Game loop
void Game::Run()
{
    InitPhysics();
    SetPhysicsGravity(-gravity, 0);
    InitWindow(width, height, "test");
    while (!WindowShouldClose())
    {
        BeginDrawing();
            DrawFPS(10, 10);
            DrawUIElements();
            DrawSprites();
        ClearBackground(background);
        EndDrawing();
        UpdateSprites();
    }
    ClosePhysics();
    CloseWindow();
}


void Game::UpdateSprites()
{
    player.Update();
    rightPlatform.Update();
    leftPlatform.Update();
}

void Game::DrawSprites()
{
    player.Draw();
    rightPlatform.Draw();
    leftPlatform.Draw();
}

void Game::DrawUIElements()
{
    pointTxt.Draw();
}