#ifndef DCEquipmentContainer_H
#define DCEquipmentContainer_H

#include "EquipmentContainer.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCTopologicalNode;
	/*
	A modeling construct to provide a root class for containment of DC as well as AC equipment. The class differ from the EquipmentContaner for AC in that it may also contain DCNodes. Hence it can contain both AC and DC equipment.
	*/
	class DCEquipmentContainer: public EquipmentContainer
	{

	public:
					std::list<CIMPP::DCTopologicalNode*> DCTopologicalNode; 	/*  Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DCEquipmentContainer();
		virtual ~DCEquipmentContainer();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCEquipmentContainer_factory();
}
#endif
