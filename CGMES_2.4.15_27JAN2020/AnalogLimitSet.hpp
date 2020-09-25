#ifndef AnalogLimitSet_H
#define AnalogLimitSet_H

#include "LimitSet.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class Analog;
class AnalogLimit;
	/*
	An AnalogLimitSet specifies a set of Limits that are associated with an Analog measurement.
	*/
	class AnalogLimitSet: public LimitSet
	{

	public:
					std::list<CIMPP::Analog*> Measurements; 	/* A measurement may have zero or more limit ranges defined for it. Default: 0 */
					std::list<CIMPP::AnalogLimit*> Limits; 	/* The set of limits. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		AnalogLimitSet();
		virtual ~AnalogLimitSet();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* AnalogLimitSet_factory();
}
#endif
