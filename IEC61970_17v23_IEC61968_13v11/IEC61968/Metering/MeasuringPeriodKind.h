///////////////////////////////////////////////////////////
//  MeasuringPeriodKind.h
//  Implementation of the Class MeasuringPeriodKind
//  Original author: Marty
///////////////////////////////////////////////////////////

#ifndef MEASURINGPERIODKIND_H
#define MEASURINGPERIODKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of period for reading / measuring values.
		 */
		enum class MeasuringPeriodKind
		{
			/**
			 * Not applicable.
			 */
			none = 0,
			/**
			 * 10-minute
			 */
			 _undef = -1, 	tenMinute = 1,
			/**
			 * 15-minute
			 */
			fifteenMinute = 2,
			/**
			 * 1-minute
			 */
			oneMinute = 3,
			/**
			 * 24-hour
			 */
			twentyfourHour = 4,
			/**
			 * 30-minute
			 */
			thirtyMinute = 5,
			/**
			 * 5-minute
			 */
			fiveMinute = 6,
			/**
			 * 60-minute
			 */
			sixtyMinute = 7,
			/**
			 * 2-minute
			 */
			twoMinute = 10,
			/**
			 * 3-minute
			 */
			threeMinute = 14,
			/**
			 * Within the present period of time
			 */
			present = 15,
			/**
			 * Shifted within the previous monthly cycle and data set
			 */
			previous = 16,
			/**
			 * 20-minute interval
			 */
			twentyMinute = 31,
			/**
			 * 60-minute Fixed Block
			 */
			fixedBlock60Min = 50,
			/**
			 * 30-minute Fixed Block
			 */
			fixedBlock30Min = 51,
			/**
			 * 20-minute Fixed Block
			 */
			fixedBlock20Min = 52,
			/**
			 * 15-minute Fixed Block
			 */
			fixedBlock15Min = 53,
			/**
			 * 10-minute Fixed Block
			 */
			fixedBlock10Min = 54,
			/**
			 * 5-minute Fixed Block
			 */
			fixedBlock5Min = 55,
			/**
			 * 1-minute Fixed Block
			 */
			fixedBlock1Min = 56,
			/**
			 * 60-minute Rolling Block with 30-minute sub-intervals
			 */
			rollingBlock60MinIntvl30MinSubIntvl = 57,
			/**
			 * 60-minute Rolling Block with 20-minute sub-intervals
			 */
			rollingBlock60MinIntvl20MinSubIntvl = 58,
			/**
			 * 60-minute Rolling Block with 15-minute sub-intervals
			 */
			rollingBlock60MinIntvl15MinSubIntvl = 59,
			/**
			 * 60-minute Rolling Block with 12-minute sub-intervals
			 */
			rollingBlock60MinIntvl12MinSubIntvl = 60,
			/**
			 * 60-minute Rolling Block with 10-minute sub-intervals
			 */
			rollingBlock60MinIntvl10MinSubIntvl = 61,
			/**
			 * 60-minute Rolling Block with 6-minute sub-intervals
			 */
			rollingBlock60MinIntvl6MinSubIntvl = 62,
			/**
			 * 60-minute Rolling Block with 5-minute sub-intervals
			 */
			rollingBlock60MinIntvl5MinSubIntvl = 63,
			/**
			 * 60-minute Rolling Block with 4-minute sub-intervals
			 */
			rollingBlock60MinIntvl4MinSubIntvl = 64,
			/**
			 * 30-minute Rolling Block with 15-minute sub-intervals
			 */
			rollingBlock30MinIntvl15MinSubIntvl = 65,
			/**
			 * 30-minute Rolling Block with 10-minute sub-intervals
			 */
			rollingBlock30MinIntvl10MinSubIntvl = 66,
			/**
			 * 30-minute Rolling Block with 6-minute sub-intervals
			 */
			rollingBlock30MinIntvl6MinSubIntvl = 67,
			/**
			 * 30-minute Rolling Block with 5-minute sub-intervals.
			 */
			rollingBlock30MinIntvl5MinSubIntvl = 68,
			/**
			 * 30-minute Rolling Block with 3-minute sub-intervals
			 */
			rollingBlock30MinIntvl3MinSubIntvl = 69,
			/**
			 * 30-minute Rolling Block with 2-minute sub-intervals
			 */
			rollingBlock30MinIntvl2MinSubIntvl = 70,
			/**
			 * 15-minute Rolling Block with 5-minute sub-intervals
			 */
			rollingBlock15MinIntvl5MinSubIntvl = 71,
			/**
			 * 15-minute Rolling Block with 3-minute sub-intervals
			 */
			rollingBlock15MinIntvl3MinSubIntvl = 72,
			/**
			 * 15-minute Rolling Block with 1-minute sub-intervals
			 */
			rollingBlock15MinIntvl1MinSubIntvl = 73,
			/**
			 * 10-minute Rolling Block with 5-minute sub-intervals
			 */
			rollingBlock10MinIntvl5MinSubIntvl = 74,
			/**
			 * 10-minute Rolling Block with 2-minute sub-intervals
			 */
			rollingBlock10MinIntvl2MinSubIntvl = 75,
			/**
			 * 10-minute Rolling Block with 1-minute sub-intervals
			 */
			rollingBlock10MinIntvl1MinSubIntvl = 76,
			/**
			 * 5-minute Rolling Block with 1-minute sub-intervals
			 */
			rollingBlock5MinIntvl1MinSubIntvl = 77
		};

	}

}
#endif // MEASURINGPERIODKIND_H
