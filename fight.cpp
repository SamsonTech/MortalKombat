#include "fight.h"

player playerPC,playerBOT;

void initIMG(SDL_Surface *screen){
    svsInit mInit;
    mInit.pause = 15;
    mInit.r = 255;
    mInit.g = 0;
    mInit.b = 255;

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/WalkingRight.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/WalkingRight.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/WalkingRight.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/WalkingRight.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/WalkingRight.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/WalkingRight.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/WalkingRight.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.RWalkingRightbase.init(&mInit);
        playerPC.Anim.RWalkingRight.init(&playerPC.Anim.RWalkingRightbase,screen);
        playerPC.Anim.RWalkingRight.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/WalkingRight.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/WalkingRight.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/WalkingRight.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/WalkingRight.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/WalkingRight.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/WalkingRight.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/WalkingRight.bmp";
    }
        mInit.numFrames = 9;
        playerPC.Anim.RWalkingRightbase.init(&mInit);
        playerPC.Anim.RWalkingRight.init(&playerPC.Anim.RWalkingRightbase,screen);
        playerPC.Anim.RWalkingRight.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/WalkingLeft.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/WalkingLeft.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/WalkingLeft.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/WalkingLeft.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/WalkingLeft.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/WalkingLeft.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/WalkingLeft.bmp";
    }
        mInit.numFrames = 9;
        playerPC.Anim.RWalkingLeftbase.init(&mInit);
        playerPC.Anim.RWalkingLeft.init(&playerPC.Anim.RWalkingLeftbase,screen);
        playerPC.Anim.RWalkingLeft.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Jump.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Jump.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Jump.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Jump.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Jump.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Jump.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Jump.bmp";
    }
        mInit.numFrames = 1;
        playerPC.Anim.RJumpbase.init(&mInit);
        playerPC.Anim.RJump.init(&playerPC.Anim.RJumpbase,screen);
        playerPC.Anim.RJump.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/JumpRight.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/JumpRight.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/JumpRight.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/JumpRight.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/JumpRight.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/JumpRight.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/JumpRight.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.RJumpRightbase.init(&mInit);
        playerPC.Anim.RJumpRight.init(&playerPC.Anim.RJumpRightbase,screen);
        playerPC.Anim.RJumpRight.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/JumpLeft.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/JumpLeft.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/JumpLeft.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/JumpLeft.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/JumpLeft.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/JumpLeft.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/JumpLeft.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.RJumpLeftbase.init(&mInit);
        playerPC.Anim.RJumpLeft.init(&playerPC.Anim.RJumpLeftbase,screen);
        playerPC.Anim.RJumpLeft.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Duck.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Duck.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Duck.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Duck.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Duck.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Duck.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Duck.bmp";
    }
        mInit.numFrames = 3;
        playerPC.Anim.RDuckbase.init(&mInit);
        playerPC.Anim.RDuck.init(&playerPC.Anim.RDuckbase,screen);
        playerPC.Anim.RDuck.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Block.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Block.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Block.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Block.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Block.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Block.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Block.bmp";
    }
        mInit.numFrames = 3;
        playerPC.Anim.RBlockbase.init(&mInit);
        playerPC.Anim.RBlock.init(&playerPC.Anim.RBlockbase,screen);
        playerPC.Anim.RBlock.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/BlockDuck.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/BlockDuck.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/BlockDuck.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/BlockDuck.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/BlockDuck.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/BlockDuck.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/BlockDuck.bmp";
    }
        mInit.numFrames = 2;
        playerPC.Anim.RBlockDuckbase.init(&mInit);
        playerPC.Anim.RBlockDuck.init(&playerPC.Anim.RBlockDuckbase,screen);
        playerPC.Anim.RBlockDuck.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HighPunch.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HighPunch.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HighPunch.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HighPunch.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HighPunch.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HighPunch.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HighPunch.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.RHighPunchbase.init(&mInit);
        playerPC.Anim.RHighPunch.init(&playerPC.Anim.RHighPunchbase,screen);
        playerPC.Anim.RHighPunch.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/LowPunch.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/LowPunch.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/LowPunch.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/LowPunch.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/LowPunch.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/LowPunch.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/LowPunch.bmp";
    }
        mInit.numFrames = 5;
        playerPC.Anim.RLowPunchbase.init(&mInit);
        playerPC.Anim.RLowPunch.init(&playerPC.Anim.RLowPunchbase,screen);
        playerPC.Anim.RLowPunch.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HighKick.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HighKick.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HighKick.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HighKick.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HighKick.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HighKick.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HighKick.bmp";
    }
        mInit.numFrames = 9;
        playerPC.Anim.RHighKickbase.init(&mInit);
        playerPC.Anim.RHighKick.init(&playerPC.Anim.RHighKickbase,screen);
        playerPC.Anim.RHighKick.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/LowKick.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/LowKick.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/LowKick.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/LowKick.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/LowKick.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/LowKick.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/LowKick.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.RLowKickbase.init(&mInit);
        playerPC.Anim.RLowKick.init(&playerPC.Anim.RLowKickbase,screen);
        playerPC.Anim.RLowKick.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Uppercut.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Uppercut.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Uppercut.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Uppercut.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Uppercut.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Uppercut.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Uppercut.bmp";
    }
        mInit.numFrames = 5;
        playerPC.Anim.RUppercutbase.init(&mInit);
        playerPC.Anim.RUppercut.init(&playerPC.Anim.RUppercutbase,screen);
        playerPC.Anim.RUppercut.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/DuckKick.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/DuckKick.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/DuckKick.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/DuckKick.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/DuckKick.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/DuckKick.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/DuckKick.bmp";
    }
        mInit.numFrames = 5;
        playerPC.Anim.RDuckKickbase.init(&mInit);
        playerPC.Anim.RDuckKick.init(&playerPC.Anim.RDuckKickbase,screen);
        playerPC.Anim.RDuckKick.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/JumpPunch.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/JumpPunch.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/JumpPunch.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/JumpPunch.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/JumpPunch.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/JumpPunch.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/JumpPunch.bmp";
    }
        mInit.numFrames = 1;
        playerPC.Anim.RJumpPunchbase.init(&mInit);
        playerPC.Anim.RJumpPunch.init(&playerPC.Anim.RJumpPunchbase,screen);
        playerPC.Anim.RJumpPunch.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/JumpKick.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/JumpKick.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/JumpKick.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/JumpKick.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/JumpKick.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/JumpKick.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/JumpKick.bmp";
    }
        mInit.numFrames = 1;
        playerPC.Anim.RJumpKickbase.init(&mInit);
        playerPC.Anim.RJumpKick.init(&playerPC.Anim.RJumpKickbase,screen);
        playerPC.Anim.RJumpKick.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitHead.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitHead.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitHead.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitHead.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitHead.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitHead.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitHead.bmp";
    }
        playerPC.Anim.RHitHead.set(70,155);
        mInit.numFrames = 4;
        playerPC.Anim.RHitHeadbase.init(&mInit);
        playerPC.Anim.RHitHead.init(&playerPC.Anim.RHitHeadbase,screen);
        playerPC.Anim.RHitHead.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitChest.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitChest.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitChest.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitChest.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitChest.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitChest.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitChest.bmp";
    }
        playerPC.Anim.RHitChest.set(70,155);
        mInit.numFrames = 4;
        playerPC.Anim.RHitChestbase.init(&mInit);
        playerPC.Anim.RHitChest.init(&playerPC.Anim.RHitChestbase,screen);
        playerPC.Anim.RHitChest.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitStrong.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitStrong.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitStrong.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitStrong.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitStrong.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitStrong.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitStrong.bmp";
    }
        playerPC.Anim.RHitStrong.set(70,155);
        mInit.numFrames = 8;
        playerPC.Anim.RHitStrongbase.init(&mInit);
        playerPC.Anim.RHitStrong.init(&playerPC.Anim.RHitStrongbase,screen);
        playerPC.Anim.RHitStrong.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitDuck.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitDuck.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitDuck.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitDuck.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitDuck.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitDuck.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitDuck.bmp";
    }
        playerPC.Anim.RHitDuck.set(70,155);
        mInit.numFrames = 3;
        playerPC.Anim.RHitDuckbase.init(&mInit);
        playerPC.Anim.RHitDuck.init(&playerPC.Anim.RHitDuckbase,screen);
        playerPC.Anim.RHitDuck.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitUppercut.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitUppercut.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitUppercut.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitUppercut.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitUppercut.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitUppercut.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitUppercut.bmp";
    }
        playerPC.Anim.RHitUppercut.set(70,155);
        mInit.numFrames = 1;
        playerPC.Anim.RHitUppercutbase.init(&mInit);
        playerPC.Anim.RHitUppercut.init(&playerPC.Anim.RHitUppercutbase,screen);
        playerPC.Anim.RHitUppercut.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Win.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Win.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Win.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Win.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Win.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Win.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Win.bmp";
    }
        playerPC.Anim.RWin.set(70,155);
        mInit.numFrames = 10;
        playerPC.Anim.RWinbase.init(&mInit);
        playerPC.Anim.RWin.init(&playerPC.Anim.RWinbase,screen);
        playerPC.Anim.RWin.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Fail.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Fail.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Fail.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Fail.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Fail.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Fail.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Fail.bmp";
    }
        playerPC.Anim.RFail.set(70,155);
        mInit.numFrames = 6;
        playerPC.Anim.RFailbase.init(&mInit);
        playerPC.Anim.RFail.init(&playerPC.Anim.RFailbase,screen);
        playerPC.Anim.RFail.setSpeed(5);
