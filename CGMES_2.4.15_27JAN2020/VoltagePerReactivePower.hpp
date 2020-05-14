#ifndef VoltagePerReactivePower_H
#define VoltagePerReactivePower_H

#include "BaseClass.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "UnitSymbol.hpp"
#include "UnitMultiplier.hpp"

namespace CIMPP {


class Float;
	/*
	Voltage variation with reactive power.
	*/
	class VoltagePerReactivePower: public BaseClass
	{

	public:
					CIMPP::Float* value; 	/*  Default: nullptr */
					CIMPP::UnitSymbol unit; 	/*  Default: 0 */
					CIMPP::UnitMultiplier denominatorMultiplier; 	/*  Default: 0 */
					CIMPP::UnitMultiplier multiplier; 	/*  Default: 0 */
					CIMPP::UnitSymbol denominatorUnit; 	/*  Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		VoltagePerReactivePower();
		virtual ~VoltagePerReactivePower();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* VoltagePerReactivePower_factory();
}
#endif
