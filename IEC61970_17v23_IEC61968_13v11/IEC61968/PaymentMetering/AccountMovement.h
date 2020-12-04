///////////////////////////////////////////////////////////
//  AccountMovement.h
//  Implementation of the Class AccountMovement
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ACCOUNTMOVEMENT_H
#define ACCOUNTMOVEMENT_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Credit/debit movements for an account.
		 */
		class AccountMovement : public BaseClass
		{

		public:
			AccountMovement();
			virtual ~AccountMovement();
			/**
			 * Amount that was credited to/debited from an account. For example: payment
			 * received/interest charge on arrears.
			 */
			IEC61970::Base::Domain::Money amount;
			/**
			 * Date and time when the credit/debit transaction was performed.
			 */
			IEC61970::Base::Domain::DateTime dateTime;
			/**
			 * Reason for credit/debit transaction on an account. Example: payment
			 * received/arrears interest levied.
			 */
			IEC61970::Base::Domain::String reason;

		};

	}

}
#endif // ACCOUNTMOVEMENT_H
