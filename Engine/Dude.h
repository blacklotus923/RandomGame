#pragma once

#include "Graphics.h"
#include "Mouse.h"
#include "Vect2.h"

class Dude
{
public:
	void ClampToScreen();
	void Draw( Graphics& gfx ) const;
	void Update( const Mouse& mouse, float dt );
	Vect2 GetPos() const;
	float GetWidth() const;
	float GetHeight() const;
private:
	Vect2 pos = { Graphics::ScreenWidth / 2, Graphics::ScreenHeight / 2 };
	static constexpr float speed = 60.0f;
	static constexpr float width = 20.0f;
	static constexpr float height = 20.0f;
};