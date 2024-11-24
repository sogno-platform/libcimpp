#ifndef DCConductingEquipment_H
#define DCConductingEquipment_H
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
	class DCTerminal;

	/*
	The parts of the DC power system that are designed to carry current or that are conductively connected through DC terminals.
	*/
	class DCConductingEquipment : public Equipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCConductingEquipment();
		~DCConductingEquipment() override;

		std::list<CIMPP::DCTerminal*> DCTerminals;  /*  Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCConductingEquipment_factory();
}
#endif
