#ifndef NonConformLoadSchedule_H
#define NonConformLoadSchedule_H

#include "SeasonDayTypeSchedule.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class NonConformLoadGroup;
	/*
	An active power (Y1-axis) and reactive power (Y2-axis) schedule (curves) versus time (X-axis) for non-conforming loads, e.g., large industrial load or power station service (where modeled).
	*/
	class NonConformLoadSchedule: public SeasonDayTypeSchedule
	{

	public:
					CIMPP::NonConformLoadGroup* NonConformLoadGroup; 	/* The NonConformLoadGroup where the NonConformLoadSchedule belongs. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		NonConformLoadSchedule();
		virtual ~NonConformLoadSchedule();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* NonConformLoadSchedule_factory();
}
#endif
