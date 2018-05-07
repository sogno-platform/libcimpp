///////////////////////////////////////////////////////////
//  HydroTurbine.h
//  Implementation of the Class HydroTurbine
///////////////////////////////////////////////////////////

#ifndef HYDROTURBINE_H
#define HYDROTURBINE_H

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
					IEC61970::Base::Generation::GenerationTrainingSimulation::TurbineType turbineType = IEC61970::Base::Generation::GenerationTrainingSimulation::TurbineType::_undef;
					/**
					 * Water starting time.
					 */
					IEC61970::Base::Domain::Seconds waterStartingTime;

				};

			}

		}

	}

}
#endif // HYDROTURBINE_H
