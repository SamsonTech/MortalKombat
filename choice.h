#ifndef CHOICE_H_INCLUDED
#define CHOICE_H_INCLUDED

#include "SDL.h"
#include "SDL_mixer.h"
#include "svsbase.h"
#include "svssprite.h"
#include "timer.h"

enum names{
    JOHNNY_CAGE=0,
    KANO=1,
    SUBZERO=2,
    SONYA=3,
    RAIDEN=4,
    LIU_KANG=5,
    SCORPION=6
};

void DrawIMG(SDL_Surface *img, SDL_Surface *screen, int x, int y);

void init(SDL_Surface *screen);

void DrawTable(SDL_Surface *back, SDL_Surface *choice, SDL_Surface *screen, names name);

names ChoiceYourFighter(SDL_Surface *screen, int sound);

#endif // CHOICE_H_INCLUDED
