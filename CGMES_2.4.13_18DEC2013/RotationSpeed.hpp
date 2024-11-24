#ifndef RotationSpeed_H
#define RotationSpeed_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Number of revolutions per second.
	*/
	class RotationSpeed
	{
	public:
		RotationSpeed() : value(0.0), initialized(false) {}
		RotationSpeed(long double value) : value(value), initialized(true) {}

		RotationSpeed& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		RotationSpeed& operator+=(const RotationSpeed& rhs);
		RotationSpeed& operator-=(const RotationSpeed& rhs);
		RotationSpeed& operator*=(const RotationSpeed& rhs);
		RotationSpeed& operator/=(const RotationSpeed& rhs);

		friend std::istream& operator>>(std::istream& lop, RotationSpeed& rop);
		friend std::ostream& operator<<(std::ostream& os, const RotationSpeed& obj);
	};
}
#endif
