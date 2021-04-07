#include "vector2.h"
#include "matrix2.h"
#include <cmath>

namespace door
{

Vector2 Vector2::Normalized() const
{
	float inv_sqrt = 1.f / std::sqrt(SqLength());
	return {x * inv_sqrt, y * inv_sqrt};
}

Vector2& Vector2::Rotate(float theta)
{
	*this = Matrix2(theta) * *this;
}

Vector2 Vector2::Rotated(float theta) const
{
	return Matrix2(theta) * *this;
}

Vector2& Vector2::operator+=(const Vector2& b)
{
	x += b.x;
	y += b.y;
	return *this;
}

Vector2& Vector2::operator-=(const Vector2& b)
{
	x -= b.x;
	y -= b.y;
	return *this;
}

Vector2& Vector2::operator*=(const Vector2& b)
{
	x *= b.x;
	y *= b.y;
	return *this;
}

Vector2& Vector2::operator*=(float s)
{
	x *= s;
	y *= s;
	return *this;
}

}  // namespace door
