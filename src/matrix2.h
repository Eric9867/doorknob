#ifndef MATRIX2_H_
#define MATRIX2_H_

#include "vector2.h"

namespace door
{
class Matrix2 final
{
public:
	Matrix2() = default;
	Matrix2(float a, float b, float c, float d);
	/* counterclockwise rotation matrix */
	Matrix2(float theta);

	Matrix2 operator+(const Matrix2& other) const;
	Matrix2& operator+=(const Matrix2& other);
	Matrix2 operator*(float scalar) const;
	Matrix2 operator*(const Matrix2& other) const;
	Matrix2& operator*=(float scalar);
	Vector2 operator*(const Vector2& vect) const;

private:
	float m_data[2][2]{{}, {}};
};

Matrix2 operator*(float scalar, const Matrix2& matrix);

}  // namespace door

#endif /* MATRIX2_H_ */
