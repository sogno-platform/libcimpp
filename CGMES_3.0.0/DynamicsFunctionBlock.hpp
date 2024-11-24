#ifndef DynamicsFunctionBlock_H
#define DynamicsFunctionBlock_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{

	/*
	Abstract parent class for all Dynamics function blocks.
	*/
	class DynamicsFunctionBlock : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DynamicsFunctionBlock();
		~DynamicsFunctionBlock() override;

		CIMPP::Boolean enabled;  /* Function block used indicator. true = use of function block is enabled false = use of function block is disabled. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DynamicsFunctionBlock_factory();
}
#endif
