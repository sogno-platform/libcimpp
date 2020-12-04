///////////////////////////////////////////////////////////
//  ErpRecLineItem.h
//  Implementation of the Class ErpRecLineItem
///////////////////////////////////////////////////////////

#ifndef ERPRECLINEITEM_H
#define ERPRECLINEITEM_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpReceivable.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPayment.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpJournalEntry.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Individual entry of an ErpReceivable, it is a particular transaction
			 * representing an invoice, credit memo or debit memo to a customer.
			 */
			class ErpRecLineItem : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpRecLineItem();
				virtual ~ErpRecLineItem();
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfERPSupport::ErpReceivable *ErpReceivable;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*> ErpPayments;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*> ErpJournalEntries;

			};

		}

	}

}
#endif // ERPRECLINEITEM_H
