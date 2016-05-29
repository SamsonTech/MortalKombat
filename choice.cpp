#include "choice.h"

svsBase fighterbase[7];
svsSprite fighter[7];


void DrawTable(SDL_Surface *back, SDL_Surface *choice, SDL_Surface *screen, names name){
    DrawIMG (back,screen,0,0);
    if(name == JOHNNY_CAGE){
        DrawIMG(choice,screen,30,47);
    }
    else if(name == KANO){
        DrawIMG(choice,screen,70,47);
    }
    else if(name == SUBZERO){
        DrawIMG(choice,screen,150,47);
    }
    else if(name == SONYA){
        DrawIMG(choice,screen,190,47);
    }
    else if(name == RAIDEN){
        DrawIMG(choice,screen,70,110);
    }
    else if(name == LIU_KANG){
        DrawIMG(choice,screen,110,110);
    }
    else if(name == SCORPION){
        DrawIMG(choice,screen,150,110);
    }

    fighter[name].clearBG();
    fighter[name].updateBG();
    fighter[name].draw();
    SDL_Flip(screen);

}

void init(SDL_Surface *screen){
    svsInit mInit;
    mInit.bmpFile = "data/choice/cage.bmp";
    mInit.numFrames = 7;
    mInit.pause = 9;
    mInit.r = 255;
    mInit.g = 0;
    mInit.b = 255;
    fighterbase[JOHNNY_CAGE].init(&mInit);
    fighter[JOHNNY_CAGE].init(&fighterbase[JOHNNY_CAGE],screen);
    fighter[JOHNNY_CAGE].set(20,120);
    fighter[JOHNNY_CAGE].setSpeed(5);

    mInit.bmpFile = "data/choice/kano.bmp";
    mInit.numFrames = 7;
    fighterbase[KANO].init(&mInit);
    fighter[KANO].init(&fighterbase[KANO],screen);
    fighter[KANO].set(20,120);
    fighter[KANO].setSpeed(7);

    mInit.bmpFile = "data/choice/subzero.bmp";
    mInit.numFrames = 12;
    fighterbase[SUBZERO].init(&mInit);
    fighter[SUBZERO].init(&fighterbase[SUBZERO],screen);
    fighter[SUBZERO].set(20,120);
    fighter[SUBZERO].setSpeed(5);

    mInit.bmpFile = "data/choice/sonya.bmp";
    mInit.numFrames = 7;
    fighterbase[SONYA].init(&mInit);
    fighter[SONYA].init(&fighterbase[SONYA],screen);
    fighter[SONYA].set(20,120);
    fighter[SONYA].setSpeed(5);

    mInit.bmpFile = "data/choice/raiden.bmp";
    mInit.numFrames = 10;
    fighterbase[RAIDEN].init(&mInit);
    fighter[RAIDEN].init(&fighterbase[RAIDEN],screen);
    fighter[RAIDEN].set(20,120);
    fighter[RAIDEN].setSpeed(4);

    mInit.bmpFile = "data/choice/liukang.bmp";
    mInit.numFrames = 8;
    fighterbase[LIU_KANG].init(&mInit);
    fighter[LIU_KANG].init(&fighterbase[LIU_KANG],screen);
    fighter[LIU_KANG].set(20,120);
    fighter[LIU_KANG].setSpeed(6);

    mInit.bmpFile = "data/choice/scorpion.bmp";
    mInit.numFrames = 7;
    fighterbase[SCORPION].init(&mInit);
    fighter[SCORPION].init(&fighterbase[SCORPION],screen);
    fighter[SCORPION].set(20,120);
    fighter[SCORPION].setSpeed(8);
}

names ChoiceYourFighter(SDL_Surface *screen, int sound){

    //Keep track of the current frame
    int frame = 0;

    //Whether or not to cap the frame rate
    bool cap = true;

    //The frame rate regulator
    Timer fps;

    int count=0;
    names current=JOHNNY_CAGE;
    SDL_Surface *table,*frame1,*frame2;
    Mix_Music *sounds = NULL;

    init(screen);

    table=SDL_LoadBMP("data/choice/table.bmp");
    frame1=SDL_LoadBMP("data/choice/frame1.bmp");
    frame2=SDL_LoadBMP("data/choice/frame2.bmp");
    sounds= Mix_LoadMUS( "data/choice/sound/Song.mp3" );

    screen = SDL_SetVideoMode(256, 224, 16,
                                           SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);

    SDL_SetColorKey(frame1, SDL_SRCCOLORKEY | SDL_RLEACCEL, SDL_MapRGB(frame1->format, 255, 255, 255));
    SDL_SetColorKey(frame2, SDL_SRCCOLORKEY | SDL_RLEACCEL, SDL_MapRGB(frame2->format, 255, 255, 255));

    if(sound==1 )
    {
        Mix_PlayMusic(sounds, 0 );
    }

    int done = 0;
    while(done == 0){
        fps.start();
        count++;
        SDL_Event event;
        while ( SDL_PollEvent(&event) ){
            if ( event.type == SDL_QUIT ){ exit(1); }
            if ( event.type == SDL_KEYDOWN ){
                if ( event.key.keysym.sym == SDLK_ESCAPE ){ exit(1);  }
                if ( event.key.keysym.sym == SDLK_RETURN){
                        return current;
                }
                if ( event.key.keysym.sym == SDLK_UP){
                        if(current == RAIDEN){current = KANO;}
                        else if(current == SCORPION){current = SUBZERO;}
                }
                if ( event.key.keysym.sym == SDLK_RIGHT){
                        if(current == JOHNNY_CAGE){current = KANO;}
                        else if(current == RAIDEN){current = LIU_KANG;}
                        else if(current == LIU_KANG){current = SCORPION;}
                        else if(current == SUBZERO){current = SONYA;}
                        else if(current == KANO){current = SUBZERO;}
                }
                if ( event.key.keysym.sym == SDLK_DOWN){
                        if(current == KANO){current = RAIDEN;}
                        else if(current == SUBZERO){current = SCORPION;}
                }
                if ( event.key.keysym.sym == SDLK_LEFT){
                        if(current == KANO){current = JOHNNY_CAGE;}
                        else if(current == LIU_KANG){current = RAIDEN;}
                        else if(current == SCORPION){current = LIU_KANG;}
                        else if(current == SONYA){current = SUBZERO;}
                        else if(current == SUBZERO){current = KANO;}
                }
            }
        }
        if(count%2==0){
            DrawTable(table,frame1,screen,current);
        }
        else{
            DrawTable(table,frame2,screen,current);
        }
        frame++;

        //If we want to cap the frame rate
        if( ( cap == true ) && ( fps.get_ticks() < 1000 / FRAMES_PER_SECOND ) )
        {
            //Sleep the remaining frame time
            SDL_Delay( ( 1000 / FRAMES_PER_SECOND ) - fps.get_ticks() );
        }
    }
};
