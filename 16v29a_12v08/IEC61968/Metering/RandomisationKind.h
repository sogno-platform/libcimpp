///////////////////////////////////////////////////////////
//  RandomisationKind.h
//  Implementation of the Class RandomisationKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef RANDOMISATIONKIND_H
#define RANDOMISATIONKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * Kind of randomisation to be applied to control the timing of end device control
		 * commands and/or the definition of demand response and load control events.
		 * Value other than 'none' is typically used to mitigate potential deleterious
		 * effects of simultaneous operation of multiple devices.
		 */
		enum class RandomisationKind
		{
			/**
			 * Start time of an event or control action affecting one or more multiple devices
			 * is randomised.
			 */
			 _undef = -1, 	start,
			/**
			 * End time of an event or control action affecting one or more devices is
			 * randomised to prevent simultaneous operation.
			 */
			end,
			/**
			 * Both the start time and the end time of an event or control action affecting
			 * one or more devices are randomised to prevent simultaneous operation.
			 */
			startAndEnd,
			/**
			 * Randomisation of start and/or end times involving the operation of one or more
			 * devices is controlled by default settings for the device(s).
			 */
			//warning Enumerator "default" is renamed to "default_val", this does not commply the CIM standard!
			default_val,
			/**
			 * Neither the start time nor the end time of an event or control action affecting
			 * one or more devices is randomised.
			 */
			none
		};

	}

}
#endif // RANDOMISATIONKIND_H
