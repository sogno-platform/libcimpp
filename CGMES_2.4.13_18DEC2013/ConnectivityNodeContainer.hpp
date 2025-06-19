#ifndef ConnectivityNodeContainer_H
#define ConnectivityNodeContainer_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"

namespace CIMPP
{
	class ConnectivityNode;
	class TopologicalNode;

	/** \brief A base class for all objects that may contain connectivity nodes or topological nodes. */
	class ConnectivityNodeContainer : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		ConnectivityNodeContainer();
		~ConnectivityNodeContainer() override;

		/** \brief Connectivity nodes which belong to this connectivity node container. Default: 0 */
		std::list<CIMPP::ConnectivityNode*> ConnectivityNodes;

		/** \brief The topological nodes which belong to this connectivity node container. Default: 0 */
		std::list<CIMPP::TopologicalNode*> TopologicalNode;

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

	BaseClass* ConnectivityNodeContainer_factory();
}
#endif
