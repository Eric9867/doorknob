#ifndef GEOMETRY_H_
#define GEOMETRY_H_

#include "aabb.h"
#include "body.h"

namespace door
{

class Geometry
{
public:
	Geometry() = default;

protected:
	/* a pointer to the parent body, useful for retrieving position and angle data */
	Body& parent;
};

class Circle : public Geometry
{
public:
	Circle() = default;
	Circle(float radius_): radius(radius_);

	AABB GetAABB();

private:
	float radius = 0.0f;
};

class Box2 : public Geometry
{
public:
	Box2() = default;

	AABB GetAABB();

private:
	float width = 0.0f;
	float height = 0.0f;
};

}

#endif // GEOMETRY_H_
