///////////////////////////////////////////////////////////
//  ErpLedgerEntry.h
//  Implementation of the Class ErpLedgerEntry
///////////////////////////////////////////////////////////

#ifndef ERPLEDGERENTRY_H
#define ERPLEDGERENTRY_H

#include <list>

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpAccountKind.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpLedBudLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpJournalEntry.h"
#include "IEC61968/Common/UserAttribute.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Details of an individual entry in a ledger, which was posted from a journal on
			 * the posted date.
			 */
			class ErpLedgerEntry : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpLedgerEntry();
				virtual ~ErpLedgerEntry();
				/**
				 * Account identifier for this entry.
				 */
				IEC61970::Base::Domain::String accountID;
				/**
				 * Kind of account for this entry.
				 */
				IEC61968::InfIEC61968::InfERPSupport::ErpAccountKind accountKind;
				/**
				 * The amount of the debit or credit for this account.
				 */
				IEC61970::Base::Domain::Money amount;
				/**
				 * Date and time this entry was posted to the ledger.
				 */
				IEC61970::Base::Domain::DateTime postedDateTime;
				IEC61968::Common::Status status;
				/**
				 * Date and time journal entry was recorded.
				 */
				IEC61970::Base::Domain::DateTime transactionDateTime;
				#warning Enumerator "ErpLedgerEntry" is renamed to "MyErpLedgerEntry", this does not commply the CIM standard!
				IEC61968::InfIEC61968::InfERPSupport::ErpLedBudLineItem *MyErpLedgerEntry;
				IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry *ErpJounalEntry;
				std::list<IEC61968::Common::UserAttribute*> UserAttributes;

			};

		}

	}

}
#endif // ERPLEDGERENTRY_H
