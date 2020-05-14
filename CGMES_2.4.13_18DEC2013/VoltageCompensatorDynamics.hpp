#ifndef VoltageCompensatorDynamics_H
#define VoltageCompensatorDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RemoteInputSignal;
class ExcitationSystemDynamics;
	/*
	Voltage compensator function block whose behaviour is described by reference to a standard model
	*/
	class VoltageCompensatorDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::RemoteInputSignal* RemoteInputSignal; 	/* Remote input signal used by this voltage compensator model. Default: 0 */
					CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics; 	/* Excitation system model with which this voltage compensator is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		VoltageCompensatorDynamics();
		virtual ~VoltageCompensatorDynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VoltageCompensatorDynamics_factory();
}
#endif
