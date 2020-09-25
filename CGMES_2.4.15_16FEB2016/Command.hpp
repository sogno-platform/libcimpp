#ifndef Command_H
#define Command_H

#include "Control.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"

namespace CIMPP {


class DiscreteValue;
class ValueAliasSet;
	/*
	A Command is a discrete control used for supervisory control.
	*/
	class Command: public Control
	{

	public:
					CIMPP::Integer normalValue; 	/* Normal value for Control.value e.g. used for percentage scaling. Default: 0 */
					CIMPP::Integer value; 	/* The value representing the actuator output. Default: 0 */
					CIMPP::DiscreteValue* DiscreteValue; 	/* The Control variable associated with the MeasurementValue. Default: 0 */
					CIMPP::ValueAliasSet* ValueAliasSet; 	/* The ValueAliasSet used for translation of a Control value to a name. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		Command();
		virtual ~Command();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Command_factory();
}
#endif
