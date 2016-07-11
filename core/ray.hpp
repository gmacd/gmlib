#pragma once

namespace gmlib {
	
	class Ray
	{
	public:
		Ray() {}
		Ray(const Vec4& origin, const Vec4& dir): _origin(origin), _dir(dir) {}

		Vec4 point(float t) { return _origin + t*_dir; }

		const Vec4& origin() const { return _origin; }
		const Vec4& dir() const { return _dir; }

	private:
		Vec4 _origin, _dir;
	};
}
