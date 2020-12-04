///////////////////////////////////////////////////////////
//  ErpLedBudLineItem.h
//  Implementation of the Class ErpLedBudLineItem
///////////////////////////////////////////////////////////

#ifndef ERPLEDBUDLINEITEM_H
#define ERPLEDBUDLINEITEM_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpLedgerBudget.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Individual entry of a given Ledger Budget, typically containing information
			 * such as amount, accounting date, accounting period, and is associated with the
			 * applicable general ledger account.
			 */
			class ErpLedBudLineItem : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpLedBudLineItem();
				virtual ~ErpLedBudLineItem();
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfERPSupport::ErpLedgerBudget *ErpLedgerBudget;

			};

		}

	}

}
#endif // ERPLEDBUDLINEITEM_H
