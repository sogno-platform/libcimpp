///////////////////////////////////////////////////////////
//  CoolantType.h
//  Implementation of the Class CoolantType
//  Created on:      28-Jan-2016 12:43:44
///////////////////////////////////////////////////////////

#if !defined(EA_7124291D_56C9_4cbd_B1CA_8D577AA8F361__INCLUDED_)
#define EA_7124291D_56C9_4cbd_B1CA_8D577AA8F361__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Method of cooling a machine.
			 */
			enum class CoolantType
			{
				/**
				 * Air.
				 */
				air,
				/**
				 * Hydrogen gas.
				 */
				hydrogenGas,
				/**
				 * Water.
				 */
				water
			};

		}

	}

}
#endif // !defined(EA_7124291D_56C9_4cbd_B1CA_8D577AA8F361__INCLUDED_)
