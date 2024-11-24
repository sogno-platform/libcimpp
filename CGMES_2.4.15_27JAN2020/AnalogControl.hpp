#ifndef AnalogControl_H
#define AnalogControl_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Control.hpp"
#include "BaseClassDefiner.hpp"
#include "Simple_Float.hpp"

namespace CIMPP
{
	class AnalogValue;

	/*
	An analog control used for supervisory control.
	*/
	class AnalogControl : public Control
	{
	public:
		/* constructor initialising all attributes to null */
		AnalogControl();
		~AnalogControl() override;

		CIMPP::AnalogValue* AnalogValue;  /* The Control variable associated with the MeasurementValue. Default: 0 */
		CIMPP::Simple_Float maxValue;  /* Normal value range maximum for any of the Control.value. Used for scaling, e.g. in bar graphs. Default: nullptr */
		CIMPP::Simple_Float minValue;  /* Normal value range minimum for any of the Control.value. Used for scaling, e.g. in bar graphs. Default: nullptr */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AnalogControl_factory();
}
#endif
