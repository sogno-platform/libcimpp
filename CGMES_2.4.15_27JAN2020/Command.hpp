#ifndef Command_H
#define Command_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "Control.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class DiscreteValue;
	class ValueAliasSet;

	/*
	A Command is a discrete control used for supervisory control.
	*/
	class Command : public Control
	{
	public:
		/* constructor initialising all attributes to null */
		Command();
		~Command() override;

		CIMPP::DiscreteValue* DiscreteValue;  /* The Control variable associated with the MeasurementValue. Default: 0 */
		CIMPP::ValueAliasSet* ValueAliasSet;  /* The ValueAliasSet used for translation of a Control value to a name. Default: 0 */
		CIMPP::Integer normalValue;  /* Normal value for Control.value e.g. used for percentage scaling. Default: 0 */
		CIMPP::Integer value;  /* The value representing the actuator output. Default: 0 */

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

	BaseClass* Command_factory();
}
#endif
