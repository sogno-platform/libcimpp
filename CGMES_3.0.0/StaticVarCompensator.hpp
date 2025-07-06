#ifndef StaticVarCompensator_H
#define StaticVarCompensator_H
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
#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "SVCControlMode.hpp"
#include "Voltage.hpp"
#include "VoltagePerReactivePower.hpp"

namespace CIMPP
{
	class StaticVarCompensatorDynamics;

	/** \brief A facility for providing variable and controllable shunt reactive power. The SVC typically consists of a stepdown transformer, filter, thyristor-controlled reactor, and thyristor-switched capacitor arms.  The SVC may operate in fixed MVar output mode or in voltage control mode. When in voltage control mode, the output of the SVC will be proportional to the deviation of voltage at the controlled bus from the voltage setpoint.  The SVC characteristic slope defines the proportion.  If the voltage at the controlled bus is equal to the voltage setpoint, the SVC MVar output is zero. */
	class StaticVarCompensator : public RegulatingCondEq
	{
	public:
		/* constructor initialising all attributes to null */
		StaticVarCompensator();
		~StaticVarCompensator() override;

		/** \brief Static Var Compensator dynamics model used to describe dynamic behaviour of this Static Var Compensator. Default: 0 */
		CIMPP::StaticVarCompensatorDynamics* StaticVarCompensatorDynamics;

		/** \brief Capacitive reactance at maximum capacitive reactive power.  Shall always be positive. Default: nullptr */
		CIMPP::Reactance capacitiveRating;

		/** \brief Inductive reactance at maximum inductive reactive power.  Shall always be negative. Default: nullptr */
		CIMPP::Reactance inductiveRating;

		/** \brief Reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
		CIMPP::ReactivePower q;

		/** \brief SVC control mode. Default: 0 */
		CIMPP::SVCControlMode sVCControlMode;

		/** \brief The characteristics slope of an SVC defines how the reactive power output changes in proportion to the difference between the regulated bus voltage and the voltage setpoint. The attribute shall be a positive value or zero. Default: nullptr */
		CIMPP::VoltagePerReactivePower slope;

		/** \brief The reactive power output of the SVC is proportional to the difference between the voltage at the regulated bus and the voltage setpoint.  When the regulated bus voltage is equal to the voltage setpoint, the reactive power output is zero. Default: nullptr */
		CIMPP::Voltage voltageSetPoint;

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

	BaseClass* StaticVarCompensator_factory();
}
#endif
