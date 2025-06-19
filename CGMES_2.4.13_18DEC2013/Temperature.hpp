#ifndef Temperature_H
#define Temperature_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Value of temperature in degrees Celsius. */
	class Temperature
	{
	public:
		Temperature() : value(0.0), initialized(false) {}
		Temperature(long double value) : value(value), initialized(true) {}

		Temperature& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		Temperature& operator+=(const Temperature& rhs);
		Temperature& operator-=(const Temperature& rhs);
		Temperature& operator*=(const Temperature& rhs);
		Temperature& operator/=(const Temperature& rhs);

		friend std::istream& operator>>(std::istream& lop, Temperature& rop);
		friend std::ostream& operator<<(std::ostream& os, const Temperature& obj);
	};
}
#endif
