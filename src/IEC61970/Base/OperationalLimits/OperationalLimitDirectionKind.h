///////////////////////////////////////////////////////////
//  OperationalLimitDirectionKind.h
//  Implementation of the Class OperationalLimitDirectionKind
//  Created on:      28-Jan-2016 12:45:52
//  Original author: kdd
///////////////////////////////////////////////////////////

#if !defined(EA_9F44B88F_3401_4c77_8E6B_D949ED8DBBD4__INCLUDED_)
#define EA_9F44B88F_3401_4c77_8E6B_D949ED8DBBD4__INCLUDED_

namespace IEC61970
{
	namespace Base
	{
		namespace OperationalLimits
		{
			/**
			 * The direction attribute describes the side of  a limit that is a violation.
			 */
			enum class OperationalLimitDirectionKind
			{
				/**
				 * High means that a monitored value above the limit value is a violation.   If
				 * applied to a terminal flow, the positive direction is into the terminal.
				 */
				high,
				/**
				 * Low means a monitored value below the limit is a violation.  If applied to a
				 * terminal flow, the positive direction is into the terminal.
				 */
				low,
				/**
				 * An absoluteValue limit means that a monitored absolute value above the limit
				 * value is a violation.
				 */
				absoluteValue
			};

		}

	}

}
#endif // !defined(EA_9F44B88F_3401_4c77_8E6B_D949ED8DBBD4__INCLUDED_)
