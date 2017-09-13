///////////////////////////////////////////////////////////
//  ErpTimeEntry.h
//  Implementation of the Class ErpTimeEntry
///////////////////////////////////////////////////////////

#ifndef ERPTIMEENTRY_H
#define ERPTIMEENTRY_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpProjectAccounting.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * An individual entry on an ErpTimeSheet.
			 */
			class ErpTimeEntry : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpTimeEntry();
				virtual ~ErpTimeEntry();
				IEC61968::Common::Status status;
				IEC61968::InfIEC61968::InfERPSupport::ErpProjectAccounting *ErpProjectAccounting;

			};

		}

	}

}
#endif // ERPTIMEENTRY_H
