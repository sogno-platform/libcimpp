#ifndef FossilFuel_H
#define FossilFuel_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "FuelType.hpp"

namespace CIMPP
{
	class ThermalGeneratingUnit;

	/*
	The fossil fuel consumed by the non-nuclear thermal generating unit.   For example, coal, oil, gas, etc.   These are the specific fuels that the generating unit can consume.
	*/
	class FossilFuel : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		FossilFuel();
		~FossilFuel() override;

		CIMPP::ThermalGeneratingUnit* ThermalGeneratingUnit;  /* A thermal generating unit may have one or more fossil fuels. Default: 0 */
		CIMPP::FuelType fossilFuelType;  /* The type of fossil fuel, such as coal, oil, or gas. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* FossilFuel_factory();
}
#endif
