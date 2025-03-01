#ifndef RaiseLowerCommand_H
#define RaiseLowerCommand_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "AnalogControl.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class ValueAliasSet;

	/** \brief An analog control that increases or decreases a set point value with pulses. Unless otherwise specified, one pulse moves the set point by one. */
	class RaiseLowerCommand : public AnalogControl
	{
	public:
		/* constructor initialising all attributes to null */
		RaiseLowerCommand();
		~RaiseLowerCommand() override;

		/** \brief The ValueAliasSet used for translation of a Control value to a name. Default: 0 */
		CIMPP::ValueAliasSet* ValueAliasSet;

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

	BaseClass* RaiseLowerCommand_factory();
}
#endif
