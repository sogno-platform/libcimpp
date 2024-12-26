#ifndef LoadArea_H
#define LoadArea_H

#include "EnergyArea.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class SubLoadArea;
	/*
	The class is the root or first level in a hierarchical structure for grouping of loads for the purpose of load flow load scaling.
	*/
	class LoadArea: public EnergyArea
	{

	public:
					std::list<CIMPP::SubLoadArea*> SubLoadAreas; 	/* The SubLoadAreas in the LoadArea. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		LoadArea();
		virtual ~LoadArea();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* LoadArea_factory();
}
#endif
