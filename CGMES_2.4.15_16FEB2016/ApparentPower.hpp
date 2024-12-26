#ifndef ApparentPower_H
#define ApparentPower_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Product of the RMS value of the voltage and the RMS value of the current.
	*/
	class ApparentPower
	{
	public:
		ApparentPower() : value(0.0), initialized(false) {}
		ApparentPower(long double value) : value(value), initialized(true) {}

		ApparentPower& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		ApparentPower& operator+=(const ApparentPower& rhs);
		ApparentPower& operator-=(const ApparentPower& rhs);
		ApparentPower& operator*=(const ApparentPower& rhs);
		ApparentPower& operator/=(const ApparentPower& rhs);

		friend std::istream& operator>>(std::istream& lop, ApparentPower& rop);
		friend std::ostream& operator<<(std::ostream& os, const ApparentPower& obj);
	};
}
#endif
