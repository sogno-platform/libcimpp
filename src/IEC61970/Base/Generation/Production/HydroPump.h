///////////////////////////////////////////////////////////
//  HydroPump.h
//  Implementation of the Class HydroPump
///////////////////////////////////////////////////////////

#ifndef HYDROPUMP_H
#define HYDROPUMP_H

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
#endif // HYDROPUMP_H
