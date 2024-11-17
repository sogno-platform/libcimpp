#ifndef TurbineGovernorDynamics_H
#define TurbineGovernorDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class AsynchronousMachineDynamics;
class SynchronousMachineDynamics;
class TurbineLoadControllerDynamics;
	/*
	Turbine-governor function block whose behavior is described by reference to a standard model
	*/
	class TurbineGovernorDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics; 	/* Asynchronous machine model with which this turbine-governor model is associated. Default: 0 */
					std::list<CIMPP::SynchronousMachineDynamics*> SynchronousMachineDynamics; 	/* Turbine-governor model associated with this synchronous machine model. Default: 0 */
					CIMPP::TurbineLoadControllerDynamics* TurbineLoadControllerDynamics; 	/* Turbine load controller providing input to this turbine-governor. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		TurbineGovernorDynamics();
		virtual ~TurbineGovernorDynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TurbineGovernorDynamics_factory();
}
#endif
