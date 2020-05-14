#ifndef ProtectedSwitch_H
#define ProtectedSwitch_H

#include "Switch.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	A ProtectedSwitch is a switching device that can be operated by ProtectionEquipment.
	*/
	class ProtectedSwitch: public Switch
	{

	public:
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ProtectedSwitch();
		virtual ~ProtectedSwitch();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ProtectedSwitch_factory();
}
#endif
