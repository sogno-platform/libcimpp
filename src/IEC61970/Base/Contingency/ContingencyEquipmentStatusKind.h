///////////////////////////////////////////////////////////
//  ContingencyEquipmentStatusKind.h
//  Implementation of the Class ContingencyEquipmentStatusKind
//  Created on:      28-Jan-2016 12:43:42
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_992BA0A0_502A_41a9_98BB_BD171EAC896A__INCLUDED_)
#define EA_992BA0A0_502A_41a9_98BB_BD171EAC896A__INCLUDED_

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
				 * The equipment is to be put into service.
				 */
				inService,
				/**
				 * The equipment is to be taken out of service.
				 */
				outOfService
			};

		}

	}

}
#endif // !defined(EA_992BA0A0_502A_41a9_98BB_BD171EAC896A__INCLUDED_)
