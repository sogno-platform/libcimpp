#ifndef DCTopologicalIsland_H
#define DCTopologicalIsland_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class DCTopologicalNode;

	/** \brief An electrically connected subset of the network. DC topological islands can change as the current network state changes, e.g. due to:  - disconnect switches or breakers changing state in a SCADA/EMS. - manual creation, change or deletion of topological nodes in a planning tool. Only energised TopologicalNode-s shall be part of the topological island. */
	class DCTopologicalIsland : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DCTopologicalIsland();
		~DCTopologicalIsland() override;

		/** \brief The DC topological nodes in a DC topological island. Default: 0 */
		std::list<CIMPP::DCTopologicalNode*> DCTopologicalNodes;

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

	BaseClass* DCTopologicalIsland_factory();
}
#endif
