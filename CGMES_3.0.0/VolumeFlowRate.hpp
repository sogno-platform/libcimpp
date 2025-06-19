#ifndef VolumeFlowRate_H
#define VolumeFlowRate_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Volume per time. */
	class VolumeFlowRate
	{
	public:
		VolumeFlowRate() : value(0.0), initialized(false) {}
		VolumeFlowRate(long double value) : value(value), initialized(true) {}

		VolumeFlowRate& operator=(long double rop);
		operator long double() const;

		long double value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		VolumeFlowRate& operator+=(const VolumeFlowRate& rhs);
		VolumeFlowRate& operator-=(const VolumeFlowRate& rhs);
		VolumeFlowRate& operator*=(const VolumeFlowRate& rhs);
		VolumeFlowRate& operator/=(const VolumeFlowRate& rhs);

		friend std::istream& operator>>(std::istream& lop, VolumeFlowRate& rop);
		friend std::ostream& operator<<(std::ostream& os, const VolumeFlowRate& obj);
	};
}
#endif
