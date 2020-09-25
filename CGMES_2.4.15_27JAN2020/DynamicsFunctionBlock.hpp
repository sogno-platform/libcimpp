#ifndef DynamicsFunctionBlock_H
#define DynamicsFunctionBlock_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"

namespace CIMPP {


	/*
	Abstract parent class for all Dynamics function blocks.
	*/
	class DynamicsFunctionBlock: public IdentifiedObject
	{

	public:
					CIMPP::Boolean enabled; 	/* Function block used indicator. true = use of function block is enabled false = use of function block is disabled. Default: false */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DynamicsFunctionBlock();
		virtual ~DynamicsFunctionBlock();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DynamicsFunctionBlock_factory();
}
#endif
