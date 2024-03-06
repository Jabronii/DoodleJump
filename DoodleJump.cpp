#include <iostream>
#include "Game.h"

int main()
{
	int width = 800;
	int height = 600;
	bool fullscreen = true;
	Game* game = new Game(width, height, fullscreen);
	std::cout << "TEST";
}

