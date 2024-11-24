#ifndef ConnectivityNodeContainer_H
#define ConnectivityNodeContainer_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <string>
#include <unordered_map>

#include "PowerSystemResource.hpp"
#include "BaseClassDefiner.hpp"

namespace CIMPP
{
	class ConnectivityNode;
	class TopologicalNode;

	/*
	A base class for all objects that may contain connectivity nodes or topological nodes.
	*/
	class ConnectivityNodeContainer : public PowerSystemResource
	{
	public:
		/* constructor initialising all attributes to null */
		ConnectivityNodeContainer();
		~ConnectivityNodeContainer() override;

		std::list<CIMPP::ConnectivityNode*> ConnectivityNodes;  /* Connectivity nodes which belong to this connectivity node container. Default: 0 */
		std::list<CIMPP::TopologicalNode*> TopologicalNode;  /* The topological nodes which belong to this connectivity node container. Default: 0 */

		static const char debugName[];
		const char* debugString() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		static const BaseClassDefiner declare();
	};

	BaseClass* ConnectivityNodeContainer_factory();
}
#endif
