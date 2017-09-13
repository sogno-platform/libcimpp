///////////////////////////////////////////////////////////
//  ErpQuoteLineItem.h
//  Implementation of the Class ErpQuoteLineItem
///////////////////////////////////////////////////////////

#ifndef ERPQUOTELINEITEM_H
#define ERPQUOTELINEITEM_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpReqLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpQuote.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoiceLineItem.h"


namespace IEC61968
{
	
	namespace InfIEC61968
	{
		namespace InfWork{
			class Design;
		}
		namespace InfERPSupport
		{
			/**
			 * Of an ErpQuote, the item or product quoted along with quantity, price and other
			 * descriptive information.
			 */
			class ErpQuoteLineItem : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpQuoteLineItem();
				virtual ~ErpQuoteLineItem();
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfERPSupport::ErpReqLineItem *ErpReqLineItem;
				IEC61968::InfIEC61968::InfERPSupport::ErpQuote *ErpQuote;
				/**
				 * Some utilities provide quotes to customer for services, where the customer
				 * accepts the quote by making a payment. An invoice is required for this to occur.
				 */
				IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem *ErpInvoiceLineItem;
				IEC61968::InfIEC61968::InfWork::Design *Design;

			};

		}

	}

}
#endif // ERPQUOTELINEITEM_H
