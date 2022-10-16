#include "Platform.h"
#include "../../Settings/Settings.h"

Platform::Platform(const char* tag, bool _isRightPlatform) : Sprite::Sprite(tag)
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
    physicsBody = CreatePhysicsBodyRectangle(position, size.x * 2 - platformThickness, size.y * 2, 10000);
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
