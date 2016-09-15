///////////////////////////////////////////////////////////
//  DCBusbar.h
//  Implementation of the Class DCBusbar
//  Created on:      28-Jan-2016 12:43:55
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_C8F8CD4F_FB97_4782_A9FF_59F478D588B1__INCLUDED_)
#define EA_C8F8CD4F_FB97_4782_A9FF_59F478D588B1__INCLUDED_

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
#endif // !defined(EA_C8F8CD4F_FB97_4782_A9FF_59F478D588B1__INCLUDED_)
