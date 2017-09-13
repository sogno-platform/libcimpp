///////////////////////////////////////////////////////////
//  ErpInvoice.h
//  Implementation of the Class ErpInvoice
///////////////////////////////////////////////////////////

#ifndef ERPINVOICE_H
#define ERPINVOICE_H

#include "IEC61970/Base/Domain/Money.h"
#include "IEC61968/InfIEC61968/InfERPSupport/BillMediaKind.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpInvoiceKind.h"
#include "IEC61970/Base/Domain/Boolean.h"
#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * A roll up of invoice line items. The whole invoice has a due date and amount to
			 * be paid, with information such as customer, banks etc. being obtained through
			 * associations. The invoice roll up is based on individual line items that each
			 * contain amounts and descriptions for specific services or products.
			 */
			class ErpInvoice : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpInvoice();
				virtual ~ErpInvoice();
				/**
				 * Total amount due on this invoice based on line items and applicable adjustments.
				 */
				IEC61970::Base::Domain::Money amount;
				/**
				 * Kind of media by which the CustomerBillingInfo was delivered.
				 */
				IEC61968::InfIEC61968::InfERPSupport::BillMediaKind billMediaKind;
				/**
				 * Calculated date upon which the Invoice amount is due.
				 */
				IEC61970::Base::Domain::Date dueDate;
				/**
				 * Kind of invoice (default is 'sales').
				 */
				IEC61968::InfIEC61968::InfERPSupport::ErpInvoiceKind kind;
				/**
				 * Date on which the customer billing statement/invoice was printed/mailed.
				 */
				IEC61970::Base::Domain::Date mailedDate;
				/**
				 * True if payment is to be paid by a Customer to accept a particular ErpQuote
				 * (with associated Design) and have work initiated, at which time an associated
				 * ErpInvoice should automatically be generated. EprPayment.subjectStatus
				 * satisfies terms specificed in the ErpQuote.
				 */
				IEC61970::Base::Domain::Boolean proForma;
				/**
				 * Number of an invoice to be reference by this invoice.
				 */
				IEC61970::Base::Domain::String referenceNumber;
				/**
				 * Date and time when the invoice is issued.
				 */
				IEC61970::Base::Domain::DateTime transactionDateTime;
				/**
				 * Type of invoice transfer.
				 */
				IEC61970::Base::Domain::String transferType;

			};

		}

	}

}
#endif // ERPINVOICE_H
