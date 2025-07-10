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
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class EnergyConsumer;

	/** \brief Models the characteristic response of the load demand due to changes in system conditions such as voltage and frequency. This is not related to demand response.  If LoadResponseCharacteristic.exponentModel is True, the voltage exponents are specified and used as to calculate:  Active power component = Pnominal * (Voltage/cim:BaseVoltage.nominalVoltage) ** cim:LoadResponseCharacteristic.pVoltageExponent  Reactive power component = Qnominal * (Voltage/cim:BaseVoltage.nominalVoltage)** cim:LoadResponseCharacteristic.qVoltageExponent  Where  * means "multiply" and ** is "raised to power of". */
	class LoadResponseCharacteristic : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadResponseCharacteristic();
		~LoadResponseCharacteristic() override;

		/** \brief The set of loads that have the response characteristics. Default: 0 */
		std::list<CIMPP::EnergyConsumer*> EnergyConsumer;

		/** \brief Indicates the exponential voltage dependency model is to be used.   If false, the coefficient model is to be used. The exponential voltage dependency model consist of the attributes - pVoltageExponent - qVoltageExponent. The coefficient model consist of the attributes - pConstantImpedance - pConstantCurrent - pConstantPower - qConstantImpedance - qConstantCurrent - qConstantPower. The sum of pConstantImpedance, pConstantCurrent and pConstantPower shall equal 1. The sum of qConstantImpedance, qConstantCurrent and qConstantPower shall equal 1. Default: false */
		CIMPP::Boolean exponentModel;

		/** \brief Portion of active power load modeled as constant current. Default: nullptr */
		CIMPP::Simple_Float pConstantCurrent;

		/** \brief Portion of active power load modeled as constant impedance. Default: nullptr */
		CIMPP::Simple_Float pConstantImpedance;

		/** \brief Portion of active power load modeled as constant power. Default: nullptr */
		CIMPP::Simple_Float pConstantPower;

		/** \brief Exponent of per unit frequency effecting active power. Default: nullptr */
		CIMPP::Simple_Float pFrequencyExponent;

		/** \brief Exponent of per unit voltage effecting real power. Default: nullptr */
		CIMPP::Simple_Float pVoltageExponent;

		/** \brief Portion of reactive power load modeled as constant current. Default: nullptr */
		CIMPP::Simple_Float qConstantCurrent;

		/** \brief Portion of reactive power load modeled as constant impedance. Default: nullptr */
		CIMPP::Simple_Float qConstantImpedance;

		/** \brief Portion of reactive power load modeled as constant power. Default: nullptr */
		CIMPP::Simple_Float qConstantPower;

		/** \brief Exponent of per unit frequency effecting reactive power. Default: nullptr */
		CIMPP::Simple_Float qFrequencyExponent;

		/** \brief Exponent of per unit voltage effecting reactive power. Default: nullptr */
		CIMPP::Simple_Float qVoltageExponent;

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

	BaseClass* LoadResponseCharacteristic_factory();
}
#endif
