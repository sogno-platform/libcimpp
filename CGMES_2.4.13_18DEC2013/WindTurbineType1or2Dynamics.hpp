#ifndef WindTurbineType1or2Dynamics_H
#define WindTurbineType1or2Dynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RemoteInputSignal;
class AsynchronousMachineDynamics;
	/*
	Parent class supporting relationships to wind turbines Type 1 and 2 and their control models.
	*/
	class WindTurbineType1or2Dynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::RemoteInputSignal* RemoteInputSignal; 	/* Remote input signal used by this wind generator Type 1 or Type 2 model. Default: 0 */
					CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics; 	/* Asynchronous machine model with which this wind generator type 1 or 2 model is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindTurbineType1or2Dynamics();
		virtual ~WindTurbineType1or2Dynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindTurbineType1or2Dynamics_factory();
}
#endif
