///////////////////////////////////////////////////////////
//  AccountNotification.h
//  Implementation of the Class AccountNotification
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef ACCOUNTNOTIFICATION_H
#define ACCOUNTNOTIFICATION_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"

namespace IEC61968
{
	namespace Customers
	{
		/**
		 * Notifications for move-in, move-out, delinquencies, etc.
		 */
		class AccountNotification : public BaseClass
		{

		public:
			AccountNotification();
			virtual ~AccountNotification();
			IEC61970::Base::Domain::String customerNotificationType;
			IEC61970::Base::Domain::String methodType;
			IEC61970::Base::Domain::String note;
			IEC61970::Base::Domain::DateTime time;

		};

	}

}
#endif // ACCOUNTNOTIFICATION_H
