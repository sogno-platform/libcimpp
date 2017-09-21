///////////////////////////////////////////////////////////
//  ErpProjectAccounting.h
//  Implementation of the Class ErpProjectAccounting
///////////////////////////////////////////////////////////

#ifndef ERPPROJECTACCOUNTING_H
#define ERPPROJECTACCOUNTING_H

#include <list>

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"
#include "IEC61968/InfIEC61968/InfWork/Project.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Utility Project Accounting information, used by ERP applications to enable all
			 * relevant sub-systems that submit single sided transactions to transfer
			 * information with a Project Accounting Application. This would include, but not
			 * necessarily be limited to: Accounts Payable, Accounts Receivable, Budget, Order
			 * Management, Purchasing, Time and Labor, Travel and Expense.
			 */
			class ErpProjectAccounting : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpProjectAccounting();
				virtual ~ErpProjectAccounting();
				std::list<IEC61968::InfIEC61968::InfWork::Project*> Projects;

			};

		}

	}

}
#endif // ERPPROJECTACCOUNTING_H
