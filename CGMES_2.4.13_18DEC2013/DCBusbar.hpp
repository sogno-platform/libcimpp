#ifndef DCBusbar_H
#define DCBusbar_H
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
	A busbar within a DC system.
	*/
	class DCBusbar : public DCConductingEquipment
	{
	public:
		/* constructor initialising all attributes to null */
		DCBusbar();
		~DCBusbar() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* DCBusbar_factory();
}
#endif
