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
#include "CimClassDetails.hpp"
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

	/** \brief A unit with valves for three phases, together with unit control equipment, essential protective and switching devices, DC storage capacitors, phase reactors and auxiliaries, if any, used for conversion. */
	class ACDCConverter : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		ACDCConverter();
		~ACDCConverter() override;

		/** \brief A DC converter have DC converter terminals. A converter has two DC converter terminals. Default: 0 */
		std::list<CIMPP::ACDCConverterDCTerminal*> DCTerminals;

		/** \brief Point of common coupling terminal for this converter DC side. It is typically the terminal on the power transformer (or switch) closest to the AC network. Default: 0 */
		CIMPP::Terminal* PccTerminal;

		/** \brief Base apparent power of the converter pole. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ApparentPower baseS;

		/** \brief Converter DC current, also called Id. It is converter`s state variable, result from power flow. Default: nullptr */
		CIMPP::CurrentFlow idc;

		/** \brief Active power loss in pole at no power transfer. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePower idleLoss;

		/** \brief Maximum active power limit. The value is overwritten by values of VsCapabilityCurve, if present. Default: nullptr */
		CIMPP::ActivePower maxP;

		/** \brief The maximum voltage on the DC side at which the converter should operate. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage maxUdc;

		/** \brief Minimum active power limit. The value is overwritten by values of VsCapabilityCurve, if present. Default: nullptr */
		CIMPP::ActivePower minP;

		/** \brief The minimum voltage on the DC side at which the converter should operate. It is converter`s configuration data used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage minUdc;

		/** \brief Number of valves in the converter. Used in loss calculations. Default: 0 */
		CIMPP::Integer numberOfValves;

		/** \brief Active power at the point of common coupling. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution in the case a simplified power flow model is used. Default: nullptr */
		CIMPP::ActivePower p;

		/** \brief The active power loss at a DC Pole  = idleLoss + switchingLoss*|Idc| + resitiveLoss*Idc^2. For lossless operation Pdc=Pac. For rectifier operation with losses Pdc=Pac-lossP. For inverter operation with losses Pdc=Pac+lossP. It is converter`s state variable used in power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePower poleLossP;

		/** \brief Reactive power at the point of common coupling. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution in the case a simplified power flow model is used. Default: nullptr */
		CIMPP::ReactivePower q;

		/** \brief Rated converter DC voltage, also called UdN. The attribute shall be a positive value. It is converter`s configuration data used in power flow. For instance a bipolar HVDC link with value  200 kV has a 400kV difference between the dc lines. Default: nullptr */
		CIMPP::Voltage ratedUdc;

		/** \brief It is converter`s configuration data used in power flow. Refer to poleLossP. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Resistance resistiveLoss;

		/** \brief Switching losses, relative to the base apparent power `baseS`. Refer to poleLossP. The attribute shall be a positive value. Default: nullptr */
		CIMPP::ActivePowerPerCurrentFlow switchingLoss;

		/** \brief Real power injection target in AC grid, at point of common coupling.  Load sign convention is used, i.e. positive sign means flow out from a node. Default: nullptr */
		CIMPP::ActivePower targetPpcc;

		/** \brief Target value for DC voltage magnitude. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage targetUdc;

		/** \brief Line-to-line converter voltage, the voltage at the AC side of the valve. It is converter`s state variable, result from power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage uc;

		/** \brief Converter voltage at the DC side, also called Ud. It is converter`s state variable, result from power flow. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage udc;

		/** \brief Valve threshold voltage, also called Uvalve. Forward voltage drop when the valve is conducting. Used in loss calculations, i.e. the switchLoss depend on numberOfValves * valveU0. Default: nullptr */
		CIMPP::Voltage valveU0;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* ACDCConverter_factory();
}
#endif
