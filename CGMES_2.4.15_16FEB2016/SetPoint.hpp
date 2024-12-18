#ifndef SetPoint_H
#define SetPoint_H

#include "AnalogControl.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"

namespace CIMPP {


	/*
	An analog control that issue a set point value.
	*/
	class SetPoint: public AnalogControl
	{

	public:
					CIMPP::Simple_Float normalValue; 	/* Normal value for Control.value e.g. used for percentage scaling. Default: nullptr */
					CIMPP::Simple_Float value; 	/* The value representing the actuator output. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SetPoint();
		virtual ~SetPoint();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SetPoint_factory();
}
#endif
