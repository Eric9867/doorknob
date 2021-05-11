#ifndef BODY_H_
#define BODY_H_

#include "vector2.h"

namespace door
{
class Geometry;
class Body
{
public:
	Body(float mass_, Vector2 position_, Vector2 velocity_, Geometry& geom_)
	    : mass(mass_), position(position_), velocity(velocity_), geom(geom_) {}

	float GetAngle() const { return angle; }
	Vector2 GetPos() const { return position; }
	Geometry& GetGeometry() const { return geom; }

private:
	Vector2 position;
	Vector2 velocity;
	float angle = 0;
	float angular_velocity = 0;
	float mass;
	Geometry& geom;
};

}  // namespace door

#endif  // BODY_H_
