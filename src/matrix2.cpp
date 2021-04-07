#include <cmath>
#include "matrix2.h"
#include "vector2.h"

namespace door
{
Matrix2::Matrix2(float a, float b, float c, float d): m_data{{a, b}, {c, d}}
{
}

Matrix2::Matrix2(float theta)
	: m_data{{std::cosf(theta), -std::sinf(theta)}, 
			   {std::sinf(theta), std::cosf(theta)}}
{
}

Matrix2 Matrix2::operator+(const Matrix2& other) const
{
	return {m_data[0][0] + other.m_data[0][0], m_data[0][1] + other.m_data[0][1],
	        m_data[1][0] + other.m_data[1][0], m_data[1][1] + other.m_data[1][1]};
}

Matrix2& Matrix2::operator+=(const Matrix2& other)
{
	m_data[0][0] += other.m_data[0][0];
	m_data[0][1] += other.m_data[0][1];
	m_data[1][0] += other.m_data[1][0];
	m_data[1][1] += other.m_data[1][1];
	return *this;
}

Matrix2 Matrix2::operator*(float scalar) const
{
	return {scalar * m_data[0][0], 
			  scalar * m_data[0][1], 
			  scalar * m_data[1][0],
	        scalar * m_data[1][1]};
}

Matrix2& Matrix2::operator*=(float scalar)
{
	m_data[0][0] *= scalar;
	m_data[0][1] *= scalar;
	m_data[1][0] *= scalar;
	m_data[1][1] *= scalar;
	return *this;
}

Vector2 Matrix2::operator*(const Vector2& vect) const
{
	return {m_data[0][0] * vect.x + m_data[0][1] * vect.y,
	        m_data[1][0] * vect.x + m_data[1][1] * vect.y};
}

Matrix2 Matrix2::operator*(const Matrix2& other) const
{
	return {m_data[0][0] * other.m_data[0][0] + m_data[0][1] * other.m_data[1][0],
	        m_data[0][0] * other.m_data[0][1] + m_data[0][1] * other.m_data[1][1],
	        m_data[1][0] * other.m_data[0][0] + m_data[1][1] * other.m_data[1][0],
	        m_data[1][0] * other.m_data[0][1] + m_data[1][1] * other.m_data[1][1]};
}

Matrix2 operator*(float scalar, const Matrix2& matrix)
{
	return matrix * scalar;
}

}  // namespace door
