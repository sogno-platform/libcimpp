#ifndef Length_H
#define Length_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Unit of length. Never negative. */
	class Length
	{
	public:
		Length() : value(0.0), initialized(false) {}
		Length(long double value) : value(value), initialized(true) {}

		Length& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Length& operator+=(const Length& rhs);
		Length& operator-=(const Length& rhs);
		Length& operator*=(const Length& rhs);
		Length& operator/=(const Length& rhs);

		friend std::istream& operator>>(std::istream& lop, Length& rop);
		friend std::ostream& operator<<(std::ostream& os, const Length& obj);
	};
}
#endif
