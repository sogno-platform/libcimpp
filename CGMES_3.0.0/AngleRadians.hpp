#ifndef AngleRadians_H
#define AngleRadians_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Phase angle in radians. */
	class AngleRadians
	{
	public:
		AngleRadians() : value(0.0), initialized(false) {}
		AngleRadians(long double value) : value(value), initialized(true) {}

		AngleRadians& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		AngleRadians& operator+=(const AngleRadians& rhs);
		AngleRadians& operator-=(const AngleRadians& rhs);
		AngleRadians& operator*=(const AngleRadians& rhs);
		AngleRadians& operator/=(const AngleRadians& rhs);

		friend std::istream& operator>>(std::istream& lop, AngleRadians& rop);
		friend std::ostream& operator<<(std::ostream& os, const AngleRadians& obj);
	};
}
#endif
