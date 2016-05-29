#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

#include "SDL.h"
#include "SDL_mixer.h"
#include <stdlib.h>

enum Stat_Menu {
    TOURNAMENT,
    OPTIONS
};

enum Stat_Options{
    MUSIC,
    CONFIGURATION
};


void DrawIMG(SDL_Surface *img, SDL_Surface *screen, int x, int y);

void DrawMenu(SDL_Surface *back, SDL_Surface *choice, SDL_Surface *screen, Stat_Menu stat);

void DrawOptions(SDL_Surface *back, SDL_Surface *choice, SDL_Surface *screen, Stat_Options stat);

void WatchConfiguration(SDL_Surface *screen);

void options(SDL_Surface *screen, int *sound);

void menu(SDL_Surface *screen, int *sound);


#endif // MENU_H_INCLUDED
