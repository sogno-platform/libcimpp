#ifndef SwitchSchedule_H
#define SwitchSchedule_H

#include "SeasonDayTypeSchedule.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class Switch;
	/*
	A schedule of switch positions.  If RegularTimePoint.value1 is 0, the switch is open.  If 1, the switch is closed.
	*/
	class SwitchSchedule: public SeasonDayTypeSchedule
	{

	public:
					CIMPP::Switch* Switch; 	/* A Switch can be associated with SwitchSchedules. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		SwitchSchedule();
		virtual ~SwitchSchedule();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SwitchSchedule_factory();
}
#endif
