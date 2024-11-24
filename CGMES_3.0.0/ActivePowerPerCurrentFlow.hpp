#ifndef ActivePowerPerCurrentFlow_H
#define ActivePowerPerCurrentFlow_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Active power variation with current flow.
	*/
	class ActivePowerPerCurrentFlow
	{
	public:
		ActivePowerPerCurrentFlow() : value(0.0), initialized(false) {}
		ActivePowerPerCurrentFlow(long double value) : value(value), initialized(true) {}

		ActivePowerPerCurrentFlow& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		ActivePowerPerCurrentFlow& operator+=(const ActivePowerPerCurrentFlow& rhs);
		ActivePowerPerCurrentFlow& operator-=(const ActivePowerPerCurrentFlow& rhs);
		ActivePowerPerCurrentFlow& operator*=(const ActivePowerPerCurrentFlow& rhs);
		ActivePowerPerCurrentFlow& operator/=(const ActivePowerPerCurrentFlow& rhs);

		friend std::istream& operator>>(std::istream& lop, ActivePowerPerCurrentFlow& rop);
		friend std::ostream& operator<<(std::ostream& os, const ActivePowerPerCurrentFlow& obj);
	};
}
#endif
