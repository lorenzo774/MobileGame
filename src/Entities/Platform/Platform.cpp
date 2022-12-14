#include "Platform.h"
#include "../../Settings/Settings.h"

Platform::Platform(bool _isRightPlatform) : Sprite::Sprite()
{
    isRightPlatform = _isRightPlatform;
    InitializePlatform();
}

void Platform::InitializePlatform()
{
    int fullDistance = distanceFromBorder + (platformThickness / 2) * (isRightPlatform ? 1 : -1);
    size.x = platformThickness;
    size.y = height;
    position.x = (isRightPlatform ? width - fullDistance : fullDistance);
    position.y = 0;
    // Create physics body
    Vector2 bodyPosition;
    bodyPosition.x = position.x + size.x / 2;
    bodyPosition.y = position.y;
    physicsBody = CreatePhysicsBodyRectangle(bodyPosition, size.x * 2 - platformThickness, size.y * 2, 10000);
    physicsBody->useGravity = false;
    physicsBody->enabled = false;
}

void Platform::Draw() 
{
    DrawRectangle(
        position.x,
        position.y,
        size.x,
        size.y,
        (isRightPlatform ? rightPlatformColor : leftPlatformColor)
    );
}

void Platform::Update() {
    Sprite::Update();
}
