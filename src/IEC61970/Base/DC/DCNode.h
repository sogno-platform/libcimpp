///////////////////////////////////////////////////////////
//  DCNode.h
//  Implementation of the Class DCNode
//  Created on:      28-Jan-2016 12:43:59
//  Original author: SELAOST1
///////////////////////////////////////////////////////////

#if !defined(EA_4E28390C_316F_4f71_84FB_378E40EF7BF2__INCLUDED_)
#define EA_4E28390C_316F_4f71_84FB_378E40EF7BF2__INCLUDED_

#include <list>

#include "IEC61970/Base/DC/DCBaseTerminal.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"
#include "IEC61970/Base/Topology/DCTopologicalNode.h"
#include "IEC61970/Base/DC/DCEquipmentContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * DC nodes are points where terminals of DC conducting equipment are connected
			 * together with zero impedance.
			 */
			class DCNode : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				DCNode();
				virtual ~DCNode();
				std::list<IEC61970::Base::DC::DCBaseTerminal*> DCTerminals;
				/**
				 * See association end ConnectivityNode.TopologicalNode.
				 */
				IEC61970::Base::Topology::DCTopologicalNode *DCTopologicalNode;
				/**
				 * The DC container for the DC nodes.
				 */
				IEC61970::Base::DC::DCEquipmentContainer *DCEquipmentContainer;

			};

		}

	}

}
#endif // !defined(EA_4E28390C_316F_4f71_84FB_378E40EF7BF2__INCLUDED_)
