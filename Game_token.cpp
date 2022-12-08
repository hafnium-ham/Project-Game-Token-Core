#include "Game_token.h"
namespace Grid_game
{

    void Token::move(direction mv){
        cout << "Game_token_base::step_normal::move" << endl;
        switch(mv){
        case down:
            if(board.height() - 1 > y && (Space::terrain_type::barrier != board.retrieve_space(x, y + 1).type())){
                y++;
            }
            break;
        case right:
            if(board.width() - 1 > x && (Space::terrain_type::barrier != board.retrieve_space(x + 1, y).type())){
                x++;
            }
            break;
        case left:
            if(0 < x && (Space::terrain_type::barrier != board.retrieve_space(x - 1, y).type())){
                x--;
            }
            break;
        case up:
            if(0 < y && (Space::terrain_type::barrier != board.retrieve_space(x, y - 1).type())){
                y--;
            }
            break;
        }
       
    };

    void Token::move_special(vector<direction> mvs){
        move(mvs[0]);
    };

    void Token::apply_terrain_effect(const Space::terrain_type t){
        
        if(t == Space::terrain_type::water){
            hp--;
            pp--;
        }
        else if (t == Space::terrain_type::lava){
            hp = 0;
            pp = 0;
        }
        else{
            //do nothing
        }
    };
}