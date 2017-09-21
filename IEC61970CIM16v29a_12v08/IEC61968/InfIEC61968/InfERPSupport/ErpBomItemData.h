///////////////////////////////////////////////////////////
//  ErpBomItemData.h
//  Implementation of the Class ErpBomItemData
///////////////////////////////////////////////////////////

#ifndef ERPBOMITEMDATA_H
#define ERPBOMITEMDATA_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpIdentifiedObject.h"
#include "IEC61968/InfIEC61968/InfERPSupport/ErpBOM.h"
#include "IEC61968/InfIEC61968/InfWork/DesignLocation.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * An individual item on a bill of materials.
			 */
			class ErpBomItemData : public IEC61968::InfIEC61968::InfERPSupport::ErpIdentifiedObject
			{

			public:
				ErpBomItemData();
				virtual ~ErpBomItemData();
				IEC61968::InfIEC61968::InfERPSupport::ErpBOM *ErpBOM;
				IEC61968::InfIEC61968::InfWork::DesignLocation *DesignLocation;

			};

		}

	}

}
#endif // ERPBOMITEMDATA_H
