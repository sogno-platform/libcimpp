#ifndef PFVArControllerType1Dynamics_H
#define PFVArControllerType1Dynamics_H
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
	class RemoteInputSignal;
	class VoltageAdjusterDynamics;

	/*
	Power Factor or VAr controller Type I function block whose behaviour is described by reference to a standard model
	*/
	class PFVArControllerType1Dynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		PFVArControllerType1Dynamics();
		~PFVArControllerType1Dynamics() override;

		CIMPP::ExcitationSystemDynamics* ExcitationSystemDynamics;  /* Excitation system model with which this Power Factor or VAr controller Type I model is associated. Default: 0 */
		CIMPP::RemoteInputSignal* RemoteInputSignal;  /* Remote input signal used by this Power Factor or VAr controller Type I model. Default: 0 */
		CIMPP::VoltageAdjusterDynamics* VoltageAdjusterDynamics;  /* Voltage adjuster model associated with this Power Factor or VA controller Type I model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* PFVArControllerType1Dynamics_factory();
}
#endif
