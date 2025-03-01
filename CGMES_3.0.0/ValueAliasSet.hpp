#ifndef ValueAliasSet_H
#define ValueAliasSet_H
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

namespace CIMPP
{
	class Command;
	class Discrete;
	class RaiseLowerCommand;
	class ValueToAlias;

	/** \brief Describes the translation of a set of values into a name and is intendend to facilitate custom translations. Each ValueAliasSet has a name, description etc. A specific Measurement may represent a discrete state like Open, Closed, Intermediate etc. This requires a translation from the MeasurementValue.value number to a string, e.g. 0-&gt;"Invalid", 1-&gt;"Open", 2-&gt;"Closed", 3-&gt;"Intermediate". Each ValueToAlias member in ValueAliasSet.Value describe a mapping for one particular value to a name. */
	class ValueAliasSet : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		ValueAliasSet();
		~ValueAliasSet() override;

		/** \brief The Commands using the set for translation. Default: 0 */
		std::list<CIMPP::Command*> Commands;

		/** \brief The Measurements using the set for translation. Default: 0 */
		std::list<CIMPP::Discrete*> Discretes;

		/** \brief The Commands using the set for translation. Default: 0 */
		std::list<CIMPP::RaiseLowerCommand*> RaiseLowerCommands;

		/** \brief The ValueToAlias mappings included in the set. Default: 0 */
		std::list<CIMPP::ValueToAlias*> Values;

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

	BaseClass* ValueAliasSet_factory();
}
#endif
