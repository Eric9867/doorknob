#ifndef AABB_H_
#define AABB_H_

#include <vector>

#include "vector2.h"

namespace door
{
class AABB final
{
public:
  AABB() = default;
  AABB(const Vector2& minv, const Vector2& maxv) : m_min(minv), m_max(maxv) {}

  Vector2 GetMin() const {return m_min;}
  Vector2 GetMax() const {return m_max;}  

  void SetMin(const Vector2& v) { m_min = v; }
  void SetMax(const Vector2& v) { m_max = v; }

  void FromPoints(const std::vector<Vector2>& pts);
  void FromCircle(const Vector2& center, float radius);
  bool Overlaps(AABB& other) const;
private:
  Vector2 m_min;
  Vector2 m_max;
};
}

#endif // AABB_H_
