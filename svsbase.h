// svsbase.h - SV Sprite System Base class
// load animating sprites from single bmp.
//
// bbroth@pochta.ru
//

#ifndef __SVSBASE_H__
#define __SVSBASE_H__

#include "SDL.h"

struct svsInit
{
  char* bmpFile;
  int numFrames;
  int pause;
  int r;
  int g;
  int b;
};

struct svsFrame
{
  SDL_Surface* image;
};

class svsBase
{
  public:
  int init(svsInit* data);
  
  svsFrame* svsAnim;
  int svsPause;
  int svsNumFrames;
  int svsW, svsH;
};


#endif //__SVSBASE_H__
