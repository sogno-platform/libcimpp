#ifndef TurbineGovernorDynamics_H
#define TurbineGovernorDynamics_H
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
	class SynchronousMachineDynamics;
	class TurbineLoadControllerDynamics;

	/*
	Turbine-governor function block whose behavior is described by reference to a standard model
	*/
	class TurbineGovernorDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		TurbineGovernorDynamics();
		~TurbineGovernorDynamics() override;

		CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics;  /* Asynchronous machine model with which this turbine-governor model is associated. Default: 0 */
		std::list<CIMPP::SynchronousMachineDynamics*> SynchronousMachineDynamics;  /* Turbine-governor model associated with this synchronous machine model. Default: 0 */
		CIMPP::TurbineLoadControllerDynamics* TurbineLoadControllerDynamics;  /* Turbine load controller providing input to this turbine-governor. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TurbineGovernorDynamics_factory();
}
#endif
