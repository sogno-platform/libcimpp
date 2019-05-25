///////////////////////////////////////////////////////////
//  ErpPayable.h
//  Implementation of the Class ErpPayable
///////////////////////////////////////////////////////////

#ifndef ERPPAYABLE_H
#define ERPPAYABLE_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * A transaction that represents an invoice from a supplier. A payable (or
			 * voucher) is an open item, approved and ready for payment, in the Accounts
			 * Payable ledger.
			 */
			class ErpPayable : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpPayable();
				virtual ~ErpPayable();

			};

		}

	}

}
#endif // ERPPAYABLE_H
