#include "test_your_might.h"

fighters player;
stones stone;
bool punch=false;

void initIMG(SDL_Surface *screen, names name, int test){
    svsInit mInit;
    mInit.pause = 15;
    mInit.r = 255;
    mInit.g = 0;
    mInit.b = 255;

    if(name==JOHNNY_CAGE){
        mInit.bmpFile = "data/test_your_might/fighter/johnny_cage/punch.bmp";
        player.punch.set(60,40);
    }
    else if(name ==KANO){
        mInit.bmpFile = "data/test_your_might/fighter/kano/punch.bmp";
        player.punch.set(45,30);
    }
    else if(name ==SUBZERO){
        mInit.bmpFile = "data/test_your_might/fighter/sub-zero/punch.bmp";
        player.punch.set(45,30);
    }
    else if(name ==SONYA){
        mInit.bmpFile = "data/test_your_might/fighter/sonya/punch.bmp";
        player.punch.set(45,30);
    }
    else if(name ==RAIDEN){
        mInit.bmpFile = "data/test_your_might/fighter/raiden/punch.bmp";
        player.punch.set(50,20);
    }
    else if(name ==LIU_KANG){
        mInit.bmpFile = "data/test_your_might/fighter/liu_kang/punch.bmp";
        player.punch.set(60,35);
    }
    else if(name ==SCORPION){
        mInit.bmpFile = "data/test_your_might/fighter/scorpion/punch.bmp";
        player.punch.set(45,30);
    }

        mInit.numFrames = 6;
        player.punchbase.init(&mInit);
        player.punch.init(&player.punchbase,screen);
        player.punch.setSpeed(8);

    if(name==JOHNNY_CAGE){
        mInit.bmpFile = "data/test_your_might/fighter/johnny_cage/win.bmp";
    }
    else if(name==KANO){
        mInit.bmpFile = "data/test_your_might/fighter/kano/win.bmp";
        player.win.set(45,30);
    }
    else if(name==SUBZERO){
        mInit.bmpFile = "data/test_your_might/fighter/sub-zero/win.bmp";
        player.win.set(45,30);
    }
    else if(name==SONYA){
        mInit.bmpFile = "data/test_your_might/fighter/sonya/win.bmp";
        player.win.set(45,30);
    }
    else if(name==RAIDEN){
        mInit.bmpFile = "data/test_your_might/fighter/raiden/win.bmp";
        player.win.set(50,20);
    }
    else if(name==LIU_KANG){
        mInit.bmpFile = "data/test_your_might/fighter/liu_kang/win.bmp";
        player.win.set(60,35);
    }
    else if(name==SCORPION){
        mInit.bmpFile = "data/test_your_might/fighter/scorpion/win.bmp";
        player.win.set(45,30);
    }
        mInit.numFrames = 2;
        player.winbase.init(&mInit);
        player.win.init(&player.winbase,screen);
        player.win.setSpeed(8);



    if(test==1){
        mInit.bmpFile = "data/test_your_might/stone/wood.bmp";
        mInit.numFrames = 2;
        stone.stonebase.init(&mInit);
        stone.stone.init(&stone.stonebase,screen);
        stone.stone.set(20,165);
        stone.stone.setSpeed(7);
    }
    else if(test==2){
        mInit.bmpFile = "data/test_your_might/stone/stone.bmp";
        mInit.numFrames = 2;
        stone.stonebase.init(&mInit);
        stone.stone.init(&stone.stonebase,screen);
        stone.stone.set(50,165);
        stone.stone.setSpeed(7);
    }
    else if(test==3){
        mInit.bmpFile = "data/test_your_might/stone/steel.bmp";
        mInit.numFrames = 2;
        stone.stonebase.init(&mInit);
        stone.stone.init(&stone.stonebase,screen);
        stone.stone.set(45,155);
        stone.stone.setSpeed(7);
    }
    else if(test==4){
        mInit.bmpFile = "data/test_your_might/stone/ruby.bmp";
        mInit.numFrames = 2;
        stone.stonebase.init(&mInit);
        stone.stone.init(&stone.stonebase,screen);
        stone.stone.set(55,165);
        stone.stone.setSpeed(7);
    }
    else if(test==5){
        mInit.bmpFile = "data/test_your_might/stone/diamond.bmp";
        mInit.numFrames = 2;
        stone.stonebase.init(&mInit);
        stone.stone.init(&stone.stonebase,screen);
        stone.stone.set(55,165);
        stone.stone.setSpeed(7);
    }
}


