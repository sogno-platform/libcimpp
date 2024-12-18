#ifndef TurbineLoadControllerDynamics_H
#define TurbineLoadControllerDynamics_H
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
	class TurbineGovernorDynamics;

	/*
	Turbine load controller function block whose behavior is described by reference to a standard model
	*/
	class TurbineLoadControllerDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		TurbineLoadControllerDynamics();
		~TurbineLoadControllerDynamics() override;

		CIMPP::TurbineGovernorDynamics* TurbineGovernorDynamics;  /* Turbine-governor controlled by this turbine load controller. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TurbineLoadControllerDynamics_factory();
}
#endif
