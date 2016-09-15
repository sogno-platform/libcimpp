///////////////////////////////////////////////////////////
//  DCTopologicalIsland.h
//  Implementation of the Class DCTopologicalIsland
//  Created on:      28-Jan-2016 12:44:01
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_87A7E0EC_A023_4e87_A84E_5093EF596BA4__INCLUDED_)
#define EA_87A7E0EC_A023_4e87_A84E_5093EF596BA4__INCLUDED_

#include <list>

#include "IEC61970/Base/Topology/DCTopologicalNode.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * An electrically connected subset of the network. DC topological islands can
			 * change as the current network state changes: e.g. due to
			 * - disconnect switches or breakers change state in a SCADA/EMS
			 * - manual creation, change or deletion of topological nodes in a planning tool.
			 */
			class DCTopologicalIsland : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DCTopologicalIsland();
				virtual ~DCTopologicalIsland();
				std::list<IEC61970::Base::Topology::DCTopologicalNode*> DCTopologicalNodes;

			};

		}

	}

}
#endif // !defined(EA_87A7E0EC_A023_4e87_A84E_5093EF596BA4__INCLUDED_)
