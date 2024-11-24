#ifndef Decimal_H
#define Decimal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Decimal is the base-10 notational system for representing real numbers.
	*/
	class Decimal
	{
	public:
		Decimal() : value(0.0), initialized(false) {}
		Decimal(long double value) : value(value), initialized(true) {}

		Decimal& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Decimal& operator+=(const Decimal& rhs);
		Decimal& operator-=(const Decimal& rhs);
		Decimal& operator*=(const Decimal& rhs);
		Decimal& operator/=(const Decimal& rhs);

		friend std::istream& operator>>(std::istream& lop, Decimal& rop);
		friend std::ostream& operator<<(std::ostream& os, const Decimal& obj);
	};
}
#endif
