#ifndef DCNode_H
#define DCNode_H
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
	class DCBaseTerminal;
	class DCEquipmentContainer;
	class DCTopologicalNode;

	/*
	DC nodes are points where terminals of DC conducting equipment are connected together with zero impedance.
	*/
	class DCNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DCNode();
		~DCNode() override;

		CIMPP::DCEquipmentContainer* DCEquipmentContainer;  /* The DC container for the DC nodes. Default: 0 */
		std::list<CIMPP::DCBaseTerminal*> DCTerminals;  /* DC base terminals interconnected with zero impedance at a this DC connectivity node. Default: 0 */
		CIMPP::DCTopologicalNode* DCTopologicalNode;  /* The DC topological node to which this DC connectivity node is assigned.  May depend on the current state of switches in the network. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCNode_factory();
}
#endif
