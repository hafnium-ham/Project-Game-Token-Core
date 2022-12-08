#include "Game_token_special.h"

namespace Grid_game
{
    void Token_special::move_special(vector<direction> mvs)
    {
        move(up);
        move(up);
        hp++;
    };
}