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
				IEC61970::Base::Domain::UnitMultiplier value1Multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				/**
				 * Value1 units of measure.
				 */
				IEC61970::Base::Domain::UnitSymbol value1Unit = IEC61970::Base::Domain::UnitSymbol::_undef;
				/**
				 * Multiplier for value2.
				 */
				IEC61970::Base::Domain::UnitMultiplier value2Multiplier = IEC61970::Base::Domain::UnitMultiplier::_undef;
				/**
				 * Value2 units of measure.
				 */
				IEC61970::Base::Domain::UnitSymbol value2Unit = IEC61970::Base::Domain::UnitSymbol::_undef;

			};

		}

	}

}
#endif // BASICINTERVALSCHEDULE_H