////////////////////////////////LEFT
        if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/WalkingRight.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/WalkingRight.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/WalkingRight.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/WalkingRight.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/WalkingRight.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/WalkingRight.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/WalkingRight.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.LWalkingRightbase.init(&mInit);
        playerPC.Anim.LWalkingRight.init(&playerPC.Anim.LWalkingRightbase,screen);
        playerPC.Anim.LWalkingRight.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/WalkingRight.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/WalkingRight.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/WalkingRight.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/WalkingRight.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/WalkingRight.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/WalkingRight.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/WalkingRight.bmp";
    }
        mInit.numFrames = 9;
        playerPC.Anim.LWalkingRightbase.init(&mInit);
        playerPC.Anim.LWalkingRight.init(&playerPC.Anim.LWalkingRightbase,screen);
        playerPC.Anim.LWalkingRight.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/WalkingLeft.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/WalkingLeft.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/WalkingLeft.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/WalkingLeft.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/WalkingLeft.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/WalkingLeft.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/WalkingLeft.bmp";
    }
        mInit.numFrames = 9;
        playerPC.Anim.LWalkingLeftbase.init(&mInit);
        playerPC.Anim.LWalkingLeft.init(&playerPC.Anim.LWalkingLeftbase,screen);
        playerPC.Anim.LWalkingLeft.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Jump.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Jump.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Jump.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Jump.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Jump.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Jump.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Jump.bmp";
    }
        mInit.numFrames = 1;
        playerPC.Anim.LJumpbase.init(&mInit);
        playerPC.Anim.LJump.init(&playerPC.Anim.LJumpbase,screen);
        playerPC.Anim.LJump.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/JumpRight.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/JumpRight.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/JumpRight.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/JumpRight.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/JumpRight.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/JumpRight.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/JumpRight.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.LJumpRightbase.init(&mInit);
        playerPC.Anim.LJumpRight.init(&playerPC.Anim.LJumpRightbase,screen);
        playerPC.Anim.LJumpRight.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/JumpLeft.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/JumpLeft.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/JumpLeft.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/JumpLeft.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/JumpLeft.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/JumpLeft.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/JumpLeft.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.LJumpLeftbase.init(&mInit);
        playerPC.Anim.LJumpLeft.init(&playerPC.Anim.LJumpLeftbase,screen);
        playerPC.Anim.LJumpLeft.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Duck.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Duck.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Duck.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Duck.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Duck.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Duck.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Duck.bmp";
    }
        mInit.numFrames = 3;
        playerPC.Anim.LDuckbase.init(&mInit);
        playerPC.Anim.LDuck.init(&playerPC.Anim.LDuckbase,screen);
        playerPC.Anim.LDuck.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Block.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Block.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Block.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Block.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Block.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Block.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Block.bmp";
    }
        mInit.numFrames = 3;
        playerPC.Anim.LBlockbase.init(&mInit);
        playerPC.Anim.LBlock.init(&playerPC.Anim.LBlockbase,screen);
        playerPC.Anim.LBlock.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/BlockDuck.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/BlockDuck.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/BlockDuck.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/BlockDuck.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/BlockDuck.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/BlockDuck.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/BlockDuck.bmp";
    }
        mInit.numFrames = 2;
        playerPC.Anim.LBlockDuckbase.init(&mInit);
        playerPC.Anim.LBlockDuck.init(&playerPC.Anim.LBlockDuckbase,screen);
        playerPC.Anim.LBlockDuck.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HighPunch.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HighPunch.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HighPunch.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HighPunch.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HighPunch.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HighPunch.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HighPunch.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.LHighPunchbase.init(&mInit);
        playerPC.Anim.LHighPunch.init(&playerPC.Anim.LHighPunchbase,screen);
        playerPC.Anim.LHighPunch.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/LowPunch.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/LowPunch.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/LowPunch.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/LowPunch.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/LowPunch.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/LowPunch.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/LowPunch.bmp";
    }
        mInit.numFrames = 5;
        playerPC.Anim.LLowPunchbase.init(&mInit);
        playerPC.Anim.LLowPunch.init(&playerPC.Anim.LLowPunchbase,screen);
        playerPC.Anim.LLowPunch.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HighKick.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HighKick.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HighKick.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HighKick.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HighKick.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HighKick.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HighKick.bmp";
    }
        mInit.numFrames = 9;
        playerPC.Anim.LHighKickbase.init(&mInit);
        playerPC.Anim.LHighKick.init(&playerPC.Anim.LHighKickbase,screen);
        playerPC.Anim.LHighKick.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/LowKick.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/LowKick.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/LowKick.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/LowKick.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/LowKick.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/LowKick.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/LowKick.bmp";
    }
        mInit.numFrames = 7;
        playerPC.Anim.LLowKickbase.init(&mInit);
        playerPC.Anim.LLowKick.init(&playerPC.Anim.LLowKickbase,screen);
        playerPC.Anim.LLowKick.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Uppercut.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Uppercut.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Uppercut.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Uppercut.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Uppercut.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Uppercut.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Uppercut.bmp";
    }
        mInit.numFrames = 5;
        playerPC.Anim.LUppercutbase.init(&mInit);
        playerPC.Anim.LUppercut.init(&playerPC.Anim.LUppercutbase,screen);
        playerPC.Anim.LUppercut.setSpeed(3);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/DuckKick.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/DuckKick.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/DuckKick.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/DuckKick.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/DuckKick.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/DuckKick.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/DuckKick.bmp";
    }
        mInit.numFrames = 5;
        playerPC.Anim.LDuckKickbase.init(&mInit);
        playerPC.Anim.LDuckKick.init(&playerPC.Anim.LDuckKickbase,screen);
        playerPC.Anim.LDuckKick.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/JumpPunch.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/JumpPunch.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/JumpPunch.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/JumpPunch.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/JumpPunch.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/JumpPunch.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/JumpPunch.bmp";
    }
        mInit.numFrames = 1;
        playerPC.Anim.LJumpPunchbase.init(&mInit);
        playerPC.Anim.LJumpPunch.init(&playerPC.Anim.LJumpPunchbase,screen);
        playerPC.Anim.LJumpPunch.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/JumpKick.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/JumpKick.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/JumpKick.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/JumpKick.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/JumpKick.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/JumpKick.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/JumpKick.bmp";
    }
        mInit.numFrames = 1;
        playerPC.Anim.LJumpKickbase.init(&mInit);
        playerPC.Anim.LJumpKick.init(&playerPC.Anim.LJumpKickbase,screen);
        playerPC.Anim.LJumpKick.setSpeed(4);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitHead.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitHead.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitHead.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitHead.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitHead.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitHead.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitHead.bmp";
    }
        playerPC.Anim.LHitHead.set(70,155);
        mInit.numFrames = 4;
        playerPC.Anim.LHitHeadbase.init(&mInit);
        playerPC.Anim.LHitHead.init(&playerPC.Anim.LHitHeadbase,screen);
        playerPC.Anim.LHitHead.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitChest.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitChest.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitChest.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitChest.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitChest.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitChest.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitChest.bmp";
    }
        playerPC.Anim.LHitChest.set(70,155);
        mInit.numFrames = 4;
        playerPC.Anim.LHitChestbase.init(&mInit);
        playerPC.Anim.LHitChest.init(&playerPC.Anim.LHitChestbase,screen);
        playerPC.Anim.LHitChest.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitStrong.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitStrong.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitStrong.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitStrong.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitStrong.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitStrong.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitStrong.bmp";
    }
        playerPC.Anim.LHitStrong.set(70,155);
        mInit.numFrames = 8;
        playerPC.Anim.LHitStrongbase.init(&mInit);
        playerPC.Anim.LHitStrong.init(&playerPC.Anim.LHitStrongbase,screen);
        playerPC.Anim.LHitStrong.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitDuck.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitDuck.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitDuck.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitDuck.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitDuck.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitDuck.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitDuck.bmp";
    }
        playerPC.Anim.LHitDuck.set(70,155);
        mInit.numFrames = 3;
        playerPC.Anim.LHitDuckbase.init(&mInit);
        playerPC.Anim.LHitDuck.init(&playerPC.Anim.LHitDuckbase,screen);
        playerPC.Anim.LHitDuck.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitUppercut.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitUppercut.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitUppercut.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitUppercut.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitUppercut.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitUppercut.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitUppercut.bmp";
    }
        playerPC.Anim.LHitUppercut.set(70,155);
        mInit.numFrames = 1;
        playerPC.Anim.LHitUppercutbase.init(&mInit);
        playerPC.Anim.LHitUppercut.init(&playerPC.Anim.LHitUppercutbase,screen);
        playerPC.Anim.LHitUppercut.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Win.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Win.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Win.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Win.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Win.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Win.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Win.bmp";
    }
        playerPC.Anim.LWin.set(70,155);
        mInit.numFrames = 10;
        playerPC.Anim.LWinbase.init(&mInit);
        playerPC.Anim.LWin.init(&playerPC.Anim.LWinbase,screen);
        playerPC.Anim.LWin.setSpeed(5);

    if(playerPC.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Fail.bmp";
    }
    else if(playerPC.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Fail.bmp";
    }
    else if(playerPC.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Fail.bmp";
    }
    else if(playerPC.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Fail.bmp";
    }
    else if(playerPC.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Fail.bmp";
    }
    else if(playerPC.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Fail.bmp";
    }
    else if(playerPC.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Fail.bmp";
    }
        playerPC.Anim.LFail.set(70,155);
        mInit.numFrames = 6;
        playerPC.Anim.LFailbase.init(&mInit);
        playerPC.Anim.LFail.init(&playerPC.Anim.LFailbase,screen);
        playerPC.Anim.LFail.setSpeed(5);




    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/WalkingRight.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.RWalkingRightbase.init(&mInit);
        playerBOT.Anim.RWalkingRight.init(&playerBOT.Anim.RWalkingRightbase,screen);
        playerBOT.Anim.RWalkingRight.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/WalkingRight.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/WalkingRight.bmp";
    }
        mInit.numFrames = 9;
        playerBOT.Anim.RWalkingRightbase.init(&mInit);
        playerBOT.Anim.RWalkingRight.init(&playerBOT.Anim.RWalkingRightbase,screen);
        playerBOT.Anim.RWalkingRight.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/WalkingLeft.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/WalkingLeft.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/WalkingLeft.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/WalkingLeft.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/WalkingLeft.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/WalkingLeft.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/WalkingLeft.bmp";
    }
        mInit.numFrames = 9;
        playerBOT.Anim.RWalkingLeftbase.init(&mInit);
        playerBOT.Anim.RWalkingLeft.init(&playerBOT.Anim.RWalkingLeftbase,screen);
        playerBOT.Anim.RWalkingLeft.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Jump.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Jump.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Jump.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Jump.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Jump.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Jump.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Jump.bmp";
    }
        mInit.numFrames = 1;
        playerBOT.Anim.RJumpbase.init(&mInit);
        playerBOT.Anim.RJump.init(&playerBOT.Anim.RJumpbase,screen);
        playerBOT.Anim.RJump.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/JumpRight.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/JumpRight.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/JumpRight.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/JumpRight.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/JumpRight.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/JumpRight.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/JumpRight.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.RJumpRightbase.init(&mInit);
        playerBOT.Anim.RJumpRight.init(&playerBOT.Anim.RJumpRightbase,screen);
        playerBOT.Anim.RJumpRight.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/JumpLeft.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/JumpLeft.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/JumpLeft.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/JumpLeft.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/JumpLeft.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/JumpLeft.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/JumpLeft.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.RJumpLeftbase.init(&mInit);
        playerBOT.Anim.RJumpLeft.init(&playerBOT.Anim.RJumpLeftbase,screen);
        playerBOT.Anim.RJumpLeft.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Duck.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Duck.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Duck.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Duck.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Duck.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Duck.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Duck.bmp";
    }
        mInit.numFrames = 3;
        playerBOT.Anim.RDuckbase.init(&mInit);
        playerBOT.Anim.RDuck.init(&playerBOT.Anim.RDuckbase,screen);
        playerBOT.Anim.RDuck.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Block.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Block.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Block.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Block.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Block.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Block.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Block.bmp";
    }
        mInit.numFrames = 3;
        playerBOT.Anim.RBlockbase.init(&mInit);
        playerBOT.Anim.RBlock.init(&playerBOT.Anim.RBlockbase,screen);
        playerBOT.Anim.RBlock.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/BlockDuck.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/BlockDuck.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/BlockDuck.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/BlockDuck.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/BlockDuck.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/BlockDuck.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/BlockDuck.bmp";
    }
        mInit.numFrames = 2;
        playerBOT.Anim.RBlockDuckbase.init(&mInit);
        playerBOT.Anim.RBlockDuck.init(&playerBOT.Anim.RBlockDuckbase,screen);
        playerBOT.Anim.RBlockDuck.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HighPunch.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HighPunch.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HighPunch.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HighPunch.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HighPunch.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HighPunch.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HighPunch.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.RHighPunchbase.init(&mInit);
        playerBOT.Anim.RHighPunch.init(&playerBOT.Anim.RHighPunchbase,screen);
        playerBOT.Anim.RHighPunch.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/LowPunch.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/LowPunch.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/LowPunch.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/LowPunch.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/LowPunch.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/LowPunch.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/LowPunch.bmp";
    }
        mInit.numFrames = 5;
        playerBOT.Anim.RLowPunchbase.init(&mInit);
        playerBOT.Anim.RLowPunch.init(&playerBOT.Anim.RLowPunchbase,screen);
        playerBOT.Anim.RLowPunch.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HighKick.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HighKick.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HighKick.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HighKick.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HighKick.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HighKick.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HighKick.bmp";
    }
        mInit.numFrames = 9;
        playerBOT.Anim.RHighKickbase.init(&mInit);
        playerBOT.Anim.RHighKick.init(&playerBOT.Anim.RHighKickbase,screen);
        playerBOT.Anim.RHighKick.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/LowKick.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/LowKick.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/LowKick.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/LowKick.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/LowKick.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/LowKick.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/LowKick.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.RLowKickbase.init(&mInit);
        playerBOT.Anim.RLowKick.init(&playerBOT.Anim.RLowKickbase,screen);
        playerBOT.Anim.RLowKick.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Uppercut.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Uppercut.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Uppercut.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Uppercut.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Uppercut.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Uppercut.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Uppercut.bmp";
    }
        mInit.numFrames = 5;
        playerBOT.Anim.RUppercutbase.init(&mInit);
        playerBOT.Anim.RUppercut.init(&playerBOT.Anim.RUppercutbase,screen);
        playerBOT.Anim.RUppercut.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/DuckKick.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/DuckKick.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/DuckKick.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/DuckKick.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/DuckKick.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/DuckKick.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/DuckKick.bmp";
    }
        mInit.numFrames = 5;
        playerBOT.Anim.RDuckKickbase.init(&mInit);
        playerBOT.Anim.RDuckKick.init(&playerBOT.Anim.RDuckKickbase,screen);
        playerBOT.Anim.RDuckKick.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/JumpPunch.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/JumpPunch.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/JumpPunch.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/JumpPunch.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/JumpPunch.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/JumpPunch.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/JumpPunch.bmp";
    }
        mInit.numFrames = 1;
        playerBOT.Anim.RJumpPunchbase.init(&mInit);
        playerBOT.Anim.RJumpPunch.init(&playerBOT.Anim.RJumpPunchbase,screen);
        playerBOT.Anim.RJumpPunch.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/JumpKick.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/JumpKick.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/JumpKick.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/JumpKick.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/JumpKick.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/JumpKick.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/JumpKick.bmp";
    }
        mInit.numFrames = 1;
        playerBOT.Anim.RJumpKickbase.init(&mInit);
        playerBOT.Anim.RJumpKick.init(&playerBOT.Anim.RJumpKickbase,screen);
        playerBOT.Anim.RJumpKick.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitHead.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitHead.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitHead.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitHead.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitHead.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitHead.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitHead.bmp";
    }
        playerBOT.Anim.RHitHead.set(70,155);
        mInit.numFrames = 4;
        playerBOT.Anim.RHitHeadbase.init(&mInit);
        playerBOT.Anim.RHitHead.init(&playerBOT.Anim.RHitHeadbase,screen);
        playerBOT.Anim.RHitHead.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitChest.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitChest.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitChest.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitChest.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitChest.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitChest.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitChest.bmp";
    }
        playerBOT.Anim.RHitChest.set(70,155);
        mInit.numFrames = 4;
        playerBOT.Anim.RHitChestbase.init(&mInit);
        playerBOT.Anim.RHitChest.init(&playerBOT.Anim.RHitChestbase,screen);
        playerBOT.Anim.RHitChest.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitStrong.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitStrong.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitStrong.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitStrong.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitStrong.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitStrong.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitStrong.bmp";
    }
        playerBOT.Anim.RHitStrong.set(70,155);
        mInit.numFrames = 8;
        playerBOT.Anim.RHitStrongbase.init(&mInit);
        playerBOT.Anim.RHitStrong.init(&playerBOT.Anim.RHitStrongbase,screen);
        playerBOT.Anim.RHitStrong.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitDuck.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitDuck.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitDuck.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitDuck.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitDuck.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitDuck.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitDuck.bmp";
    }
        playerBOT.Anim.RHitDuck.set(70,155);
        mInit.numFrames = 3;
        playerBOT.Anim.RHitDuckbase.init(&mInit);
        playerBOT.Anim.RHitDuck.init(&playerBOT.Anim.RHitDuckbase,screen);
        playerBOT.Anim.RHitDuck.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/HitUppercut.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/HitUppercut.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/HitUppercut.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/HitUppercut.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/HitUppercut.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/HitUppercut.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/HitUppercut.bmp";
    }
        playerBOT.Anim.RHitUppercut.set(70,155);
        mInit.numFrames = 1;
        playerBOT.Anim.RHitUppercutbase.init(&mInit);
        playerBOT.Anim.RHitUppercut.init(&playerBOT.Anim.RHitUppercutbase,screen);
        playerBOT.Anim.RHitUppercut.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Win.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Win.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Win.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Win.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Win.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Win.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Win.bmp";
    }
        playerBOT.Anim.RWin.set(70,155);
        mInit.numFrames = 10;
        playerBOT.Anim.RWinbase.init(&mInit);
        playerBOT.Anim.RWin.init(&playerBOT.Anim.RWinbase,screen);
        playerBOT.Anim.RWin.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/R/Fail.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/R/Fail.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/R/Fail.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/R/Fail.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/R/Fail.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/R/Fail.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/R/Fail.bmp";
    }
        playerBOT.Anim.RFail.set(70,155);
        mInit.numFrames = 6;
        playerBOT.Anim.RFailbase.init(&mInit);
        playerBOT.Anim.RFail.init(&playerBOT.Anim.RFailbase,screen);
        playerBOT.Anim.RFail.setSpeed(5);
