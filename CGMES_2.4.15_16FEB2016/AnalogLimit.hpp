#ifndef AnalogLimit_H
#define AnalogLimit_H

#include "Limit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Simple_Float.hpp"

namespace CIMPP {


class AnalogLimitSet;
	/*
	Limit values for Analog measurements.
	*/
	class AnalogLimit: public Limit
	{

	public:
					CIMPP::AnalogLimitSet* LimitSet; 	/* The limit values used for supervision of Measurements. Default: 0 */
					CIMPP::Simple_Float value; 	/* The value to supervise against. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		AnalogLimit();
		virtual ~AnalogLimit();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AnalogLimit_factory();
}
#endif
