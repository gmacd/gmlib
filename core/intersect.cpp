#include "intersect.hpp"

#include "vec4.hpp"
#include "ray.hpp"

namespace gmlib {

	float intersectRaySphere(const Sphere& s, const Ray& r)
	{
		Vec4 oc = r.origin() - s.centre();
		float a = dot(r.dir(), r.dir());
		float b = 2.0f * dot(oc, r.dir());
		float c = dot(oc, oc) - s.radius()*s.radius();
		float discriminant = b*b - 4*a*c;
		if (discriminant < 0)
			return -1;
		else
			return (-b - std::sqrt(discriminant)) / (2.0*a);
	}
}
