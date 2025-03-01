#ifndef Money_H
#define Money_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Amount of money. */
	class Money
	{
	public:
		Money() : value(0.0), initialized(false) {}
		Money(long double value) : value(value), initialized(true) {}

		Money& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Money& operator+=(const Money& rhs);
		Money& operator-=(const Money& rhs);
		Money& operator*=(const Money& rhs);
		Money& operator/=(const Money& rhs);

		friend std::istream& operator>>(std::istream& lop, Money& rop);
		friend std::ostream& operator<<(std::ostream& os, const Money& obj);
	};
}
#endif
