#ifndef DCTerminal_H
#define DCTerminal_H

#include "DCBaseTerminal.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCConductingEquipment;
	/*
	An electrical connection point to generic DC conducting equipment.
	*/
	class DCTerminal: public DCBaseTerminal
	{

	public:
					CIMPP::DCConductingEquipment* DCConductingEquipment; 	/*  Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DCTerminal();
		virtual ~DCTerminal();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCTerminal_factory();
}
#endif
