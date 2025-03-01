#ifndef Reactance_H
#define Reactance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Reactance (imaginary part of impedance), at rated frequency. */
	class Reactance
	{
	public:
		Reactance() : value(0.0), initialized(false) {}
		Reactance(long double value) : value(value), initialized(true) {}

		Reactance& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Reactance& operator+=(const Reactance& rhs);
		Reactance& operator-=(const Reactance& rhs);
		Reactance& operator*=(const Reactance& rhs);
		Reactance& operator/=(const Reactance& rhs);

		friend std::istream& operator>>(std::istream& lop, Reactance& rop);
		friend std::ostream& operator<<(std::ostream& os, const Reactance& obj);
	};
}
#endif
