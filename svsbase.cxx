// svsbase.cxx - SV Sprite System Base class
// load animating sprites from single bmp.
//
// bbroth@pochta.ru
//
#include <stdio.h>
#include "svsbase.h"


int svsBase::init(svsInit* data)
{
  int r, g, b;
  r = data->r;
  g = data->g;
  b = data->b;

  svsPause = data->pause;
  svsNumFrames = data->numFrames;

  svsAnim = new svsFrame[svsNumFrames];

  SDL_Surface *temp;
  if((temp=SDL_LoadBMP(data->bmpFile))==NULL) return -1;
  svsW = temp->w;
  svsH = temp->h/svsNumFrames;

  SDL_Rect srcr;
  srcr.x = 0;
  srcr.y = 0;
  srcr.w = svsW;
  srcr.h = svsH;


  SDL_Surface *temp1;
  Uint32 rmask, gmask, bmask, amask;
  #if SDL_BYTEORDER == SDL_BIG_ENDIAN
    rmask = 0xff000000;
    gmask = 0x00ff0000;
    bmask = 0x0000ff00;
    amask = 0x000000ff;
  #else
    rmask = 0x000000ff;
    gmask = 0x0000ff00;
    bmask = 0x00ff0000;
    amask = 0xff000000;
  #endif
  temp1 = SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_SRCCOLORKEY, svsW, svsH, 32,
                                   rmask, gmask, bmask, amask);
  if(temp1 == NULL) {
      fprintf(stderr, "CreateRGBSurface temp1 failed: %s\n", SDL_GetError());
      return -1;
  }


  for(int i=0; i<svsNumFrames; i++){
    srcr.y = i*svsH;
    SDL_BlitSurface(temp,&srcr,temp1,NULL);

    if(r>=0 && g>=0 && b>=0)
      SDL_SetColorKey(temp1,SDL_SRCCOLORKEY,SDL_MapRGB(temp1->format,r,g,b));

    svsAnim[i].image = SDL_DisplayFormat(temp1);
  }

  SDL_FreeSurface(temp1);
  SDL_FreeSurface(temp);
  return 0;
}
//-----------------------------------
