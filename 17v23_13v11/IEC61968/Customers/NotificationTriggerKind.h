///////////////////////////////////////////////////////////
//  NotificationTriggerKind.h
//  Implementation of the Class NotificationTriggerKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef NOTIFICATIONTRIGGERKIND_H
#define NOTIFICATIONTRIGGERKIND_H

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Kind of trigger to notify customer.
		 */
		enum class NotificationTriggerKind
		{
			/**
			 * Notify customer for the first time that estimated restoration time is available.
			 */
			 _undef = -1, 	initialEtr,
			/**
			 * Notify customer if estimated restoration time changes.
			 */
			etrChange,
			/**
			 * Notify customer when power has been restored.
			 */
			powerRestored,
			/**
			 * Notify customer of planned outage.
			 */
			powerOut,
			/**
			 * Notify customer that a crew has been dispatched to investigate the problem.
			 */
			informDispatched
		};

	}

}
#endif // NOTIFICATIONTRIGGERKIND_H
