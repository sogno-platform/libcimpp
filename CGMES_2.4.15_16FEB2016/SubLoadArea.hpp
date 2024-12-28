#ifndef SubLoadArea_H
#define SubLoadArea_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "EnergyArea.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class LoadArea;
	class LoadGroup;

	/*
	The class is the second level in a hierarchical structure for grouping of loads for the purpose of load flow load scaling.
	*/
	class SubLoadArea : public EnergyArea
	{
	public:
		/* constructor initialising all attributes to null */
		SubLoadArea();
		~SubLoadArea() override;

		CIMPP::LoadArea* LoadArea;  /* The LoadArea where the SubLoadArea belongs. Default: 0 */
		std::list<CIMPP::LoadGroup*> LoadGroups;  /* The Loadgroups in the SubLoadArea. Default: 0 */

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

	BaseClass* SubLoadArea_factory();
}
#endif
