#ifndef Simple_Float_H
#define Simple_Float_H
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
	class Simple_Float
	{
	public:
		Simple_Float() : value(0.0), initialized(false) {}
		Simple_Float(long double value) : value(value), initialized(true) {}

		Simple_Float& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Simple_Float& operator+=(const Simple_Float& rhs);
		Simple_Float& operator-=(const Simple_Float& rhs);
		Simple_Float& operator*=(const Simple_Float& rhs);
		Simple_Float& operator/=(const Simple_Float& rhs);

		friend std::istream& operator>>(std::istream& lop, Simple_Float& rop);
		friend std::ostream& operator<<(std::ostream& os, const Simple_Float& obj);
	};
}
#endif
