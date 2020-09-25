#ifndef AsynchronousMachineDynamics_H
#define AsynchronousMachineDynamics_H

#include "RotatingMachineDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class AsynchronousMachine;
class MechanicalLoadDynamics;
class WindTurbineType1or2Dynamics;
class TurbineGovernorDynamics;
	/*
	Asynchronous machine whose behaviour is described by reference to a standard model expressed in either time constant reactance form or equivalent circuit form
	*/
	class AsynchronousMachineDynamics: public RotatingMachineDynamics
	{

	public:
					CIMPP::AsynchronousMachine* AsynchronousMachine; 	/* Asynchronous machine to which this asynchronous machine dynamics model applies. Default: 0 */
					CIMPP::MechanicalLoadDynamics* MechanicalLoadDynamics; 	/* Mechanical load model associated with this asynchronous machine model. Default: 0 */
					CIMPP::WindTurbineType1or2Dynamics* WindTurbineType1or2Dynamics; 	/* Wind generator type 1 or 2 model associated with this asynchronous machine model. Default: 0 */
					CIMPP::TurbineGovernorDynamics* TurbineGovernorDynamics; 	/* Turbine-governor model associated with this asynchronous machine model. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		AsynchronousMachineDynamics();
		virtual ~AsynchronousMachineDynamics();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AsynchronousMachineDynamics_factory();
}
#endif
