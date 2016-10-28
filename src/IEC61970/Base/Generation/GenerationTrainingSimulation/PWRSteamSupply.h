///////////////////////////////////////////////////////////
//  PWRSteamSupply.h
//  Implementation of the Class PWRSteamSupply
///////////////////////////////////////////////////////////

#ifndef PWRSTEAMSUPPLY_H
#define PWRSTEAMSUPPLY_H

#include "IEC61970/Base/Domain/PU.h"
#include "IEC61970/Base/Generation/GenerationTrainingSimulation/SteamSupply.h"

namespace IEC61970
{
	namespace Base
	{
		namespace Generation
		{
			namespace GenerationTrainingSimulation
			{
				/**
				 * Pressurized water reactor used as a steam supply to a steam turbine.
				 */
				class PWRSteamSupply : public IEC61970::Base::Generation::GenerationTrainingSimulation::SteamSupply
				{

				public:
					PWRSteamSupply();
					virtual ~PWRSteamSupply();
					/**
					 * Cold leg feedback lag time constant.
					 */
					IEC61970::Base::Domain::PU coldLegFBLagTC;
					/**
					 * Cold leg feedback lead time constant.
					 */
					IEC61970::Base::Domain::PU coldLegFBLeadTC1;
					/**
					 * Cold leg feedback lead time constant.
					 */
					IEC61970::Base::Domain::PU coldLegFBLeadTC2;
					/**
					 * Cold leg feedback gain 1.
					 */
					IEC61970::Base::Domain::PU coldLegFG1;
					/**
					 * Cold leg feedback gain 2.
					 */
					IEC61970::Base::Domain::PU coldLegFG2;
					/**
					 * Cold leg lag time constant.
					 */
					IEC61970::Base::Domain::PU coldLegLagTC;
					/**
					 * Core heat transfer lag time constant.
					 */
					IEC61970::Base::Domain::PU coreHTLagTC1;
					/**
					 * Core heat transfer lag time constant.
					 */
					IEC61970::Base::Domain::PU coreHTLagTC2;
					/**
					 * Core neutronics effective time constant.
					 */
					IEC61970::Base::Domain::PU coreNeutronicsEffTC;
					/**
					 * Core neutronics and heat transfer.
					 */
					IEC61970::Base::Domain::PU coreNeutronicsHT;
					/**
					 * Feedback factor.
					 */
					IEC61970::Base::Domain::PU feedbackFactor;
					/**
					 * Hot leg lag time constant.
					 */
					IEC61970::Base::Domain::PU hotLegLagTC;
					/**
					 * Hot leg steam gain.
					 */
					IEC61970::Base::Domain::PU hotLegSteamGain;
					/**
					 * Hot leg to cold leg gain.
					 */
					IEC61970::Base::Domain::PU hotLegToColdLegGain;
					/**
					 * Pressure control gain.
					 */
					IEC61970::Base::Domain::PU pressureCG;
					/**
					 * Steam flow feedback gain.
					 */
					IEC61970::Base::Domain::PU steamFlowFG;
					/**
					 * Steam pressure drop lag time constant.
					 */
					IEC61970::Base::Domain::PU steamPressureDropLagTC;
					/**
					 * Steam pressure feedback gain.
					 */
					IEC61970::Base::Domain::PU steamPressureFG;
					/**
					 * Throttle pressure factor.
					 */
					IEC61970::Base::Domain::PU throttlePressureFactor;
					/**
					 * Throttle pressure setpoint.
					 */
					IEC61970::Base::Domain::PU throttlePressureSP;

				};

			}

		}

	}

}
#endif // PWRSTEAMSUPPLY_H
