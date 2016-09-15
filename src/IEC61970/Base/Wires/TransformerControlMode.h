///////////////////////////////////////////////////////////
//  TransformerControlMode.h
//  Implementation of the Class TransformerControlMode
//  Created on:      28-Jan-2016 12:47:20
///////////////////////////////////////////////////////////

#if !defined(EA_17EC0AD4_DED7_4190_A134_5F5671190734__INCLUDED_)
#define EA_17EC0AD4_DED7_4190_A134_5F5671190734__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace Wires
		{
			/**
			 * Control modes for a transformer.
			 */
			enum class TransformerControlMode
			{
				/**
				 * Voltage control
				 */
				volt,
				/**
				 * Reactive power flow control
				 */
				reactive
			};

		}

	}

}
#endif // !defined(EA_17EC0AD4_DED7_4190_A134_5F5671190734__INCLUDED_)
