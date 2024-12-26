#ifndef LoadBreakSwitch_H
#define LoadBreakSwitch_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "ProtectedSwitch.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{

	/*
	A mechanical switching device capable of making, carrying, and breaking currents under normal operating conditions.
	*/
	class LoadBreakSwitch : public ProtectedSwitch
	{
	public:
		/* constructor initialising all attributes to null */
		LoadBreakSwitch();
		~LoadBreakSwitch() override;


		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* LoadBreakSwitch_factory();
}
#endif
