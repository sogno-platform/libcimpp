#ifndef TopologicalIsland_H
#define TopologicalIsland_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"



namespace CIMPP {


class TopologicalNode;
	/*
	An electrically connected subset of the network. Topological islands can change as the current network state changes: e.g. due to  - disconnect switches or breakers change state in a SCADA/EMS - manual creation, change or deletion of topological nodes in a planning tool.
	*/
	class TopologicalIsland: public IdentifiedObject
	{

	public:
					CIMPP::TopologicalNode* AngleRefTopologicalNode; 	/* The angle reference for the island.   Normally there is one TopologicalNode that is selected as the angle reference for each island.   Other reference schemes exist, so the association is typically optional. Default: 0 */
					std::list<CIMPP::TopologicalNode*> TopologicalNodes; 	/* A topological node belongs to a topological island. Default: 0 */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		TopologicalIsland();
		virtual ~TopologicalIsland();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TopologicalIsland_factory();
}
#endif
