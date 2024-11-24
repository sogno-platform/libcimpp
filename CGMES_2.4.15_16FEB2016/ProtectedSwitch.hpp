#ifndef ProtectedSwitch_H
#define ProtectedSwitch_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "Switch.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	A ProtectedSwitch is a switching device that can be operated by ProtectionEquipment.
	*/
	class ProtectedSwitch : public Switch
	{
	public:
		/* constructor initialising all attributes to null */
		ProtectedSwitch();
		~ProtectedSwitch() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ProtectedSwitch_factory();
}
#endif
