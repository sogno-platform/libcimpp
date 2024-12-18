#ifndef TopologicalIsland_H
#define TopologicalIsland_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class TopologicalNode;

	/*
	An electrically connected subset of the network. Topological islands can change as the current network state changes: e.g. due to  - disconnect switches or breakers change state in a SCADA/EMS - manual creation, change or deletion of topological nodes in a planning tool.
	*/
	class TopologicalIsland : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		TopologicalIsland();
		~TopologicalIsland() override;

		CIMPP::TopologicalNode* AngleRefTopologicalNode;  /* The angle reference for the island.   Normally there is one TopologicalNode that is selected as the angle reference for each island.   Other reference schemes exist, so the association is typically optional. Default: 0 */
		std::list<CIMPP::TopologicalNode*> TopologicalNodes;  /* A topological node belongs to a topological island. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* TopologicalIsland_factory();
}
#endif
