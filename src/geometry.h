#ifndef GEOMETRY_H_
#define GEOMETRY_H_

#include "aabb.h"
#include "body.h"

namespace door
{

class Body;
class Geometry
{
public:
	Geometry() = default;
	virtual ~Geometry(){}

	virtual void UpdateAABB() = 0;
	AABB& GetAABB() const;

protected:
	/* a pointer to the parent body, useful for retrieving position and angle data */
	Body* parent = nullptr;
	AABB m_aabb;
};

class Circle final : public Geometry
{
public:
	Circle() = default;
	Circle(float radius_): radius(radius_) {}
	virtual ~Circle(){}

	void UpdateAABB() override;

private:
	float radius = 0.0f;
};

class Box2 final : public Geometry
{
public:
	Box2() = default;
	virtual ~Box2(){}

	void UpdateAABB() override;

private:
	float width = 0.0f;
	float height = 0.0f;
};

}

#endif // GEOMETRY_H_
