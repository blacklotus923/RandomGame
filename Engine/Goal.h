#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vect2.h"

class Goal
{
public:
	Goal( Vect2 _pos )
		:
		pos(_pos)
	{}
	void Draw( Graphics& gfx ) const
	{
		gfx.DrawRectDim((int)pos.x, (int)pos.y,dimension,dimension,c );
	}
	bool TestCollision( const Dude& dude ) const
	{
		const int duderight = (int)dude.GetPos().x + (int)dude.GetWidth();
		const int dudebottom = (int)dude.GetPos().y + (int)dude.GetHeight();
		const int pooright = (int)pos.x + dimension;
		const int poobottom = (int)pos.y + dimension;

		return
			duderight >= (int)pos.x &&
			(int)dude.GetPos().x <= pooright &&
			dudebottom >= (int)pos.y &&
			(int)dude.GetPos().y <= poobottom;
	}
	void Respawn( Vect2 _pos )
	{
		pos = _pos;
	}
	void UpdateColor()
	{
		if( colorIncreasing )
		{
			if( c.GetR() >= 253 )
			{
				colorIncreasing = false;
			}
			else
			{
				c = Color( c.GetR() + 2,c.GetG() + 4,c.GetB() + 4 );
			}
		}
		else
		{
			if( c.GetR() <= 127 )
			{
				colorIncreasing = true;
			}
			else
			{
				c = Color( c.GetR() - 2,c.GetG() - 4,c.GetB() - 4 );
			}
		}
	}
private:
	static constexpr int dimension = 20;
	Color c = { 127,0,0 };
	bool colorIncreasing = true;
	Vect2 pos;
};