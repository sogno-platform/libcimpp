///////////////////////////////////////////////////////////
//  NonConformLoadSchedule.h
//  Implementation of the Class NonConformLoadSchedule
//  Created on:      28-Jan-2016 12:45:48
///////////////////////////////////////////////////////////

#if !defined(EA_3A91C66C_A753_4d0c_B686_FA75822670EF__INCLUDED_)
#define EA_3A91C66C_A753_4d0c_B686_FA75822670EF__INCLUDED_

#include "IEC61970/Base/LoadModel/SeasonDayTypeSchedule.h"

namespace IEC61970
{
	namespace Base
	{
		namespace LoadModel
		{
			/**
			 * An active power (Y1-axis) and reactive power (Y2-axis) schedule (curves) versus
			 * time (X-axis) for non-conforming loads, e.g., large industrial load or power
			 * station service (where modeled).
			 */
			class NonConformLoadSchedule : public IEC61970::Base::LoadModel::SeasonDayTypeSchedule
			{

			public:
				NonConformLoadSchedule();
				virtual ~NonConformLoadSchedule();

			};

		}

	}

}
#endif // !defined(EA_3A91C66C_A753_4d0c_B686_FA75822670EF__INCLUDED_)
