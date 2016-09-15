///////////////////////////////////////////////////////////
//  Source.h
//  Implementation of the Class Source
//  Created on:      28-Jan-2016 12:46:43
///////////////////////////////////////////////////////////

#if !defined(EA_335B4725_73F0_400c_869C_2B59D3004FF5__INCLUDED_)
#define EA_335B4725_73F0_400c_869C_2B59D3004FF5__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace SCADA
		{
			/**
			 * Source gives information related to the origin of a value.
			 */
			enum class Source
			{
				/**
				 * The value is provided by input from the process I/O or being calculated from
				 * some function.
				 */
				PROCESS,
				/**
				 * The value contains a default value.
				 */
				DEFAULTED,
				/**
				 * The value is provided by input of an operator or by an automatic source.
				 */
				SUBSTITUTED
			};

		}

	}

}
#endif // !defined(EA_335B4725_73F0_400c_869C_2B59D3004FF5__INCLUDED_)
