#include "game.h"
#include "sdl_driver.h"

int main(void) {
	Game game;
	Driver driver;
	initGame(&game, &driver);
	return 0;
}