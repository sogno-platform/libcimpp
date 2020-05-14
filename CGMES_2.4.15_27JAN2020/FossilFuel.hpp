#ifndef FossilFuel_H
#define FossilFuel_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "FuelType.hpp"

namespace CIMPP {


class ThermalGeneratingUnit;
	/*
	The fossil fuel consumed by the non-nuclear thermal generating unit.   For example, coal, oil, gas, etc.   This a the specific fuels that the generating unit can consume.
	*/
	class FossilFuel: public IdentifiedObject
	{

	public:
					CIMPP::FuelType fossilFuelType; 	/* The type of fossil fuel, such as coal, oil, or gas. Default: 0 */
					CIMPP::ThermalGeneratingUnit* ThermalGeneratingUnit; 	/* A thermal generating unit may have one or more fossil fuels. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		FossilFuel();
		virtual ~FossilFuel();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* FossilFuel_factory();
}
#endif
