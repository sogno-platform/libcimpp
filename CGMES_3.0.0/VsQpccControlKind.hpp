#ifndef VsQpccControlKind_H
#define VsQpccControlKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/** \brief Kind of reactive power control at point of common coupling for a voltage source converter. */
	class VsQpccControlKind
	{
	public:
		enum VsQpccControlKind_ENUM
		{
			/** Control is reactive power at point of common coupling. Target is provided by VsConverter.targetQpcc. */
			reactivePcc,
			/** Control is voltage at point of common coupling. Target is provided by VsConverter.targetUpcc. */
			voltagePcc,
			/** Control is power factor at point of common coupling. Target is provided by VsConverter.targetPowerFactorPcc. */
			powerFactorPcc,
			/** No explicit control. Pulse-modulation factor is directly set in magnitude (VsConverter.targetPWMfactor) and phase (VsConverter.targetPhasePcc). */
			pulseWidthModulation,
		};

		VsQpccControlKind() : value(), initialized(false) {}
		VsQpccControlKind(VsQpccControlKind_ENUM value) : value(value), initialized(true) {}

		VsQpccControlKind& operator=(VsQpccControlKind_ENUM rop);
		operator VsQpccControlKind_ENUM() const;

		VsQpccControlKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, VsQpccControlKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const VsQpccControlKind& obj);
	};
}
#endif
