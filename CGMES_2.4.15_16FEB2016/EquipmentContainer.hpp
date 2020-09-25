#ifndef EquipmentContainer_H
#define EquipmentContainer_H

#include "ConnectivityNodeContainer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class Equipment;
	/*
	A modeling construct to provide a root class for containing equipment.
	*/
	class EquipmentContainer: public ConnectivityNodeContainer
	{

	public:
					std::list<CIMPP::Equipment*> Equipments; 	/* Contained equipment. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		EquipmentContainer();
		virtual ~EquipmentContainer();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* EquipmentContainer_factory();
}
#endif
