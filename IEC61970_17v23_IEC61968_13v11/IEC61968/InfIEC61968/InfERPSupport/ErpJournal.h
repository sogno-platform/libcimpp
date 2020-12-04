///////////////////////////////////////////////////////////
//  ErpJournal.h
//  Implementation of the Class ErpJournal
///////////////////////////////////////////////////////////

#ifndef ERPJOURNAL_H
#define ERPJOURNAL_H

#include <list>

#include "IEC61968/InfIEC61968/InfERPSupport/ErpJournalEntry.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Book for recording accounting transactions as they occur. Transactions and
			 * adjustments are first recorded in a journal, which is like a diary of
			 * instructions, advising which account to be charged and by how much.
			 * A journal represents a change in the balances of a business's financial
			 * accounts. Many tasks or transactions throughout an enterprise will result in
			 * the creation of a journal. Some examples are creating a customer invoice,
			 * paying a vendor, transferring inventory, or paying employees.
			 */
			class ErpJournal : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpJournal();
				virtual ~ErpJournal();
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpJournalEntry*> ErpJournalEntries;

			};

		}

	}

}
#endif // ERPJOURNAL_H
