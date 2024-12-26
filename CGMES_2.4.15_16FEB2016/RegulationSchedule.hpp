#ifndef RegulationSchedule_H
#define RegulationSchedule_H

#include "SeasonDayTypeSchedule.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class RegulatingControl;
	/*
	A pre-established pattern over time for a controlled variable, e.g., busbar voltage.
	*/
	class RegulationSchedule: public SeasonDayTypeSchedule
	{

	public:
					CIMPP::RegulatingControl* RegulatingControl; 	/* Regulating controls that have this Schedule. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		RegulationSchedule();
		virtual ~RegulationSchedule();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* RegulationSchedule_factory();
}
#endif
