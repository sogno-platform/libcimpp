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
#include "Float.hpp"

namespace CIMPP
{
	class EnergyConsumer;

	/** \brief Models the characteristic response of the load demand due to changes in system conditions such as voltage and frequency. It is not related to demand response. If LoadResponseCharacteristic.exponentModel is True, the exponential voltage or frequency dependent models are specified and used as to calculate active and reactive power components of the load model. The equations to calculate active and reactive power components of the load model are internal to the power flow calculation, hence they use different quantities depending on the use case of the data exchange.  The equations for exponential voltage dependent load model injected power are:  pInjection= Pnominal* (Voltage/cim:BaseVoltage.nominalVoltage) ** cim:LoadResponseCharacteristic.pVoltageExponent qInjection= Qnominal* (Voltage/cim:BaseVoltage.nominalVoltage) ** cim:LoadResponseCharacteristic.qVoltageExponent Where:  1) * means "multiply" and ** is "raised to power of"; 2) Pnominal and Qnominal represent the active power and reactive power at nominal voltage as any load described by the voltage exponential model shall be given at nominal voltage.  This means that EnergyConsumer.p and EnergyConsumer.q  are at nominal voltage. 3) After power flow is solved:  -pInjection and qInjection correspond to SvPowerflow.p and SvPowerflow.q respectively.   - Voltage corresponds to SvVoltage.v at the TopologicalNode where the load is connected. */
	class LoadResponseCharacteristic : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadResponseCharacteristic();
		~LoadResponseCharacteristic() override;

		/** \brief The set of loads that have the response characteristics. Default: 0 */
		std::list<CIMPP::EnergyConsumer*> EnergyConsumer;

		/** \brief Indicates the exponential voltage dependency model is to be used. If false, the coefficient model is to be used. The exponential voltage dependency model consist of the attributes: - pVoltageExponent - qVoltageExponent - pFrequencyExponent - qFrequencyExponent. The coefficient model consist of the attributes: - pConstantImpedance - pConstantCurrent - pConstantPower - qConstantImpedance - qConstantCurrent - qConstantPower. The sum of pConstantImpedance, pConstantCurrent and pConstantPower shall equal 1. The sum of qConstantImpedance, qConstantCurrent and qConstantPower shall equal 1. Default: false */
		CIMPP::Boolean exponentModel;

		/** \brief Portion of active power load modelled as constant current. Default: 0.0 */
		CIMPP::Float pConstantCurrent;

		/** \brief Portion of active power load modelled as constant impedance. Default: 0.0 */
		CIMPP::Float pConstantImpedance;

		/** \brief Portion of active power load modelled as constant power. Default: 0.0 */
		CIMPP::Float pConstantPower;

		/** \brief Exponent of per unit frequency effecting active power. Default: 0.0 */
		CIMPP::Float pFrequencyExponent;

		/** \brief Exponent of per unit voltage effecting real power. Default: 0.0 */
		CIMPP::Float pVoltageExponent;

		/** \brief Portion of reactive power load modelled as constant current. Default: 0.0 */
		CIMPP::Float qConstantCurrent;

		/** \brief Portion of reactive power load modelled as constant impedance. Default: 0.0 */
		CIMPP::Float qConstantImpedance;

		/** \brief Portion of reactive power load modelled as constant power. Default: 0.0 */
		CIMPP::Float qConstantPower;

		/** \brief Exponent of per unit frequency effecting reactive power. Default: 0.0 */
		CIMPP::Float qFrequencyExponent;

		/** \brief Exponent of per unit voltage effecting reactive power. Default: 0.0 */
		CIMPP::Float qVoltageExponent;

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
