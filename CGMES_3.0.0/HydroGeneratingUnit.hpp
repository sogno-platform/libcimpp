#ifndef HydroGeneratingUnit_H
#define HydroGeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "GeneratingUnit.hpp"
#include "BaseClassDefiner.hpp"
#include "HydroEnergyConversionKind.hpp"
#include "HydroTurbineKind.hpp"
#include "Length.hpp"

namespace CIMPP
{
	class HydroPowerPlant;

	/*
	A generating unit whose prime mover is a hydraulic turbine (e.g., Francis, Pelton, Kaplan).
	*/
	class HydroGeneratingUnit : public GeneratingUnit
	{
	public:
		/* constructor initialising all attributes to null */
		HydroGeneratingUnit();
		~HydroGeneratingUnit() override;

		CIMPP::HydroPowerPlant* HydroPowerPlant;  /* The hydro generating unit belongs to a hydro power plant. Default: 0 */
		CIMPP::Length dropHeight;  /* The height water drops from the reservoir mid-point to the turbine. Default: nullptr */
		CIMPP::HydroEnergyConversionKind energyConversionCapability;  /* Energy conversion capability for generating. Default: 0 */
		CIMPP::HydroTurbineKind turbineType;  /* Type of turbine. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* HydroGeneratingUnit_factory();
}
#endif
