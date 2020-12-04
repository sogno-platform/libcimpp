///////////////////////////////////////////////////////////
//  ErpBOM.h
//  Implementation of the Class ErpBOM
///////////////////////////////////////////////////////////

#ifndef ERPBOM_H
#define ERPBOM_H

#include "IEC61968/InfIEC61968/InfERPSupport/ErpDocument.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Information that generally describes the Bill of Material Structure and its
			 * contents for a utility.
			 * 
			 * This is used by ERP systems to transfer Bill of Material information between
			 * two business applications.
			 */
			class ErpBOM : public IEC61968::InfIEC61968::InfERPSupport::ErpDocument
			{

			public:
				ErpBOM();
				virtual ~ErpBOM();

			};

		}

	}

}
#endif // ERPBOM_H
