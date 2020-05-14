#ifndef SolarGeneratingUnit_H
#define SolarGeneratingUnit_H

#include "GeneratingUnit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	A solar thermal generating unit.
	*/
	class SolarGeneratingUnit: public GeneratingUnit
	{

	public:
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		SolarGeneratingUnit();
		virtual ~SolarGeneratingUnit();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* SolarGeneratingUnit_factory();
}
#endif
