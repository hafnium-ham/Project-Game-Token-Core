#ifndef GAME_TOKEN_H
#define GAME_TOKEN_H 1

#include "Game_token_base.h"

namespace Grid_game
{
    class Token : public Token_base
    {
    public:
    
        Token(int start_hp, int start_pp, const Board &the_board) 
        : Token_base(start_hp, start_pp, the_board)
        {
        }

        protected:
        void move(direction) override;
    
        virtual void move_special(vector<direction>) override;

        virtual void apply_terrain_effect(const Space::terrain_type) override;
    };
}

#endif