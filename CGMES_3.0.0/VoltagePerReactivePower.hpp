#ifndef VoltagePerReactivePower_H
#define VoltagePerReactivePower_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Voltage variation with reactive power.
	*/
	class VoltagePerReactivePower
	{
	public:
		VoltagePerReactivePower() : value(0.0), initialized(false) {}
		VoltagePerReactivePower(long double value) : value(value), initialized(true) {}

		VoltagePerReactivePower& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		VoltagePerReactivePower& operator+=(const VoltagePerReactivePower& rhs);
		VoltagePerReactivePower& operator-=(const VoltagePerReactivePower& rhs);
		VoltagePerReactivePower& operator*=(const VoltagePerReactivePower& rhs);
		VoltagePerReactivePower& operator/=(const VoltagePerReactivePower& rhs);

		friend std::istream& operator>>(std::istream& lop, VoltagePerReactivePower& rop);
		friend std::ostream& operator<<(std::ostream& os, const VoltagePerReactivePower& obj);
	};
}
#endif
