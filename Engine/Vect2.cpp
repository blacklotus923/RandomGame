#include "Vect2.h"
#include <cmath>

Vect2::Vect2()
{
}


Vect2::~Vect2()
{
}

Vect2::Vect2(const float in_x, const float in_y)
{
	x = in_x;
	y = in_y;
}

bool Vect2::operator==(const Vect2 & _in)
{
	return (x==_in.x && y==_in.y);
}

bool Vect2::operator!=(const Vect2 & _in)
{
	return (x != _in.x && y != _in.y);
}

Vect2 Vect2::operator+(const Vect2 & _in) const
{
	return Vect2(x+_in.x, y+_in.y);
}

Vect2 & Vect2::operator+=(const Vect2 & _in)
{
	return *this = *this + _in;
}

Vect2 Vect2::operator-(const Vect2 & _in) const
{
	return Vect2(x - _in.x, y - _in.y);
}

Vect2 & Vect2::operator-=(const Vect2 & _in)
{
	return *this = *this - _in;
}

Vect2 Vect2::operator*(const float _in) const
{
	return Vect2(x*_in, y*_in);
}

Vect2 & Vect2::operator*=(const float _in)
{
	return *this = *this * _in;
}

Vect2 Vect2::operator/(const float _in) const
{
	if(_in!=0.0f) return Vect2(x/_in, y/_in);
	else return Vect2(x,y);
}

Vect2 & Vect2::operator/=(const float _in)
{
	return *this = *this / _in;
}

float Vect2::GetLength() const
{
	return std::sqrt(GetLengthSq());
}

float Vect2::GetLengthSq() const
{
	return (x*x) + (y*y);
}

Vect2 & Vect2::Normalize()
{
	return *this = GetNormalized();
}

Vect2 Vect2::GetNormalized() const
{
	const float l = GetLength();
	if (l != 0.0f)	return *this * (1.0f / l);
	else return *this;
}
