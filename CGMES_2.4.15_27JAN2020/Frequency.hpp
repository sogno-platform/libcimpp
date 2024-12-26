#ifndef Frequency_H
#define Frequency_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Cycles per second.
	*/
	class Frequency
	{
	public:
		Frequency() : value(0.0), initialized(false) {}
		Frequency(long double value) : value(value), initialized(true) {}

		Frequency& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Frequency& operator+=(const Frequency& rhs);
		Frequency& operator-=(const Frequency& rhs);
		Frequency& operator*=(const Frequency& rhs);
		Frequency& operator/=(const Frequency& rhs);

		friend std::istream& operator>>(std::istream& lop, Frequency& rop);
		friend std::ostream& operator<<(std::ostream& os, const Frequency& obj);
	};
}
#endif
