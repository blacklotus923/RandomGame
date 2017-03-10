#pragma once

class Vect2
{
public:
	Vect2() = default;
	Vect2(const float in_x, const float in_y);

	bool operator==(const Vect2& _in);
	bool operator!=(const Vect2& _in);

	Vect2 operator+(const Vect2& _in) const;
	Vect2& operator+=(const Vect2& _in);

	Vect2 operator-(const Vect2& _in) const;
	Vect2& operator-=(const Vect2& _in);

	Vect2 operator*(const float _in) const;
	Vect2& operator*=(const float _in);

	Vect2 operator/(const float _in) const;
	Vect2& operator/=(const float _in);

	float GetLength() const;
	float GetLengthSq() const;

	Vect2& Normalize();
	Vect2 GetNormalized() const;


	~Vect2();
public:
	float x;
	float y;
};

