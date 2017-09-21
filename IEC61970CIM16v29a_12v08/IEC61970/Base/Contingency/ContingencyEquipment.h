///////////////////////////////////////////////////////////
//  ContingencyEquipment.h
//  Implementation of the Class ContingencyEquipment
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef CONTINGENCYEQUIPMENT_H
#define CONTINGENCYEQUIPMENT_H

#include "IEC61970/Base/Contingency/ContingencyEquipmentStatusKind.h"
#include "IEC61970/Base/Contingency/ContingencyElement.h"
#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Contingency
		{
			/**
			 * A equipment to which the in service status is to change such as a power
			 * transformer or AC line segment.
			 */
			class ContingencyEquipment : public IEC61970::Base::Contingency::ContingencyElement
			{

			public:
				ContingencyEquipment();
				virtual ~ContingencyEquipment();
				/**
				 * The status for the associated equipment when in the contingency state.   This
				 * status is independent of the case to which the contingency is originally
				 * applied, but defines the equipment status when the contingency is applied.
				 */
				IEC61970::Base::Contingency::ContingencyEquipmentStatusKind contingentStatus;
				/**
				 * The single piece of equipment to which to apply the contingency.
				 */
				IEC61970::Base::Core::Equipment *Equipment;

			};

		}

	}

}
#endif // CONTINGENCYEQUIPMENT_H
