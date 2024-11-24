#ifndef EquipmentContainer_H
#define EquipmentContainer_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ConnectivityNodeContainer.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class Equipment;

	/*
	A modelling construct to provide a root class for containing equipment.
	*/
	class EquipmentContainer : public ConnectivityNodeContainer
	{
	public:
		/* constructor initialising all attributes to null */
		EquipmentContainer();
		~EquipmentContainer() override;

		std::list<CIMPP::Equipment*> Equipments;  /* Contained equipment. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* EquipmentContainer_factory();
}
#endif
