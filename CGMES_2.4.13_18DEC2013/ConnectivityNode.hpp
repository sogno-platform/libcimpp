#ifndef ConnectivityNode_H
#define ConnectivityNode_H

#include "IdentifiedObject.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Boolean.hpp"
#include "String.hpp"

namespace CIMPP {


class TopologicalNode;
class ConnectivityNodeContainer;
class Terminal;
	/*
	Connectivity nodes are points where terminals of AC conducting equipment are connected together with zero impedance.
	*/
	class ConnectivityNode: public IdentifiedObject
	{

	public:
					CIMPP::TopologicalNode* TopologicalNode; 	/* The connectivity nodes combine together to form this topological node.  May depend on the current state of switches in the network. Default: 0 */
					CIMPP::Boolean boundaryPoint; 	/* Identifies if a node is a BoundaryPoint. If boundaryPoint=true the ConnectivityNode or the TopologicalNode represents a BoundaryPoint. Default: false */
					CIMPP::String fromEndIsoCode; 	/* The attribute is used for an exchange of the ISO code of the region to which the `From` side of the Boundary point belongs to or it is connected to. The ISO code is two characters country code as defined by ISO 3166 (). The length of the string is 2 characters maximum. The attribute is a required for the Boundary Model Authority Set where this attribute is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String fromEndName; 	/* The attribute is used for an exchange of a human readable name with length of the string 32 characters maximum. The attribute covers two cases:  The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String fromEndNameTso; 	/* The attribute is used for an exchange of the name of the TSO to which the `From` side of the Boundary point belongs to or it is connected to. The length of the string is 32 characters maximum. The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String toEndIsoCode; 	/* The attribute is used for an exchange of the ISO code of the region to which the `To` side of the Boundary point belongs to or it is connected to. The ISO code is two characters country code as defined by ISO 3166 (). The length of the string is 2 characters maximum. The attribute is a required for the Boundary Model Authority Set where this attribute is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String toEndName; 	/* The attribute is used for an exchange of a human readable name with length of the string 32 characters maximum. The attribute covers two cases:  The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::String toEndNameTso; 	/* The attribute is used for an exchange of the name of the TSO to which the `To` side of the Boundary point belongs to or it is connected to. The length of the string is 32 characters maximum. The attribute is required for the Boundary Model Authority Set where it is used only for the TopologicalNode in the Boundary Topology profile and ConnectivityNode in the Boundary Equipment profile. Default: '' */
					CIMPP::ConnectivityNodeContainer* ConnectivityNodeContainer; 	/* Container of this connectivity node. Default: 0 */
					std::list<CIMPP::Terminal*> Terminals; 	/* The connectivity node to which this terminal connects with zero impedance. Default: 0 */
				
		static const char debugName[];
		virtual const char* debugString();
		
		/* constructor initialising all attributes to null */
		ConnectivityNode();
		virtual ~ConnectivityNode();
	
		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* ConnectivityNode_factory();
}
#endif
