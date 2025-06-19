#ifndef Resistance_H
#define Resistance_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Resistance (real part of impedance). */
	class Resistance
	{
	public:
		Resistance() : value(0.0), initialized(false) {}
		Resistance(long double value) : value(value), initialized(true) {}

		Resistance& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Resistance& operator+=(const Resistance& rhs);
		Resistance& operator-=(const Resistance& rhs);
		Resistance& operator*=(const Resistance& rhs);
		Resistance& operator/=(const Resistance& rhs);

		friend std::istream& operator>>(std::istream& lop, Resistance& rop);
		friend std::ostream& operator<<(std::ostream& os, const Resistance& obj);
	};
}
#endif
