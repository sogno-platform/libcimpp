///////////////////////////////////////////////////////////
//  CsOperatingModeKind.h
//  Implementation of the Class CsOperatingModeKind
//  Created on:      28-Jan-2016 12:43:46
//  Original author: selaost1
///////////////////////////////////////////////////////////

#if !defined(EA_9EA1CE55_46ED_4a80_9326_00D0BBAF7AE6__INCLUDED_)
#define EA_9EA1CE55_46ED_4a80_9326_00D0BBAF7AE6__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			/**
			 * Operating mode for HVDC line operating as Current Source Converter.
			 */
			enum class CsOperatingModeKind
			{
				/**
				 * Operating as inverter
				 */
				inverter,
				/**
				 * Operating as rectifier.
				 */
				rectifier
			};

		}

	}

}
#endif // !defined(EA_9EA1CE55_46ED_4a80_9326_00D0BBAF7AE6__INCLUDED_)
