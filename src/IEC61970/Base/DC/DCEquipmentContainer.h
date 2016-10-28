///////////////////////////////////////////////////////////
//  DCEquipmentContainer.h
//  Implementation of the Class DCEquipmentContainer
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCEQUIPMENTCONTAINER_H
#define DCEQUIPMENTCONTAINER_H

#include <list>

#include "IEC61970/Base/Topology/DCTopologicalNode.h"
#include "IEC61970/Base/Core/EquipmentContainer.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A modeling construct to provide a root class for containment of DC as well as
			 * AC equipment. The class differ from the EquipmentContaner for AC in that it may
			 * also contain DCNodes. Hence it can contain both AC and DC equipment.
			 */
			class DCEquipmentContainer : public IEC61970::Base::Core::EquipmentContainer
			{

			public:
				DCEquipmentContainer();
				virtual ~DCEquipmentContainer();
				std::list<IEC61970::Base::Topology::DCTopologicalNode*> DCTopologicalNode;

			};

		}

	}

}
#endif // DCEQUIPMENTCONTAINER_H
