#ifndef SeasonDayTypeSchedule_H
#define SeasonDayTypeSchedule_H

#include "RegularIntervalSchedule.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DayType;
class Season;
	/*
	A time schedule covering a 24 hour period, with curve data for a specific type of season and day.
	*/
	class SeasonDayTypeSchedule: public RegularIntervalSchedule
	{

	public:
					CIMPP::DayType* DayType; 	/* Schedules that use this DayType. Default: 0 */
					CIMPP::Season* Season; 	/* Schedules that use this Season. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SeasonDayTypeSchedule();
		virtual ~SeasonDayTypeSchedule();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SeasonDayTypeSchedule_factory();
}
#endif
