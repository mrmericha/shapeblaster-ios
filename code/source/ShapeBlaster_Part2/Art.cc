#include "Utility/package.h"

#include "package.h"

//---------------------------------------------------------------------------------
// Written by Terence J. Grant - tjgrant [at] tatewake [dot] com
// Find the full tutorial at: http://gamedev.tutsplus.com/series/
//----------------------------------------------------------------------------------

Art::Art()
{
    mPlayer         = new tTexture(tSurface("player.png"));
    mSeeker         = new tTexture(tSurface("seeker.png"));
    mWanderer       = new tTexture(tSurface("wanderer.png"));
    mBullet         = new tTexture(tSurface("bullet.png"));
    mPointer        = new tTexture(tSurface("pointer.png"));

    mFontTexture    = new tTexture(tSurface("font.png"));
}

tTexture* Art::getPlayer() const
{
    return mPlayer;
}

tTexture* Art::getSeeker() const
{
    return mSeeker;
}

tTexture* Art::getWanderer() const
{
    return mWanderer;
}

tTexture* Art::getBullet() const
{
    return mBullet;
}

tTexture* Art::getPointer() const
{
    return mPointer;
}

tSpriteFont Art::getFont() const
{
    return tSpriteFont(mFontTexture, tTextSheet(tRectf(   0,   0, 256,  36), tDimension2f(   8,  12), tDimension2f(6, 10), ' ', '~'));
}

