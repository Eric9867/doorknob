#ifndef VECTOR2_H_
#define VECTOR2_H_

namespace door
{
class Vector2 final
{
public:
	Vector2() = default;
	explicit Vector2(float s) : x(s), y(s) {}
  Vector2(float x_, float y_) : x(x_), y(y_) {}
  Vector2(float* arr) : x(arr[0]), y(arr[1]) {}

	float SqLength() const { return Dot(*this); }
  float SqDistanceTo(const Vector2& v) const { return (v - *this).SqLength(); }
	float Dot(const Vector2& b) const { return x * b.x + y * b.y; }

	Vector2 Normalized() const;
  Vector2& Normalize() { return *this = Normalized(); }

  Vector2 operator-() const { return {-x, -y}; }

  Vector2& operator+=(const Vector2& b)
  {
    x += b.x;
    y += b.y;
    return *this;
  }

  Vector2& operator-=(const Vector2& b)
  {
    x -= b.x;
    y -= b.y;
    return *this;
  }

  Vector2& operator*=(const Vector2& b)
  {
    x *= b.x;
    y *= b.y;
    return *this;
  }

  Vector2& operator*=(float s)
  {
    x *= s;
    y *= s;
    return *this;
  }

  friend Vector2 operator+(Vector2 a, const Vector2& b) { return {a.x + b.x, a.y + b.y}; }
  friend Vector2 operator-(Vector2 a, const Vector2& b) { return {a.x - b.x, a.y - b.y}; }
  friend Vector2 operator*(Vector2 a, const Vector2& b) { return {a.x * b.x, a.y * b.y}; }
  friend Vector2 operator*(Vector2 v, float s) { return {v.x * s, v.y * s}; }

	float x = 0.f;
	float y = 0.f;
};
}  // namespace door

#endif  // VECTOR2_H_
