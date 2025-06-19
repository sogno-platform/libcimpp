#ifndef Area_H
#define Area_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Area. */
	class Area
	{
	public:
		Area() : value(0.0), initialized(false) {}
		Area(long double value) : value(value), initialized(true) {}

		Area& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Area& operator+=(const Area& rhs);
		Area& operator-=(const Area& rhs);
		Area& operator*=(const Area& rhs);
		Area& operator/=(const Area& rhs);

		friend std::istream& operator>>(std::istream& lop, Area& rop);
		friend std::ostream& operator<<(std::ostream& os, const Area& obj);
	};
}
#endif
