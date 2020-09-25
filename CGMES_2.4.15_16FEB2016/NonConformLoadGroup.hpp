#ifndef NonConformLoadGroup_H
#define NonConformLoadGroup_H

#include "LoadGroup.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class NonConformLoad;
class NonConformLoadSchedule;
	/*
	Loads that do not follow a daily and seasonal load variation pattern.
	*/
	class NonConformLoadGroup: public LoadGroup
	{

	public:
					std::list<CIMPP::NonConformLoad*> EnergyConsumers; 	/* Group of this ConformLoad. Default: 0 */
					std::list<CIMPP::NonConformLoadSchedule*> NonConformLoadSchedules; 	/* The NonConformLoadSchedules in the NonConformLoadGroup. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		NonConformLoadGroup();
		virtual ~NonConformLoadGroup();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* NonConformLoadGroup_factory();
}
#endif
