#include <list>
#include "../Entities/Obstacle/Obstacle.h"
#pragma once

class LevelBuilder
{
private:
    int randTime;
    float timer = 0;
    int difficulty;
    std::list<Obstacle*> obstacles;
    void SetRandTime();
public:
    LevelBuilder(int _difficulty);
    void Run();
    void SpawnObstacle();
};