///////////////////////////////////////////////////////////
//  WindLVRTQcontrolModesKind.h
//  Implementation of the Class WindLVRTQcontrolModesKind
//  Created on:      28-Jan-2016 12:47:54
//  Original author: civanov
///////////////////////////////////////////////////////////

#if !defined(EA_B4DB06B9_3009_4b28_918E_BBDC97A0423A__INCLUDED_)
#define EA_B4DB06B9_3009_4b28_918E_BBDC97A0423A__INCLUDED_

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
#endif // !defined(EA_B4DB06B9_3009_4b28_918E_BBDC97A0423A__INCLUDED_)
