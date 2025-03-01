#ifndef TurbineGovernorDynamics_H
#define TurbineGovernorDynamics_H
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
	class AsynchronousMachineDynamics;
	class SynchronousMachineDynamics;
	class TurbineLoadControllerDynamics;

	/** \brief Turbine-governor function block whose behavior is described by reference to a standard model */
	class TurbineGovernorDynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		TurbineGovernorDynamics();
		~TurbineGovernorDynamics() override;

		/** \brief Asynchronous machine model with which this turbine-governor model is associated. Default: 0 */
		CIMPP::AsynchronousMachineDynamics* AsynchronousMachineDynamics;

		/** \brief Turbine-governor model associated with this synchronous machine model. Default: 0 */
		std::list<CIMPP::SynchronousMachineDynamics*> SynchronousMachineDynamics;

		/** \brief Turbine load controller providing input to this turbine-governor. Default: 0 */
		CIMPP::TurbineLoadControllerDynamics* TurbineLoadControllerDynamics;

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

	BaseClass* TurbineGovernorDynamics_factory();
}
#endif
