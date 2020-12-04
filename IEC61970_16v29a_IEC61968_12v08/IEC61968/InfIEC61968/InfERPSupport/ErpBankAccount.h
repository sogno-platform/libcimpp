///////////////////////////////////////////////////////////
//  ErpBankAccount.h
//  Implementation of the Class ErpBankAccount
///////////////////////////////////////////////////////////

#ifndef ERPBANKACCOUNT_H
#define ERPBANKACCOUNT_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfCommon/BankAccount.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Relationship under a particular name, usually evidenced by a deposit against
			 * which withdrawals can be made. Types of bank accounts include: demand, time,
			 * custodial, joint, trustee, corporate, special, and regular accounts.
			 * A statement of transactions during a fiscal period and the resulting balance is
			 * maintained on each account.
			 * For Payment metering, the account is associated with Bank and Supplier,
			 * reflecting details of the bank account used for depositing revenue collected by
			 * TokenVendor. The name of the account holder should be specified in 'name'
			 * attribute.
			 */
			class ErpBankAccount : public IEC61968::InfIEC61968::InfCommon::BankAccount
			{

			public:
				ErpBankAccount();
				virtual ~ErpBankAccount();
				/**
				 * Bank ABA.
				 */
				IEC61970::Base::Domain::String bankABA;

			};

		}

	}

}
#endif // ERPBANKACCOUNT_H
