#ifndef ActivePowerLimit_H
#define ActivePowerLimit_H

#include "OperationalLimit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ActivePower.hpp"

namespace CIMPP {


	/*
	Limit on active power flow.
	*/
	class ActivePowerLimit: public OperationalLimit
	{

	public:
					CIMPP::ActivePower value; 	/* Value of active power limit. Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ActivePowerLimit();
		virtual ~ActivePowerLimit();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ActivePowerLimit_factory();
}
#endif
