///////////////////////////////////////////////////////////
//  ErpInvoiceKind.h
//  Implementation of the Class ErpInvoiceKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ERPINVOICEKIND_H
#define ERPINVOICEKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Kind of ERP invoice.
			 */
			enum class ErpInvoiceKind
			{
				sale,
				purchase
			};

		}

	}

}
#endif // ERPINVOICEKIND_H
