///////////////////////////////////////////////////////////
//  ErpTimeSheet.h
//  Implementation of the Class ErpTimeSheet
///////////////////////////////////////////////////////////

#ifndef ERPTIMESHEET_H
#define ERPTIMESHEET_H

#include <list>

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpTimeEntry.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Time sheet for employees and contractors. Note that ErpTimeSheet inherits the
			 * relationship to ErpPerson from Document.
			 */
			class ErpTimeSheet : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpTimeSheet();
				virtual ~ErpTimeSheet();
				std::list<IEC61968::InfIEC61968::InfERPSupport::ErpTimeEntry*> ErpTimeEntries;

			};

		}

	}

}
#endif // ERPTIMESHEET_H
