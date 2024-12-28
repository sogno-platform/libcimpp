#ifndef ValueToAlias_H
#define ValueToAlias_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
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

		CIMPP::ValueAliasSet* ValueAliasSet;  /* The ValueToAlias mappings included in the set. Default: 0 */
		CIMPP::Integer value;  /* The value that is mapped. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* ValueToAlias_factory();
}
#endif
