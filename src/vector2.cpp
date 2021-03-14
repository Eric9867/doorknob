#include "vector2.h"
#include <cmath>

namespace door
{

Vector2::Vector2(float x_, float y_)
		: x(x_), y(y_)
	{}

float Vector2::SqLength() const
{
	return x*x + y*y;
}

float Vector2::Dot(const Vector2& vect) const
{
	return x * vect.x + y * vect.y;
}

Vector2 Vector2::Normalize() const
{
	float inv_sqrt = 1.f / std::sqrt(SqLength());
	return {x * inv_sqrt, y * inv_sqrt};
}

Vector2 Vector2::operator+(const Vector2& other) const
{
	return {x + other.x, y + other.y};
}

Vector2& Vector2::operator+=(const Vector2& other)
{
	x += other.x;
	y += other.y;
	return *this;
}

Vector2 Vector2::operator-(const Vector2& other) const
{
	return {x - other.x, y - other.y};
}

Vector2& Vector2::operator-=(const Vector2& other)
{
	x -= other.x;
	y -= other.y;
	return *this;
}

Vector2 Vector2::operator*(const Vector2& other) const
{
	return {x * other.x, y * other.y};
}

Vector2& Vector2::operator*=(const Vector2& other)
{
	x *= other.x;
	y *= other.y;
	return *this;
}

Vector2& Vector2::operator*=(float scalar)
{
	x *= scalar;
	y *= scalar;
	return *this;
}

Vector2 Vector2::operator*(float scalar) const
{
	return {scalar * x, scalar * y};
}

Vector2 operator*(float scalar, const Vector2& vect)
{
	return vect * scalar;
}

} // namespace door
