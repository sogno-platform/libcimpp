///////////////////////////////////////////////////////////
//  DroopSignalFeedbackKind.h
//  Implementation of the Class DroopSignalFeedbackKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef DROOPSIGNALFEEDBACKKIND_H
#define DROOPSIGNALFEEDBACKKIND_H

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
					 _undef = -1, 	electricalPower,
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
#endif // DROOPSIGNALFEEDBACKKIND_H
