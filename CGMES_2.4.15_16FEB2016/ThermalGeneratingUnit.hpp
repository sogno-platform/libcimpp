#ifndef ThermalGeneratingUnit_H
#define ThermalGeneratingUnit_H

#include "GeneratingUnit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class FossilFuel;
	/*
	A generating unit whose prime mover could be a steam turbine, combustion turbine, or diesel engine.
	*/
	class ThermalGeneratingUnit: public GeneratingUnit
	{

	public:
					std::list<CIMPP::FossilFuel*> FossilFuels; 	/* A thermal generating unit may have one or more fossil fuels. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		ThermalGeneratingUnit();
		virtual ~ThermalGeneratingUnit();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ThermalGeneratingUnit_factory();
}
#endif
