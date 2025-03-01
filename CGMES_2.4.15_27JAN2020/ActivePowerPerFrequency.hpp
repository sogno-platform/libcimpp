#ifndef ActivePowerPerFrequency_H
#define ActivePowerPerFrequency_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Active power variation with frequency. */
	class ActivePowerPerFrequency
	{
	public:
		ActivePowerPerFrequency() : value(0.0), initialized(false) {}
		ActivePowerPerFrequency(long double value) : value(value), initialized(true) {}

		ActivePowerPerFrequency& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		ActivePowerPerFrequency& operator+=(const ActivePowerPerFrequency& rhs);
		ActivePowerPerFrequency& operator-=(const ActivePowerPerFrequency& rhs);
		ActivePowerPerFrequency& operator*=(const ActivePowerPerFrequency& rhs);
		ActivePowerPerFrequency& operator/=(const ActivePowerPerFrequency& rhs);

		friend std::istream& operator>>(std::istream& lop, ActivePowerPerFrequency& rop);
		friend std::ostream& operator<<(std::ostream& os, const ActivePowerPerFrequency& obj);
	};
}
#endif
