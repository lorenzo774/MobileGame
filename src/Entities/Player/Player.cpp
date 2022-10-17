#include "raylib.h"
#include "physac.h"
#include "Player.h"
#include <iostream>
#include "../../UI/PointsTxt/PointsTxt.h"
#include "../../Input/PlayerInput.h"
#include "../../Settings/Settings.h"

Player::Player(PointsTxt* _pointsTxt) : Sprite::Sprite()
{
    pointsTxt = _pointsTxt;
    currentState = PlayerState::Moving; // Player state
    // Set position to center
    position.x = (width / 2) - size.x / 2;
    position.y = (height / 1.4) - size.y / 2;
    Vector2 bodyPosition;
    bodyPosition.x = position.x + (size.x / 2);
    bodyPosition.y = position.y + (size.y / 2);
    physicsBody = CreatePhysicsBodyRectangle(
        bodyPosition,
        size.x,
        size.y,
        20
    );
    physicsBody->enabled = true;
    physicsBody->freezeOrient = true;
}

void Player::Draw() 
{
    Rectangle rectangle;
    rectangle.x = position.x;
    rectangle.y = position.y;
    rectangle.width = size.x;
    rectangle.height = size.y;
    DrawRectangleLinesEx(
        rectangle,
        playerThickness,
        playerColor
    );
}

void Player::Update()
{
    switch (currentState)
    {
        case PlayerState::Moving:
            if(PlayerInput::IsChangingPosition())
            {
                ChangeGravity();
                isOnRight = !isOnRight;
            }
            break;
        case PlayerState::Dead:
            break;
    }
    distanceFromStart += speed * GetFrameTime();
    // Update TXT
    pointsTxt->text = std::to_string((int)distanceFromStart);
    // Update position
    Vector2 curPosition;
    curPosition.x = physicsBody->position.x - size.x / 2;
    curPosition.y = physicsBody->position.y - size.y / 2;
    position = curPosition;
}

// Change player gravity
void Player::ChangeGravity()
{
    SetPhysicsGravity(gravity * (isOnRight ? -1 : 1), 0);
}    

