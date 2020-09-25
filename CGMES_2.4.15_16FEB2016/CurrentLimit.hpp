#ifndef CurrentLimit_H
#define CurrentLimit_H

#include "OperationalLimit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "CurrentFlow.hpp"

namespace CIMPP {


	/*
	Operational limit on current.
	*/
	class CurrentLimit: public OperationalLimit
	{

	public:
					CIMPP::CurrentFlow value; 	/* Limit on current flow. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		CurrentLimit();
		virtual ~CurrentLimit();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* CurrentLimit_factory();
}
#endif