////////////////////////////////LEFT
        if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/WalkingRight.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.LWalkingRightbase.init(&mInit);
        playerBOT.Anim.LWalkingRight.init(&playerBOT.Anim.LWalkingRightbase,screen);
        playerBOT.Anim.LWalkingRight.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/WalkingRight.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/WalkingRight.bmp";
    }
        mInit.numFrames = 9;
        playerBOT.Anim.LWalkingRightbase.init(&mInit);
        playerBOT.Anim.LWalkingRight.init(&playerBOT.Anim.LWalkingRightbase,screen);
        playerBOT.Anim.LWalkingRight.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/WalkingLeft.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/WalkingLeft.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/WalkingLeft.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/WalkingLeft.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/WalkingLeft.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/WalkingLeft.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/WalkingLeft.bmp";
    }
        mInit.numFrames = 9;
        playerBOT.Anim.LWalkingLeftbase.init(&mInit);
        playerBOT.Anim.LWalkingLeft.init(&playerBOT.Anim.LWalkingLeftbase,screen);
        playerBOT.Anim.LWalkingLeft.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Jump.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Jump.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Jump.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Jump.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Jump.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Jump.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Jump.bmp";
    }
        mInit.numFrames = 1;
        playerBOT.Anim.LJumpbase.init(&mInit);
        playerBOT.Anim.LJump.init(&playerBOT.Anim.LJumpbase,screen);
        playerBOT.Anim.LJump.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/JumpRight.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/JumpRight.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/JumpRight.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/JumpRight.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/JumpRight.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/JumpRight.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/JumpRight.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.LJumpRightbase.init(&mInit);
        playerBOT.Anim.LJumpRight.init(&playerBOT.Anim.LJumpRightbase,screen);
        playerBOT.Anim.LJumpRight.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/JumpLeft.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/JumpLeft.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/JumpLeft.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/JumpLeft.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/JumpLeft.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/JumpLeft.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/JumpLeft.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.LJumpLeftbase.init(&mInit);
        playerBOT.Anim.LJumpLeft.init(&playerBOT.Anim.LJumpLeftbase,screen);
        playerBOT.Anim.LJumpLeft.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Duck.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Duck.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Duck.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Duck.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Duck.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Duck.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Duck.bmp";
    }
        mInit.numFrames = 3;
        playerBOT.Anim.LDuckbase.init(&mInit);
        playerBOT.Anim.LDuck.init(&playerBOT.Anim.LDuckbase,screen);
        playerBOT.Anim.LDuck.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Block.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Block.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Block.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Block.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Block.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Block.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Block.bmp";
    }
        mInit.numFrames = 3;
        playerBOT.Anim.LBlockbase.init(&mInit);
        playerBOT.Anim.LBlock.init(&playerBOT.Anim.LBlockbase,screen);
        playerBOT.Anim.LBlock.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/BlockDuck.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/BlockDuck.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/BlockDuck.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/BlockDuck.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/BlockDuck.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/BlockDuck.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/BlockDuck.bmp";
    }
        mInit.numFrames = 2;
        playerBOT.Anim.LBlockDuckbase.init(&mInit);
        playerBOT.Anim.LBlockDuck.init(&playerBOT.Anim.LBlockDuckbase,screen);
        playerBOT.Anim.LBlockDuck.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HighPunch.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HighPunch.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HighPunch.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HighPunch.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HighPunch.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HighPunch.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HighPunch.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.LHighPunchbase.init(&mInit);
        playerBOT.Anim.LHighPunch.init(&playerBOT.Anim.LHighPunchbase,screen);
        playerBOT.Anim.LHighPunch.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/LowPunch.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/LowPunch.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/LowPunch.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/LowPunch.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/LowPunch.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/LowPunch.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/LowPunch.bmp";
    }
        mInit.numFrames = 5;
        playerBOT.Anim.LLowPunchbase.init(&mInit);
        playerBOT.Anim.LLowPunch.init(&playerBOT.Anim.LLowPunchbase,screen);
        playerBOT.Anim.LLowPunch.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HighKick.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HighKick.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HighKick.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HighKick.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HighKick.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HighKick.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HighKick.bmp";
    }
        mInit.numFrames = 9;
        playerBOT.Anim.LHighKickbase.init(&mInit);
        playerBOT.Anim.LHighKick.init(&playerBOT.Anim.LHighKickbase,screen);
        playerBOT.Anim.LHighKick.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/LowKick.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/LowKick.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/LowKick.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/LowKick.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/LowKick.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/LowKick.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/LowKick.bmp";
    }
        mInit.numFrames = 7;
        playerBOT.Anim.LLowKickbase.init(&mInit);
        playerBOT.Anim.LLowKick.init(&playerBOT.Anim.LLowKickbase,screen);
        playerBOT.Anim.LLowKick.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Uppercut.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Uppercut.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Uppercut.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Uppercut.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Uppercut.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Uppercut.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Uppercut.bmp";
    }
        mInit.numFrames = 5;
        playerBOT.Anim.LUppercutbase.init(&mInit);
        playerBOT.Anim.LUppercut.init(&playerBOT.Anim.LUppercutbase,screen);
        playerBOT.Anim.LUppercut.setSpeed(3);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/DuckKick.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/DuckKick.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/DuckKick.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/DuckKick.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/DuckKick.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/DuckKick.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/DuckKick.bmp";
    }
        mInit.numFrames = 5;
        playerBOT.Anim.LDuckKickbase.init(&mInit);
        playerBOT.Anim.LDuckKick.init(&playerBOT.Anim.LDuckKickbase,screen);
        playerBOT.Anim.LDuckKick.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/JumpPunch.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/JumpPunch.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/JumpPunch.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/JumpPunch.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/JumpPunch.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/JumpPunch.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/JumpPunch.bmp";
    }
        mInit.numFrames = 1;
        playerBOT.Anim.LJumpPunchbase.init(&mInit);
        playerBOT.Anim.LJumpPunch.init(&playerBOT.Anim.LJumpPunchbase,screen);
        playerBOT.Anim.LJumpPunch.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/JumpKick.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/JumpKick.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/JumpKick.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/JumpKick.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/JumpKick.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/JumpKick.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/JumpKick.bmp";
    }
        mInit.numFrames = 1;
        playerBOT.Anim.LJumpKickbase.init(&mInit);
        playerBOT.Anim.LJumpKick.init(&playerBOT.Anim.LJumpKickbase,screen);
        playerBOT.Anim.LJumpKick.setSpeed(4);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitHead.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitHead.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitHead.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitHead.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitHead.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitHead.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitHead.bmp";
    }
        playerBOT.Anim.LHitHead.set(70,155);
        mInit.numFrames = 4;
        playerBOT.Anim.LHitHeadbase.init(&mInit);
        playerBOT.Anim.LHitHead.init(&playerBOT.Anim.LHitHeadbase,screen);
        playerBOT.Anim.LHitHead.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitChest.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitChest.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitChest.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitChest.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitChest.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitChest.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitChest.bmp";
    }
        playerBOT.Anim.LHitChest.set(70,155);
        mInit.numFrames = 4;
        playerBOT.Anim.LHitChestbase.init(&mInit);
        playerBOT.Anim.LHitChest.init(&playerBOT.Anim.LHitChestbase,screen);
        playerBOT.Anim.LHitChest.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitStrong.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitStrong.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitStrong.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitStrong.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitStrong.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitStrong.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitStrong.bmp";
    }
        playerBOT.Anim.LHitStrong.set(70,155);
        mInit.numFrames = 8;
        playerBOT.Anim.LHitStrongbase.init(&mInit);
        playerBOT.Anim.LHitStrong.init(&playerBOT.Anim.LHitStrongbase,screen);
        playerBOT.Anim.LHitStrong.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitDuck.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitDuck.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitDuck.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitDuck.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitDuck.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitDuck.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitDuck.bmp";
    }
        playerBOT.Anim.LHitDuck.set(70,155);
        mInit.numFrames = 3;
        playerBOT.Anim.LHitDuckbase.init(&mInit);
        playerBOT.Anim.LHitDuck.init(&playerBOT.Anim.LHitDuckbase,screen);
        playerBOT.Anim.LHitDuck.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/HitUppercut.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/HitUppercut.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/HitUppercut.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/HitUppercut.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/HitUppercut.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/HitUppercut.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/HitUppercut.bmp";
    }
        playerBOT.Anim.LHitUppercut.set(70,155);
        mInit.numFrames = 1;
        playerBOT.Anim.LHitUppercutbase.init(&mInit);
        playerBOT.Anim.LHitUppercut.init(&playerBOT.Anim.LHitUppercutbase,screen);
        playerBOT.Anim.LHitUppercut.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Win.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Win.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Win.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Win.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Win.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Win.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Win.bmp";
    }
        playerBOT.Anim.LWin.set(70,155);
        mInit.numFrames = 10;
        playerBOT.Anim.LWinbase.init(&mInit);
        playerBOT.Anim.LWin.init(&playerBOT.Anim.LWinbase,screen);
        playerBOT.Anim.LWin.setSpeed(5);

    if(playerBOT.name==JOHNNY_CAGE){
        mInit.bmpFile = "data/fight/fighters/johnny/L/Fail.bmp";
    }
    else if(playerBOT.name== LIU_KANG){
        mInit.bmpFile = "data/fight/fighters/liukang/L/Fail.bmp";
    }
    else if(playerBOT.name== KANO){
        mInit.bmpFile = "data/fight/fighters/kano/L/Fail.bmp";
    }
    else if(playerBOT.name== SUBZERO){
        mInit.bmpFile = "data/fight/fighters/subzero/L/Fail.bmp";
    }
    else if(playerBOT.name== SONYA){
        mInit.bmpFile = "data/fight/fighters/sonya/L/Fail.bmp";
    }
    else if(playerBOT.name== RAIDEN){
        mInit.bmpFile = "data/fight/fighters/raiden/L/Fail.bmp";
    }
    else if(playerBOT.name== SCORPION){
        mInit.bmpFile = "data/fight/fighters/scorpion/L/Fail.bmp";
    }
        playerBOT.Anim.LFail.set(70,155);
        mInit.numFrames = 6;
        playerBOT.Anim.LFailbase.init(&mInit);
        playerBOT.Anim.LFail.init(&playerBOT.Anim.LFailbase,screen);
        playerBOT.Anim.LFail.setSpeed(5);

}

