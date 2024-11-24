#ifndef VsPpccControlKind_H
#define VsPpccControlKind_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <istream>
#include <ostream>

namespace CIMPP
{
	/*
	Types applicable to the control of real power and/or DC voltage by voltage source converter.
	*/
	class VsPpccControlKind
	{
	public:
		enum VsPpccControlKind_ENUM
		{
			/**
			 * Control variable (target) is real power at PCC bus.
			 */
			pPcc,
			/**
			 * Control variable (target) is DC voltage and real power at PCC bus is derived.
			 */
			udc,
			/**
			 * Control variables (targets) are both active power at point of common coupling and local DC voltage, with the droop.
			 */
			pPccAndUdcDroop,
			/**
			 * Control variables (targets) are both active power at point of common coupling and compensated DC voltage, with the droop; compensation factor is the resistance, as an approximation of the DC voltage of a common (real or virtual) node in the DC network.
			 */
			pPccAndUdcDroopWithCompensation,
			/**
			 * Control variables (targets) are both active power at point of common coupling and the pilot DC voltage, with the droop.
			 */
			pPccAndUdcDroopPilot,
		};

		VsPpccControlKind() : value(), initialized(false) {}
		VsPpccControlKind(VsPpccControlKind_ENUM value) : value(value), initialized(true) {}

		VsPpccControlKind& operator=(VsPpccControlKind_ENUM rop);
		operator VsPpccControlKind_ENUM() const;

		VsPpccControlKind_ENUM value;
		bool initialized;

		static const char debugName[];
		const char* debugString() const;

		friend std::istream& operator>>(std::istream& lop, VsPpccControlKind& rop);
		friend std::ostream& operator<<(std::ostream& os, const VsPpccControlKind& obj);
	};
}
#endif
