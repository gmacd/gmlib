#pragma once

#include <random>


namespace gmlib {
	
	class Rnd
	{
	public:
		Rnd();

		float nextFloat();

	private:
		std::random_device _device;
		std::ranlux48_base _rnd;
	};
}
