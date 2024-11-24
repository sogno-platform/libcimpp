#ifndef StaticVarCompensator_H
#define StaticVarCompensator_H

#include "RegulatingCondEq.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Reactance.hpp"
#include "ReactivePower.hpp"
#include "SVCControlMode.hpp"
#include "VoltagePerReactivePower.hpp"
#include "Voltage.hpp"

namespace CIMPP {


	/*
	A facility for providing variable and controllable shunt reactive power. The SVC typically consists of a stepdown transformer, filter, thyristor-controlled reactor, and thyristor-switched capacitor arms.  The SVC may operate in fixed MVar output mode or in voltage control mode. When in voltage control mode, the output of the SVC will be proportional to the deviation of voltage at the controlled bus from the voltage setpoint.  The SVC characteristic slope defines the proportion.  If the voltage at the controlled bus is equal to the voltage setpoint, the SVC MVar output is zero.
	*/
	class StaticVarCompensator: public RegulatingCondEq
	{

	public:
					CIMPP::Reactance capacitiveRating; 	/* Maximum available capacitive reactance. Default: nullptr */
					CIMPP::Reactance inductiveRating; 	/* Maximum available inductive reactance. Default: nullptr */
					CIMPP::ReactivePower q; 	/* Reactive power injection. Load sign convention is used, i.e. positive sign means flow out from a node. Starting value for a steady state solution. Default: nullptr */
					CIMPP::SVCControlMode sVCControlMode; 	/* SVC control mode. Default: 0 */
					CIMPP::VoltagePerReactivePower slope; 	/* The characteristics slope of an SVC defines how the reactive power output changes in proportion to the difference between the regulated bus voltage and the voltage setpoint. Default: nullptr */
					CIMPP::Voltage voltageSetPoint; 	/* The reactive power output of the SVC is proportional to the difference between the voltage at the regulated bus and the voltage setpoint.  When the regulated bus voltage is equal to the voltage setpoint, the reactive power output is zero. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		StaticVarCompensator();
		virtual ~StaticVarCompensator();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* StaticVarCompensator_factory();
}
#endif
