#pragma once

#include <cmath>

namespace gmlib {
	
	class Vec4
	{
	public:
		Vec4(): Vec4(0, 0, 0, 1) {}
		Vec4(const Vec4& v): Vec4(v.x, v.y, v.z, v.w) {}
		Vec4(float x, float y, float z, float w = 1.0f): x(x), y(y), z(z), w(w) {}

		float dot(const Vec4& v) const { return x*v.x + y*v.y + z*v.z + w*v.w; }
		float length() const { return std::sqrt(this->dot(*this)); }

		float normalize() { float len = length();  x/=len;  y/=len;  z/=len;  w/=len;  return len; }
		Vec4 normal() const { float len = length();  return Vec4(x/len, y/len, z/len, w/len); }

		Vec4 operator-() const { return Vec4(x, y, z, w); }

		Vec4 operator+=(const Vec4& v) { x += v.x;  y += v.y;  z += v.z;  w += v.w;  return *this; }
		Vec4 operator-=(const Vec4& v) { x -= v.x;  y -= v.y;  z -= v.z;  w -= v.w;  return *this; }
		Vec4 operator*=(const Vec4& v) { x *= v.x;  y *= v.y;  z *= v.z;  w *= v.w;  return *this; }
		Vec4 operator/=(const Vec4& v) { x /= v.x;  y /= v.y;  z /= v.z;  w /= v.w;  return *this; }

		friend Vec4 operator+(const Vec4& v1, const Vec4& v2) { return Vec4(v1.x+v2.x, v1.y+v2.y, v1.z+v2.z, v1.w+v2.w); }
		friend Vec4 operator-(const Vec4& v1, const Vec4& v2) { return Vec4(v1.x-v2.x, v1.y-v2.y, v1.z-v2.z, v1.w-v2.w); }
		friend Vec4 operator*(const Vec4& v1, const Vec4& v2) { return Vec4(v1.x*v2.x, v1.y*v2.y, v1.z*v2.z, v1.w*v2.w); }
		friend Vec4 operator/(const Vec4& v1, const Vec4& v2) { return Vec4(v1.x/v2.x, v1.y/v2.y, v1.z/v2.z, v1.w/v2.w); }

		friend Vec4 operator+(const Vec4& v, float s) { return Vec4(v.x+s, v.y+s, v.z+s, v.w+s); }
		friend Vec4 operator-(const Vec4& v, float s) { return Vec4(v.x-s, v.y-s, v.z-s, v.w-s); }
		friend Vec4 operator*(const Vec4& v, float s) { return Vec4(v.x*s, v.y*s, v.z*s, v.w*s); }
		friend Vec4 operator/(const Vec4& v, float s) { return Vec4(v.x/s, v.y/s, v.z/s, v.w/s); }

		friend Vec4 operator+(float s, const Vec4& v) { return Vec4(s+v.x, s+v.y, s+v.z, s+v.w); }
		friend Vec4 operator-(float s, const Vec4& v) { return Vec4(s-v.x, s-v.y, s-v.z, s-v.w); }
		friend Vec4 operator*(float s, const Vec4& v) { return Vec4(s*v.x, s*v.y, s*v.z, s*v.w); }
		friend Vec4 operator/(float s, const Vec4& v) { return Vec4(s/v.x, s/v.y, s/v.z, s/v.w); }

		union { float x, r; };
		union { float y, g; };
		union { float z, b; };
		union { float w, a; };
	};
}
