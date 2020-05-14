#ifndef SvInjection_H
#define SvInjection_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"
#include "ReactivePower.hpp"

namespace CIMPP {


class TopologicalNode;
	/*
	The SvInjection is reporting the calculated bus injection minus the sum of the terminal flows. The terminal flow is positive out from the bus (load sign convention) and bus injection has positive flow into the bus. SvInjection may have the remainder after state estimation or slack after power flow calculation.
	*/
	class SvInjection: public BaseClass
	{

	public:
					CIMPP::ActivePower pInjection; 	/* The active power injected into the bus in addition to injections from equipment terminals.  Positive sign means injection into the TopologicalNode (bus). Default: nullptr */
					CIMPP::ReactivePower qInjection; 	/* The reactive power injected into the bus in addition to injections from equipment terminals. Positive sign means injection into the TopologicalNode (bus). Default: nullptr */
					CIMPP::TopologicalNode* TopologicalNode; 	/* The injection flows state variables associated with the topological node. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		SvInjection();
		virtual ~SvInjection();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SvInjection_factory();
}
#endif
