#include "vector.h"

#include <cmath>

Vector::Vector(float x_, float y_)
		: x(x_), y(y_)
	{}

float Vector::SqLength() const
{
	return x*x + y*y;
}

float Vector::Dot(const Vector& vect) const
{
	return x * vect.x + y * vect.y;
}

Vector Vector::Normalize() const
{
	float inv_sqrt = 1.f / std::sqrt(SqLength());
	return {x * inv_sqrt, y * inv_sqrt};
}

Vector Vector::operator+(const Vector& other) const
{
	return {x + other.x, y + other.y};
}

Vector& Vector::operator+=(const Vector& other)
{
	x += other.x;
	y += other.y;
	return *this;
}

Vector Vector::operator-(const Vector& other) const
{
	return {x - other.x, y - other.y};
}

Vector& Vector::operator-=(const Vector& other)
{
	x -= other.x;
	y -= other.y;
	return *this;
}

Vector Vector::operator*(const Vector& other) const
{
	return {x * other.x, y * other.y};
}

Vector& Vector::operator*=(const Vector& other)
{
	x *= other.x;
	y *= other.y;
	return *this;
}

Vector& Vector::operator*=(float scalar)
{
	x *= scalar;
	y *= scalar;
	return *this;
}

Vector Vector::operator*(float scalar) const
{
	return {scalar * x, scalar * y};
}

Vector operator*(float scalar, const Vector& vect)
{
	return vect * scalar;
}
