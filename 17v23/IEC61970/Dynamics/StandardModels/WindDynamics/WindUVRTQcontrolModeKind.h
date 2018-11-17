///////////////////////////////////////////////////////////
//  WindUVRTQcontrolModeKind.h
//  Implementation of the Class WindUVRTQcontrolModeKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDUVRTQCONTROLMODEKIND_H
#define WINDUVRTQCONTROLMODEKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * UVRT Q control modes <i>M</i><sub>qUVRT</sub>.
				 */
				enum class WindUVRTQcontrolModeKind
				{
					/**
					 * Voltage dependent reactive current injection
					 * (<i>M</i><i><sub>q</sub></i><sub>UVRT </sub>equals 0).
					 */
					 _undef = -1, 	mode0,
					/**
					 * Reactive current injection controlled as the pre-fault value plus an additional
					 * voltage dependent reactive current injection
					 * (<i>M</i><i><sub>q</sub></i><sub>UVRT</sub> equals 1).
					 */
					mode1,
					/**
					 * Reactive current injection controlled as the pre-fault value plus an additional
					 * voltage dependent reactive current injection during fault, and as the pre-fault
					 * value plus an additional constant reactive current injection post fault
					 * (<i>M</i><i><sub>q</sub></i><sub>UVRT </sub>equals 2).
					 */
					mode2
				};

			}

		}

	}

}
#endif // WINDUVRTQCONTROLMODEKIND_H
