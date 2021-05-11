#ifndef BROADPHASE_H_
#define BROADPHASE_H_

#include "geometry.h"
#include <vector>

namespace door
{
class BroadPhase
{
public:
	BroadPhase() = default;

	virtual void Collide(const std::vector<Body>& bodies) = 0;
};

class SAPBroadPhase : public BroadPhase
{
public:
	void Collide(const std::vector<Body>& bodies) override;

private:
	std::vector<Geometry*> m_axis_x;
	std::vector<Geometry*> m_axis_y;
};
}  // namespace door

#endif
