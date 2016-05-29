#ifndef FIGHT_H_INCLUDED
#define FIGHT_H_INCLUDED

#include "SDL.h"
#include "choice.h"
#include <time.h>

enum sides{
    LEFT,
    RIGHT
};

enum states{
    FightingStance,
    WalkingRight,
    WalkingLeft,
    Jump,
    JumpRight,
    JumpLeft,
    Duck,
    Block,
    BlockDuck,
    HighPunch,
    LowPunch,
    HighKick,
    LowKick,
    Uppercut,
    DuckKick,
    JumpPunch,JumpRightPunch,JumpLeftPunch,
    JumpKick,JumpRightKick,JumpLeftKick,
    HitHead,
    HitChest,
    HitStrong,
    HitDuck,
    HitUppercut,
    Fail,
    Win
};

struct actives{
    bool HighPunch;
    bool LowPunch;
    bool HighKick;
    bool LowKick;
    bool Uppercut;
    bool DuckKick;
    bool Jump;
};

struct AnimPlayer{
    svsBase RStancebase;
    svsSprite RStance;
    svsBase RWalkingRightbase;
    svsSprite RWalkingRight;
    svsBase RWalkingLeftbase;
    svsSprite RWalkingLeft;
    svsBase RJumpbase;
    svsSprite RJump;
    svsBase RJumpRightbase;
    svsSprite RJumpRight;
    svsBase RJumpLeftbase;
    svsSprite RJumpLeft;
    svsBase RDuckbase;
    svsSprite RDuck;
    svsBase RBlockbase;
    svsSprite RBlock;
    svsBase RBlockDuckbase;
    svsSprite RBlockDuck;
    svsBase RHighPunchbase;
    svsSprite RHighPunch;
    svsBase RLowPunchbase;
    svsSprite RLowPunch;
    svsBase RHighKickbase;
    svsSprite RHighKick;
    svsBase RLowKickbase;
    svsSprite RLowKick;
    svsBase RUppercutbase;
    svsSprite RUppercut;
    svsBase RDuckKickbase;
    svsSprite RDuckKick;
    svsBase RJumpPunchbase;
    svsSprite RJumpPunch;
    svsBase RJumpKickbase;
    svsSprite RJumpKick;
    svsBase RHitHeadbase;
    svsSprite RHitHead;
    svsBase RHitChestbase;
    svsSprite RHitChest;
    svsBase RHitStrongbase;
    svsSprite RHitStrong;
    svsBase RHitDuckbase;
    svsSprite RHitDuck;
    svsBase RHitUppercutbase;
    svsSprite RHitUppercut;
    svsBase RWinbase;
    svsSprite RWin;
    svsBase RFailbase;
    svsSprite RFail;

    svsBase LStancebase;
    svsSprite LStance;
    svsBase LWalkingRightbase;
    svsSprite LWalkingRight;
    svsBase LWalkingLeftbase;
    svsSprite LWalkingLeft;
    svsBase LJumpbase;
    svsSprite LJump;
    svsBase LJumpRightbase;
    svsSprite LJumpRight;
    svsBase LJumpLeftbase;
    svsSprite LJumpLeft;
    svsBase LDuckbase;
    svsSprite LDuck;
    svsBase LBlockbase;
    svsSprite LBlock;
    svsBase LBlockDuckbase;
    svsSprite LBlockDuck;
    svsBase LHighPunchbase;
    svsSprite LHighPunch;
    svsBase LLowPunchbase;
    svsSprite LLowPunch;
    svsBase LHighKickbase;
    svsSprite LHighKick;
    svsBase LLowKickbase;
    svsSprite LLowKick;
    svsBase LUppercutbase;
    svsSprite LUppercut;
    svsBase LDuckKickbase;
    svsSprite LDuckKick;
    svsBase LJumpPunchbase;
    svsSprite LJumpPunch;
    svsBase LJumpKickbase;
    svsSprite LJumpKick;
    svsBase LHitHeadbase;
    svsSprite LHitHead;
    svsBase LHitChestbase;
    svsSprite LHitChest;
    svsBase LHitStrongbase;
    svsSprite LHitStrong;
    svsBase LHitDuckbase;
    svsSprite LHitDuck;
    svsBase LHitUppercutbase;
    svsSprite LHitUppercut;
    svsBase LWinbase;
    svsSprite LWin;
    svsBase LFailbase;
    svsSprite LFail;
};

struct player{
    names name;
    int hp;
    int x;
    int y;
    sides side;
    states state;
    actives active;
    bool action;
    AnimPlayer Anim;
};


int fight(SDL_Surface *screen, int sound, names name, int level);

#endif // FIGHT_H_INCLUDED
