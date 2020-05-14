#ifndef ActivePowerPerFrequency_H
#define ActivePowerPerFrequency_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "UnitMultiplier.hpp"
#include "UnitSymbol.hpp"

namespace CIMPP {


class Float;
	/*
	Active power variation with frequency.
	*/
	class ActivePowerPerFrequency: public BaseClass
	{

	public:
					CIMPP::UnitMultiplier denominatorMultiplier; 	/*  Default: 0 */
					CIMPP::UnitSymbol denominatorUnit; 	/*  Default: 0 */
					CIMPP::UnitMultiplier multiplier; 	/*  Default: 0 */
					CIMPP::UnitSymbol unit; 	/*  Default: 0 */
					CIMPP::Float* value; 	/*  Default: nullptr */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ActivePowerPerFrequency();
		virtual ~ActivePowerPerFrequency();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ActivePowerPerFrequency_factory();
}
#endif
