#ifndef ApparentPowerLimit_H
#define ApparentPowerLimit_H

#include "OperationalLimit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "ApparentPower.hpp"

namespace CIMPP {


	/*
	Apparent power limit.
	*/
	class ApparentPowerLimit: public OperationalLimit
	{

	public:
					CIMPP::ApparentPower value; 	/* The apparent power limit. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ApparentPowerLimit();
		virtual ~ApparentPowerLimit();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ApparentPowerLimit_factory();
}
#endif
