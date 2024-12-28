#ifndef LoadResponseCharacteristic_H
#define LoadResponseCharacteristic_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class EnergyConsumer;

	/*
	Models the characteristic response of the load demand due to changes in system conditions such as voltage and frequency. This is not related to demand response.  If LoadResponseCharacteristic.exponentModel is True, the voltage exponents are specified and used as to calculate:  Active power component = Pnominal * (Voltage/cim:BaseVoltage.nominalVoltage) ** cim:LoadResponseCharacteristic.pVoltageExponent  Reactive power component = Qnominal * (Voltage/cim:BaseVoltage.nominalVoltage)** cim:LoadResponseCharacteristic.qVoltageExponent  Where  * means "multiply" and ** is "raised to power of".
	*/
	class LoadResponseCharacteristic : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadResponseCharacteristic();
		~LoadResponseCharacteristic() override;

		std::list<CIMPP::EnergyConsumer*> EnergyConsumer;  /* The set of loads that have the response characteristics. Default: 0 */
		CIMPP::Boolean exponentModel;  /* Indicates the exponential voltage dependency model is to be used.   If false, the coefficient model is to be used. The exponential voltage dependency model consist of the attributes - pVoltageExponent - qVoltageExponent. The coefficient model consist of the attributes - pConstantImpedance - pConstantCurrent - pConstantPower - qConstantImpedance - qConstantCurrent - qConstantPower. The sum of pConstantImpedance, pConstantCurrent and pConstantPower shall equal 1. The sum of qConstantImpedance, qConstantCurrent and qConstantPower shall equal 1. Default: false */
		CIMPP::Simple_Float pConstantCurrent;  /* Portion of active power load modeled as constant current. Default: nullptr */
		CIMPP::Simple_Float pConstantImpedance;  /* Portion of active power load modeled as constant impedance. Default: nullptr */
		CIMPP::Simple_Float pConstantPower;  /* Portion of active power load modeled as constant power. Default: nullptr */
		CIMPP::Simple_Float pFrequencyExponent;  /* Exponent of per unit frequency effecting active power. Default: nullptr */
		CIMPP::Simple_Float pVoltageExponent;  /* Exponent of per unit voltage effecting real power. Default: nullptr */
		CIMPP::Simple_Float qConstantCurrent;  /* Portion of reactive power load modeled as constant current. Default: nullptr */
		CIMPP::Simple_Float qConstantImpedance;  /* Portion of reactive power load modeled as constant impedance. Default: nullptr */
		CIMPP::Simple_Float qConstantPower;  /* Portion of reactive power load modeled as constant power. Default: nullptr */
		CIMPP::Simple_Float qFrequencyExponent;  /* Exponent of per unit frequency effecting reactive power. Default: nullptr */
		CIMPP::Simple_Float qVoltageExponent;  /* Exponent of per unit voltage effecting reactive power. Default: nullptr */

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

	BaseClass* LoadResponseCharacteristic_factory();
}
#endif
