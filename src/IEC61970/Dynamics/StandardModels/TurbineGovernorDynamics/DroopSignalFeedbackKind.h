///////////////////////////////////////////////////////////
//  DroopSignalFeedbackKind.h
//  Implementation of the Class DroopSignalFeedbackKind
//  Created on:      28-Jan-2016 12:44:10
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#if !defined(EA_2EFF87F9_8F18_4536_8C14_4F1FADC33EDD__INCLUDED_)
#define EA_2EFF87F9_8F18_4536_8C14_4F1FADC33EDD__INCLUDED_

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace TurbineGovernorDynamics
			{
				/**
				 * Governor droop signal feedback source.
				 */
				enum class DroopSignalFeedbackKind
				{
					/**
					 * Electrical power feedback (connection indicated as 1 in the block diagrams of
					 * models, e.g. GovCT1, GovCT2).
					 */
					electricalPower,
					/**
					 * No droop signal feedback, is isochronous governor.
					 */
					none,
					/**
					 * Fuel valve stroke feedback (true stroke) (connection indicated as 2 in the
					 * block diagrams of model, e.g. GovCT1, GovCT2).
					 */
					fuelValveStroke,
					/**
					 * Governor output feedback (requested stroke) (connection indicated as 3 in the
					 * block diagrams of models, e.g. GovCT1, GovCT2).
					 */
					governorOutput
				};

			}

		}

	}

}
#endif // !defined(EA_2EFF87F9_8F18_4536_8C14_4F1FADC33EDD__INCLUDED_)
