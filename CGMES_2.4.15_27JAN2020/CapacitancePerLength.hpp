#ifndef CapacitancePerLength_H
#define CapacitancePerLength_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Capacitance per unit of length.
	*/
	class CapacitancePerLength
	{
	public:
		CapacitancePerLength() : value(0.0), initialized(false) {}
		CapacitancePerLength(long double value) : value(value), initialized(true) {}

		CapacitancePerLength& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		CapacitancePerLength& operator+=(const CapacitancePerLength& rhs);
		CapacitancePerLength& operator-=(const CapacitancePerLength& rhs);
		CapacitancePerLength& operator*=(const CapacitancePerLength& rhs);
		CapacitancePerLength& operator/=(const CapacitancePerLength& rhs);

		friend std::istream& operator>>(std::istream& lop, CapacitancePerLength& rop);
		friend std::ostream& operator<<(std::ostream& os, const CapacitancePerLength& obj);
	};
}
#endif
