#ifndef DCEquipmentContainer_H
#define DCEquipmentContainer_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "EquipmentContainer.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class DCNode;
	class DCTopologicalNode;

	/*
	A modelling construct to provide a root class for containment of DC as well as AC equipment. The class differ from the EquipmentContaner for AC in that it may also contain DCNode-s. Hence it can contain both AC and DC equipment.
	*/
	class DCEquipmentContainer : public EquipmentContainer
	{
	public:
		/* constructor initialising all attributes to null */
		DCEquipmentContainer();
		~DCEquipmentContainer() override;

		std::list<CIMPP::DCNode*> DCNodes;  /* The DC nodes contained in the DC equipment container. Default: 0 */
		std::list<CIMPP::DCTopologicalNode*> DCTopologicalNode;  /* The topological nodes which belong to this connectivity node container. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCEquipmentContainer_factory();
}
#endif
