///////////////////////////////////////////////////////////
//  DCSwitch.h
//  Implementation of the Class DCSwitch
//  Created on:      28-Jan-2016 12:44:01
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_88530C4E_2C78_40e3_A462_9947256F0D38__INCLUDED_)
#define EA_88530C4E_2C78_40e3_A462_9947256F0D38__INCLUDED_

#include "IEC61970/Base/DC/DCConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A switch within the DC system.
			 */
			class DCSwitch : public IEC61970::Base::DC::DCConductingEquipment
			{

			public:
				DCSwitch();
				virtual ~DCSwitch();

			};

		}

	}

}
#endif // !defined(EA_88530C4E_2C78_40e3_A462_9947256F0D38__INCLUDED_)