/*void DrawIMG(SDL_Surface *img, SDL_Surface *screen, int x, int y, int w, int h, int sx, int sy){

 SDL_Rect dest;
 dest.x = x;
 dest.y = y;

 SDL_Rect src;
 src.x = sx;
 src.y = sy;
 src.w = w;
 src.h = h;

 SDL_BlitSurface(img, &src, screen, &dest);

}*/

void DrawScene(SDL_Surface *screen, SDL_Surface *back, SDL_Surface *scale,SDL_Surface *scale1,SDL_Surface *strip, int level,int test){
    DrawIMG(back,screen,0,0);
    DrawIMG(scale1,screen,12,3+(132-(level*4)),25,132,0,132-(level*4));
    DrawIMG(scale,screen,10,0);
    DrawIMG(strip,screen,14,56-test*8);




    if(punch){
        player.win.draw();
    }
    else{
        player.punch.draw();
    }
    stone.stone.draw();

    SDL_Flip(screen);
}

int testYourMight(SDL_Surface *screen, int sound, names name, int test){
    int level=0;
    bool hit=false;
    SDL_Surface *back,*scale, *scale1, *strip;

    //Keep track of the current frame
    int frame = 0;

    //Whether or not to cap the frame rate
    bool cap = true;

    //The frame rate regulator
    Timer fps;

    back=SDL_LoadBMP("data/test_your_might/back.bmp");
    scale=SDL_LoadBMP("data/test_your_might/scale.bmp");
    SDL_SetColorKey(scale,SDL_SRCCOLORKEY,SDL_MapRGB(scale->format,255,0,255));
    scale1=SDL_LoadBMP("data/test_your_might/level.bmp");
    strip=SDL_LoadBMP("data/test_your_might/strip.bmp");
    screen = SDL_SetVideoMode(400, 254, 16,
                                           SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);
    initIMG(screen, name, test);
    player.punch.stopAnim();
    stone.stone.stopAnim();

    Uint32 start = SDL_GetTicks();
    int done=0;
    while(done == 0){
        if(SDL_GetTicks()-start>=10000){hit=true;start=SDL_GetTicks();}
        SDL_Event event;
        while ( SDL_PollEvent(&event) ){
            if ( event.type == SDL_QUIT ){ exit(1); }
            if ( event.type == SDL_KEYDOWN ){
                if ( event.key.keysym.sym == SDLK_ESCAPE ){ exit(1);  }
                if (event.key.keysym.sym == SDLK_SPACE){ if(level<=31 && !hit){level+=2;start=SDL_GetTicks();}}
                if (event.key.keysym.sym == SDLK_RETURN){hit=true;}
                if (event.key.keysym.sym == SDLK_d){player.punch.toggleAnim();}
            }
        }
        DrawScene(screen,back,scale,scale1,strip,level,test);
        frame++;
        if(!hit && frame % 5 ==0){ if (level>0) level --;}
        //If we want to cap the frame rate
        if( ( cap == true ) && ( fps.get_ticks() < 1000 / FRAMES_PER_SECOND ) )
        {
            //Sleep the remaining frame time
            SDL_Delay( ( 1000 / FRAMES_PER_SECOND ) - fps.get_ticks() );
        }

        if(hit){
            player.punch.startAnim();
            if(player.punch.getFrame()== (player.punchbase.svsNumFrames) - 1){
                player.punch.stopAnim();
                if(level>=20+test*2){
                    punch=true;
                    player.win.startAnim();
                    stone.stone.toggleAnim();
                }
                if( SDL_GetTicks()- start >=4000){
                    punch=false;
                    stone.stone.rewind();
                    player.punch.rewind();
                    if(level>=20+test*2){
                        return 1;
                    }
                    else{return 0;}
                }
            }
            if(stone.stone.getFrame()==1){
                stone.stone.stopAnim();
            }

        }
    }
}
