#pragma once

namespace gmlib {
	
	class Ray
	{
	public:
		Ray() {}
		Ray(const Vec4& origin, const Vec4& dir): origin(origin), dir(dir) {}

		Vec4 point(float t) { return origin + t*dir; }

		Vec4 origin, dir;
	};
}
