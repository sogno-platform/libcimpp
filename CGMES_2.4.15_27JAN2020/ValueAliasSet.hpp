#ifndef ValueAliasSet_H
#define ValueAliasSet_H
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
	class Command;
	class Discrete;
	class RaiseLowerCommand;
	class ValueToAlias;

	/*
	Describes the translation of a set of values into a name and is intendend to facilitate cusom translations. Each ValueAliasSet has a name, description etc. A specific Measurement may represent a discrete state like Open, Closed, Intermediate etc. This requires a translation from the MeasurementValue.value number to a string, e.g. 0->"Invalid", 1->"Open", 2->"Closed", 3->"Intermediate". Each ValueToAlias member in ValueAliasSet.Value describe a mapping for one particular value to a name.
	*/
	class ValueAliasSet : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		ValueAliasSet();
		~ValueAliasSet() override;

		std::list<CIMPP::Command*> Commands;  /* The Commands using the set for translation. Default: 0 */
		std::list<CIMPP::Discrete*> Discretes;  /* The Measurements using the set for translation. Default: 0 */
		std::list<CIMPP::RaiseLowerCommand*> RaiseLowerCommands;  /* The Commands using the set for translation. Default: 0 */
		std::list<CIMPP::ValueToAlias*> Values;  /* The ValueAliasSet having the ValueToAlias mappings. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ValueAliasSet_factory();
}
#endif
