CC = g++
CXX = g++
CXXFLAGS = -std=c++11
# LDFLAGS = -lfltk -lfltk_images -lX11 -lpthread # Autograder doesn't have FLTK!
VPATH = GUI

game_loop: Driver_scripted.o Complex_circle.o Window_game.o  Game_state.o Game_token_special.o Game_token.o Board.o Board_space.o Graph.o GUI.o Window.o # don't forget any new dependencies you've added in both the depedency list and the command below!
	g++ -std=c++11  -lfltk -lfltk_images -lX11 -lpthread  game_loop.cpp Driver_scripted.o Complex_circle.o Window_game.o  Game_state.o Game_token_special.o Game_token.o Board.o Board_space.o Graph.o GUI.o Window.o   -o game_loop 

game_loop_headless: Driver_scripted.o  Game_state.o Game_token_special.o Game_token.o Board.o Board_space.o

clean:
	rm -f *.o
	rm -f game_loop
	rm -f game_loop_headless