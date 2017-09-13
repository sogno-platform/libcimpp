///////////////////////////////////////////////////////////
//  BankAccount.h
//  Implementation of the Class BankAccount
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Common/Document.h"
#include "IEC61968/InfIEC61968/InfCommon/Bank.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Bank account.
			 */
			class BankAccount : public IEC61968::Common::Document
			{

			public:
				BankAccount();
				virtual ~BankAccount();
				/**
				 * Account reference number.
				 */
				IEC61970::Base::Domain::String accountNumber;
				/**
				 * Bank that provides this BankAccount.
				 */
				IEC61968::InfIEC61968::InfCommon::Bank *Bank;

			};

		}

	}

}
#endif // BANKACCOUNT_H
