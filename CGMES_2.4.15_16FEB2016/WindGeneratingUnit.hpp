#ifndef WindGeneratingUnit_H
#define WindGeneratingUnit_H

#include "GeneratingUnit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "WindGenUnitKind.hpp"

namespace CIMPP {


	/*
	A wind driven generating unit.  May be used to represent a single turbine or an aggregation.
	*/
	class WindGeneratingUnit: public GeneratingUnit
	{

	public:
					CIMPP::WindGenUnitKind windGenUnitType; 	/* The kind of wind generating unit Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		WindGeneratingUnit();
		virtual ~WindGeneratingUnit();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* WindGeneratingUnit_factory();
}
#endif
