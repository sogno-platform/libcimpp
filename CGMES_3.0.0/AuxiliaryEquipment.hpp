#ifndef AuxiliaryEquipment_H
#define AuxiliaryEquipment_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Equipment.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class Terminal;

	/*
	AuxiliaryEquipment describe equipment that is not performing any primary functions but support for the equipment performing the primary function. AuxiliaryEquipment is attached to primary equipment via an association with Terminal.
	*/
	class AuxiliaryEquipment : public Equipment
	{
	public:
		/* constructor initialising all attributes to null */
		AuxiliaryEquipment();
		~AuxiliaryEquipment() override;

		CIMPP::Terminal* Terminal;  /* The Terminal at the equipment where the AuxiliaryEquipment is attached. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* AuxiliaryEquipment_factory();
}
#endif
