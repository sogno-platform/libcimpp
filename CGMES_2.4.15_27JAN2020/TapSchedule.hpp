#ifndef TapSchedule_H
#define TapSchedule_H

#include "SeasonDayTypeSchedule.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class TapChanger;
	/*
	A pre-established pattern over time for a tap step.
	*/
	class TapSchedule: public SeasonDayTypeSchedule
	{

	public:
					CIMPP::TapChanger* TapChanger; 	/* A TapChanger can have TapSchedules. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		TapSchedule();
		virtual ~TapSchedule();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TapSchedule_factory();
}
#endif
