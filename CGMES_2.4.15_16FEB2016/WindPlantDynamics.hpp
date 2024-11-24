#ifndef WindPlantDynamics_H
#define WindPlantDynamics_H

#include "DynamicsFunctionBlock.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RemoteInputSignal;
class WindTurbineType3or4Dynamics;
	/*
	Parent class supporting relationships to wind turbines Type 3 and 4 and wind plant IEC and user defined wind plants including their control models.
	*/
	class WindPlantDynamics: public DynamicsFunctionBlock
	{

	public:
					CIMPP::RemoteInputSignal* RemoteInputSignal; 	/* The wind plant using the remote signal. Default: 0 */
					std::list<CIMPP::WindTurbineType3or4Dynamics*> WindTurbineType3or4Dynamics; 	/* The wind turbine type 3 or 4 associated with this wind plant. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		WindPlantDynamics();
		virtual ~WindPlantDynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindPlantDynamics_factory();
}
#endif
