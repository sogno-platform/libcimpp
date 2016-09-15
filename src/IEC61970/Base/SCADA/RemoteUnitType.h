///////////////////////////////////////////////////////////
//  RemoteUnitType.h
//  Implementation of the Class RemoteUnitType
//  Created on:      28-Jan-2016 12:46:33
///////////////////////////////////////////////////////////

#if !defined(EA_AAA927F4_BC7D_4250_BE4E_C4CBBDE7AB8D__INCLUDED_)
#define EA_AAA927F4_BC7D_4250_BE4E_C4CBBDE7AB8D__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * Type of remote unit.
			 */
			enum class RemoteUnitType
			{
				/**
				 * Remote terminal unit.
				 */
				RTU,
				/**
				 * Substation control system.
				 */
				SubstationControlSystem,
				/**
				 * Control center.
				 */
				ControlCenter,
				/**
				 * Intelligent electronic device (IED).
				 */
				IED
			};

		}

	}

}
#endif // !defined(EA_AAA927F4_BC7D_4250_BE4E_C4CBBDE7AB8D__INCLUDED_)
