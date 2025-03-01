#ifndef Voltage_H
#define Voltage_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Electrical voltage, can be both AC and DC. */
	class Voltage
	{
	public:
		Voltage() : value(0.0), initialized(false) {}
		Voltage(long double value) : value(value), initialized(true) {}

		Voltage& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Voltage& operator+=(const Voltage& rhs);
		Voltage& operator-=(const Voltage& rhs);
		Voltage& operator*=(const Voltage& rhs);
		Voltage& operator/=(const Voltage& rhs);

		friend std::istream& operator>>(std::istream& lop, Voltage& rop);
		friend std::ostream& operator<<(std::ostream& os, const Voltage& obj);
	};
}
#endif
