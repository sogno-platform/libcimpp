///////////////////////////////////////////////////////////
//  WindQcontrolModeKind.h
//  Implementation of the Class WindQcontrolModeKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDQCONTROLMODEKIND_H
#define WINDQCONTROLMODEKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * General wind turbine Q control modes <i>M</i><sub>qG</sub>.
				 */
				enum class WindQcontrolModeKind
				{
					/**
					 * Voltage control (<i>M</i><i><sub>q</sub></i><sub>G</sub> equals 0).
					 */
					 _undef = -1, 	voltage,
					/**
					 * Reactive power control (<i>M</i><i><sub>q</sub></i><sub>G</sub> equals 1).
					 */
					reactivePower,
					/**
					 * Open loop reactive power control (only used with closed loop at plant level)
					 * (<i>M</i><i><sub>q</sub></i><sub>G </sub>equals 2).
					 */
					openLoopReactivePower,
					/**
					 * Power factor control (<i>M</i><i><sub>q</sub></i><sub>G </sub>equals 3).
					 */
					powerFactor,
					/**
					 * Open loop power factor control (<i>M</i><i><sub>q</sub></i><sub>G </sub>equals
					 * 4).
					 */
					openLooppowerFactor
				};

			}

		}

	}

}
#endif // WINDQCONTROLMODEKIND_H
