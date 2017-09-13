///////////////////////////////////////////////////////////
//  ErpPersonnel.h
//  Implementation of the Class ErpPersonnel
///////////////////////////////////////////////////////////

#ifndef ERPPERSONNEL_H
#define ERPPERSONNEL_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Information that applies to the basic data about a utility person, used by ERP
			 * applications to transfer Personnel data for a worker.
			 */
			class ErpPersonnel : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpPersonnel();
				virtual ~ErpPersonnel();
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // ERPPERSONNEL_H
