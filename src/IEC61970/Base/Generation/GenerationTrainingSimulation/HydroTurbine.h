///////////////////////////////////////////////////////////
//  HydroTurbine.h
//  Implementation of the Class HydroTurbine
//  Created on:      28-Jan-2016 12:45:22
///////////////////////////////////////////////////////////

#if !defined(EA_DE94E9FB_77BE_4e8a_866F_FDC87CF15D6B__INCLUDED_)
#define EA_DE94E9FB_77BE_4e8a_866F_FDC87CF15D6B__INCLUDED_

#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/RotationSpeed.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/TurbineType.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/PrimeMover.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * A water driven prime mover. Typical turbine types are: Francis, Kaplan, and
				 * Pelton.
				 */
				class HydroTurbine : public IEC61970::Base::Generation::GenerationTrainingSimulation::PrimeMover
				{

				public:
					HydroTurbine();
					virtual ~HydroTurbine();
					/**
					 * Gate rate limit.
					 */
					IEC61970::Base::Domain::Float gateRateLimit;
					/**
					 * Gate upper limit.
					 */
					IEC61970::Base::Domain::PU gateUpperLimit;
					/**
					 * Maximum efficiency active power at maximum head conditions.
					 */
					IEC61970::Base::Domain::ActivePower maxHeadMaxP;
					/**
					 * Maximum efficiency active power at minimum head conditions.
					 */
					IEC61970::Base::Domain::ActivePower minHeadMaxP;
					/**
					 * Rated speed in number of revolutions.
					 */
					IEC61970::Base::Domain::RotationSpeed speedRating;
					/**
					 * Speed regulation.
					 */
					IEC61970::Base::Domain::PU speedRegulation;
					/**
					 * Transient droop time constant.
					 */
					IEC61970::Base::Domain::Seconds transientDroopTime;
					/**
					 * Transient regulation.
					 */
					IEC61970::Base::Domain::PU transientRegulation;
					/**
					 * Rated turbine active power.
					 */
					IEC61970::Base::Domain::ActivePower turbineRating;
					/**
					 * Type of turbine.
					 */
					IEC61970::Base::Generation::GenerationTrainingSimulation::TurbineType turbineType;
					/**
					 * Water starting time.
					 */
					IEC61970::Base::Domain::Seconds waterStartingTime;

				};

			}

		}

	}

}
#endif // !defined(EA_DE94E9FB_77BE_4e8a_866F_FDC87CF15D6B__INCLUDED_)
