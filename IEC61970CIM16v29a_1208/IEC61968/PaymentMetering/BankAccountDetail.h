///////////////////////////////////////////////////////////
//  BankAccountDetail.h
//  Implementation of the Class BankAccountDetail
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BANKACCOUNTDETAIL_H
#define BANKACCOUNTDETAIL_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace PaymentMetering
	{
		/**
		 * Details of a bank account.
		 */
		class BankAccountDetail : public BaseClass
		{

		public:
			BankAccountDetail();
			virtual ~BankAccountDetail();
			/**
			 * Operational account reference number.
			 */
			IEC61970::Base::Domain::String accountNumber;
			/**
			 * Name of bank where account is held.
			 */
			IEC61970::Base::Domain::String bankName;
			/**
			 * Branch of bank where account is held.
			 */
			IEC61970::Base::Domain::String branchCode;
			/**
			 * National identity number (or equivalent) of account holder.
			 */
			IEC61970::Base::Domain::String holderID;
			/**
			 * Name of account holder.
			 */
			IEC61970::Base::Domain::String holderName;

		};

	}

}
#endif // BANKACCOUNTDETAIL_H
