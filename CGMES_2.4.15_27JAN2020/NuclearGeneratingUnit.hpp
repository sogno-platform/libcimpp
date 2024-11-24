#ifndef NuclearGeneratingUnit_H
#define NuclearGeneratingUnit_H

#include "GeneratingUnit.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	A nuclear generating unit.
	*/
	class NuclearGeneratingUnit: public GeneratingUnit
	{

	public:
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		NuclearGeneratingUnit();
		virtual ~NuclearGeneratingUnit();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* NuclearGeneratingUnit_factory();
}
#endif
