#include "raylib.h"
#include "../Settings/Settings.h"
#include "PlayerInput.h"

bool PlayerInput::IsChangingPosition()
{
    return IsGestureDetected(tap);
}