
#include "external/miniaudio.h"

#include "raylib.h"
#define PHYSAC_IMPLEMENTATION
#include "physac.h"
#define RAYGUI_IMPLEMENTATION
#include "raygui.h"
#include "Game/Game.h"

int main(void)
{
    Game game = Game();
    game.Run();
    return 0;
}
