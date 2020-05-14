#ifndef RegularTimePoint_H
#define RegularTimePoint_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Integer.hpp"
#include "Simple_Float.hpp"

namespace CIMPP {


class RegularIntervalSchedule;
	/*
	Time point for a schedule where the time between the consecutive points is constant.
	*/
	class RegularTimePoint: public BaseClass
	{

	public:
					CIMPP::RegularIntervalSchedule* IntervalSchedule; 	/* Regular interval schedule containing this time point. Default: 0 */
					CIMPP::Integer sequenceNumber; 	/* The position of the regular time point in the sequence. Note that time points don`t have to be sequential, i.e. time points may be omitted. The actual time for a RegularTimePoint is computed by multiplying the associated regular interval schedule`s time step with the regular time point sequence number and adding the associated schedules start time. Default: 0 */
					CIMPP::Simple_Float value1; 	/* The first value at the time. The meaning of the value is defined by the derived type of the associated schedule. Default: nullptr */
					CIMPP::Simple_Float value2; 	/* The second value at the time. The meaning of the value is defined by the derived type of the associated schedule. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		RegularTimePoint();
		virtual ~RegularTimePoint();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RegularTimePoint_factory();
}
#endif
