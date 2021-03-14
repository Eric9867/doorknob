#ifndef VECTOR2_H_
#define VECTOR2_H_

namespace door
{
class Vector2 final
{
public:
	Vector2() = default;
	Vector2(float x_, float y_);

	float SqLength() const;
	float Dot(const Vector2& vect) const;
	Vector2 Normalize() const;

	Vector2 operator+(const Vector2& other) const;
	Vector2& operator+=(const Vector2& other);
	Vector2 operator-(const Vector2& other) const;
	Vector2& operator-=(const Vector2& other);
	Vector2 operator*(const Vector2& other) const;
	Vector2& operator*=(const Vector2& other);
	Vector2 operator*(float scalar) const;
	Vector2& operator*=(float scalar);

	float x = 0;
	float y = 0;
};

Vector2 operator*(float scalar, const Vector2& vect);

}  // namespace door

#endif  // VECTOR2_H_
