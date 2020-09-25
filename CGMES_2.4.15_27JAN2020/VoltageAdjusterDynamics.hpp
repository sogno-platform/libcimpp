#ifndef VoltageAdjusterDynamics_H
#define VoltageAdjusterDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class PFVArControllerType1Dynamics;
	/*
	Voltage adjuster function block whose behaviour is described by reference to a standard model
	*/
	class VoltageAdjusterDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::PFVArControllerType1Dynamics* PFVArControllerType1Dynamics; 	/* Power Factor or VAr controller Type I model with which this voltage adjuster is associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		VoltageAdjusterDynamics();
		virtual ~VoltageAdjusterDynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VoltageAdjusterDynamics_factory();
}
#endif
