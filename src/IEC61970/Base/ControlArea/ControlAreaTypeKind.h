///////////////////////////////////////////////////////////
//  ControlAreaTypeKind.h
//  Implementation of the Class ControlAreaTypeKind
//  Created on:      28-Jan-2016 12:43:43
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_7DE871BD_A517_493f_9218_6C425570684E__INCLUDED_)
#define EA_7DE871BD_A517_493f_9218_6C425570684E__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace ControlArea
		{
			/**
			 * The type of control area.
			 */
			enum class ControlAreaTypeKind
			{
				/**
				 * Used for automatic generation control.
				 */
				AGC,
				/**
				 * Used for load forecast.
				 */
				Forecast,
				/**
				 * Used for interchange specification or control.
				 */
				Interchange
			};

		}

	}

}
#endif // !defined(EA_7DE871BD_A517_493f_9218_6C425570684E__INCLUDED_)
