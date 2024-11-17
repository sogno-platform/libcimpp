#ifndef Season_H
#define Season_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "MonthDay.hpp"

namespace CIMPP {


class SeasonDayTypeSchedule;
	/*
	A specified time period of the year.
	*/
	class Season: public IdentifiedObject
	{

	public:
					std::list<CIMPP::SeasonDayTypeSchedule*> SeasonDayTypeSchedules; 	/* Season for the Schedule. Default: 0 */
					CIMPP::MonthDay endDate; 	/* Date season ends. Default: nullptr */
					CIMPP::MonthDay startDate; 	/* Date season starts. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		Season();
		virtual ~Season();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* Season_factory();
}
#endif
