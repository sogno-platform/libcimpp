///////////////////////////////////////////////////////////
//  ContingencyEquipmentStatusKind.h
//  Implementation of the Class ContingencyEquipmentStatusKind
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef CONTINGENCYEQUIPMENTSTATUSKIND_H
#define CONTINGENCYEQUIPMENTSTATUSKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace Contingency
		{
			/**
			 * Indicates the state which the contingency equipment is to be in when the
			 * contingency is applied.
			 */
			enum class ContingencyEquipmentStatusKind
			{
				/**
				 * The equipment is in service.
				 */
				 _undef = -1, 	inService,
				/**
				 * The equipment is to be taken out of service.
				 */
				outOfService
			};

		}

	}

}
#endif // CONTINGENCYEQUIPMENTSTATUSKIND_H
