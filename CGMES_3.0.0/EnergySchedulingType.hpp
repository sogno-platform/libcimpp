#ifndef EnergySchedulingType_H
#define EnergySchedulingType_H
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
	class EnergySource;

	/*
	Used to define the type of generation for scheduling purposes.
	*/
	class EnergySchedulingType : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		EnergySchedulingType();
		~EnergySchedulingType() override;

		std::list<CIMPP::EnergySource*> EnergySource;  /* Energy Source of a particular Energy Scheduling Type. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* EnergySchedulingType_factory();
}
#endif
