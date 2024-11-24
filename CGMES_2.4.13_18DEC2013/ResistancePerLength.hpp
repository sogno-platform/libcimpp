#ifndef ResistancePerLength_H
#define ResistancePerLength_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Resistance (real part of impedance) per unit of length.
	*/
	class ResistancePerLength
	{
	public:
		ResistancePerLength() : value(0.0), initialized(false) {}
		ResistancePerLength(long double value) : value(value), initialized(true) {}

		ResistancePerLength& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		ResistancePerLength& operator+=(const ResistancePerLength& rhs);
		ResistancePerLength& operator-=(const ResistancePerLength& rhs);
		ResistancePerLength& operator*=(const ResistancePerLength& rhs);
		ResistancePerLength& operator/=(const ResistancePerLength& rhs);

		friend std::istream& operator>>(std::istream& lop, ResistancePerLength& rop);
		friend std::ostream& operator<<(std::ostream& os, const ResistancePerLength& obj);
	};
}
#endif
