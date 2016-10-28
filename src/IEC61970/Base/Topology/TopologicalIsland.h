///////////////////////////////////////////////////////////
//  TopologicalIsland.h
//  Implementation of the Class TopologicalIsland
///////////////////////////////////////////////////////////

#ifndef TOPOLOGICALISLAND_H
#define TOPOLOGICALISLAND_H

#include <list>

#include "IEC61970/Base/Topology/TopologicalNode.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Topology
		{
			/**
			 * An electrically connected subset of the network. Topological islands can change
			 * as the current network state changes: e.g. due to
			 * - disconnect switches or breakers change state in a SCADA/EMS
			 * - manual creation, change or deletion of topological nodes in a planning tool.
			 */
			class TopologicalIsland : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				TopologicalIsland();
				virtual ~TopologicalIsland();
				/**
				 * A topological node belongs to a topological island.
				 */
				std::list<IEC61970::Base::Topology::TopologicalNode*> TopologicalNodes;
				/**
				 * The angle reference for the island.   Normally there is one TopologicalNode
				 * that is selected as the angle reference for each island.   Other reference
				 * schemes exist, so the association is typically optional.
				 */
				IEC61970::Base::Topology::TopologicalNode *AngleRefTopologicalNode;

			};

		}

	}

}
#endif // TOPOLOGICALISLAND_H
