///////////////////////////////////////////////////////////
//  HydroPump.h
//  Implementation of the Class HydroPump
//  Created on:      28-Jan-2016 12:45:21
///////////////////////////////////////////////////////////

#if !defined(EA_933CBA35_320B_433d_AB19_1FCFE28A47A2__INCLUDED_)
#define EA_933CBA35_320B_433d_AB19_1FCFE28A47A2__INCLUDED_

#include "IEC61970/Base/Domain/VolumeFlowRate.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Generation/Production/HydroPumpOpSchedule.h"
#include "IEC61970/Base/Core/Equipment.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace Production
			{
				/**
				 * A synchronous motor-driven pump, typically associated with a pumped storage
				 * plant.
				 */
				class HydroPump : public IEC61970::Base::Core::Equipment
				{

				public:
					HydroPump();
					virtual ~HydroPump();
					/**
					 * The pumping discharge under maximum head conditions, usually at full gate.
					 */
					IEC61970::Base::Domain::VolumeFlowRate pumpDischAtMaxHead;
					/**
					 * The pumping discharge under minimum head conditions, usually at full gate.
					 */
					IEC61970::Base::Domain::VolumeFlowRate pumpDischAtMinHead;
					/**
					 * The pumping power under maximum head conditions, usually at full gate.
					 */
					IEC61970::Base::Domain::ActivePower pumpPowerAtMaxHead;
					/**
					 * The pumping power under minimum head conditions, usually at full gate.
					 */
					IEC61970::Base::Domain::ActivePower pumpPowerAtMinHead;
					/**
					 * The hydro pump has a pumping schedule over time, indicating when pumping is to
					 * occur.
					 */
					IEC61970::Base::Generation::Production::HydroPumpOpSchedule *HydroPumpOpSchedule;

				};

			}

		}

	}

}
#endif // !defined(EA_933CBA35_320B_433d_AB19_1FCFE28A47A2__INCLUDED_)
