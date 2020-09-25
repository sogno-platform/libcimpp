#ifndef ConformLoadSchedule_H
#define ConformLoadSchedule_H

#include "SeasonDayTypeSchedule.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ConformLoadGroup;
	/*
	A curve of load  versus time (X-axis) showing the active power values (Y1-axis) and reactive power (Y2-axis) for each unit of the period covered. This curve represents a typical pattern of load over the time period for a given day type and season.
	*/
	class ConformLoadSchedule: public SeasonDayTypeSchedule
	{

	public:
					CIMPP::ConformLoadGroup* ConformLoadGroup; 	/* The ConformLoadGroup where the ConformLoadSchedule belongs. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ConformLoadSchedule();
		virtual ~ConformLoadSchedule();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ConformLoadSchedule_factory();
}
#endif
