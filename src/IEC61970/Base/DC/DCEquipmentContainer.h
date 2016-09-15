///////////////////////////////////////////////////////////
//  DCEquipmentContainer.h
//  Implementation of the Class DCEquipmentContainer
//  Created on:      28-Jan-2016 12:43:58
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_F3BFFC37_E4A4_4d1b_8403_9261DC442DF5__INCLUDED_)
#define EA_F3BFFC37_E4A4_4d1b_8403_9261DC442DF5__INCLUDED_

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
#endif // !defined(EA_F3BFFC37_E4A4_4d1b_8403_9261DC442DF5__INCLUDED_)
