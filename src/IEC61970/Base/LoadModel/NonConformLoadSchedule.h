///////////////////////////////////////////////////////////
//  NonConformLoadSchedule.h
//  Implementation of the Class NonConformLoadSchedule
///////////////////////////////////////////////////////////

#ifndef NONCONFORMLOADSCHEDULE_H
#define NONCONFORMLOADSCHEDULE_H

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
#endif // NONCONFORMLOADSCHEDULE_H
