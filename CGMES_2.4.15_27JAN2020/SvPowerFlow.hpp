#ifndef SvPowerFlow_H
#define SvPowerFlow_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "ReactivePower.hpp"

namespace CIMPP {


class Terminal;
	/*
	State variable for power flow. Load convention is used for flow direction. This means flow out from the TopologicalNode into the equipment is positive.
	*/
	class SvPowerFlow: public BaseClass
	{

	public:
					CIMPP::Terminal* Terminal; 	/* The terminal associated with the power flow state variable. Default: 0 */
					CIMPP::ActivePower p; 	/* The active power flow. Load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. Default: nullptr */
					CIMPP::ReactivePower q; 	/* The reactive power flow. Load sign convention is used, i.e. positive sign means flow out from a TopologicalNode (bus) into the conducting equipment. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SvPowerFlow();
		virtual ~SvPowerFlow();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SvPowerFlow_factory();
}
#endif
