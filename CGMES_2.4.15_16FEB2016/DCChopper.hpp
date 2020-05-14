#ifndef DCChopper_H
#define DCChopper_H

#include "DCConductingEquipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


	/*
	Low resistance equipment used in the internal DC circuit to balance voltages. It has typically positive and negative pole terminals and a ground.
	*/
	class DCChopper: public DCConductingEquipment
	{

	public:
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DCChopper();
		virtual ~DCChopper();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCChopper_factory();
}
#endif
