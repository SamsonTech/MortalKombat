#ifndef TEST_YOUR_MIGHT_H_INCLUDED
#define TEST_YOUR_MIGHT_H_INCLUDED

#include "SDL.h"
#include "choice.h"

struct fighters{
    svsBase punchbase;
    svsSprite punch;
    svsBase winbase;
    svsSprite win;
};

struct stones{
    svsBase stonebase;
    svsSprite stone;
};

void initIMG(SDL_Surface *screen);

void DrawIMG(SDL_Surface *img, SDL_Surface *screen, int x, int y, int w, int h, int sx, int sy);

void DrawScene(SDL_Surface *screen, SDL_Surface *back, SDL_Surface *scale,SDL_Surface *scale1,SDL_Surface *strip, int level,int test);

int testYourMight(SDL_Surface *screen, int sound, names fighter, int level);

#endif // TEST_YOUR_MIGHT_H_INCLUDED
