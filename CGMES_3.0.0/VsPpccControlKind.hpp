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
			 * Control is real power at point of common coupling. The target value is provided by ACDCConverter.targetPpcc.
			 */
			pPcc,
			/**
			 * Control is DC voltage  with target value provided by ACDCConverter.targetUdc.
			 */
			udc,
			/**
			 * Control is active power at point of common coupling and local DC voltage, with the droop. Target values are provided by ACDCConverter.targetPpcc, ACDCConverter.targetUdc and VsConverter.droop.
			 */
			pPccAndUdcDroop,
			/**
			 * Control is active power at point of common coupling and compensated DC voltage, with the droop. Compensation factor is the resistance, as an approximation of the DC voltage of a common (real or virtual) node in the DC network. Targets are provided by ACDCConverter.targetPpcc, ACDCConverter.targetUdc, VsConverter.droop and VsConverter.droopCompensation.
			 */
			pPccAndUdcDroopWithCompensation,
			/**
			 * Control is active power at point of common coupling and the pilot DC voltage, with the droop. The mode is used for Multi Terminal High Voltage DC (MTDC) systems where multiple HVDC Substations are connected to the HVDC transmission lines. The pilot voltage is then used to coordinate the control the DC voltage across the HVDC substations. Targets are provided by ACDCConverter.targetPpcc, ACDCConverter.targetUdc and  VsConverter.droop.
			 */
			pPccAndUdcDroopPilot,
			/**
			 * Control is phase at point of common coupling. Target is provided by VsConverter.targetPhasePcc.
			 */
			phasePcc,
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
