///////////////////////////////////////////////////////////
//  WindPlantQcontrolModeKind.h
//  Implementation of the Class WindPlantQcontrolModeKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDPLANTQCONTROLMODEKIND_H
#define WINDPLANTQCONTROLMODEKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Reactive power/voltage controller mode.
				 */
				enum class WindPlantQcontrolModeKind
				{
					/**
					 * Reactive power reference.
					 */
					 _undef = -1, 	reactivePower,
					/**
					 * Power factor reference.
					 */
					powerFactor,
					/**
					 * UQ static.
					 */
					uqStatic,
					/**
					 * Voltage control.
					 */
					voltageControl
				};

			}

		}

	}

}
#endif // WINDPLANTQCONTROLMODEKIND_H