void PlayerMove(){
    playerPC.Anim.RWalkingRight.set(playerPC.x,playerPC.y);
    playerPC.Anim.RWalkingRight.set(playerPC.x,playerPC.y);
    playerPC.Anim.RWalkingLeft.set(playerPC.x,playerPC.y);
    playerPC.Anim.RJump.set(playerPC.x,playerPC.y);
    playerPC.Anim.RJumpRight.set(playerPC.x,playerPC.y);
    playerPC.Anim.RJumpLeft.set(playerPC.x,playerPC.y);
    playerPC.Anim.RDuck.set(playerPC.x,playerPC.y);
    playerPC.Anim.RBlock.set(playerPC.x,playerPC.y);
    playerPC.Anim.RBlockDuck.set(playerPC.x,playerPC.y+17);
    playerPC.Anim.RHighPunch.set(playerPC.x,playerPC.y);
    playerPC.Anim.RLowPunch.set(playerPC.x,playerPC.y);
    playerPC.Anim.RHighKick.set(playerPC.x,playerPC.y);
    playerPC.Anim.RLowKick.set(playerPC.x,playerPC.y);
    playerPC.Anim.RUppercut.set(playerPC.x,playerPC.y-2);
    playerPC.Anim.RDuckKick.set(playerPC.x,playerPC.y+30);
    playerPC.Anim.RJumpPunch.set(playerPC.x,playerPC.y);
    playerPC.Anim.RJumpKick.set(playerPC.x,playerPC.y);
    playerPC.Anim.RWalkingRight.set(playerPC.x,playerPC.y);
    playerPC.Anim.RHitHead.set(playerPC.x,playerPC.y);
    playerPC.Anim.RHitChest.set(playerPC.x,playerPC.y);
    playerPC.Anim.RHitStrong.set(playerPC.x,playerPC.y);
    playerPC.Anim.RHitDuck.set(playerPC.x,playerPC.y);
    playerPC.Anim.RHitUppercut.set(playerPC.x,playerPC.y);
    playerPC.Anim.RWin.set(playerPC.x,playerPC.y);
    playerPC.Anim.RFail.set(playerPC.x,playerPC.y);

    playerPC.Anim.LWalkingRight.set(playerPC.x,playerPC.y);
    playerPC.Anim.LWalkingRight.set(playerPC.x,playerPC.y);
    playerPC.Anim.LWalkingLeft.set(playerPC.x,playerPC.y);
    playerPC.Anim.LJump.set(playerPC.x,playerPC.y);
    playerPC.Anim.LJumpRight.set(playerPC.x,playerPC.y);
    playerPC.Anim.LJumpLeft.set(playerPC.x,playerPC.y);
    playerPC.Anim.LDuck.set(playerPC.x,playerPC.y);
    playerPC.Anim.LBlock.set(playerPC.x,playerPC.y);
    playerPC.Anim.LBlockDuck.set(playerPC.x,playerPC.y+17);
    playerPC.Anim.LHighPunch.set(playerPC.x,playerPC.y);
    playerPC.Anim.LLowPunch.set(playerPC.x,playerPC.y);
    playerPC.Anim.LHighKick.set(playerPC.x,playerPC.y);
    playerPC.Anim.LLowKick.set(playerPC.x,playerPC.y);
    playerPC.Anim.LUppercut.set(playerPC.x,playerPC.y-2);
    playerPC.Anim.LDuckKick.set(playerPC.x,playerPC.y+30);
    playerPC.Anim.LJumpPunch.set(playerPC.x,playerPC.y);
    playerPC.Anim.LJumpKick.set(playerPC.x,playerPC.y);
    playerPC.Anim.LWalkingRight.set(playerPC.x,playerPC.y);
    playerPC.Anim.LHitHead.set(playerPC.x,playerPC.y);
    playerPC.Anim.LHitChest.set(playerPC.x,playerPC.y);
    playerPC.Anim.LHitStrong.set(playerPC.x,playerPC.y);
    playerPC.Anim.LHitDuck.set(playerPC.x,playerPC.y);
    playerPC.Anim.LHitUppercut.set(playerPC.x,playerPC.y);
    playerPC.Anim.LWin.set(playerPC.x,playerPC.y);
    playerPC.Anim.LFail.set(playerPC.x,playerPC.y);





    playerBOT.Anim.RWalkingRight.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RWalkingRight.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RWalkingLeft.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RJump.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RJumpRight.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RJumpLeft.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RDuck.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RBlock.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RBlockDuck.set(playerBOT.x,playerBOT.y+17);
    playerBOT.Anim.RHighPunch.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RLowPunch.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RHighKick.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RLowKick.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RUppercut.set(playerBOT.x,playerBOT.y-2);
    playerBOT.Anim.RDuckKick.set(playerBOT.x,playerBOT.y+30);
    playerBOT.Anim.RJumpPunch.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RJumpKick.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RWalkingRight.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RHitHead.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RHitChest.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RHitStrong.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RHitDuck.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RHitUppercut.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RWin.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.RFail.set(playerPC.x,playerBOT.y);

    playerBOT.Anim.LWalkingRight.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LWalkingRight.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LWalkingLeft.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LJump.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LJumpRight.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LJumpLeft.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LDuck.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LBlock.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LBlockDuck.set(playerBOT.x,playerBOT.y+17);
    playerBOT.Anim.LHighPunch.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LLowPunch.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LHighKick.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LLowKick.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LUppercut.set(playerBOT.x,playerBOT.y-2);
    playerBOT.Anim.LDuckKick.set(playerBOT.x,playerBOT.y+30);
    playerBOT.Anim.LJumpPunch.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LJumpKick.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LWalkingRight.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LHitHead.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LHitChest.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LHitStrong.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LHitDuck.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LHitUppercut.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LWin.set(playerBOT.x,playerBOT.y);
    playerBOT.Anim.LFail.set(playerPC.x,playerBOT.y);

}

