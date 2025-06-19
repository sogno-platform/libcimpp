#ifndef HydroGeneratingUnit_H
#define HydroGeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "GeneratingUnit.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "HydroEnergyConversionKind.hpp"

namespace CIMPP
{
	class HydroPowerPlant;

	/** \brief A generating unit whose prime mover is a hydraulic turbine (e.g., Francis, Pelton, Kaplan). */
	class HydroGeneratingUnit : public GeneratingUnit
	{
	public:
		/* constructor initialising all attributes to null */
		HydroGeneratingUnit();
		~HydroGeneratingUnit() override;

		/** \brief The hydro generating unit belongs to a hydro power plant. Default: 0 */
		CIMPP::HydroPowerPlant* HydroPowerPlant;

		/** \brief Energy conversion capability for generating. Default: 0 */
		CIMPP::HydroEnergyConversionKind energyConversionCapability;

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

	BaseClass* HydroGeneratingUnit_factory();
}
#endif
