#ifndef SolarPowerPlant_H
#define SolarPowerPlant_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class SolarGeneratingUnit;

	/*
	Solar power plant.
	*/
	class SolarPowerPlant : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		SolarPowerPlant();
		~SolarPowerPlant() override;

		std::list<CIMPP::SolarGeneratingUnit*> SolarGeneratingUnits;  /* A solar generating unit or units may be a member of a solar power plant. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SolarPowerPlant_factory();
}
#endif
