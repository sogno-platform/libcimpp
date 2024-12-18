#ifndef SynchronousMachineDynamics_H
#define SynchronousMachineDynamics_H

#include "RotatingMachineDynamics.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ExcitationSystemDynamics;
class GenICompensationForGenJ;
class MechanicalLoadDynamics;
class SynchronousMachine;
class TurbineGovernorDynamics;
	/*
	Synchronous machine whose behaviour is described by reference to a standard model expressed in one of the following forms:
	*/
	class SynchronousMachineDynamics: public RotatingMachineDynamics
	{

	public:
					CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics; 	/* Excitation system model associated with this synchronous machine model. Default: 0 */
					std::list<CIMPP::GenICompensationForGenJ*> GenICompensationForGenJ; 	/* Compensation of voltage compensator`s generator for current flow out of this  generator. Default: 0 */
					CIMPP::MechanicalLoadDynamics* MechanicalLoadDynamics; 	/* Mechanical load model associated with this synchronous machine model. Default: 0 */
					CIMPP::SynchronousMachine* SynchronousMachine; 	/* Synchronous machine to which synchronous machine dynamics model applies. Default: 0 */
					std::list<CIMPP::TurbineGovernorDynamics*> TurbineGovernorDynamics; 	/* Synchronous machine model with which this turbine-governor model is associated. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SynchronousMachineDynamics();
		virtual ~SynchronousMachineDynamics();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SynchronousMachineDynamics_factory();
}
#endif
