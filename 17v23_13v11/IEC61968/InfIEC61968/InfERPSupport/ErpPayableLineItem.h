///////////////////////////////////////////////////////////
//  ErpPayableLineItem.h
//  Implementation of the Class ErpPayableLineItem
///////////////////////////////////////////////////////////

#ifndef ERPPAYABLELINEITEM_H
#define ERPPAYABLELINEITEM_H

#include <list>

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpJournalEntry.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPayable.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPayment.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Of an ErpPayable, a line item references an ErpInvoiceLineitem or other source
			 * such as credit memos.
			 */
			class ErpPayableLineItem : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpPayableLineItem();
				virtual ~ErpPayableLineItem();
				IEC61968::Common::Status status;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*> ErpJournalEntries;
				IEC61968::InfIEC61968::InfERPSupport::ErpPayable *ErpPayable;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*> ErpPayments;

			};

		}

	}

}
#endif // ERPPAYABLELINEITEM_H
