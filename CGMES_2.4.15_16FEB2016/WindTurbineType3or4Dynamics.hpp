#ifndef WindTurbineType3or4Dynamics_H
#define WindTurbineType3or4Dynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class EnergySource;
class RemoteInputSignal;
class WindPlantDynamics;
	/*
	Parent class supporting relationships to wind turbines Type 3 and 4 and wind plant including their control models.
	*/
	class WindTurbineType3or4Dynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::EnergySource* EnergySource; 	/* Energy Source (current source) with which this wind Type 3 or 4 dynamics model is asoociated. Default: 0 */
					CIMPP::RemoteInputSignal* RemoteInputSignal; 	/* Wind turbine Type 3 or 4 models using this remote input signal. Default: 0 */
					CIMPP::WindPlantDynamics* WindPlantDynamics; 	/* The wind plant with which the wind turbines type 3 or 4 are associated. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindTurbineType3or4Dynamics();
		virtual ~WindTurbineType3or4Dynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindTurbineType3or4Dynamics_factory();
}
#endif
