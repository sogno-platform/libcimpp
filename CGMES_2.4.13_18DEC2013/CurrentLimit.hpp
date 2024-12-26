#ifndef CurrentLimit_H
#define CurrentLimit_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "OperationalLimit.hpp"
#include "BaseClassDefiner.hpp"
#include "CurrentFlow.hpp"

namespace CIMPP
{

	/*
	Operational limit on current.
	*/
	class CurrentLimit : public OperationalLimit
	{
	public:
		/* constructor initialising all attributes to null */
		CurrentLimit();
		~CurrentLimit() override;

		CIMPP::CurrentFlow value;  /* Limit on current flow. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* CurrentLimit_factory();
}
#endif
