#ifndef ReactivePower_H
#define ReactivePower_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Product of RMS value of the voltage and the RMS value of the quadrature component of the current. */
	class ReactivePower
	{
	public:
		ReactivePower() : value(0.0), initialized(false) {}
		ReactivePower(long double value) : value(value), initialized(true) {}

		ReactivePower& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		ReactivePower& operator+=(const ReactivePower& rhs);
		ReactivePower& operator-=(const ReactivePower& rhs);
		ReactivePower& operator*=(const ReactivePower& rhs);
		ReactivePower& operator/=(const ReactivePower& rhs);

		friend std::istream& operator>>(std::istream& lop, ReactivePower& rop);
		friend std::ostream& operator<<(std::ostream& os, const ReactivePower& obj);
	};
}
#endif
