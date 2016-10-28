///////////////////////////////////////////////////////////
//  GovGAST.h
//  Implementation of the Class GovGAST
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef GOVGAST_H
#define GOVGAST_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Domain/ActivePower.h"
#include "IEC61970/Base/Domain/Seconds.h"
#include "IEC61970/Dynamics/StandardModels/TurbineGovernorDynamics/TurbineGovernorDynamics.h"

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineGovernorDynamics
			{
				/**
				 * Single shaft gas turbine.
				 */
				class GovGAST : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovGAST();
					virtual ~GovGAST();
					/**
					 * Ambient temperature load limit (Load Limit).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU at;
					/**
					 * Turbine damping factor (Dturb).  Typical Value = 0.18.
					 */
					IEC61970::Base::Domain::PU dturb;
					/**
					 * Temperature limiter gain (Kt).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::PU kt;
					/**
					 * Base for power values (MWbase) (> 0).
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Permanent droop (R).  Typical Value = 0.04.
					 */
					IEC61970::Base::Domain::PU r;
					/**
					 * Governor mechanism time constant (T1).  T1 represents the natural valve
					 * positioning time constant of the governor for small disturbances, as seen when
					 * rate limiting is not in effect.  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds t1;
					/**
					 * Turbine power time constant (T2).  T2 represents delay due to internal energy
					 * storage of the gas turbine engine. T2 can be used to give a rough approximation
					 * to the delay associated with acceleration of the compressor spool of a multi-
					 * shaft engine, or with the compressibility of gas in the plenum of a the free
					 * power turbine of an aero-derivative unit, for example.  Typical Value = 0.5.
					 */
					IEC61970::Base::Domain::Seconds t2;
					/**
					 * Turbine exhaust temperature time constant (T3).  Typical Value = 3.
					 */
					IEC61970::Base::Domain::Seconds t3;
					/**
					 * Maximum turbine power, PU of MWbase (Vmax).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU vmax;
					/**
					 * Minimum turbine power, PU of MWbase (Vmin).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU vmin;

				};

			}

		}

	}

}
#endif // GOVGAST_H
