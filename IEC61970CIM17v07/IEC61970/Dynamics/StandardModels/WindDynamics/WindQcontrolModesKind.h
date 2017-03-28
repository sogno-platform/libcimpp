///////////////////////////////////////////////////////////
//  WindQcontrolModesKind.h
//  Implementation of the Class WindQcontrolModesKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDQCONTROLMODESKIND_H
#define WINDQCONTROLMODESKIND_H

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
				enum class WindQcontrolModesKind
				{
					/**
					 * Voltage control (<i>M</i><sub>G,u</sub>).
					 */
					voltage,
					/**
					 * Reactive power control (<i>M</i><sub>G,q</sub>).
					 */
					reactivePower,
					/**
					 * Open loop reactive power control (only used with closed loop at plant level)
					 * (<i>M</i><sub>G,qol</sub>).
					 */
					openLoopReactivePower,
					/**
					 * Power factor control (<i>M</i><sub>G,pf</sub>).
					 */
					powerFactor
				};

			}

		}

	}

}
#endif // WINDQCONTROLMODESKIND_H
