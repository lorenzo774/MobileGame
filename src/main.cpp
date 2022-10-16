#include "raylib.h"
#define PHYSAC_IMPLEMENTATION
#include "physac.h"
#include "Game/Game.h"

int main(void)
{
    Game game = Game();
    game.Run();
    return 0;
}
