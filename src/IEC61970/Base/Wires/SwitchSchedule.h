///////////////////////////////////////////////////////////
//  SwitchSchedule.h
//  Implementation of the Class SwitchSchedule
//  Created on:      28-Jan-2016 12:47:02
//  Original author: KLH
///////////////////////////////////////////////////////////

#if !defined(EA_256FA50D_8025_4c71_8424_44F8C683B081__INCLUDED_)
#define EA_256FA50D_8025_4c71_8424_44F8C683B081__INCLUDED_

#include "IEC61970/Base/LoadModel/SeasonDayTypeSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * A schedule of switch positions.  If RegularTimePoint.value1 is 0, the switch is
			 * open.  If 1, the switch is closed.  
			 */
			class SwitchSchedule : public IEC61970::Base::LoadModel::SeasonDayTypeSchedule
			{

			public:
				SwitchSchedule();
				virtual ~SwitchSchedule();

			};

		}

	}

}
#endif // !defined(EA_256FA50D_8025_4c71_8424_44F8C683B081__INCLUDED_)
