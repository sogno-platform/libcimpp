///////////////////////////////////////////////////////////
//  ErpLedger.h
//  Implementation of the Class ErpLedger
///////////////////////////////////////////////////////////

#ifndef ERPLEDGER_H
#define ERPLEDGER_H

#include <list>

#include "IEC61968/InfIEC61968/InfERPSupport/ErpLedgerEntry.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * In accounting transactions, a ledger is a book containing accounts to which
			 * debits and credits are posted from journals, where transactions are initially
			 * recorded. Journal entries are periodically posted to the ledger. Ledger Actual
			 * represents actual amounts by account within ledger within company or business
			 * area. Actual amounts may be generated in a source application and then loaded
			 * to a specific ledger within the enterprise general ledger or budget application.
			 */
			class ErpLedger : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpLedger();
				virtual ~ErpLedger();
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpLedgerEntry*> ErpLedgerEntries;

			};

		}

	}

}
#endif // ERPLEDGER_H
