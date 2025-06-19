#ifndef CurrentFlow_H
#define CurrentFlow_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Electrical current with sign convention: positive flow is out of the conducting equipment into the connectivity node. Can be both AC and DC. */
	class CurrentFlow
	{
	public:
		CurrentFlow() : value(0.0), initialized(false) {}
		CurrentFlow(long double value) : value(value), initialized(true) {}

		CurrentFlow& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		CurrentFlow& operator+=(const CurrentFlow& rhs);
		CurrentFlow& operator-=(const CurrentFlow& rhs);
		CurrentFlow& operator*=(const CurrentFlow& rhs);
		CurrentFlow& operator/=(const CurrentFlow& rhs);

		friend std::istream& operator>>(std::istream& lop, CurrentFlow& rop);
		friend std::ostream& operator<<(std::ostream& os, const CurrentFlow& obj);
	};
}
#endif
