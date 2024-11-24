#ifndef CombinedCyclePlant_H
#define CombinedCyclePlant_H
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
	class ThermalGeneratingUnit;

	/*
	A set of combustion turbines and steam turbines where the exhaust heat from the combustion turbines is recovered to make steam for the steam turbines, resulting in greater overall plant efficiency.
	*/
	class CombinedCyclePlant : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		CombinedCyclePlant();
		~CombinedCyclePlant() override;

		std::list<CIMPP::ThermalGeneratingUnit*> ThermalGeneratingUnits;  /* A thermal generating unit may be a member of a combined cycle plant. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* CombinedCyclePlant_factory();
}
#endif
