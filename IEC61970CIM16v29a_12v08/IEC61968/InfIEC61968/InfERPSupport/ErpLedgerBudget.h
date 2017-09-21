///////////////////////////////////////////////////////////
//  ErpLedgerBudget.h
//  Implementation of the Class ErpLedgerBudget
///////////////////////////////////////////////////////////

#ifndef ERPLEDGERBUDGET_H
#define ERPLEDGERBUDGET_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Information for utility Ledger Budgets. They support the transfer budget
			 * amounts between all possible source applications throughout an enterprise and a
			 * general ledger or budget application.
			 */
			class ErpLedgerBudget : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpLedgerBudget();
				virtual ~ErpLedgerBudget();

			};

		}

	}

}
#endif // ERPLEDGERBUDGET_H
