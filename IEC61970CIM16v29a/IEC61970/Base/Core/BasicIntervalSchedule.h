///////////////////////////////////////////////////////////
//  BasicIntervalSchedule.h
//  Implementation of the Class BasicIntervalSchedule
///////////////////////////////////////////////////////////

#ifndef BASICINTERVALSCHEDULE_H
#define BASICINTERVALSCHEDULE_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/UnitMultiplier.h"
#include "IEC61970/Base/Domain/UnitSymbol.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Core
		{
			/**
			 * Schedule of values at points in time.
			 */
			class BasicIntervalSchedule : public IEC61970::Base::Core::IdentifiedObject
			{

			public:
				BasicIntervalSchedule();
				virtual ~BasicIntervalSchedule();
				/**
				 * The time for the first time point.
				 */
				IEC61970::Base::Domain::DateTime startTime;
				/**
				 * Multiplier for value1.
				 */
				IEC61970::Base::Domain::UnitMultiplier value1Multiplier;
				/**
				 * Value1 units of measure.
				 */
				IEC61970::Base::Domain::UnitSymbol value1Unit;
				/**
				 * Multiplier for value2.
				 */
				IEC61970::Base::Domain::UnitMultiplier value2Multiplier;
				/**
				 * Value2 units of measure.
				 */
				IEC61970::Base::Domain::UnitSymbol value2Unit;

			};

		}

	}

}
#endif // BASICINTERVALSCHEDULE_H
