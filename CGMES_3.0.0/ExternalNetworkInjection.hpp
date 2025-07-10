#ifndef ExternalNetworkInjection_H
#define ExternalNetworkInjection_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "RegulatingCondEq.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "ActivePower.hpp"
#include "ActivePowerPerFrequency.hpp"
#include "Boolean.hpp"
#include "CurrentFlow.hpp"
#include "Float.hpp"
#include "Integer.hpp"
#include "PU.hpp"
#include "ReactivePower.hpp"

namespace CIMPP
{

	/** \brief This class represents the external network and it is used for IEC 60909 calculations. */
	class ExternalNetworkInjection : public RegulatingCondEq
	{
	public:
		/* constructor initialising all attributes to null */
		ExternalNetworkInjection();
		~ExternalNetworkInjection() override;

		/** \brief Power Frequency Bias. This is the change in power injection divided by the change in frequency and negated.  A positive value of the power frequency bias provides additional power injection upon a drop in frequency. Default: nullptr */
		CIMPP::ActivePowerPerFrequency governorSCD;

		/** \brief Indicates whether initial symmetrical short-circuit current and power have been calculated according to IEC (Ik`).  Used only if short circuit calculations are done according to superposition method. Default: false */
		CIMPP::Boolean ikSecond;

		/** \brief Maximum initial symmetrical short-circuit currents (Ik` max) in A (Ik` = Sk`/(SQRT(3) Un)). Used for short circuit data exchange according to IEC 60909. Default: nullptr */
		CIMPP::CurrentFlow maxInitialSymShCCurrent;

		/** \brief Maximum active power of the injection. Default: nullptr */
		CIMPP::ActivePower maxP;

		/** \brief Maximum reactive power limit. It is used for modelling of infeed for load flow exchange and not for short circuit modelling. Default: nullptr */
		CIMPP::ReactivePower maxQ;

		/** \brief Maximum ratio of zero sequence resistance of Network Feeder to its zero sequence reactance (R(0)/X(0) max). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float maxR0ToX0Ratio;

		/** \brief Maximum ratio of positive sequence resistance of Network Feeder to its positive sequence reactance (R(1)/X(1) max). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float maxR1ToX1Ratio;

		/** \brief Maximum ratio of zero sequence impedance to its positive sequence impedance (Z(0)/Z(1) max). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float maxZ0ToZ1Ratio;

		/** \brief Minimum initial symmetrical short-circuit currents (Ik` min) in A (Ik` = Sk`/(SQRT(3) Un)). Used for short circuit data exchange according to IEC 60909. Default: nullptr */
		CIMPP::CurrentFlow minInitialSymShCCurrent;

		/** \brief Minimum active power of the injection. Default: nullptr */
		CIMPP::ActivePower minP;

		/** \brief Minimum reactive power limit. It is used for modelling of infeed for load flow exchange and not for short circuit modelling. Default: nullptr */
		CIMPP::ReactivePower minQ;

		/** \brief Indicates whether initial symmetrical short-circuit current and power have been calculated according to IEC (Ik`). Used for short circuit data exchange according to IEC 6090. Default: 0.0 */
		CIMPP::Float minR0ToX0Ratio;

		/** \brief Minimum ratio of positive sequence resistance of Network Feeder to its positive sequence reactance (R(1)/X(1) min). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float minR1ToX1Ratio;

		/** \brief Minimum ratio of zero sequence impedance to its positive sequence impedance (Z(0)/Z(1) min). Used for short circuit data exchange according to IEC 60909. Default: 0.0 */
		CIMPP::Float minZ0ToZ1Ratio;

		/** \brief Active power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ActivePower p;

		/** \brief Reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for steady state solutions. Default: nullptr */
		CIMPP::ReactivePower q;

		/** \brief Priority of unit for use as powerflow voltage phase angle reference bus selection. 0 = don t care (default) 1 = highest priority. 2 is less than 1 and so on. Default: 0 */
		CIMPP::Integer referencePriority;

		/** \brief Voltage factor in pu, which was used to calculate short-circuit current Ik` and power Sk`.  Used only if short circuit calculations are done according to superposition method. Default: nullptr */
		CIMPP::PU voltageFactor;

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

	BaseClass* ExternalNetworkInjection_factory();
}
#endif
