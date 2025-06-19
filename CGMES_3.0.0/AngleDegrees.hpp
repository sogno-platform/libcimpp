#ifndef AngleDegrees_H
#define AngleDegrees_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Measurement of angle in degrees. */
	class AngleDegrees
	{
	public:
		AngleDegrees() : value(0.0), initialized(false) {}
		AngleDegrees(long double value) : value(value), initialized(true) {}

		AngleDegrees& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		AngleDegrees& operator+=(const AngleDegrees& rhs);
		AngleDegrees& operator-=(const AngleDegrees& rhs);
		AngleDegrees& operator*=(const AngleDegrees& rhs);
		AngleDegrees& operator/=(const AngleDegrees& rhs);

		friend std::istream& operator>>(std::istream& lop, AngleDegrees& rop);
		friend std::ostream& operator<<(std::ostream& os, const AngleDegrees& obj);
	};
}
#endif
