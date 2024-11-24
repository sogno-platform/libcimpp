#ifndef Float_H
#define Float_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	A floating point number. The range is unspecified and not limited.
	*/
	class Float
	{
	public:
		Float() : value(0.0), initialized(false) {}
		Float(long double value) : value(value), initialized(true) {}

		Float& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Float& operator+=(const Float& rhs);
		Float& operator-=(const Float& rhs);
		Float& operator*=(const Float& rhs);
		Float& operator/=(const Float& rhs);

		friend std::istream& operator>>(std::istream& lop, Float& rop);
		friend std::ostream& operator<<(std::ostream& os, const Float& obj);
	};
}
#endif
