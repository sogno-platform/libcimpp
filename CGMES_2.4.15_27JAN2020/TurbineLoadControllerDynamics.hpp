#ifndef TurbineLoadControllerDynamics_H
#define TurbineLoadControllerDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class TurbineGovernorDynamics;
	/*
	Turbine load controller function block whose behavior is described by reference to a standard model
	*/
	class TurbineLoadControllerDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::TurbineGovernorDynamics* TurbineGovernorDynamics; 	/* Turbine-governor controlled by this turbine load controller. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		TurbineLoadControllerDynamics();
		virtual ~TurbineLoadControllerDynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TurbineLoadControllerDynamics_factory();
}
#endif
