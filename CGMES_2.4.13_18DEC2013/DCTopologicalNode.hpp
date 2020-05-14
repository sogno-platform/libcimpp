#ifndef DCTopologicalNode_H
#define DCTopologicalNode_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCBaseTerminal;
class DCEquipmentContainer;
class DCNode;
class DCTopologicalIsland;
	/*
	DC bus.
	*/
	class DCTopologicalNode: public IdentifiedObject
	{

	public:
					std::list<CIMPP::DCBaseTerminal*> DCTerminals; 	/* See association end Terminal.TopologicalNode. Default: 0 */
					CIMPP::DCEquipmentContainer* DCEquipmentContainer; 	/*  Default: 0 */
					std::list<CIMPP::DCNode*> DCNodes; 	/* See association end ConnectivityNode.TopologicalNode. Default: 0 */
					CIMPP::DCTopologicalIsland* DCTopologicalIsland; 	/*  Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		DCTopologicalNode();
		virtual ~DCTopologicalNode();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCTopologicalNode_factory();
}
#endif
