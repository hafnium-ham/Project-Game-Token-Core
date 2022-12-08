#include "Driver_special.h"


namespace Grid_game
{
void Driver_special::next_move()
{
    int x = token.x_pos();
    int y = token.y_pos();
    int hp = token.hit_points();
    int pp = token.power_points();
    Space::terrain_type future;
    if (x==1){
        wall = true;
    }
    if ((board.retrieve_space(x, y + 1).type() == Space::terrain_type::lava) && !wall && hp > 1 && !(board.retrieve_space(x - 1, y).type() == Space::terrain_type::lava)){
        cout << "going: " << 'l' << endl;
        token.step_normal(direction::left);
    }
    else if((board.retrieve_space(x, y + 1).type() == Space::terrain_type::lava) && hp > 1 && !(board.retrieve_space(x + 1, y).type() == Space::terrain_type::lava)){
        cout << "going: " << 'r' << endl;
        token.step_normal(direction::right);
    }
    else if(hp == 1 && board.retrieve_space(x, y - 1).type() == Space::terrain_type::empty && board.retrieve_space(x, y - 2).type() == Space::terrain_type::empty && pp > 0){
        vector<direction> dirs;
        dirs.push_back(direction::up);
        token.step_special(dirs);
    }
    else{
        cout << "going: " << 'd' << endl;
        token.step_normal(direction::down);
        wall = false;
    }
}

}