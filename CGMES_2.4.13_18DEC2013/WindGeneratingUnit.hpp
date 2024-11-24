#ifndef WindGeneratingUnit_H
#define WindGeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "GeneratingUnit.hpp"
#include "BaseClassDefiner.hpp"
#include "WindGenUnitKind.hpp"

namespace CIMPP
{

	/*
	A wind driven generating unit.  May be used to represent a single turbine or an aggregation.
	*/
	class WindGeneratingUnit : public GeneratingUnit
	{
	public:
		/* constructor initialising all attributes to null */
		WindGeneratingUnit();
		~WindGeneratingUnit() override;

		CIMPP::WindGenUnitKind windGenUnitType;  /* The kind of wind generating unit Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* WindGeneratingUnit_factory();
}
#endif
