#ifndef DCTopologicalIsland_H
#define DCTopologicalIsland_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class DCTopologicalNode;
	/*
	An electrically connected subset of the network. DC topological islands can change as the current network state changes: e.g. due to  - disconnect switches or breakers change state in a SCADA/EMS - manual creation, change or deletion of topological nodes in a planning tool.
	*/
	class DCTopologicalIsland: public IdentifiedObject
	{

	public:
					std::list<CIMPP::DCTopologicalNode*> DCTopologicalNodes; 	/*  Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		DCTopologicalIsland();
		virtual ~DCTopologicalIsland();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* DCTopologicalIsland_factory();
}
#endif
