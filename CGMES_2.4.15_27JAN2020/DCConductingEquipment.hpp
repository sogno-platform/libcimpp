#ifndef DCConductingEquipment_H
#define DCConductingEquipment_H

#include "Equipment.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCTerminal;
	/*
	The parts of the DC power system that are designed to carry current or that are conductively connected through DC terminals.
	*/
	class DCConductingEquipment: public Equipment
	{

	public:
					std::list<CIMPP::DCTerminal*> DCTerminals; 	/*  Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DCConductingEquipment();
		virtual ~DCConductingEquipment();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCConductingEquipment_factory();
}
#endif
