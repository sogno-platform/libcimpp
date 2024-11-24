#ifndef DCSwitch_H
#define DCSwitch_H

#include "DCConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	A switch within the DC system.
	*/
	class DCSwitch: public DCConductingEquipment
	{

	public:
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DCSwitch();
		virtual ~DCSwitch();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCSwitch_factory();
}
#endif
