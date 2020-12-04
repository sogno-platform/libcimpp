///////////////////////////////////////////////////////////
//  ErpSiteLevelData.h
//  Implementation of the Class ErpSiteLevelData
///////////////////////////////////////////////////////////

#ifndef ERPSITELEVELDATA_H
#define ERPSITELEVELDATA_H

#include "IEC61968/Common/Status.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * For a utility, general information that describes physical locations of
			 * organizations or the location codes and their meanings. This enables ERP
			 * applications to ensure that the physical location identifiers are synchronized
			 * between the business applications.
			 */
			class ErpSiteLevelData : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpSiteLevelData();
				virtual ~ErpSiteLevelData();
				IEC61968::Common::Status status;

			};

		}

	}

}
#endif // ERPSITELEVELDATA_H
