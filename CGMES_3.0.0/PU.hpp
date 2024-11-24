#ifndef PU_H
#define PU_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Per Unit - a positive or negative value referred to a defined base. Values typically range from -10 to +10.
	*/
	class PU
	{
	public:
		PU() : value(0.0), initialized(false) {}
		PU(long double value) : value(value), initialized(true) {}

		PU& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		PU& operator+=(const PU& rhs);
		PU& operator-=(const PU& rhs);
		PU& operator*=(const PU& rhs);
		PU& operator/=(const PU& rhs);

		friend std::istream& operator>>(std::istream& lop, PU& rop);
		friend std::ostream& operator<<(std::ostream& os, const PU& obj);
	};
}
#endif
