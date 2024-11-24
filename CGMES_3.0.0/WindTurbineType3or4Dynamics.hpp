#ifndef WindTurbineType3or4Dynamics_H
#define WindTurbineType3or4Dynamics_H
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
	class PowerElectronicsConnection;
	class RemoteInputSignal;
	class WindPlantDynamics;

	/*
	Parent class supporting relationships to wind turbines type 3 and type 4 and wind plant including their control models.
	*/
	class WindTurbineType3or4Dynamics : public DynamicsFunctionBlock
	{
	public:
		/* constructor initialising all attributes to null */
		WindTurbineType3or4Dynamics();
		~WindTurbineType3or4Dynamics() override;

		CIMPP::PowerElectronicsConnection* PowerElectronicsConnection;  /* The power electronics connection associated with this wind turbine type 3 or type 4 dynamics model. Default: 0 */
		CIMPP::RemoteInputSignal* RemoteInputSignal;  /* Remote input signal used by these wind turbine type 3 or type 4 models. Default: 0 */
		CIMPP::WindPlantDynamics* WindPlantDynamics;  /* The wind plant with which the wind turbines type 3 or type 4 are associated. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindTurbineType3or4Dynamics_factory();
}
#endif
