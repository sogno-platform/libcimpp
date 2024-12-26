#ifndef WindTurbineType1or2Dynamics_H
#define WindTurbineType1or2Dynamics_H
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
	class AsynchronousMachineDynamics;
	class RemoteInputSignal;

	/*
	Parent class supporting relationships to wind turbines Type 1 and 2 and their control models.
	*/
	class WindTurbineType1or2Dynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType1or2Dynamics();
		~WindTurbineType1or2Dynamics() override;

		CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics;  /* Asynchronous machine model with which this wind generator type 1 or 2 model is associated. Default: 0 */
		CIMPP::RemoteInputSignal* RemoteInputSignal;  /* Remote input signal used by this wind generator Type 1 or Type 2 model. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindTurbineType1or2Dynamics_factory();
}
#endif
