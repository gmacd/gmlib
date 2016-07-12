#pragma once

#include "core/vec4.hpp"
#include "core/ray.hpp"

namespace gmlib {

	class HitRecord
	{
	public:
		HitRecord(const Vec4& point, const Vec4& normal, float t):
			_point(point), _normal(normal), _t(t) {}

	private:
		Vec4 _point;
		Vec4 _normal;
		float _t;
	};


	class Obj {
	public:
		virtual bool hit(const Ray& r, float tMin, float tMax, HitRecord& hit) const = 0;
	};


	class Sphere: public Obj {
		
	};
}
