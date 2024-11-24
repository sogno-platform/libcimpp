#ifndef MechanicalLoadDynamics_H
#define MechanicalLoadDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class AsynchronousMachineDynamics;
class SynchronousMachineDynamics;
	/*
	Mechanical load function block whose behavior is described by reference to a standard model
	*/
	class MechanicalLoadDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics; 	/* Asynchronous machine model with which this mechanical load model is associated. Default: 0 */
					CIMPP::SynchronousMachineDynamics* SynchronousMachineDynamics; 	/* Synchronous machine model with which this mechanical load model is associated. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		MechanicalLoadDynamics();
		virtual ~MechanicalLoadDynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* MechanicalLoadDynamics_factory();
}
#endif
