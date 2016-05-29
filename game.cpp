#include "game.h"

void gameloop(SDL_Surface *screen){
    int count=0,sound=0,test=0;
    names fighter;
    menu(screen,&sound);
    while(true){
        fighter=ChoiceYourFighter(screen,sound);
        while(true){
            count++;
//          tournamentTable();
            if(fight(screen,sound,fighter,count) == 0){count=0; break;}
            if(count>=2){
                test++;
                if(testYourMight(screen,sound,fighter,test) == 0){count--; break;};
            }
        }
    }
    return ;
}
