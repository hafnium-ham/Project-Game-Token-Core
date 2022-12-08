#ifndef DRIVER_SPECIAL_H
#define DRIVER_SPECIAL_H

#include "Driver_base.h"
#include "Board.h"
#include "Game_token_base.h"
#include "Board_space.h"
#include <vector>
#include <iostream>

namespace Grid_game
{
    const char CMD_UP = 'u';
    const char CMD_RIGHT = 'r';
    const char CMD_DOWN = 'd';
    const char CMD_LEFT = 'l';

    const char CMD_SPC_UP = 'U';
    const char CMD_SPC_RIGHT = 'R';
    const char CMD_SPC_DOWN = 'D';
    const char CMD_SPC_LEFT = 'L';

    class Driver_special : public Driver_base
    {
    public:
        Driver_special(const Board &in_board, Token_base &in_token) : Driver_base(in_board, in_token)
        {
        }

        void next_move() override;


    private:
        //using Driver_base::Driver_base; // hide the constructor; need a file!
        bool wall = false;
    };
}















#endif