#pragma once

#include "Graphics.h"
#include "Dude.h"
#include "Vect2.h"

class Poo
{
public:
	void Init( Vect2 _pos, Vect2 _vel );
	void Update(float dt);
	bool TestCollision( const Dude& dude ) const;
	void Draw( Graphics& gfx ) const;
private:
	Vect2 pos;
	Vect2 vel;
	static constexpr float width = 24.0f;
	static constexpr float height = 24.0f;
	bool initialized = false;
};