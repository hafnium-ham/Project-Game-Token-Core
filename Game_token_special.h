#ifndef GAME_TOKEN_SPECIAL_H
#define GAME_TOKEN_SPECIAL_H

#include "Game_token.h"

namespace Grid_game{
    class Token_special : public Token
    {
        //using Token::Token_base;

        void move_special(vector<direction>) override;
    };
}

#endif