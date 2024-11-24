#ifndef SolarGeneratingUnit_H
#define SolarGeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "GeneratingUnit.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class SolarPowerPlant;

	/*
	A solar thermal generating unit, connected to the grid by means of a rotating machine.  This class does not represent photovoltaic (PV) generation.
	*/
	class SolarGeneratingUnit : public GeneratingUnit
	{
	public:
		/* constructor initialising all attributes to null */
		SolarGeneratingUnit();
		~SolarGeneratingUnit() override;

		CIMPP::SolarPowerPlant* SolarPowerPlant;  /* A solar power plant may have solar generating units. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SolarGeneratingUnit_factory();
}
#endif
