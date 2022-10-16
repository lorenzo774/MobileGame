#include "raylib.h"
#pragma once

const int width = 450;
const int height = 850;

/*
    INPUTS
*/

const Gesture tap = GESTURE_TAP;

/*
    COLORS
*/
const Color background = GetColor(*"#000000");
const Color playerColor = GetColor(*"#0000FF");
const Color rightPlatformColor = GetColor(*"#FFA500");
const Color leftPlatformColor = GetColor(*"#FFD700");
const Color foregroundHUD = GetColor(*"#FFFFFF");

/*
    PHYSICS
*/
const float gravity = 3.0;