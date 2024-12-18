#ifndef RaiseLowerCommand_H
#define RaiseLowerCommand_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "AnalogControl.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class ValueAliasSet;

	/*
	An analog control that increase or decrease a set point value with pulses.
	*/
	class RaiseLowerCommand : public AnalogControl
	{
	public:
		/* constructor initialising all attributes to null */
		RaiseLowerCommand();
		~RaiseLowerCommand() override;

		CIMPP::ValueAliasSet* ValueAliasSet;  /* The ValueAliasSet used for translation of a Control value to a name. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* RaiseLowerCommand_factory();
}
#endif
