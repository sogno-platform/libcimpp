///////////////////////////////////////////////////////////
//  GovSteamCC.h
//  Implementation of the Class GovSteamCC
//  Original author: tsaxton
///////////////////////////////////////////////////////////

#ifndef GOVSTEAMCC_H
#define GOVSTEAMCC_H

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
				 * Cross compound turbine governor model. 
				 */
				class GovSteamCC : public IEC61970::Dynamics::StandardModels::TurbineGovernorDynamics::TurbineGovernorDynamics
				{

				public:
					GovSteamCC();
					virtual ~GovSteamCC();
					/**
					 * HP damping factor (Dhp).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU dhp;
					/**
					 * LP damping factor (Dlp).  Typical Value = 0.
					 */
					IEC61970::Base::Domain::PU dlp;
					/**
					 * Fraction of HP power ahead of reheater (Fhp).  Typical Value = 0.3.
					 */
					IEC61970::Base::Domain::PU fhp;
					/**
					 * Fraction of LP power ahead of reheater (Flp).  Typical Value = 0.7.
					 */
					IEC61970::Base::Domain::PU flp;
					/**
					 * Base for power values (MWbase) (>0).  Unit = MW.
					 */
					IEC61970::Base::Domain::ActivePower mwbase;
					/**
					 * Maximum HP value position (Pmaxhp).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU pmaxhp;
					/**
					 * Maximum LP value position (Pmaxlp).  Typical Value = 1.
					 */
					IEC61970::Base::Domain::PU pmaxlp;
					/**
					 * HP governor droop (Rhp).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU rhp;
					/**
					 * LP governor droop (Rlp).  Typical Value = 0.05.
					 */
					IEC61970::Base::Domain::PU rlp;
					/**
					 * HP governor time constant (T1hp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t1hp;
					/**
					 * LP governor time constant (T1lp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t1lp;
					/**
					 * HP turbine time constant (T3hp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t3hp;
					/**
					 * LP turbine time constant (T3lp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t3lp;
					/**
					 * HP turbine time constant (T4hp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t4hp;
					/**
					 * LP turbine time constant (T4lp).  Typical Value = 0.1.
					 */
					IEC61970::Base::Domain::Seconds t4lp;
					/**
					 * HP reheater time constant (T5hp).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds t5hp;
					/**
					 * LP reheater time constant (T5lp).  Typical Value = 10.
					 */
					IEC61970::Base::Domain::Seconds t5lp;

				};

			}

		}

	}

}
#endif // GOVSTEAMCC_H
