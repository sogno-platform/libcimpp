#ifndef PFVArControllerType1Dynamics_H
#define PFVArControllerType1Dynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RemoteInputSignal;
class ExcitationSystemDynamics;
class VoltageAdjusterDynamics;
	/*
	Power Factor or VAr controller Type I function block whose behaviour is described by reference to a standard model
	*/
	class PFVArControllerType1Dynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::RemoteInputSignal* RemoteInputSignal; 	/* Remote input signal used by this Power Factor or VAr controller Type I model. Default: 0 */
					CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics; 	/* Excitation system model with which this Power Factor or VAr controller Type I model is associated. Default: 0 */
					CIMPP::VoltageAdjusterDynamics* VoltageAdjusterDynamics; 	/* Voltage adjuster model associated with this Power Factor or VA controller Type I model. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PFVArControllerType1Dynamics();
		virtual ~PFVArControllerType1Dynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PFVArControllerType1Dynamics_factory();
}
#endif
