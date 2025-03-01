#ifndef Susceptance_H
#define Susceptance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Imaginary part of admittance. */
	class Susceptance
	{
	public:
		Susceptance() : value(0.0), initialized(false) {}
		Susceptance(long double value) : value(value), initialized(true) {}

		Susceptance& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Susceptance& operator+=(const Susceptance& rhs);
		Susceptance& operator-=(const Susceptance& rhs);
		Susceptance& operator*=(const Susceptance& rhs);
		Susceptance& operator/=(const Susceptance& rhs);

		friend std::istream& operator>>(std::istream& lop, Susceptance& rop);
		friend std::ostream& operator<<(std::ostream& os, const Susceptance& obj);
	};
}
#endif
