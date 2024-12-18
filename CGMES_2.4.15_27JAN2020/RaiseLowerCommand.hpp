#ifndef RaiseLowerCommand_H
#define RaiseLowerCommand_H

#include "AnalogControl.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ValueAliasSet;
	/*
	An analog control that increase or decrease a set point value with pulses.
	*/
	class RaiseLowerCommand: public AnalogControl
	{

	public:
					CIMPP::ValueAliasSet* ValueAliasSet; 	/* The ValueAliasSet used for translation of a Control value to a name. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		RaiseLowerCommand();
		virtual ~RaiseLowerCommand();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RaiseLowerCommand_factory();
}
#endif
