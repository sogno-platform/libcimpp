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
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "String.hpp"

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

		/** \brief The base voltage of the topologocial node. Default: 0 */
		CIMPP::BaseVoltage* BaseVoltage;

		/** \brief The connectivity node container to which the toplogical node belongs. Default: 0 */
		CIMPP::ConnectivityNodeContainer* ConnectivityNodeContainer;

		/** \brief The connectivity nodes combine together to form this topological node.  May depend on the current state of switches in the network. Default: 0 */
		std::list<CIMPP::ConnectivityNode*> ConnectivityNodes;

		/** \brief The topological nodes that belong to the reporting group. Default: 0 */
		CIMPP::ReportingGroup* ReportingGroup;

		/** \brief The topological node associated with the flow injection state variable. Default: 0 */
		CIMPP::SvInjection* SvInjection;

		/** \brief The topological node associated with the voltage state. Default: 0 */
		CIMPP::SvVoltage* SvVoltage;

		/** \brief The topological node associated with the terminal.   This can be used as an alternative to the connectivity node path to topological node, thus making it unneccesary to model connectivity nodes in some cases.   Note that the if connectivity nodes are in the model, this association would probably not be used as an input specification. Default: 0 */
		std::list<CIMPP::Terminal*> Terminal;

		/** \brief A topological node belongs to a topological island. Default: 0 */
		CIMPP::TopologicalIsland* TopologicalIsland;

		/** \brief Identifies if a node is a BoundaryPoint. If boundaryPoint=true the ConnectivityNode or the TopologicalNode represents a BoundaryPoint. Default: false */
		CIMPP::Boolean boundaryPoint;

		/** \brief The attribute is used for an exchange of the ISO code of the region to which the `From` side of the Boundary point belongs to or it is connected to. The ISO code is two characters country code as defined by ISO 3166 (). The length of the string is 2 characters maximum. The attribute is a required for the Boundary Model Authority Set where this attribute is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
		CIMPP::String fromEndIsoCode;

		/** \brief The attribute is used for an exchange of a human readable name with length of the string 32 characters maximum. The attribute covers two cases:  The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
		CIMPP::String fromEndName;

		/** \brief The attribute is used for an exchange of the name of the TSO to which the `From` side of the Boundary point belongs to or it is connected to. The length of the string is 32 characters maximum. The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
		CIMPP::String fromEndNameTso;

		/** \brief The attribute is used for an exchange of the ISO code of the region to which the `To` side of the Boundary point belongs to or it is connected to. The ISO code is two characters country code as defined by ISO 3166 (). The length of the string is 2 characters maximum. The attribute is a required for the Boundary Model Authority Set where this attribute is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
		CIMPP::String toEndIsoCode;

		/** \brief The attribute is used for an exchange of a human readable name with length of the string 32 characters maximum. The attribute covers two cases:  The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
		CIMPP::String toEndName;

		/** \brief The attribute is used for an exchange of the name of the TSO to which the `To` side of the Boundary point belongs to or it is connected to. The length of the string is 32 characters maximum. The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
		CIMPP::String toEndNameTso;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* TopologicalNode_factory();
}
#endif
