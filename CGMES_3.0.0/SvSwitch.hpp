#ifndef SvSwitch_H
#define SvSwitch_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "BaseClass.hpp"
#include "BaseClassDefiner.hpp"
#include "Boolean.hpp"

namespace CIMPP
{
	class Switch;

	/*
	State variable for switch.
	*/
	class SvSwitch : public BaseClass
	{
	public:
		/* constructor initialising all attributes to null */
		SvSwitch();
		~SvSwitch() override;

		CIMPP::Switch* Switch;  /* The switch associated with the switch state. Default: 0 */
		CIMPP::Boolean open;  /* The attribute tells if the computed state of the switch is considered open. Default: false */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SvSwitch_factory();
}
#endif
