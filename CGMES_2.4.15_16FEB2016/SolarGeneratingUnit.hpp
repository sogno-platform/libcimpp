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

	/*
	A solar thermal generating unit.
	*/
	class SolarGeneratingUnit : public GeneratingUnit
	{
	public:
		/* constructor initialising all attributes to null */
		SolarGeneratingUnit();
		~SolarGeneratingUnit() override;


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
