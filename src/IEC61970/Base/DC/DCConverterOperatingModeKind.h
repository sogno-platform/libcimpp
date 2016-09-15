///////////////////////////////////////////////////////////
//  DCConverterOperatingModeKind.h
//  Implementation of the Class DCConverterOperatingModeKind
//  Created on:      28-Jan-2016 12:43:57
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_5EC9BD71_F637_4806_9B78_A1A64929565C__INCLUDED_)
#define EA_5EC9BD71_F637_4806_9B78_A1A64929565C__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * The operating mode of an HVDC bipole.
			 */
			enum class DCConverterOperatingModeKind
			{
				/**
				 * Bipolar operation.
				 */
				bipolar,
				/**
				 * Monopolar operation with metallic return
				 */
				monopolarMetallicReturn,
				/**
				 * Monopolar operation with ground return
				 */
				monopolarGroundReturn
			};

		}

	}

}
#endif // !defined(EA_5EC9BD71_F637_4806_9B78_A1A64929565C__INCLUDED_)
