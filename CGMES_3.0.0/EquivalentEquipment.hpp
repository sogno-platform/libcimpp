#ifndef EquivalentEquipment_H
#define EquivalentEquipment_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class EquivalentNetwork;

	/*
	The class represents equivalent objects that are the result of a network reduction. The class is the base for equivalent objects of different types.
	*/
	class EquivalentEquipment : public ConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		EquivalentEquipment();
		~EquivalentEquipment() override;

		CIMPP::EquivalentNetwork* EquivalentNetwork;  /* The equivalent where the reduced model belongs. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* EquivalentEquipment_factory();
}
#endif
