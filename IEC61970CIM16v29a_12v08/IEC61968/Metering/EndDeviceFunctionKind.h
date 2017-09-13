///////////////////////////////////////////////////////////
//  EndDeviceFunctionKind.h
//  Implementation of the Class EndDeviceFunctionKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ENDDEVICEFUNCTIONKIND_H
#define ENDDEVICEFUNCTIONKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of end device function.
		 */
		enum class EndDeviceFunctionKind
		{
			/**
			 * Detection and monitoring of reverse flow.
			 */
			reverseFlow,
			/**
			 * Demand response functions.
			 */
			demandResponse,
			/**
			 * Presentation of metered values to a user or another system (always a function
			 * of a meter, but might not be supported by a load control unit).
			 */
			metrology,
			/**
			 * Reporting historical power interruption data.
			 */
			outageHistory,
			/**
			 * Support for one or more relays that may be programmable in the meter (and tied
			 * to TOU, time pulse, load control or other functions).
			 */
			relaysProgramming,
			/**
			 * On-request reads.
			 */
			onRequestRead,
			/**
			 * Autonomous application of daylight saving time (DST).
			 */
			autonomousDst,
			/**
			 * Electricity metering.
			 */
			electricMetering,
			/**
			 * Gas metering.
			 */
			gasMetering,
			/**
			 * Water metering.
			 */
			waterMetering
		};

	}

}
#endif // ENDDEVICEFUNCTIONKIND_H
