#ifndef ConformLoadGroup_H
#define ConformLoadGroup_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "LoadGroup.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class ConformLoad;
	class ConformLoadSchedule;

	/*
	A group of loads conforming to an allocation pattern.
	*/
	class ConformLoadGroup : public LoadGroup
	{
	public:
		/* constructor initialising all attributes to null */
		ConformLoadGroup();
		~ConformLoadGroup() override;

		std::list<CIMPP::ConformLoadSchedule*> ConformLoadSchedules;  /* The ConformLoadSchedules in the ConformLoadGroup. Default: 0 */
		std::list<CIMPP::ConformLoad*> EnergyConsumers;  /* Conform loads assigned to this ConformLoadGroup. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ConformLoadGroup_factory();
}
#endif
