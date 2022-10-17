#include "raylib.h"
#pragma once

const int width = 400;
const int height = 900;

/*
    INPUTS
*/

const Gesture tap = GESTURE_TAP;

/*
    COLORS
*/
const Color background = BLACK;
const Color playerColor = BLUE;
const Color spikeColor = RED;
const Color rightPlatformColor = ORANGE;
const Color leftPlatformColor = YELLOW;
const Color foregroundHUD = WHITE;

/*
    PHYSICS
*/
const float gravity = 3.0;

/*
    GAME
 */
const int distanceFromBorder = 10;