#ifndef SynchronousMachineDynamics_H
#define SynchronousMachineDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "RotatingMachineDynamics.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class ExcitationSystemDynamics;
	class GenICompensationForGenJ;
	class MechanicalLoadDynamics;
	class SynchronousMachine;
	class TurbineGovernorDynamics;

	/*
	Synchronous machine whose behaviour is described by reference to a standard model expressed in one of the following forms:
	*/
	class SynchronousMachineDynamics : public RotatingMachineDynamics
	{
	public:
		/* constructor initialising all attributes to null */
		SynchronousMachineDynamics();
		~SynchronousMachineDynamics() override;

		CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics;  /* Excitation system model associated with this synchronous machine model. Default: 0 */
		std::list<CIMPP::GenICompensationForGenJ*> GenICompensationForGenJ;  /* Compensation of voltage compensator`s generator for current flow out of this  generator. Default: 0 */
		CIMPP::MechanicalLoadDynamics* MechanicalLoadDynamics;  /* Mechanical load model associated with this synchronous machine model. Default: 0 */
		CIMPP::SynchronousMachine* SynchronousMachine;  /* Synchronous machine to which synchronous machine dynamics model applies. Default: 0 */
		std::list<CIMPP::TurbineGovernorDynamics*> TurbineGovernorDynamics;  /* Synchronous machine model with which this turbine-governor model is associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SynchronousMachineDynamics_factory();
}
#endif
