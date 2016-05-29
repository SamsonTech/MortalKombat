#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include "game.h"
#include <SDL_mixer.h>
#include <SDL.h>


int main ( int argc, char** argv )
{
    // initialize SDL video
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0 )
    {
        printf( "Unable to init SDL: %s\n", SDL_GetError() );
        return 1;
    }
    if( Mix_OpenAudio( 22050, MIX_DEFAULT_FORMAT, 2, 4096 ) == -1 )
    {
        exit(1);
    }
    freopen( "CON", "w", stdout );
    freopen( "CON", "w", stderr );

    // make sure SDL cleans up before exit
    atexit(SDL_Quit);
    // create a new window
    SDL_Surface* screen = SDL_SetVideoMode(256, 224, 16,
                                           SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);
    if ( !screen )
    {
        printf("Unable to set 640x480 video: %s\n", SDL_GetError());
        return 1;
    }
    SDL_ShowCursor(0);
    gameloop(screen);
    return 0;
}
