///////////////////////////////////////////////////////////
//  ErpJournalEntry.h
//  Implementation of the Class ErpJournalEntry
///////////////////////////////////////////////////////////

#ifndef ERPJOURNALENTRY_H
#define ERPJOURNALENTRY_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Details of an individual entry in a journal, which is to be posted to a ledger
			 * on the posting date.
			 */
			class ErpJournalEntry : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpJournalEntry();
				virtual ~ErpJournalEntry();
				/**
				 * Account identifier for this entry.
				 */
				IEC61970::Base::Domain::String accountID;
				/**
				 * The amount of the debit or credit for this account.
				 */
				IEC61970::Base::Domain::Money amount;
				/**
				 * Date and time this entry is to be posted to the ledger.
				 */
				IEC61970::Base::Domain::DateTime postingDateTime;
				/**
				 * The identifer of the source for this entry.
				 */
				IEC61970::Base::Domain::String sourceID;
				IEC61968::Common::Status status;
				/**
				 * Date and time journal entry was recorded.
				 */
				IEC61970::Base::Domain::DateTime transactionDateTime;

			};

		}

	}

}
#endif // ERPJOURNALENTRY_H
