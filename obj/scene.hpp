#pragma once

#include <vector>

namespace gmlib {

	class Scene
	{
	public:
		Scene() {}
		
		void add(Obj* obj);
		
		std::iterator<Obj*> begin();
		std::iterator<Obj*> end();
		
		virtual bool hit(const Ray& ray, float tMin, float tMax, HitRecord& hit) const;
		
	private:
		std::Vector<Obj*> _objs;
	};
}
