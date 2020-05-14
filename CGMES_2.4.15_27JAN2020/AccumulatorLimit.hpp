#ifndef AccumulatorLimit_H
#define AccumulatorLimit_H

#include "Limit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"

namespace CIMPP {


class AccumulatorLimitSet;
	/*
	Limit values for Accumulator measurements.
	*/
	class AccumulatorLimit: public Limit
	{

	public:
					CIMPP::Integer value; 	/* The value to supervise against. The value is positive. Default: 0 */
					CIMPP::AccumulatorLimitSet* LimitSet; 	/* The limit values used for supervision of Measurements. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		AccumulatorLimit();
		virtual ~AccumulatorLimit();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AccumulatorLimit_factory();
}
#endif
