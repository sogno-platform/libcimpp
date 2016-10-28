///////////////////////////////////////////////////////////
//  IrregularIntervalSchedule.h
//  Implementation of the Class IrregularIntervalSchedule
///////////////////////////////////////////////////////////

#ifndef IRREGULARINTERVALSCHEDULE_H
#define IRREGULARINTERVALSCHEDULE_H

#include <list>

#include "IEC61970/Base/Core/BasicIntervalSchedule.h"
#include "IEC61970/Base/Core/IrregularTimePoint.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * The schedule has time points where the time between them varies.
			 */
			class IrregularIntervalSchedule : public IEC61970::Base::Core::BasicIntervalSchedule
			{

			public:
				IrregularIntervalSchedule();
				virtual ~IrregularIntervalSchedule();
				/**
				 * The point data values that define a curve.
				 */
				std::list<IEC61970::Base::Core::IrregularTimePoint*> TimePoints;

			};

		}

	}

}
#endif // IRREGULARINTERVALSCHEDULE_H
