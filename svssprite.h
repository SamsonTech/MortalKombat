// svssprite.h - SV Sprite System class
// operating animating sprites.
//
// bbroth@pochta.ru
//

#ifndef __SVSSPRITE_H__
#define __SVSSPRITE_H__

#include "svsbase.h"
#include "SDL.h"

class svsSprite
{
  public:
  svsSprite(){}
  ~svsSprite(){}

  int init(svsBase *base, SDL_Surface *screen);
  void draw();

  void clearBG();
  void updateBG();

  void setFrame(int nr) { svsFrame = nr; }
  int getFrame() { return svsFrame; }

  void setSpeed(float nr) { svsSpeed = nr; }
  float getSpeed() { return svsSpeed; }

  void toggleAnim() { svsAnimating = !svsAnimating; }
  void startAnim() { svsAnimating = 1; }
  void stopAnim() {svsAnimating = 0; }
  void rewind() {svsFrame = 0; }

  void xadd(int nr) { svsX+=nr; }
  void yadd(int nr) { svsY+=nr; }
  void xset(int nr) { svsX=nr; }
  void yset(int nr) { svsY=nr; }
  void set(int xx, int yy) { svsX=xx; svsY=yy; }

  private:
  int svsFrame;
  int svsX, svsY, svsOldX, svsOldY;
  int svsAnimating;
  int svsDrawn;
  float svsSpeed;
  long svsLastupdate;
  svsBase *svsSpriteBase;
  SDL_Surface *svsBackreplacement;
  SDL_Surface *svsScreen;
};


#endif //__SVSSPRITE_H__
