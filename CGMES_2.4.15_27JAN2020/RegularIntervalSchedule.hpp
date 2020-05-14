#ifndef RegularIntervalSchedule_H
#define RegularIntervalSchedule_H

#include "BasicIntervalSchedule.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Seconds.hpp"

namespace CIMPP {


class DateTime;
class RegularTimePoint;
	/*
	The schedule has time points where the time between them is constant.
	*/
	class RegularIntervalSchedule: public BasicIntervalSchedule
	{

	public:
					CIMPP::Seconds timeStep; 	/* The time between each pair of subsequent regular time points in sequence order. Default: nullptr */
					CIMPP::DateTime* endTime; 	/* The time for the last time point. Default: '' */
					std::list<CIMPP::RegularTimePoint*> TimePoints; 	/* The regular interval time point data values that define this schedule. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		RegularIntervalSchedule();
		virtual ~RegularIntervalSchedule();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RegularIntervalSchedule_factory();
}
#endif
