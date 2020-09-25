#ifndef SubLoadArea_H
#define SubLoadArea_H

#include "EnergyArea.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class LoadArea;
class LoadGroup;
	/*
	The class is the second level in a hierarchical structure for grouping of loads for the purpose of load flow load scaling.
	*/
	class SubLoadArea: public EnergyArea
	{

	public:
					CIMPP::LoadArea* LoadArea; 	/* The LoadArea where the SubLoadArea belongs. Default: 0 */
					std::list<CIMPP::LoadGroup*> LoadGroups; 	/* The Loadgroups in the SubLoadArea. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		SubLoadArea();
		virtual ~SubLoadArea();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SubLoadArea_factory();
}
#endif
