///////////////////////////////////////////////////////////
//  ErpInvoiceLineItem.h
//  Implementation of the Class ErpInvoiceLineItem
///////////////////////////////////////////////////////////

#ifndef ERPINVOICELINEITEM_H
#define ERPINVOICELINEITEM_H

#include <list>

#include "IEC61970/Base/Domain/DateTimeInterval.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoiceLineItemKind.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpJournalEntry.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpRecLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPayment.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpPayableLineItem.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoice.h"
#include "IEC61968/Common/UserAttribute.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * An individual line item on an invoice.
			 */
			class ErpInvoiceLineItem : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpInvoiceLineItem();
				virtual ~ErpInvoiceLineItem();
				/**
				 * Bill period for the line item.
				 */
				IEC61970::Base::Domain::DateTimeInterval billPeriod;
				/**
				 * General Ledger account code, must be a valid combination.
				 */
				IEC61970::Base::Domain::String glAccount;
				/**
				 * Date and time line item will be posted to the General Ledger. 
				 */
				IEC61970::Base::Domain::DateTime glDateTime;
				/**
				 * Kind of line item.
				 */
				IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItemKind kind;
				/**
				 * Amount due for this line item.
				 */
				IEC61970::Base::Domain::Float lineAmount;
				/**
				 * Line item number on invoice statement.
				 */
				IEC61970::Base::Domain::String lineNumber;
				/**
				 * Version number of the bill run.
				 */
				IEC61970::Base::Domain::String lineVersion;
				/**
				 * Net line item charge amount.
				 */
				IEC61970::Base::Domain::Float netAmount;
				/**
				 * Previous line item charge amount. 
				 */
				IEC61970::Base::Domain::Float previousAmount;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*> ErpJournalEntries;
				ErpInvoiceLineItem *ContainerErpInvoiceLineItem;
				IEC61968::InfIEC61968::InfERPSupport::ErpRecLineItem *ErpRecLineItem;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpPayment*> ErpPayments;
				IEC61968::InfIEC61968::InfERPSupport::ErpPayableLineItem *ErpPayableLineItem;
				IEC61968::InfIEC61968::InfERPSupport::ErpInvoice *ErpInvoice;
				std::list<IEC61968::Common::UserAttribute*> UserAttributes;

			};

		}

	}

}
#endif // ERPINVOICELINEITEM_H
