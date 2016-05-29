#include "menu.h"

void DrawIMG(SDL_Surface *img, SDL_Surface *screen, int x, int y){

 SDL_Rect dest;
 dest.x = x;
 dest.y = y;

 SDL_BlitSurface(img, NULL, screen, &dest);

}

void DrawMenu(SDL_Surface *back, SDL_Surface *choice, SDL_Surface *screen, Stat_Menu stat){
    DrawIMG (back,screen,0,0);
    if(stat == TOURNAMENT){
        DrawIMG(choice,screen,48,151);
    }
    else if(stat == OPTIONS){
        DrawIMG(choice,screen,160,151);
    }
    SDL_Flip(screen);
}

void DrawOptions(SDL_Surface *back, SDL_Surface *choice, SDL_Surface *screen){
    DrawIMG (back,screen,0,0);
    DrawIMG(choice,screen,115,90);
    SDL_Flip(screen);
}

void WatchConfiguration(SDL_Surface *screen){

    SDL_Surface *conf;

    conf=SDL_LoadBMP("data/menu/config.bmp");
    int done=0;
    while(done == 0){

        SDL_Event event;
        while ( SDL_PollEvent(&event) ){
            if ( event.type == SDL_QUIT ){ exit(1); }
            if ( event.type == SDL_KEYDOWN ){
                if ( event.key.keysym.sym == SDLK_ESCAPE ){ done=1;  }
            }
        }
        DrawIMG(conf,screen,0,0);
        SDL_Flip(screen);
    }
}

void options(SDL_Surface *screen, int *sound){

    Stat_Options status=MUSIC;
    SDL_Surface *music,*configuration, *on, *off;

    Mix_Music *UIsound = NULL;

    UIsound = Mix_LoadMUS( "data/menu/sound/ui_sound.mp3" );
    music=SDL_LoadBMP("data/menu/choice_music.bmp");
    configuration=SDL_LoadBMP("data/menu/choice_conf.bmp");
    on=SDL_LoadBMP("data/menu/music_on.bmp");
    off=SDL_LoadBMP("data/menu/music_off.bmp");

    int done=0;
    while(done == 0){

        SDL_Event event;
        while ( SDL_PollEvent(&event) ){
            if ( event.type == SDL_QUIT ){ exit(1); }
            if ( event.type == SDL_KEYDOWN ){
                if ( event.key.keysym.sym == SDLK_ESCAPE ){ done=1;  }
                if (( event.key.keysym.sym == SDLK_LEFT || event.key.keysym.sym == SDLK_RIGHT) && status==MUSIC){
                    if(*sound==1){  *sound=0;}
                    else{   *sound=1;
                            if( Mix_PlayingMusic() == 0 && *sound==1 )
                            {Mix_PlayMusic(UIsound, 0 );}
                        }
                }
                if ( event.key.keysym.sym == SDLK_DOWN || event.key.keysym.sym == SDLK_UP){
                    if( Mix_PlayingMusic() == 0 && *sound==1 )
                    {
                        Mix_PlayMusic(UIsound, 0 );
                    }
                    if(status==MUSIC){ status = CONFIGURATION;}
                    else if(status == CONFIGURATION){ status = MUSIC;}
                }
                if ( event.key.keysym.sym == SDLK_RETURN && status==CONFIGURATION){
                    WatchConfiguration(screen);
                }
            }
        }

        if(status==MUSIC){
            if(*sound == 1){DrawOptions(music,on,screen);}
            else{DrawOptions(music,off,screen);}
        }
        else if(status == CONFIGURATION){
            if(*sound == 1){DrawOptions(configuration,on,screen);}
            else{DrawOptions(configuration,off,screen);}
        }
    }

}

void menu(SDL_Surface *screen, int *sound){

    Stat_Menu status=TOURNAMENT;
    SDL_Surface *back, *choice;

    Mix_Music *UIsound = NULL, *gong=NULL;

    gong = Mix_LoadMUS( "data/menu/sound/gong.mp3" );
    UIsound = Mix_LoadMUS( "data/menu/sound/ui_sound.mp3" );
    back=SDL_LoadBMP("data/menu/menu.bmp");
    choice=SDL_LoadBMP("data/menu/choice.bmp");


    int done=0;
    while(done == 0){

        SDL_Event event;
        while ( SDL_PollEvent(&event) ){
            if ( event.type == SDL_QUIT ){ exit(1); }
            if ( event.type == SDL_KEYDOWN ){
                if ( event.key.keysym.sym == SDLK_ESCAPE ){ exit(1);  }
                if ( event.key.keysym.sym == SDLK_RETURN){
                    if(*sound==1){Mix_PlayMusic(gong, 0 );}
                    if(status == TOURNAMENT){
                        done=1;
                    }
                    else if(status == OPTIONS){
                        options(screen, sound);
                    }
                }
                if ( event.key.keysym.sym == SDLK_LEFT || event.key.keysym.sym == SDLK_RIGHT){
                    if( Mix_PlayingMusic() == 0 && *sound==1 )
                    {
                        Mix_PlayMusic(UIsound, 0 );
                    }
                    switch(status){
                        case TOURNAMENT:{
                            status=OPTIONS;
                            break;
                        }
                        case OPTIONS:{
                            status=TOURNAMENT;
                            break;
                        }
                    }
                }
            }
        }
        DrawMenu(back,choice,screen,status);
    }
    return;
}
