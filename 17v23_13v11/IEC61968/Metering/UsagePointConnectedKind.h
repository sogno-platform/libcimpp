///////////////////////////////////////////////////////////
//  UsagePointConnectedKind.h
//  Implementation of the Class UsagePointConnectedKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef USAGEPOINTCONNECTEDKIND_H
#define USAGEPOINTCONNECTEDKIND_H

namespace IEC61968
{
	namespace Metering
	{
		/**
		 * State of the usage point with respect to connection to the network.
		 */
		enum class UsagePointConnectedKind
		{
			/**
			 * The usage point is connected to the network and able to receive or send the
			 * applicable commodity (electricity, gas, water, etc.).
			 */
			 _undef = -1, 	connected,
			/**
			 * The usage point has been disconnected from the network at a point upstream of
			 * the meter. The usage point is unable to receive or send the applicable
			 * commodity (electricity, gas, water, etc.). A physical disconnect is often
			 * achieved by utilising a field crew.
			 */
			physicallyDisconnected,
			/**
			 * The usage point has been disconnected through operation of a disconnect
			 * function within the meter present at the usage point.  The usage point is
			 * unable to receive or send the applicable commodity (electricity, gas, water,
			 * etc.)  A logical disconnect can often be achieved without utilising a field
			 * crew.
			 */
			logicallyDisconnected
		};

	}

}
#endif // USAGEPOINTCONNECTEDKIND_H
