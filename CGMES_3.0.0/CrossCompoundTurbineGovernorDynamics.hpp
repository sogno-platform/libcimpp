#ifndef CrossCompoundTurbineGovernorDynamics_H
#define CrossCompoundTurbineGovernorDynamics_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "DynamicsFunctionBlock.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class SynchronousMachineDynamics;

	/*
	Turbine-governor cross-compound function block whose behaviour is described by reference to a standard model <font color="#0f0f0f">or by definition of a user-defined model.</font>
	*/
	class CrossCompoundTurbineGovernorDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		CrossCompoundTurbineGovernorDynamics();
		~CrossCompoundTurbineGovernorDynamics() override;

		CIMPP::SynchronousMachineDynamics* HighPressureSynchronousMachineDynamics;  /* High-pressure synchronous machine with which this cross-compound turbine governor is associated. Default: 0 */
		CIMPP::SynchronousMachineDynamics* LowPressureSynchronousMachineDynamics;  /* Low-pressure synchronous machine with which this cross-compound turbine governor is associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* CrossCompoundTurbineGovernorDynamics_factory();
}
#endif
