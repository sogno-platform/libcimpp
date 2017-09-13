///////////////////////////////////////////////////////////
//  ErpChartOfAccounts.h
//  Implementation of the Class ErpChartOfAccounts
///////////////////////////////////////////////////////////

#ifndef ERPCHARTOFACCOUNTS_H
#define ERPCHARTOFACCOUNTS_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Accounting structure of a business. Each account represents a financial aspect
			 * of a business, such as its Accounts Payable, or the value of its inventory, or
			 * its office supply expenses.
			 */
			class ErpChartOfAccounts : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpChartOfAccounts();
				virtual ~ErpChartOfAccounts();

			};

		}

	}

}
#endif // ERPCHARTOFACCOUNTS_H
