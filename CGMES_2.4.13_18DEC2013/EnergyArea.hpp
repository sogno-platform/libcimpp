#ifndef EnergyArea_H
#define EnergyArea_H
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
	class ControlArea;

	/*
	The class describes an area having energy production or consumption.
	*/
	class EnergyArea : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		EnergyArea();
		~EnergyArea() override;

		CIMPP::ControlArea* ControlArea;  /* The control area specification that is used for the load forecast. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* EnergyArea_factory();
}
#endif
