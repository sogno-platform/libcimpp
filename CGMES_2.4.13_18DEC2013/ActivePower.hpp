#ifndef ActivePower_H
#define ActivePower_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Product of RMS value of the voltage and the RMS value of the in-phase component of the current.
	*/
	class ActivePower
	{
	public:
		ActivePower() : value(0.0), initialized(false) {}
		ActivePower(long double value) : value(value), initialized(true) {}

		ActivePower& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		ActivePower& operator+=(const ActivePower& rhs);
		ActivePower& operator-=(const ActivePower& rhs);
		ActivePower& operator*=(const ActivePower& rhs);
		ActivePower& operator/=(const ActivePower& rhs);

		friend std::istream& operator>>(std::istream& lop, ActivePower& rop);
		friend std::ostream& operator<<(std::ostream& os, const ActivePower& obj);
	};
}
#endif
