#ifndef DayType_H
#define DayType_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class SeasonDayTypeSchedule;
	/*
	Group of similar days.   For example it could be used to represent weekdays, weekend, or holidays.
	*/
	class DayType: public IdentifiedObject
	{

	public:
					std::list<CIMPP::SeasonDayTypeSchedule*> SeasonDayTypeSchedules; 	/* DayType for the Schedule. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DayType();
		virtual ~DayType();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DayType_factory();
}
#endif
