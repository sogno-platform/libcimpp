///////////////////////////////////////////////////////////
//  WindLVRTQcontrolModesKind.h
//  Implementation of the Class WindLVRTQcontrolModesKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDLVRTQCONTROLMODESKIND_H
#define WINDLVRTQCONTROLMODESKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * LVRT Q control modes <i>M</i><sub>qLVRT</sub>.
				 */
				enum class WindLVRTQcontrolModesKind
				{
					/**
					 * Voltage dependent reactive current injection (<i>M</i><sub>LVRT,1</sub>).
					 */
					mode1,
					/**
					 * Reactive current injection controlled as the pre-fault value plus an additional
					 * voltage dependent reactive current injection (<i>M</i><sub>LVRT,2</sub>).
					 */
					mode2,
					/**
					 * Reactive current injection controlled as the pre-fault value plus an additional
					 * voltage dependent reactive current injection during fault, and as the pre-fault
					 * value plus an additional constant reactive current injection post fault
					 * (<i>M</i><sub>LVRT,3</sub>).
					 */
					mode3
				};

			}

		}

	}

}
#endif // WINDLVRTQCONTROLMODESKIND_H
