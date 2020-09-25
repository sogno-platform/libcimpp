#ifndef LoadBreakSwitch_H
#define LoadBreakSwitch_H

#include "ProtectedSwitch.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	A mechanical switching device capable of making, carrying, and breaking currents under normal operating conditions.
	*/
	class LoadBreakSwitch: public ProtectedSwitch
	{

	public:
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		LoadBreakSwitch();
		virtual ~LoadBreakSwitch();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* LoadBreakSwitch_factory();
}
#endif
