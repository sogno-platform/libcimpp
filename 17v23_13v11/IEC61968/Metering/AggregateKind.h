///////////////////////////////////////////////////////////
//  AggregateKind.h
//  Implementation of the Class AggregateKind
//  Original author: Marty
///////////////////////////////////////////////////////////

#ifndef AGGREGATEKIND_H
#define AGGREGATEKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of aggregation for read / measured values from multiple end points.
		 */
		enum class AggregateKind
		{
			/**
			 * Not applicable.
			 */
			none = 0,
			/**
			 * The value represents average.
			 */
			 _undef = -1, 	average = 2,
			/**
			 * The value represents an amount over which a threshold was exceeded.
			 */
			excess = 4,
			/**
			 * The value represents a programmed high threshold. 
			 */
			highThreshold = 5,
			/**
			 * The value represents a programmed low threshold. 
			 */
			lowThreshold = 7,
			/**
			 * The highest value observed.
			 */
			maximum = 8,
			/**
			 * The smallest value observed.
			 */
			minimum = 9,
			/**
			 * The nominal value.
			 */
			nominal = 11,
			/**
			 * The normal value.
			 */
			normal = 12,
			/**
			 * The second highest value observed.
			 */
			secondMaximum = 16,
			/**
			 * The second smallest value observed.
			 */
			secondMinimum = 17,
			/**
			 * The third highest value observed.
			 */
			thirdMaximum = 23,
			/**
			 * The fourth highest value observed.
			 */
			fourthMaximum = 24,
			/**
			 * The fifth highest value observed.
			 */
			fifthMaximum = 25,
			/**
			 * The accumulated sum.
			 */
			sum = 26
		};

	}

}
#endif // AGGREGATEKIND_H
