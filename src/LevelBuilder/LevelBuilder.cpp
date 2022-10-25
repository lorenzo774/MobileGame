#include "LevelBuilder.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "raylib.h"

LevelBuilder::LevelBuilder(int _difficulty)
{
    std::srand(std::time(0)); // Initialize generator
    SetRandTime();
    difficulty = _difficulty;
}

void LevelBuilder::SpawnObstacle()
{
    int repeat = (std::rand() % 5) + 1;
    bool rightObstacle = rightDirection;
    Obstacle* obstacle = new Obstacle(repeat, rightObstacle);
    obstacles.push_back(obstacle);
    rightDirection = !rightDirection;
}

// Set random time for obstacle spawn
void LevelBuilder::SetRandTime()
{
    randTime = (std::rand() % 2) + 1;
}

void LevelBuilder::Run()
{
    if(timer >= randTime)
    {
        SetRandTime();
        SpawnObstacle();
        timer = 0;
    }
    // Draw and update obstacles
    for(auto obstacle : obstacles)
    {
        obstacle->Draw();
        obstacle->Update();
    }
    timer += GetFrameTime();
}

