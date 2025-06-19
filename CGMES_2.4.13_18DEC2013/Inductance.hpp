#ifndef Inductance_H
#define Inductance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Inductive part of reactance (imaginary part of impedance), at rated frequency. */
	class Inductance
	{
	public:
		Inductance() : value(0.0), initialized(false) {}
		Inductance(long double value) : value(value), initialized(true) {}

		Inductance& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Inductance& operator+=(const Inductance& rhs);
		Inductance& operator-=(const Inductance& rhs);
		Inductance& operator*=(const Inductance& rhs);
		Inductance& operator/=(const Inductance& rhs);

		friend std::istream& operator>>(std::istream& lop, Inductance& rop);
		friend std::ostream& operator<<(std::ostream& os, const Inductance& obj);
	};
}
#endif
