
#include "raylib.h"
#include "Game.h"
#include "physac.h"
#include "../Entities/Player/Player.h"
#include "../Settings/Settings.h"
#include "raygui.h"
#include "../UI/Style/dark.h" // Style

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
    InitAudioDevice();
    InitWindow(width, height, "test");
    Music music = LoadMusicStream("test.mp3");
    PlayMusicStream(music);
    while (!WindowShouldClose())
    {
        BeginDrawing();
            DrawSprites();
            levelBuilder->Run();
            DrawUIElements();
            ClearBackground(background);
        EndDrawing();
        UpdateSprites();
        UpdateMusicStream(music);
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