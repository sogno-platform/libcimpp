#ifndef ControlAreaGeneratingUnit_H
#define ControlAreaGeneratingUnit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class ControlArea;
	class GeneratingUnit;

	/*
	A control area generating unit. This class is needed so that alternate control area definitions may include the same generating unit.   It should be noted that only one instance within a control area should reference a specific generating unit.
	*/
	class ControlAreaGeneratingUnit : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		ControlAreaGeneratingUnit();
		~ControlAreaGeneratingUnit() override;

		CIMPP::ControlArea* ControlArea;  /* The parent control area for the generating unit specifications. Default: 0 */
		CIMPP::GeneratingUnit* GeneratingUnit;  /* The generating unit specified for this control area.  Note that a control area should include a GeneratingUnit only once. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ControlAreaGeneratingUnit_factory();
}
#endif