bool upPC=false, downPC=false;
bool upBOT=false, downBOT=false;
int cadre;
void Air(){
        if(playerPC.state==Jump || playerPC.state == JumpPunch || playerPC.state == JumpKick){
            if(playerPC.y>100 && upPC){
                playerPC.y-=5;
            }
            else if(playerPC.y<155 && downPC){
                playerPC.y+=5;
            }

            if(playerPC.y==100 && upPC){
                upPC=false;
                downPC=true;
            }
            else if(playerPC.y==155 && downPC){
                downPC=false;
                playerPC.state=FightingStance;
                playerPC.action=false;
            }
        }
        else if(playerPC.state==JumpRight || playerPC.state == JumpRightPunch || playerPC.state == JumpRightKick){
            if(playerPC.y>100 && upPC){
                if(playerPC.x+5<350){
                    playerPC.x+=5;
                }
                playerPC.y-=5;
            }
            else if(playerPC.y<155 && downPC){
                if(playerPC.side==RIGHT && playerPC.x>=playerBOT.x && playerBOT.x+40<350){
                    playerPC.x+=5;
                }
                else if(playerPC.side==RIGHT && playerBOT.x-playerPC.x<40){
                    playerPC.x-=3;
                }
                else{
                    if(playerPC.x+5<350){
                        playerPC.x+=5;
                    }
                }
                playerPC.y+=5;
            }

            if(playerPC.y==100 && upPC){
                upPC=false;
                downPC=true;
            }
            else if(playerPC.y==155 && downPC){
                if(abs(playerBOT.x-playerPC.x<40) && playerPC.x<playerBOT.x){
                    playerPC.x=playerBOT.x-40;
                }
                if(playerPC.x>playerBOT.x){
                    playerPC.side=LEFT;
                    playerBOT.side=RIGHT;
                }
                downPC=false;
                playerPC.state=FightingStance;
                playerPC.action=false;
            }
        }
        else if(playerPC.state==JumpLeft || playerPC.state == JumpLeftPunch || playerPC.state == JumpLeftKick){
            if(playerPC.y>100 && upPC){
                if(playerPC.x-4>0){
                    playerPC.x-=5;
                }
                playerPC.y-=5;
            }
            else if(playerPC.y<155 && downPC){
                if(playerPC.side==LEFT && playerBOT.x>=playerPC.x && playerBOT.x-40>0 ){
                    playerPC.x-=5;
                }
                else if(playerPC.side==LEFT && playerPC.x-playerBOT.x<40){
                    playerPC.x+=3;
                }
                else{
                    if(playerPC.x-4>0){
                        playerPC.x-=5;
                    }
                }
                playerPC.y+=5;
            }

            if(playerPC.y==100 && upPC){
                upPC=false;
                downPC=true;
            }
            else if(playerPC.y==155 && downPC){
                if(abs(playerBOT.x-playerPC.x<40) && playerPC.x>playerBOT.x){
                    playerPC.x=playerBOT.x+40;
                }
                if(playerPC.x<playerBOT.x){
                    playerPC.side=RIGHT;
                    playerBOT.side=LEFT;
                }
                downPC=false;
                playerPC.state=FightingStance;
                playerPC.action=false;
            }
        }
        else if(playerPC.state == HitUppercut){
            if(playerPC.side==LEFT){
                 if(playerPC.y>100 && upPC){
                    if(playerPC.x+2<350){
                        playerPC.x+=2;
                    }
                    playerPC.y-=5;
                }
                else if(playerPC.y<155 && downPC){
                    if(playerPC.x+2<350){
                            playerPC.x+=2;
                    }
                    playerPC.y+=5;
                }

                if(playerPC.y==100 && upPC){
                    upPC=false;
                    downPC=true;
                }
                else if(playerPC.y==155 && downPC){
                    downPC=false;
                    playerPC.state=FightingStance;
                    playerPC.action=false;
                }
            }
            else if(playerPC.side==RIGHT){
                 if(playerPC.y>100 && upPC){
                    if(playerPC.x-2>0){
                        playerPC.x-=2;
                    }
                    playerPC.y-=5;
                }
                else if(playerPC.y<155 && downPC){
                    if(playerPC.x-2>0){
                            playerPC.x-=2;
                    }
                    playerPC.y+=5;
                }

                if(playerPC.y==100 && upPC){
                    upPC=false;
                    downPC=true;
                }
                else if(playerPC.y==155 && downPC){
                    downPC=false;
                    playerPC.state=FightingStance;
                    playerPC.action=false;
                }
            }
        }




/////BOT////BOT////BOT/////BOT///BOT////BOT/////BOT//BOT/////BOT
        if(playerBOT.state==Jump || playerBOT.state == JumpPunch || playerBOT.state == JumpKick){
            if(playerBOT.y>100 && upBOT){
                playerBOT.y-=5;
            }
            else if(playerBOT.y<155 && downBOT){
                playerBOT.y+=5;
            }

            if(playerBOT.y==100 && upBOT){
                upBOT=false;
                downBOT=true;
            }
            else if(playerBOT.y==155 && downBOT){
                downBOT=false;
                playerBOT.state=FightingStance;
                playerBOT.action=false;
            }
        }
        else if(playerBOT.state==JumpRight || playerBOT.state == JumpRightPunch || playerBOT.state == JumpRightKick){
            if(playerBOT.y>100 && upBOT){
                if(playerBOT.x+5<350){
                    playerBOT.x+=5;
                }
                playerBOT.y-=5;
            }
            else if(playerBOT.y<155 && downBOT){
                if(playerBOT.side==RIGHT && playerBOT.x>=playerPC.x && playerPC.x+40<350){
                    playerBOT.x+=5;
                }
                else if(playerBOT.side==RIGHT && playerPC.x-playerBOT.x<40){
                    playerBOT.x-=3;
                }
                else{
                    if(playerBOT.x+5<350){
                        playerBOT.x+=5;
                    }
                }
                playerBOT.y+=5;
            }

            if(playerBOT.y==100 && upBOT){
                upBOT=false;
                downBOT=true;
            }
            else if(playerBOT.y==155 && downBOT){
                if(abs(playerPC.x-playerBOT.x<40) && playerBOT.x<playerPC.x){
                    playerBOT.x=playerPC.x-40;
                }
                if(playerBOT.x>playerPC.x){
                    playerBOT.side=LEFT;
                    playerPC.side=RIGHT;
                }
                downBOT=false;
                playerBOT.state=FightingStance;
                playerBOT.action=false;
            }
        }
        else if(playerBOT.state==JumpLeft || playerBOT.state == JumpLeftPunch || playerBOT.state == JumpLeftKick){
            if(playerBOT.y>100 && upBOT){
                if(playerBOT.x-4>0){
                    playerBOT.x-=5;
                }
                playerBOT.y-=5;
            }
            else if(playerBOT.y<155 && downBOT){
                if(playerBOT.side==LEFT && playerPC.x>=playerBOT.x && playerPC.x-40>0 ){
                    playerBOT.x-=5;
                }
                else if(playerBOT.side==LEFT && playerBOT.x-playerPC.x<40){
                    playerBOT.x+=3;
                }
                else{
                    if(playerBOT.x-4>0){
                        playerBOT.x-=5;
                    }
                }
                playerBOT.y+=5;
            }

            if(playerBOT.y==100 && upBOT){
                upBOT=false;
                downBOT=true;
            }
            else if(playerBOT.y==155 && downBOT){
                if(abs(playerPC.x-playerBOT.x<40) && playerBOT.x>playerPC.x){
                    playerBOT.x=playerPC.x+40;
                }
                if(playerBOT.x<playerPC.x){
                    playerBOT.side=RIGHT;
                    playerPC.side=LEFT;
                }
                downBOT=false;
                playerBOT.state=FightingStance;
                playerBOT.action=false;
            }
        }
        else if(playerBOT.state == HitUppercut){
            if(playerBOT.side==LEFT){
                 if(playerBOT.y>100 && upBOT){
                    if(playerBOT.x+2<350){
                        playerBOT.x+=2;
                    }
                    playerBOT.y-=5;
                }
                else if(playerBOT.y<155 && downBOT){
                    if(playerBOT.x+2<350){
                            playerBOT.x+=2;
                    }
                    playerBOT.y+=5;
                }

                if(playerBOT.y==100 && upBOT){
                    upBOT=false;
                    downBOT=true;
                }
                else if(playerBOT.y==155 && downBOT){
                    downBOT=false;
                    playerBOT.state=FightingStance;
                    playerBOT.action=false;
                }
            }
            else if(playerBOT.side==RIGHT){
                 if(playerBOT.y>100 && upBOT){
                    if(playerBOT.x-2>0){
                        playerBOT.x-=2;
                    }
                    playerBOT.y-=5;
                }
                else if(playerBOT.y<155 && downBOT){
                    if(playerBOT.x-2>0){
                            playerBOT.x-=2;
                    }
                    playerBOT.y+=5;
                }

                if(playerBOT.y==100 && upBOT){
                    upBOT=false;
                    downBOT=true;
                }
                else if(playerBOT.y==155 && downBOT){
                    downBOT=false;
                    playerBOT.state=FightingStance;
                    playerBOT.action=false;
                }
            }
        }
}

void DrawIMG(SDL_Surface *img, SDL_Surface *screen, int x, int y, int w, int h, int sx, int sy){

 SDL_Rect dest;
 dest.x = x;
 dest.y = y;

 SDL_Rect src;
 src.x = sx;
 src.y = sy;
 src.w = w;
 src.h = h;

 SDL_BlitSurface(img, &src, screen, &dest);

}

SDL_Surface *pit,*lifebar,*lifeback;

void DrawScene(SDL_Surface *screen, SDL_Surface *pit){
    DrawIMG(pit,screen,0,0);
    DrawIMG(lifeback,screen,20,20);
    DrawIMG(lifebar,screen,20,20,1+playerPC.hp,12,0,0);
    DrawIMG(lifeback,screen,220,20);
    DrawIMG(lifebar,screen,220,20,1+playerBOT.hp,12,0,0);
    if(playerPC.state == FightingStance){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RWalkingRight.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LWalkingRight.draw();
        }
    }
    else if(playerPC.state == WalkingRight){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RWalkingRight.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LWalkingRight.draw();
        }
    }
    else if(playerPC.state == WalkingLeft){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RWalkingLeft.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LWalkingLeft.draw();
        }
    }
    else if(playerPC.state == Jump){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RJump.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LJump.draw();
        }
    }
    else if(playerPC.state == JumpRight){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RJumpRight.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LJumpRight.draw();
        }
    }

    else if(playerPC.state == JumpLeft){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RJumpLeft.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LJumpLeft.draw();
        }
    }
    else if(playerPC.state == Duck){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RDuck.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LDuck.draw();
        }
    }
    else if(playerPC.state == Block){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RBlock.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LBlock.draw();
        }
    }
    else if(playerPC.state == BlockDuck){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RBlockDuck.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LBlockDuck.draw();
        }
    }
    else if(playerPC.state == HighPunch){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RHighPunch.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LHighPunch.draw();
        }
    }
    else if(playerPC.state == LowPunch){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RLowPunch.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LLowPunch.draw();
        }
    }
    else if(playerPC.state == HighKick){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RHighKick.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LHighKick.draw();
        }
    }
    else if(playerPC.state == LowKick){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RLowKick.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LLowKick.draw();
        }
    }
    else if(playerPC.state == Uppercut){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RUppercut.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LUppercut.draw();
        }
    }
    else if(playerPC.state == DuckKick){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RDuckKick.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LDuckKick.draw();
        }
    }
    else if(playerPC.state == JumpPunch || playerPC.state == JumpRightPunch || playerPC.state == JumpLeftPunch){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RJumpPunch.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LJumpPunch.draw();
        }
    }
    else if(playerPC.state == JumpKick || playerPC.state == JumpRightKick || playerPC.state == JumpLeftKick){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RJumpKick.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LJumpKick.draw();
        }
    }
	else if(playerPC.state == HitHead){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RHitHead.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LHitHead.draw();
        }
    }
    else if(playerPC.state == HitChest){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RHitChest.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LHitChest.draw();
        }
    }
    else if(playerPC.state == HitStrong){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RHitStrong.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LHitStrong.draw();
        }
    }
    else if(playerPC.state == HitDuck){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RHitDuck.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LHitDuck.draw();
        }
    }
    else if(playerPC.state == HitUppercut){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RHitUppercut.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LHitUppercut.draw();
        }
    }
    else if(playerPC.state == Win){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RWin.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LWin.draw();
        }
    }
    else if(playerPC.state == Fail){
        if(playerPC.side == RIGHT){
            playerPC.Anim.RFail.draw();
        }
        else if(playerPC.side == LEFT){
            playerPC.Anim.LFail.draw();
        }
    }


    if(playerBOT.state == FightingStance){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RWalkingRight.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LWalkingRight.draw();
        }
    }
    else if(playerBOT.state == WalkingRight){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RWalkingRight.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LWalkingRight.draw();
        }
    }
    else if(playerBOT.state == WalkingLeft){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RWalkingLeft.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LWalkingLeft.draw();
        }
    }
    else if(playerBOT.state == Jump){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RJump.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LJump.draw();
        }
    }
    else if(playerBOT.state == JumpRight){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RJumpRight.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LJumpRight.draw();
        }
    }

    else if(playerBOT.state == JumpLeft){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RJumpLeft.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LJumpLeft.draw();
        }
    }
    else if(playerBOT.state == Duck){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RDuck.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LDuck.draw();
        }
    }
    else if(playerBOT.state == Block){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RBlock.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LBlock.draw();
        }
    }
    else if(playerBOT.state == BlockDuck){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RBlockDuck.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LBlockDuck.draw();
        }
    }
    else if(playerBOT.state == HighPunch){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RHighPunch.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LHighPunch.draw();
        }
    }
    else if(playerBOT.state == LowPunch){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RLowPunch.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LLowPunch.draw();
        }
    }
    else if(playerBOT.state == HighKick){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RHighKick.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LHighKick.draw();
        }
    }
    else if(playerBOT.state == LowKick){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RLowKick.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LLowKick.draw();
        }
    }
    else if(playerBOT.state == Uppercut){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RUppercut.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LUppercut.draw();
        }
    }
    else if(playerBOT.state == DuckKick){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RDuckKick.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LDuckKick.draw();
        }
    }
    else if(playerBOT.state == JumpPunch || playerBOT.state == JumpRightPunch || playerBOT.state == JumpLeftPunch){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RJumpPunch.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LJumpPunch.draw();
        }
    }
    else if(playerBOT.state == JumpKick || playerBOT.state == JumpRightKick || playerBOT.state == JumpLeftKick){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RJumpKick.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LJumpKick.draw();
        }
    }
	else if(playerBOT.state == HitHead){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RHitHead.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LHitHead.draw();
        }
    }
    else if(playerBOT.state == HitChest){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RHitChest.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LHitChest.draw();
        }
    }
    else if(playerBOT.state == HitStrong){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RHitStrong.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LHitStrong.draw();
        }
    }
    else if(playerBOT.state == HitDuck){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RHitDuck.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LHitDuck.draw();
        }
    }
    else if(playerBOT.state == HitUppercut){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RHitUppercut.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LHitUppercut.draw();
        }
    }
    else if(playerBOT.state == Win){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RWin.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LWin.draw();
        }
    }
    else if(playerBOT.state == Fail){
        if(playerBOT.side == RIGHT){
            playerBOT.Anim.RFail.draw();
        }
        else if(playerBOT.side == LEFT){
            playerBOT.Anim.LFail.draw();
        }
    }
    SDL_Flip(screen);
}

