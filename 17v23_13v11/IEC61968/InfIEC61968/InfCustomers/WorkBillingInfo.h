///////////////////////////////////////////////////////////
//  WorkBillingInfo.h
//  Implementation of the Class WorkBillingInfo
///////////////////////////////////////////////////////////

#ifndef WORKBILLINGINFO_H
#define WORKBILLINGINFO_H

#include <list>

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoiceLineItem.h"
#include "IEC61968/Work/Work.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCustomers
		{
			/**
			 * Billing information for work performed for the customer. The history of Work
			 * Billing Info, Invoices, and Payments is to be maintained in associated
			 * ActivityRecords.
			 */
			class WorkBillingInfo : public IEC61968::Common::Document
			{

			public:
				WorkBillingInfo();
				virtual ~WorkBillingInfo();
				/**
				 * Estimated cost for work. 
				 */
				IEC61970::Base::Domain::Money costEstimate;
				/**
				 * Amount of price on deposit.
				 */
				IEC61970::Base::Domain::Money deposit;
				/**
				 * Discount from standard price.
				 */
				IEC61970::Base::Domain::Float discount;
				/**
				 * Date and time by which payment for bill is expected from client.
				 */
				IEC61970::Base::Domain::DateTime dueDateTime;
				/**
				 * Date and time bill was issued to client.
				 */
				IEC61970::Base::Domain::DateTime issueDateTime;
				/**
				 * Date payment was received from client.
				 */
				IEC61970::Base::Domain::DateTime receivedDateTime;
				/**
				 * Amount of bill.
				 */
				IEC61970::Base::Domain::Money workPrice;
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceLineItem*> ErpLineItems;
				std::list<IEC61968::Work::Work*> Works;

			};

		}

	}

}
#endif // WORKBILLINGINFO_H
