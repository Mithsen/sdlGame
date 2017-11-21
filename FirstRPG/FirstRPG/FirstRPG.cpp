#include "stdafx.h"
int main(int argc, char *argv[]) {
	bool quit = false;

	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = NULL;
	window = SDL_CreateWindow("My first RPG",100,100,600,400,SDL_WINDOW_SHOWN);
	
	if (window == NULL) {
		std::cout << "window couldn't be created" << std::endl;
		return 0;
	}
	while (!quit) {

	}
	return 0;
}