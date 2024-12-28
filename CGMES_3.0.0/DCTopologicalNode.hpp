#ifndef DCTopologicalNode_H
#define DCTopologicalNode_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class DCBaseTerminal;
	class DCEquipmentContainer;
	class DCNode;
	class DCTopologicalIsland;

	/*
	DC bus.
	*/
	class DCTopologicalNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DCTopologicalNode();
		~DCTopologicalNode() override;

		CIMPP::DCEquipmentContainer* DCEquipmentContainer;  /* The connectivity node container to which the topological node belongs. Default: 0 */
		std::list<CIMPP::DCNode*> DCNodes;  /* The DC connectivity nodes combined together to form this DC topological node.  May depend on the current state of switches in the network. Default: 0 */
		std::list<CIMPP::DCBaseTerminal*> DCTerminals;  /* See association end TopologicalNode.Terminal. Default: 0 */
		CIMPP::DCTopologicalIsland* DCTopologicalIsland;  /* A DC topological node belongs to a DC topological island. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* DCTopologicalNode_factory();
}
#endif
