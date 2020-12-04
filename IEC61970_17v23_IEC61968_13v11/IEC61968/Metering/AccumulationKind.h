///////////////////////////////////////////////////////////
//  AccumulationKind.h
//  Implementation of the Class AccumulationKind
//  Original author: Marty
///////////////////////////////////////////////////////////

#ifndef ACCUMULATIONKIND_H
#define ACCUMULATIONKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of accumulation behaviour for read / measured values from individual end
		 * points.
		 */
		enum class AccumulationKind
		{
			/**
			 * Not applicable, or implied by the unit of measure.
			 */
			 _undef = -1, 	none = 0,
			/**
			 * A value from a register which represents the bulk quantity of a commodity. This
			 * quantity is computed as the integral of the commodity usage rate. This value is
			 * typically used as the basis for the dial reading at the meter, and as a result,
			 * will roll over upon reaching a maximum dial value.
			 * Note 1: With the metering system, the roll-over behaviour typically implies a
			 * roll-under behavior so that the value presented is always a positive value (e.g.
			 * unsigned integer or positive decimal.) However, when communicating data between
			 * enterprise applications a negative value might occur in a case such as net
			 * metering.
			 * Note 2: A 'bulkQuantity' refers primarily to the dial reading and not the
			 * consumption over a specific period of time.
			 */
			bulkQuantity = 1,
			/**
			 * The sum of the previous billing period values and the present period value.
			 * Note: 'continuousCumulative' is commonly used in conjunction with 'demand', and
			 * it  would represent the cumulative sum of the previous billing period maximum
			 * demand values (as occurring with each demand reset) summed with the present
			 * period maximum demand value (which has yet to be reset.)
			 */
			continuousCumulative = 2,
			/**
			 * The sum of the previous billing period values.
			 * Note: 'cumulative' is commonly used in conjunction with “demand.” Each demand
			 * reset causes the maximum demand value for the present billing period (since the
			 * last demand reset) to accumulate as an accumulative total of all maximum
			 * demands. So instead of 'zeroing' the demand register, a demand reset has the
			 * effect of adding the present maximum demand to this accumulating total. 
			 */
			cumulative = 3,
			/**
			 * The difference between the value at the end of the prescribed interval and the
			 * beginning of the interval. This is used for incremental interval data.
			 * Note: One common application would be for load profile data, another use might
			 * be to report the number of events within an interval (such as the number of
			 * equipment energisations within the specified period of time.)
			 */
			deltaData = 4,
			/**
			 * As if a needle is swung out on the meter face to a value to indicate the
			 * current value.
			 * Note: An 'indicating' value is typically measured over hundreds of milliseconds
			 * or greater, or may imply a “pusher” mechanism to capture a value. Compare this
			 * to 'instantaneous' which is measured over a shorter period of time.
			 */
			indicating = 6,
			/**
			 * A form of accumulation which is selective with respect to time.
			 * Note : 'summation' could be considered a specialisation of 'bulkQuantity' as it
			 * selectively accumulates pulses over a timing pattern (while 'bulkQuantity'
			 * accumulates pulses all of the time).
			 */
			summation = 9,
			/**
			 * A form of computation which introduces a time delay characteristic to the data
			 * value.
			 */
			timeDelay = 10,
			/**
			 * Typically measured over the fastest period of time allowed by the definition of
			 * the metric (usually milliseconds or tens of milliseconds.)
			 * Note: 'instantaneous' was moved to attribute #3 in Ed.2 of IEC 61968-9, from
			 * attribute #1 in Ed.1 of IEC 61968-9.
			 */
			instantaneous = 12,
			/**
			 * When this description is applied to a metered value, it implies that the value
			 * is a time-independent cumulative quantity much like a 'bulkQuantity', except
			 * that it latches upon the maximum value upon reaching that value. Any additional
			 * accumulation (positive or negative) is discarded until a reset occurs.
			 * Note: A 'latchingQuantity' may also occur in the downward direction – upon
			 * reaching a minimum value. The terms 'maximum' or 'minimum' (for 'aggregate')
			 * will usually be included when this type of accumulation behaviour is present.
			 * When this description is applied to an encoded value (UOM= 'Code'), it implies
			 * that the value has one or more bits which are latching. The condition that
			 * caused the bit to be set may have long since evaporated.
			 * In either case, the timestamp that accompanies the value may not coincide with
			 * the moment the value was initially set.
			 * In both cases a system will need to perform an operation to clear the latched
			 * value.
			 */
			latchingQuantity = 13,
			/**
			 * A time-independent cumulative quantity much like a 'bulkQuantity' or a
			 * 'latchingQuantity', except that the accumulation stops at the maximum or
			 * minimum values. When the maximum is reached, any additional positive
			 * accumulation is discarded, but negative accumulation may be accepted (thus
			 * lowering the counter.) Likewise, when the negative bound is reached, any
			 * additional negative accumulation is discarded, but positive accumulation is
			 * accepted (thus increasing the counter.) 
			 */
			boundedQuantity = 14
		};

	}

}
#endif // ACCUMULATIONKIND_H
