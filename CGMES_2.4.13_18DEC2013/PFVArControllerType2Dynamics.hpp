#ifndef PFVArControllerType2Dynamics_H
#define PFVArControllerType2Dynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class ExcitationSystemDynamics;

	/*
	Power Factor or VAr controller Type II function block whose behaviour is described by reference to a standard model
	*/
	class PFVArControllerType2Dynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArControllerType2Dynamics();
		~PFVArControllerType2Dynamics() override;

		CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics;  /* Excitation system model with which this Power Factor or VAr controller Type II is associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PFVArControllerType2Dynamics_factory();
}
#endif
