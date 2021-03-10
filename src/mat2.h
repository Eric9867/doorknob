#ifndef MAT2_H_
#define MAT2_H_

#include "vector.h"

class Mat2 final
{
public:
	Mat2() = default;
	Mat2(float a, float b, float c, float d);

	Mat2 operator+(const Mat2& other) const;
	Mat2& operator+=(const Mat2& other);
	Mat2 operator*(float scalar) const;
	Mat2 operator*(const Mat2& other) const;
	Mat2& operator*=(float scalar);
	Vector operator*(const Vector& vect) const;

private:
	float m_data[2][2]{{}, {}};
};

Mat2 operator*(float scalar, const Mat2& matrix);

#endif /* MAT2_H_ */
