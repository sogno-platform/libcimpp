#ifndef AnalogControl_H
#define AnalogControl_H

#include "Control.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"

namespace CIMPP {


class AnalogValue;
	/*
	An analog control used for supervisory control.
	*/
	class AnalogControl: public Control
	{

	public:
					CIMPP::AnalogValue* AnalogValue; 	/* The Control variable associated with the MeasurementValue. Default: 0 */
					CIMPP::Simple_Float maxValue; 	/* Normal value range maximum for any of the Control.value. Used for scaling, e.g. in bar graphs. Default: nullptr */
					CIMPP::Simple_Float minValue; 	/* Normal value range minimum for any of the Control.value. Used for scaling, e.g. in bar graphs. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		AnalogControl();
		virtual ~AnalogControl();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AnalogControl_factory();
}
#endif
