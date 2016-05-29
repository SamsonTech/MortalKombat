// svssprite.cxx - SV Sprite System class
// operating animating sprites.
//
// bbroth@pochta.ru
//

#include "svssprite.h"

//---------------------------------------------
int svsSprite::init(svsBase *base, SDL_Surface *screen)
{
  svsSpriteBase = base;
  if(svsSpriteBase->svsNumFrames>1) svsAnimating=1;
    svsBackreplacement = SDL_DisplayFormat(svsSpriteBase->svsAnim[0].image);
  svsScreen = screen;
  return 0;
}

//---------------------------------------------
void svsSprite::clearBG()
{
  if(svsDrawn==1)
  {
    SDL_Rect dest;
    dest.x = svsOldX;
    dest.y = svsOldY;
    dest.w = svsSpriteBase->svsW;
    dest.h = svsSpriteBase->svsH;
    SDL_BlitSurface(svsBackreplacement, NULL, svsScreen, &dest);
  }
}

//---------------------------------------------
void svsSprite::updateBG()
{
  SDL_Rect srcrect;
  srcrect.w = svsSpriteBase->svsW;
  srcrect.h = svsSpriteBase->svsH;
  srcrect.x = svsX;
  srcrect.y = svsY;
  svsOldX=svsX;
  svsOldY=svsY;
  SDL_BlitSurface(svsScreen, &srcrect, svsBackreplacement, NULL);
}

//---------------------------------------------
void svsSprite::draw()
{
  if(svsAnimating == 1)
  {
    if(svsLastupdate+svsSpriteBase->svsPause*svsSpeed < SDL_GetTicks())
    {
      svsFrame++;
      if(svsFrame>svsSpriteBase->svsNumFrames-1) svsFrame=0;
      svsLastupdate = SDL_GetTicks();
    }
  }

  if(svsDrawn==0) svsDrawn=1;

  SDL_Rect dest;
  dest.x = svsX; dest.y = svsY;
  SDL_BlitSurface(svsSpriteBase->svsAnim[svsFrame].image, NULL, svsScreen, &dest);
}
