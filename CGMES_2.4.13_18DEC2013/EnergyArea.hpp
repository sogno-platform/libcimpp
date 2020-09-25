#ifndef EnergyArea_H
#define EnergyArea_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class ControlArea;
	/*
	The class describes an area having energy production or consumption.
	*/
	class EnergyArea: public IdentifiedObject
	{

	public:
					CIMPP::ControlArea* ControlArea; 	/* The control area specification that is used for the load forecast. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		EnergyArea();
		virtual ~EnergyArea();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EnergyArea_factory();
}
#endif
