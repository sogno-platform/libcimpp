#ifndef PerCent_H
#define PerCent_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Percentage on a defined base.   For example, specify as 100 to indicate at the defined base.
	*/
	class PerCent
	{
	public:
		PerCent() : value(0.0), initialized(false) {}
		PerCent(long double value) : value(value), initialized(true) {}

		PerCent& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		PerCent& operator+=(const PerCent& rhs);
		PerCent& operator-=(const PerCent& rhs);
		PerCent& operator*=(const PerCent& rhs);
		PerCent& operator/=(const PerCent& rhs);

		friend std::istream& operator>>(std::istream& lop, PerCent& rop);
		friend std::ostream& operator<<(std::ostream& os, const PerCent& obj);
	};
}
#endif
