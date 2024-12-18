#ifndef Conductance_H
#define Conductance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Factor by which voltage must be multiplied to give corresponding power lost from a circuit. Real part of admittance.
	*/
	class Conductance
	{
	public:
		Conductance() : value(0.0), initialized(false) {}
		Conductance(long double value) : value(value), initialized(true) {}

		Conductance& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Conductance& operator+=(const Conductance& rhs);
		Conductance& operator-=(const Conductance& rhs);
		Conductance& operator*=(const Conductance& rhs);
		Conductance& operator/=(const Conductance& rhs);

		friend std::istream& operator>>(std::istream& lop, Conductance& rop);
		friend std::ostream& operator<<(std::ostream& os, const Conductance& obj);
	};
}
#endif
