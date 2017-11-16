///////////////////////////////////////////////////////////
//  FuelAllocationSchedule.h
//  Implementation of the Class FuelAllocationSchedule
///////////////////////////////////////////////////////////

#ifndef FUELALLOCATIONSCHEDULE_H
#define FUELALLOCATIONSCHEDULE_H

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Generation/Production/FuelType.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Core/Curve.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * The amount of fuel of a given type which is allocated for consumption over a
				 * specified period of time.
				 */
				class FuelAllocationSchedule : public IEC61970::Base::Core::Curve
				{

				public:
					FuelAllocationSchedule();
					virtual ~FuelAllocationSchedule();
					/**
					 * The end time and date of the fuel allocation schedule.
					 */
					IEC61970::Base::Domain::DateTime fuelAllocationEndDate;
					/**
					 * The start time and date of the fuel allocation schedule.
					 */
					IEC61970::Base::Domain::DateTime fuelAllocationStartDate;
					/**
					 * The type of fuel, which also indicates the corresponding measurement unit.
					 */
					IEC61970::Base::Generation::Production::FuelType fuelType = IEC61970::Base::Generation::Production::FuelType::_undef;
					/**
					 * The maximum amount fuel that is allocated for consumption for the scheduled
					 * time period.
					 */
					IEC61970::Base::Domain::Float maxFuelAllocation;
					/**
					 * The minimum amount fuel that is allocated for consumption for the scheduled
					 * time period, e.g., based on a "take-or-pay" contract.
					 */
					IEC61970::Base::Domain::Float minFuelAllocation;

				};

			}

		}

	}

}
#endif // FUELALLOCATIONSCHEDULE_H
