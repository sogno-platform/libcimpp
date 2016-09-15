///////////////////////////////////////////////////////////
//  WindQcontrolModesKind.h
//  Implementation of the Class WindQcontrolModesKind
//  Created on:      28-Jan-2016 12:47:58
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_2D3A1FF8_9ED4_44ec_8EA0_9259296D4A47__INCLUDED_)
#define EA_2D3A1FF8_9ED4_44ec_8EA0_9259296D4A47__INCLUDED_

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
#endif // !defined(EA_2D3A1FF8_9ED4_44ec_8EA0_9259296D4A47__INCLUDED_)
