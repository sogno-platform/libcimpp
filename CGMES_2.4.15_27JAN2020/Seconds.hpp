#ifndef Seconds_H
#define Seconds_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Time, in seconds. */
	class Seconds
	{
	public:
		Seconds() : value(0.0), initialized(false) {}
		Seconds(long double value) : value(value), initialized(true) {}

		Seconds& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Seconds& operator+=(const Seconds& rhs);
		Seconds& operator-=(const Seconds& rhs);
		Seconds& operator*=(const Seconds& rhs);
		Seconds& operator/=(const Seconds& rhs);

		friend std::istream& operator>>(std::istream& lop, Seconds& rop);
		friend std::ostream& operator<<(std::ostream& os, const Seconds& obj);
	};
}
#endif
