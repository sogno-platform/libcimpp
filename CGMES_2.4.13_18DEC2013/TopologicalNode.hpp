#ifndef TopologicalNode_H
#define TopologicalNode_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "String.hpp"

namespace CIMPP {


class BaseVoltage;
class ConnectivityNode;
class ConnectivityNodeContainer;
class ReportingGroup;
class Terminal;
class SvInjection;
class SvVoltage;
class TopologicalIsland;
	/*
	For a detailed substation model a topological node is a set of connectivity nodes that, in the current network state, are connected together through any type of closed switches, including  jumpers. Topological nodes change as the current network state changes (i.e., switches, breakers, etc. change state). For a planning model, switch statuses are not used to form topological nodes. Instead they are manually created or deleted in a model builder tool. Topological nodes maintained this way are also called "busses".
	*/
	class TopologicalNode: public IdentifiedObject
	{

	public:
					CIMPP::BaseVoltage* BaseVoltage; 	/* The base voltage of the topologocial node. Default: 0 */
					std::list<CIMPP::ConnectivityNode*> ConnectivityNodes; 	/* The topological node to which this connectivity node is assigned.  May depend on the current state of switches in the network. Default: 0 */
					CIMPP::ConnectivityNodeContainer* ConnectivityNodeContainer; 	/* The connectivity node container to which the toplogical node belongs. Default: 0 */
					CIMPP::ReportingGroup* ReportingGroup; 	/* The topological nodes that belong to the reporting group. Default: 0 */
					std::list<CIMPP::Terminal*> Terminal; 	/* The topological node associated with the terminal.   This can be used as an alternative to the connectivity node path to topological node, thus making it unneccesary to model connectivity nodes in some cases.   Note that the if connectivity nodes are in the model, this association would probably not be used as an input specification. Default: 0 */
					CIMPP::Boolean boundaryPoint; 	/* Identifies if a node is a BoundaryPoint. If boundaryPoint=true the ConnectivityNode or the TopologicalNode represents a BoundaryPoint. Default: false */
					CIMPP::String fromEndIsoCode; 	/* The attribute is used for an exchange of the ISO code of the region to which the `From` side of the Boundary point belongs to or it is connected to. The ISO code is two characters country code as defined by ISO 3166 (). The length of the string is 2 characters maximum. The attribute is a required for the Boundary Model Authority Set where this attribute is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String fromEndName; 	/* The attribute is used for an exchange of a human readable name with length of the string 32 characters maximum. The attribute covers two cases:  The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String fromEndNameTso; 	/* The attribute is used for an exchange of the name of the TSO to which the `From` side of the Boundary point belongs to or it is connected to. The length of the string is 32 characters maximum. The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String toEndIsoCode; 	/* The attribute is used for an exchange of the ISO code of the region to which the `To` side of the Boundary point belongs to or it is connected to. The ISO code is two characters country code as defined by ISO 3166 (). The length of the string is 2 characters maximum. The attribute is a required for the Boundary Model Authority Set where this attribute is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String toEndName; 	/* The attribute is used for an exchange of a human readable name with length of the string 32 characters maximum. The attribute covers two cases:  The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String toEndNameTso; 	/* The attribute is used for an exchange of the name of the TSO to which the `To` side of the Boundary point belongs to or it is connected to. The length of the string is 32 characters maximum. The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::SvInjection* SvInjection; 	/* The topological node associated with the flow injection state variable. Default: 0 */
					CIMPP::SvVoltage* SvVoltage; 	/* The topological node associated with the voltage state. Default: 0 */
					CIMPP::TopologicalIsland* AngleRefTopologicalIsland; 	/* The island for which the node is an angle reference.   Normally there is one angle reference node for each island. Default: 0 */
					CIMPP::TopologicalIsland* TopologicalIsland; 	/* A topological node belongs to a topological island. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		TopologicalNode();
		virtual ~TopologicalNode();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* TopologicalNode_factory();
}
#endif
