#include "scene.hpp"

namespace gmlib {

	void Scene::add(Obj* obj)
	{
		_obj.add(obj);
	}

	std::iterator<Obj*> Scene::begin()
	{
		return _obj.begin();
	}

	std::iterator<Obj*> Scene::end()
	{
		return _obj.end();
	}
	
	bool Scene::hit(const Ray& ray, float tMin, float tMax, HitRecord& hit) const
	{
		HitRecord currHit;
		bool hitAnything = false;
		auto nearestT = tMax;
		for (auto&& shape: _obj)
		{
			if (shape.hit(ray, tMin, nearestT, currHit))
			{
				hitAnything = true;
				nearestT = currHit.t;
				hit = currHit;
			}
		}
		return anythingHit;
	}
}
