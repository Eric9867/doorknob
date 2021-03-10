#ifndef VECTOR_H_
#define VECTOR_H_

class Vector final
{
public:
	Vector() = default;
	Vector(float x_, float y_);

	float SqLength() const;
	float Dot(const Vector& vect) const;
	Vector Normalize() const;

	Vector operator+(const Vector& other) const;
	Vector& operator+=(const Vector& other);
	Vector operator-(const Vector& other) const;
	Vector& operator-=(const Vector& other);
	Vector operator*(const Vector& other) const;
	Vector& operator*=(const Vector& other);
	Vector operator*(float scalar) const;
	Vector& operator*=(float scalar);

	float x = 0;
	float y = 0;
};

Vector operator*(float scalar, const Vector& vect);

#endif  // VECTOR_H_
