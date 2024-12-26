#ifndef SetPoint_H
#define SetPoint_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "AnalogControl.hpp"
#include "BaseClassDefiner.hpp"
#include "Float.hpp"

namespace CIMPP
{

	/*
	An analog control that issues a set point value.
	*/
	class SetPoint : public AnalogControl
	{
	public:
		/* constructor initialising all attributes to null */
		SetPoint();
		~SetPoint() override;

		CIMPP::Float normalValue;  /* Normal value for Control.value e.g. used for percentage scaling. Default: 0.0 */
		CIMPP::Float value;  /* The value representing the actuator output. Default: 0.0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* SetPoint_factory();
}
#endif
