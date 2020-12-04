///////////////////////////////////////////////////////////
//  CustomerNotification.h
//  Implementation of the Class CustomerNotification
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef CUSTOMERNOTIFICATION_H
#define CUSTOMERNOTIFICATION_H

#include "BaseClass.h"
#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Customers/NotificationTriggerKind.h"

namespace IEC61968
{
	namespace Customers
	{
		class TroubleTicket;
		class Customer;
	}
}

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Conditions for notifying the customer about the changes in the status of their
		 * service (e.g., outage restore, estimated restoration time, tariff or service
		 * level change, etc.)
		 */
		class CustomerNotification : public BaseClass
		{

		public:
			CustomerNotification();
			virtual ~CustomerNotification();
			/**
			 * Type of contact (e.g., phone, email, etc.).
			 */
			IEC61970::Base::Domain::String contactType;
			/**
			 * Value of contact type (e.g., phone number, email address, etc.).
			 */
			IEC61970::Base::Domain::String contactValue;
			/**
			 * Earliest date time to call the customer.
			 */
			IEC61970::Base::Domain::DateTime earliestDateTimeToCall;
			/**
			 * Latest date time to call the customer.
			 */
			IEC61970::Base::Domain::DateTime latestDateTimeToCall;
			/**
			 * Trigger for this notification.
			 */
			IEC61968::Customers::NotificationTriggerKind trigger = IEC61968::Customers::NotificationTriggerKind::_undef;
			/**
			 * Customer requiring this notification.
			 */
			IEC61968::Customers::Customer *Customer;
			/**
			 * All trouble tickets with this notification.
			 */
			std::list<IEC61968::Customers::TroubleTicket*> TroubleTickets;

		};

	}

}
#endif // CUSTOMERNOTIFICATION_H
