///////////////////////////////////////////////////////////
//  DCSwitch.h
//  Implementation of the Class DCSwitch
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCSWITCH_H
#define DCSWITCH_H

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
#endif // DCSWITCH_H
