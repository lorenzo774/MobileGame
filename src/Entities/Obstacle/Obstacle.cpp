#include "raylib.h"
#include "Obstacle.h"
#include "../../Settings/Settings.h"

// Initalize general obstacle attributes
Obstacle::Obstacle(int _repeat, bool _rightObstacle) : Sprite::Sprite()
{
    position.y = -(size.y * _repeat); 
    if(_rightObstacle)
    {
        position.x = width - distanceFromBorder - size.x + 7;
    }
    repeat = _repeat;
    rightObstacle = _rightObstacle;
}

/// @brief Draw n spikes
void Obstacle::DrawSpikes()
{
    for (int i = 0; i < repeat; i++)
    {
        // Calculate the vertices
        int yOffset = (i * size.y) + (size.y / 2);
        Vector2 polyPosition;
        polyPosition.x = position.x + (size.x / 2);
        polyPosition.y = position.y + yOffset;
        int rotation = 90;
        if(!rightObstacle)
        {
            rotation = -90;
        }
        DrawPolyLinesEx(polyPosition, 3, 40, rotation, 14, spikeColor);
        // DrawTriangle(v1, v2, v3, obstacleColor);
    }
}

void Obstacle::Draw()
{
    DrawSpikes();
}

void Obstacle::Update()
{
    position.y += obstacleSpeed * GetFrameTime();
}