int timesActionBot=0;
void botAction(int level){
    if(abs(playerPC.x-playerBOT.x)>50 && abs(playerPC.x-playerBOT.x)<100 && playerPC.state!=Block && playerPC.state!=BlockDuck){
        if(playerBOT.side==LEFT){
            playerBOT.state=WalkingLeft;
        }
        else if(playerBOT.side==RIGHT){
            playerBOT.state=WalkingRight;
        }
    }

    else if(abs(playerPC.x-playerBOT.x)>100 && abs(playerPC.x-playerBOT.x)<350 && playerPC.state!=Block && playerPC.state!=BlockDuck){
        if(playerBOT.side==LEFT){
            playerBOT.state=JumpLeft;
            playerBOT.action=true;
            upBOT=true;
        }
        else if(playerBOT.side==RIGHT){
            playerBOT.state=JumpRight;
            playerBOT.action=true;
            upBOT=true;
        }
    }
    if(abs(playerPC.x-playerBOT.x)<=50 && timesActionBot%(36    -level*5)==0){
        timesActionBot++;
        switch(rand()%8){
            case 0:{
                playerBOT.state=HighPunch;
                playerBOT.action=true;
                break;
            }
            case 1:{
                playerBOT.state=LowPunch;
                playerBOT.action=true;
                break;
            }
            case 2:{
                playerBOT.state=HighKick;
                playerBOT.action=true;
                break;
            }
            case 3:{
                playerBOT.state=LowKick;
                playerBOT.action=true;
                break;
            }
            case 4:{
                playerBOT.state=Uppercut;
                playerBOT.action=true;
                break;
            }
            case 5:{
                playerBOT.state=DuckKick;
                playerBOT.action=true;
                break;
            }
            case 6:{
                if(playerBOT.side==RIGHT){playerBOT.state=JumpRightKick;}
                else{playerBOT.state=JumpLeftKick;}
                playerBOT.action=true;
                upBOT=true;
                break;
            }
            case 7:{
                if(playerBOT.side==RIGHT){playerBOT.state=JumpRightPunch;}
                else{playerBOT.state=JumpLeftPunch;}
                playerBOT.action=true;
                upBOT=true;
                break;
            }
        }
    }
    else{
        timesActionBot++;
    }

}
int fight(SDL_Surface *screen, int sound, names name, int level){


    int frame = 0;
    bool cap = true;
    Timer fps;

    if(level==1){pit=SDL_LoadBMP("data/fight/pit/Pit3.bmp");}
    else if(level==2){pit=SDL_LoadBMP("data/fight/pit/Pit2.bmp");}
    else if(level==3){pit=SDL_LoadBMP("data/fight/pit/Pit3.bmp");}
    else if(level==4){pit=SDL_LoadBMP("data/fight/pit/Pit4.bmp");}
    else if(level==5){pit=SDL_LoadBMP("data/fight/pit/Pit5.bmp");}
    else if(level==6){pit=SDL_LoadBMP("data/fight/pit/Pit6.bmp");}
    else if(level==7){pit=SDL_LoadBMP("data/fight/pit/Pit7.bmp");}

    lifebar=SDL_LoadBMP("data/fight/props/lifebar.bmp");
    lifeback=SDL_LoadBMP("data/fight/props/lifeback.bmp");

    screen = SDL_SetVideoMode(400, 254, 16,
                                           SDL_HWSURFACE|SDL_DOUBLEBUF|SDL_FULLSCREEN);

    playerPC.name=name;
    playerPC.hp=161;
    playerPC.side=RIGHT;
    playerPC.state=FightingStance;
    playerPC.action=false;
    playerPC.x=30;
    playerPC.y=155;
    if(level==1){playerBOT.name=KANO;}
    else if(level==2){playerBOT.name=LIU_KANG;}
    else if(level==3){playerBOT.name=KANO;}
    else if(level==4){playerBOT.name=LIU_KANG;}
    else if(level==5){playerBOT.name=KANO;}
    else if(level==6){playerBOT.name=LIU_KANG;}
    else if(level==7){playerBOT.name=KANO;}
    playerBOT.hp=161;
    playerBOT.side=LEFT;
    playerBOT.state=FightingStance;
    playerBOT.action=false;
    playerBOT.x=180;
    playerBOT.y=155;

    initIMG(screen);
    PlayerMove();

    Uint32 start = SDL_GetTicks();
    Uint8* keys;

    int done=0;
    while(done == 0){
        PlayerMove();
        SDL_Event event;

        ////////////statics
        ////////////PC///////////PC/////////////PC////////////PC
        if(playerPC.state==Duck){
            if (playerPC.Anim.RDuck.getFrame()== (playerPC.Anim.RDuckbase.svsNumFrames) - 1){
                playerPC.Anim.RDuck.stopAnim();
            }
            else if (playerPC.Anim.LDuck.getFrame()== (playerPC.Anim.LDuckbase.svsNumFrames) - 1){
                playerPC.Anim.LDuck.stopAnim();
            }
        }
        else{ playerPC.Anim.RDuck.startAnim(); playerPC.Anim.RDuck.setFrame(0);
                playerPC.Anim.LDuck.startAnim();playerPC.Anim.LDuck.setFrame(0);}

        if(playerPC.state==Block){
            if (playerPC.Anim.RBlock.getFrame()== (playerPC.Anim.RBlockbase.svsNumFrames) - 1){
                playerPC.Anim.RBlock.stopAnim();
            }
            else if (playerPC.Anim.LBlock.getFrame()== (playerPC.Anim.LBlockbase.svsNumFrames) - 1){
                playerPC.Anim.LBlock.stopAnim();
            }
        }
        else{ playerPC.Anim.RBlock.startAnim(); playerPC.Anim.RBlock.setFrame(0);
            playerPC.Anim.LBlock.startAnim(); playerPC.Anim.LBlock.setFrame(0);}

        if(playerPC.state==BlockDuck){
            if (playerPC.Anim.RBlockDuck.getFrame()== (playerPC.Anim.RBlockDuckbase.svsNumFrames) - 1){
                playerPC.Anim.RBlockDuck.stopAnim();
            }
            else if (playerPC.Anim.LBlockDuck.getFrame()== (playerPC.Anim.LBlockDuckbase.svsNumFrames) - 1){
                playerPC.Anim.LBlockDuck.stopAnim();
            }
        }
        else{ playerPC.Anim.RBlockDuck.startAnim(); playerPC.Anim.RBlockDuck.setFrame(0);
            playerPC.Anim.LBlockDuck.startAnim();} playerPC.Anim.LBlockDuck.setFrame(0);
        /////BOT//////////////////////////////////////BOT//////////////////////////////////////////BOT

        if(playerBOT.state==Duck){
            if (playerBOT.Anim.RDuck.getFrame()== (playerBOT.Anim.RDuckbase.svsNumFrames) - 1){
                playerBOT.Anim.RDuck.stopAnim();
            }
            else if (playerBOT.Anim.LDuck.getFrame()== (playerBOT.Anim.LDuckbase.svsNumFrames) - 1){
                playerBOT.Anim.LDuck.stopAnim();
            }
        }
        else{ playerBOT.Anim.RDuck.startAnim(); playerBOT.Anim.RDuck.setFrame(0);
                playerBOT.Anim.LDuck.startAnim();playerBOT.Anim.LDuck.setFrame(0);}

        if(playerBOT.state==Block){
            if (playerBOT.Anim.RBlock.getFrame()== (playerBOT.Anim.RBlockbase.svsNumFrames) - 1){
                playerBOT.Anim.RBlock.stopAnim();
            }
            else if (playerBOT.Anim.LBlock.getFrame()== (playerBOT.Anim.LBlockbase.svsNumFrames) - 1){
                playerBOT.Anim.LBlock.stopAnim();
            }
        }
        else{ playerBOT.Anim.RBlock.startAnim(); playerBOT.Anim.RBlock.setFrame(0);
            playerBOT.Anim.LBlock.startAnim(); playerBOT.Anim.LBlock.setFrame(0);}

        if(playerBOT.state==BlockDuck){
            if (playerBOT.Anim.RBlockDuck.getFrame()== (playerBOT.Anim.RBlockDuckbase.svsNumFrames) - 1){
                playerBOT.Anim.RBlockDuck.stopAnim();
            }
            else if (playerBOT.Anim.LBlockDuck.getFrame()== (playerBOT.Anim.LBlockDuckbase.svsNumFrames) - 1){
                playerBOT.Anim.LBlockDuck.stopAnim();
            }
        }
        else{ playerBOT.Anim.RBlockDuck.startAnim(); playerBOT.Anim.RBlockDuck.setFrame(0);
            playerBOT.Anim.LBlockDuck.startAnim();} playerBOT.Anim.LBlockDuck.setFrame(0);
         /////////////////////////////////////////////////////////////////////////////////////////////
        ////air
        if(playerPC.state==Jump || playerPC.state==JumpRight || playerPC.state==JumpLeft ||
           playerPC.state==JumpPunch || playerPC.state==JumpKick ||
           playerPC.state==JumpRightPunch || playerPC.state==JumpRightKick ||
           playerPC.state==JumpLeftPunch || playerPC.state==JumpLeftKick||
           playerPC.state == HitUppercut){
            Air();
            cadre=frame;
        }
		////////////////////////////////////////////////////////
		if(playerBOT.state==Jump || playerBOT.state==JumpRight || playerBOT.state==JumpLeft ||
           playerBOT.state==JumpPunch || playerBOT.state==JumpKick ||
           playerBOT.state==JumpRightPunch || playerBOT.state==JumpRightKick ||
           playerBOT.state==JumpLeftPunch || playerBOT.state==JumpLeftKick||
           playerBOT.state == HitUppercut){
            Air();
        }
        ///////// HIT!
        if(playerPC.state == HighPunch){
            if (playerPC.Anim.RHighPunch.getFrame()== (playerPC.Anim.RHighPunchbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RHighPunch.setFrame(0);
            }

            if (playerPC.Anim.RHighPunch.getFrame()== 4 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=6;
                playerBOT.state=HitHead;
                playerBOT.action=true;
            }

            if (playerPC.Anim.LHighPunch.getFrame()== (playerPC.Anim.LHighPunchbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LHighPunch.setFrame(0);
            }

            if (playerPC.Anim.LHighPunch.getFrame()== 4 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=6;
                playerBOT.state=HitHead;
                playerBOT.action=true;
            }
        }
        else if(playerPC.state == LowPunch){
            if (playerPC.Anim.RLowPunch.getFrame()== (playerPC.Anim.RLowPunchbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RLowPunch.setFrame(0);
            }

            if (playerPC.Anim.RLowPunch.getFrame()== 3 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=3;
                playerBOT.state=HitChest;
                playerBOT.action=true;
            }

            if (playerPC.Anim.LLowPunch.getFrame()== (playerPC.Anim.LLowPunchbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LLowPunch.setFrame(0);
            }

            if (playerPC.Anim.LLowPunch.getFrame()== 3 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=3;
                playerBOT.state=HitChest;
                playerBOT.action=true;
            }
        }
        else if(playerPC.state == HighKick){
            if (playerPC.Anim.RHighKick.getFrame()== (playerPC.Anim.RHighKickbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RHighKick.setFrame(0);
            }
            if (playerPC.Anim.RHighKick.getFrame()== 5 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=7;
                playerBOT.state=HitStrong;
                playerBOT.action=true;
            }
            if (playerPC.Anim.LHighKick.getFrame()== (playerPC.Anim.LHighKickbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LHighKick.setFrame(0);
            }
            if (playerPC.Anim.LHighKick.getFrame()== 5 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=7;
                playerBOT.state=HitStrong;
                playerBOT.action=true;
            }
        }
        else if(playerPC.state == LowKick){
            if (playerPC.Anim.RLowKick.getFrame()== (playerPC.Anim.RLowKickbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RLowKick.setFrame(0);
            }
            if (playerPC.Anim.RLowKick.getFrame()== 4 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=4;
                playerBOT.state=HitStrong;
                playerBOT.action=true;
            }
            if (playerPC.Anim.LLowKick.getFrame()== (playerPC.Anim.LLowKickbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LLowKick.setFrame(0);
            }
            if (playerPC.Anim.LLowKick.getFrame()== 4 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=4;
                playerBOT.state=HitStrong;
                playerBOT.action=true;
            }
        }
        else if(playerPC.state == Uppercut){
            if (playerPC.Anim.RUppercut.getFrame()== (playerPC.Anim.RUppercutbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RUppercut.setFrame(0);
            }
            if (playerPC.Anim.RUppercut.getFrame()== 3 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=9;
                playerBOT.state=HitUppercut;
                upBOT=true;
                playerBOT.action=true;
            }

            if (playerPC.Anim.LUppercut.getFrame()== (playerPC.Anim.LUppercutbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LUppercut.setFrame(0);
            }
            if (playerPC.Anim.LUppercut.getFrame()== 3 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                playerBOT.hp-=9;
                playerBOT.state=HitUppercut;
                upBOT=true;
                playerBOT.action=true;
            }
        }
        else if(playerPC.state == DuckKick){
            if (playerPC.Anim.RDuckKick.getFrame()== (playerPC.Anim.RDuckKickbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RDuckKick.setFrame(0);
            }
            if (playerPC.Anim.RDuckKick.getFrame()== 3 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                if(playerBOT.state==Duck){
                    playerBOT.hp-=5;
                    playerBOT.state=HitDuck;
                    playerBOT.action=true;
                }
                else{
                    playerBOT.hp-=5;
                    playerBOT.state=HitStrong;
                    playerBOT.action=true;
                }
            }
            if (playerPC.Anim.LDuckKick.getFrame()== (playerPC.Anim.RDuckKickbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LDuckKick.setFrame(0);
            }
            if (playerPC.Anim.LDuckKick.getFrame()== 3 && !playerBOT.action && abs(playerBOT.x-playerPC.x)<=50 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                if(playerBOT.state==Duck){
                    playerBOT.hp-=5;
                    playerBOT.state=HitDuck;
                    playerBOT.action=true;
                }
                else{
                    playerBOT.hp-=5;
                    playerBOT.state=HitStrong;
                    playerBOT.action=true;
                }
            }
        }
        else if(playerPC.state == JumpPunch || playerPC.state == JumpRightPunch || playerPC.state == JumpLeftPunch){
            if(!playerBOT.action && abs(playerBOT.x-playerPC.x)<=40 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                    playerBOT.hp-=4;
                    playerBOT.state=HitStrong;
                    playerBOT.action=true;
            }
        }
        else if(playerPC.state == JumpKick || playerPC.state == JumpRightKick || playerPC.state == JumpLeftKick){
            if(!playerBOT.action && abs(playerBOT.x-playerPC.x)<=40 &&
                playerBOT.state!=Block && playerBOT.state!=BlockDuck){
                    playerBOT.hp-=5;
                    playerBOT.state=HitStrong;
                    playerBOT.action=true;
            }
        }
        else if(playerPC.state==WalkingLeft || playerPC.state==WalkingRight ||
                playerPC.state==Block || playerPC.state==BlockDuck || playerPC.state==Duck){playerPC.state=FightingStance;}

        /////////////////////////////////////////////////////////////////////////////////////
		if(playerBOT.state == HighPunch){
            if (playerBOT.Anim.RHighPunch.getFrame()== (playerBOT.Anim.RHighPunchbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RHighPunch.setFrame(0);
            }

            if (playerBOT.Anim.RHighPunch.getFrame()== 4 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=6;
                playerPC.state=HitHead;
                playerPC.action=true;
            }

            if (playerBOT.Anim.LHighPunch.getFrame()== (playerBOT.Anim.LHighPunchbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LHighPunch.setFrame(0);
            }

            if (playerBOT.Anim.LHighPunch.getFrame()== 4 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=6;
                playerPC.state=HitHead;
                playerPC.action=true;
            }
        }
        else if(playerBOT.state == LowPunch){
            if (playerBOT.Anim.RLowPunch.getFrame()== (playerBOT.Anim.RLowPunchbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RLowPunch.setFrame(0);
            }

            if (playerBOT.Anim.RLowPunch.getFrame()== 3 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=3;
                playerPC.state=HitChest;
                playerPC.action=true;
            }

            if (playerBOT.Anim.LLowPunch.getFrame()== (playerBOT.Anim.LLowPunchbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LLowPunch.setFrame(0);
            }

            if (playerBOT.Anim.LLowPunch.getFrame()== 3 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=3;
                playerPC.state=HitChest;
                playerPC.action=true;
            }
        }
        else if(playerBOT.state == HighKick){
            if (playerBOT.Anim.RHighKick.getFrame()== (playerBOT.Anim.RHighKickbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RHighKick.setFrame(0);
            }
            if (playerBOT.Anim.RHighKick.getFrame()== 5 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=7;
                playerPC.state=HitStrong;
                playerPC.action=true;
            }
            if (playerBOT.Anim.LHighKick.getFrame()== (playerBOT.Anim.LHighKickbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LHighKick.setFrame(0);
            }
            if (playerBOT.Anim.LHighKick.getFrame()== 5 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=7;
                playerPC.state=HitStrong;
                playerPC.action=true;
            }
        }
        else if(playerBOT.state == LowKick){
            if (playerBOT.Anim.RLowKick.getFrame()== (playerBOT.Anim.RLowKickbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RLowKick.setFrame(0);
            }
            if (playerBOT.Anim.RLowKick.getFrame()== 4 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=4;
                playerPC.state=HitStrong;
                playerPC.action=true;
            }
            if (playerBOT.Anim.LLowKick.getFrame()== (playerBOT.Anim.LLowKickbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LLowKick.setFrame(0);
            }
            if (playerBOT.Anim.LLowKick.getFrame()== 4 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=4;
                playerPC.state=HitStrong;
                playerPC.action=true;
            }
        }
        else if(playerBOT.state == Uppercut){
            if (playerBOT.Anim.RUppercut.getFrame()== (playerBOT.Anim.RUppercutbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RUppercut.setFrame(0);
            }
            if (playerBOT.Anim.RUppercut.getFrame()== 3 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=9;
                playerPC.state=HitUppercut;
                upPC=true;
                playerPC.action=true;
            }

            if (playerBOT.Anim.LUppercut.getFrame()== (playerBOT.Anim.LUppercutbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LUppercut.setFrame(0);
            }
            if (playerBOT.Anim.LUppercut.getFrame()== 3 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                playerPC.hp-=9;
                playerPC.state=HitUppercut;
                upPC=true;
                playerPC.action=true;
            }
        }
        else if(playerBOT.state == DuckKick){
            if (playerBOT.Anim.RDuckKick.getFrame()== (playerBOT.Anim.RDuckKickbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RDuckKick.setFrame(0);
            }
            if (playerBOT.Anim.RDuckKick.getFrame()== 3 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                if(playerPC.state==Duck){
                    playerPC.hp-=5;
                    playerPC.state=HitDuck;
                    playerPC.action=true;
                }
                else{
                    playerPC.hp-=5;
                    playerPC.state=HitStrong;
                    playerPC.action=true;
                }
            }
            if (playerBOT.Anim.LDuckKick.getFrame()== (playerBOT.Anim.RDuckKickbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LDuckKick.setFrame(0);
            }
            if (playerBOT.Anim.LDuckKick.getFrame()== 3 && !playerPC.action && abs(playerPC.x-playerBOT.x)<=50 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                if(playerPC.state==Duck){
                    playerPC.hp-=5;
                    playerPC.state=HitDuck;
                    playerPC.action=true;
                }
                else{
                    playerPC.hp-=5;
                    playerPC.state=HitStrong;
                    playerPC.action=true;
                }
            }
        }
        else if(playerBOT.state == JumpPunch || playerBOT.state == JumpRightPunch || playerBOT.state == JumpLeftPunch){
            if(!playerPC.action && abs(playerPC.x-playerBOT.x)<=40 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                    playerPC.hp-=4;
                    playerPC.state=HitStrong;
                    playerPC.action=true;
            }
        }
        else if(playerBOT.state == JumpKick || playerBOT.state == JumpRightKick || playerBOT.state == JumpLeftKick){
            if(!playerPC.action && abs(playerPC.x-playerBOT.x)<=40 &&
                playerPC.state!=Block && playerPC.state!=BlockDuck){
                    playerPC.hp-=5;
                    playerPC.state=HitStrong;
                    playerPC.action=true;
            }
        }
        else if(playerBOT.state==WalkingLeft || playerBOT.state==WalkingRight ||
                playerBOT.state==Block || playerBOT.state==BlockDuck || playerBOT.state==Duck){playerBOT.state=FightingStance;}
//////////////////////////////////////////////////////////////
/////////////////////HIT
        if(playerPC.state==HitHead){
            if (playerPC.Anim.LHitHead.getFrame()== (playerPC.Anim.LHitHeadbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LHitHead.setFrame(0);
            }
            if (playerPC.Anim.RHitHead.getFrame()== (playerPC.Anim.RHitHeadbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RHitHead.setFrame(0);
            }
        }
        else{playerPC.Anim.LHitHead.startAnim();playerPC.Anim.RHitHead.startAnim();}

        if(playerPC.state==HitChest){
            if (playerPC.Anim.LHitChest.getFrame()== (playerPC.Anim.LHitChestbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LHitChest.setFrame(0);
            }
            if (playerPC.Anim.RHitChest.getFrame()== (playerPC.Anim.RHitChestbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RHitChest.setFrame(0);
            }
        }
        else{playerPC.Anim.LHitChest.startAnim();playerPC.Anim.RHitChest.startAnim();}

        if(playerPC.state==HitStrong){
            if(playerPC.side==RIGHT && playerPC.x-1>0){
                playerPC.x--;
            }
            else if(playerPC.side==LEFT && playerPC.x+1<350){
                playerPC.x++;
            }
            if (playerPC.Anim.RHitStrong.getFrame()== (playerPC.Anim.RHitStrongbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RHitStrong.setFrame(0);
            }
            if (playerPC.Anim.LHitStrong.getFrame()== (playerPC.Anim.LHitStrongbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LHitStrong.setFrame(0);
            }
        }
        else{playerPC.Anim.LHitStrong.startAnim();playerPC.Anim.RHitStrong.startAnim();}

        if(playerPC.state==HitDuck){
            if (playerPC.Anim.LHitDuck.getFrame()== (playerPC.Anim.LHitDuckbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.LHitDuck.setFrame(0);
            }
            if (playerPC.Anim.RHitDuck.getFrame()== (playerPC.Anim.RHitDuckbase.svsNumFrames) - 1){
                playerPC.state=FightingStance;
                playerPC.action=false;
                playerPC.Anim.RHitDuck.setFrame(0);
            }
        }
        else{playerPC.Anim.LHitDuck.startAnim();playerPC.Anim.RHitDuck.startAnim();}

        //////BOT/////BOT///BOT///BOT////BOT/////BOT/////BOT///////BOT////BOT/////vBOT///////////////////////////////////////


        if(playerBOT.state==HitHead){
            if (playerBOT.Anim.LHitHead.getFrame()== (playerBOT.Anim.LHitHeadbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LHitHead.setFrame(0);
            }
            if (playerBOT.Anim.RHitHead.getFrame()== (playerBOT.Anim.RHitHeadbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RHitHead.setFrame(0);
            }
        }
        else{playerBOT.Anim.LHitHead.startAnim();playerBOT.Anim.RHitHead.startAnim();}

        if(playerBOT.state==HitChest){
            if (playerBOT.Anim.LHitChest.getFrame()== (playerBOT.Anim.LHitChestbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LHitChest.setFrame(0);
            }
            if (playerBOT.Anim.RHitChest.getFrame()== (playerBOT.Anim.RHitChestbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RHitChest.setFrame(0);
            }
        }
        else{playerBOT.Anim.LHitChest.startAnim();playerBOT.Anim.RHitChest.startAnim();}

        if(playerBOT.state==HitStrong){
            if(playerBOT.side==RIGHT && playerBOT.x-1>0){
                playerBOT.x--;
            }
            else if(playerBOT.side==LEFT && playerBOT.x+1<350){
                playerBOT.x++;
            }
            if (playerBOT.Anim.RHitStrong.getFrame()== (playerBOT.Anim.RHitStrongbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RHitStrong.setFrame(0);
            }
            if (playerBOT.Anim.LHitStrong.getFrame()== (playerBOT.Anim.LHitStrongbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LHitStrong.setFrame(0);
            }
        }
        else{playerBOT.Anim.LHitStrong.startAnim();playerBOT.Anim.RHitStrong.startAnim();}

        if(playerBOT.state==HitDuck){
            if (playerBOT.Anim.LHitDuck.getFrame()== (playerBOT.Anim.LHitDuckbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.LHitDuck.setFrame(0);
            }
            if (playerBOT.Anim.RHitDuck.getFrame()== (playerBOT.Anim.RHitDuckbase.svsNumFrames) - 1){
                playerBOT.state=FightingStance;
                playerBOT.action=false;
                playerBOT.Anim.RHitDuck.setFrame(0);
            }
        }
        else{playerBOT.Anim.LHitDuck.startAnim();playerBOT.Anim.RHitDuck.startAnim();}
/////////////////////////////////////////////////////////////////////////////////////////////////////////
        while ( SDL_PollEvent(&event) ){
            if ( event.type == SDL_QUIT ){ exit(1); }
            if ( event.type == SDL_KEYDOWN && !playerPC.action ){
                if ( event.key.keysym.sym == SDLK_ESCAPE ){ exit(1);  }
            }
        }

        keys = SDL_GetKeyState(NULL);
        if(!playerPC.action){
            if(keys[SDLK_LEFT] && !keys[SDLK_RIGHT]){playerPC.state=WalkingLeft;}
            if(keys[SDLK_RIGHT] && !keys[SDLK_LEFT]){playerPC.state=WalkingRight;}
            if(keys[SDLK_q] || keys[SDLK_w]){playerPC.state=Block;}
            if(keys[SDLK_DOWN]){playerPC.state=Duck;}

            if(keys[SDLK_a] && !playerPC.active.HighPunch){playerPC.state=HighPunch; playerPC.action=true; playerPC.active.HighPunch=true;}
            else if(!keys[SDLK_a]){playerPC.active.HighPunch=false;}

            if(keys[SDLK_z] && !playerPC.active.LowPunch){playerPC.state=LowPunch; playerPC.action=true; playerPC.active.LowPunch=true;}
            else if(!keys[SDLK_z]){playerPC.active.LowPunch=false;}

            if(keys[SDLK_s] && !playerPC.active.HighKick){playerPC.state=HighKick; playerPC.action=true; playerPC.active.HighKick=true;}
            else if(!keys[SDLK_s]){playerPC.active.HighKick=false;}

            if(keys[SDLK_x] && !playerPC.active.LowKick){playerPC.state=LowKick; playerPC.action=true; playerPC.active.LowKick=true;}
            else if(!keys[SDLK_x]){playerPC.active.LowKick=false;}

            if((keys[SDLK_q] || keys[SDLK_w]) && keys[SDLK_DOWN]){playerPC.state=BlockDuck; }
            if(keys[SDLK_UP] && frame-cadre>40){playerPC.state=Jump; upPC=true;playerPC.action=true;}
            if(keys[SDLK_UP] && keys[SDLK_RIGHT] && frame-cadre>40){playerPC.state=JumpRight;playerPC.action=true;}
            if(keys[SDLK_UP] && keys[SDLK_LEFT] && frame-cadre>40){playerPC.state=JumpLeft;playerPC.action=true;}

            if(keys[SDLK_DOWN] && (keys[SDLK_a] || keys[SDLK_z]) && !playerPC.active.Uppercut){playerPC.state=Uppercut;playerPC.action=true; playerPC.active.Uppercut=true;}
            else if(!keys[SDLK_DOWN] || (!keys[SDLK_a] && !keys[SDLK_z])){playerPC.active.Uppercut=false;}

            if(keys[SDLK_DOWN] && (keys[SDLK_s] || keys[SDLK_x]) && !playerPC.active.DuckKick){playerPC.state=DuckKick;playerPC.action=true; playerPC.active.DuckKick=true;}
            else if(!keys[SDLK_DOWN] || (!keys[SDLK_s] && !keys[SDLK_x])){playerPC.active.DuckKick=false;}
        }
        else if(playerPC.state==Jump || playerPC.state==JumpRight || playerPC.state==JumpLeft){
            if(keys[SDLK_a] || keys[SDLK_z]){if(playerPC.state==Jump){playerPC.state=JumpPunch;}
                                            else if(playerPC.state==JumpRight){playerPC.state=JumpRightPunch;}
                                            else if(playerPC.state==JumpLeft){playerPC.state=JumpLeftPunch;}
            }

            if(keys[SDLK_s] || keys[SDLK_x]){if(playerPC.state==Jump){playerPC.state=JumpKick;}
                                            else if(playerPC.state==JumpRight){playerPC.state=JumpRightKick;}
                                            else if(playerPC.state==JumpLeft){playerPC.state=JumpLeftKick;}
            }
        }

        if(!playerBOT.action){
               botAction(level);
        }

        if(playerPC.state==WalkingLeft){
                if(playerPC.x>0){
                        if(playerPC.side==LEFT  && (playerPC.x - playerBOT.x)>40){playerPC.x-=3; }
                        else if(playerPC.side==RIGHT){playerPC.x-=3; }
                }
        }
        else if(playerPC.state==WalkingRight){
                if(playerPC.x<350){
                        if(playerPC.side==RIGHT  && (playerBOT.x - playerPC.x)>40){playerPC.x+=3; }
                        else if(playerPC.side==LEFT){playerPC.x+=3; }
                }
        }

        if(playerBOT.state==WalkingLeft){
                if(playerBOT.x>0){
                        if(playerBOT.side==LEFT  && (playerBOT.x - playerPC.x)>40){playerBOT.x-=3; }
                        else if(playerBOT.side==RIGHT){playerBOT.x-=3; }
                }
        }
        else if(playerBOT.state==WalkingRight){
                if(playerBOT.x<350){
                        if(playerBOT.side==RIGHT  && (playerPC.x - playerBOT.x)>40){playerBOT.x+=3;}
                        else if(playerBOT.side==LEFT){playerBOT.x+=3; }
                }
        }
        PlayerMove();
        if(playerPC.hp<=0){playerPC.hp=0; playerPC.state=Fail; playerBOT.state=Win;
                            playerBOT.action=true;playerPC.action=true;}
        if(playerBOT.hp<=0){playerBOT.hp=0; playerBOT.state=Fail; playerPC.state=Win;
                            playerPC.action=true;playerBOT.action=true;}
        DrawScene(screen,pit);
        if(playerPC.state == Win){
            if(playerPC.Anim.RWin.getFrame()== (playerPC.Anim.RWinbase.svsNumFrames) - 1){return 1;}
            else if(playerPC.Anim.LWin.getFrame()== (playerPC.Anim.LWinbase.svsNumFrames) - 1){return 1;}
        }
        else if(playerBOT.state == Win){
            if(playerBOT.Anim.RWin.getFrame()== (playerBOT.Anim.RWinbase.svsNumFrames) - 1){return 0;}
            else if(playerBOT.Anim.LWin.getFrame()== (playerBOT.Anim.LWinbase.svsNumFrames) - 1){return 0;}
        }

        if(playerPC.state==Fail){
            if(playerPC.Anim.RFail.getFrame()== (playerPC.Anim.RFailbase.svsNumFrames) - 1){
                playerPC.Anim.RFail.stopAnim();
            }
            else if(playerPC.Anim.LFail.getFrame()== (playerPC.Anim.LFailbase.svsNumFrames) - 1){
                playerPC.Anim.LFail.stopAnim();
            }
        }
        else if(playerBOT.state==Fail){
            if(playerBOT.Anim.RFail.getFrame()== (playerBOT.Anim.RFailbase.svsNumFrames) - 1){
                playerBOT.Anim.RFail.stopAnim();
            }
            else if(playerBOT.Anim.LFail.getFrame()== (playerBOT.Anim.LFailbase.svsNumFrames) - 1){
                playerBOT.Anim.LFail.stopAnim();
            }
        }

        frame++;
        //If we want to cap the frame rate
        if( ( cap == true ) && ( fps.get_ticks() < 1000 / FRAMES_PER_SECOND ) )
        {
            //Sleep the remaining frame time
            SDL_Delay( ( 1000 / FRAMES_PER_SECOND ) - fps.get_ticks() );
        }
    }
}
