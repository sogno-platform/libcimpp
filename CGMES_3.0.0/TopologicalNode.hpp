#ifndef TopologicalNode_H
#define TopologicalNode_H
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
	class BaseVoltage;
	class ConnectivityNode;
	class ConnectivityNodeContainer;
	class ReportingGroup;
	class SvInjection;
	class SvVoltage;
	class Terminal;
	class TopologicalIsland;

	/** \brief For a detailed substation model a topological node is a set of connectivity nodes that, in the current network state, are connected together through any type of closed switches, including  jumpers. Topological nodes change as the current network state changes (i.e., switches, breakers, etc. change state). For a planning model, switch statuses are not used to form topological nodes. Instead they are manually created or deleted in a model builder tool. Topological nodes maintained this way are also called "busses". */
	class TopologicalNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		TopologicalNode();
		~TopologicalNode() override;

		/** \brief The island for which the node is an angle reference.   Normally there is one angle reference node for each island. Default: 0 */
		CIMPP::TopologicalIsland* AngleRefTopologicalIsland;

		/** \brief The base voltage of the topological node. Default: 0 */
		CIMPP::BaseVoltage* BaseVoltage;

		/** \brief The connectivity node container to which the topological node belongs. Default: 0 */
		CIMPP::ConnectivityNodeContainer* ConnectivityNodeContainer;

		/** \brief The connectivity nodes combine together to form this topological node.  May depend on the current state of switches in the network. Default: 0 */
		std::list<CIMPP::ConnectivityNode*> ConnectivityNodes;

		/** \brief The reporting group to which the topological node belongs. Default: 0 */
		CIMPP::ReportingGroup* ReportingGroup;

		/** \brief The injection flows state variables associated with the topological node. Default: 0 */
		CIMPP::SvInjection* SvInjection;

		/** \brief The state voltage associated with the topological node. Default: 0 */
		CIMPP::SvVoltage* SvVoltage;

		/** \brief The terminals associated with the topological node.   This can be used as an alternative to the connectivity node path to terminal, thus making it unnecessary to model connectivity nodes in some cases.   Note that if connectivity nodes are in the model, this association would probably not be used as an input specification. Default: 0 */
		std::list<CIMPP::Terminal*> Terminal;

		/** \brief A topological node belongs to a topological island. Default: 0 */
		CIMPP::TopologicalIsland* TopologicalIsland;

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

	BaseClass* TopologicalNode_factory();
}
#endif
