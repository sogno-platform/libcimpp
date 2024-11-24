#ifndef ValueToAlias_H
#define ValueToAlias_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class ValueAliasSet;

	/*
	Describes the translation of one particular value into a name, e.g. 1 as "Open".
	*/
	class ValueToAlias : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		ValueToAlias();
		~ValueToAlias() override;

		CIMPP::ValueAliasSet* ValueAliasSet;  /* The ValueAliasSet having the ValueToAlias mappings. Default: 0 */
		CIMPP::Integer value;  /* The value that is mapped. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ValueToAlias_factory();
}
#endif
