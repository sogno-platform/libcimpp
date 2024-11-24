#ifndef NonConformLoadGroup_H
#define NonConformLoadGroup_H
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
	class NonConformLoad;
	class NonConformLoadSchedule;

	/*
	Loads that do not follow a daily and seasonal load variation pattern.
	*/
	class NonConformLoadGroup : public LoadGroup
	{
	public:
		/* constructor initialising all attributes to null */
		NonConformLoadGroup();
		~NonConformLoadGroup() override;

		std::list<CIMPP::NonConformLoad*> EnergyConsumers;  /* Conform loads assigned to this ConformLoadGroup. Default: 0 */
		std::list<CIMPP::NonConformLoadSchedule*> NonConformLoadSchedules;  /* The NonConformLoadSchedules in the NonConformLoadGroup. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* NonConformLoadGroup_factory();
}
#endif
