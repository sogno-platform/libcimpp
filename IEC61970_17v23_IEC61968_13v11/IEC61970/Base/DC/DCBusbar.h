///////////////////////////////////////////////////////////
//  DCBusbar.h
//  Implementation of the Class DCBusbar
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DCBUSBAR_H
#define DCBUSBAR_H

#include "IEC61970/Base/DC/DCConductingEquipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * A busbar within a DC system.
			 */
			class DCBusbar : public IEC61970::Base::DC::DCConductingEquipment
			{

			public:
				DCBusbar();
				virtual ~DCBusbar();

			};

		}

	}

}
#endif // DCBUSBAR_H
