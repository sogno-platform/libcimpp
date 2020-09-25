#ifndef PowerSystemStabilizerDynamics_H
#define PowerSystemStabilizerDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RemoteInputSignal;
class ExcitationSystemDynamics;
	/*
	Power system stabilizer function block whose behaviour is described by reference to a standard model
	*/
	class PowerSystemStabilizerDynamics: public DynamicsFunctionBlock
	{

	public:
					std::list<CIMPP::RemoteInputSignal*> RemoteInputSignal; 	/* Remote input signal used by this power system stabilizer model. Default: 0 */
					CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics; 	/* Excitation system model with which this power system stabilizer model is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		PowerSystemStabilizerDynamics();
		virtual ~PowerSystemStabilizerDynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PowerSystemStabilizerDynamics_factory();
}
#endif
