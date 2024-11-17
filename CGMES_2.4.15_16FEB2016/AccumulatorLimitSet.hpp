#ifndef AccumulatorLimitSet_H
#define AccumulatorLimitSet_H

#include "LimitSet.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class AccumulatorLimit;
class Accumulator;
	/*
	An AccumulatorLimitSet specifies a set of Limits that are associated with an Accumulator measurement.
	*/
	class AccumulatorLimitSet: public LimitSet
	{

	public:
					std::list<CIMPP::AccumulatorLimit*> Limits; 	/* The set of limits. Default: 0 */
					std::list<CIMPP::Accumulator*> Measurements; 	/* A measurement may have zero or more limit ranges defined for it. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		AccumulatorLimitSet();
		virtual ~AccumulatorLimitSet();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AccumulatorLimitSet_factory();
}
#endif
