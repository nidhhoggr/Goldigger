#include <stdio.h>
#include "SDL.h"
#include "SDL_image.h"
//#include "SDL_mixer.h"
//#include "SDL2/SDL_ttf.h"
#include "MapObject.h"
#include "player.h"
#include "GameState.h"
#include "module.h"
#include "GameSDL.h"


int main(int argc, char *argv[])
{
	GameState gameState;
	initSDL(&gameState);
	gameLoop(&gameState,4);
  	destroySDL(&gameState);

   return 0;
}
