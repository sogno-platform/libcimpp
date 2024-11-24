#ifndef LoadResponseCharacteristic_H
#define LoadResponseCharacteristic_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"
#include "Float.hpp"

namespace CIMPP
{
	class EnergyConsumer;

	/*
	Models the characteristic response of the load demand due to changes in system conditions such as voltage and frequency. It is not related to demand response. If LoadResponseCharacteristic.exponentModel is True, the exponential voltage or frequency dependent models are specified and used as to calculate active and reactive power components of the load model. The equations to calculate active and reactive power components of the load model are internal to the power flow calculation, hence they use different quantities depending on the use case of the data exchange.  The equations for exponential voltage dependent load model injected power are:  pInjection= Pnominal* (Voltage/cim:BaseVoltage.nominalVoltage) ** cim:LoadResponseCharacteristic.pVoltageExponent qInjection= Qnominal* (Voltage/cim:BaseVoltage.nominalVoltage) ** cim:LoadResponseCharacteristic.qVoltageExponent Where:  1) * means "multiply" and ** is "raised to power of"; 2) Pnominal and Qnominal represent the active power and reactive power at nominal voltage as any load described by the voltage exponential model shall be given at nominal voltage.  This means that EnergyConsumer.p and EnergyConsumer.q  are at nominal voltage. 3) After power flow is solved:  -pInjection and qInjection correspond to SvPowerflow.p and SvPowerflow.q respectively.   - Voltage corresponds to SvVoltage.v at the TopologicalNode where the load is connected.
	*/
	class LoadResponseCharacteristic : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		LoadResponseCharacteristic();
		~LoadResponseCharacteristic() override;

		std::list<CIMPP::EnergyConsumer*> EnergyConsumer;  /* The set of loads that have the response characteristics. Default: 0 */
		CIMPP::Boolean exponentModel;  /* Indicates the exponential voltage dependency model is to be used. If false, the coefficient model is to be used. The exponential voltage dependency model consist of the attributes: - pVoltageExponent - qVoltageExponent - pFrequencyExponent - qFrequencyExponent. The coefficient model consist of the attributes: - pConstantImpedance - pConstantCurrent - pConstantPower - qConstantImpedance - qConstantCurrent - qConstantPower. The sum of pConstantImpedance, pConstantCurrent and pConstantPower shall equal 1. The sum of qConstantImpedance, qConstantCurrent and qConstantPower shall equal 1. Default: false */
		CIMPP::Float pConstantCurrent;  /* Portion of active power load modelled as constant current. Default: 0.0 */
		CIMPP::Float pConstantImpedance;  /* Portion of active power load modelled as constant impedance. Default: 0.0 */
		CIMPP::Float pConstantPower;  /* Portion of active power load modelled as constant power. Default: 0.0 */
		CIMPP::Float pFrequencyExponent;  /* Exponent of per unit frequency effecting active power. Default: 0.0 */
		CIMPP::Float pVoltageExponent;  /* Exponent of per unit voltage effecting real power. Default: 0.0 */
		CIMPP::Float qConstantCurrent;  /* Portion of reactive power load modelled as constant current. Default: 0.0 */
		CIMPP::Float qConstantImpedance;  /* Portion of reactive power load modelled as constant impedance. Default: 0.0 */
		CIMPP::Float qConstantPower;  /* Portion of reactive power load modelled as constant power. Default: 0.0 */
		CIMPP::Float qFrequencyExponent;  /* Exponent of per unit frequency effecting reactive power. Default: 0.0 */
		CIMPP::Float qVoltageExponent;  /* Exponent of per unit voltage effecting reactive power. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* LoadResponseCharacteristic_factory();
}
#endif
