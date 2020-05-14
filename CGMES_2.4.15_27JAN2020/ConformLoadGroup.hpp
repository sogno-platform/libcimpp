#ifndef ConformLoadGroup_H
#define ConformLoadGroup_H

#include "LoadGroup.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ConformLoad;
class ConformLoadSchedule;
	/*
	A group of loads conforming to an allocation pattern.
	*/
	class ConformLoadGroup: public LoadGroup
	{

	public:
					std::list<CIMPP::ConformLoad*> EnergyConsumers; 	/* Conform loads assigned to this ConformLoadGroup. Default: 0 */
					std::list<CIMPP::ConformLoadSchedule*> ConformLoadSchedules; 	/* The ConformLoadSchedules in the ConformLoadGroup. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ConformLoadGroup();
		virtual ~ConformLoadGroup();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ConformLoadGroup_factory();
}
#endif
