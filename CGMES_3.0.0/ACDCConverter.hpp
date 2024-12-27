#ifndef ACDCConverter_H
#define ACDCConverter_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "ActivePower.hpp"
#include "ActivePowerPerCurrentFlow.hpp"
#include "ApparentPower.hpp"
#include "CurrentFlow.hpp"
#include "Integer.hpp"
#include "ReactivePower.hpp"
#include "Resistance.hpp"
#include "Voltage.hpp"

namespace CIMPP
{
	class ACDCConverterDCTerminal;
	class Terminal;

	/*
	A unit with valves for three phases, together with unit control equipment, essential protective and switching devices, DC storage capacitors, phase reactors and auxiliaries, if any, used for conversion.
	*/
	class ACDCConverter : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		ACDCConverter();
		~ACDCConverter() override;

		std::list<CIMPP::ACDCConverterDCTerminal*> DCTerminals;  /* A DC converter have DC converter terminals. A converter has two DC converter terminals. Default: 0 */
		CIMPP::Terminal* PccTerminal;  /* Point of common coupling terminal for this converter DC side. It is typically the terminal on the power transformer (or switch) closest to the AC network. Default: 0 */
		CIMPP::ApparentPower baseS;  /* Base apparent power of the converter pole. The attribute shall be a positive value. Default: nullptr */
		CIMPP::CurrentFlow idc;  /* Converter DC current, also called Id. It is converter`s state variable, result from power flow. Default: nullptr */
		CIMPP::ActivePower idleLoss;  /* Active power loss in pole at no power transfer. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePower maxP;  /* Maximum active power limit. The value is overwritten by values of VsCapabilityCurve, if present. Default: nullptr */
		CIMPP::Voltage maxUdc;  /* The maximum voltage on the DC side at which the converter should operate. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePower minP;  /* Minimum active power limit. The value is overwritten by values of VsCapabilityCurve, if present. Default: nullptr */
		CIMPP::Voltage minUdc;  /* The minimum voltage on the DC side at which the converter should operate. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Integer numberOfValves;  /* Number of valves in the converter. Used in loss calculations. Default: 0 */
		CIMPP::ActivePower p;  /* Active power at the point of common coupling. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution in the case a simplified power flow model is used. Default: nullptr */
		CIMPP::ActivePower poleLossP;  /* The active power loss at a DC Pole  = idleLoss + switchingLoss*|Idc| + resitiveLoss*Idc^2. For lossless operation Pdc=Pac. For rectifier operation with losses Pdc=Pac-lossP. For inverter operation with losses Pdc=Pac+lossP. It is converter`s state variable used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ReactivePower q;  /* Reactive power at the point of common coupling. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution in the case a simplified power flow model is used. Default: nullptr */
		CIMPP::Voltage ratedUdc;  /* Rated converter DC voltage, also called UdN. The attribute shall be a positive value. It is converter`s configuration data used in power flow. For instance a bipolar HVDC link with value  200 kV has a 400kV difference between the dc lines. Default: nullptr */
		CIMPP::Resistance resistiveLoss;  /* It is converter`s configuration data used in power flow. Refer to poleLossP. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePowerPerCurrentFlow switchingLoss;  /* Switching losses, relative to the base apparent power `baseS`. Refer to poleLossP. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePower targetPpcc;  /* Real power injection target in AC grid, at point of common coupling.  Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::Voltage targetUdc;  /* Target value for DC voltage magnitude. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage uc;  /* Line-to-line converter voltage, the voltage at the AC side of the valve. It is converter`s state variable, result from power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage udc;  /* Converter voltage at the DC side, also called Ud. It is converter`s state variable, result from power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage valveU0;  /* Valve threshold voltage, also called Uvalve. Forward voltage drop when the valve is conducting. Used in loss calculations, i.e. the switchLoss depend on numberOfValves * valveU0. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* ACDCConverter_factory();
}
#endif
