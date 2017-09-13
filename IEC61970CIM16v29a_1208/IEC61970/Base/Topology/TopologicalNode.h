///////////////////////////////////////////////////////////
//  TopologicalNode.h
//  Implementation of the Class TopologicalNode
///////////////////////////////////////////////////////////

#ifndef TOPOLOGICALNODE_H
#define TOPOLOGICALNODE_H

#include <list>

#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/ReactivePower.h"
#include "IEC61970/Base/Core/ReportingSuperGroup.h"
#include "IEC61970/Base/Core/ConnectivityNodeContainer.h"
#include "IEC61970/Base/Core/ConnectivityNode.h"
#include "IEC61970/Base/Core/BaseVoltage.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Topology
		{
			/**
			 * For a detailed substation model a topological node is a set of connectivity
			 * nodes that, in the current network state, are connected together through any
			 * type of closed switches, including  jumpers. Topological nodes change as the
			 * current network state changes (i.e., switches, breakers, etc. change state).
			 * For a planning model, switch statuses are not used to form topological nodes.
			 * Instead they are manually created or deleted in a model builder tool.
			 * Topological nodes maintained this way are also called "busses".
			 */
			class TopologicalNode : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				TopologicalNode();
				virtual ~TopologicalNode();
				/**
				 * The active power injected into the bus at this location in addition to
				 * injections from equipment.  Positive sign means injection into the
				 * TopologicalNode (bus).
				 * Starting value for a steady state solution. 
				 */
				IEC61970::Base::Domain::ActivePower pInjection;
				/**
				 * The reactive power injected into the bus at this location in addition to
				 * injections from equipment. Positive sign means injection into the
				 * TopologicalNode (bus).
				 * Starting value for a steady state solution.
				 */
				IEC61970::Base::Domain::ReactivePower qInjection;
				/**
				 * The reporting group to which the topological node belongs.
				 */
				IEC61970::Base::Core::ReportingSuperGroup::ReportingGroup *ReportingGroup;
				/**
				 * The connectivity node container to which the toplogical node belongs.
				 */
				IEC61970::Base::Core::ConnectivityNodeContainer *ConnectivityNodeContainer;
				/**
				 * The connectivity nodes combine together to form this topological node.  May
				 * depend on the current state of switches in the network.
				 */
				std::list<IEC61970::Base::Core::ConnectivityNode*> ConnectivityNodes;
				/**
				 * The base voltage of the topologocial node.
				 */
				IEC61970::Base::Core::BaseVoltage *BaseVoltage;
				/**
				 * The terminals associated with the topological node.   This can be used as an
				 * alternative to the connectivity node path to terminal, thus making it
				 * unneccesary to model connectivity nodes in some cases.   Note that if
				 * connectivity nodes are in the model, this association would probably not be
				 * used as an input specification.
				 */
				std::list<IEC61970::Base::Core::Terminal*> Terminal;

			};

		}

	}

}
#endif // TOPOLOGICALNODE_H
