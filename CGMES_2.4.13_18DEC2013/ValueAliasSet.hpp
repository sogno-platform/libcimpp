#ifndef ValueAliasSet_H
#define ValueAliasSet_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class Command;
class Discrete;
class RaiseLowerCommand;
class ValueToAlias;
	/*
	Describes the translation of a set of values into a name and is intendend to facilitate cusom translations. Each ValueAliasSet has a name, description etc. A specific Measurement may represent a discrete state like Open, Closed, Intermediate etc. This requires a translation from the MeasurementValue.value number to a string, e.g. 0->"Invalid", 1->"Open", 2->"Closed", 3->"Intermediate". Each ValueToAlias member in ValueAliasSet.Value describe a mapping for one particular value to a name.
	*/
	class ValueAliasSet: public IdentifiedObject
	{

	public:
					std::list<CIMPP::Command*> Commands; 	/* The Commands using the set for translation. Default: 0 */
					std::list<CIMPP::Discrete*> Discretes; 	/* The Measurements using the set for translation. Default: 0 */
					std::list<CIMPP::RaiseLowerCommand*> RaiseLowerCommands; 	/* The Commands using the set for translation. Default: 0 */
					std::list<CIMPP::ValueToAlias*> Values; 	/* The ValueAliasSet having the ValueToAlias mappings. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ValueAliasSet();
		virtual ~ValueAliasSet();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ValueAliasSet_factory();
}
#endif
