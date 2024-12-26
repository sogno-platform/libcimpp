#ifndef AccumulatorReset_H
#define AccumulatorReset_H

#include "Control.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class AccumulatorValue;
	/*
	This command reset the counter value to zero.
	*/
	class AccumulatorReset: public Control
	{

	public:
					CIMPP::AccumulatorValue* AccumulatorValue; 	/* The accumulator value that is reset by the command. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		AccumulatorReset();
		virtual ~AccumulatorReset();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AccumulatorReset_factory();
}
#endif
