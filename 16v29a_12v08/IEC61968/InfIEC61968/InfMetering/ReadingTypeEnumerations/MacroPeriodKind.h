///////////////////////////////////////////////////////////
//  MacroPeriodKind.h
//  Implementation of the Class MacroPeriodKind
//  Original author: Marty
///////////////////////////////////////////////////////////

#ifndef MACROPERIODKIND_H
#define MACROPERIODKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfMetering
		{
			namespace ReadingTypeEnumerations
			{
				enum class MacroPeriodKind
				{
					/**
					 * Not Applicable
					 */
					 _undef = -1, 	none = 0,
					/**
					 * Captured during the billing period starting at midnight of the first day of the
					 * billing period (as defined by the billing cycle day). If during the current
					 * billing period, it specifies a period from the start of the current billing
					 * period until "now".
					 */
					billingPeriod = 8,
					/**
					 * Daily Period starting at midnight. If for the current day, this specifies the
					 * time from midnight to "now".
					 */
					daily = 11,
					/**
					 * Monthly period starting at midnight on the first day of the month. If within
					 * the current month, this specifies the period from the start of the month until
					 * "now."
					 */
					monthly = 13,
					/**
					 * A season of time spanning multiple months. E.g. "Summer," "Spring," "Fall," and
					 * "Winter" based cycle. If within the current season, it specifies the period
					 * from the start of the current season until "now."
					 */
					seasonal = 22,
					/**
					 * Weekly period starting at midnight on the first day of the week and ending the
					 * instant before midnight the last day of the week. If within the current week,
					 * it specifies the period from the start of the week until "now."
					 */
					weekly = 24,
					/**
					 * For the period defined by the start and end of the TimePeriod element in the
					 * message.
					 */
					specifiedPeriod = 32
				};

			}

		}

	}

}
#endif // MACROPERIODKIND_H
