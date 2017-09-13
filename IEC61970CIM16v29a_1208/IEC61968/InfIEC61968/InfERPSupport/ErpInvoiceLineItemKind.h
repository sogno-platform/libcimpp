///////////////////////////////////////////////////////////
//  ErpInvoiceLineItemKind.h
//  Implementation of the Class ErpInvoiceLineItemKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ERPINVOICELINEITEMKIND_H
#define ERPINVOICELINEITEMKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Kind of invoice line item.
			 */
			enum class ErpInvoiceLineItemKind
			{
				initial,
				recalculation,
				other
			};

		}

	}

}
#endif // ERPINVOICELINEITEMKIND_H
