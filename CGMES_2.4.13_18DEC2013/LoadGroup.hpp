#ifndef LoadGroup_H
#define LoadGroup_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class SubLoadArea;
	/*
	The class is the third level in a hierarchical structure for grouping of loads for the purpose of load flow load scaling.
	*/
	class LoadGroup: public IdentifiedObject
	{

	public:
					CIMPP::SubLoadArea* SubLoadArea; 	/* The SubLoadArea where the Loadgroup belongs. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		LoadGroup();
		virtual ~LoadGroup();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* LoadGroup_factory();
}
#endif
