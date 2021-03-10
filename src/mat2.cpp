#include "mat2.h"

#include "vector.h"

Mat2::Mat2(float a, float b, float c, float d)
	: m_data{{a, b}, {c, d}}
{}

Mat2 Mat2::operator+(const Mat2& other) const
{
	return {
		m_data[0][0] + other.m_data[0][0],  
		m_data[0][1] + other.m_data[0][1],
		m_data[1][0] + other.m_data[1][0],
		m_data[1][1] + other.m_data[1][1]
	};
}

Mat2& Mat2::operator+=(const Mat2& other)
{
	m_data[0][0] += other.m_data[0][0];
	m_data[0][1] += other.m_data[0][1];
	m_data[1][0] += other.m_data[1][0];
	m_data[1][1] += other.m_data[1][1];
	return *this;
}

Mat2 Mat2::operator*(float scalar) const
{
	return {
		scalar * m_data[0][0],
		scalar * m_data[0][1],
		scalar * m_data[1][0],
		scalar * m_data[1][1]
	};
}

Mat2& Mat2::operator*=(float scalar)
{
	m_data[0][0] *= scalar;
	m_data[0][1] *= scalar;
	m_data[1][0] *= scalar;
	m_data[1][1] *= scalar;
	return *this;
}

Vector Mat2::operator*(const Vector& vect) const
{
	return {
		m_data[0][0] * vect.x + m_data[0][1] * vect.y, 
		m_data[1][0] * vect.x + m_data[1][1] * vect.y
	};
}

Mat2 Mat2::operator*(const Mat2& other) const
{
	return {
		m_data[0][0] * other.m_data[0][0] + m_data[0][1] * other.m_data[1][0],
		m_data[0][0] * other.m_data[0][1] + m_data[0][1] * other.m_data[1][1],
		m_data[1][0] * other.m_data[0][0] + m_data[1][1] * other.m_data[1][0],
		m_data[1][0] * other.m_data[0][1] + m_data[1][1] * other.m_data[1][1]
	};
}

Mat2 operator*(float scalar, const Mat2& matrix)
{
	return matrix * scalar;
}
