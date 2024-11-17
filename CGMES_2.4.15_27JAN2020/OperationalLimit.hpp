#ifndef OperationalLimit_H
#define OperationalLimit_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class OperationalLimitSet;
class OperationalLimitType;
	/*
	A value associated with a specific kind of limit.  The sub class value attribute shall be positive.  The sub class value attribute is inversely proportional to OperationalLimitType.acceptableDuration (acceptableDuration for short). A pair of value_x and acceptableDuration_x are related to each other as follows: if value_1 > value_2 > value_3 >... then acceptableDuration_1 < acceptableDuration_2 < acceptableDuration_3 < ... A value_x with direction="high" shall be greater than a value_y with direction="low".
	*/
	class OperationalLimit: public IdentifiedObject
	{

	public:
					CIMPP::OperationalLimitSet* OperationalLimitSet; 	/* Values of equipment limits. Default: 0 */
					CIMPP::OperationalLimitType* OperationalLimitType; 	/* The limit type associated with this limit. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		OperationalLimit();
		virtual ~OperationalLimit();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* OperationalLimit_factory();
}
#endif
