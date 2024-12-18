#ifndef PFVArControllerType2Dynamics_H
#define PFVArControllerType2Dynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ExcitationSystemDynamics;
	/*
	Power Factor or VAr controller Type II function block whose behaviour is described by reference to a standard model
	*/
	class PFVArControllerType2Dynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics; 	/* Excitation system model with which this Power Factor or VAr controller Type II is associated. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PFVArControllerType2Dynamics();
		virtual ~PFVArControllerType2Dynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PFVArControllerType2Dynamics_factory();
}
#endif
