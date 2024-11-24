#ifndef RealEnergy_H
#define RealEnergy_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Real electrical energy.
	*/
	class RealEnergy
	{
	public:
		RealEnergy() : value(0.0), initialized(false) {}
		RealEnergy(long double value) : value(value), initialized(true) {}

		RealEnergy& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		RealEnergy& operator+=(const RealEnergy& rhs);
		RealEnergy& operator-=(const RealEnergy& rhs);
		RealEnergy& operator*=(const RealEnergy& rhs);
		RealEnergy& operator/=(const RealEnergy& rhs);

		friend std::istream& operator>>(std::istream& lop, RealEnergy& rop);
		friend std::ostream& operator<<(std::ostream& os, const RealEnergy& obj);
	};
}
#endif
