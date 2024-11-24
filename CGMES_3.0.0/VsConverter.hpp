#ifndef VsConverter_H
#define VsConverter_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ACDCConverter.hpp"
#include "BaseClassDefiner.hpp"
#include "AngleDegrees.hpp"
#include "Float.hpp"
#include "PU.hpp"
#include "PerCent.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"
#include "VsPpccControlKind.hpp"
#include "VsQpccControlKind.hpp"

namespace CIMPP
{
	class VSCDynamics;
	class VsCapabilityCurve;

	/*
	DC side of the voltage source converter (VSC).
	*/
	class VsConverter : public ACDCConverter
	{
	public:
		/* constructor initialising all attributes to null */
		VsConverter();
		~VsConverter() override;

		CIMPP::VsCapabilityCurve* CapabilityCurve;  /* Capability curve of this converter. Default: 0 */
		CIMPP::VSCDynamics* VSCDynamics;  /* Voltage source converter dynamics model used to describe dynamic behaviour of this converter. Default: 0 */
		CIMPP::AngleDegrees delta;  /* Angle between VsConverter.uv and ACDCConverter.uc. It is converter`s state variable used in power flow. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::PU droop;  /* Droop constant. The pu value is obtained as D [kV/MW] x Sb / Ubdc. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Resistance droopCompensation;  /* Compensation constant. Used to compensate for voltage drop when controlling voltage at a distant bus. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Float maxModulationIndex;  /* The maximum quotient between the AC converter voltage (Uc) and DC voltage (Ud). A factor typically less than 1. It is converter`s configuration data used in power flow. Default: 0.0 */
		CIMPP::VsPpccControlKind pPccControl;  /* Kind of control of real power and/or DC voltage. Default: 0 */
		CIMPP::VsQpccControlKind qPccControl;  /* Kind of reactive power control. Default: 0 */
		CIMPP::PerCent qShare;  /* Reactive power sharing factor among parallel converters on Uac control. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::Float targetPWMfactor;  /* Magnitude of pulse-modulation factor. The attribute shall be a positive value. Default: 0.0 */
		CIMPP::AngleDegrees targetPhasePcc;  /* Phase target at AC side, at point of common coupling. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Float targetPowerFactorPcc;  /* Power factor target at the AC side, at point of common coupling. The attribute shall be a positive value. Default: 0.0 */
		CIMPP::ReactivePower targetQpcc;  /* Reactive power injection target in AC grid, at point of common coupling.  Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::Voltage targetUpcc;  /* Voltage target in AC grid, at point of common coupling. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage uv;  /* Line-to-line voltage on the valve side of the converter transformer. It is converter`s state variable, result from power flow. The attribute shall be a positive value. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* VsConverter_factory();
}
#endif
