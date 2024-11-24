#ifndef DCTopologicalIsland_H
#define DCTopologicalIsland_H
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
	class DCTopologicalNode;

	/*
	An electrically connected subset of the network. DC topological islands can change as the current network state changes, e.g. due to:  - disconnect switches or breakers changing state in a SCADA/EMS. - manual creation, change or deletion of topological nodes in a planning tool. Only energised TopologicalNode-s shall be part of the topological island.
	*/
	class DCTopologicalIsland : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DCTopologicalIsland();
		~DCTopologicalIsland() override;

		std::list<CIMPP::DCTopologicalNode*> DCTopologicalNodes;  /* The DC topological nodes in a DC topological island. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCTopologicalIsland_factory();
}
#endif
