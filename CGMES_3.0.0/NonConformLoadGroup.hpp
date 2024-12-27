#ifndef NonConformLoadGroup_H
#define NonConformLoadGroup_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "LoadGroup.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

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

		std::list<CGMESProfile> getPossibleProfilesForClass() const override;
		std::map<std::string, std::list<CGMESProfile>> getPossibleProfilesForAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		static const BaseClassDefiner declare();
	};

	BaseClass* NonConformLoadGroup_factory();
}
#endif
