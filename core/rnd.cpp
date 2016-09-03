#include "rnd.hpp"


using namespace std;

namespace gmlib {

	// TODO Replace with fast rnd gen after investigation
	Rnd::Rnd():
		_device(),
		_rnd(_device())
    {
	}

	float Rnd::nextFloat()
	{
		return generate_canonical<float, 10>(_rnd);
	}
}
