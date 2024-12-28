#ifndef WindTurbineType3or4Dynamics_H
#define WindTurbineType3or4Dynamics_H
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
	class EnergySource;
	class RemoteInputSignal;
	class WindPlantDynamics;

	/*
	Parent class supporting relationships to wind turbines Type 3 and 4 and wind plant including their control models.
	*/
	class WindTurbineType3or4Dynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType3or4Dynamics();
		~WindTurbineType3or4Dynamics() override;

		CIMPP::EnergySource* EnergySource;  /* Energy Source (current source) with which this wind Type 3 or 4 dynamics model is asoociated. Default: 0 */
		CIMPP::RemoteInputSignal* RemoteInputSignal;  /* Wind turbine Type 3 or 4 models using this remote input signal. Default: 0 */
		CIMPP::WindPlantDynamics* WindPlantDynamics;  /* The wind plant with which the wind turbines type 3 or 4 are associated. Default: 0 */

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

	BaseClass* WindTurbineType3or4Dynamics_factory();
}
#endif
