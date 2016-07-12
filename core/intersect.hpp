#pragma once

#include "Ray.hpp"
#include "Vec4.hpp"

namespace gmlib {
	class Sphere
	{
	public:
		Sphere() {}
		Sphere(const Point4& centre, float radius): _centre(centre), _radius(radius) {}

		const Point4& centre() const { return _centre; }
		const float radius() const { return _radius; }

	private:
		Point4 _centre;
		float _radius;
	};


	float intersectRaySphere(const Sphere& s, const Ray& r);
}
