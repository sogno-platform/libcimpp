///////////////////////////////////////////////////////////
//  OperationalLimitDirectionKind.h
//  Implementation of the Class OperationalLimitDirectionKind
//  Original author: kdd
///////////////////////////////////////////////////////////

#ifndef OPERATIONALLIMITDIRECTIONKIND_H
#define OPERATIONALLIMITDIRECTIONKIND_H

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
				 _undef = -1, 	high,
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
#endif // OPERATIONALLIMITDIRECTIONKIND_H
