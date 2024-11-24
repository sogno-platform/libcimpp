#ifndef DCSwitch_H
#define DCSwitch_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "DCConductingEquipment.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	A switch within the DC system.
	*/
	class DCSwitch : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCSwitch();
		~DCSwitch() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCSwitch_factory();
}
#endif
