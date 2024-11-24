#ifndef Capacitance_H
#define Capacitance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Capacitive part of reactance (imaginary part of impedance), at rated frequency.
	*/
	class Capacitance
	{
	public:
		Capacitance() : value(0.0), initialized(false) {}
		Capacitance(long double value) : value(value), initialized(true) {}

		Capacitance& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Capacitance& operator+=(const Capacitance& rhs);
		Capacitance& operator-=(const Capacitance& rhs);
		Capacitance& operator*=(const Capacitance& rhs);
		Capacitance& operator/=(const Capacitance& rhs);

		friend std::istream& operator>>(std::istream& lop, Capacitance& rop);
		friend std::ostream& operator<<(std::ostream& os, const Capacitance& obj);
	};
}
#endif
