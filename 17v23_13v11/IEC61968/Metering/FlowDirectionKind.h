///////////////////////////////////////////////////////////
//  FlowDirectionKind.h
//  Implementation of the Class FlowDirectionKind
//  Original author: Marty
///////////////////////////////////////////////////////////

#ifndef FLOWDIRECTIONKIND_H
#define FLOWDIRECTIONKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of flow direction for reading/measured  values proper to some commodities
		 * such as, for example, energy, power, demand.
		 */
		enum class FlowDirectionKind
		{
			/**
			 * Not Applicable (N/A)
			 */
			none = 0,
			/**
			 * "Delivered," or "Imported" as defined 61968-2.
			 * 
			 * Forward Active Energy is a positive kWh value as one would naturally expect to
			 * find as energy is supplied by the utility and consumed at the service.
			 * 
			 * Forward Reactive Energy is a positive VArh value as one would naturally expect
			 * to find in the presence of inductive loading.
			 * 
			 * In polyphase metering, the forward energy register is incremented when the sum
			 * of the phase energies is greater than zero:
			 * 
			 * <img src="HTS_1.PNG" width="209" height="16" border="0" alt="graphic"/>
			 */
			 _undef = -1, 	forward = 1,
			/**
			 * Typically used to describe that a power factor is lagging the reference value.
			 * 
			 * Note 1: When used to describe VA, “lagging” describes a form of measurement
			 * where reactive power is considered in all four quadrants, but real power is
			 * considered only in quadrants I and IV.
			 * Note 2: When used to describe power factor, the term “Lagging” implies that the
			 * PF is negative. The term “lagging” in this case takes the place of the negative
			 * sign. If a signed PF value is to be passed by the data producer, then the
			 * direction of flow enumeration zero (none) should be used in order to avoid the
			 * possibility of creating an expression that employs a double negative. The data
			 * consumer should be able to tell from the sign of the data if the PF is leading
			 * or lagging. This principle is analogous to the concept that “Reverse” energy is
			 * an implied negative value, and to publish a negative reverse value would be
			 * ambiguous.
			 * Note 3: Lagging power factors typically indicate inductive loading.
			 */
			lagging = 2,
			/**
			 * Typically used to describe that a power factor is leading the reference value.
			 * Note: Leading power factors typically indicate capacitive loading.
			 */
			leading = 3,
			/**
			 * |Forward| - |Reverse|, See 61968-2.
			 * 
			 * Note: In some systems, the value passed as a “net” value could become negative.
			 * In other systems the value passed as a “net” value is always a positive number,
			 * and rolls-over and rolls-under as needed. 
			 */
			net = 4,
			/**
			 * Reactive positive quadrants. (The term “lagging” is preferred.)
			 */
			q1plusQ2 = 5,
			/**
			 * Quadrants 1 and 3
			 */
			q1plusQ3 = 7,
			/**
			 * Quadrants 1 and 4 usually represent forward active energy
			 */
			q1plusQ4 = 8,
			/**
			 * Q1 minus Q4
			 */
			q1minusQ4 = 9,
			/**
			 * Quadrants 2 and 3 usually represent reverse active energy
			 */
			q2plusQ3 = 10,
			/**
			 * Quadrants 2 and 4
			 */
			q2plusQ4 = 11,
			/**
			 * Q2 minus Q3
			 */
			q2minusQ3 = 12,
			/**
			 * Reactive negative quadrants. (The term “leading” is preferred.)
			 */
			q3plusQ4 = 13,
			/**
			 * Q3 minus Q2
			 */
			q3minusQ2 = 14,
			/**
			 * Q1 only
			 */
			quadrant1 = 15,
			/**
			 * Q2 only
			 */
			quadrant2 = 16,
			/**
			 * Q3 only
			 */
			quadrant3 = 17,
			/**
			 * Q4 only
			 */
			quadrant4 = 18,
			/**
			 * Reverse Active Energy is equivalent to "Received," or "Exported" as defined in
			 * 61968-2.
			 * 
			 * Reverse Active Energy is a positive kWh value as one would expect to find when
			 * energy is backfed by the service onto the utility network.
			 * 
			 * Reverse Reactive Energy is a positive VArh value as one would expect to find in
			 * the presence of capacitive loading and a leading Power Factor.
			 * 
			 * In polyphase metering, the reverse energy register is incremented when the sum
			 * of the phase energies is less than zero:
			 * 
			 * <img src="HTS_1.PNG" width="209" height="16" border="0" alt="graphic"/>
			 * 
			 * Note: The value passed as a reverse value is always a positive value. It is
			 * understood by the label “reverse” that it represents negative flow.
			 */
			reverse = 19,
			/**
			 * |Forward| + |Reverse|, See 61968-2.
			 * The sum of the commodity in all quadrants Q1+Q2+Q3+Q4.
			 * 
			 * In polyphase metering, the total energy register is incremented when the
			 * absolute value of the sum of the phase energies is greater than zero:
			 * 
			 * <img src="HTS_1.PNG" width="217" height="16" border="0" alt="graphic"/>
			 */
			total = 20,
			/**
			 * In polyphase metering, the total by phase energy register is incremented when
			 * the sum of the absolute values of the phase energies is greater than zero:
			 * 
			 * <img src="HTS_1.PNG" width="234" height="16" border="0" alt="graphic"/>
			 * 
			 * In single phase metering, the formulas for “Total” and “Total by phase”
			 * collapse to the same expression. For communication purposes however, the
			 * “Total” enumeration should be used with single phase meter data.
			 */
			totalByPhase = 21
		};

	}

}
#endif // FLOWDIRECTIONKIND_H
